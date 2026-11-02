/*
 * mp3.c - Optional MP3 music: decodes mp3 / ogg / wav with only free libraries compiled into the program (minimp3,
 * stb_vorbis and a small WAV reader) to 16-bit stereo 44100 Hz PCM, trims the digital silence at the ends and reads it
 * in a gapless ring. The files are looked up in the `music` folder next to the program.
 *
 * This file is platform independent: it uses stdlib only plus port.h (mutex + threads). The Windows formats .wma and
 * .m4a of the Media Foundation version are gone: they needed Windows codecs and are not free formats.
 */
#include "audio.h"
#include "port.h"
#include <ctype.h>
#define MINIMP3_IMPLEMENTATION
#include "minimp3.h"

/* stb_vorbis.c is compiled separately (see build.ps1): its definition of get_bits and the internal macros A, B, C, D
 * collide with minimp3's if both were included here. */
int stb_vorbis_decode_memory(const unsigned char *mem, int len, int *channels, int *sample_rate, short **output);

#define NSONG 16
typedef struct Music {
    char dir[500];
    /* 0 = not requested, 1 = decoding, 2 = ready, 3 = unreadable */
    int state[NSONG];
    int16_t *pcm[NSONG];
    int frames[NSONG];
    int lp_start[NSONG], lp_back[NSONG]; /* loop points (frames of the decoded audio) or -1 */
    /* generation of the folder: when the music pack changes, whatever was being decoded from the previous one is
     * discarded */
    int prefetching;
    int gen;
    PortMutex *cs;
} Music;

static const char *EXTS[] = {".mp3", ".ogg", ".wav", NULL};
/* names of the files in the "music" folder */
static void song_name(int n, char *out, size_t k) {
    static const char *const NAMES[8] = {"mission", "map", NULL, "bonus", NULL, "highscores", "endlevel", "fail"};
    if (n >= 0 && n < 8 && NAMES[n])
        snprintf(out, k, "%s", NAMES[n]);
    else
        snprintf(out, k, "song%d", n);
}
/* The file of song n in the music folder: tries the song's name with the audio extensions (mp3, ogg, wav),
 * case-insensitively. */
static int find_path(const char *dir, int n, char *out, size_t k) {
    char nm[40];
    song_name(n, nm, sizeof nm);
    for (int i = 0; EXTS[i]; i++) {
        char p[600];
        snprintf(p, sizeof p, "%s/%s%s", dir, nm, EXTS[i]);
        if (file_exists(p)) {
            snprintf(out, k, "%s", p);
            return 1;
        }
    }
    return 0;
}

/* Creates the music bank for a folder. */
Music *music_new(const char *folder) {
    Music *m = (Music *)calloc(1, sizeof(Music));
    snprintf(m->dir, sizeof m->dir, "%s", folder);
    m->cs = port_mutex_new();
    for (int i = 0; i < NSONG; i++)
        m->lp_start[i] = m->lp_back[i] = -1;
    return m;
}

/* ---- decoding ---- */
typedef struct {
    int16_t *pcm; /* interleaved L R, *frames frames whatever their rate */
    int frames;
    int hz;
    int ch;
} Decoded;

static void decoded_free(Decoded *d) {
    free(d->pcm);
    d->pcm = NULL;
    d->frames = 0;
}

