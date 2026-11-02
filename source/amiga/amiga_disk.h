/* amiga_disk.h - the music data of the Amiga version, read from the player's own disk file (see amiga_disk.c) */
#ifndef AMIGA_DISK_H
#define AMIGA_DISK_H
#include <stdint.h>

#define AMIGA_BLOCK_SIZE 61166u      /* the sound driver of the Amiga game: code, songs and samples */
#define AMIGA_BLOCK_CRC  0x8F60BEBAu /* CRC32 of that block */

/* Reads the block from an .adf disk image or a WHDLoad .lha package. out must hold AMIGA_BLOCK_SIZE bytes. Returns 1 if
 * the file is one of those and its block has the expected CRC32, else 0. */
int amiga_disk_block(const char *path, uint8_t *out);

#endif
