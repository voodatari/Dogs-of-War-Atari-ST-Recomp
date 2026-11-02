/*
 * modpack.c - The example graphics pack (assets/mod), made from the player's own graphics dump.
 *
 * The pack contains pictures of the game itself, so it cannot be handed out: what the program carries (modpack_data.c)
 * is only what the pack CHANGES in the dump: for each picture that differs, the positions of the changed pixels (run
 * lengths) and their new values. Right after the dump (assets/original) exists and while assets/mod does not, the pack
 * is made by copying the dump and applying those differences. Nothing is written unless every picture, once rebuilt,
 * has the CRC-32 it had when the differences were taken (a dump of another version of the game would give a wrong
 * pack).
 *
 * The data (a raw deflate stream) is, once inflated:
 *   u32 number of pictures; for each one:
 *     u8 length of the name, the name (path inside the pack, e.g. "screens/hud_left.png")
 *     u8 channels (4 = RGBA, 1 = palette indices, with the grey ramp the dump uses), u16 width, u16 height,
 *     u32 CRC-32 of the rebuilt pixels, u32 number of runs, u32 number of changed pixels
 *     the runs as varints: pixels that stay, pixels that change, stay, change... (in reading order)
 *     the new values by planes: first the first channel of every changed pixel, then the second...
 * It was made by comparing the two folders pixel by pixel (the PNG files themselves are not the same bytes).
 */
#include "host.h"
#include "port.h"

extern const size_t modpack_raw_size, modpack_size;
extern const uint8_t modpack_data[];

typedef struct {
    char src[800], dst[800];
    int ok;
} CopyJob;

static int copy_dir(const char *src, const char *dst);

static int copy_file_cb(const char *name, void *context) {
    CopyJob *j = context;
    if (name[0] == '.')
        return 1;
    char s[1000], d[1000];
    snprintf(s, sizeof s, "%s/%s", j->src, name);
    snprintf(d, sizeof d, "%s/%s", j->dst, name);
    size_t n = 0;
    uint8_t *b = read_file(s, &n);
    if (!b || !write_file(d, b, n))
        j->ok = 0;
    free(b);
    return j->ok;
}

static int copy_dir_cb(const char *name, void *context) {
    CopyJob *j = context;
    if (name[0] == '.')
        return 1;
    char s[1000], d[1000];
    snprintf(s, sizeof s, "%s/%s", j->src, name);
    snprintf(d, sizeof d, "%s/%s", j->dst, name);
    if (!copy_dir(s, d))
        j->ok = 0;
    return j->ok;
}

/* Copies a folder with everything in it. */
static int copy_dir(const char *src, const char *dst) {
    CopyJob j;
    snprintf(j.src, sizeof j.src, "%s", src);
    snprintf(j.dst, sizeof j.dst, "%s", dst);
    j.ok = port_mkdir(dst);
    if (j.ok)
        port_list_files(src, NULL, copy_file_cb, &j);
    if (j.ok)
        port_list_dirs(src, copy_dir_cb, &j);
    return j.ok;
}

typedef struct {
    char name[256];
    int ch, w, h;
    uint8_t *px;
} Rebuilt;

static uint32_t get32(const uint8_t *p) {
    return p[0] | (uint32_t)p[1] << 8 | (uint32_t)p[2] << 16 | (uint32_t)p[3] << 24;
}

/* Reads a varint; NULL if the data ends. */
static const uint8_t *varint(const uint8_t *p, const uint8_t *end, size_t *v) {
    size_t r = 0;
    for (int s = 0; p < end && s < 35; s += 7) {
        r |= (size_t)(*p & 0x7F) << s;
        if (!(*p++ & 0x80)) {
            *v = r;
            return p;
        }
    }
    return NULL;
}

static void free_rebuilt(Rebuilt *r, int n) {
    for (int i = 0; i < n; i++)
        free(r[i].px);
    free(r);
}

/* Applies one picture's differences to the dump's picture, in memory. p is at the runs; returns where the next picture
 * starts, or NULL if something does not fit. */
