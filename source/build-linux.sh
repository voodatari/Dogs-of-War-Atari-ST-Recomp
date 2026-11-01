#!/usr/bin/env bash
set -euo pipefail

root="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
out="${OUT:-$root/../build}"
obj="$out/obj-linux"
cc="${CC:-cc}"

if ! command -v "$cc" >/dev/null 2>&1; then
    printf 'C compiler not found: %s\n' "$cc" >&2
    exit 1
fi
if ! command -v pkg-config >/dev/null 2>&1 || ! pkg-config --exists sdl2; then
    printf 'SDL2 development files are required (pkg-config package: sdl2).\n' >&2
    exit 1
fi
if ! pkg-config --exists gl; then
    printf 'OpenGL development files are required (pkg-config package: gl).\n' >&2
    exit 1
fi

mkdir -p "$obj"
mapfile -d '' sources < <(
    find "$root/generated" "$root/runtime" "$root/host" "$root/port" -type f -name '*.c' -print0
)
sources+=("$root/thirdparty/stb_vorbis.c")

includes=(-I"$root/runtime" -I"$root/generated" -I"$root/host" -I"$root/port" -I"$root/thirdparty")
flags=(-O2 -DHOST_DIRECT -D_DEFAULT_SOURCE -D_XOPEN_SOURCE=700 -pthread)
objects=()
for source in "${sources[@]}"; do
    relative="${source#"$root"/}"
    object="$obj/${relative//\//_}.o"
    "$cc" "${flags[@]}" "${includes[@]}" $(pkg-config --cflags sdl2 gl) -c "$source" -o "$object"
    objects+=("$object")
done

mkdir -p "$out"
"$cc" -O2 -pthread -o "$out/dowport" "${objects[@]}" $(pkg-config --libs sdl2 gl) -lm -ldl
printf 'Built %s\n' "$out/dowport"
