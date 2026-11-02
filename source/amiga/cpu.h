/*
 * cpu.h - the 68000 macros used by the generated code of the Amiga music driver (dwam_*.c), with the memory of an
 * Amiga.
 *
 * It is a private copy of runtime/cpu.h for this folder only: the generated files and amiga_music.c include "cpu.h"
 * and the compiler finds this one first (a quoted include looks in the folder of the including file). The differences
 * from the Atari header: the memory is `amem` (512 KB, one Amiga), the chip registers are handled by amiga_music.c, and
 * there is no budget, no hook and no hand-over to the host: the driver is a few routines that run to completion.
 * The register variables (d0..d7, a0..a7, flags) are the same global ones as the Atari core's; amiga_music.c saves and
 * restores them around every call, so the two never see each other's values.
 */
#ifndef AMIGA_CPU_H
#define AMIGA_CPU_H
#include <stdint.h>
#include <string.h>

#define RAMSZ 0x80000u
extern uint8_t *amem;
#define ram          amem
#define io_read      am_io_read
#define io_write     am_io_write
#define call_dynamic am_call_dynamic
#define rte_return   am_rte_return

extern uint32_t d0, d1, d2, d3, d4, d5, d6, d7;
extern uint32_t a0, a1, a2, a3, a4, a5, a6, a7;
extern uint8_t fx, fn, fz, fv, fc;
extern uint32_t sr_sys, other_sp;
extern uint32_t ret_addr;
extern uint32_t resume_pc;

uint32_t am_io_read(uint32_t a, int size);
void am_io_write(uint32_t a, int size, uint32_t v);
void am_call_dynamic(uint32_t pc);
void am_rte_return(void);
uint32_t shift_op(int type, int left, uint32_t v, uint32_t cnt, int bits); /* runtime/machine.c */
void set_sr(uint32_t v);                                                   /* runtime/machine.c */
uint32_t get_sr(void);                                                     /* runtime/machine.c */
void cpu_trap_zerodiv(void);
void cpu_trap_chk(void);
void cpu_trap_v(void);

static inline uint32_t rd8(uint32_t a) {
    a &= 0xFFFFFFu;
    return a < RAMSZ ? ram[a] : io_read(a, 1);
}
static inline uint32_t rd16(uint32_t a) {
    a &= 0xFFFFFFu;
    if (a < RAMSZ - 1) {
        uint16_t v;
        memcpy(&v, ram + a, 2);
        return (uint32_t)__builtin_bswap16(v);
    }
    return io_read(a, 2);
}
static inline uint32_t rd32(uint32_t a) {
    a &= 0xFFFFFFu;
    if (a < RAMSZ - 3) {
        uint32_t v;
        memcpy(&v, ram + a, 4);
        return __builtin_bswap32(v);
    }
    return io_read(a, 4);
}
static inline void wr8(uint32_t a, uint32_t v) {
    a &= 0xFFFFFFu;
    if (a < RAMSZ)
        ram[a] = (uint8_t)v;
    else
        io_write(a, 1, v);
}
static inline void wr16(uint32_t a, uint32_t v) {
    a &= 0xFFFFFFu;
    if (a < RAMSZ - 1) {
        uint16_t x = __builtin_bswap16((uint16_t)v);
        memcpy(ram + a, &x, 2);
    } else
        io_write(a, 2, v);
}
static inline void wr32(uint32_t a, uint32_t v) {
    a &= 0xFFFFFFu;
    if (a < RAMSZ - 3) {
        uint32_t x = __builtin_bswap32(v);
        memcpy(ram + a, &x, 4);
    } else
        io_write(a, 4, v);
}

#define SETB(r, v) ((r) = ((r) & 0xFFFFFF00u) | ((uint32_t)(v) & 0xFFu))
#define SETW(r, v) ((r) = ((r) & 0xFFFF0000u) | ((uint32_t)(v) & 0xFFFFu))
#define SX8(x)     ((uint32_t)(int32_t)(int8_t)(x))
#define SX16(x)    ((uint32_t)(int32_t)(int16_t)(x))

#define FLAGS_LOGIC(r, m, s)                                                                                           \
    do {                                                                                                               \
        fn = !!((r) & (s));                                                                                            \
        fz = (((r) & (m)) == 0);                                                                                       \
        fv = 0;                                                                                                        \
        fc = 0;                                                                                                        \
    } while (0)