/* cubic Hermite resample of interleaved `ch`-channel audio from `hz` to 44100 Hz (the game's rate) */
static int16_t *resample_to_fs(const int16_t *src, int fr, int ch, int hz, int *out_fr) {
    if (!src || fr <= 0 || ch <= 0)
        return NULL;
    if (hz == AUDIO_FS && ch == 2) {
        *out_fr = fr;
        return NULL; /* there is nothing to convert */
    }
    double step = (double)hz / AUDIO_FS; /* how many source frames per output frame */
    int ofr = (int)((double)fr / step + 0.5);
    if (ofr < 1)
        return NULL;
    int16_t *out = (int16_t *)malloc((size_t)ofr * 2 * 2);
    if (!out)
        return NULL;
    for (int i = 0; i < ofr; i++) {
        double pos = (double)i * step;
        int b0 = (int)pos;
        double t = pos - b0;
        int A = b0 - 1, B = b0, C = b0 + 1, D = b0 + 2;
        if (A < 0)
            A = 0;
        if (C > fr - 1)
            C = fr - 1;
        if (D > fr - 1)
            D = fr - 1;
        for (int k = 0; k < 2; k++) {
            int c = k < ch ? k : ch - 1; /* mono goes to both channels */
            const int16_t *s = src;
            double a0 = s[(size_t)A * ch + c], a1 = s[(size_t)B * ch + c], a2 = s[(size_t)C * ch + c],
                   a3 = s[(size_t)D * ch + c];
            double t2 = t * t, t3 = t2 * t;
            double m1 = (a2 - a0) * 0.5, m2 = (a3 - a1) * 0.5;
            /* Hermite: h00 a1 + h10 m1 + h01 a2 + h11 m2 */
            double v = (2 * t3 - 3 * t2 + 1) * a1 + (t3 - 2 * t2 + t) * m1 + (-2 * t3 + 3 * t2) * a2 + (t3 - t2) * m2;
            if (v > 32767)
                v = 32767;
            if (v < -32768)
                v = -32768;
            out[(size_t)i * 2 + k] = (int16_t)lrint(v);
        }
    }
    *out_fr = ofr;
    return out;
}

/* skips an ID3v2 tag at the start of the file (minimp3 reads the frames right after it) */
static size_t id3v2_skip(const uint8_t *p, size_t n) {
    if (n < 10 || p[0] != 'I' || p[1] != 'D' || p[2] != '3')
        return 0;
    size_t sz = ((size_t)(p[6] & 0x7F) << 21) | ((size_t)(p[7] & 0x7F) << 14) | ((size_t)(p[8] & 0x7F) << 7) |
                (size_t)(p[9] & 0x7F);
    sz += 10;
    if (p[5] & 0x10)
        sz += 10; /* footer */
    return sz < n ? sz : 0;
}

/* decodes an mp3 file with minimp3 (all of it, to the rate of the file) */
static int decode_mp3(const uint8_t *file, size_t n, Decoded *d) {
    mp3dec_t dec;
    mp3dec_init(&dec);
    size_t off = id3v2_skip(file, n);
    const uint8_t *p = file + off;
    size_t left = n - off;
    int cap = 1 << 18;
    size_t m = 0;
    int16_t *raw = (int16_t *)malloc((size_t)cap * 2);
    int hz = 0, ch = 0;
    int frames_done = 0;
    int16_t pcm[MINIMP3_MAX_SAMPLES_PER_FRAME];
    while (left > 0) {
        mp3dec_frame_info_t info;
        int ns = mp3dec_decode_frame(&dec, p, (int)left, pcm, &info);
        if (ns <= 0 || info.frame_bytes <= 0)
            break;
        if (!hz) {
            hz = info.hz;
            ch = info.channels ? info.channels : 1;
        }
        if (info.hz <= 0 || info.frame_bytes > (int)left)
            break;
        /* minimp3 hands the frame interleaved: L R L R... (mono: one sample per frame) */
        size_t need = (size_t)ns * 2;
        if (m + need > (size_t)cap) {
            while (m + need > (size_t)cap)
                cap *= 2;
            int16_t *nw = (int16_t *)realloc(raw, (size_t)cap * 2);
            if (!nw) {
                free(raw);
                return 0;
            }
            raw = nw;
        }
        if (ch == 2) {
            memcpy(raw + m, pcm, (size_t)need * 2);
            m += need;
        } else
            for (int i = 0; i < ns; i++) {
                raw[m++] = pcm[i];
                raw[m++] = pcm[i];
            }
        p += info.frame_bytes;
        left -= (size_t)info.frame_bytes;
        frames_done += ns;
        if (frames_done > 6 * 60 * 48000)
            break; /* never more than 6 minutes at 48 kHz: a corrupt file cannot run forever */
    }
    d->pcm = raw;
    d->frames = (int)m / 2;
    d->hz = hz;
    d->ch = 2;
    return raw && frames_done > 0 && hz > 0;
}

