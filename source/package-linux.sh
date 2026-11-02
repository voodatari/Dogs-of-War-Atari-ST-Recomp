#!/usr/bin/env bash
set -euo pipefail

source_dir="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
project_dir="$(cd -- "$source_dir/.." && pwd)"
build_dir="$project_dir/build"
out_dir="${OUT:-$project_dir/dist}"
tool_url="https://github.com/AppImage/appimagetool/releases/download/1.9.1/appimagetool-x86_64.AppImage"
tool_sha256="ed4ce84f0d9caff66f50bcca6ff6f35aae54ce8135408b3fa33abfc3cb384eb0"
runtime_url="https://github.com/AppImage/type2-runtime/releases/download/continuous/runtime-x86_64"
runtime_sha256="617aa77314d57c8b8e4fae9c3f0b35af7b30d5529cb69e98f64f92510ed98a46"

required=(
    "$build_dir/dowport"
    "$build_dir/default.json"
    "$build_dir/data"
    "$build_dir/docs/screenshot.jpg"
    "$build_dir/music"
    "$build_dir/shaders"
    "$build_dir/LICENSE"
    "$source_dir/original/README.txt"
    "$project_dir/README.md"
    "$project_dir/CHANGELOG.md"
    "$source_dir/appimage/AppRun"
    "$source_dir/appimage/dogs-of-war.desktop"
    "$source_dir/appimage/dogs-of-war.png"
    "$source_dir/appimage/dogs-of-war.svg"
)
for path in "${required[@]}"; do
    if [[ ! -e "$path" ]]; then
        printf 'Required release file is missing: %s\n' "$path" >&2
        exit 1
    fi
done

if [[ -n "${APPIMAGETOOL:-}" ]]; then
    appimagetool="$APPIMAGETOOL"
else
    cache_dir="${XDG_CACHE_HOME:-$HOME/.cache}/dogs-of-war-appimage"
    appimagetool="$cache_dir/appimagetool-x86_64.AppImage"
    mkdir -p "$cache_dir"
    if [[ ! -f "$appimagetool" ]] || [[ "$(sha256sum "$appimagetool" | cut -d ' ' -f 1)" != "$tool_sha256" ]]; then
        download="$appimagetool.download"
        curl -fL --retry 3 "$tool_url" -o "$download"
        printf '%s  %s\n' "$tool_sha256" "$download" | sha256sum -c -
        chmod 755 "$download"
        mv -f "$download" "$appimagetool"
    fi
fi
if [[ ! -x "$appimagetool" ]]; then
    printf 'AppImage packager is not executable: %s\n' "$appimagetool" >&2
    exit 1
fi

if [[ -z "${APPIMAGETOOL:-}" ]]; then
    runtime_file="$cache_dir/runtime-x86_64"
    if [[ ! -f "$runtime_file" ]] || [[ "$(sha256sum "$runtime_file" | cut -d ' ' -f 1)" != "$runtime_sha256" ]]; then
        download="$runtime_file.download"
        curl -fL --retry 3 "$runtime_url" -o "$download"
        printf '%s  %s\n' "$runtime_sha256" "$download" | sha256sum -c -
        chmod 644 "$download"
        mv -f "$download" "$runtime_file"
    fi
else
    runtime_file="${APPIMAGE_RUNTIME:-}"
    if [[ -z "$runtime_file" || ! -f "$runtime_file" ]]; then
        printf 'Set APPIMAGE_RUNTIME to a Type 2 runtime when using a custom APPIMAGETOOL.\n' >&2
        exit 1
    fi
fi

sdl_library="$(ldd "$build_dir/dowport" | awk '$1 == "libSDL2-2.0.so.0" { print $3; exit }')"
if [[ -z "$sdl_library" || ! -f "$sdl_library" ]]; then
    printf 'Could not locate the SDL2 runtime library used by dowport.\n' >&2
    exit 1
fi

mkdir -p "$out_dir"
out_dir="$(cd -- "$out_dir" && pwd)"
stage="$(mktemp -d)"
trap 'rm -rf "$stage"' EXIT

make_appimage() {
    local name="$1"
    local appdir="$stage/$name.AppDir"
    local staging_output="$stage/$name.AppImage"

    mkdir -p "$appdir/assets" "$appdir/data" "$appdir/docs" "$appdir/music" \
        "$appdir/original" "$appdir/shaders" "$appdir/usr/lib"
    install -m 755 "$build_dir/dowport" "$appdir/dowport"
    install -m 755 "$source_dir/appimage/AppRun" "$appdir/AppRun"
    install -m 644 "$source_dir/appimage/dogs-of-war.desktop" "$appdir/dogs-of-war.desktop"
    install -m 644 "$source_dir/appimage/dogs-of-war.png" "$appdir/dogs-of-war.png"
    install -m 644 "$source_dir/appimage/dogs-of-war.svg" "$appdir/dogs-of-war.svg"
    ln -s dogs-of-war.png "$appdir/.DirIcon"
    install -m 755 "$sdl_library" "$appdir/usr/lib/libSDL2-2.0.so.0"
    cp -a "$build_dir/data" "$appdir/"
    cp -a "$build_dir/music" "$appdir/"
    cp -a "$build_dir/shaders" "$appdir/"
    cp -a "$build_dir/default.json" "$build_dir/LICENSE" "$appdir/"
    cp -a "$build_dir/docs/screenshot.jpg" "$appdir/docs/"
    cp -a "$project_dir/README.md" "$project_dir/CHANGELOG.md" "$appdir/"
    install -m 644 "$source_dir/original/README.txt" "$appdir/original/README.txt"

    env APPIMAGE_EXTRACT_AND_RUN=1 "$appimagetool" --no-appstream --comp zstd \
        --runtime-file "$runtime_file" "$appdir" "$staging_output"
    install -m 755 "$staging_output" "$out_dir/$name.AppImage"
    printf 'Created %s\n' "$out_dir/$name.AppImage"
}

make_appimage DogsOfWar-x86_64
