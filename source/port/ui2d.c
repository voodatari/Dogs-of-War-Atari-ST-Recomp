/*
 * ui2d.c - The portable 2D drawing library (see ui2d.h).
 *
 * Shapes are rasterized analytically with 5 vertical subsamples per pixel row: every primitive becomes, at each
 * subscanline, horizontal intervals of the covered area; the intervals of a subscanline are merged (so overlapping
 * strokes never darken their intersections) and their overlap with every pixel column is accumulated with a weight of
 * 255/5. The accumulated coverage is then composited "over" the canvas in straight alpha. This gives smooth edges and
 * correct unions with just stdlib + maths.
 *
 * Text is rendered with stb_truetype from the two Noto Sans fonts bundled in ui2d_fonts.c (OFL 1.1): each glyph is a
 * cached bitmap of coverage that the same "over" composition paints. The API mirrors what the GDI interface used
 * (the em-height convention of CreateFontA, text cell heights, the top of the cell as text origin, right-aligned
 * values...) so the menu keeps its layout.
 */
#include "ui2d.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define STB_TRUETYPE_IMPLEMENTATION
#include "stb_truetype.h"
#include "ui2d_fonts.h"

/* 5 subscanlines per pixel row; the coverage weight of one fully covered sample */
#define SUBS 5
#define SUBW (COVMAX / SUBS) /* a fully covered column adds this per subscanline, COVMAX in all */
#define COVMAX (255 * SUBS)

static double dmin(double a, double b) {
    return a < b ? a : b;
}
static double dmax(double a, double b) {
    return a > b ? a : b;
}
static int clampi(int v, int a, int b) {
    return v < a ? a : v > b ? b : v;
}

/* ---- the canvas ---- */
struct Ui2d {
    uint8_t *px; /* W*H*4 straight RGBA */
    int w, h;
    uint16_t *cov; /* per-column coverage of the row being built (0..COVMAX) */
    float *ccr, *ccg, *ccb, *ccw; /* gradient colour accumulators of the row being built */
};

Ui2d *ui2d_new(int w, int h) {
    if (w <= 0 || h <= 0 || w > 16384 || h > 16384)
        return NULL;
    Ui2d *u = (Ui2d *)calloc(1, sizeof(Ui2d));
    if (!u)
        return NULL;
    u->w = w;
    u->h = h;
    u->px = (uint8_t *)calloc((size_t)w * h, 4);
    u->cov = (uint16_t *)calloc((size_t)w, 2);
    u->ccr = (float *)calloc((size_t)w, 4);
    u->ccg = (float *)calloc((size_t)w, 4);
    u->ccb = (float *)calloc((size_t)w, 4);
    u->ccw = (float *)calloc((size_t)w, 4);
    if (!u->px || !u->cov || !u->ccr || !u->ccg || !u->ccb || !u->ccw) {
        ui2d_free(u);
        return NULL;
    }
    return u;
}

void ui2d_free(Ui2d *u) {
    if (!u)
        return;
    free(u->px);
    free(u->cov);
    free(u->ccr);
    free(u->ccg);
    free(u->ccb);
    free(u->ccw);
    free(u);
}

uint8_t *ui2d_take(Ui2d *u, int *w, int *h) {
    if (!u)
        return NULL;
    uint8_t *px = u->px;
    if (w)
        *w = u->w;
    if (h)
        *h = u->h;
    free(u->cov);
    free(u->ccr);
    free(u->ccg);
    free(u->ccb);
    free(u->ccw);
    free(u);
    return px;
}

/* the canvas pixels for direct painting (W*H*4 straight RGBA): painting while shapes are drawn is rare (the menu does
 * it only for loaded pictures) and reads/writes them exactly like ui2d does */
uint8_t *ui2d_px(Ui2d *u, int *w, int *h) {
    if (!u)
        return NULL;
    if (w)
        *w = u->w;
    if (h)
        *h = u->h;
    return u->px;
}

static inline uint8_t sat8(int v) {
    return v < 0 ? 0 : v > 255 ? 255 : (uint8_t)v;
}

/* ---- one row of coverage ---- */
typedef struct {
    Ui2d *u;
    int y;
    int grad; /* 1 = the colour changes with y, from gy0 (gtop) to gy1 (gbot) */
    double gy0, gy1;
    long gtop, gbot;
} Row;

static void row_reset(Row *r, Ui2d *u, int y) {
    r->u = u;
    r->y = y;
    r->grad = 0;
    memset(u->cov, 0, (size_t)u->w * 2);
    memset(u->ccr, 0, (size_t)u->w * 4);
    memset(u->ccg, 0, (size_t)u->w * 4);
    memset(u->ccb, 0, (size_t)u->w * 4);
    memset(u->ccw, 0, (size_t)u->w * 4);
}