/* decodes an ogg / vorbis file with stb_vorbis */
static int decode_ogg(const uint8_t *file, size_t n, Decoded *d) {
    int ch = 0, hz = 0;
    short *out = NULL;
    int fr = stb_vorbis_decode_memory((const unsigned char *)file, (int)n, &ch, &hz, &out);
    if (fr <= 0 || !out)
        return 0;
    d->pcm = out; /* int16_t == short */
    d->frames = fr;
    d->hz = hz;
    d->ch = ch > 0 ? ch : 1;
    return 1;
} /* reads a PCM WAV (8/16/24 bits or 32-bit float), interleaved */
static int decode_wav(const uint8_t *f, size_t n, Decoded *d) {
    if (n < 12 || memcmp(f, "RIFF", 4) || memcmp(f + 8, "WAVE", 4))
        return 0;
    size_t p = 12;
    int hz = 0, ch = 0, bits = 0, isfloat = 0;
    const uint8_t *data = NULL;
    size_t dlen = 0;
    while (p + 8 <= n) {
        const uint8_t *id = f + p;
        uint32_t len =
            (uint32_t)f[p + 4] | ((uint32_t)f[p + 5] << 8) | ((uint32_t)f[p + 6] << 16) | ((uint32_t)f[p + 7] << 24);
        const uint8_t *body = f + p + 8;
        size_t room = n - (p + 8);
        if (len > room)
            len = (uint32_t)room;
        if (!memcmp(id, "fmt ", 4) && len >= 16) {
            unsigned fmt = body[0] | (body[1] << 8);
            ch = (unsigned)body[2] | (body[3] << 8);
            hz = (unsigned)body[4] | (body[5] << 8) | (body[6] << 16) | (body[7] << 24);
            bits = (unsigned)body[14] | (body[15] << 8);
            isfloat = fmt == 3 || (fmt == 0xFFFE && bits == 32 && len >= 40);
        } else if (!memcmp(id, "data", 4)) {
            data = body;
            dlen = len;
        }
        p += 8 + len + (len & 1); /* the chunks are word aligned */
    }
    if (!data || hz <= 0 || ch <= 0 || bits <= 0)
        return 0;
    int step = bits / 8 * ch;
    int fr = (int)(dlen / (size_t)step);
    if (fr <= 0)
        return 0;
    int16_t *raw = (int16_t *)malloc((size_t)fr * 2 * 2);
    if (!raw)
        return 0;
    for (int i = 0; i < fr; i++)
        for (int k = 0; k < 2; k++) {
            const uint8_t *s = data + (size_t)i * step + (k < ch ? k : ch - 1) * (bits / 8);
            double v = 0;
            if (isfloat)
                v = *(const float *)s * 32767.0;
            else if (bits == 8)
                v = ((int)s[0] - 128) * 256; /* 8-bit WAV is unsigned */
            else if (bits == 16)
                v = (int16_t)((unsigned)s[0] | ((unsigned)s[1] << 8));
            else {
                uint32_t q = (uint32_t)s[0] | ((uint32_t)s[1] << 8) | ((uint32_t)s[2] << 16);
                if (q & 0x800000)
                    q |= 0xFF000000u;
                v = (double)(int32_t)q / 256.0;
            }
            if (v > 32767)
                v = 32767;
            if (v < -32768)
                v = -32768;
            raw[(size_t)i * 2 + k] = (int16_t)lrint(v);
        }
    d->pcm = raw;
    d->frames = fr;
    d->hz = hz;
    d->ch = 2;
    return 1;
}

/* Decodes an audio file to 16-bit stereo 44100 Hz PCM; trims the digital silence at the ends (`head` frames at the
 * start are recorded so the loop points can be corrected) and tells the sample rate of the *file*. */
