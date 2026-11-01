/*
 * ui2d.h - A small dependency-free 2D drawing library in portable C: an antialiased rasterizer for RGBA canvases
 * plus text drawn with the bundled Noto Sans (stb_truetype, thirdparty/).
 *
 * It was written to replace every GDI call of the interface (the options menu of menu.c and the picture of the gamepad
 * of padmap.c) with routines that work on any operating system: it only needs stdlib + math to build, so the same
 * interface drawing runs on Windows, Linux, MacOS...
 *
 * Canvas: RGBA, one byte per channel, straight (not premultiplied) alpha, rows from the top, stride = width * 4.
 * Colour parameters are 0xRRGGBB, or UI2D_NONE (-1) for "don't draw". All operations composite "over" with their
 * coverage: the canvas keeps whatever was drawn before.
 *
 * Drawings keep an alpha of 255 (fully opaque) except in ui2d_rrect_fill_alpha, which makes translucent panels
 * possible. Text and shapes leave partial alpha only at their antialiased edges.
 */
#ifndef UI2D_H
#define UI2D_H
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define UI2D_NONE (-1L)

typedef struct Ui2d Ui2d;

/* ---- canvas ---- */
/* a new transparent canvas of that size in pixels (malloc; NULL if out of memory) */
Ui2d *ui2d_new(int w, int h);
/* releases the struct but keeps its pixels (malloc'd W*H*4 RGBA); the width and height are updated */
uint8_t *ui2d_take(Ui2d *u, int *w, int *h);
void ui2d_free(Ui2d *u);

/* ---- shapes ---- */
/* solid axis-aligned rectangle without anti-aliasing: the fast path for full-area tints (a whole canvas dim, the
 * core of a panel) */
void ui2d_rect_fill(Ui2d *u, double x, double y, double w, double h, long col, int alpha);
void ui2d_circle(Ui2d *u, double cx, double cy, double r, long fill, long stroke, double sw);
void ui2d_rrect(Ui2d *u, double x, double y, double w, double h, double r, long fill, long stroke, double sw);
/* like ui2d_rrect without stroke: the fill covers the pixels with that constant alpha (menu panel translucency) */
void ui2d_rrect_fill_alpha(Ui2d *u, double x, double y, double w, double h, double r, long col, int alpha);
/* closed polygon: xy = x0, y0, x1, y1, ... (n points) */
void ui2d_polygon(Ui2d *u, const double *xy, int n, long fill, long stroke, double sw);
/* open stroke with round ends and joins; also works with one pair of points as a simple line */
void ui2d_polyline(Ui2d *u, const double *xy, int n, long stroke, double sw);
/* fills the closed polygon with a vertical gradient from `top` (at the top of its box) to `bottom` (at its bottom) */
void ui2d_gradient(Ui2d *u, const double *xy, int n, long top, long bottom);

/* ---- text ---- */
/* a face of that pixel height (em height, like the Windows '-height' in CreateFontA): characters are antialiased from
 * the bundled font; bold 0 = regular, 1 = bold, 2 = extra bold (faces are cached and shared; don't guess what
 * ui2d_font_free frees: it is only a hook, keeping the call sites of the GDI code) */
typedef void *Ui2dFont;
Ui2dFont ui2d_font_px(double px, int bold);
void ui2d_font_free(Ui2dFont f);
/* height of the text cell in pixels (the ascent + descent: what the Windows TEXTMETRIC tmHeight was) */
int ui2d_font_height(Ui2dFont f);
/* width of the string in pixels (kerning included); s is UTF-8 (invalid bytes fall back to the 1252 code page) */
double ui2d_text_w(Ui2dFont f, const char *s);
/* text with the middle of the cell on ycenter: centred on x when centered, else x is the left edge */
void ui2d_text(Ui2d *u, Ui2dFont f, const char *s, double x, double ycenter, long col, int centered);
/* text with the top of its cell on ytop (like GDI TextOutA with its default TA_TOP) */
void ui2d_text_top(Ui2d *u, Ui2dFont f, const char *s, double x, double ytop, long col);

/* the canvas pixels for direct painting (W*H*4 straight RGBA, rows from the top): same memory the drawing uses */
uint8_t *ui2d_px(Ui2d *u, int *w, int *h);

#ifdef __cplusplus
}
#endif
#endif