static void row_grad(Row *r, double y0, double y1, long top, long bottom) {
    r->grad = 1;
    r->gy0 = y0;
    r->gy1 = y1;
    r->gtop = top;
    r->gbot = bottom;
}

/* adds one interval (pixels of this subscanline) to the row; ys is where a gradient samples its colour */
static void row_add(Row *r, double x0, double x1, double ys) {
    Ui2d *u = r->u;
    if (x1 <= x0)
        return;
    if (x0 < 0)
        x0 = 0;
    if (x1 > u->w)
        x1 = (double)u->w;
    if (x1 <= x0)
        return;
    int xa = clampi((int)floor(x0), 0, u->w - 1);
    int xb = clampi((int)floor(x1), 0, u->w - 1);
    for (int c = xa; c <= xb; c++) {
        double a0 = dmax(x0, (double)c), a1 = dmin(x1, (double)(c + 1));
        if (a1 <= a0)
            continue;
        int w = (int)lround((a1 - a0) * SUBW);
        u->cov[c] = (uint16_t)(u->cov[c] + w);
        if (r->grad) {
            double t = r->gy1 > r->gy0 ? (ys - r->gy0) / (r->gy1 - r->gy0) : 0.0;
            t = t < 0 ? 0.0 : t > 1 ? 1.0 : t;
            u->ccr[c] += (float)(w * ((r->gtop & 255) + (int)((r->gbot & 255) - (r->gtop & 255)) * t));
            u->ccg[c] += (float)(w * (((r->gtop >> 8) & 255) + (int)(((r->gbot >> 8) & 255) - ((r->gtop >> 8) & 255)) * t));
            u->ccb[c] += (float)(w * (((r->gtop >> 16) & 255) + (int)(((r->gbot >> 16) & 255) - ((r->gtop >> 16) & 255)) * t));
            u->ccw[c] += (float)w;
        }
    }
}

/* composites the accumulated row onto the canvas: col/alpha for a flat colour, the accumulated gradient colour
 * otherwise. The source is opaque by its coverage: its alpha is `alpha * coverage`, composited over the canvas. */
static void row_commit(Row *r, long col, int alpha) {
    Ui2d *u = r->u;
    uint8_t *d = u->px + (size_t)r->y * u->w * 4;
    int sr = (col >> 16) & 255, sg = (col >> 8) & 255, sb = col & 255; /* 0xRRGGBB */
    for (int c = 0; c < u->w; c++) {
        int cv = u->cov[c];
        if (!cv)
            continue;
        if (cv > COVMAX)
            cv = COVMAX;
        int a8 = sat8((alpha * cv + COVMAX / 2) / COVMAX);
        if (!a8)
            continue;
        int fr = sr, fg = sg, fb = sb;
        if (r->grad && u->ccw[c] > 0) {
            fr = sat8((int)lround(u->ccr[c] / u->ccw[c]));
            fg = sat8((int)lround(u->ccg[c] / u->ccw[c]));
            fb = sat8((int)lround(u->ccb[c] / u->ccw[c]));
        }
        uint8_t *dp = d + (size_t)c * 4;
        int ia = 255 - a8;
        dp[0] = (uint8_t)((fr * a8 + dp[0] * ia + 127) / 255);
        dp[1] = (uint8_t)((fg * a8 + dp[1] * ia + 127) / 255);
        dp[2] = (uint8_t)((fb * a8 + dp[2] * ia + 127) / 255);
        dp[3] = (uint8_t)((255 * a8 + dp[3] * ia + 127) / 255);
    }
}

/* ---- horizontal intervals (what every primitive is at each subscanline) ---- */
typedef struct {
    double a, b;
} Iv;

typedef struct {
    double x0, y0, x1, y1;
} Seg;

static int dcmp(const void *p, const void *q) {
    double a = *(const double *)p, b = *(const double *)q;
    return a < b ? -1 : a > b;
}
static int ivcmp(const void *p, const void *q) {
    const Iv *a = (const Iv *)p, *b = (const Iv *)q;
    if (a->a < b->a)
        return -1;
    if (a->a > b->a)
        return 1;
    if (a->b < b->b)
        return -1;
    if (a->b > b->b)
        return 1;
    return 0;
}

/* the horizontal intervals of the disc (radius rad) centred at (cx, cy) at slice ys */
static void disc_ivs(double cx, double cy, double rad, double ys, Iv *out, int *n, int maxi) {
    if (*n >= maxi)
        return;
    double d = fabs(ys - cy);
    if (d <= rad) {
        double h = sqrt(rad * rad - d * d);
        out[(*n)++] = (Iv){cx - h, cx + h};
    }
}

/* the horizontal intervals of the tube (radius rad, round caps) of one segment at slice ys: the discs of the two ends
 * plus, between them, the slice of the capsule body */
