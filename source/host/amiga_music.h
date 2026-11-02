/* amiga_music.h - the music of the Amiga version, played from the player's own disk (see amiga/amiga_music.c) */
#ifndef AMIGA_MUSIC_H
#define AMIGA_MUSIC_H
#include <stddef.h>
#include <stdint.h>

/* name of the music pack that stands for "the music of my Amiga disk" in the music-pack list */
#define AMIGA_PACK "@amiga"

/* Looks in `dir` for an .adf disk image or a WHDLoad .lha package of the Amiga game (recognised by content). The answer
 * is remembered, so it is cheap to ask again. Returns 1 and the path, or 0. */
int amiga_music_find(const char *dir, char *path, size_t n);

/* Loads the sound driver from that file and starts the engine at `fs` Hz. Returns 1 if it is ready. */
int amiga_music_open(const char *path, int fs);
int amiga_music_ready(void);

/* Starts song 0..7 (the game's own numbering), or stops the music with -1. */
void amiga_music_play(int song);
/* Moves the song just started forward by that many audio frames without making any sound (to join it where another
 * music is). */
void amiga_music_skip(int frames);
/* 1 while the driver is playing a song (a song that ends by itself clears it). */
int amiga_music_playing(void);
/* Makes `frames` stereo frames (16 bit) of the music, advancing the driver in time with them. */
void amiga_music_render(int frames, int16_t *out);

#endif
