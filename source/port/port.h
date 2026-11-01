/*
 * port.h - Minimal portability layer shared by the host code that has to build on every OS: threads, mutexes and a
 * fatal-error alert. Everything else that only exists because of the window system (OpenGL context, audio device,
 * gamepads, fibres) lives in the platform speakers (audioout.c, video.c, input.c, runtime/machine.c): see
 * docs/PORTABILITY.md for the current state of each.
 */
#ifndef PORT_H
#define PORT_H
#include <stdint.h>
#include <stddef.h>

/* ---- mutexes ---- */
typedef struct PortMutex PortMutex;
PortMutex *port_mutex_new(void);
void port_mutex_free(PortMutex *m);
void port_mutex_lock(PortMutex *m);
void port_mutex_unlock(PortMutex *m);
typedef struct PortEvent PortEvent;
PortEvent *port_event_new(void);
void port_event_free(PortEvent *e);
void port_event_signal(PortEvent *e);
int port_event_wait(PortEvent *e, unsigned timeout_ms);

/* ---- threads ---- */
typedef void *(*PortThreadFn)(void *arg);
/* starts a thread running fn(arg); on success stores an opaque handle in *h (can be ignored: the thread is
 * self-releasing) and returns 1; 0 and *h untouched on failure */
int port_thread_start(PortThreadFn fn, void *arg, void **h);
int port_thread_start_stack(PortThreadFn fn, void *arg, void **h, size_t stack_size);
/* waits for the thread and releases its handle */
void port_thread_join(void *h);
int port_mkdir(const char *path);

typedef int (*PortFileFn)(const char *name, void *context);
/* type: -1 for any entry, 0 for regular files, 1 for directories. */
void port_list_entries(const char *dir, int type, const char *suffix, PortFileFn fn, void *context);
/* Calls fn for each regular file in dir with the requested suffix; stop when fn returns 0. */
void port_list_files(const char *dir, const char *suffix, PortFileFn fn, void *context);
void port_list_dirs(const char *dir, PortFileFn fn, void *context);

/* ---- fatal error dialog: graphical on the platforms that have one, console otherwise ---- */
void port_alert(const char *title, const char *text);

/* number of hardware threads the system reports (for the starts of threads) */
int port_cpu_count(void);
#endif
