/*
 * menu.c - On-screen options menu, drawn with the portable 2D library (port/ui2d.c) into an RGBA image (no GDI, so it
 * draws the same on any OS).
 */
#include "menu.h"
#include "lang.h"
#include "padmap.h"
#include "ui2d.h"

#define MAXITEMS 128
struct Menu {
    MItem it[MAXITEMS];
    int n;
    char title[80];
    int cur, top, open;
    char status[200];
    double status_t;
    /* tabs: MK_TAB items; tab = current one; tabfocus = 1 while the tab bar (not an item) is selected */
    int ntabs, tab, tabfocus;
};

/* ---- creating the menu ---- */
/* labels may start with spaces (indentation): they are kept in front of the translation of the rest */
static const char *tr_label(const char *id, char *buf, size_t n) {
    int k = 0;
    while (id[k] == ' ')
        k++;
    snprintf(buf, n, "%.*s%s", k, id, tr(id + k));
    return buf;
}
/* Creates an empty menu with a title (a text id). */
Menu *menu_new(const char *title) {
    Menu *m = (Menu *)calloc(1, sizeof(Menu));
    snprintf(m->title, sizeof m->title, "%s", title);
    return m;
}
/* Appends an item (a tab, a separator, an option, an action, a picture). */
void menu_add(Menu *m, const MItem *it) {
    if (m->n < MAXITEMS) {
        m->it[m->n++] = *it;
        if (it->kind == MK_TAB)
            m->ntabs++;
    }
}
/* Is the menu on screen? */
int menu_is_open(Menu *m) {
    return m->open;
}
/* ---- items and tabs ---- */
/* items of the current tab: [a, b); without tabs, all of them */
static void tab_range(Menu *m, int *a, int *b) {
    if (!m->ntabs) {
        *a = 0;
        *b = m->n;
        return;
    }
    int t = -1, s0 = 0;
    *b = m->n;
    for (int i = 0; i < m->n; i++)
        if (m->it[i].kind == MK_TAB) {
            t++;
            if (t == m->tab)
                s0 = i + 1;
            else if (t == m->tab + 1) {
                *b = i;
                break;
            }
        }
    *a = s0;
}
#define NOT_SELECTABLE(k) ((k) == MK_SEP || (k) == MK_IMAGE) /* items the cursor skips */
/* pictures of MK_IMAGE items: loaded once */
typedef struct {
    char path[520];
    uint8_t *rgba;
    int w, h, tried;
    unsigned sig;
    uint8_t *fit; /* the picture resized to fw x fh over the panel colour (see blit_image) */
    int fw, fh;
} ImgCache;
static ImgCache image_cache[4];
/* Keep the English and translated controller illustrations warm across language changes. */
#define PADMAP_CACHE_SIZE 4
static ImgCache padmap_cache[PADMAP_CACHE_SIZE];
static unsigned padmap_cache_next;
/* ---- pictures in the menu ---- */
/* The picture of an image item, loaded once. The path "@padmap" is the picture of the pad: it is drawn by the program
 * (padmap.c) and made again whenever what it shows changes. */
static ImgCache *get_image(const char *path) {
    /* the picture of the pad is drawn by the program (padmap.c) and made again when what it shows changes */
    if (!strcmp(path, "@padmap")) {
        unsigned sg = padmap_signature();
        for (int i = 0; i < PADMAP_CACHE_SIZE; i++)
            if (padmap_cache[i].tried && padmap_cache[i].sig == sg)
                return &padmap_cache[i];
        int slot = -1;
        for (int i = 0; i < PADMAP_CACHE_SIZE; i++)
            if (!padmap_cache[i].tried) {
                slot = i;
                break;
            }
        if (slot < 0) {
            slot = (int)(padmap_cache_next++ % PADMAP_CACHE_SIZE);
            free(padmap_cache[slot].rgba);
            free(padmap_cache[slot].fit);
            memset(&padmap_cache[slot], 0, sizeof padmap_cache[slot]);
        }
        ImgCache *pm = &padmap_cache[slot];
        snprintf(pm->path, sizeof pm->path, "%s", path);
        pm->sig = sg;
        pm->tried = 1;
        pm->rgba = padmap_render(&pm->w, &pm->h);
        return pm;
    }
    for (int i = 0; i < 4; i++)
        if (image_cache[i].tried && !strcmp(image_cache[i].path, path))
            return &image_cache[i];
    for (int i = 0; i < 4; i++)
        if (!image_cache[i].tried) {
            snprintf(image_cache[i].path, sizeof image_cache[i].path, "%s", path);
            image_cache[i].tried = 1;
            image_cache[i].rgba = png_read_rgba(path, &image_cache[i].w, &image_cache[i].h);
            return &image_cache[i];
        }
    return NULL;
}
/* The picture of the current language: "<name>_<code>.<ext>" (controller_es.png in Spanish) if it exists, else the
 * given one (controller.png, the English one) */
