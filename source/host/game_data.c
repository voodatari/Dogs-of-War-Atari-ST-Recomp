/* Reads the original DOW data or the mapped data ranges in the Replicants disk image. */
#include "host.h"
#include "port.h"

#define DOW_CRC32              0x6703B50Fu
#define REPLICANTS_CRC32       0xF6E84D7Au
#define DOW_LOGICAL_SIZE       819200u
#define DOW_BOOT_OFFSET        0x5141Cu
#define DOW_BOOT_SIZE          60000u
#define REPLICANTS_MAPPED_SIZE 486912u

typedef struct {
    uint32_t logical;
    uint32_t image;
    uint32_t length;
} DataExtent;

/* Unmapped bytes are zero-filled; this map covers the boot block and every byte used by the current asset dump. */
static const DataExtent replicants_extents[] = {
    {0x000400u, 0x0003FEu, 3584u}, {0x001200u, 0x001200u, 512u},  {0x001400u, 0x002800u, 5120u},
    {0x002800u, 0x005000u, 5120u}, {0x003C00u, 0x007800u, 5120u}, {0x005000u, 0x00A000u, 5120u},
    {0x006400u, 0x00C800u, 5120u}, {0x007800u, 0x00F000u, 5120u}, {0x008C00u, 0x011800u, 5120u},
    {0x00A000u, 0x014000u, 5120u}, {0x00B400u, 0x016800u, 5120u}, {0x00C800u, 0x019000u, 5120u},
    {0x00DC00u, 0x01B800u, 5120u}, {0x00F000u, 0x01E000u, 5120u}, {0x010400u, 0x020800u, 5120u},
    {0x011800u, 0x023000u, 5120u}, {0x012C00u, 0x025800u, 5120u}, {0x014000u, 0x028000u, 5120u},
    {0x015400u, 0x02A800u, 5120u}, {0x016800u, 0x02D000u, 5120u}, {0x017C00u, 0x02F800u, 5120u},
    {0x019000u, 0x032000u, 5120u}, {0x01A400u, 0x034800u, 5120u}, {0x01B800u, 0x037000u, 5120u},
    {0x01CC00u, 0x039800u, 5120u}, {0x01E000u, 0x03C000u, 5120u}, {0x01F400u, 0x03E800u, 5120u},
    {0x020800u, 0x041000u, 5120u}, {0x021C00u, 0x043800u, 5120u}, {0x023000u, 0x046000u, 5120u},
    {0x024400u, 0x048800u, 5120u}, {0x025800u, 0x04B000u, 5120u}, {0x026C00u, 0x04D800u, 5120u},
    {0x028000u, 0x050000u, 5120u}, {0x029400u, 0x052800u, 5120u}, {0x02A800u, 0x055000u, 5120u},
    {0x02BC00u, 0x057800u, 5120u}, {0x02D000u, 0x05A000u, 5120u}, {0x02E400u, 0x05C800u, 5120u},
    {0x02F800u, 0x05F000u, 5120u}, {0x030C00u, 0x061800u, 5120u}, {0x032000u, 0x064000u, 5120u},
    {0x033400u, 0x066800u, 5120u}, {0x034800u, 0x069000u, 5120u}, {0x035C00u, 0x06B800u, 5120u},
    {0x037000u, 0x06E000u, 5120u}, {0x038400u, 0x070800u, 5120u}, {0x039800u, 0x070A00u, 3072u},
    {0x03A400u, 0x073C00u, 2048u}, {0x03AC00u, 0x075800u, 5120u}, {0x03C000u, 0x078000u, 5120u},
    {0x03D400u, 0x07A800u, 5120u}, {0x03E800u, 0x07D000u, 5120u}, {0x03FC00u, 0x07F800u, 5120u},
    {0x041000u, 0x082000u, 5120u}, {0x042400u, 0x084800u, 5120u}, {0x043800u, 0x087000u, 5120u},
    {0x044C00u, 0x089800u, 5120u}, {0x046000u, 0x08C000u, 5120u}, {0x047400u, 0x08E800u, 5120u},
    {0x048800u, 0x091000u, 5120u}, {0x049C00u, 0x093800u, 5120u}, {0x04B000u, 0x096000u, 5120u},
    {0x04C400u, 0x098800u, 2048u}, {0x04CE00u, 0x099200u, 2560u}, {0x04D800u, 0x09B000u, 5120u},
    {0x04EC00u, 0x09D800u, 5120u}, {0x050000u, 0x0003FEu, 3584u}, {0x050E00u, 0x0003FEu, 1536u},
    {0x051400u, 0x0A2800u, 5120u}, {0x052800u, 0x0A5000u, 5120u}, {0x053C00u, 0x0A7800u, 5120u},
    {0x055000u, 0x0AA000u, 5120u}, {0x056400u, 0x0AC800u, 5120u}, {0x057800u, 0x0AF000u, 5120u},
    {0x058C00u, 0x0B1800u, 5120u}, {0x05A000u, 0x0B4000u, 5120u}, {0x05B400u, 0x0B6800u, 5120u},
    {0x05C800u, 0x0B9000u, 5120u}, {0x05DC00u, 0x0BB800u, 5120u}, {0x05F000u, 0x0BE000u, 5120u},
    {0x060400u, 0x0003FEu, 3584u}, {0x061200u, 0x0003FEu, 3584u}, {0x062000u, 0x0003FEu, 3072u},
    {0x062C00u, 0x001400u, 2560u}, {0x063600u, 0x0003FEu, 512u},  {0x063800u, 0x001400u, 1536u},
    {0x065400u, 0x003C00u, 5120u}, {0x066800u, 0x006400u, 5120u}, {0x067C00u, 0x008C00u, 5120u},
    {0x069000u, 0x00B400u, 5120u}, {0x06A400u, 0x00DC00u, 5120u}, {0x06B800u, 0x010400u, 5120u},
    {0x06CC00u, 0x012C00u, 5120u}, {0x06E000u, 0x015400u, 5120u}, {0x06F400u, 0x017C00u, 5120u},
    {0x070800u, 0x01A400u, 5120u}, {0x071C00u, 0x01CC00u, 5120u}, {0x073000u, 0x01F400u, 5120u},
    {0x074400u, 0x021C00u, 5120u}, {0x075800u, 0x024400u, 5120u}, {0x076C00u, 0x026C00u, 5120u},
    {0x0C7600u, 0x0003FEu, 2560u},
};

