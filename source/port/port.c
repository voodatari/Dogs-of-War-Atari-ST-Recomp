/*
 * port.c - The portability layer (see port.h). Windows keeps its native primitives; every other desktop system uses
 * pthreads (Linux, the BSDs, MacOS...), which C systems there always have.
 */
#include "port.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    PortThreadFn fn;
    void *arg;
} PortJob;

static void *port_thread_trampoline(void *p) {
    PortJob *j = (PortJob *)p;
    PortThreadFn fn = j->fn;
    void *arg = j->arg;
    free(j);
    return (void *)(uintptr_t)fn(arg);
}

#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

struct PortMutex {
    CRITICAL_SECTION cs;
};
struct PortEvent {
    HANDLE event;
};

PortMutex *port_mutex_new(void) {
    PortMutex *m = (PortMutex *)malloc(sizeof *m);
    if (!m)
        return NULL;
    InitializeCriticalSection(&m->cs);
    return m;
}
void port_mutex_free(PortMutex *m) {
    if (!m)
        return;
    DeleteCriticalSection(&m->cs);
    free(m);
}
void port_mutex_lock(PortMutex *m) {
    EnterCriticalSection(&m->cs);
}
void port_mutex_unlock(PortMutex *m) {
    LeaveCriticalSection(&m->cs);
}
PortEvent *port_event_new(void) {
    PortEvent *e = (PortEvent *)malloc(sizeof *e);
    if (!e)
        return NULL;
    e->event = CreateEventA(NULL, FALSE, FALSE, NULL);
    if (!e->event) {
        free(e);
        return NULL;
    }
    return e;
}
void port_event_free(PortEvent *e) {
    if (!e)
        return;
    CloseHandle(e->event);
    free(e);
}
void port_event_signal(PortEvent *e) {
    if (e)
        SetEvent(e->event);
}
int port_event_wait(PortEvent *e, unsigned timeout_ms) {
    return e && WaitForSingleObject(e->event, timeout_ms) == WAIT_OBJECT_0;
}

/* An unjoined thread (self-releasing, like the original CreateThread + CloseHandle of the mp3 loader) */
int port_thread_start_stack(PortThreadFn fn, void *arg, void **h, size_t stack_size) {
    PortJob *j = (PortJob *)malloc(sizeof *j);
    if (!j)
        return 0;
    j->fn = fn;
    j->arg = arg;
    HANDLE t = CreateThread(NULL, stack_size, (LPTHREAD_START_ROUTINE)port_thread_trampoline, j, 0, NULL);
    if (!t) {
        free(j);
        return 0;
    }
    if (h)
        *h = (void *)t;
    else
        CloseHandle(t);
    return 1;
}
void port_thread_join(void *h) {
    if (!h)
        return;
    WaitForSingleObject((HANDLE)h, INFINITE);
    CloseHandle((HANDLE)h);
}
int port_thread_start(PortThreadFn fn, void *arg, void **h) {
    return port_thread_start_stack(fn, arg, h, 0);
}
int port_mkdir(const char *path) {
    return CreateDirectoryA(path, NULL) || GetLastError() == ERROR_ALREADY_EXISTS;
}
void port_list_entries(const char *dir, int type, const char *suffix, PortFileFn fn, void *context) {
    if (!dir || !fn)
        return;
    char pattern[1024];
    snprintf(pattern, sizeof pattern, "%s\\*", dir);
    WIN32_FIND_DATAA fd;
    HANDLE h = FindFirstFileA(pattern, &fd);
    if (h == INVALID_HANDLE_VALUE)
        return;
    do {
        int is_dir = (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) != 0;
        if ((type == 0 && is_dir) || (type == 1 && !is_dir))
            continue;
        size_t n = strlen(fd.cFileName), m = suffix ? strlen(suffix) : 0;
        if (m > n || (m && _stricmp(fd.cFileName + n - m, suffix)))
            continue;
        if (!fn(fd.cFileName, context))
            break;
    } while (FindNextFileA(h, &fd));
    FindClose(h);
}
void port_list_files(const char *dir, const char *suffix, PortFileFn fn, void *context) {
    port_list_entries(dir, 0, suffix, fn, context);
}
void port_list_dirs(const char *dir, PortFileFn fn, void *context) {
    port_list_entries(dir, 1, NULL, fn, context);
}

void port_alert(const char *title, const char *text) {
    MessageBoxA(NULL, text, title, MB_OK | MB_ICONERROR);
}

int port_cpu_count(void) {
    SYSTEM_INFO si;
    GetNativeSystemInfo(&si);
    return si.dwNumberOfProcessors > 1 ? si.dwNumberOfProcessors : 1;
}

#else /* posix */
#include <pthread.h>
#include <dirent.h>
#include <errno.h>
#include <strings.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>

struct PortMutex {
    pthread_mutex_t m;
};
struct PortEvent {
    pthread_mutex_t mutex;
    pthread_cond_t cond;
    int signaled;
};