static void seg_ivs(double x0, double y0, double x1, double y1, double rad, double ys, Iv *out, int *n, int maxi) {
    disc_ivs(x0, y0, rad, ys, out, n, maxi);
    disc_ivs(x1, y1, rad, ys, out, n, maxi);
    if (*n >= maxi)
        return;
    double dx = x1 - x0, dy = y1 - y0;
    double L2 = dx * dx + dy * dy;
    if (L2 <= 0)
        return;
    /* the projection of the origin along the segment, from x: t* = ((x - x0) dx + (ys - y0) dy) / L2 must be in
     * [0, 1] */
    double xa, xb;
    if (fabs(dx) < 1e-9) {
        double f = (ys - y0) / dy; /* how far the slice goes along the segment */
        if (!(f >= 0.0 && f <= 1.0))
            return;
        /* a vertical segment's foot is on the segment for every x of the slice: the body spans the whole band */
        xa = -1e18;
        xb = 1e18;
    } else {
        double lo = x0 - (ys - y0) * dy / dx;
        double hi = x0 + (L2 - (ys - y0) * dy) / dx;
        xa = dmin(lo, hi);
        xb = dmax(lo, hi);
    }
    if (fabs(dy) > 1e-9) {
        /* perpendicular distance <= rad on the infinite line of the segment */
        double m = rad * sqrt(L2) / fabs(dy);
        double xmid = x0 + dx * (ys - y0) / dy;
        double ia = dmax(xa, xmid - m), ib = dmin(xb, xmid + m);
        if (ia < ib)
            out[(*n)++] = (Iv){ia, ib};
    } else if (fabs(dx) > 1e-9) {
        /* horizontal segment: the body covers from xa to xb whenever the slice is within the tube's radius */
        if (fabs(ys - y0) <= rad) {
            double ia = dmax(xa, dmin(x0, x1)), ib = dmin(xb, dmax(x0, x1));
            if (ia < ib)
                out[(*n)++] = (Iv){ia, ib};
        }
    }
}

/* sorts and merges the intervals of one subscanline (so overlaps are a single branch) and accumulates them */
static void row_union(Row *r, Iv *ivs, int n, double ys) {
    if (n <= 0)
        return;
    qsort(ivs, (size_t)n, sizeof(Iv), ivcmp);
    double a = ivs[0].a, b = ivs[0].b;
    for (int i = 1;; i++) {
        if (i < n && ivs[i].a <= b) {
            if (ivs[i].b > b)
                b = ivs[i].b;
            continue;
        }
        row_add(r, a, b, ys);
        if (i >= n)
            break;
        a = ivs[i].a;
        b = ivs[i].b;
    }
}

/* ---- fills ---- */
static void fill_polygon(Ui2d *u, const double *xy, int n, long col, int alpha, int grad, double gy0, double gy1,
                         long gtop, long gbot) {
    if (n < 3 || !u)
        return;
    double ymin = xy[1], ymax = xy[1];
    for (int i = 1; i < n; i++) {
        ymin = dmin(ymin, xy[2 * i + 1]);
        ymax = dmax(ymax, xy[2 * i + 1]);
    }
    if (grad && gy1 <= gy0)
        grad = 0;
    int r0 = clampi((int)floor(ymin), 0, u->h - 1);
    int r1 = clampi((int)ceil(ymax) - 1, 0, u->h - 1);
    if (r0 > r1)
        return;
    double xsbuf[1024];
    Row row;
    for (int ry = r0; ry <= r1; ry++) {
        row_reset(&row, u, ry);
        if (grad)
            row_grad(&row, gy0, gy1, gtop, gbot);
        for (int j = 0; j < SUBS; j++) {
            double ys = ry + (0.2 * j + 0.1); /* 0.1 0.3 0.5 0.7 0.9 */
            if (ys <= ymin || ys > ymax)
                continue;
            int nx = 0;
            for (int i = 0; i < n; i++) {
                double ax = xy[2 * i], ay = xy[2 * i + 1];
                int k = i + 1 < n ? i + 1 : 0;
                double bx = xy[2 * k], by = xy[2 * k + 1];
                if (ay == by)
                    continue;
                double hi = dmax(ay, by), lo = dmin(ay, by);
                if (ys <= lo || ys > hi)
                    continue;
                double t = (ys - ay) / (by - ay);
                if (nx < (int)(sizeof xsbuf / sizeof *xsbuf))
                    xsbuf[nx++] = ax + (bx - ax) * t;
            }
            if (nx < 2)
                continue;
            qsort(xsbuf, (size_t)nx, sizeof(double), dcmp);
            for (int k = 0; k + 1 < nx; k += 2)
                row_add(&row, xsbuf[k], xsbuf[k + 1], ys);
        }
        row_commit(&row, col, alpha);
    }
}