static int16_t *decode_file(const char *path, int *frames, int *head, int *rate) {
    size_t n = 0;
    uint8_t *file = read_file(path, &n);
    if (!file || n < 16) {
        free(file);
        return NULL;
    }
    Decoded raw = {0};
    int ok = 0;
    /* by the magic of the file; if there is none (e.g. mp3 without an ID3 at the very start has sync bytes), mp3 */
    if (n >= 4 && !memcmp(file, "OggS", 4))
        ok = decode_ogg(file, n, &raw);
    else if (n >= 12 && !memcmp(file, "RIFF", 4) && !memcmp(file + 8, "WAVE", 4))
        ok = decode_wav(file, n, &raw);
    if (!ok)
        ok = decode_mp3(file, n, &raw);
    if (!ok && memcmp(file, "OggS", 4))
        ok = decode_ogg(file, n, &raw);
    free(file);
    if (!ok) {
        decoded_free(&raw);
        return NULL;
    }
    /* to 44100 Hz stereo */
    int hz = raw.hz > 0 ? raw.hz : 44100;
    int ofr = 0;
    int16_t *fs = resample_to_fs(raw.pcm, raw.frames, raw.ch, hz, &ofr);
    int16_t *buf;
    if (fs) {
        buf = fs;
        raw.pcm = NULL; /* the resampled buffer takes over */
    } else if (hz == AUDIO_FS && raw.ch == 2) {
        buf = raw.pcm;
        raw.pcm = NULL;
        ofr = raw.frames;
    } else {
        /* decoded to another rate but not resampleable: drop */
        decoded_free(&raw);
        return NULL;
    }
    decoded_free(&raw);
    /* trims the digital silence at the ends (|x| <= 24) */
    int a = 0, b = ofr - 1;
    while (a < ofr && abs(buf[a * 2]) <= 24 && abs(buf[a * 2 + 1]) <= 24)
        a++;
    while (b > a && abs(buf[b * 2]) <= 24 && abs(buf[b * 2 + 1]) <= 24)
        b--;
    if (a >= ofr) {
        a = 0;
        b = ofr - 1;
    }
    int len = b - a + 1;
    if (len < 1000) {
        free(buf);
        return NULL;
    }
    int16_t *out = (int16_t *)malloc((size_t)len * 4);
    if (!out) {
        free(buf);
        return NULL;
    }
    memcpy(out, buf + (size_t)a * 2, (size_t)len * 4);
    free(buf);
    *frames = len;
    *head = a;
    *rate = hz;
    return out;
}

/* <song>.txt next to the audio file:   Loop point start = "N"   and   Loop point back = "M"   (samples of the file at
   ITS OWN sample rate, 44100 Hz, 48000 Hz..., counted from the start of the file). When the playback reaches `start` it
   goes back to `back`. An empty file, or one without both numbers, leaves the song as it was (whole file in a loop). */
/* Reads the loop points of a song from a text file next to it (loop start and where it jumps back), if there is one. */
static void read_loop_points(const char *audio_path, int head, int frames, int rate, int *ls, int *lb) {
    char tp[640];
    snprintf(tp, sizeof tp, "%s", audio_path);
    char *dot = strrchr(tp, '.');
    if (!dot)
        return;
    strcpy(dot, ".txt");
    size_t n = 0;
    char *t = (char *)read_file(tp, &n);
    *ls = *lb = -1;
    if (!t)
        return;
    char *txt = (char *)malloc(n + 1);
    memcpy(txt, t, n);
    txt[n] = 0;
    free(t);
    long long st = -1, bk = -1;
    for (char *line = strtok(txt, "\r\n"); line; line = strtok(NULL, "\r\n")) {
        char low[200];
        size_t k = 0;
        for (; line[k] && k < sizeof low - 1; k++)
            low[k] = (char)tolower((unsigned char)line[k]);
        low[k] = 0;
        long long *dst = strstr(low, "loop point start") ? &st : strstr(low, "loop point back") ? &bk : NULL;
        if (!dst)
            continue;
        const char *eq = strchr(line, '=');
        if (!eq)
            continue;
        eq++;
        while (*eq == ' ' || *eq == '\t' || *eq == '"')
            eq++;
        if (*eq >= '0' && *eq <= '9')
            *dst = strtoll(eq, NULL, 10);
    }
    free(txt);
    if (st < 0 || bk < 0)
        return;
    /* the audio is decoded at 44100 Hz */
    if (rate != 44100) {
        st = (st * 44100 + rate / 2) / rate;
        bk = (bk * 44100 + rate / 2) / rate;
    }
    /* the digital silence trimmed at the start is not part of the decoded buffer */
    st -= head;
    bk -= head;
    if (bk < 0 || st <= bk || st > frames) {
        host_log("Music: loop points of %s are outside the song (start %lld, back %lld, length %d): ignored", tp,
                 st + head, bk + head, frames + head);
        return;
    }
    *ls = (int)st;
    *lb = (int)bk;
}
/* called with the lock held */
static void store_song(Music *m, int n, int16_t *pcm, int fr, const char *path, int head, int rate) {
    m->pcm[n] = pcm;
    m->frames[n] = fr;
    m->state[n] = 2;
    read_loop_points(path, head, fr, rate, &m->lp_start[n], &m->lp_back[n]);
}

