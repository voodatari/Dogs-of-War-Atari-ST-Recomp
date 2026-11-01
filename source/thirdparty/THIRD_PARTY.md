# Third-party code and assets (`thirdparty/`)

Everything in this folder is **vendored** (copied unmodified into the tree) open-source code or assets used by
`dowport.exe`. Each item keeps its own licence here; none of them changes the licence of the program. The font
files are also compiled into the executable by `fonts/make_fonts.py`, which generates `../port/ui2d_fonts.c`
from the two `.ttf` files — their licence applies to that embedded form as well.

| item | file | used for | licence | source |
|---|---|---|---|---|
| minimp3 | `minimp3.h` | MP3 music decoding (`host/mp3.c`) | CC0 1.0 / public domain | https://github.com/lieff/minimp3 |
| stb_vorbis | `stb_vorbis.c` | OGG (Vorbis) music decoding (`host/mp3.c`) | public domain (MIT alternative offered in the file) | https://github.com/nothings/stb |
| stb_truetype | `stb_truetype.h` | TrueType glyph rasterisation for the menus (`port/ui2d.c`) | MIT (public domain alternative offered in the file) | https://github.com/nothings/stb |
| Noto Sans Regular & Bold | `fonts/NotoSans-*.ttf` | the menu font face, embedded as `port/ui2d_fonts.c` | SIL Open Font License 1.1 (full text below) | https://github.com/notofonts/notofonts.github.io |

`stb_vorbis.c` is compiled as its own translation unit (see `build.ps1`): its internal `get_bits` function and
the single-letter `A`, `B`, `C`, `D` macros of its playback section collide with minimp3's `get_bits` if both
are included in the same file. `host/mp3.c` therefore declares
`int stb_vorbis_decode_memory(...)` and links against it without including the source.

---

# Código y recursos de terceros (`thirdparty/`)

Todo lo de esta carpeta es código o recursos abiertos **incluidos en el árbol** (copiados sin modificar) que usa
`dowport.exe`. Cada elemento conserva su propia licencia aquí; ninguna cambia la licencia del programa. Los
ficheros de fuente también se compilan dentro del ejecutable mediante `fonts/make_fonts.py`, que genera
`../port/ui2d_fonts.c` a partir de los dos `.ttf`; su licencia se aplica igualmente a esa forma incrustada.

- **minimp3** — dominio público (dedicación CC0 1.0) por sus autores. Decodificación MP3.
- **stb_vorbis** (v1.22) — dominio público. Decodificación OGG/Vorbis.
- **stb_truetype** (v1.26) — MIT de Sean Barrett (alternativa: dominio público). Rasterizado de glifos.
- **Noto Sans Regular y Bold** — Copyright 2022 The Noto Project Authors, bajo la **SIL Open Font License 1.1**,
  cuyo texto completo va a continuación (se acompaña a la fuente, como exige la licencia, tanto en la carpeta
  `fonts/` como en la forma incrustada en `port/ui2d_fonts.c`).

---

Copyright 2022 The Noto Project Authors (https://github.com/notofonts/)

This Font Software is licensed under the SIL Open Font License,
Version 1.1.

This license is copied below, and is also available with a FAQ at:
http://scripts.sil.org/OFL

-----------------------------------------------------------
SIL OPEN FONT LICENSE Version 1.1 - 26 February 2007
-----------------------------------------------------------

PREAMBLE
The goals of the Open Font License (OFL) are to stimulate worldwide
development of collaborative font projects, to support the font
creation efforts of academic and linguistic communities, and to
provide a free and open framework in which fonts may be shared and
improved in partnership with others.

The OFL allows the licensed fonts to be used, studied, modified and
redistributed freely as long as they are not sold by themselves. The
fonts, including any derivative works, can be bundled, embedded,
redistributed and/or sold with any software provided that any reserved
names are not used by derivative works. The fonts and derivatives,
however, cannot be released under any other type of license. The
requirement for fonts to remain under this license does not apply to
any document created using the fonts or their derivatives.

DEFINITIONS
"Font Software" refers to the set of files released by the Copyright
Holder(s) under this license and clearly marked as such. This may
include source files, build scripts and documentation.

"Reserved Font Name" refers to any names specified as such after the
copyright statement(s).

"Original Version" refers to the collection of Font Software
components as distributed by the Copyright Holder(s).

"Modified Version" refers to any derivative made by adding to,
deleting, or substituting -- in part or in whole -- any of the
components of the Original Version, by changing formats or by porting
the Font Software to a new environment.

"Author" refers to any designer, engineer, programmer, technical
writer or other person who contributed to the Font Software.

PERMISSION & CONDITIONS
Permission is hereby granted, free of charge, to any person obtaining
a copy of the Font Software, to use, study, copy, merge, embed,
modify, redistribute, and sell modified and unmodified copies of the
Font Software, subject to the following conditions:

1) Neither the Font Software nor any of its individual components, in
Original or Modified Versions, may be sold by itself.

2) Original or Modified Versions of the Font Software may be bundled,
redistributed and/or sold with any software, provided that each copy
contains the above copyright notice and this license. These can be
included either as stand-alone text files, human-readable headers or
in the appropriate machine-readable metadata fields within text or
binary files as long as those fields can be easily viewed by the user.

3) No Modified Version of the Font Software may use the Reserved Font
Name(s) unless explicit written permission is granted by the
corresponding Copyright Holder. This restriction only applies to the
primary font name as presented to the users.

4) The name(s) of the Copyright Holder(s) or the Author(s) of the Font
Software shall not be used to promote, endorse or advertise any
Modified Version, except to acknowledge the contribution(s) of the
Copyright Holder(s) and the Author(s) or with their explicit written
permission.

5) The Font Software, modified or unmodified, in part or in whole,
must be distributed entirely under this license, and must not be
distributed under any other license. The requirement for fonts to
remain under this license does not apply to any document created using
the Font Software.

TERMINATION
This license becomes null and void if any of the above conditions are
not met.

DISCLAIMER
THE FONT SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO ANY WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT
OF COPYRIGHT, PATENT, TRADEMARK, OR OTHER RIGHT. IN NO EVENT SHALL THE
COPYRIGHT HOLDER BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
INCLUDING ANY GENERAL, SPECIAL, INDIRECT, INCIDENTAL, OR CONSEQUENTIAL
DAMAGES, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF THE USE OR INABILITY TO USE THE FONT SOFTWARE OR FROM
OTHER DEALINGS IN THE FONT SOFTWARE.
