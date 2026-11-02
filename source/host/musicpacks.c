/*
 * musicpacks.c - The music packs: subfolders of the music folder that contain audio files (the MP3 versions of the
 * game's songs). The audio files may also lie loose in the music folder itself; that counts as one pack whose name is
 * the empty string. The menu lists the packs found here; the emulation thread is told which folder to read.
 */
#include "amiga_music.h"
#include "app.h"
#include "port.h"

#define MAXPACK 32

static char packs[MAXPACK][80]; /* names found by the last scan_packs; "" = the files directly in music/ */
static int npacks = 0;

static int detect_audio(const char *name, void *context) {
    int *found = (int *)context;
    const char *e = strrchr(name, '.');
    if (e && (!_stricmp(e, ".mp3") || !_stricmp(e, ".ogg") || !_stricmp(e, ".wav") || !_stricmp(e, ".wma") ||
              !_stricmp(e, ".m4a"))) {
        *found = 1;
        return 0;
    }
    return 1;
}

/* Does the folder contain an audio file? */
static int has_audio_files(const char *dir) {
    int found = 0;
    port_list_files(dir, NULL, detect_audio, &found);
    return found;
}

static int pack_cmp(const void *a, const void *b) {
    return _stricmp((const char *)a, (const char *)b);
}

static int add_pack_dir(const char *name, void *context) {
    (void)context;
    if (name[0] == '.' || npacks >= MAXPACK)
        return 1;
    char d[800];
    snprintf(d, sizeof d, "%s/%s", music_root, name);
    if (has_audio_files(d))
        snprintf(packs[npacks++], 80, "%s", name);
    return 1;
}

/* Builds the list the Music menu item goes through: the Atari ST's own music, the Amiga disk's (if there is one), the
 * audio files loose in the music folder (if any), then its subfolders in alphabetical order. */
void scan_packs(void) {
    npacks = 0;
    snprintf(packs[npacks++], 80, "%s", ATARI_PACK);
    /* the music of the player's own Amiga disk (an .adf or WHDLoad .lha next to the game data), if there is one */
    char amiga_file[1024];
    if (amiga_music_find(original_dir_path, amiga_file, sizeof amiga_file))
        snprintf(packs[npacks++], 80, "%s", AMIGA_PACK);
    if (has_audio_files(music_root))
        packs[npacks++][0] = 0;
    int first = npacks;
    port_list_dirs(music_root, add_pack_dir, &first);
    qsort(packs[first], (size_t)(npacks - first), 80, pack_cmp);
}

int pack_count(void) {
    return npacks;
}

const char *pack_name(int i) {
    return i >= 0 && i < npacks ? packs[i] : "";
}

/* Index of the pack with that name (case-insensitive), or -1. */
int pack_find(const char *name) {
    for (int i = 0; i < npacks; i++)
        if (!_stricmp(packs[i], name))
            return i;
    return -1;
}

/* Full path of a pack's folder. */
void pack_dir(const char *name, char *out, size_t n) {
    if (name[0])
        snprintf(out, n, "%s/%s", music_root, name);
    else
        snprintf(out, n, "%s", music_root);
}

/* Leaves in music_pack a pack that exists: the requested one, or else the usual one ("arrange"), or else the first one
 * (never the Atari ST entry). */
void pack_resolve(const char *want) {
    int i = pack_find(want);
    if (i < 0 || !strcmp(packs[i], ATARI_PACK))
        i = pack_find("arrange");
    for (int k = 0; i < 0 && k < npacks; k++) /* the first real pack: the Atari ST entry is not a folder to play from */
        if (strcmp(packs[k], ATARI_PACK))
            i = k;
    snprintf(music_pack, sizeof music_pack, "%s", i >= 0 ? packs[i] : want);
}