/* Thread that loads one song. */
static void *load_thread(void *arg) {
    Music *m = ((void **)arg)[0];
    int n = (int)(intptr_t)((void **)arg)[1];
    free(arg);
    char p[600], dir[500];
    port_mutex_lock(m->cs);
    int gen = m->gen;
    snprintf(dir, sizeof dir, "%s", m->dir);
    port_mutex_unlock(m->cs);
    if (!find_path(dir, n, p, sizeof p)) {
        port_mutex_lock(m->cs);
        if (gen == m->gen)
            m->state[n] = 3;
        port_mutex_unlock(m->cs);
        return 0;
    }
    int fr = 0, head = 0, rate = 44100;
    int16_t *pcm = decode_file(p, &fr, &head, &rate);
    port_mutex_lock(m->cs);
    /* the music pack was changed while decoding */
    if (gen != m->gen)
        free(pcm);
    else if (pcm)
        store_song(m, n, pcm, fr, p, head, rate);
    else {
        host_log("Music: cannot decode %s", p);
        m->state[n] = 3;
    }
    port_mutex_unlock(m->cs);
    return 0;
}
/* Thread that loads every song in the order they are most likely to be needed (mission, map, end of level, bonus...).
 */
static void *prefetch_thread(void *arg) {
    Music *m = (Music *)arg;
    static const int order[] = {0, 1, 6, 3, 7, 5, 2, 4, 8, 9, 10, 11};
    port_mutex_lock(m->cs);
    int gen = m->gen;
    port_mutex_unlock(m->cs);
    for (int i = 0; i < 12; i++) {
        int n = order[i];
        char p[600], dir[500];
        port_mutex_lock(m->cs);
        if (gen != m->gen) {
            port_mutex_unlock(m->cs);
            break;
        }
        int state = m->state[n];
        snprintf(dir, sizeof dir, "%s", m->dir);
        port_mutex_unlock(m->cs);
        if (state != 0 || !find_path(dir, n, p, sizeof p))
            continue;
        port_mutex_lock(m->cs);
        if (gen != m->gen || m->state[n] != 0) {
            port_mutex_unlock(m->cs);
            continue;
        }
        m->state[n] = 1;
        port_mutex_unlock(m->cs);
        int fr = 0, head = 0, rate = 44100;
        int16_t *pcm = decode_file(p, &fr, &head, &rate);
        port_mutex_lock(m->cs);
        if (gen != m->gen)
            free(pcm);
        else if (pcm)
            store_song(m, n, pcm, fr, p, head, rate);
        else {
            host_log("Music: cannot decode %s", p);
            m->state[n] = 3;
        }
        port_mutex_unlock(m->cs);
    }
    port_mutex_lock(m->cs);
    if (gen == m->gen)
        m->prefetching = 0;
    port_mutex_unlock(m->cs);
    return 0;
}
/* Starts loading song n if it has not been asked for and its file exists. */
static void request(Music *m, int n) {
    char p[600], dir[500];
    port_mutex_lock(m->cs);
    int state = m->state[n];
    int gen = m->gen;
    snprintf(dir, sizeof dir, "%s", m->dir);
    port_mutex_unlock(m->cs);
    if (state != 0 || !find_path(dir, n, p, sizeof p))
        return;
    port_mutex_lock(m->cs);
    int go = gen == m->gen && m->state[n] == 0;
    if (go)
        m->state[n] = 1;
    port_mutex_unlock(m->cs);
    if (!go)
        return;
    void **a = (void **)malloc(2 * sizeof(void *));
    if (!a) {
        port_mutex_lock(m->cs);
        if (m->gen == gen && m->state[n] == 1)
            m->state[n] = 3;
        port_mutex_unlock(m->cs);
        host_log("Music: cannot allocate a loader for %s", p);
        return;
    }
    a[0] = m;
    a[1] = (void *)(intptr_t)n;
    if (!port_thread_start(load_thread, a, NULL)) {
        free(a);
        port_mutex_lock(m->cs);
        if (m->gen == gen && m->state[n] == 1)
            m->state[n] = 3;
        port_mutex_unlock(m->cs);
        host_log("Music: cannot start a loader for %s", p);
    }
}
void music_prefetch(Music *m) {
    port_mutex_lock(m->cs);
    int go = !m->prefetching;
    int gen = m->gen;
    m->prefetching = 1;
    port_mutex_unlock(m->cs);
    if (go && !port_thread_start(prefetch_thread, m, NULL)) {
        port_mutex_lock(m->cs);
        if (m->gen == gen)
            m->prefetching = 0;
        port_mutex_unlock(m->cs);
        host_log("Music: cannot start prefetching");
    }
}