static const char *localized_path(const char *path, char *out, size_t n) {
    const char *code = lang_current();
    const char *dot = strrchr(path, '.');
    if (!path[0] || !dot || !strcmp(code, "en"))
        return path;
    snprintf(out, n, "%.*s_%s%s", (int)(dot - path), path, code, dot);
    return file_exists(out) ? out : path;
}
/* draws the picture centred in the box (x, y, w, h), scaled to fit, over the panel background: the destination pixel
 * is replaced by the box average of the picture (the alpha of the picture decides how much of the panel colour (10,
 * 12, 24) is mixed in), opaque, like the GDI build painted its DIB. The picture dodges its own pixels of pure black
 * and of the exact panel colour (they would be keyed by the overlay's translucency), so those two colours must not
 * carry information in a picture. The resized picture is cached per size: the menu redraws it on every navigation. */
static void blit_image(Ui2d *u, const char *path, int x0, int y0, int bw, int bh) {
    ImgCache *c = get_image(path);
    if (!c || !c->rgba || bw < 8 || bh < 8)
        return;
    double sc = (double)bw / c->w;
    if ((double)bh / c->h < sc)
        sc = (double)bh / c->h;
    int dw = (int)(c->w * sc), dh = (int)(c->h * sc);
    if (dw < 1 || dh < 1)
        return;
    if (!c->fit || c->fw != dw || c->fh != dh) {
        free(c->fit);
        c->fit = (uint8_t *)malloc((size_t)dw * dh * 4);
        if (!c->fit) {
            c->fw = c->fh = 0;
            return;
        }
        c->fw = dw;
        c->fh = dh;
        for (int y = 0; y < dh; y++) {
            double sy0 = y / sc, sy1 = (y + 1) / sc;
            int iy0 = (int)sy0, iy1 = (int)ceil(sy1);
            if (iy1 > c->h)
                iy1 = c->h;
            for (int x = 0; x < dw; x++) {
                double sx0 = x / sc, sx1 = (x + 1) / sc;
                int ix0 = (int)sx0, ix1 = (int)ceil(sx1);
                if (ix1 > c->w)
                    ix1 = c->w;
                /* box average of the source pixels that fall in this one */
                double r = 0, g = 0, b = 0, a = 0, wsum = 0;
                for (int sy = iy0; sy < iy1; sy++)
                    for (int sx = ix0; sx < ix1; sx++) {
                        const uint8_t *q = c->rgba + ((size_t)sy * c->w + sx) * 4;
                        double al = q[3] / 255.0;
                        r += q[0] * al;
                        g += q[1] * al;
                        b += q[2] * al;
                        a += al;
                        wsum += 1;
                    }
                uint8_t *d = c->fit + ((size_t)y * dw + x) * 4;
                if (wsum <= 0 || a <= 0) {
                    d[0] = 10;
                    d[1] = 12;
                    d[2] = 24;
                    d[3] = 255;
                    continue;
                }
                double al = a / wsum;
                double R = r / a, G = g / a, B = b / a;
                d[0] = (uint8_t)(R * al + 10 * (1 - al) + 0.5);
                d[1] = (uint8_t)(G * al + 12 * (1 - al) + 0.5);
                d[2] = (uint8_t)(B * al + 24 * (1 - al) + 0.5);
                d[3] = 255;
                /* dodges: the picture's own pure black and panel colour stay opaque instead of being keyed */
                if (d[0] == 0 && d[1] == 0 && d[2] == 0)
                    d[0] = d[1] = d[2] = 1;
                else if (d[0] == 10 && d[1] == 12 && d[2] == 24)
                    d[2] = 25;
            }
        }
    }
    /* the cached picture to the canvas, whole rows */
    int w = 0, h = 0;
    uint8_t *px = ui2d_px(u, &w, &h);
    int ox = x0 + (bw - dw) / 2, oy = y0 + (bh - dh) / 2;
    for (int y = 0; y < dh; y++) {
        int yy = oy + y;
        if (yy < 0 || yy >= h)
            continue;
        memcpy(px + ((size_t)yy * w + ox) * 4, c->fit + (size_t)y * dw * 4, (size_t)dw * 4);
    }
}
/* ---- moving through the menu ---- */
/* The first item of the tab the cursor can stop on. */
static int first_sel(Menu *m) {
    int a, b;
    tab_range(m, &a, &b);
    for (int i = a; i < b; i++)
        if (NOT_SELECTABLE(m->it[i].kind) == 0)
            return i;
    return a;
}
/* The last item of the tab the cursor can stop on. */
static int last_sel(Menu *m) {
    int a, b;
    tab_range(m, &a, &b);
    for (int i = b - 1; i >= a; i--)
        if (NOT_SELECTABLE(m->it[i].kind) == 0)
            return i;
    return a;
}
/* The tab item number t. */
static const MItem *tab_item(Menu *m, int t) {
    int k = -1;
    for (int i = 0; i < m->n; i++)
        if (m->it[i].kind == MK_TAB && ++k == t)
            return &m->it[i];
    return NULL;
}
/* Goes to tab t (wrapping around) with the cursor on its first option. */
static void set_tab(Menu *m, int t) {
    m->tab = (t % m->ntabs + m->ntabs) % m->ntabs;
    m->cur = first_sel(m);
    m->top = 0;
}
/* Opens the menu; it reopens on the tab and option that were in use. */
void menu_show(Menu *m) {
    m->open = 1;
    /* it reopens on the tab and option that were in use */
    if (m->ntabs) {
        m->tabfocus = 0;
        if (m->tab >= m->ntabs)
            m->tab = 0;
        int a, b;
        tab_range(m, &a, &b);
        if (m->cur < a || m->cur >= b || NOT_SELECTABLE(m->it[m->cur].kind)) {
            m->cur = first_sel(m);
            m->top = 0;
        }
    } else
        for (int i = 0; i < m->n; i++) {
            if (NOT_SELECTABLE(m->it[m->cur].kind) == 0)
                break;
            m->cur = (m->cur + 1) % m->n;
        }
}
/* Closes the menu. */
void menu_hide(Menu *m) {
    m->open = 0;
}
/* Shows a message in the status line for a few seconds. */
void menu_status(Menu *m, const char *t) {
    snprintf(m->status, sizeof m->status, "%s", t);
    m->status_t = now_s();
}
/* Moves the cursor d items, skipping separators and pictures. */
static void move_cursor(Menu *m, int d) {
    int a, b;
    tab_range(m, &a, &b);
    int len = b - a;
    if (len <= 0)
        return;
    for (int i = 0; i < len; i++) {
        m->cur = a + ((m->cur - a + d) % len + len) % len;
        if (NOT_SELECTABLE(m->it[m->cur].kind) == 0)
            break;
    }
}

