/*
 * startup.c - The screens that come before the game, drawn inside the game window with the program's own interface
 * library (ui2d), in the style of the options menu:
 *
 *   - the loading screen: which game files were found and are going to be used, and a progress bar of the start-up. It
 *     goes on by itself two seconds after loading ends, or at once when a fire button (or Enter / Space / Esc) is
 *     pressed. The option "Startup screen" of the options menu turns it off completely;
 *   - the screen that explains what to do when the game data is missing: which file goes in which folder. It cannot be
 *     turned off; it stays until the window is closed (the program then has to be started again).
 *
 * Both are overlays over a black picture: no operating-system dialog is used, so they look the same everywhere.
 */
#include "amiga_music.h"
#include "app.h"
#include "port.h"
#include "ui2d.h"

int show_startup = 1;

#define NLINES  6
#define AUTO_S  2.0 /* seconds the loading screen stays once loading is over */
#define FIRE_VK 0x10D

typedef struct {
    char label[64], value[400];
    int used, pending;
} Line;

static int active, finished, quit_asked;
static Line lines[NLINES];
static double progress, t_done;
static char detail[300];
static int pad_fire_prev[2];
static int shown_w, shown_h;
static char shown_sig[900];

/* ---------------------------------------------------------------------------------------------- drawing helpers */

/* Copies s into out cutting it (and adding "...") so that it is at most maxw pixels wide in that font. */
static void fit(Ui2dFont f, const char *s, double maxw, char *out, size_t n) {
    snprintf(out, n, "%s", s);
    if (ui2d_text_w(f, out) <= maxw)
        return;
    size_t len = strlen(out);
    while (len > 1) {
        len--;
        while (len > 0 && ((unsigned char)out[len] & 0xC0) == 0x80)
            len--;
        out[len] = 0;
        char cut[460];
        snprintf(cut, sizeof cut, "%s...", out);
        if (ui2d_text_w(f, cut) <= maxw) {
            snprintf(out, n, "%s", cut);
            return;
        }
    }
}

/* Like fit but keeps the END of the text (a folder path: its last folders matter): "...ames\Dogs of War\original". */
static void fit_tail(Ui2dFont f, const char *s, double maxw, char *out, size_t n) {
    snprintf(out, n, "%s", s);
    if (ui2d_text_w(f, out) <= maxw)
        return;
    size_t len = strlen(s), cut = 1;
    for (; cut < len; cut++) {
        while (cut < len && ((unsigned char)s[cut] & 0xC0) == 0x80)
            cut++;
        snprintf(out, n, "...%s", s + cut);
        if (ui2d_text_w(f, out) <= maxw)
            return;
    }
}

/* Words of text wrapped into lines of at most width pixels (out: up to max lines). Returns how many. */
static int wrap(Ui2dFont f, const char *text, double width, char out[][200], int max) {
    char buf[1024], cur[200] = "";
    int nl = 0;
    snprintf(buf, sizeof buf, "%s", text);
    for (char *w = strtok(buf, " "); w; w = strtok(NULL, " ")) {
        char t[260];
        snprintf(t, sizeof t, "%s%s%s", cur, cur[0] ? " " : "", w);
        if (ui2d_text_w(f, t) <= width || !cur[0])
            snprintf(cur, sizeof cur, "%s", t);
        else {
            if (nl < max)
                snprintf(out[nl++], 200, "%s", cur);
            snprintf(cur, sizeof cur, "%s", w);
        }
    }
    if (cur[0] && nl < max)
        snprintf(out[nl++], 200, "%s", cur);
    return nl;
}

/* Sizes of the texts for a canvas of that height (the options menu's) */
typedef struct {
    int fh, fhb, lh, pad;
    Ui2dFont f, fb, fsm;
} Sizes;
static Sizes sizes_for(int H) {
    Sizes s;
    int fs = H / 26;
    if (fs < 14)
        fs = 14;
    s.fh = (int)((fs + 6) * 0.80);
    s.fhb = (int)((fs + 6) * 1.08);
    s.f = ui2d_font_gdi(s.fh, 0);
    s.fb = ui2d_font_gdi(s.fhb, 1);
    s.fsm = ui2d_font_gdi((int)(s.fh * 0.82), 0);
    s.lh = ui2d_font_height(s.f) + 6;
    s.pad = s.fh;
    return s;
}