PortMutex *port_mutex_new(void) {
    PortMutex *m = (PortMutex *)malloc(sizeof *m);
    if (!m)
        return NULL;
    if (pthread_mutex_init(&m->m, NULL) != 0) {
        free(m);
        return NULL;
    }
    return m;
}
void port_mutex_free(PortMutex *m) {
    if (!m)
        return;
    pthread_mutex_destroy(&m->m);
    free(m);
}
void port_mutex_lock(PortMutex *m) {
    pthread_mutex_lock(&m->m);
}
void port_mutex_unlock(PortMutex *m) {
    pthread_mutex_unlock(&m->m);
}
PortEvent *port_event_new(void) {
    PortEvent *e = (PortEvent *)calloc(1, sizeof *e);
    if (!e)
        return NULL;
    if (pthread_mutex_init(&e->mutex, NULL) != 0) {
        free(e);
        return NULL;
    }
    if (pthread_cond_init(&e->cond, NULL) != 0) {
        pthread_mutex_destroy(&e->mutex);
        free(e);
        return NULL;
    }
    return e;
}
void port_event_free(PortEvent *e) {
    if (!e)
        return;
    pthread_cond_destroy(&e->cond);
    pthread_mutex_destroy(&e->mutex);
    free(e);
}
void port_event_signal(PortEvent *e) {
    if (!e)
        return;
    pthread_mutex_lock(&e->mutex);
    e->signaled = 1;
    pthread_cond_signal(&e->cond);
    pthread_mutex_unlock(&e->mutex);
}
int port_event_wait(PortEvent *e, unsigned timeout_ms) {
    if (!e)
        return 0;
    pthread_mutex_lock(&e->mutex);
    if (!e->signaled && timeout_ms) {
        struct timespec deadline;
        clock_gettime(CLOCK_REALTIME, &deadline);
        deadline.tv_sec += timeout_ms / 1000;
        deadline.tv_nsec += (long)(timeout_ms % 1000) * 1000000L;
        if (deadline.tv_nsec >= 1000000000L) {
            deadline.tv_sec++;
            deadline.tv_nsec -= 1000000000L;
        }
        while (!e->signaled && pthread_cond_timedwait(&e->cond, &e->mutex, &deadline) == 0) {
        }
    }
    int signaled = e->signaled;
    e->signaled = 0;
    pthread_mutex_unlock(&e->mutex);
    return signaled;
}

/* joinable: the handle is a malloc'd pthread_t; port_thread_join joins it and frees it */
int port_thread_start_stack(PortThreadFn fn, void *arg, void **h, size_t stack_size) {
    PortJob *j = (PortJob *)malloc(sizeof *j);
    if (!j)
        return 0;
    j->fn = fn;
    j->arg = arg;
    pthread_attr_t attr;
    if (pthread_attr_init(&attr) != 0) {
        free(j);
        return 0;
    }
    if (stack_size && pthread_attr_setstacksize(&attr, stack_size) != 0) {
        pthread_attr_destroy(&attr);
        free(j);
        return 0;
    }
    if (h) { /* joinable: the handle is a malloc'd pthread_t; port_thread_join joins it and frees it */
        pthread_t *th = (pthread_t *)malloc(sizeof *th);
        if (!th) {
            pthread_attr_destroy(&attr);
            free(j);
            return 0;
        }
        if (pthread_create(th, &attr, port_thread_trampoline, j) != 0) {
            free(th);
            pthread_attr_destroy(&attr);
            free(j);
            return 0;
        }
        *h = th;
    } else {
        pthread_t th;
        if (pthread_create(&th, &attr, port_thread_trampoline, j) != 0) {
            pthread_attr_destroy(&attr);
            free(j);
            return 0;
        }
        pthread_detach(th);
    }
    pthread_attr_destroy(&attr);
    return 1;
}
int port_thread_start(PortThreadFn fn, void *arg, void **h) {
    return port_thread_start_stack(fn, arg, h, 0);
}
void port_thread_join(void *h) {
    pthread_t *th = (pthread_t *)h;
    if (!th)
        return;
    pthread_join(*th, NULL);
    free(th);
}
int port_mkdir(const char *path) {
    return mkdir(path, 0755) == 0 || errno == EEXIST;
}
static int suffix_equal(const char *name, const char *suffix) {
    if (!suffix || !*suffix)
        return 1;
    size_t n = strlen(name), m = strlen(suffix);
    if (m > n)
        return 0;
    for (size_t i = 0; i < m; i++) {
        char a = name[n - m + i], b = suffix[i];
        if (a >= 'A' && a <= 'Z')
            a = (char)(a + ('a' - 'A'));
        if (b >= 'A' && b <= 'Z')
            b = (char)(b + ('a' - 'A'));
        if (a != b)
            return 0;
    }
    return 1;
}
void port_list_entries(const char *dir, int type, const char *suffix, PortFileFn fn, void *context) {
    if (!dir || !fn)
        return;
    DIR *d = opendir(dir);
    if (!d)
        return;
    struct dirent *entry;
    while ((entry = readdir(d)) != NULL) {
        if (entry->d_name[0] == '.' && (!entry->d_name[1] ||
                                        (entry->d_name[1] == '.' && !entry->d_name[2])))
            continue;
        if (!suffix_equal(entry->d_name, suffix))
            continue;
        char path[1024];
        snprintf(path, sizeof path, "%s/%s", dir, entry->d_name);
        struct stat st;
        if (stat(path, &st))
            continue;
        int is_dir = S_ISDIR(st.st_mode);
        if ((type == 0 && is_dir) || (type == 1 && !is_dir))
            continue;
        if (!fn(entry->d_name, context))
            break;
    }
    closedir(d);
}
void port_list_files(const char *dir, const char *suffix, PortFileFn fn, void *context) {
    port_list_entries(dir, 0, suffix, fn, context);
}
void port_list_dirs(const char *dir, PortFileFn fn, void *context) {
    port_list_entries(dir, 1, NULL, fn, context);
}

void port_alert(const char *title, const char *text) {
    fprintf(stderr, "[%s] %s\n", title, text);
    fflush(stderr);
}

int port_cpu_count(void) {
    long n = sysconf(_SC_NPROCESSORS_ONLN);
    return n > 1 ? (int)n : 1;
}
#endif
