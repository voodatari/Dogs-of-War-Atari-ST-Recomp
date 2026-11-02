/*
 * amiga_disk.c - Finds the music data of the Amiga version of Dogs of War in the player's own disk file.
 *
 * The program does not include any game file: the player supplies a disk image (.adf) or the WHDLoad package (.lha) of
 * the Amiga game, and the 61,166 bytes of the sound driver (its songs and its samples) are read from it here. Both
 * files are recognised by their content (the CRC32 of that block), not by their names.
 *
 *   .adf  a standard 880 KB disk (the game loads from raw tracks, not from files): the block lies in 12 pieces of 10
 *         sectors, one every second track, from byte 0x73800;
 *   .lha  the WHDLoad package: its Disk.1 holds the block in one piece at offset 0x2F800. Only the methods -lh0- and
 *         -lh5- are read (the ones such archives use), with level 0 and level 1 headers.
 */
#include "amiga_disk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ADF_SIZE   901120u
#define ADF_START  0x73800u
#define ADF_STRIDE 0x2C00u
#define ADF_PIECE  0x1400u
#define ADF_PIECES 12
#define DISK1_OFFS 0x2F800u

static uint32_t crc32_block(const uint8_t *p, size_t n) {
    uint32_t crc = 0xFFFFFFFFu;
    for (size_t i = 0; i < n; i++) {
        crc ^= p[i];
        for (int k = 0; k < 8; k++)
            crc = (crc >> 1) ^ (0xEDB88320u & (uint32_t)-(int32_t)(crc & 1));
    }
    return ~crc;
}

static uint8_t *slurp(const char *path, size_t *n) {
    FILE *f = fopen(path, "rb");
    if (!f)
        return NULL;
    fseek(f, 0, SEEK_END);
    long len = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (len <= 0 || len > (64L << 20)) {
        fclose(f);
        return NULL;
    }
    uint8_t *buf = (uint8_t *)malloc((size_t)len);
    if (buf && fread(buf, 1, (size_t)len, f) != (size_t)len) {
        free(buf);
        buf = NULL;
    }
    fclose(f);
    if (buf)
        *n = (size_t)len;
    return buf;
}

/* ---- LH5 (LHArc / LZH, 8 KB window) ---- */
typedef struct {
    const uint8_t *d;
    size_t n, pos; /* pos in bits */
} Bits;
static unsigned get_bits(Bits *b, int n) {
    unsigned v = 0;
    while (n-- > 0) {
        size_t byte = b->pos >> 3;
        unsigned bit = byte < b->n ? (b->d[byte] >> (7 - (b->pos & 7))) & 1u : 0u;
        v = (v << 1) | bit;
        b->pos++;
    }
    return v;
}

/* canonical Huffman code: shorter codes first, equal lengths in symbol order */
typedef struct {
    int single; /* >= 0: the only symbol (zero-length code) */
    int maxl;
    int count[18], first[18], offs[18];
    uint16_t syms[512];
} Huff;

static void huff_build(Huff *h, const uint8_t *lens, int n) {
    memset(h, 0, sizeof *h);
    h->single = -1;
    for (int i = 0; i < n; i++)
        if (lens[i]) {
            h->count[lens[i]]++;
            if (lens[i] > h->maxl)
                h->maxl = lens[i];
        }
    int code = 0, idx = 0;
    for (int l = 1; l <= h->maxl; l++) {
        h->first[l] = code;
        h->offs[l] = idx;
        idx += h->count[l];
        code = (code + h->count[l]) << 1;
    }
    int pos[18];
    memcpy(pos, h->offs, sizeof pos);
    for (int s = 0; s < n; s++)
        if (lens[s])
            h->syms[pos[lens[s]]++] = (uint16_t)s;
}

static int huff_decode(const Huff *h, Bits *b) {
    if (h->single >= 0)
        return h->single;
    int code = 0;
    for (int l = 1; l <= h->maxl; l++) {
        code = (code << 1) | (int)get_bits(b, 1);
        if (h->count[l] && code >= h->first[l] && code < h->first[l] + h->count[l])
            return h->syms[h->offs[l] + code - h->first[l]];
    }
    return -1;
}

static void read_pt_len(Huff *h, Bits *b, int nn, int nbit, int i_special) {
    uint8_t lens[32] = {0};
    int n = (int)get_bits(b, nbit);
    if (n == 0) {
        memset(h, 0, sizeof *h);
        h->single = (int)get_bits(b, nbit);
        return;
    }
    if (n > nn)
        n = nn;
    int i = 0;
    while (i < n) {
        int c = (int)get_bits(b, 3);
        if (c == 7)
            while (get_bits(b, 1) && c < 16)
                c++;
        lens[i++] = (uint8_t)c;
        if (i == i_special) {
            int z = (int)get_bits(b, 2);
            while (z-- > 0 && i < nn)
                lens[i++] = 0;
        }
    }
    huff_build(h, lens, nn);
}

static void read_c_len(Huff *h, Bits *b, const Huff *pt) {
    uint8_t lens[510] = {0};
    int n = (int)get_bits(b, 9);
    if (n == 0) {
        memset(h, 0, sizeof *h);
        h->single = (int)get_bits(b, 9);
        return;
    }
    if (n > 510)
        n = 510;
    int i = 0;
    while (i < n) {
        int c = huff_decode(pt, b);
        if (c < 0)
            break;
        if (c <= 2) {
            c = c == 0 ? 1 : c == 1 ? (int)get_bits(b, 4) + 3 : (int)get_bits(b, 9) + 20;
            while (c-- > 0 && i < 510)
                lens[i++] = 0;
        } else
            lens[i++] = (uint8_t)(c - 2);
    }
    huff_build(h, lens, 510);
}