/* The dimmed picture and the panel of the menu's style, ph tall and centred. Returns the canvas. */
static Ui2d *panel(int W, int H, int pw, int ph, int *px, int *py) {
    Ui2d *u = ui2d_new(W, H);
    if (!u)
        return NULL;
    *px = (W - pw) / 2;
    *py = (H - ph) / 2;
    ui2d_rect_fill(u, 0, 0, W, H, 0, 150);
    ui2d_rrect_fill_alpha(u, *px, *py, pw, ph, 12, 0x0a0c18, 238);
    ui2d_rrect(u, *px, *py, pw, ph, 12, UI2D_NONE, 0xe6be46, 2);
    return u;
}

static void centred(Ui2d *u, Ui2dFont f, const char *s, int px, int pw, int y, long col) {
    ui2d_text_top(u, f, s, px + (pw - ui2d_text_w(f, s)) / 2, y, col);
}

static uint8_t *draw_loading(int W, int H) {
    Sizes z = sizes_for(H);
    int pw = (int)(W * 0.74), n = 0;
    for (int i = 0; i < NLINES; i++)
        n += lines[i].used;
    int bar_h = z.fh * 7 / 10 + 4;
    int ph = z.pad + ui2d_font_height(z.fb) + z.pad / 2 + n * z.lh + z.pad / 2 + bar_h + z.lh + z.lh + z.pad;
    int px, py;
    Ui2d *u = panel(W, H, pw, ph, &px, &py);
    if (!u)
        return NULL;
    int y = py + z.pad / 2 + 4;
    centred(u, z.fb, "DOGS OF WAR", px, pw, y, 0xffd75a);
    y += ui2d_font_height(z.fb) + z.pad / 2;
    double labw = 0;
    for (int i = 0; i < NLINES; i++)
        if (lines[i].used && ui2d_text_w(z.f, lines[i].label) > labw)
            labw = ui2d_text_w(z.f, lines[i].label);
    int x0 = px + z.pad, x1 = x0 + (int)labw + z.pad;
    for (int i = 0; i < NLINES; i++) {
        if (!lines[i].used)
            continue;
        char v[460];
        fit(z.f, lines[i].value, px + pw - z.pad - x1, v, sizeof v);
        ui2d_text_top(u, z.f, lines[i].label, x0, y, 0xdcc878);
        ui2d_text_top(u, z.f, lines[i].pending ? (v[0] ? v : "...") : v, x1, y, lines[i].pending ? 0x8890a8 : 0xffffff);
        y += z.lh;
    }
    y += z.pad / 2;
    /* the progress bar */
    {
        double bw = pw - 2.0 * z.pad;
        double fill = bw * (progress < 0 ? 0 : progress > 1 ? 1 : progress);
        ui2d_rrect(u, x0, y, bw, bar_h, bar_h / 2.0, 0x181c34, 0x55597a, 1.5);
        if (fill > bar_h)
            ui2d_rrect(u, x0 + 1, y + 1, fill - 2, bar_h - 2, (bar_h - 2) / 2.0, 0xe6be46, UI2D_NONE, 0);
        else if (fill > 2)
            ui2d_rrect(u, x0 + 1, y + 1, bar_h - 2, bar_h - 2, (bar_h - 2) / 2.0, 0x7a6a2a, UI2D_NONE, 0);
        char pc[16];
        snprintf(pc, sizeof pc, "%d %%", (int)(progress * 100 + 0.5));
        ui2d_text(u, z.fsm, pc, x0 + bw / 2, y + bar_h / 2.0, 0xffffff, 1);
    }
    y += bar_h + z.lh / 4;
    char d[460];
    fit(z.fsm, detail, pw - 2.0 * z.pad, d, sizeof d);
    centred(u, z.fsm, d, px, pw, y, 0x9aa0c0);
    y += z.lh;
    if (finished) {
        char t[200];
        int left = (int)(AUTO_S - (now_s() - t_done) + 0.999);
        if (left < 0)
            left = 0;
        trf(t, sizeof t, "startup.go", left);
        centred(u, z.f, t, px, pw, y, 0xe6be46);
    }
    int cw, ch;
    return ui2d_take(u, &cw, &ch);
}