/* solid disc */
static void fill_disc(Ui2d *u, double cx, double cy, double r, long col, int alpha) {
    if (r <= 0)
        return;
    int r0 = clampi((int)floor(cy - r), 0, u->h - 1);
    int r1 = clampi((int)ceil(cy + r) - 1, 0, u->h - 1);
    if (r0 > r1)
        return;
    Row row;
    for (int ry = r0; ry <= r1; ry++) {
        row_reset(&row, u, ry);
        for (int j = 0; j < SUBS; j++) {
            double ys = ry + (0.2 * j + 0.1);
            double d = fabs(ys - cy);
            if (d >= r)
                continue;
            double h = sqrt(r * r - d * d);
            row_add(&row, cx - h, cx + h, ys);
        }
        row_commit(&row, col, alpha);
    }
}

/* strokes: rounds caps and joins, in one merged cover */
static void stroke_rows(Ui2d *u, const Seg *segs, int nseg, double rad, long col, int alpha) {
    if (nseg <= 0 || !u || col == UI2D_NONE || rad <= 0)
        return;
    double ymin = 1e9, ymax = -1e9;
    for (int i = 0; i < nseg; i++) {
        ymin = dmin(ymin, dmin(segs[i].y0, segs[i].y1));
        ymax = dmax(ymax, dmax(segs[i].y0, segs[i].y1));
    }
    int r0 = clampi((int)floor(ymin - rad), 0, u->h - 1);
    int r1 = clampi((int)ceil(ymax + rad) - 1, 0, u->h - 1);
    if (r0 > r1)
        return;
    int snap = rad * 2 < 1.34; /* hairlines: horizontal / vertical runs keep 1 crisp pixel like the GDI pen */
    Seg *sg = (Seg *)malloc((size_t)nseg * sizeof(Seg));
    Iv *ivs = (Iv *)malloc((size_t)nseg * 3 * sizeof(Iv));
    if (!sg || !ivs) {
        free(sg);
        free(ivs);
        return;
    }
    memcpy(sg, segs, (size_t)nseg * sizeof(Seg));
    if (snap)
        for (int i = 0; i < nseg; i++) {
            if (fabs(sg[i].y1 - sg[i].y0) < 0.25)
                sg[i].y0 = sg[i].y1 = floor((sg[i].y0 + sg[i].y1) / 2) + 0.5;
            if (fabs(sg[i].x1 - sg[i].x0) < 0.25)
                sg[i].x0 = sg[i].x1 = floor((sg[i].x0 + sg[i].x1) / 2) + 0.5;
        }
    Row row;
    for (int ry = r0; ry <= r1; ry++) {
        row_reset(&row, u, ry);
        for (int j = 0; j < SUBS; j++) {
            double ys = ry + (0.2 * j + 0.1);
            int ni = 0;
            for (int i = 0; i < nseg; i++)
                seg_ivs(sg[i].x0, sg[i].y0, sg[i].x1, sg[i].y1, rad, ys, ivs, &ni, nseg * 3);
            row_union(&row, ivs, ni, ys);
        }
        row_commit(&row, col, alpha);
    }
    free(sg);
    free(ivs);
}

/* ---- paths of the shapes (as vertex rings) ---- */
#define MAXPTS 640

static int rrect_pts(double x, double y, double w, double h, double r, double *pts) {
    double mw = dmin(w, h) * 0.5 - 1;
    if (r > mw)
        r = mw > 0 ? mw : 0;
    if (r < 0)
        r = 0;
    int nseg = clampi((int)ceil(sqrt(r * 4)), 3, 24);
    int n = 0;
#define EP(px, py)                                                                                                     \
    do {                                                                                                               \
        if (n < MAXPTS) {                                                                                              \
            pts[2 * n] = px;                                                                                           \
            pts[2 * n + 1] = py;                                                                                       \
            n++;                                                                                                       \
        }                                                                                                              \
    } while (0)
    EP(x + r, y);
    EP(x + w - r, y);
    for (int k = 1; k <= nseg; k++) { /* top right corner */
        double a = -M_PI_2 + M_PI_2 * k / nseg;
        EP(x + w - r + r * cos(a), y + r + r * sin(a));
    }
    for (int k = 1; k <= nseg; k++) { /* bottom right corner */
        double a = k * M_PI_2 / nseg;
        EP(x + w - r + r * cos(a), y + h - r + r * sin(a));
    }
    EP(x + w - r, y + h);
    EP(x + r, y + h);
    for (int k = 1; k <= nseg; k++) { /* bottom left corner */
        double a = M_PI_2 + M_PI_2 * k / nseg;
        EP(x + r + r * cos(a), y + h - r + r * sin(a));
    }
    EP(x, y + h - r);
    EP(x, y + r);
    for (int k = 1; k <= nseg; k++) { /* top left corner */
        double a = M_PI + M_PI_2 * k / nseg;
        EP(x + r + r * cos(a), y + r + r * sin(a));
    }
#undef EP
    return n;
}