static uint8_t *lh5_unpack(const uint8_t *src, size_t n, size_t orig) {
    uint8_t *out = (uint8_t *)malloc(orig ? orig : 1);
    if (!out)
        return NULL;
    Bits b = {src, n, 0};
    Huff ct, pt, tt;
    size_t len = 0, blocksize = 0;
    memset(&ct, 0, sizeof ct);
    memset(&pt, 0, sizeof pt);
    while (len < orig) {
        if (blocksize == 0) {
            blocksize = get_bits(&b, 16);
            read_pt_len(&tt, &b, 19, 5, 3);
            read_c_len(&ct, &b, &tt);
            read_pt_len(&pt, &b, 14, 4, -1);
            if (b.pos > n * 8 + 64)
                break;
        }
        blocksize--;
        int c = huff_decode(&ct, &b);
        if (c < 0)
            break;
        if (c < 256)
            out[len++] = (uint8_t)c;
        else {
            int count = c - 256 + 3;
            int j = huff_decode(&pt, &b);
            if (j < 0)
                break;
            if (j != 0)
                j = (1 << (j - 1)) + (int)get_bits(&b, j - 1);
            for (int k = 0; k < count && len < orig; k++) {
                long s = (long)len - j - 1;
                out[len] = s >= 0 ? out[s] : 0;
                len++;
            }
        }
    }
    if (len < orig) {
        free(out);
        return NULL;
    }
    return out;
}

static uint32_t le32(const uint8_t *p) {
    return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

/* Unpacks the file called `want` (case-insensitive) of an LHA archive: malloc'd, *size = its length; NULL if it is not
 * there */
static uint8_t *lha_extract(const uint8_t *d, size_t n, const char *want, size_t *size) {
    size_t pos = 0;
    while (pos + 22 < n && d[pos]) {
        unsigned hs = d[pos], level = d[pos + 20], nl = d[pos + 21];
        if (memcmp(d + pos + 2, "-lh", 3) || d[pos + 6] != '-' || (level != 0 && level != 1) || pos + 22 + nl + 2 > n)
            return NULL;
        char method = (char)d[pos + 5];
        uint32_t packed = le32(d + pos + 7), orig = le32(d + pos + 11);
        char name[256];
        memcpy(name, d + pos + 22, nl);
        name[nl] = 0;
        size_t start = pos + 2 + hs, ext = 0;
        if (level == 1) { /* extended headers follow the base one; the packed size includes them */
            size_t cur = (size_t)d[pos + 22 + nl + 3] | ((size_t)d[pos + 22 + nl + 4] << 8);
            while (cur && start + ext + cur <= n && cur >= 3) {
                size_t nxt = (size_t)d[start + ext + cur - 2] | ((size_t)d[start + ext + cur - 1] << 8);
                ext += cur;
                cur = nxt;
            }
        }
        size_t data = start + ext;
        if (packed < ext || data + (packed - ext) > n)
            return NULL;
        size_t plen = packed - ext;
        const char *base = strrchr(name, '/');
        base = base ? base + 1 : name;
        int same = 1;
        for (size_t i = 0;; i++) {
            char a = want[i], c = base[i];
            if (a >= 'A' && a <= 'Z')
                a = (char)(a + 32);
            if (c >= 'A' && c <= 'Z')
                c = (char)(c + 32);
            if (a != c) {
                same = 0;
                break;
            }
            if (!a)
                break;
        }
        if (same) {
            uint8_t *out = NULL;
            if (method == '0' && orig <= plen) {
                out = (uint8_t *)malloc(orig ? orig : 1);
                if (out)
                    memcpy(out, d + data, orig);
            } else if (method == '5')
                out = lh5_unpack(d + data, plen, orig);
            if (out)
                *size = orig;
            return out;
        }
        pos = data + plen;
    }
    return NULL;
}

int amiga_disk_block(const char *path, uint8_t *out) {
    size_t n = 0;
    uint8_t *f = slurp(path, &n);
    int ok = 0;
    if (!f)
        return 0;
    if (n == ADF_SIZE && !memcmp(f, "DOS", 3)) {
        uint8_t *tmp = (uint8_t *)malloc((size_t)ADF_PIECES * ADF_PIECE);
        if (tmp) {
            for (int k = 0; k < ADF_PIECES; k++)
                memcpy(tmp + (size_t)k * ADF_PIECE, f + ADF_START + (size_t)k * ADF_STRIDE, ADF_PIECE);
            if (crc32_block(tmp, AMIGA_BLOCK_SIZE) == AMIGA_BLOCK_CRC) {
                memcpy(out, tmp, AMIGA_BLOCK_SIZE);
                ok = 1;
            }
            free(tmp);
        }
    } else if (n > 8 && !memcmp(f + 2, "-lh", 3)) {
        size_t dl = 0;
        uint8_t *disk = lha_extract(f, n, "Disk.1", &dl);
        if (disk && dl >= DISK1_OFFS + AMIGA_BLOCK_SIZE &&
            crc32_block(disk + DISK1_OFFS, AMIGA_BLOCK_SIZE) == AMIGA_BLOCK_CRC) {
            memcpy(out, disk + DISK1_OFFS, AMIGA_BLOCK_SIZE);
            ok = 1;
        }
        free(disk);
    } else if (n >= DISK1_OFFS + AMIGA_BLOCK_SIZE && crc32_block(f + DISK1_OFFS, AMIGA_BLOCK_SIZE) == AMIGA_BLOCK_CRC) {
        memcpy(out, f + DISK1_OFFS, AMIGA_BLOCK_SIZE); /* a bare Disk.1 */
        ok = 1;
    }
    free(f);
    return ok;
}
