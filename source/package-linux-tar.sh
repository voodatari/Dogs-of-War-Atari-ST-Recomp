#!/usr/bin/env bash
set -euo pipefail

source_dir="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
project_dir="$(cd -- "$source_dir/.." && pwd)"
build_dir="$project_dir/build"
out_dir="${OUT:-$project_dir/dist}"

required=(
    "$build_dir/dowport"
    "$build_dir/default.json"
    "$build_dir/data"
    "$build_dir/docs/screenshot.jpg"
    "$build_dir/music"
    "$build_dir/shaders"
    "$build_dir/LICENSE"
    "$source_dir/original/README.txt"
    "$source_dir/linux-tar-run"
    "$project_dir/README.md"
    "$project_dir/CHANGELOG.md"
)
for path in "${required[@]}"; do
    if [[ ! -e "$path" ]]; then
        printf 'Required release file is missing: %s\n' "$path" >&2
        exit 1
    fi
done

sdl_library="$(ldd "$build_dir/dowport" | awk '$1 == "libSDL2-2.0.so.0" { print $3; exit }')"
if [[ -z "$sdl_library" || ! -f "$sdl_library" ]]; then
    printf 'Could not locate the SDL2 runtime library used by dowport.\n' >&2
    exit 1
fi

mkdir -p "$out_dir"
out_dir="$(cd -- "$out_dir" && pwd)"
stage="$(mktemp -d)"
trap 'rm -rf "$stage"' EXIT

make_package() {
    local name="$1"
    local appdir="$stage/$name"

    mkdir -p "$appdir/assets" "$appdir/data" "$appdir/docs" "$appdir/music" \
        "$appdir/original" "$appdir/shaders" "$appdir/usr/lib"
    install -m 755 "$source_dir/linux-tar-run" "$appdir/dowport"
    install -m 755 "$build_dir/dowport" "$appdir/dowport.bin"
    install -m 644 "$sdl_library" "$appdir/usr/lib/libSDL2-2.0.so.0"
    install -m 644 "$source_dir/original/README.txt" "$appdir/original/README.txt"
    cp -a "$build_dir/data" "$appdir/"
    cp -a "$build_dir/music" "$appdir/"
    cp -a "$build_dir/shaders" "$appdir/"
    cp -a "$build_dir/default.json" "$build_dir/LICENSE" "$appdir/"
    cp -a "$build_dir/docs/screenshot.jpg" "$appdir/docs/"
    cp -a "$project_dir/README.md" "$project_dir/CHANGELOG.md" "$appdir/"

    tar -C "$stage" -cJf "$out_dir/$name.tar.xz" "$name"
    printf 'Created %s\n' "$out_dir/$name.tar.xz"
}

make_package dogs-of-war-linux-x86_64
