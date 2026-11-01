/*
 * padmap_ui2d.c - Portable (ui2d) backend of the pad picture (see padmap_backend.h). It draws at 3x with the small
 * open 2D library (source/port/ui2d.c) so that every operating system draws exactly the same picture; the pixels that
 * ui2d left untouched are transparent.
 */
#include "padmap_backend.h"
#include "ui2d.h"
#include <math.h>

#define SS 3
/* the canvas covers that area of units at 3x so the edges look smooth when the menu scales the picture down */
static double ox, oy, cw, ch;
static Ui2d *cu;

void pmb_begin(double x0, double y0, double w, double h) {
    ox = x0;
    oy = y0;
    cw = w;
    ch = h;
    cu = ui2d_new((int)lround(w * SS), (int)lround(h * SS));
}

uint8_t *pmb_end(int *pw, int *ph) {
    if (!cu) {
        *pw = 0;
        *ph = 0;
        return NULL;
    }
    uint8_t *px = ui2d_take(cu, pw, ph);
    cu = NULL;
    return px;
}

void pmb_circle(double cx, double cy, double r, long fill, long stroke, double sw) {
    if (!cu)
        return;
    ui2d_circle(cu, (cx - ox) * SS, (cy - oy) * SS, r * SS, fill, stroke, sw * SS);
}

void pmb_rrect(double x, double y, double w, double h, double r, long fill, long stroke, double sw) {
    if (!cu)
        return;
    ui2d_rrect(cu, (x - ox) * SS, (y - oy) * SS, w * SS, h * SS, r * SS, fill, stroke, sw * SS);
}

void pmb_polygon(const double *xy, int n, long fill, long stroke, double sw) {
    if (!cu)
        return;
    double *v = (double *)malloc((size_t)n * 2 * sizeof(double));
    if (!v)
        return;
    for (int i = 0; i < n; i++) {
        v[2 * i] = (xy[2 * i] - ox) * SS;
        v[2 * i + 1] = (xy[2 * i + 1] - oy) * SS;
    }
    ui2d_polygon(cu, v, n, fill, stroke, sw * SS);
    free(v);
}

void pmb_polyline(const double *xy, int n, long stroke, double sw) {
    if (!cu)
        return;
    double *v = (double *)malloc((size_t)n * 2 * sizeof(double));
    if (!v)
        return;
    for (int i = 0; i < n; i++) {
        v[2 * i] = (xy[2 * i] - ox) * SS;
        v[2 * i + 1] = (xy[2 * i + 1] - oy) * SS;
    }
    ui2d_polyline(cu, v, n, stroke, sw * SS);
    free(v);
}

void pmb_polygon_gradient(const double *xy, int n, long top, long bottom) {
    if (!cu)
        return;
    double *v = (double *)malloc((size_t)n * 2 * sizeof(double));
    if (!v)
        return;
    for (int i = 0; i < n; i++) {
        v[2 * i] = (xy[2 * i] - ox) * SS;
        v[2 * i + 1] = (xy[2 * i + 1] - oy) * SS;
    }
    ui2d_gradient(cu, v, n, top, bottom);
    free(v);
}

PmFont pmb_font(double size, int bold) {
    /* bold: 0 normal, 1 semibold (the bold face), 2 extra bold (bold widened): ui2d_font_px knows the three */
    return ui2d_font_px(size * SS, bold);
}

void pmb_font_free(PmFont f) {
    ui2d_font_free(f);
}

double pmb_text_w(PmFont f, const char *s) {
    return ui2d_text_w(f, s) / SS;
}

/* left edge (or centre if centered) at x, vertically centred on ycenter */
void pmb_text(PmFont f, const char *s, double x, double ycenter, long col, int centered) {
    if (!cu)
        return;
    ui2d_text(cu, f, s, (x - ox) * SS, (ycenter - oy) * SS, col, centered);
}
