/*
 * amiga_music.c - Plays the music of the Amiga version of Dogs of War with the game's own sound driver.
 *
 * The driver (a 4-voice sequencer with envelopes, vibrato and portamento) is translated from the 68000 to C (dwam_*.c,
 * generated like the Atari code) and runs here on a 512 KB Amiga memory holding the player's own sound data, which
 * amiga_disk.c reads from their disk file at run time: no song and no sample is part of the program. The driver talks
 * to the sound chip through its registers; the little Paula emulation below (4 DMA voices: sample pointer and length,
 * period, volume) turns that into audio. The driver's step is called at the rate of the CIA timer the game used for it
 * (about 50.4 Hz) and the audio is produced in step with it, so the host only asks for frames.
 */
#include "../host/amiga_music.h"
#include "../port/port.h"
#include "amiga_disk.h"
#include "cpu.h"
#include "dwam.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dwam_dispatch(uint32_t pc);
void host_log_file(const char *fmt, ...); /* host/util.c: the log file only */

#define AM_BASE       0x51762u /* where the game loads the driver */
#define AM_STACK      0x7F000u
#define AM_SENT       0xDEAD00u
#define AM_PLAYING    (AM_BASE + 0x62C) /* the driver's "playing" flag */
#define PAULA_CLK     3546895.0         /* Paula's clock (PAL) */
#define TICK_CIA_CLK  709379.0          /* CIA clock (PAL) */
#define TICK_CIA_DIV  14081.0           /* CIA-A timer B: latch $3700 + 1, set by the game for the driver's step */
#define NO_FILTER_BIT 2                 /* CIA-A port A bit 1: 0 = the A500 low-pass filter is on */

uint8_t *amem;

/* ---------------------------------------------------------------------------------------------- Paula */
typedef struct {
    uint32_t lc, ptr; /* AUDxLC and the address of the next word */
    uint16_t len, cnt, per, vol;
    int on;
    int bytepos; /* 1: next byte is the high one of a new word */
    uint16_t word;
    int per_cnt; /* Paula clocks left for the next byte */
    int8_t out;
} Chan;
static Chan ch[4];
static uint16_t dmacon;
static uint8_t cia_pra;
static double acc, tick_left;
static float lp[2];
static int g_fs = 44100, g_ready;
static uint8_t block[AMIGA_BLOCK_SIZE];

/* development only: DOW_AMLOG=1 logs what the engine is told and a sample of its voices */
static int am_log(void) {
    static int on = -1;
    if (on < 0)
        on = getenv("DOW_AMLOG") != NULL;
    return on;
}

uint32_t am_io_read(uint32_t a, int size) {
    a &= 0xFFFFFFu;
    if (a == 0xBFE001u)
        return cia_pra;
    if (a >= 0xDFF000u && a < 0xE00000u) {
        uint32_t o = a & 0x1FE, r = o == 0x002 ? (uint32_t)(dmacon & 0x3FF) : 0;
        return size == 1 ? ((a & 1) ? (r & 0xFF) : (r >> 8)) : r;
    }
    return 0;
}

static void reg_write16(uint32_t o, uint32_t v) {
    v &= 0xFFFF;
    if (o >= 0x0A0 && o < 0x0E0) {
        Chan *c = &ch[(o - 0x0A0) >> 4];
        switch (o & 0xF) {
            case 0x0:
                c->lc = (c->lc & 0x0000FFFFu) | ((v & 0x7) << 16);
                break;
            case 0x2:
                c->lc = (c->lc & 0xFFFF0000u) | (v & 0xFFFE);
                break;
            case 0x4:
                c->len = (uint16_t)v;
                break;
            case 0x6:
                c->per = (uint16_t)v;
                break;
            case 0x8:
                c->vol = (uint16_t)(v & 0x7F);
                break;
        }
        return;
    }
    if (o == 0x096) { /* DMACON: bit 15 sets / clears */
        uint16_t old = dmacon;
        if (v & 0x8000)
            dmacon |= (uint16_t)(v & 0x7FFF);
        else
            dmacon &= (uint16_t)~(v & 0x7FFF);
        for (int n = 0; n < 4; n++) {
            int was = (old & 0x200) && (old & (1 << n)), now = (dmacon & 0x200) && (dmacon & (1 << n));
            Chan *c = &ch[n];
            if (now && !was) {
                c->on = 1;
                c->ptr = c->lc;
                c->cnt = c->len;
                c->per_cnt = 1;
                c->bytepos = 1;
            }
            if (!now && was) {
                c->on = 0;
                c->out = 0;
            }
        }
    }
}

void am_io_write(uint32_t a, int size, uint32_t v) {
    a &= 0xFFFFFFu;
    if (a == 0xBFE001u) {
        cia_pra = (uint8_t)v;
        return;
    }
    if (a < 0xDFF000u || a >= 0xE00000u)
        return;
    uint32_t o = a & 0x1FE;
    if (size == 4) {
        reg_write16(o, v >> 16);
        reg_write16(o + 2, v & 0xFFFF);
    } else if (size == 2)
        reg_write16(o, v);
    else
        reg_write16(o, (a & 1) ? (v & 0xFF) : ((v & 0xFF) << 8));
}