/* The last item added shows the text returned by v at its right (an action row with a value). */
void menu_last_valtext(Menu *m, const char *(*v)(void)) {
    if (m->n > 0)
        m->it[m->n - 1].valtext = v;
}
/* The last item added is greyed out and does nothing while e() returns 0. */
void menu_last_enabled(Menu *m, int (*e)(void)) {
    if (m->n > 0)
        m->it[m->n - 1].enabled = e;
}
/* The last item added shows an extra explanation for the value chosen (returned by v). */
void menu_last_valhint(Menu *m, const char *(*v)(int i)) {
    if (m->n > 0)
        m->it[m->n - 1].valhint = v;
}
/* A navigation key: "up" "down" "left" "right", "tabprev" "tabnext". Left / right change the value of the option
 * under the cursor; from the first option "up" goes to the tab bar. */
void menu_nav(Menu *m, const char *dir) {
    if (m->ntabs) {
        if (!strcmp(dir, "tabprev")) {
            set_tab(m, m->tab - 1);
            return;
        }
        if (!strcmp(dir, "tabnext")) {
            set_tab(m, m->tab + 1);
            return;
        }
        /* the tab bar is selected: left / right change tab, down goes into it */
        if (m->tabfocus) {
            if (!strcmp(dir, "left"))
                set_tab(m, m->tab - 1);
            else if (!strcmp(dir, "right"))
                set_tab(m, m->tab + 1);
            else if (!strcmp(dir, "down")) {
                m->tabfocus = 0;
                m->cur = first_sel(m);
            } else if (!strcmp(dir, "up")) {
                m->tabfocus = 0;
                m->cur = last_sel(m);
            }
            return;
        }
        /* up from the first option: the tab bar */
        if (!strcmp(dir, "up") && m->cur == first_sel(m)) {
            m->tabfocus = 1;
            return;
        }
    }
    MItem *it = &m->it[m->cur];
    if (!strcmp(dir, "up")) {
        move_cursor(m, -1);
        return;
    }
    if (!strcmp(dir, "down")) {
        move_cursor(m, 1);
        return;
    }
    int step = !strcmp(dir, "left") ? -1 : 1;
    if (it->enabled && !it->enabled())
        return;
    if (it->kind == MK_BOOL)
        it->setb(!it->getb());
    else if (it->kind == MK_CHOICE) {
        int n = it->nch(), c = it->getch();
        if (n > 0)
            it->setch(((c + step) % n + n) % n);
    } else if (it->kind == MK_SLIDER) {
        double v = it->getd() + step * (it->step > 0 ? it->step : 0.1);
        if (v < it->lo)
            v = it->lo;
        if (v > it->hi)
            v = it->hi;
        it->setd(floor(v * 10000 + 0.5) / 10000);
    }
}
/* The accept key: runs an action, or changes the value of an option. */
void menu_activate(Menu *m) {
    if (m->ntabs && m->tabfocus) {
        m->tabfocus = 0;
        m->cur = first_sel(m);
        return;
    }
    MItem *it = &m->it[m->cur];
    if (it->enabled && !it->enabled())
        return;
    if (it->kind == MK_ACTION)
        it->act();
    else if (it->kind == MK_BOOL || it->kind == MK_CHOICE || it->kind == MK_SLIDER)
        menu_nav(m, "right");
}