static int circle_pts(double cx, double cy, double r, double *pts) {
    int nseg = clampi((int)ceil(r * 1.5), 12, 220);
    for (int k = 0; k < nseg && k < MAXPTS; k++) {
        double a = 2 * M_PI * k / nseg;
        pts[2 * k] = cx + r * cos(a);
        pts[2 * k + 1] = cy + r * sin(a);
    }
    return nseg < MAXPTS ? nseg : MAXPTS;
}

static void ring_segs(const double *pts, int n, int closed, Seg *segs) {
    int s = 0;
    for (int i = 0; i + 1 < n; i++) {
        segs[s].x0 = pts[2 * i];
        segs[s].y0 = pts[2 * i + 1];
        segs[s].x1 = pts[2 * i + 2];
        segs[s].y1 = pts[2 * i + 3];
        s++;
    }
    if (closed && n > 2) {
        segs[s].x0 = pts[2 * (n - 1)];
        segs[s].y0 = pts[2 * (n - 1) + 1];
        segs[s].x1 = pts[0];
        segs[s].y1 = pts[1];
        s++;
    }
}

/* ---- public shapes ---- */
/* solid axis-aligned rectangle without anti-aliasing: the fast path for full-area tints */
void ui2d_rect_fill(Ui2d *u, double x, double y, double w, double h, long col, int alpha) {
    if (!u || col == UI2D_NONE)
        return;
    int x0 = clampi((int)ceil(x), 0, u->w), x1 = clampi((int)floor(x + w), 0, u->w);
    int y0 = clampi((int)ceil(y), 0, u->h), y1 = clampi((int)floor(y + h), 0, u->h);
    int sr = (col >> 16) & 255, sg = (col >> 8) & 255, sb = col & 255; /* 0xRRGGBB */
    int a8 = clampi(alpha, 0, 255), ia = 255 - a8;
    for (int yy = y0; yy < y1; yy++) {
        uint8_t *d = u->px + ((size_t)yy * u->w + x0) * 4;
        for (int xx = x0; xx < x1; xx++, d += 4) {
            d[0] = (uint8_t)((sr * a8 + d[0] * ia + 127) / 255);
            d[1] = (uint8_t)((sg * a8 + d[1] * ia + 127) / 255);
            d[2] = (uint8_t)((sb * a8 + d[2] * ia + 127) / 255);
            d[3] = (uint8_t)((255 * a8 + d[3] * ia + 127) / 255);
        }
    }
}

void ui2d_circle(Ui2d *u, double cx, double cy, double r, long fill, long stroke, double sw) {
    if (r <= 0 || !u)
        return;
    if (fill != UI2D_NONE)
        fill_disc(u, cx, cy, r, fill, 255);
    if (stroke != UI2D_NONE) {
        double pts[MAXPTS * 2];
        int n = circle_pts(cx, cy, r, pts);
        Seg *segs = (Seg *)malloc((size_t)n * sizeof(Seg));
        if (!segs)
            return;
        ring_segs(pts, n, 1, segs);
        stroke_rows(u, segs, n, dmax(sw * 0.5, 0.25), stroke, 255);
        free(segs);
    }
}

void ui2d_rrect(Ui2d *u, double x, double y, double w, double h, double r, long fill, long stroke, double sw) {
    if (!u)
        return;
    double pts[MAXPTS * 2];
    int n = rrect_pts(x, y, w, h, r, pts);
    if (n < 3)
        return;
    if (fill != UI2D_NONE)
        fill_polygon(u, pts, n, fill, 255, 0, 0, 0, 0, 0);
    if (stroke != UI2D_NONE) {
        Seg *segs = (Seg *)malloc((size_t)n * sizeof(Seg));
        if (!segs)
            return;
        ring_segs(pts, n, 1, segs);
        stroke_rows(u, segs, n, dmax(sw * 0.5, 0.25), stroke, 255);
        free(segs);
    }
}

void ui2d_rrect_fill_alpha(Ui2d *u, double x, double y, double w, double h, double r, long col, int alpha) {
    if (!u || col == UI2D_NONE)
        return;
    double pts[MAXPTS * 2];
    int n = rrect_pts(x, y, w, h, r, pts);
    if (n < 3)
        return;
    fill_polygon(u, pts, n, col, clampi(alpha, 0, 255), 0, 0, 0, 0, 0);
}