#define FLAGS_ADD(sv, dv, r, m, s, setx)                                                                               \
    do {                                                                                                               \
        fn = !!((r) & (s));                                                                                            \
        fz = (((r) & (m)) == 0);                                                                                       \
        fv = !!((~((sv) ^ (dv)) & ((sv) ^ (r))) & (s));                                                                \
        fc = (((r) & (m)) < ((sv) & (m)));                                                                             \
        if (setx)                                                                                                      \
            fx = fc;                                                                                                   \
    } while (0)
#define FLAGS_SUB(sv, dv, r, m, s, setx)                                                                               \
    do {                                                                                                               \
        fn = !!((r) & (s));                                                                                            \
        fz = (((r) & (m)) == 0);                                                                                       \
        fv = !!((((sv) ^ (dv)) & ((dv) ^ (r))) & (s));                                                                 \
        fc = (((sv) & (m)) > ((dv) & (m)));                                                                            \
        if (setx)                                                                                                      \
            fx = fc;                                                                                                   \
    } while (0)
#define FL_LOGIC FLAGS_LOGIC
#define FL_ADD   FLAGS_ADD
#define FL_SUB   FLAGS_SUB
static inline uint32_t get_ccr(void) {
    return ((uint32_t)fx << 4) | ((uint32_t)fn << 3) | ((uint32_t)fz << 2) | ((uint32_t)fv << 1) | fc;
}
static inline void set_ccr(uint32_t v) {
    fx = (v >> 4) & 1;
    fn = (v >> 3) & 1;
    fz = (v >> 2) & 1;
    fv = (v >> 1) & 1;
    fc = v & 1;
}

#define COND_0  1
#define COND_1  0
#define COND_2  (!fc && !fz)
#define COND_3  (fc || fz)
#define COND_4  (!fc)
#define COND_5  (fc)
#define COND_6  (!fz)
#define COND_7  (fz)
#define COND_8  (!fv)
#define COND_9  (fv)
#define COND_10 (!fn)
#define COND_11 (fn)
#define COND_12 (fn == fv)
#define COND_13 (fn != fv)
#define COND_14 (!fz && fn == fv)
#define COND_15 (fz || fn != fv)
#define COND(n) COND_##n

#define PUSH32(v)                                                                                                      \
    do {                                                                                                               \
        a7 -= 4;                                                                                                       \
        wr32(a7, (v));                                                                                                 \
    } while (0)
#define PUSH16(v)                                                                                                      \
    do {                                                                                                               \
        a7 -= 2;                                                                                                       \
        wr16(a7, (v));                                                                                                 \
    } while (0)
#define CHECK_NONLOCAL(ret) ((void)0)
#define CALL(fn_, ret)                                                                                                 \
    do {                                                                                                               \
        PUSH32(ret);                                                                                                   \
        fn_();                                                                                                         \
        if (ret_addr != (ret)) {                                                                                       \
            CHECK_NONLOCAL(ret);                                                                                       \
            return;                                                                                                    \
        }                                                                                                              \
    } while (0)
#define CALL_DYN(ea, ret)                                                                                              \
    do {                                                                                                               \
        uint32_t t_ = (ea);                                                                                            \
        PUSH32(ret);                                                                                                   \
        call_dynamic(t_);                                                                                              \
        if (ret_addr != (ret)) {                                                                                       \
            CHECK_NONLOCAL(ret);                                                                                       \
            return;                                                                                                    \
        }                                                                                                              \
    } while (0)
#define RTS()                                                                                                          \
    do {                                                                                                               \
        ret_addr = rd32(a7);                                                                                           \
        a7 += 4;                                                                                                       \
        return;                                                                                                        \
    } while (0)
#define RTR()                                                                                                          \
    do {                                                                                                               \
        set_ccr(rd16(a7));                                                                                             \
        ret_addr = rd32(a7 + 2);                                                                                       \
        a7 += 6;                                                                                                       \
        return;                                                                                                        \
    } while (0)
#define JUMP_DYN(ea)                                                                                                   \
    do {                                                                                                               \
        uint32_t t_ = (ea);                                                                                            \
        call_dynamic(t_);                                                                                              \
        return;                                                                                                        \
    } while (0)
#define RTE()                                                                                                          \
    do {                                                                                                               \
        rte_return();                                                                                                  \
        return;                                                                                                        \
    } while (0)
#define MISS(a)                                                                                                        \
    do {                                                                                                               \
        call_dynamic(a);                                                                                               \
        return;                                                                                                        \
    } while (0)

/* the driver runs to completion: no cycle budget, no tracing */
#define ITR(a, c)          ((void)0)
#define FN_ENTER(a)        ((void)0)
#define BUDGET_CHECK(addr) ((void)0)

#endif