/* ---- what the menu shows ---- */
/* The text of the value of an item (ON / OFF, the chosen text, a percentage). */
static void value_text(const MItem *it, char *out, size_t n) {
    out[0] = 0;
    if (it->kind == MK_BOOL)
        snprintf(out, n, "%s", tr(it->getb() ? "val.on" : "val.off"));
    else if (it->kind == MK_CHOICE)
        snprintf(out, n, "%s", it->nch() > 0 ? tr(it->chtext(it->getch())) : "");
    else if (it->kind == MK_ACTION && it->valtext)
        snprintf(out, n, "%s", tr(it->valtext()));
    else if (it->kind == MK_SLIDER) {
        double v = it->getd();
        if (it->fmt)
            snprintf(out, n, it->fmt, v);
        else
            snprintf(out, n, "%d %%", (int)lrint(v * 100));
    }
}

/* A string that changes whenever something the menu shows changes (cursor, tab, values, window size, the pad
 * picture): the window loop draws the menu again only when it changes. */
int menu_signature(Menu *m, int w, int h, char *out, size_t n) {
    size_t k = 0;
    k += (size_t)snprintf(out + k, n - k, "%d|%d|%d|%d|%d|", m->cur, w, h, m->tab, m->tabfocus);
    if (now_s() - m->status_t < 5.0)
        k += (size_t)snprintf(out + k, n - k, "%s|", m->status);
    /* the picture of the pad depends on the controls and the language */
    k += (size_t)snprintf(out + k, n - k, "%u|", padmap_signature());
    for (int i = 0; i < m->n && k + 100 < n; i++)
        if (NOT_SELECTABLE(m->it[i].kind) == 0) {
            char v[160];
            value_text(&m->it[i], v, sizeof v);
            k += (size_t)snprintf(out + k, n - k, "%s;", v);
        }
    return (int)k;
}