void ui2d_polygon(Ui2d *u, const double *xy, int n, long fill, long stroke, double sw) {
    if (!u || n < 2)
        return;
    if (fill != UI2D_NONE && n >= 3)
        fill_polygon(u, xy, n, fill, 255, 0, 0, 0, 0, 0);
    if (stroke != UI2D_NONE) {
        int nseg = n - 1;
        Seg *segs = (Seg *)malloc((size_t)(nseg + 1) * sizeof(Seg));
        if (!segs)
            return;
        ring_segs(xy, n, 1, segs);
        stroke_rows(u, segs, nseg + (n > 2 ? 1 : 0), dmax(sw * 0.5, 0.25), stroke, 255);
        free(segs);
    }
}

void ui2d_gradient(Ui2d *u, const double *xy, int n, long top, long bottom) {
    if (!u || n < 3)
        return;
    double ymin = xy[1], ymax = xy[1];
    for (int i = 1; i < n; i++) {
        ymin = dmin(ymin, xy[2 * i + 1]);
        ymax = dmax(ymax, xy[2 * i + 1]);
    }
    fill_polygon(u, xy, n, bottom, 255, 1, ymin, ymax, top, bottom);
}

void ui2d_polyline(Ui2d *u, const double *xy, int n, long stroke, double sw) {
    if (!u || n < 2 || stroke == UI2D_NONE)
        return;
    int nseg = n - 1;
    Seg *segs = (Seg *)malloc((size_t)nseg * sizeof(Seg));
    if (!segs)
        return;
    for (int i = 0; i < nseg; i++) {
        segs[i].x0 = xy[2 * i];
        segs[i].y0 = xy[2 * i + 1];
        segs[i].x1 = xy[2 * i + 2];
        segs[i].y1 = xy[2 * i + 3];
    }
    stroke_rows(u, segs, nseg, dmax(sw * 0.5, 0.25), stroke, 255);
    free(segs);
}

/* ---- fonts ---- */
#define G_HASH 1024
#define F_MAX 48

typedef struct Gl {
    struct Gl *next;
    unsigned cp;
    int w, h;       /* bitmap size */
    int bx, by;     /* box: left / top relative to the pen origin (by is negative above the baseline) */
    uint8_t *bm;    /* coverage, w*h */
} Gl;

typedef struct Face {
    stbtt_fontinfo info;
    double px;
    int bold, valid, gdi;
    float scale, asc, desc;
    int height;
    Gl *hash[G_HASH];
    int ngl;
} Face;

static Face faces[F_MAX];
static int face_ring = 0;
static stbtt_fontinfo info_reg, info_bold;
static int info_reg_ok = 0, info_bold_ok = 0;

static void face_evict(Face *f) {
    for (int i = 0; i < G_HASH; i++)
        for (Gl *g = f->hash[i]; g;) {
            Gl *nx = g->next;
            free(g->bm);
            free(g);
            g = nx;
        }
    memset(f->hash, 0, sizeof f->hash);
    f->ngl = 0;
    f->valid = 0;
}

/* a face whose text cell is px pixels tall (the height the Windows '-height' of CreateFontA asks for), cached. The
 * glyphs keep their size: the requested number is the cell (ascent + descent), like tmHeight was, so the layout the
 * GDI code tuned stays */
static Ui2dFont font_make(double px, int bold, int gdi) {
    if (px < 6)
        px = 6;
    if (px > 160)
        px = 160;
    bold = bold ? (bold >= 2 ? 2 : 1) : 0;
    px = (double)lround(px); /* the same size always lands in the same cache entry */
    for (int i = 0; i < F_MAX; i++)
        if (faces[i].valid && faces[i].px == px && faces[i].bold == bold && faces[i].gdi == gdi)
            return &faces[i];
    int base_ok = bold ? info_bold_ok : info_reg_ok;
    if (!base_ok) {
        const unsigned char *data = bold ? ui2d_ttf_bold : ui2d_ttf_regular;
        if (stbtt_InitFont(bold ? &info_bold : &info_reg, data, 0)) {
            if (bold)
                info_bold_ok = 1;
            else
                info_reg_ok = 1;
        } else
            return NULL;
    }
    Face *f = NULL;
    for (int i = 0; i < F_MAX; i++)
        if (!faces[i].valid)
            f = &faces[i];
    if (!f) { /* all busy: replace round-robin */
        f = &faces[face_ring];
        face_ring = (face_ring + 1) % F_MAX;
        face_evict(f);
    }
    memset(f, 0, sizeof *f);
    f->px = px;
    f->bold = bold;
    f->gdi = gdi;
    f->valid = 1;
    f->info = bold ? info_bold : info_reg;
    if (gdi) {
        /* what CreateFontA(-px, ..., "Segoe UI") gave the Windows build: em = px. Noto Sans is wider than Segoe UI in
         * lower case, so it matches the text width at about 0.935 of that em (measured against GetTextExtentPoint32 on
         * several menu strings and sizes, and on screenshots of both builds); the bold face is only used for the
         * title, all in capitals, where Noto Bold is narrower than Segoe UI Bold, hence its 1.0. The cell is Segoe's own
         * (tmHeight 1.33 px, baseline 1.075 px down, as measured at the sizes the menu uses) so the line spacing the menu
         * layout was tuned with stays */
        f->scale = (float)stbtt_ScaleForMappingEmToPixels(&f->info, px * (bold ? 1.0 : 0.935));
        f->height = (int)lround(px * 1.33);
        f->asc = (float)lround(px * 1.075);
        f->desc = (float)f->height - f->asc;
        return f;
    }
    /* scaled so that ascent + descent come out exactly `px` (the cell height) */
    int asc = 0, desc = 0, gap = 0;
    stbtt_GetFontVMetrics(&f->info, &asc, &desc, &gap);
    int cell = asc - desc; /* descent is negative: the cell */
    f->scale = cell > 0 ? (float)(px / cell) : (float)stbtt_ScaleForMappingEmToPixels(&f->info, px);
    f->asc = (float)(asc * f->scale);
    f->desc = (float)(-desc * f->scale);
    f->height = (int)(f->asc + f->desc + 0.5f);
    return f;
}