/* one more word of a voice: the pointer is reloaded from AUDxLC / AUDxLEN when the block ends (this is how the
 * driver makes a sample loop: it rewrites those registers just after the DMA has latched the first block) */
static void fetch_word(Chan *c) {
    c->word = (uint16_t)((amem[c->ptr & (RAMSZ - 1)] << 8) | amem[(c->ptr + 1) & (RAMSZ - 1)]);
    c->ptr += 2;
    if (c->cnt > 0)
        c->cnt--;
    if (c->cnt == 0) {
        c->ptr = c->lc;
        c->cnt = c->len;
    }
}

static void paula_clock(void) {
    for (int n = 0; n < 4; n++) {
        Chan *c = &ch[n];
        if (!c->on || --c->per_cnt > 0)
            continue;
        c->per_cnt = c->per < 113 ? 113 : c->per; /* the hardware cannot go faster than 113 clocks per byte */
        if (c->bytepos == 1) {
            fetch_word(c);
            c->bytepos = 0;
            c->out = (int8_t)(c->word >> 8);
        } else {
            c->bytepos = 1;
            c->out = (int8_t)(c->word & 0xFF);
        }
    }
}

/* ---------------------------------------------------------------------------------------------- running the driver */
typedef struct {
    uint32_t d[8], a[8];
    uint8_t fx, fn, fz, fv, fc;
    uint32_t sr_sys, other_sp, resume_pc, ret_addr;
} Ctx;
static void ctx_save(Ctx *x) {
    x->d[0] = d0, x->d[1] = d1, x->d[2] = d2, x->d[3] = d3, x->d[4] = d4, x->d[5] = d5, x->d[6] = d6, x->d[7] = d7;
    x->a[0] = a0, x->a[1] = a1, x->a[2] = a2, x->a[3] = a3, x->a[4] = a4, x->a[5] = a5, x->a[6] = a6, x->a[7] = a7;
    x->fx = fx, x->fn = fn, x->fz = fz, x->fv = fv, x->fc = fc;
    x->sr_sys = sr_sys, x->other_sp = other_sp, x->resume_pc = resume_pc, x->ret_addr = ret_addr;
}
static void ctx_load(const Ctx *x) {
    d0 = x->d[0], d1 = x->d[1], d2 = x->d[2], d3 = x->d[3], d4 = x->d[4], d5 = x->d[5], d6 = x->d[6], d7 = x->d[7];
    a0 = x->a[0], a1 = x->a[1], a2 = x->a[2], a3 = x->a[3], a4 = x->a[4], a5 = x->a[5], a6 = x->a[6], a7 = x->a[7];
    fx = x->fx, fn = x->fn, fz = x->fz, fv = x->fv, fc = x->fc;
    sr_sys = x->sr_sys, other_sp = x->other_sp, resume_pc = x->resume_pc, ret_addr = x->ret_addr;
}

void am_call_dynamic(uint32_t pc) {
    if (!dwam_dispatch(pc & 0xFFFFFFu)) {
        static int warned;
        if (!warned++)
            fprintf(stderr, "Amiga music: jump to code that was not translated: %06X\n", (unsigned)(pc & 0xFFFFFFu));
    }
}
void am_rte_return(void) {
    uint32_t sr = rd16(a7);
    ret_addr = rd32(a7 + 2);
    a7 += 6;
    set_sr(sr);
}
void cpu_trap_zerodiv(void) {}
void cpu_trap_chk(void) {}
void cpu_trap_v(void) {}

/* Runs a routine of the driver as a subroutine with d0 = arg. The Atari core's registers are put back afterwards. */
static void am_call(void (*fn_)(void), uint32_t arg) {
    Ctx save;
    ctx_save(&save);
    sr_sys = 0x2000;
    resume_pc = 0;
    a7 = AM_STACK;
    d0 = arg;
    a7 -= 4;
    wr32(a7, AM_SENT); /* return address: where the call ends */
    fn_();
    ctx_load(&save);
}

/* ---------------------------------------------------------------------------------------------- find / open */
typedef struct {
    const char *dir;
    char *path;
    size_t n;
    int found;
} Search;
static int try_file(const char *name, void *context) {
    Search *s = (Search *)context;
    size_t l = strlen(name);
    if (l < 5 || (strcmp(name + l - 4, ".adf") && strcmp(name + l - 4, ".ADF") && strcmp(name + l - 4, ".lha") &&
                  strcmp(name + l - 4, ".LHA")))
        return 1;
    static uint8_t probe[AMIGA_BLOCK_SIZE];
    char p[1024];
    snprintf(p, sizeof p, "%s/%s", s->dir, name);
    if (!amiga_disk_block(p, probe))
        return 1;
    snprintf(s->path, s->n, "%s", p);
    s->found = 1;
    return 0;
}