/* fonts of the menu (of the height the GDI build asked for); the colours of the panel */
static Ui2dFont mkfont(Ui2d *u, int h, int bold) {
    (void)u;
    return ui2d_font_px(h, bold);
}
/* Width of a text. */
static int text_w(Ui2dFont f, const char *s) {
    return (int)ceil(ui2d_text_w(f, s));
}
/* Draws a text at (x, y) in a colour: y is the top of the text cell, like the GDI build. */
static void text_at(Ui2d *u, Ui2dFont f, int x, int y, const char *s, long c) {
    ui2d_text_top(u, f, s, x, y, c);
}

/* wraps `text` into lines of at most `width` pixels */
static int wrap(Ui2dFont f, const char *text, int width, char lines[][200], int maxl) {
    char buf[1024];
    snprintf(buf, sizeof buf, "%s", text);
    int nl = 0;
    char cur[200] = "";
    for (char *w = strtok(buf, " "); w; w = strtok(NULL, " ")) {
        char t[260];
        snprintf(t, sizeof t, "%s%s%s", cur, cur[0] ? " " : "", w);
        if (text_w(f, t) <= width || !cur[0])
            snprintf(cur, sizeof cur, "%s", t);
        else {
            if (nl < maxl)
                snprintf(lines[nl++], 200, "%s", cur);
            snprintf(cur, sizeof cur, "%s", w);
        }
    }
    if (cur[0] && nl < maxl)
        snprintf(lines[nl++], 200, "%s", cur);
    return nl;
}

/* Draws the menu into a new RGBA image of W x H (the size of the picture area): the panel, the tab bar, the items
 * with their values, a picture if the tab has one, and the explanation of the item under the cursor and the key help
 * at the bottom. Where the image is transparent the game shows through. The panel always has the same size with tabs;
 * the explanation box is only as tall as the longest explanation of a tab with a picture needs. */