static uint8_t *source_data;
static size_t source_size;
static int source_is_replicants;
static char source_error[256] = "Game data has not been selected";
static char source_desc[400]; /* what was found, for the start-up screen */

static uint32_t crc32_bytes(const uint8_t *data, size_t size) {
    uint32_t crc = 0xFFFFFFFFu;
    for (size_t i = 0; i < size; i++) {
        crc ^= data[i];
        for (int bit = 0; bit < 8; bit++)
            crc = (crc >> 1) ^ (0xEDB88320u & (uint32_t)-(int32_t)(crc & 1));
    }
    return ~crc;
}

typedef struct {
    const char *dir;
    size_t *size;
    char *path_out;
    size_t path_cap;
    uint8_t *match;
} ImageSearch;

static int inspect_replicants_image(const char *name, void *context) {
    ImageSearch *search = (ImageSearch *)context;
    char path[800];
    snprintf(path, sizeof path, "%s/%s", search->dir, name);
    size_t n = 0;
    uint8_t *bytes = read_file(path, &n);
    if (!bytes)
        return 1;
    if (n != 829440u || crc32_bytes(bytes, n) != REPLICANTS_CRC32) {
        free(bytes);
        return 1;
    }
    search->match = bytes;
    *search->size = n;
    snprintf(search->path_out, search->path_cap, "%s", path);
    return 0;
}

static uint8_t *load_replicants_image(const char *original_dir, size_t *size, char *path_out, size_t path_cap) {
    ImageSearch search = {original_dir, size, path_out, path_cap, NULL};
    port_list_files(original_dir, ".st", inspect_replicants_image, &search);
    return search.match;
}

int game_data_init(const char *original_dir) {
    free(source_data);
    source_data = NULL;
    source_size = 0;
    source_is_replicants = 0;
    source_error[0] = 0;
    source_desc[0] = 0;

    char path[800];
    snprintf(path, sizeof path, "%s/DOW", original_dir);
    size_t n = 0;
    uint8_t *bytes = read_file(path, &n);
    if (bytes && n >= DOW_BOOT_OFFSET + DOW_BOOT_SIZE) {
        uint32_t crc = crc32_bytes(bytes, n);
        source_data = bytes;
        source_size = n;
        snprintf(source_desc, sizeof source_desc, "DOW  (CRC32 %08X%s)", crc,
                 crc == DOW_CRC32 ? "" : ", not the usual one");
        if (crc == DOW_CRC32)
            host_log("Game data: original/DOW (CRC32 %08X)", crc);
        else
            host_log("Game data: original/DOW (CRC32 %08X; keeping legacy size-based compatibility)", crc);
        return 1;
    }
    if (bytes) {
        host_log("Game data: original/DOW is too short (%u bytes)", (unsigned)n);
        free(bytes);
    }

    bytes = load_replicants_image(original_dir, &n, path, sizeof path);
    if (bytes) {
        source_data = bytes;
        source_size = n;
        source_is_replicants = 1;
        {
            const char *base = strrchr(path, '/');
            snprintf(source_desc, sizeof source_desc, "%s  (CRC32 %08X)", base ? base + 1 : path, REPLICANTS_CRC32);
        }
        host_log("Game data: direct Replicants image %s (CRC32 %08X; %u/%u logical bytes mapped)", path,
                 REPLICANTS_CRC32, REPLICANTS_MAPPED_SIZE, DOW_LOGICAL_SIZE);
        return 1;
    }

    snprintf(source_error, sizeof source_error,
             "No supported game data found. Expected original/DOW or a Replicants .st image "
             "(CRC32 %08X) in original/.",
             REPLICANTS_CRC32);
    return 0;
}

/* What was found (a file name and its CRC32), for the loading screen. */
const char *game_data_description(void) {
    return source_desc;
}

const char *game_data_error(void) {
    return source_error[0] ? source_error : "Game data is unavailable";
}

size_t game_data_size(void) {
    return source_is_replicants ? DOW_LOGICAL_SIZE : source_size;
}

size_t game_data_read(size_t offset, uint8_t *out, size_t size) {
    size_t logical_size = game_data_size();
    if (!source_data || !out || offset >= logical_size)
        return 0;
    if (size > logical_size - offset)
        size = logical_size - offset;
    if (!source_is_replicants) {
        memcpy(out, source_data + offset, size);
        return size;
    }

    memset(out, 0, size);
    for (size_t i = 0; i < sizeof replicants_extents / sizeof replicants_extents[0]; i++) {
        const DataExtent *extent = &replicants_extents[i];
        size_t begin = offset > extent->logical ? offset : extent->logical;
        size_t request_end = offset + size;
        size_t extent_end = (size_t)extent->logical + extent->length;
        size_t end = request_end < extent_end ? request_end : extent_end;
        if (begin < end)
            memcpy(out + (begin - offset), source_data + extent->image + (begin - extent->logical), end - begin);
    }
    return size;
}