int amiga_music_find(const char *dir, char *path, size_t n) {
    static char cached_dir[1024], cached_path[1024];
    static int cached_ok = 0;
    if (!dir || !dir[0])
        return 0;
    if (!cached_ok || strcmp(cached_dir, dir)) { /* only a found disk is remembered: one may be added later */
        Search s = {dir, cached_path, sizeof cached_path, 0};
        cached_path[0] = 0;
        port_list_files(dir, NULL, try_file, &s);
        snprintf(cached_dir, sizeof cached_dir, "%s", dir);
        cached_ok = s.found;
    }
    if (cached_ok)
        snprintf(path, n, "%s", cached_path);
    return cached_ok;
}

int amiga_music_open(const char *path, int fs) {
    if (g_ready)
        return 1;
    if (!amiga_disk_block(path, block))
        return 0;
    amem = (uint8_t *)calloc(RAMSZ, 1);
    if (!amem)
        return 0;
    memcpy(amem + AM_BASE, block, AMIGA_BLOCK_SIZE);
    g_fs = fs > 0 ? fs : 44100;
    memset(ch, 0, sizeof ch);
    dmacon = 0;
    cia_pra = 0;
    acc = 0;
    tick_left = 0;
    lp[0] = lp[1] = 0;
    g_ready = 1;
    return 1;
}

int amiga_music_ready(void) {
    return g_ready;
}

void amiga_music_play(int song) {
    if (!g_ready)
        return;
    if (am_log())
        host_log_file("Amiga music: play %d\n", song);
    if (song < 0 || song > 7)
        am_call(dwam_05177E, 0); /* stop */
    else
        am_call(dwam_051762, (uint32_t)song);
    tick_left = 0; /* the first step comes at once, as the timer's first interrupt does */
}

void amiga_music_skip(int frames) {
    if (!g_ready || frames <= 0)
        return;
    /* the driver's steps only (no audio): the song is where it would be after that long */
    const double step = (double)g_fs * TICK_CIA_DIV / TICK_CIA_CLK;
    for (long i = 0, ticks = (long)(frames / step); i < ticks && amiga_music_playing(); i++)
        am_call(dwam_051770, 0);
    tick_left = 0;
}

int amiga_music_playing(void) {
    return g_ready && amem[AM_PLAYING] != 0;
}

/* ---------------------------------------------------------------------------------------------- audio */
void amiga_music_render(int frames, int16_t *out) {
    if (!g_ready) {
        memset(out, 0, (size_t)frames * 4);
        return;
    }
    const double per_sample = PAULA_CLK / g_fs, step = (double)g_fs * TICK_CIA_DIV / TICK_CIA_CLK;
    const float kf = (cia_pra & NO_FILTER_BIT) ? 1.0f : 1.0f - (float)exp(-2.0 * 3.14159265358979 * 4500.0 / g_fs);
    for (int i = 0; i < frames; i++) {
        if (tick_left <= 0) {
            am_call(dwam_051770, 0); /* the driver's step */
            tick_left += step;
        }
        tick_left -= 1.0;
        double sl = 0, sr = 0;
        int cnt = 0;
        acc += per_sample;
        while (acc >= 1.0) {
            acc -= 1.0;
            paula_clock();
            sl += ch[0].out * (ch[0].vol > 64 ? 64 : ch[0].vol) + ch[3].out * (ch[3].vol > 64 ? 64 : ch[3].vol);
            sr += ch[1].out * (ch[1].vol > 64 ? 64 : ch[1].vol) + ch[2].out * (ch[2].vol > 64 ? 64 : ch[2].vol);
            cnt++;
        }
        if (!cnt)
            cnt = 1;
        /* voices 0 and 3 go to the left channel, 1 and 2 to the right; two voices of full scale make 1.0 */
        float l = (float)(sl / cnt / (128.0 * 64.0)) * 0.5f, r = (float)(sr / cnt / (128.0 * 64.0)) * 0.5f;
        lp[0] += kf * (l - lp[0]);
        lp[1] += kf * (r - lp[1]);
        out[2 * i] = (int16_t)(lp[0] * 32767.0f);
        out[2 * i + 1] = (int16_t)(lp[1] * 32767.0f);
    }
    if (am_log()) {
        static int calls;
        if (++calls % 100 == 1)
            host_log_file(
                "Amiga music: render %d frames, playing=%d, last %d, ch vol %d %d %d %d per %d %d %d %d dma %04X\n",
                frames, (int)amiga_music_playing(), out[2 * frames - 2], ch[0].vol, ch[1].vol, ch[2].vol, ch[3].vol,
                ch[0].per, ch[1].per, ch[2].per, ch[3].per, dmacon);
    }
}