uint8_t *menu_draw(Menu *m, int W, int H) {
    int fs = H / 26;
    if (fs < 14)
        fs = 14;
    int fh = (int)((fs + 6) * 0.80), fhb = (int)((fs + 6) * 1.35 * 0.80), fhs = (int)((fs - 2) * 0.80 + 0.5);
    if (fhs < 10)
        fhs = 10;
    Ui2d *u = ui2d_new(W, H);
    if (!u)
        return NULL;
    Ui2dFont f = mkfont(u, fh, 0), fb = mkfont(u, fhb, 1);
    int lh = ui2d_font_height(f) + 5;
    int hb = ui2d_font_height(fb);
    /* hint_h: height of the explanation box; hpct: its font, in % of the options' */
    int pw = (int)(W * 0.72), hint_lines = 4, has_img = 0, hint_h = 0, hpct = 82;
    {
        int a0, b0;
        tab_range(m, &a0, &b0);
        for (int i = a0; i < b0; i++)
            if (m->it[i].kind == MK_IMAGE)
                has_img = 1;
        /* a tab with a picture: the explanation box is only as tall as the longest explanation of the tab needs, and
         * the picture gets the rest */
        if (has_img) {
            hpct = 68;
            Ui2dFont fA = mkfont(u, fh * hpct / 100, 0);
            int lhA2 = ui2d_font_height(fA) + 4, need = 1;
            static char tl[12][200];
            for (int i = a0; i <= b0; i++) {
                const char *hid = i < b0 ? m->it[i].hint : tab_item(m, m->tab)->hint;
                if (!hid)
                    continue;
                int k = wrap(fA, tr(hid), pw - 44, tl, 12);
                if (k > need)
                    need = k;
            }
            hint_h = need * lhA2 + 12;
            if (hint_h > 4 * lh)
                hint_h = 4 * lh;
        }
    }
    if (!has_img)
        hint_h = hint_lines * lh;
    /* the explanation box is 4 lines tall; if the text does not fit the font is reduced */
    int ph_max = (int)(H * 0.94), tabh = m->ntabs ? lh + 10 : 0;
    /* footer strip with the navigation instructions */
    int foot_h = fhs * 2 + 16;
    int rows = (ph_max - hb - 24 - tabh - (hint_h + foot_h + 8)) / lh;
    if (rows < 5)
        rows = 5;
    int lo, n;
    tab_range(m, &lo, &n);
    if (m->top < lo || m->top >= n)
        m->top = lo;
    if (!m->tabfocus) {
        if (m->cur < m->top)
            m->top = m->cur;
        if (m->cur >= m->top + rows)
            m->top = m->cur - rows + 1;
    }
    if (m->top > lo && NOT_SELECTABLE(m->it[m->top - 1].kind) && m->cur - m->top < rows - 1)
        m->top--;
    /* with tabs the panel always has the same (maximum) height, so it does not change size from tab to tab; a picture
     * takes the extra */
    int ph_nat = hb + 18 + tabh + rows * lh + hint_h + foot_h + 14,
        ph = ((m->ntabs || has_img) && ph_nat < ph_max) ? ph_max : ph_nat, px = (W - pw) / 2, py = (H - ph) / 2;
    /* top of the explanation box (its separator line is 4 pixels above) */
    int by0 = py + ph - hint_h - foot_h - 6;
    /* The dim and panel are reused while both the canvas and the panel geometry stay the same. */
    static uint8_t *base = NULL;
    static int bw = 0, bh = 0, bpx = 0, bpy = 0, bpw = 0, bph = 0;
    if (!base || bw != W || bh != H || bpx != px || bpy != py || bpw != pw || bph != ph) {
        Ui2d *b = ui2d_new(W, H);
        if (!b)
            return NULL;
        /* every pixel the drawing leaves untouched: the translucent black the GDI build keyed at the end — the game
         * looks through it, dimmed */
        ui2d_rect_fill(b, 0, 0, (double)W, (double)H, 0, 120);
        ui2d_rrect_fill_alpha(b, px, py, pw, ph, 12, 0x0a0c18, 255);
        ui2d_rrect(b, px, py, pw, ph, 12, UI2D_NONE, 0xe6be46, 2);
        int cw = 0, ch = 0;
        uint8_t *pixels = ui2d_px(b, &cw, &ch);
        for (int y = py; y < py + ph && y < ch; y++)
            for (int x = px; x < px + pw && x < cw; x++) {
                uint8_t *p = pixels + ((size_t)y * cw + x) * 4;
                if (p[0] == 10 && p[1] == 12 && p[2] == 24)
                    p[3] = 238;
            }
        int tw2 = 0, th2 = 0;
        free(base);
        base = ui2d_take(b, &tw2, &th2);
        bw = tw2;
        bh = th2;
        bpx = px;
        bpy = py;
        bpw = pw;
        bph = ph;
    }
    memcpy(ui2d_px(u, NULL, NULL), base, (size_t)W * H * 4);
    {
        int tw = text_w(fb, tr(m->title));
        text_at(u, fb, px + (pw - tw) / 2, py + 8, tr(m->title), 0xffd75a);
    }
    if (m->ntabs) { /* tab bar */
        int tw[16], tot = 0, gap = 14, nt = m->ntabs < 16 ? m->ntabs : 16;
        for (int t = 0; t < nt; t++) {
            tw[t] = text_w(f, tr(tab_item(m, t)->label)) + 26;
            tot += tw[t] + (t ? gap : 0);
        }
        int x = px + (pw - tot) / 2, ty = py + 10 + hb;
        for (int t = 0; t < nt; t++) {
            int cur_t = t == m->tab;
            if (cur_t)
                ui2d_rrect(u, x, ty, tw[t], lh + 2, 6, m->tabfocus ? 0x5a69be : 0x373e76, UI2D_NONE, 0);
            text_at(u, f, x + 13, ty + 2, tr(tab_item(m, t)->label),
                    cur_t ? (m->tabfocus ? 0xffffff : 0xffe178) : 0x969ebe);
            x += tw[t] + gap;
        }
        double lp[4] = {px + 16, ty + lh + 6, px + pw - 16, ty + lh + 6};
        ui2d_polyline(u, lp, 2, 0x5a6496, 1);
    }
    int y = py + 14 + hb + tabh;
    for (int i = m->top; i < n && i < m->top + rows; i++) {
        MItem *it = &m->it[i];
        int sel = i == m->cur && !m->tabfocus;
        char label[128];
        tr_label(it->dynlabel ? it->dynlabel() : it->label, label, sizeof label);
        if (it->kind == MK_IMAGE) {
            {
                char lp[560];
                blit_image(u, localized_path(it->path ? it->path : "", lp, sizeof lp), px + 20, y, pw - 40, by0 - 12 - y);
                break;
            }
        }
        if (it->kind == MK_SEP && !label[0]) {
            y += lh;
            continue;
        }
        if (it->kind == MK_SEP) {
            if (it->plain)
                text_at(u, f, px + 30, y, label, 0xd7d7e6);
            else {
                char t[160];
                snprintf(t, sizeof t, "-- %s --", label);
                text_at(u, f, px + (pw - text_w(f, t)) / 2, y, t, 0x78beff);
            }
            y += lh;
            continue;
        }
        if (sel)
            ui2d_rrect(u, px + 10, y - 2, pw - 20, lh, 6, 0x3c4682, UI2D_NONE, 0);
        int off = it->enabled && !it->enabled();
        text_at(u, f, px + 30, y, label, off ? 0x696c7d : sel ? 0xffffff : 0xcdcdd7);
        char vt[200];
        value_text(it, vt, sizeof vt);
        if (vt[0]) {
            char t[240];
            if (sel && it->kind != MK_ACTION)
                snprintf(t, sizeof t, "<  %s  >", vt);
            else
                snprintf(t, sizeof t, "%s", vt);
            text_at(u, f, px + pw - 30 - text_w(f, t), y, t,
                    off   ? 0x696c7d
                    : sel ? 0xffe678
                          : 0xdcc878);
        }
        y += lh;
    }
    if (m->top > lo)
        text_at(u, f, px + pw - 18, py + 10, "^", 0xc8c8c8);
    if (m->top + rows < n)
        text_at(u, f, px + pw - 18, py + ph - hint_h - foot_h - 26, "v", 0xc8c8c8);
    int by = by0;
    {
        double lp[4] = {px + 16, by - 4, px + pw - 16, by - 4};
        ui2d_polyline(u, lp, 2, 0x5a6496, 1);
    }
    int k0 = 0;
    if (m->status[0] && now_s() - m->status_t < 5.0) {
        text_at(u, f, px + 22, by, m->status, 0xffe15a);
        k0 = 1;
    }
    static char lines[12][200], lines2[12][200];
    const char *htxt = (m->ntabs && m->tabfocus) ? (tab_item(m, m->tab)->hint ? tr(tab_item(m, m->tab)->hint) : "")
                                                 : (m->it[m->cur].hint ? tr(m->it[m->cur].hint) : "");
    const char *vtxt = NULL;
    {
        const MItem *ci = &m->it[m->cur];
        if (!(m->ntabs && m->tabfocus) && ci->kind == MK_CHOICE && ci->valhint && ci->nch && ci->nch() > 0)
            vtxt = tr(ci->valhint(ci->getch()));
        if (vtxt && !vtxt[0])
            vtxt = NULL;
    }
    /* the general text always has the same font (smaller than the options); only the text of the chosen value shrinks
     * to fit */
    int nl = 0, nl2 = 0, gap = 0, lhA = lh, lhB = lh;
    Ui2dFont fhA = mkfont(u, fh * hpct / 100, 0);
    lhA = ui2d_font_height(fhA) + 4;
    nl = wrap(fhA, htxt, pw - 44, lines, 12);
    if (!vtxt)
        lhB = lhA;
    /* the largest font with which the text of the value fits in what is left of the box */
    Ui2dFont fh2 = NULL;
    for (int pct = hpct; vtxt && pct >= 40; pct -= 4) {
        fh2 = mkfont(u, fh * pct / 100, 0);
        lhB = ui2d_font_height(fh2) + 5 * pct / 100;
        gap = lhB / 2 + 2;
        nl2 = wrap(fh2, vtxt, pw - 44, lines2, 12);
        if (k0 * lh + nl * lhA + gap + nl2 * lhB <= hint_h)
            break;
    }
    for (int k = 0; k < nl; k++)
        text_at(u, fhA, px + 22, by + k0 * lh + k * lhA, lines[k], 0xbec8eb);
    /* line, and the explanation of the chosen value */
    if (vtxt) {
        int ly = by + k0 * lh + nl * lhA + gap / 2;
        double lp[4] = {px + 22, ly, px + pw - 22, ly};
        ui2d_polyline(u, lp, 2, 0x5a6496, 1);
        for (int k = 0; k < nl2; k++)
            text_at(u, fh2, px + 22, by + k0 * lh + nl * lhA + gap + k * lhB, lines2[k], 0xffe18c);
    }
    {
        const char *ft = tr(m->ntabs ? "footer.tabs" : "footer.plain");
        /* the footer font shrinks until the text fits in the panel */
        int fhh = fhs;
        Ui2dFont ff = mkfont(u, fhh, 0);
        for (; fhh > 8 && text_w(ff, ft) > pw - 30; fhh--)
            ff = mkfont(u, fhh, 0);
        text_at(u, ff, px + (pw - text_w(ff, ft)) / 2, py + ph - fhh - 30, ft, 0x828caa);
    }
    return ui2d_take(u, &W, &H);
}

