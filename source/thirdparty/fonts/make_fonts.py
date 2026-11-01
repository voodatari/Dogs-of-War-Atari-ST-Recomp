# Turns the bundled Noto Sans .ttf files into a C source with the bytes
# embedded as arrays (the program has no other font resource dependency).
import pathlib

HERE = pathlib.Path(__file__).parent
PORT = HERE.parent.parent / "port"     # source/port (sibling of thirdparty)
OUT = PORT / "ui2d_fonts.c"
HDR = PORT / "ui2d_fonts.h"

FONTS = [("NotoSans-Regular.ttf", "ui2d_ttf_regular"), ("NotoSans-Bold.ttf", "ui2d_ttf_bold")]

HDR.write_text(
    "/* ui2d_fonts.h - the two Noto Sans fonts (OFL 1.1) embedded as C arrays, see ui2d_fonts.c */\n"
    "#ifndef UI2D_FONTS_H\n"
    "#define UI2D_FONTS_H\n"
    "#include <stddef.h>\n"
    "extern const unsigned char ui2d_ttf_regular[];\n"
    "extern const unsigned char ui2d_ttf_bold[];\n"
    "#define UI2D_TTF_REGULAR_SIZE %d\n"
    "#define UI2D_TTF_BOLD_SIZE %d\n"
    "#endif\n" % (len((HERE / FONTS[0][0]).read_bytes()), len((HERE / FONTS[1][0]).read_bytes())),
    encoding="ascii",
)

parts = [
    "/* ui2d_fonts.c - the bundled fonts as C arrays (generated with thirdparty/fonts/make_fonts.py)\n"
    " *\n"
    " * Fonts: Noto Sans Regular and Bold, Copyright 2014-2021 Adobe (http://www.adobe.com/), with Reserved\n"
    " * Font Name 'Noto'. Licensed under the SIL Open Font License, Version 1.1: see LICENSES/NotoSans-OFL-1.1.txt\n"
    " */\n"
    '#include "ui2d_fonts.h"\n',
]
for fn, sym in FONTS:
    data = (HERE / fn).read_bytes()
    parts.append("/* %s (%d bytes) */\nconst unsigned char %s[] = {\n" % (fn, len(data), sym))
    for i in range(0, len(data), 16):
        parts.append("".join("0x%02x," % b for b in data[i : i + 16]) + "\n")
    parts.append("};\n\n")
OUT.write_text("".join(parts), encoding="ascii")
print("wrote", OUT, OUT.stat().st_size, "bytes")