static uint8_t *draw_missing_k(int W, int H, double k, int *fits) {
    Sizes z = sizes_for((int)(H * k));
    int pw = (int)(W * 0.80);
    enum { MAXL = 28 };
    char text[MAXL][200], wrapped[8][200];
    int kind[MAXL], nl = 0; /* kind: 0 blank, 1 text, 2 a file name that can be used, 3 the folder */
    double width = pw - 2.0 * z.pad;
#define ADD(k, s)                                                                                                      \
    do {                                                                                                               \
        if (nl < MAXL) {                                                                                               \
            snprintf(text[nl], 200, "%s", (s));                                                                        \
            kind[nl++] = (k);                                                                                          \
        }                                                                                                              \
    } while (0)
#define PARA(k, id)                                                                                                    \
    do {                                                                                                               \
        int cnt_ = wrap(z.f, tr(id), width - ((k) > 1 ? z.pad : 0), wrapped, 8);                                       \
        for (int j_ = 0; j_ < cnt_; j_++)                                                                              \
            ADD(k, wrapped[j_]);                                                                                       \
    } while (0)
    PARA(1, "startup.missing.1");
    ADD(0, "");
    PARA(1, "startup.missing.2");
    {
        char fixed[460], p[460];
        snprintf(fixed, sizeof fixed, "%s", original_dir_path);
#ifdef _WIN32
        for (char *c = fixed; *c; c++)
            if (*c == '/')
                *c = '\\';
#endif
        fit_tail(z.f, fixed, width - z.pad, p, sizeof p);
        ADD(3, p);
    }
    PARA(2, "startup.missing.3");
    PARA(2, "startup.missing.4");
    ADD(0, "");
    PARA(1, "startup.missing.5");
    ADD(0, "");
    PARA(1, "startup.missing.6");
#undef PARA
#undef ADD
    int ph = z.pad + ui2d_font_height(z.fb) + z.pad + nl * z.lh + z.pad;
    *fits = ph <= H * 0.95;
    if (!*fits && k > 0.5)
        return NULL;
    int px, py;
    Ui2d *u = panel(W, H, pw, ph, &px, &py);
    if (!u)
        return NULL;
    int y = py + z.pad / 2 + 4;
    centred(u, z.fb, tr("startup.missing.title"), px, pw, y, 0xff7a66);
    y += ui2d_font_height(z.fb) + z.pad;
    for (int i = 0; i < nl; i++) {
        if (text[i][0]) {
            long col = kind[i] == 3 ? 0xffd75a : kind[i] == 2 ? 0xdcc878 : 0xffffff;
            ui2d_text_top(u, z.f, text[i], px + z.pad + (kind[i] > 1 ? z.pad : 0), y, col);
        }
        y += z.lh;
    }
    int cw, ch;
    return ui2d_take(u, &cw, &ch);
}

/* the screen at full size, or smaller if the window is too short for the text */
static uint8_t *draw_missing(int W, int H) {
    static const double scale[] = {1.0, 0.85, 0.72, 0.62, 0.5};
    uint8_t *img = NULL;
    for (size_t i = 0; !img && i < sizeof scale / sizeof scale[0]; i++) {
        int fits = 0;
        img = draw_missing_k(W, H, scale[i], &fits);
    }
    return img;
}

/* ---------------------------------------------------------------------------------------------- events and showing */

/* Window events and pads: sets *skip when a fire button / Enter / Space was pressed and *escape for Esc. Returns 1 if
 * the window was closed. */
static int poll_events(int *skip, int *escape) {
    VEvent ev;
    int closed = 0;
    while (video_poll(&ev)) {
        if (ev.type == VE_QUIT)
            closed = 1;
        else if (ev.type == VE_KEY && ev.down && !ev.rep) {
            if (ev.vk == VK_ESCAPE)
                *escape = 1;
            else if (ev.vk == key_bind[KA_FIRE] || ev.vk == key_bind[KA_FIRE2] || ev.vk == VK_RETURN ||
                     ev.vk == VK_SPACE || ev.vk == FIRE_VK)
                *skip = 1;
        }
    }
    PadRead pr[2];
    int np = pads_read(pr);
    for (int i = 0; i < 2; i++) {
        int fire = i < np && (pr[i].st & J_FIRE);
        if (fire && !pad_fire_prev[i])
            *skip = 1;
        pad_fire_prev[i] = fire;
    }
    return closed;
}

static void black_picture(void) {
    size_t bytes = (size_t)320 * 200 * render_scale * render_scale * 3;
    uint8_t *black = (uint8_t *)calloc(bytes, 1);
    if (black) {
        video_upload(black);
        free(black);
    }
}

/* Draws the screen if what it shows changed (or the window did) and presents the frame. */
static void present(uint8_t *(*draw)(int, int), const char *sig) {
    int rx, ry, rw, rh;
    video_rect(&rx, &ry, &rw, &rh);
    if (rw != shown_w || rh != shown_h || strcmp(sig, shown_sig)) {
        uint8_t *img = draw(rw, rh);
        if (img) {
            video_overlay(img, rw, rh);
            free(img);
        }
        shown_w = rw;
        shown_h = rh;
        snprintf(shown_sig, sizeof shown_sig, "%s", sig);
    }
    { /* development only: DOW_SHOTS=folder also takes pictures of these screens (twice a second) */
        static double last_shot;
        static int shot_no;
        const char *dir = getenv("DOW_SHOTS");
        if (dir && now_s() - last_shot >= 0.5) {
            char path[800];
            last_shot = now_s();
            snprintf(path, sizeof path, "%s/s%04d.png", dir, shot_no++);
            video_screenshot(path);
        }
    }
    video_draw();
}