void menu_warmup(Menu *m, int w, int h) {
    if (!m || !m->ntabs)
        return;
    int controls_tab = -1;
    for (int i = 0, t = 0; i < m->n; i++)
        if (m->it[i].kind == MK_TAB) {
            if (!strcmp(m->it[i].label, "tab.controls")) {
                controls_tab = t;
                break;
            }
            t++;
        }
    if (controls_tab < 0)
        return;

    int old_tab = m->tab, old_cur = m->cur, old_top = m->top, old_focus = m->tabfocus;
    int old_language = lang_index();
    int languages = lang_count();
    if (languages < 1)
        languages = 1;
    if (languages > PADMAP_CACHE_SIZE)
        languages = PADMAP_CACHE_SIZE;
    for (int pass = 0; pass < languages; pass++) {
        int language = old_language < 0 ? -1 : old_language;
        if (pass > 0) {
            language = pass - 1;
            if (old_language >= 0 && language >= old_language)
                language++;
        }
        if (language >= 0 && language != lang_index() && !lang_set(lang_code(language)))
            continue;
        m->tab = controls_tab;
        m->tabfocus = 0;
        int lo, end;
        tab_range(m, &lo, &end);
        m->top = lo;
        m->cur = first_sel(m);
        uint8_t *pixels = menu_draw(m, w, h);
        if (!pixels)
            host_log("Menu: could not pre-render the controls tab in language %s", lang_current());
        free(pixels);
    }
    if (old_language >= 0 && old_language < lang_count())
        lang_set(lang_code(old_language));
    m->tab = old_tab;
    m->cur = old_cur;
    m->top = old_top;
    m->tabfocus = old_focus;
}
