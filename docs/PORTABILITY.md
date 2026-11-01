# Portability / Portabilidad

## English

This fork keeps the native Windows build and adds an x86-64 Linux build. The common game, mini-TOS, menu drawing,
music decoders and graphics pipeline remain shared C code.

### Linux backend

- SDL2 owns the window, events, keyboard, game controllers and audio device. SDL selects the available audio
  backend automatically; desktop Linux normally uses its PulseAudio-compatible service (including PipeWire's
  compatibility layer), while systems without it can use another SDL backend such as ALSA. Set `SDL_AUDIODRIVER`
  only to override SDL's selection.
- The AppImage bundles SDL2 and application resources. OpenGL, the graphics driver, glibc and desktop/audio system
  libraries are supplied by the host; user settings and saves go in XDG configuration folders.
- OpenGL 3.3 is required for video; the Linux build supports the same built-in CRT presets and external single-pass
  RetroArch `.glsl` shaders as Windows. Startup reports an error if the required context cannot be created rather
  than silently disabling those features.
- The game runs in a POSIX `ucontext` coroutine. Threads, mutexes, events, timing, filesystem checks and directory
  scans use POSIX implementations in `port/port.c`.
- The AppImage can read either `DOW` (Pera Putnik's HDD conversion, CRC32 `6703B50F`) or
  `Dogs of War (1989)(Elite)[cr Replicants][t].st` (CRC32 `F6E84D7A`) from
  `$XDG_DATA_HOME/dogs-of-war/original/`, normally `~/.local/share/dogs-of-war/original/`, or its bundled
  `original/DOW` by default; set `DOW_ORIGINAL_DIR` to use another folder.

### Windows backend

- The native Win32 window uses OpenGL 3.3 for video, with GDI software rendering as a fallback. XInput provides
  game-controller input.
- Audio uses WinMM by default, with optional low-latency shared-mode WASAPI.
- The game runtime uses Windows threads and fibers; Linux uses POSIX threads and `ucontext`.

Both builds use the same C game, runtime and menu code. MP3 and OGG decoding use the bundled minimp3 and stb_vorbis
libraries; the portable menu renderer uses stb_truetype. The System tab shows the current build target and the
platform APIs and libraries used by both builds.

### Build on Linux

Install a C compiler, Bash, `pkg-config`, SDL2 and OpenGL development packages. For Debian/Ubuntu:

```sh
sudo apt install build-essential pkg-config libsdl2-dev libgl-dev
bash source/build-linux.sh
```

The script writes `build/dowport` by default, alongside the existing `original/`, `data/`, `music/` and `assets/`
folders. Set `CC=clang` or `OUT=/path/to/output` to choose another compiler or output folder. Run `build/dowport`
from a desktop session with SDL2 video and audio drivers available.
To package it as an AppImage, install `curl` and `squashfs-tools` and run `bash source/package-linux.sh` from the
project root. The script downloads and verifies the AppImage packager and runtime, then writes the package to
`dist/`.
For standalone `.tar.xz` packages that include SDL2 and a launcher, run `bash source/package-linux-tar.sh` from
the project root. Graphics, audio-server and system libraries remain dependencies of the host.

### Windows build

The Windows backend remains in `host/video.c` and `host/audioout.c`. Build it as before with
`source/build.bat` (or `source/build.ps1`) and Zig, MinGW-w64 or Clang.
To create distributable Windows ZIP packages after building, run
`powershell -NoProfile -ExecutionPolicy Bypass -File source/package-windows.ps1` from the project root.

## Español

Este fork conserva la compilación nativa para Windows y añade una compilación x86-64 para Linux. El juego, mini-TOS,
el dibujo de menús, los decodificadores de música y la cadena gráfica siguen siendo código C compartido.

### Backend de Linux

- SDL2 gestiona la ventana, los eventos, el teclado, los mandos y el dispositivo de audio. SDL selecciona
  automáticamente un backend disponible; en escritorios Linux suele usar el servicio compatible con PulseAudio
  (también mediante la capa de compatibilidad de PipeWire) y, si no está, puede usar otro backend como ALSA.
  Define `SDL_AUDIODRIVER` solo para anular la selección de SDL.
- OpenGL 3.3 es obligatorio para el vídeo; Linux ofrece los mismos efectos CRT integrados y shaders externos
  RetroArch `.glsl` de una pasada que Windows. Si no se puede crear el contexto requerido, el inicio informa del
  error en lugar de desactivar esas funciones sin avisar.
- El juego se ejecuta en una corrutina POSIX `ucontext`. Hilos, mutexes, eventos, reloj, comprobaciones de archivos
  y recorridos de carpetas usan las implementaciones POSIX de `port/port.c`.
- La AppImage puede leer `DOW` (conversión a disco duro de Pera Putnik, CRC32 `6703B50F`) o
  `Dogs of War (1989)(Elite)[cr Replicants][t].st` (CRC32 `F6E84D7A`) desde
  `$XDG_DATA_HOME/dogs-of-war/original/`, normalmente `~/.local/share/dogs-of-war/original/`, o usar por defecto su
  `original/DOW` incluido; define `DOW_ORIGINAL_DIR` para usar otra carpeta.

### Backend de Windows

- La ventana Win32 nativa usa OpenGL 3.3 para el vídeo, con renderizado por software GDI como alternativa. XInput
  proporciona la entrada de los mandos.
- El audio usa WinMM de forma predeterminada y WASAPI compartido opcional para baja latencia.
- El runtime del juego usa hilos y fibers de Windows; Linux utiliza hilos POSIX y `ucontext`.

Ambas compilaciones comparten el juego, el runtime y los menús en C. La decodificación MP3 y OGG usa las bibliotecas
incluidas minimp3 y stb_vorbis; el renderizador portátil de menús usa stb_truetype. La pestaña Sistema muestra el
destino de la compilación actual y las APIs y bibliotecas de ambas compilaciones.

### Compilar en Linux

Instala un compilador C, Bash, `pkg-config` y los archivos de desarrollo de SDL2 y OpenGL. En Debian/Ubuntu:

```sh
sudo apt install build-essential pkg-config libsdl2-dev libgl-dev
bash source/build-linux.sh
```

Por defecto, el script genera `build/dowport`, junto a las carpetas existentes `original/`, `data/`, `music/` y
`assets/`. Se puede elegir otro compilador con `CC=clang` o una carpeta de salida con `OUT=/ruta/de/salida`.
Ejecuta `build/dowport` desde una sesión de escritorio con drivers de vídeo y audio SDL2 disponibles.
`source/package-linux.sh` genera las AppImage de distribución en `dist/`. La AppImage puede leer `DOW` (conversión
a disco duro de Pera Putnik, CRC32 `6703B50F`) o `Dogs of War (1989)(Elite)[cr Replicants][t].st` (CRC32 `F6E84D7A`)
desde `$XDG_DATA_HOME/dogs-of-war/original/` (normalmente `~/.local/share/dogs-of-war/original/`) o usar por defecto
su `original/DOW` incluido; define `DOW_ORIGINAL_DIR` para usar otra carpeta. Para empaquetar desde la raíz del
proyecto, instala `curl` y
`squashfs-tools` y ejecuta `bash source/package-linux.sh`; el script descarga y verifica el empaquetador y el
runtime de AppImage. Para crear paquetes `.tar.xz` independientes que incluyan SDL2 y un lanzador, ejecuta
`bash source/package-linux-tar.sh` desde la raíz. Los drivers gráficos, el servidor de audio y otras bibliotecas del
sistema siguen siendo dependencias del host. La configuración y las partidas se guardan en la carpeta XDG de configuración.

### Compilar en Windows

El backend de Windows sigue en `host/video.c` y `host/audioout.c`. Compílalo como antes con
`source/build.bat` (o `source/build.ps1`) y Zig, MinGW-w64 o Clang.