/* switches the music pack: what was already decoded is freed (only from the thread that plays) */
void music_set_dir(Music *m, const char *folder) {
    port_mutex_lock(m->cs);
    snprintf(m->dir, sizeof m->dir, "%s", folder);
    m->gen++;
    m->prefetching = 0;
    for (int i = 0; i < NSONG; i++) {
        free(m->pcm[i]);
        m->pcm[i] = NULL;
        m->frames[i] = 0;
        m->state[i] = 0;
        m->lp_start[i] = m->lp_back[i] = -1;
    }
    port_mutex_unlock(m->cs);
}

const int16_t *music_get(Music *m, int n, int *frames) {
    if (n < 0 || n >= NSONG)
        return NULL;
    port_mutex_lock(m->cs);
    int st = m->state[n];
    const int16_t *p = st == 2 ? m->pcm[n] : NULL;
    if (p && frames)
        *frames = m->frames[n];
    port_mutex_unlock(m->cs);
    if (st == 0)
        request(m, n);
    return p;
}
int music_loop_points(Music *m, int n, int *start, int *back) {
    if (n < 0 || n >= NSONG)
        return 0;
    port_mutex_lock(m->cs);
    int ok = m->state[n] == 2 && m->lp_start[n] >= 0;
    if (ok) {
        *start = m->lp_start[n];
        *back = m->lp_back[n];
    }
    port_mutex_unlock(m->cs);
    return ok;
}
int music_pending(Music *m, int n) {
    if (n < 0 || n >= NSONG)
        return 0;
    port_mutex_lock(m->cs);
    int st = m->state[n];
    char dir[500];
    snprintf(dir, sizeof dir, "%s", m->dir);
    port_mutex_unlock(m->cs);
    if (st == 2 || st == 3)
        return 0;
    if (st == 1)
        return 1;
    char p[600];
    return find_path(dir, n, p, sizeof p);
}

/* songs 2, 3, 4, 6 and 7 end by themselves (with the driver's fade-out); the rest repeat */
int music_loops(int n) {
    return !(n == 2 || n == 3 || n == 4 || n == 6 || n == 7);
}
/* Takes n frames of a song that plays once, silence after its end. Returns 1 when the end was reached. */
int looper_take_once(Looper *l, const int16_t *a, int frames, int n, int16_t *out) {
    int p = l->pos;
    for (int i = 0; i < n; i++) {
        if (p < frames) {
            out[2 * i] = a[2 * p];
            out[2 * i + 1] = a[2 * p + 1];
            p++;
        } else {
            out[2 * i] = 0;
            out[2 * i + 1] = 0;
        }
    }
    l->pos = p;
    return p >= frames;
}
/* Takes n frames of a song that repeats from its beginning. */
void looper_take(Looper *l, const int16_t *a, int frames, int n, int16_t *out) {
    int p = l->pos % frames;
    for (int i = 0; i < n; i++) {
        out[2 * i] = a[2 * p];
        out[2 * i + 1] = a[2 * p + 1];
        if (++p >= frames)
            p = 0;
    }
    l->pos = p;
}
/* Takes n frames of a song that repeats between two loop points (an intro that plays once, then the loop). */
void looper_take_lp(Looper *l, const int16_t *a, int frames, int start, int back, int n, int16_t *out) {
    int p = l->pos;
    if (p < 0 || p >= frames)
        p = 0;
    for (int i = 0; i < n; i++) {
        if (p >= start)
            p = back + (p - start) % (start - back);
        out[2 * i] = a[2 * p];
        out[2 * i + 1] = a[2 * p + 1];
        p++;
    }
    l->pos = p;
}