Ui2dFont ui2d_font_px(double px, int bold) {
    return font_make(px, bold, 0);
}

Ui2dFont ui2d_font_gdi(double px, int bold) {
    return font_make(px, bold, 1);
}

void ui2d_font_free(Ui2dFont f) {
    (void)f; /* faces are shared and cached by size; nothing to free */
}

int ui2d_font_height(Ui2dFont f) {
    return f ? ((Face *)f)->height : 0;
}

/* code point of a UTF-8 string (an invalid byte falls back to code page 1252, like the menus of the ANSI code page
 * used before) */
static unsigned cp1252(unsigned b);

static unsigned next_cp(const char **pp) {
    const unsigned char *p = (const unsigned char *)(*pp);
    *pp = (*pp) + 1;
    if (*p < 0x80)
        return *p;
    /* as a fallback, a non-UTF-8 byte maps through CP1252 */
    if (*p < 0xC0 || *p > 0xF4)
        return cp1252(*p);
    unsigned c;
    int extra;
    if ((*p & 0xE0) == 0xC0) {
        c = *p & 0x1F;
        extra = 1;
    } else if ((*p & 0xF0) == 0xE0) {
        c = *p & 0x0F;
        extra = 2;
    } else {
        c = *p & 0x07;
        extra = 3;
    }
    for (int i = 0; i < extra; i++) {
        if ((p[1] & 0xC0) != 0x80)
            return cp1252(*p);
        c = c * 64 + (p[1] & 0x3F);
        p++;
        *pp = (*pp) + 1;
    }
    return c;
}

/* CP1252 rather than Latin-1 for the bytes that are only defined there */
static unsigned cp1252(unsigned b) {
    static const unsigned t[32] = {0x20AC, 0,      0x201A, 0x0192, 0x201E, 0x2026, 0x2020, 0x2021,
                                   0x02C6, 0x2030, 0x0160, 0x2039, 0x0152, 0,      0x017D, 0,
                                   0,      0x2018, 0x2019, 0x201C, 0x201D, 0x2022, 0x2013, 0x2014,
                                   0x02DC, 0x2122, 0x0161, 0x203A, 0x0153, 0,      0x017E, 0x0178};
    return b >= 0x80 && b < 0xA0 && t[b - 0x80] ? t[b - 0x80] : b;
}