static void loading_signature(char *sig, size_t n) {
    int k = snprintf(sig, n, "%d|%s|%d|", (int)(progress * 1000), detail,
                     finished ? (int)(AUTO_S - (now_s() - t_done) + 0.999) : -1);
    for (int i = 0; i < NLINES && k > 0 && (size_t)k < n; i++)
        k += snprintf(sig + k, n - (size_t)k, "%d%d%s;", lines[i].used, lines[i].pending, lines[i].value);
}

/* ---------------------------------------------------------------------------------------------- loading screen */

int startup_active(void) {
    return active;
}

/* Starts the loading screen unless the option is off (and not in the automatic tests, unless DOW_SPLASH is set). */
void startup_begin(void) {
    active = show_startup && ((!getenv("DOW_TEST") && !getenv("DOW_SECONDS")) || getenv("DOW_SPLASH"));
    finished = quit_asked = 0;
    progress = 0;
    detail[0] = 0;
    memset(lines, 0, sizeof lines);
    shown_w = shown_h = 0;
    shown_sig[0] = 0;
    if (!active)
        return;
    black_picture();
}

/* Sets (or changes) one of the lines of the list: what it is and what was found. pending: not known yet. */
void startup_line(int slot, const char *label, const char *value, int pending) {
    if (!active || slot < 0 || slot >= NLINES)
        return;
    snprintf(lines[slot].label, sizeof lines[slot].label, "%s", label);
    snprintf(lines[slot].value, sizeof lines[slot].value, "%s", value ? value : "");
    lines[slot].used = 1;
    lines[slot].pending = pending;
}

/* Sets the progress (0..1) and the line under the bar, and shows the screen. Returns 0 if the window was closed. */
int startup_progress(double p, const char *what) {
    if (!active)
        return 1;
    if (p > progress)
        progress = p;
    snprintf(detail, sizeof detail, "%s", what ? what : "");
    int skip = 0, esc = 0;
    if (poll_events(&skip, &esc))
        quit_asked = 1;
    char sig[900];
    loading_signature(sig, sizeof sig);
    present(draw_loading, sig);
    return !quit_asked;
}

/* Loading is over: waits two seconds, or until a fire button is pressed, with the list on screen. Returns 0 if the
 * window was closed. */
int startup_finish(void) {
    if (!active)
        return 1;
    progress = 1.0;
    finished = 1;
    t_done = now_s();
    snprintf(detail, sizeof detail, "%s", tr("startup.ready"));
    int skip = 0, esc = 0;
    while (!quit_asked && !skip && !esc && now_s() - t_done < AUTO_S) {
        if (poll_events(&skip, &esc))
            quit_asked = 1;
        char sig[900];
        loading_signature(sig, sizeof sig);
        present(draw_loading, sig);
        sleep_ms(16);
    }
    /* a button still held must not reach the game: wait (a moment) until it is released */
    for (int i = 0; i < 60 && !quit_asked; i++) {
        PadRead pr[2];
        int np = pads_read(pr), held = 0;
        for (int k = 0; k < np && k < 2; k++)
            held |= (pr[k].st & J_FIRE) != 0;
        if (!held)
            break;
        sleep_ms(16);
    }
    return !quit_asked;
}

/* Takes the screen away (the game's picture shows again). */
void startup_end(void) {
    if (!active)
        return;
    video_overlay(NULL, 0, 0);
    active = 0;
    shown_sig[0] = 0;
}

/* ---------------------------------------------------------------------------------------------- game data missing */

/* The game data is the player's own and the program has none: explains on screen what to put where, and waits until the
 * player closes the window (or presses Esc). The folder is created so that it is there to put the file in. */
void startup_missing_data(void) {
    if (!dir_exists(original_dir_path))
        port_mkdir(original_dir_path);
    black_picture();
    shown_w = shown_h = 0;
    shown_sig[0] = 0;
    for (;;) {
        int skip = 0, esc = 0;
        if (poll_events(&skip, &esc) || esc)
            break;
        present(draw_missing, "missing");
        sleep_ms(30);
    }
    video_overlay(NULL, 0, 0);
    shown_sig[0] = 0;
}