static const uint8_t *apply(Rebuilt *r, const uint8_t *p, const uint8_t *end, uint32_t nruns, uint32_t nvals,
                            uint32_t crc) {
    size_t total = (size_t)r->w * (size_t)r->h, pos = 0, vi = 0;
    const uint8_t *runs = p;
    for (uint32_t k = 0; k < nruns; k++) { /* the values come after the runs */
        size_t v;
        if (!(p = varint(p, end, &v)))
            return NULL;
    }
    if ((size_t)(end - p) < (size_t)nvals * (size_t)r->ch)
        return NULL;
    const uint8_t *vals = p;
    for (uint32_t k = 0; k < nruns; k++) {
        size_t v;
        runs = varint(runs, end, &v);
        if (pos + v > total)
            return NULL;
        if (k & 1) { /* a run of changed pixels */
            if (vi + v > nvals)
                return NULL;
            for (size_t i = 0; i < v; i++, vi++, pos++)
                for (int c = 0; c < r->ch; c++)
                    r->px[pos * (size_t)r->ch + (size_t)c] = vals[(size_t)c * nvals + vi];
        } else
            pos += v;
    }
    if (vi != nvals || png_crc32(r->px, total * (size_t)r->ch) != crc)
        return NULL;
    return vals + (size_t)nvals * (size_t)r->ch;
}

/* Applies the differences to the dump, in memory. Returns the pictures (count in *count) or NULL if anything does not
 * fit (a missing or different picture). */
static Rebuilt *rebuild(const char *assets_root, int *count) {
    uint8_t *raw = malloc(modpack_raw_size);
    if (!raw || !png_inflate(modpack_data, modpack_size, raw, modpack_raw_size)) {
        free(raw);
        return NULL;
    }
    const uint8_t *p = raw, *end = raw + modpack_raw_size;
    int n = (int)get32(p), done = 0;
    p += 4;
    Rebuilt *out = calloc((size_t)n, sizeof *out);
    for (; out && done < n; done++) {
        Rebuilt *r = &out[done];
        if (end - p < 1 || end - p < 1 + p[0] + 17)
            break;
        int len = p[0];
        memcpy(r->name, p + 1, (size_t)len);
        p += 1 + len;
        r->ch = p[0];
        r->w = p[1] | p[2] << 8;
        r->h = p[3] | p[4] << 8;
        uint32_t crc = get32(p + 5), nruns = get32(p + 9), nvals = get32(p + 13);
        p += 17;
        char path[1000];
        snprintf(path, sizeof path, "%s/original/%s", assets_root, r->name);
        int w = 0, h = 0;
        if (r->ch != 1 && r->ch != 4)
            break;
        r->px = r->ch == 1 ? png_read_indexed(path, &w, &h) : png_read_rgba(path, &w, &h);
        if (!r->px || w != r->w || h != r->h || !(p = apply(r, p, end, nruns, nvals, crc)))
            break;
    }
    free(raw);
    if (!out || done < n) {
        if (out)
            host_log("graphics pack mod: the dump does not match the pack (%s); the pack is not made", out[done].name);
        free_rebuilt(out, n);
        return NULL;
    }
    *count = n;
    return out;
}

/* If the dump exists and the pack "mod" does not, makes it. Returns 1 if the pack was made. */
int modpack_make_if_missing(const char *assets_root) {
    char index[800], orig[800], mod[800];
    snprintf(index, sizeof index, "%s/original/index.json", assets_root);
    snprintf(orig, sizeof orig, "%s/original", assets_root);
    snprintf(mod, sizeof mod, "%s/mod", assets_root);
    if (!file_exists(index) || dir_exists(mod))
        return 0;
    int n = 0;
    Rebuilt *pics = rebuild(assets_root, &n);
    if (!pics)
        return 0;
    uint8_t grey[768] = {0};
    for (int i = 0; i < 16; i++)
        grey[i * 3] = grey[i * 3 + 1] = grey[i * 3 + 2] = (uint8_t)(i * 16);
    int ok = copy_dir(orig, mod);
    for (int i = 0; i < n && ok; i++) {
        char path[1000];
        snprintf(path, sizeof path, "%s/%s", mod, pics[i].name);
        ok = pics[i].ch == 1 ? png_write_indexed(path, pics[i].px, pics[i].w, pics[i].h, grey)
                             : png_write(path, pics[i].px, pics[i].w, pics[i].h, 4);
    }
    host_log("graphics pack mod: %s (%d pictures differ from the dump)", ok ? "made from the dump" : "FAILED", n);
    free_rebuilt(pics, n);
    return ok;
}