/* the cached bitmap of one glyph; the caller does not free it */
static Gl *gl_fetch(Face *f, unsigned cp) {
    unsigned h = (cp * 2654435761u) & (G_HASH - 1);
    for (Gl *g = f->hash[h]; g; g = g->next)
        if (g->cp == cp)
            return g;
    if (f->ngl > 8192) { /* defence: a cache full of rare glyphs -> forget it */
        face_evict(f);
        f->ngl = 0;
    }
    int ix0, iy0, ix1, iy1;
    stbtt_GetCodepointBitmapBox(&f->info, (int)cp, f->scale, f->scale, &ix0, &iy0, &ix1, &iy1);
    int w = ix1 - ix0, gh = iy1 - iy0;
    Gl *g;
    if (w <= 0 || gh <= 0) {
        g = (Gl *)calloc(1, sizeof(Gl));
        if (!g)
            return NULL;
        g->cp = cp;
        g->next = f->hash[h];
        f->hash[h] = g;
        f->ngl++;
        return g;
    }
    int bw = w, bh = gh, bx = ix0, by = iy0;
    uint8_t *bm = (uint8_t *)calloc((size_t)bw * bh, 1);
    if (!bm)
        return NULL;
    stbtt_MakeCodepointBitmap(&f->info, bm, bw, bh, bw, f->scale, f->scale, (int)cp);
    if (f->bold >= 2) { /* extra bold: the bold glyph widened one pixel all around */
        uint8_t *d2 = (uint8_t *)calloc((size_t)(bw + 2) * (bh + 2), 1);
        if (d2) {
            for (int y = 0; y < bh; y++)
                for (int x = 0; x < bw; x++) {
                    uint8_t best = bm[(size_t)y * bw + x];
                    for (int dy = -1; dy <= 1; dy++)
                        for (int dx = -1; dx <= 1; dx++) {
                            int sx = x + dx, sy = y + dy;
                            if (sx >= 0 && sx < bw && sy >= 0 && sy < bh) {
                                uint8_t v = bm[(size_t)sy * bw + sx];
                                if (v > best)
                                    best = v;
                            }
                        }
                    d2[(size_t)(y + 1) * (bw + 2) + (x + 1)] = best;
                }
            free(bm);
            bm = d2;
            bw += 2;
            bh += 2;
            bx -= 1;
            by -= 1;
        }
    }
    g = (Gl *)calloc(1, sizeof(Gl));
    if (!g) {
        free(bm);
        return NULL;
    }
    g->cp = cp;
    g->w = bw;
    g->h = bh;
    g->bx = bx;
    g->by = by;
    g->bm = bm;
    g->next = f->hash[h];
    f->hash[h] = g;
    f->ngl++;
    return g;
}

static void blit_glyph(Ui2d *u, Gl *g, double x, double ybase, long col) {
    int left = (int)lround(x + g->bx);
    int top = (int)lround(ybase + g->by);
    int x0 = left < 0 ? 0 : left, x1 = left + g->w > u->w ? u->w : left + g->w;
    int y0 = top < 0 ? 0 : top, y1 = top + g->h > u->h ? u->h : top + g->h;
    if (x1 <= x0 || y1 <= y0)
        return;
    int fr = (col >> 16) & 255, fg = (col >> 8) & 255, fb = col & 255; /* 0xRRGGBB */
    for (int y = y0; y < y1; y++) {
        const uint8_t *src = g->bm + (size_t)(y - top) * g->w + (x0 - left);
        uint8_t *d = u->px + ((size_t)y * u->w + x0) * 4;
        for (int x = x0; x < x1; x++, src++, d += 4) {
            int a8 = *src;
            if (!a8)
                continue;
            int ia = 255 - a8;
            d[0] = (uint8_t)((fr * a8 + d[0] * ia + 127) / 255);
            d[1] = (uint8_t)((fg * a8 + d[1] * ia + 127) / 255);
            d[2] = (uint8_t)((fb * a8 + d[2] * ia + 127) / 255);
            d[3] = (uint8_t)((255 * a8 + d[3] * ia + 127) / 255);
        }
    }
}

/* walks the string: it measures (draw 0) or draws; returns the right edge of the text */
static double text_run(Face *f, const char *s, double x, double ybase, Ui2d *u, long col, int draw) {
    if (!f)
        return x;
    const char *p = s;
    unsigned prev = 0;
    while (*p) {
        unsigned cp = next_cp(&p);
        if (!cp)
            break;
        /* stb uses font units (int); the pixel advance is the font unit advance times the cell scale */
        int adv = 0, lsb = 0;
        stbtt_GetCodepointHMetrics(&f->info, (int)cp, &adv, &lsb);
        if (prev)
            x += stbtt_GetCodepointKernAdvance(&f->info, (int)prev, (int)cp) * f->scale;
        if (draw && cp != ' ') {
            Gl *g = gl_fetch(f, cp);
            if (g && g->bm)
                blit_glyph(u, g, x, ybase, col);
        }
        x += adv * (double)f->scale;
        prev = cp;
    }
    return x;
}

double ui2d_text_w(Ui2dFont f, const char *s) {
    return f ? text_run((Face *)f, s, 0, -1, NULL, 0, 0) : 0.0;
}

void ui2d_text_top(Ui2d *u, Ui2dFont f, const char *s, double x, double ytop, long col) {
    Face *fc = (Face *)f;
    if (!fc || col == UI2D_NONE)
        return;
    text_run(fc, s, x, ytop + fc->asc, u, col, 1);
}

void ui2d_text(Ui2d *u, Ui2dFont f, const char *s, double x, double ycenter, long col, int centered) {
    Face *fc = (Face *)f;
    if (!fc || col == UI2D_NONE)
        return;
    if (centered) {
        double w = ui2d_text_w(f, s);
        x -= w / 2;
    }
    text_run(fc, s, x, ycenter - fc->height / 2.0 + fc->asc, u, col, 1);
}
