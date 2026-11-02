/* generado por port/gen/gen.py: no editar */
#include "cpu.h"
#include "dwam.h"

void dwam_051762(void)
{
    FN_ENTER(0x51762U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51766U: goto L_051766;
        case 0x5176AU: goto L_05176A;
        case 0x5176EU: goto L_05176E;
        default: break; } }
L_051762: ;
    ITR(0x51762U, 104);
    { /* 051762 051762 movem_to_mem.l src=None dst=EA(pre r=7 d=0 v=0) */
        {
        a7 -= 4; wr32(a7, a6);
        a7 -= 4; wr32(a7, a5);
        a7 -= 4; wr32(a7, a4);
        a7 -= 4; wr32(a7, a3);
        a7 -= 4; wr32(a7, a2);
        a7 -= 4; wr32(a7, a1);
        a7 -= 4; wr32(a7, a0);
        a7 -= 4; wr32(a7, d7);
        a7 -= 4; wr32(a7, d3);
        a7 -= 4; wr32(a7, d2);
        a7 -= 4; wr32(a7, d1);
        a7 -= 4; wr32(a7, d0);
        }
    }
L_051766: ;
    ITR(0x51766U, 18);
    { /* 051766 051766 bsr src=None dst=None cc=1 */
        CALL(dwam_0517C0, 0x5176AU);
    }
L_05176A: ;
    ITR(0x5176AU, 108);
    { /* 05176A 05176a movem_to_reg.l src=EA(post r=7 d=0 v=0) dst=None */
        {
        uint32_t ad = a7;
        d0 = rd32(ad); ad += 4;
        d1 = rd32(ad); ad += 4;
        d2 = rd32(ad); ad += 4;
        d3 = rd32(ad); ad += 4;
        d7 = rd32(ad); ad += 4;
        a0 = rd32(ad); ad += 4;
        a1 = rd32(ad); ad += 4;
        a2 = rd32(ad); ad += 4;
        a3 = rd32(ad); ad += 4;
        a4 = rd32(ad); ad += 4;
        a5 = rd32(ad); ad += 4;
        a6 = rd32(ad); ad += 4;
        a7 = ad;
        }
    }
L_05176E: ;
    ITR(0x5176EU, 16);
    { /* 05176E 05176e rts src=None dst=None */
        RTS();
    }
}

void dwam_051770(void)
{
    FN_ENTER(0x51770U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51774U: goto L_051774;
        case 0x51778U: goto L_051778;
        case 0x5177CU: goto L_05177C;
        default: break; } }
L_051770: ;
    ITR(0x51770U, 104);
    { /* 051770 051770 movem_to_mem.l src=None dst=EA(pre r=7 d=0 v=0) */
        {
        a7 -= 4; wr32(a7, a6);
        a7 -= 4; wr32(a7, a5);
        a7 -= 4; wr32(a7, a4);
        a7 -= 4; wr32(a7, a3);
        a7 -= 4; wr32(a7, a2);
        a7 -= 4; wr32(a7, a1);
        a7 -= 4; wr32(a7, a0);
        a7 -= 4; wr32(a7, d7);
        a7 -= 4; wr32(a7, d3);
        a7 -= 4; wr32(a7, d2);
        a7 -= 4; wr32(a7, d1);
        a7 -= 4; wr32(a7, d0);
        }
    }
L_051774: ;
    ITR(0x51774U, 18);
    { /* 051774 051774 bsr src=None dst=None cc=1 */
        CALL(dwam_051918, 0x51778U);
    }
L_051778: ;
    ITR(0x51778U, 108);
    { /* 051778 051778 movem_to_reg.l src=EA(post r=7 d=0 v=0) dst=None */
        {
        uint32_t ad = a7;
        d0 = rd32(ad); ad += 4;
        d1 = rd32(ad); ad += 4;
        d2 = rd32(ad); ad += 4;
        d3 = rd32(ad); ad += 4;
        d7 = rd32(ad); ad += 4;
        a0 = rd32(ad); ad += 4;
        a1 = rd32(ad); ad += 4;
        a2 = rd32(ad); ad += 4;
        a3 = rd32(ad); ad += 4;
        a4 = rd32(ad); ad += 4;
        a5 = rd32(ad); ad += 4;
        a6 = rd32(ad); ad += 4;
        a7 = ad;
        }
    }
L_05177C: ;
    ITR(0x5177CU, 16);
    { /* 05177C 05177c rts src=None dst=None */
        RTS();
    }
}

void dwam_05177E(void)
{
    FN_ENTER(0x5177EU);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51782U: goto L_051782;
        case 0x51786U: goto L_051786;
        case 0x5178AU: goto L_05178A;
        default: break; } }
L_05177E: ;
    ITR(0x5177EU, 16);
    { /* 05177E 05177e movem_to_mem.l src=None dst=EA(pre r=7 d=0 v=0) */
        {
        a7 -= 4; wr32(a7, a3);
        }
    }
L_051782: ;
    ITR(0x51782U, 18);
    { /* 051782 051782 bsr src=None dst=None cc=1 */
        CALL(dwam_05185E, 0x51786U);
    }
L_051786: ;
    ITR(0x51786U, 20);
    { /* 051786 051786 movem_to_reg.l src=EA(post r=7 d=0 v=0) dst=None */
        {
        uint32_t ad = a7;
        a3 = rd32(ad); ad += 4;
        a7 = ad;
        }
    }
L_05178A: ;
    ITR(0x5178AU, 16);
    { /* 05178A 05178a rts src=None dst=None */
        RTS();
    }
}

void dwam_05178C(void)
{
    FN_ENTER(0x5178CU);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51790U: goto L_051790;
        case 0x51794U: goto L_051794;
        case 0x51798U: goto L_051798;
        default: break; } }
L_05178C: ;
    ITR(0x5178CU, 32);
    { /* 05178C 05178c movem_to_mem.l src=None dst=EA(pre r=7 d=0 v=0) */
        {
        a7 -= 4; wr32(a7, a3);
        a7 -= 4; wr32(a7, d7);
        a7 -= 4; wr32(a7, d1);
        }
    }
L_051790: ;
    ITR(0x51790U, 18);
    { /* 051790 051790 bsr src=None dst=None cc=1 */
        CALL(dwam_0518D6, 0x51794U);
    }
L_051794: ;
    ITR(0x51794U, 36);
    { /* 051794 051794 movem_to_reg.l src=EA(post r=7 d=0 v=0) dst=None */
        {
        uint32_t ad = a7;
        d1 = rd32(ad); ad += 4;
        d7 = rd32(ad); ad += 4;
        a3 = rd32(ad); ad += 4;
        a7 = ad;
        }
    }
L_051798: ;
    ITR(0x51798U, 16);
    { /* 051798 051798 rts src=None dst=None */
        RTS();
    }
}

void dwam_05179A(void)
{
    FN_ENTER(0x5179AU);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x5179EU: goto L_05179E;
        default: break; } }
L_05179A: ;
    ITR(0x5179AU, 104);
    { /* 05179A 05179a movem_to_mem.l src=None dst=EA(pre r=7 d=0 v=0) */
        {
        a7 -= 4; wr32(a7, a6);
        a7 -= 4; wr32(a7, a5);
        a7 -= 4; wr32(a7, a4);
        a7 -= 4; wr32(a7, a3);
        a7 -= 4; wr32(a7, a2);
        a7 -= 4; wr32(a7, a1);
        a7 -= 4; wr32(a7, a0);
        a7 -= 4; wr32(a7, d7);
        a7 -= 4; wr32(a7, d3);
        a7 -= 4; wr32(a7, d2);
        a7 -= 4; wr32(a7, d1);
        a7 -= 4; wr32(a7, d0);
        }
    }
L_05179E: ;
    ITR(0x5179EU, 18);
    { /* 05179E 05179e bsr src=None dst=None cc=1 */
        CALL(dwam_052956, 0x517A2U);
    }
    { dwam_0517A2(); return; }
}

void dwam_0517A2(void)
{
    FN_ENTER(0x517A2U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x517A6U: goto L_0517A6;
        default: break; } }
L_0517A2: ;
    ITR(0x517A2U, 108);
    { /* 0517A2 0517a2 movem_to_reg.l src=EA(post r=7 d=0 v=0) dst=None */
        {
        uint32_t ad = a7;
        d0 = rd32(ad); ad += 4;
        d1 = rd32(ad); ad += 4;
        d2 = rd32(ad); ad += 4;
        d3 = rd32(ad); ad += 4;
        d7 = rd32(ad); ad += 4;
        a0 = rd32(ad); ad += 4;
        a1 = rd32(ad); ad += 4;
        a2 = rd32(ad); ad += 4;
        a3 = rd32(ad); ad += 4;
        a4 = rd32(ad); ad += 4;
        a5 = rd32(ad); ad += 4;
        a6 = rd32(ad); ad += 4;
        a7 = ad;
        }
    }
L_0517A6: ;
    ITR(0x517A6U, 16);
    { /* 0517A6 0517a6 rts src=None dst=None */
        RTS();
    }
}

void dwam_0517A8(void)
{
    FN_ENTER(0x517A8U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x517ACU: goto L_0517AC;
        case 0x517B0U: goto L_0517B0;
        case 0x517B4U: goto L_0517B4;
        default: break; } }
L_0517A8: ;
    ITR(0x517A8U, 16);
    { /* 0517A8 0517a8 movem_to_mem.l src=None dst=EA(pre r=7 d=0 v=0) */
        {
        a7 -= 4; wr32(a7, a3);
        }
    }
L_0517AC: ;
    ITR(0x517ACU, 18);
    { /* 0517AC 0517ac bsr src=None dst=None cc=1 */
        CALL(dwam_0518B8, 0x517B0U);
    }
L_0517B0: ;
    ITR(0x517B0U, 20);
    { /* 0517B0 0517b0 movem_to_reg.l src=EA(post r=7 d=0 v=0) dst=None */
        {
        uint32_t ad = a7;
        a3 = rd32(ad); ad += 4;
        a7 = ad;
        }
    }
L_0517B4: ;
    ITR(0x517B4U, 16);
    { /* 0517B4 0517b4 rts src=None dst=None */
        RTS();
    }
}

void dwam_0517C0(void)
{
    FN_ENTER(0x517C0U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x517C8U: goto L_0517C8;
        case 0x517CCU: goto L_0517CC;
        case 0x517D0U: goto L_0517D0;
        case 0x517D4U: goto L_0517D4;
        case 0x517D8U: goto L_0517D8;
        case 0x517DCU: goto L_0517DC;
        case 0x517DEU: goto L_0517DE;
        case 0x517E2U: goto L_0517E2;
        case 0x517E6U: goto L_0517E6;
        case 0x517EAU: goto L_0517EA;
        case 0x517ECU: goto L_0517EC;
        case 0x517F0U: goto L_0517F0;
        case 0x517F6U: goto L_0517F6;
        case 0x517FCU: goto L_0517FC;
        case 0x517FEU: goto L_0517FE;
        case 0x51804U: goto L_051804;
        case 0x51808U: goto L_051808;
        case 0x5180CU: goto L_05180C;
        case 0x51810U: goto L_051810;
        case 0x51814U: goto L_051814;
        case 0x51818U: goto L_051818;
        case 0x5181CU: goto L_05181C;
        case 0x51820U: goto L_051820;
        case 0x51824U: goto L_051824;
        case 0x51828U: goto L_051828;
        case 0x5182CU: goto L_05182C;
        case 0x51832U: goto L_051832;
        case 0x51836U: goto L_051836;
        case 0x51838U: goto L_051838;
        case 0x5183CU: goto L_05183C;
        case 0x51840U: goto L_051840;
        case 0x51842U: goto L_051842;
        case 0x51844U: goto L_051844;
        case 0x51848U: goto L_051848;
        case 0x5184AU: goto L_05184A;
        case 0x51850U: goto L_051850;
        case 0x51854U: goto L_051854;
        case 0x51858U: goto L_051858;
        case 0x5185CU: goto L_05185C;
        default: break; } }
L_0517C0: ;
    ITR(0x517C0U, 24);
    { /* 0517C0 0517c0 bset.b src=EA(imm r=0 d=0 v=1) dst=EA(absl r=0 d=0 v=bfe001) */
        { uint32_t t1 = (0x1U) & 7;
        uint32_t t3 = 0xBFE001U;
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 | (1u << t1));
        }
    }
L_0517C8: ;
    ITR(0x517C8U, 8);
    { /* 0517C8 0517c8 lea.l src=EA(pcd r=0 d=0 v=51762) dst=EA(an r=3 d=0 v=0) */
        a3 = 0x51762U;
    }
L_0517CC: ;
    ITR(0x517CCU, 18);
    { /* 0517CC 0517cc bsr src=None dst=None cc=1 */
        CALL(dwam_05177E, 0x517D0U);
    }
L_0517D0: ;
    ITR(0x517D0U, 18);
    { /* 0517D0 0517d0 bsr src=None dst=None cc=1 */
        CALL(dwam_0528E2, 0x517D4U);
    }
L_0517D4: ;
    ITR(0x517D4U, 13);
    { /* 0517D4 0517d4 scc.b src=None dst=EA(d16 r=3 d=1581 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x62DU);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_0517D8: ;
    ITR(0x517D8U, 8);
    { /* 0517D8 0517d8 lea.l src=EA(pcd r=0 d=0 v=51d9a) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x51D9AU;
    }
L_0517DC: ;
    ITR(0x517DCU, 4);
    { /* 0517DC 0517dc ext.w src=None dst=EA(dn r=0 d=0 v=0) */
        SETW(d0, SX8(d0));
    }
L_0517DE: ;
    ITR(0x517DEU, 74);
    { /* 0517DE 0517de mulu.w src=EA(imm r=0 d=0 v=a) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xAU;
        d0 = t1;
        }
    }
L_0517E2: ;
    ITR(0x517E2U, 8);
    { /* 0517E2 0517e2 lea.l src=EA(pcd r=0 d=0 v=51fb4) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x51FB4U;
    }
L_0517E6: ;
    ITR(0x517E6U, 14);
    { /* 0517E6 0517e6 move.b src=EA(idx r=0 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETB(d1, t1);
        }
    }
L_0517EA: ;
    ITR(0x517EAU, 4);
    { /* 0517EA 0517ea ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_0517EC: ;
    ITR(0x517ECU, 12);
    { /* 0517EC 0517ec move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=3 d=1568 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a3 + 0x620U), t1);
        }
    }
L_0517F0: ;
    ITR(0x517F0U, 22);
    { /* 0517F0 0517f0 move.b src=EA(idx r=0 d=1 v=0) dst=EA(d16 r=3 d=1572 v=0) */
        { uint32_t t1 = rd8((a0 + 0x1U + ((uint32_t)(int32_t)(int16_t)d0)));
        wr8((a3 + 0x624U), t1);
        }
    }
L_0517F6: ;
    ITR(0x517F6U, 20);
    { /* 0517F6 0517f6 move.b src=EA(pcd r=0 d=0 v=51d86) dst=EA(d16 r=3 d=1573 v=0) */
        { uint32_t t1 = rd8(0x51D86U);
        wr8((a3 + 0x625U), t1);
        }
    }
L_0517FC: ;
    ITR(0x517FCU, 4);
    { /* 0517FC 0517fc moveq.l src=EA(imm r=0 d=0 v=0) dst=EA(dn r=7 d=0 v=0) */
        d7 = 0x0U;
    }
L_0517FE: ;
    ITR(0x517FEU, 16);
    { /* 0517FE 0517fe move.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=1 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        wr16((a1 + 0x1EU), t1);
        }
    }
L_051804: ;
    ITR(0x51804U, 13);
    { /* 051804 051804 scc.b src=None dst=EA(d16 r=1 d=0 v=0) cc=1 */
        { uint32_t t2 = (a1 + 0x0U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051808: ;
    ITR(0x51808U, 13);
    { /* 051808 051808 scc.b src=None dst=EA(d16 r=1 d=1 v=0) cc=1 */
        { uint32_t t2 = (a1 + 0x1U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_05180C: ;
    ITR(0x5180CU, 13);
    { /* 05180C 05180c scc.b src=None dst=EA(d16 r=1 d=3 v=0) cc=1 */
        { uint32_t t2 = (a1 + 0x3U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051810: ;
    ITR(0x51810U, 13);
    { /* 051810 051810 scc.b src=None dst=EA(d16 r=1 d=22 v=0) cc=0 */
        { uint32_t t2 = (a1 + 0x16U);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_051814: ;
    ITR(0x51814U, 8);
    { /* 051814 051814 lea.l src=EA(pcd r=0 d=0 v=51f0a) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x51F0AU;
    }
L_051818: ;
    ITR(0x51818U, 20);
    { /* 051818 051818 move.l src=EA(an r=0 d=0 v=0) dst=EA(d16 r=1 d=12 v=0) */
        { uint32_t t1 = a0;
        wr32((a1 + 0xCU), t1);
        }
    }
L_05181C: ;
    ITR(0x5181CU, 20);
    { /* 05181C 05181c move.l src=EA(an r=0 d=0 v=0) dst=EA(d16 r=1 d=16 v=0) */
        { uint32_t t1 = a0;
        wr32((a1 + 0x10U), t1);
        }
    }
L_051820: ;
    ITR(0x51820U, 8);
    { /* 051820 051820 lea.l src=EA(pcd r=0 d=0 v=51fb4) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x51FB4U;
    }
L_051824: ;
    ITR(0x51824U, 14);
    { /* 051824 051824 movea.w src=EA(idx r=0 d=2 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 = SX16(rd16((a0 + 0x2U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051828: ;
    ITR(0x51828U, 12);
    { /* 051828 051828 move.w src=EA(an r=0 d=0 v=0) dst=EA(d16 r=1 d=8 v=0) */
        { uint32_t t1 = (a0 & 0xFFFF);
        wr16((a1 + 0x8U), t1);
        }
    }
L_05182C: ;
    ITR(0x5182CU, 16);
    { /* 05182C 05182c move.w src=EA(imm r=0 d=0 v=2) dst=EA(d16 r=1 d=10 v=0) */
        { uint32_t t1 = 0x2U;
        wr16((a1 + 0xAU), t1);
        }
    }
L_051832: ;
    ITR(0x51832U, 14);
    { /* 051832 051832 movea.w src=EA(idx r=3 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 = SX16(rd16((a3 + 0x0U + ((uint32_t)(int32_t)(int16_t)a0))));
    }
L_051836: ;
    ITR(0x51836U, 6);
    { /* 051836 051836 adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 += a3;
    }
L_051838: ;
    ITR(0x51838U, 20);
    { /* 051838 051838 move.l src=EA(an r=0 d=0 v=0) dst=EA(d16 r=1 d=4 v=0) */
        { uint32_t t1 = a0;
        wr32((a1 + 0x4U), t1);
        }
    }
L_05183C: ;
    ITR(0x5183CU, 12);
    { /* 05183C 05183c adda.w src=EA(imm r=0 d=0 v=30) dst=EA(an r=1 d=0 v=0) */
        a1 += 0x30U;
    }
L_051840: ;
    ITR(0x51840U, 4);
    { /* 051840 051840 addq.w src=EA(imm r=0 d=0 v=2) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x2U;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051842: ;
    ITR(0x51842U, 4);
    { /* 051842 051842 addq.w src=EA(imm r=0 d=0 v=1) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d7, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFFFU, 0x8000U, 1);
        }
    }
L_051844: ;
    ITR(0x51844U, 8);
    { /* 051844 051844 cmp.w src=EA(imm r=0 d=0 v=4) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x4U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051848: ;
    ITR(0x51848U, 10);
    { /* 051848 051848 bcc src=None dst=None cc=6 */
        if (COND_6) { BUDGET_CHECK(0x517FEU); goto L_0517FE; }
    }
L_05184A: ;
    ITR(0x5184AU, 16);
    { /* 05184A 05184a move.w src=EA(imm r=0 d=0 v=40) dst=EA(d16 r=3 d=1570 v=0) */
        { uint32_t t1 = 0x40U;
        wr16((a3 + 0x622U), t1);
        FLAGS_LOGIC(t1, 0xFFFFU, 0x8000U);
        }
    }
L_051850: ;
    ITR(0x51850U, 13);
    { /* 051850 051850 scc.b src=None dst=EA(d16 r=3 d=1575 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x627U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051854: ;
    ITR(0x51854U, 13);
    { /* 051854 051854 scc.b src=None dst=EA(d16 r=3 d=1580 v=0) cc=0 */
        { uint32_t t2 = (a3 + 0x62CU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_051858: ;
    ITR(0x51858U, 13);
    { /* 051858 051858 scc.b src=None dst=EA(d16 r=3 d=1578 v=0) cc=0 */
        { uint32_t t2 = (a3 + 0x62AU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_05185C: ;
    ITR(0x5185CU, 16);
    { /* 05185C 05185c rts src=None dst=None */
        RTS();
    }
}

void dwam_05185E(void)
{
    FN_ENTER(0x5185EU);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51862U: goto L_051862;
        case 0x51866U: goto L_051866;
        case 0x5186AU: goto L_05186A;
        case 0x5186EU: goto L_05186E;
        case 0x51872U: goto L_051872;
        case 0x51876U: goto L_051876;
        case 0x5187AU: goto L_05187A;
        case 0x5187EU: goto L_05187E;
        case 0x51882U: goto L_051882;
        case 0x51886U: goto L_051886;
        case 0x5188EU: goto L_05188E;
        case 0x51896U: goto L_051896;
        case 0x5189EU: goto L_05189E;
        case 0x518A6U: goto L_0518A6;
        case 0x518AEU: goto L_0518AE;
        case 0x518B6U: goto L_0518B6;
        default: break; } }
L_05185E: ;
    ITR(0x5185EU, 8);
    { /* 05185E 05185e lea.l src=EA(pcd r=0 d=0 v=51762) dst=EA(an r=3 d=0 v=0) */
        a3 = 0x51762U;
    }
L_051862: ;
    ITR(0x51862U, 13);
    { /* 051862 051862 scc.b src=None dst=EA(d16 r=3 d=1580 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x62CU);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051866: ;
    ITR(0x51866U, 13);
    { /* 051866 051866 scc.b src=None dst=EA(d16 r=3 d=5204 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x1454U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_05186A: ;
    ITR(0x5186AU, 13);
    { /* 05186A 05186a scc.b src=None dst=EA(d16 r=3 d=5240 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x1478U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_05186E: ;
    ITR(0x5186EU, 13);
    { /* 05186E 05186e scc.b src=None dst=EA(d16 r=3 d=5276 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x149CU);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051872: ;
    ITR(0x51872U, 13);
    { /* 051872 051872 scc.b src=None dst=EA(d16 r=3 d=5312 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x14C0U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051876: ;
    ITR(0x51876U, 16);
    { /* 051876 051876 clr.w src=None dst=EA(d16 r=3 d=5334 v=0) */
        wr16((a3 + 0x14D6U), 0);
    }
L_05187A: ;
    ITR(0x5187AU, 16);
    { /* 05187A 05187a clr.w src=None dst=EA(d16 r=3 d=5346 v=0) */
        wr16((a3 + 0x14E2U), 0);
    }
L_05187E: ;
    ITR(0x5187EU, 16);
    { /* 05187E 05187e clr.w src=None dst=EA(d16 r=3 d=5358 v=0) */
        wr16((a3 + 0x14EEU), 0);
    }
L_051882: ;
    ITR(0x51882U, 16);
    { /* 051882 051882 clr.w src=None dst=EA(d16 r=3 d=5370 v=0) */
        wr16((a3 + 0x14FAU), 0);
    }
L_051886: ;
    ITR(0x51886U, 20);
    { /* 051886 051886 move.w src=EA(imm r=0 d=0 v=f) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = 0xFU;
        wr16(0xDFF096U, t1);
        }
    }
L_05188E: ;
    ITR(0x5188EU, 20);
    { /* 05188E 05188e move.w src=EA(imm r=0 d=0 v=ff) dst=EA(absl r=0 d=0 v=dff09e) */
        { uint32_t t1 = 0xFFU;
        wr16(0xDFF09EU, t1);
        }
    }
L_051896: ;
    ITR(0x51896U, 20);
    { /* 051896 051896 move.w src=EA(imm r=0 d=0 v=0) dst=EA(absl r=0 d=0 v=dff0a8) */
        { uint32_t t1 = 0x0U;
        wr16(0xDFF0A8U, t1);
        }
    }
L_05189E: ;
    ITR(0x5189EU, 20);
    { /* 05189E 05189e move.w src=EA(imm r=0 d=0 v=0) dst=EA(absl r=0 d=0 v=dff0b8) */
        { uint32_t t1 = 0x0U;
        wr16(0xDFF0B8U, t1);
        }
    }
L_0518A6: ;
    ITR(0x518A6U, 20);
    { /* 0518A6 0518a6 move.w src=EA(imm r=0 d=0 v=0) dst=EA(absl r=0 d=0 v=dff0c8) */
        { uint32_t t1 = 0x0U;
        wr16(0xDFF0C8U, t1);
        }
    }
L_0518AE: ;
    ITR(0x518AEU, 20);
    { /* 0518AE 0518ae move.w src=EA(imm r=0 d=0 v=0) dst=EA(absl r=0 d=0 v=dff0d8) */
        { uint32_t t1 = 0x0U;
        wr16(0xDFF0D8U, t1);
        FLAGS_LOGIC(t1, 0xFFFFU, 0x8000U);
        }
    }
L_0518B6: ;
    ITR(0x518B6U, 16);
    { /* 0518B6 0518b6 rts src=None dst=None */
        RTS();
    }
}

void dwam_0518B8(void)
{
    FN_ENTER(0x518B8U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x518BCU: goto L_0518BC;
        case 0x518C2U: goto L_0518C2;
        case 0x518C8U: goto L_0518C8;
        case 0x518CEU: goto L_0518CE;
        case 0x518D4U: goto L_0518D4;
        default: break; } }
L_0518B8: ;
    ITR(0x518B8U, 8);
    { /* 0518B8 0518b8 lea.l src=EA(pcd r=0 d=0 v=51762) dst=EA(an r=3 d=0 v=0) */
        a3 = 0x51762U;
    }
L_0518BC: ;
    ITR(0x518BCU, 16);
    { /* 0518BC 0518bc move.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=3 d=5196 v=0) */
        { uint32_t t1 = 0x1U;
        wr8((a3 + 0x144CU), t1);
        }
    }
L_0518C2: ;
    ITR(0x518C2U, 16);
    { /* 0518C2 0518c2 move.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=3 d=5232 v=0) */
        { uint32_t t1 = 0x1U;
        wr8((a3 + 0x1470U), t1);
        }
    }
L_0518C8: ;
    ITR(0x518C8U, 16);
    { /* 0518C8 0518c8 move.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=3 d=5268 v=0) */
        { uint32_t t1 = 0x1U;
        wr8((a3 + 0x1494U), t1);
        }
    }
L_0518CE: ;
    ITR(0x518CEU, 16);
    { /* 0518CE 0518ce move.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=3 d=5304 v=0) */
        { uint32_t t1 = 0x1U;
        wr8((a3 + 0x14B8U), t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_0518D4: ;
    ITR(0x518D4U, 16);
    { /* 0518D4 0518d4 rts src=None dst=None */
        RTS();
    }
}

void dwam_0518D6(void)
{
    FN_ENTER(0x518D6U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x518DAU: goto L_0518DA;
        case 0x518DEU: goto L_0518DE;
        case 0x518E0U: goto L_0518E0;
        case 0x518E8U: goto L_0518E8;
        case 0x518ECU: goto L_0518EC;
        case 0x518EEU: goto L_0518EE;
        case 0x518F0U: goto L_0518F0;
        case 0x518F4U: goto L_0518F4;
        case 0x518FAU: goto L_0518FA;
        case 0x518FEU: goto L_0518FE;
        default: break; } }
L_0518D6: ;
    ITR(0x518D6U, 8);
    { /* 0518D6 0518d6 lea.l src=EA(pcd r=0 d=0 v=51762) dst=EA(an r=3 d=0 v=0) */
        a3 = 0x51762U;
    }
L_0518DA: ;
    ITR(0x518DAU, 12);
    { /* 0518DA 0518da tst.b src=None dst=EA(d16 r=3 d=1578 v=0) */
        { uint32_t t = rd8((a3 + 0x62AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0518DE: ;
    ITR(0x518DEU, 8);
    { /* 0518DE 0518de bcc src=None dst=None cc=7 */
        if (COND_7) goto L_0518FE;
    }
L_0518E0: ;
    ITR(0x518E0U, 20);
    { /* 0518E0 0518e0 move.w src=EA(imm r=0 d=0 v=ff) dst=EA(absl r=0 d=0 v=dff09e) */
        { uint32_t t1 = 0xFFU;
        wr16(0xDFF09EU, t1);
        }
    }
L_0518E8: ;
    ITR(0x518E8U, 8);
    { /* 0518E8 0518e8 move.w src=EA(imm r=0 d=0 v=8200) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x8200U;
        SETW(d1, t1);
        }
    }
L_0518EC: ;
    ITR(0x518ECU, 4);
    { /* 0518EC 0518ec moveq.l src=EA(imm r=0 d=0 v=3) dst=EA(dn r=7 d=0 v=0) */
        d7 = 0x3U;
    }
L_0518EE: ;
    ITR(0x518EEU, 8);
    { /* 0518EE 0518ee bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_0518F0: ;
    ITR(0x518F0U, 10);
    { /* 0518F0 0518f0 dbcc.w src=None dst=EA(dn r=7 d=0 v=0) cc=1 */
        {
        SETW(d7, d7 - 1); if ((d7 & 0xFFFF) != 0xFFFF) { BUDGET_CHECK(0x518EEU); goto L_0518EE; }
        }
    }
L_0518F4: ;
    ITR(0x518F4U, 16);
    { /* 0518F4 0518f4 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        FLAGS_LOGIC(t1, 0xFFFFU, 0x8000U);
        }
    }
L_0518FA: ;
    ITR(0x518FAU, 13);
    { /* 0518FA 0518fa scc.b src=None dst=EA(d16 r=3 d=1580 v=0) cc=0 */
        { uint32_t t2 = (a3 + 0x62CU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0518FE: ;
    ITR(0x518FEU, 16);
    { /* 0518FE 0518fe rts src=None dst=None */
        RTS();
    }
}

void dwam_051918(void)
{
    FN_ENTER(0x51918U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51912U: goto L_051912;
        case 0x51916U: goto L_051916;
        case 0x5191CU: goto L_05191C;
        case 0x51920U: goto L_051920;
        case 0x51922U: goto L_051922;
        case 0x51926U: goto L_051926;
        case 0x51928U: goto L_051928;
        case 0x5192CU: goto L_05192C;
        case 0x5192EU: goto L_05192E;
        case 0x51934U: goto L_051934;
        case 0x51936U: goto L_051936;
        case 0x5193AU: goto L_05193A;
        case 0x5193EU: goto L_05193E;
        case 0x51940U: goto L_051940;
        case 0x51944U: goto L_051944;
        case 0x51946U: goto L_051946;
        case 0x5194AU: goto L_05194A;
        case 0x5194EU: goto L_05194E;
        case 0x51952U: goto L_051952;
        case 0x51954U: goto L_051954;
        case 0x51958U: goto L_051958;
        case 0x5195CU: goto L_05195C;
        case 0x51962U: goto L_051962;
        case 0x51966U: goto L_051966;
        case 0x5196AU: goto L_05196A;
        case 0x5196EU: goto L_05196E;
        case 0x51970U: goto L_051970;
        case 0x51976U: goto L_051976;
        case 0x5197AU: goto L_05197A;
        case 0x51980U: goto L_051980;
        case 0x51982U: goto L_051982;
        case 0x51986U: goto L_051986;
        case 0x51988U: goto L_051988;
        case 0x5198EU: goto L_05198E;
        case 0x51992U: goto L_051992;
        case 0x51998U: goto L_051998;
        case 0x5199AU: goto L_05199A;
        case 0x5199EU: goto L_05199E;
        case 0x519A0U: goto L_0519A0;
        case 0x519A4U: goto L_0519A4;
        case 0x519A6U: goto L_0519A6;
        case 0x519AAU: goto L_0519AA;
        case 0x519ACU: goto L_0519AC;
        case 0x519B0U: goto L_0519B0;
        case 0x519B6U: goto L_0519B6;
        case 0x519BAU: goto L_0519BA;
        case 0x519BCU: goto L_0519BC;
        case 0x519C0U: goto L_0519C0;
        case 0x519C2U: goto L_0519C2;
        case 0x519C4U: goto L_0519C4;
        case 0x519C6U: goto L_0519C6;
        case 0x519C8U: goto L_0519C8;
        case 0x519CCU: goto L_0519CC;
        case 0x519D0U: goto L_0519D0;
        case 0x519D4U: goto L_0519D4;
        case 0x519D6U: goto L_0519D6;
        case 0x519DAU: goto L_0519DA;
        case 0x519DEU: goto L_0519DE;
        case 0x519E0U: goto L_0519E0;
        case 0x519E4U: goto L_0519E4;
        case 0x519E6U: goto L_0519E6;
        case 0x519E8U: goto L_0519E8;
        case 0x519ECU: goto L_0519EC;
        case 0x519EEU: goto L_0519EE;
        case 0x519F2U: goto L_0519F2;
        case 0x519F6U: goto L_0519F6;
        case 0x519FAU: goto L_0519FA;
        case 0x519FCU: goto L_0519FC;
        case 0x51A00U: goto L_051A00;
        case 0x51A04U: goto L_051A04;
        case 0x51A06U: goto L_051A06;
        case 0x51A0CU: goto L_051A0C;
        case 0x51A12U: goto L_051A12;
        case 0x51A16U: goto L_051A16;
        case 0x51A18U: goto L_051A18;
        case 0x51A1EU: goto L_051A1E;
        case 0x51A24U: goto L_051A24;
        case 0x51A28U: goto L_051A28;
        case 0x51A2AU: goto L_051A2A;
        case 0x51A30U: goto L_051A30;
        case 0x51A34U: goto L_051A34;
        case 0x51A38U: goto L_051A38;
        case 0x51A3AU: goto L_051A3A;
        case 0x51A3EU: goto L_051A3E;
        case 0x51A40U: goto L_051A40;
        case 0x51A42U: goto L_051A42;
        case 0x51A44U: goto L_051A44;
        case 0x51A4AU: goto L_051A4A;
        case 0x51A4EU: goto L_051A4E;
        case 0x51A52U: goto L_051A52;
        case 0x51A54U: goto L_051A54;
        case 0x51A56U: goto L_051A56;
        case 0x51A5AU: goto L_051A5A;
        case 0x51A5EU: goto L_051A5E;
        case 0x51A62U: goto L_051A62;
        case 0x51A66U: goto L_051A66;
        case 0x51A6AU: goto L_051A6A;
        case 0x51A6CU: goto L_051A6C;
        case 0x51A70U: goto L_051A70;
        case 0x51A76U: goto L_051A76;
        case 0x51A78U: goto L_051A78;
        case 0x51A7EU: goto L_051A7E;
        case 0x51A84U: goto L_051A84;
        case 0x51A88U: goto L_051A88;
        case 0x51A8AU: goto L_051A8A;
        case 0x51A8CU: goto L_051A8C;
        case 0x51A90U: goto L_051A90;
        case 0x51A94U: goto L_051A94;
        case 0x51A96U: goto L_051A96;
        case 0x51A9CU: goto L_051A9C;
        case 0x51AA2U: goto L_051AA2;
        case 0x51AA6U: goto L_051AA6;
        case 0x51AAAU: goto L_051AAA;
        case 0x51AAEU: goto L_051AAE;
        case 0x51AB2U: goto L_051AB2;
        case 0x51AB4U: goto L_051AB4;
        case 0x51AB6U: goto L_051AB6;
        case 0x51ABAU: goto L_051ABA;
        case 0x51ABCU: goto L_051ABC;
        case 0x51ABEU: goto L_051ABE;
        case 0x51AC2U: goto L_051AC2;
        case 0x51AC6U: goto L_051AC6;
        case 0x51AC8U: goto L_051AC8;
        case 0x51ACCU: goto L_051ACC;
        case 0x51AD0U: goto L_051AD0;
        case 0x51AD4U: goto L_051AD4;
        case 0x51ADAU: goto L_051ADA;
        case 0x51ADEU: goto L_051ADE;
        case 0x51AE0U: goto L_051AE0;
        case 0x51AE6U: goto L_051AE6;
        case 0x51AE8U: goto L_051AE8;
        case 0x51AECU: goto L_051AEC;
        case 0x51AF0U: goto L_051AF0;
        case 0x51AF4U: goto L_051AF4;
        case 0x51AF8U: goto L_051AF8;
        case 0x51AFCU: goto L_051AFC;
        case 0x51B00U: goto L_051B00;
        case 0x51B04U: goto L_051B04;
        case 0x51B06U: goto L_051B06;
        case 0x51B0AU: goto L_051B0A;
        case 0x51B0CU: goto L_051B0C;
        case 0x51B10U: goto L_051B10;
        case 0x51B14U: goto L_051B14;
        case 0x51B16U: goto L_051B16;
        case 0x51B1AU: goto L_051B1A;
        case 0x51B1EU: goto L_051B1E;
        case 0x51B22U: goto L_051B22;
        case 0x51B24U: goto L_051B24;
        case 0x51B26U: goto L_051B26;
        case 0x51B2AU: goto L_051B2A;
        case 0x51B2CU: goto L_051B2C;
        case 0x51B2EU: goto L_051B2E;
        case 0x51B34U: goto L_051B34;
        case 0x51B36U: goto L_051B36;
        case 0x51B3AU: goto L_051B3A;
        case 0x51B3CU: goto L_051B3C;
        case 0x51B40U: goto L_051B40;
        case 0x51B42U: goto L_051B42;
        case 0x51B46U: goto L_051B46;
        case 0x51B48U: goto L_051B48;
        case 0x51B4CU: goto L_051B4C;
        case 0x51B50U: goto L_051B50;
        case 0x51B54U: goto L_051B54;
        case 0x51B56U: goto L_051B56;
        case 0x51B58U: goto L_051B58;
        case 0x51B5CU: goto L_051B5C;
        case 0x51B60U: goto L_051B60;
        case 0x51B64U: goto L_051B64;
        case 0x51B68U: goto L_051B68;
        case 0x51B6AU: goto L_051B6A;
        case 0x51B70U: goto L_051B70;
        case 0x51B72U: goto L_051B72;
        case 0x51B76U: goto L_051B76;
        case 0x51B7AU: goto L_051B7A;
        case 0x51B7EU: goto L_051B7E;
        case 0x51B80U: goto L_051B80;
        case 0x51B86U: goto L_051B86;
        case 0x51B8AU: goto L_051B8A;
        case 0x51B8CU: goto L_051B8C;
        case 0x51B92U: goto L_051B92;
        case 0x51B94U: goto L_051B94;
        case 0x51B9AU: goto L_051B9A;
        case 0x51B9CU: goto L_051B9C;
        case 0x51B9EU: goto L_051B9E;
        case 0x51BA0U: goto L_051BA0;
        case 0x51BA2U: goto L_051BA2;
        case 0x51BA6U: goto L_051BA6;
        case 0x51BAAU: goto L_051BAA;
        case 0x51BACU: goto L_051BAC;
        case 0x51BB0U: goto L_051BB0;
        case 0x51BB4U: goto L_051BB4;
        case 0x51BB6U: goto L_051BB6;
        case 0x51BBCU: goto L_051BBC;
        case 0x51BC0U: goto L_051BC0;
        case 0x51BC2U: goto L_051BC2;
        case 0x51BC4U: goto L_051BC4;
        case 0x51BC8U: goto L_051BC8;
        case 0x51BCCU: goto L_051BCC;
        case 0x51BD0U: goto L_051BD0;
        case 0x51BD2U: goto L_051BD2;
        case 0x51BD4U: goto L_051BD4;
        case 0x51BD8U: goto L_051BD8;
        case 0x51BDCU: goto L_051BDC;
        case 0x51BDEU: goto L_051BDE;
        case 0x51BE2U: goto L_051BE2;
        case 0x51BE6U: goto L_051BE6;
        case 0x51BEAU: goto L_051BEA;
        case 0x51BECU: goto L_051BEC;
        case 0x51BF0U: goto L_051BF0;
        case 0x51BF4U: goto L_051BF4;
        case 0x51BF8U: goto L_051BF8;
        case 0x51BFCU: goto L_051BFC;
        case 0x51C00U: goto L_051C00;
        case 0x51C02U: goto L_051C02;
        case 0x51C06U: goto L_051C06;
        case 0x51C0AU: goto L_051C0A;
        case 0x51C0EU: goto L_051C0E;
        case 0x51C10U: goto L_051C10;
        case 0x51C14U: goto L_051C14;
        case 0x51C18U: goto L_051C18;
        case 0x51C1CU: goto L_051C1C;
        case 0x51C1EU: goto L_051C1E;
        case 0x51C22U: goto L_051C22;
        case 0x51C24U: goto L_051C24;
        case 0x51C28U: goto L_051C28;
        case 0x51C2CU: goto L_051C2C;
        case 0x51C2EU: goto L_051C2E;
        case 0x51C32U: goto L_051C32;
        case 0x51C38U: goto L_051C38;
        case 0x51C3CU: goto L_051C3C;
        case 0x51C40U: goto L_051C40;
        case 0x51C42U: goto L_051C42;
        case 0x51C46U: goto L_051C46;
        case 0x51C48U: goto L_051C48;
        case 0x51C4CU: goto L_051C4C;
        case 0x51C50U: goto L_051C50;
        case 0x51C52U: goto L_051C52;
        case 0x51C56U: goto L_051C56;
        case 0x51C5AU: goto L_051C5A;
        case 0x51C5EU: goto L_051C5E;
        case 0x51C60U: goto L_051C60;
        case 0x51C64U: goto L_051C64;
        case 0x51C68U: goto L_051C68;
        case 0x52A44U: goto L_052A44;
        case 0x52A48U: goto L_052A48;
        case 0x52A4CU: goto L_052A4C;
        case 0x52A4EU: goto L_052A4E;
        case 0x52A54U: goto L_052A54;
        case 0x52A56U: goto L_052A56;
        case 0x52A5AU: goto L_052A5A;
        case 0x52A5CU: goto L_052A5C;
        case 0x52A60U: goto L_052A60;
        case 0x52A64U: goto L_052A64;
        case 0x52A66U: goto L_052A66;
        case 0x52A6CU: goto L_052A6C;
        case 0x52A6EU: goto L_052A6E;
        case 0x52A72U: goto L_052A72;
        case 0x52A74U: goto L_052A74;
        case 0x52A78U: goto L_052A78;
        case 0x52A7CU: goto L_052A7C;
        case 0x52A7EU: goto L_052A7E;
        case 0x52A84U: goto L_052A84;
        case 0x52A86U: goto L_052A86;
        case 0x52A8AU: goto L_052A8A;
        case 0x52A8CU: goto L_052A8C;
        case 0x52A90U: goto L_052A90;
        case 0x52A94U: goto L_052A94;
        case 0x52A96U: goto L_052A96;
        case 0x52A9CU: goto L_052A9C;
        case 0x52A9EU: goto L_052A9E;
        case 0x52AA2U: goto L_052AA2;
        case 0x52AA4U: goto L_052AA4;
        default: break; } }
    goto L_051918;
L_051912: ;
    ITR(0x51912U, 10);
    { /* 051912 051912 bra src=None dst=None cc=0 */
        goto L_052A44;
    }
L_051916: ;
    ITR(0x51916U, 16);
    { /* 051916 051916 rts src=None dst=None */
        RTS();
    }
L_051918: ;
    ITR(0x51918U, 8);
    { /* 051918 051918 lea.l src=EA(pcd r=0 d=0 v=51762) dst=EA(an r=3 d=0 v=0) */
        a3 = 0x51762U;
    }
L_05191C: ;
    ITR(0x5191CU, 12);
    { /* 05191C 05191c tst.b src=None dst=EA(d16 r=3 d=1580 v=0) */
        { uint32_t t = rd8((a3 + 0x62CU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051920: ;
    ITR(0x51920U, 10);
    { /* 051920 051920 bcc src=None dst=None cc=7 */
        if (COND_7) { BUDGET_CHECK(0x51912U); goto L_051912; }
    }
L_051922: ;
    ITR(0x51922U, 12);
    { /* 051922 051922 tst.b src=None dst=EA(d16 r=3 d=1583 v=0) */
        { uint32_t t = rd8((a3 + 0x62FU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051926: ;
    ITR(0x51926U, 8);
    { /* 051926 051926 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051936;
    }
L_051928: ;
    ITR(0x51928U, 16);
    { /* 051928 051928 subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=3 d=1582 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a3 + 0x62EU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_05192C: ;
    ITR(0x5192CU, 8);
    { /* 05192C 05192c bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051936;
    }
L_05192E: ;
    ITR(0x5192EU, 16);
    { /* 05192E 05192e move.b src=EA(imm r=0 d=0 v=6) dst=EA(d16 r=3 d=1582 v=0) */
        { uint32_t t1 = 0x6U;
        wr8((a3 + 0x62EU), t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051934: ;
    ITR(0x51934U, 10);
    { /* 051934 051934 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51916U); goto L_051916; }
    }
L_051936: ;
    ITR(0x51936U, 12);
    { /* 051936 051936 move.b src=EA(pcd r=0 d=0 v=51d86) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D86U);
        SETB(d0, t1);
        }
    }
L_05193A: ;
    ITR(0x5193AU, 16);
    { /* 05193A 05193a add.b src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=3 d=1574 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        uint32_t t4 = (a3 + 0x626U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_05193E: ;
    ITR(0x5193EU, 10);
    { /* 05193E 05193e bcc src=None dst=None cc=5 */
        if (COND_5) { BUDGET_CHECK(0x51912U); goto L_051912; }
    }
L_051940: ;
    ITR(0x51940U, 12);
    { /* 051940 051940 move.b src=EA(pcd r=0 d=0 v=51d89) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D89U);
        SETB(d0, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051944: ;
    ITR(0x51944U, 8);
    { /* 051944 051944 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051962;
    }
L_051946: ;
    ITR(0x51946U, 12);
    { /* 051946 051946 tst.w src=None dst=EA(d16 r=3 d=1570 v=0) */
        { uint32_t t = rd16((a3 + 0x622U));
        FLAGS_LOGIC(t, 0xFFFFU, 0x8000U);
        }
    }
L_05194A: ;
    ITR(0x5194AU, 8);
    { /* 05194A 05194a bcc src=None dst=None cc=7 */
        if (COND_7) { dwam_051CD8(); return; }
    }
L_05194E: ;
    ITR(0x5194EU, 16);
    { /* 05194E 05194e subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=3 d=1576 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a3 + 0x628U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051952: ;
    ITR(0x51952U, 8);
    { /* 051952 051952 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051962;
    }
L_051954: ;
    ITR(0x51954U, 16);
    { /* 051954 051954 subq.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=3 d=1570 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a3 + 0x622U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        wr16(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 1);
        }
    }
L_051958: ;
    ITR(0x51958U, 8);
    { /* 051958 051958 bcc src=None dst=None cc=7 */
        if (COND_7) { dwam_051CD8(); return; }
    }
L_05195C: ;
    ITR(0x5195CU, 20);
    { /* 05195C 05195c move.b src=EA(pcd r=0 d=0 v=51d89) dst=EA(d16 r=3 d=1576 v=0) */
        { uint32_t t1 = rd8(0x51D89U);
        wr8((a3 + 0x628U), t1);
        }
    }
L_051962: ;
    ITR(0x51962U, 16);
    { /* 051962 051962 movea.l src=EA(pcd r=0 d=0 v=51fa8) dst=EA(an r=0 d=0 v=0) */
        a0 = rd32(0x51FA8U);
    }
L_051966: ;
    ITR(0x51966U, 12);
    { /* 051966 051966 move.w src=EA(pcd r=0 d=0 v=51d98) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D98U);
        SETW(d0, t1);
        }
    }
L_05196A: ;
    ITR(0x5196AU, 12);
    { /* 05196A 05196a tst.w src=None dst=EA(d16 r=3 d=1588 v=0) */
        { uint32_t t = rd16((a3 + 0x634U));
        FLAGS_LOGIC(t, 0xFFFFU, 0x8000U);
        }
    }
L_05196E: ;
    ITR(0x5196EU, 8);
    { /* 05196E 05196e bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051988;
    }
L_051970: ;
    ITR(0x51970U, 18);
    { /* 051970 051970 move.w src=EA(imm r=0 d=0 v=c0c0) dst=EA(idx r=0 d=0 v=0) */
        { uint32_t t1 = 0xC0C0U;
        wr16((a0 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)), t1);
        }
    }
L_051976: ;
    ITR(0x51976U, 16);
    { /* 051976 051976 addq.w src=EA(imm r=0 d=0 v=2) dst=EA(d16 r=3 d=1590 v=0) */
        { uint32_t t1 = 0x2U;
        uint32_t t4 = (a3 + 0x636U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        wr16(t4, t3);
        }
    }
L_05197A: ;
    ITR(0x5197AU, 16);
    { /* 05197A 05197a cmpi.w src=EA(imm r=0 d=0 v=30) dst=EA(d16 r=3 d=1590 v=0) */
        { uint32_t t1 = 0x30U;
        uint32_t t4 = (a3 + 0x636U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051980: ;
    ITR(0x51980U, 8);
    { /* 051980 051980 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051986;
    }
L_051982: ;
    ITR(0x51982U, 16);
    { /* 051982 051982 not.w src=None dst=EA(d16 r=3 d=1588 v=0) */
        { uint32_t t3 = (a3 + 0x634U);
        uint32_t t1 = rd16(t3);
        uint32_t t2 = (~t1) & 0xFFFFU;
        wr16(t3, t2);
        }
    }
L_051986: ;
    ITR(0x51986U, 10);
    { /* 051986 051986 bra src=None dst=None cc=0 */
        goto L_05199E;
    }
L_051988: ;
    ITR(0x51988U, 18);
    { /* 051988 051988 move.w src=EA(imm r=0 d=0 v=3f3f) dst=EA(idx r=0 d=0 v=0) */
        { uint32_t t1 = 0x3F3FU;
        wr16((a0 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)), t1);
        }
    }
L_05198E: ;
    ITR(0x5198EU, 16);
    { /* 05198E 05198e subq.w src=EA(imm r=0 d=0 v=2) dst=EA(d16 r=3 d=1590 v=0) */
        { uint32_t t1 = 0x2U;
        uint32_t t4 = (a3 + 0x636U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        wr16(t4, t3);
        }
    }
L_051992: ;
    ITR(0x51992U, 16);
    { /* 051992 051992 cmpi.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=3 d=1590 v=0) */
        { uint32_t t1 = 0x20U;
        uint32_t t4 = (a3 + 0x636U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051998: ;
    ITR(0x51998U, 8);
    { /* 051998 051998 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_05199E;
    }
L_05199A: ;
    ITR(0x5199AU, 16);
    { /* 05199A 05199a not.w src=None dst=EA(d16 r=3 d=1588 v=0) */
        { uint32_t t3 = (a3 + 0x634U);
        uint32_t t1 = rd16(t3);
        uint32_t t2 = (~t1) & 0xFFFFU;
        wr16(t3, t2);
        }
    }
L_05199E: ;
    ITR(0x5199EU, 4);
    { /* 05199E 05199e moveq.l src=EA(imm r=0 d=0 v=0) dst=EA(dn r=7 d=0 v=0) */
        d7 = 0x0U;
    }
L_0519A0: ;
    ITR(0x519A0U, 8);
    { /* 0519A0 0519a0 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_0519A4: ;
    ITR(0x519A4U, 4);
    { /* 0519A4 0519a4 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519A6: ;
    ITR(0x519A6U, 74);
    { /* 0519A6 0519a6 mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_0519AA: ;
    ITR(0x519AAU, 8);
    { /* 0519AA 0519aa adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=4 d=0 v=0) */
        a4 += SX16((d0 & 0xFFFF));
    }
L_0519AC: ;
    ITR(0x519ACU, 13);
    { /* 0519AC 0519ac scc.b src=None dst=EA(d16 r=4 d=10 v=0) cc=0 */
        { uint32_t t2 = (a4 + 0xAU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519B0: ;
    ITR(0x519B0U, 12);
    { /* 0519B0 0519b0 lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=6 d=0 v=0) */
        a6 = 0xDFF000U;
    }
L_0519B6: ;
    ITR(0x519B6U, 8);
    { /* 0519B6 0519b6 move.w src=EA(imm r=0 d=0 v=30) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x30U;
        SETW(d0, t1);
        }
    }
L_0519BA: ;
    ITR(0x519BAU, 70);
    { /* 0519BA 0519ba mulu.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d7 & 0xFFFF);
        d0 = t1;
        }
    }
L_0519BC: ;
    ITR(0x519BCU, 8);
    { /* 0519BC 0519bc lea.l src=EA(pcd r=0 d=0 v=51d9a) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x51D9AU;
    }
L_0519C0: ;
    ITR(0x519C0U, 8);
    { /* 0519C0 0519c0 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 += SX16((d0 & 0xFFFF));
    }
L_0519C2: ;
    ITR(0x519C2U, 4);
    { /* 0519C2 0519c2 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519C4: ;
    ITR(0x519C4U, 14);
    { /* 0519C4 0519c4 lsl.w src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 1, (d0 & 0xFFFF), 4, 16);
        SETW(d0, t1);
        }
    }
L_0519C6: ;
    ITR(0x519C6U, 8);
    { /* 0519C6 0519c6 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=6 d=0 v=0) */
        a6 += SX16((d0 & 0xFFFF));
    }
L_0519C8: ;
    ITR(0x519C8U, 16);
    { /* 0519C8 0519c8 movea.l src=EA(d16 r=0 d=4 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x4U));
    }
L_0519CC: ;
    ITR(0x519CCU, 16);
    { /* 0519CC 0519cc movea.l src=EA(d16 r=0 d=24 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 = rd32((a0 + 0x18U));
    }
L_0519D0: ;
    ITR(0x519D0U, 12);
    { /* 0519D0 0519d0 tst.b src=None dst=EA(d16 r=0 d=22 v=0) */
        { uint32_t t = rd8((a0 + 0x16U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519D4: ;
    ITR(0x519D4U, 8);
    { /* 0519D4 0519d4 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_0519D6: ;
    ITR(0x519D6U, 13);
    { /* 0519D6 0519d6 scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=0 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519DA: ;
    ITR(0x519DAU, 16);
    { /* 0519DA 0519da move.l src=EA(d16 r=5 d=4 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x4U));
        d0 = t1;
        FLAGS_LOGIC(t1, 0xFFFFFFFFU, 0x80000000U);
        }
    }
L_0519DE: ;
    ITR(0x519DEU, 8);
    { /* 0519DE 0519de bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051A06;
    }
L_0519E0: ;
    ITR(0x519E0U, 16);
    { /* 0519E0 0519e0 movea.l src=EA(d16 r=5 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a5 + 0x0U));
    }
L_0519E4: ;
    ITR(0x519E4U, 6);
    { /* 0519E4 0519e4 adda.l src=EA(dn r=0 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += d0;
    }
L_0519E6: ;
    ITR(0x519E6U, 10);
    { /* 0519E6 0519e6 lsr.l src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, 1, 32);
        d0 = t1;
        }
    }
L_0519E8: ;
    ITR(0x519E8U, 12);
    { /* 0519E8 0519e8 move.w src=EA(d16 r=5 d=8 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        SETW(d1, t1);
        }
    }
L_0519EC: ;
    ITR(0x519ECU, 4);
    { /* 0519EC 0519ec sub.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_0519EE: ;
    ITR(0x519EEU, 20);
    { /* 0519EE 0519ee move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = a2;
        wr32((a4 + 0x0U), t1);
        }
    }
L_0519F2: ;
    ITR(0x519F2U, 12);
    { /* 0519F2 0519f2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x4U), t1);
        }
    }
L_0519F6: ;
    ITR(0x519F6U, 12);
    { /* 0519F6 0519f6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519FA: ;
    ITR(0x519FAU, 8);
    { /* 0519FA 0519fa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A04;
    }
L_0519FC: ;
    ITR(0x519FCU, 20);
    { /* 0519FC 0519fc move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = a2;
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A00: ;
    ITR(0x51A00U, 12);
    { /* 051A00 051a00 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A04: ;
    ITR(0x51A04U, 10);
    { /* 051A04 051a04 bra src=None dst=None cc=0 */
        goto L_051A24;
    }
L_051A06: ;
    ITR(0x51A06U, 32);
    { /* 051A06 051a06 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A0C: ;
    ITR(0x51A0CU, 16);
    { /* 051A0C 051a0c move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A12: ;
    ITR(0x51A12U, 12);
    { /* 051A12 051a12 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A16: ;
    ITR(0x51A16U, 8);
    { /* 051A16 051a16 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_051A18: ;
    ITR(0x51A18U, 32);
    { /* 051A18 051a18 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A1E: ;
    ITR(0x51A1EU, 16);
    { /* 051A1E 051a1e move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A24: ;
    ITR(0x51A24U, 16);
    { /* 051A24 051a24 subq.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        wr16(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A28: ;
    ITR(0x51A28U, 8);
    { /* 051A28 051a28 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4E;
    }
L_051A2A: ;
    ITR(0x51A2AU, 16);
    { /* 051A2A 051a2a cmpi.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A30: ;
    ITR(0x51A30U, 8);
    { /* 051A30 051a30 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AF4;
    }
L_051A34: ;
    ITR(0x51A34U, 12);
    { /* 051A34 051a34 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A38: ;
    ITR(0x51A38U, 8);
    { /* 051A38 051a38 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A4A;
    }
L_051A3A: ;
    ITR(0x51A3AU, 12);
    { /* 051A3A 051a3a cmpi.b src=EA(imm r=0 d=0 v=83) dst=EA(ind r=1 d=0 v=0) */
        { uint32_t t1 = 0x83U;
        uint32_t t4 = a1;
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051A3E: ;
    ITR(0x51A3EU, 8);
    { /* 051A3E 051a3e bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4A;
    }
L_051A40: ;
    ITR(0x51A40U, 4);
    { /* 051A40 051a40 clr.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, 0);
    }
L_051A42: ;
    ITR(0x51A42U, 8);
    { /* 051A42 051a42 bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051A44: ;
    ITR(0x51A44U, 16);
    { /* 051A44 051a44 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051A4A: ;
    ITR(0x51A4AU, 10);
    { /* 051A4A 051a4a bra src=None dst=None cc=0 */
        goto L_051AE6;
    }
L_051A4E: ;
    ITR(0x51A4EU, 16);
    { /* 051A4E 051a4e clr.b src=None dst=EA(d16 r=0 d=0 v=0) */
        wr8((a0 + 0x0U), 0);
    }
L_051A52: ;
    ITR(0x51A52U, 4);
    { /* 051A52 051a52 moveq.l src=EA(imm r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        d0 = 0x0U;
    }
L_051A54: ;
    ITR(0x51A54U, 8);
    { /* 051A54 051a54 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d0, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051A56: ;
    ITR(0x51A56U, 8);
    { /* 051A56 051a56 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BE6;
    }
L_051A5A: ;
    ITR(0x51A5AU, 12);
    { /* 051A5A 051a5a move.b src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=2 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        wr8((a0 + 0x2U), t1);
        }
    }
L_051A5E: ;
    ITR(0x51A5EU, 12);
    { /* 051A5E 051a5e add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A62: ;
    ITR(0x51A62U, 12);
    { /* 051A62 051a62 add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A66: ;
    ITR(0x51A66U, 16);
    { /* 051A66 051a66 movea.l src=EA(d16 r=0 d=34 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x22U));
    }
L_051A6A: ;
    ITR(0x51A6AU, 8);
    { /* 051A6A 051a6a move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051A6C: ;
    ITR(0x51A6CU, 20);
    { /* 051A6C 051a6c move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051A70: ;
    ITR(0x51A70U, 20);
    { /* 051A70 051a70 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051A76: ;
    ITR(0x51A76U, 4);
    { /* 051A76 051a76 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051A78: ;
    ITR(0x51A78U, 32);
    { /* 051A78 051a78 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A7E: ;
    ITR(0x51A7EU, 20);
    { /* 051A7E 051a7e move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A84: ;
    ITR(0x51A84U, 12);
    { /* 051A84 051a84 move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051A88: ;
    ITR(0x51A88U, 70);
    { /* 051A88 051a88 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051A8A: ;
    ITR(0x51A8AU, 18);
    { /* 051A8A 051a8a lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051A8C: ;
    ITR(0x51A8CU, 12);
    { /* 051A8C 051a8c move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051A90: ;
    ITR(0x51A90U, 12);
    { /* 051A90 051a90 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A94: ;
    ITR(0x51A94U, 8);
    { /* 051A94 051a94 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AA6;
    }
L_051A96: ;
    ITR(0x51A96U, 32);
    { /* 051A96 051a96 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A9C: ;
    ITR(0x51A9CU, 20);
    { /* 051A9C 051a9c move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051AA2: ;
    ITR(0x51AA2U, 12);
    { /* 051AA2 051aa2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051AA6: ;
    ITR(0x51AA6U, 8);
    { /* 051AA6 051aa6 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AAA: ;
    ITR(0x51AAAU, 8);
    { /* 051AAA 051aaa lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051AAE: ;
    ITR(0x51AAEU, 12);
    { /* 051AAE 051aae move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051AB2: ;
    ITR(0x51AB2U, 4);
    { /* 051AB2 051ab2 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051AB4: ;
    ITR(0x51AB4U, 4);
    { /* 051AB4 051ab4 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AB6: ;
    ITR(0x51AB6U, 14);
    { /* 051AB6 051ab6 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051ABA: ;
    ITR(0x51ABAU, 70);
    { /* 051ABA 051aba mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051ABC: ;
    ITR(0x51ABCU, 16);
    { /* 051ABC 051abc lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051ABE: ;
    ITR(0x51ABEU, 12);
    { /* 051ABE 051abe move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051AC2: ;
    ITR(0x51AC2U, 12);
    { /* 051AC2 051ac2 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051AC6: ;
    ITR(0x51AC6U, 8);
    { /* 051AC6 051ac6 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051ACC;
    }
L_051AC8: ;
    ITR(0x51AC8U, 12);
    { /* 051AC8 051ac8 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051ACC: ;
    ITR(0x51ACCU, 13);
    { /* 051ACC 051acc scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=1 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051AD0: ;
    ITR(0x51AD0U, 20);
    { /* 051AD0 051ad0 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=4 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x4U), t1);
        }
    }
L_051AD4: ;
    ITR(0x51AD4U, 20);
    { /* 051AD4 051ad4 move.w src=EA(d16 r=0 d=28 v=0) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = rd16((a0 + 0x1CU));
        wr16((a0 + 0x1EU), t1);
        }
    }
L_051ADA: ;
    ITR(0x51ADAU, 8);
    { /* 051ADA 051ada move.w src=EA(imm r=0 d=0 v=8200) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x8200U;
        SETW(d1, t1);
        }
    }
L_051ADE: ;
    ITR(0x51ADEU, 8);
    { /* 051ADE 051ade bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051AE0: ;
    ITR(0x51AE0U, 16);
    { /* 051AE0 051ae0 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051AE6: ;
    ITR(0x51AE6U, 4);
    { /* 051AE6 051ae6 addq.w src=EA(imm r=0 d=0 v=1) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d7, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFFFU, 0x8000U, 1);
        }
    }
L_051AE8: ;
    ITR(0x51AE8U, 8);
    { /* 051AE8 051ae8 cmp.w src=EA(imm r=0 d=0 v=4) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x4U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051AEC: ;
    ITR(0x51AECU, 10);
    { /* 051AEC 051aec bcc src=None dst=None cc=6 */
        if (COND_6) { BUDGET_CHECK(0x519A0U); goto L_0519A0; }
    }
L_051AF0: ;
    ITR(0x51AF0U, 10);
    { /* 051AF0 051af0 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51912U); goto L_051912; }
    }
L_051AF4: ;
    ITR(0x51AF4U, 12);
    { /* 051AF4 051af4 move.b src=EA(d16 r=0 d=2 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2U));
        SETB(d0, t1);
        }
    }
L_051AF8: ;
    ITR(0x51AF8U, 12);
    { /* 051AF8 051af8 add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051AFC: ;
    ITR(0x51AFCU, 12);
    { /* 051AFC 051afc add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B00: ;
    ITR(0x51B00U, 16);
    { /* 051B00 051b00 movea.l src=EA(d16 r=0 d=16 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x10U));
    }
L_051B04: ;
    ITR(0x51B04U, 8);
    { /* 051B04 051b04 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051B06: ;
    ITR(0x51B06U, 12);
    { /* 051B06 051b06 bclr.l src=EA(imm r=0 d=0 v=7) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (0x7U) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 & ~(1u << t1);
        }
    }
L_051B0A: ;
    ITR(0x51B0AU, 8);
    { /* 051B0A 051b0a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B10;
    }
L_051B0C: ;
    ITR(0x51B0CU, 16);
    { /* 051B0C 051b0c movea.l src=EA(d16 r=0 d=12 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0xCU));
    }
L_051B10: ;
    ITR(0x51B10U, 20);
    { /* 051B10 051b10 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051B14: ;
    ITR(0x51B14U, 4);
    { /* 051B14 051b14 add.b src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B16: ;
    ITR(0x51B16U, 8);
    { /* 051B16 051b16 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B1A: ;
    ITR(0x51B1AU, 8);
    { /* 051B1A 051b1a lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051B1E: ;
    ITR(0x51B1EU, 12);
    { /* 051B1E 051b1e move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051B22: ;
    ITR(0x51B22U, 4);
    { /* 051B22 051b22 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051B24: ;
    ITR(0x51B24U, 4);
    { /* 051B24 051b24 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B26: ;
    ITR(0x51B26U, 14);
    { /* 051B26 051b26 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051B2A: ;
    ITR(0x51B2AU, 70);
    { /* 051B2A 051b2a mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051B2C: ;
    ITR(0x51B2CU, 16);
    { /* 051B2C 051b2c lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051B2E: ;
    ITR(0x51B2EU, 16);
    { /* 051B2E 051b2e btst.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=0 v=0) */
        { uint32_t t1 = (0x1U) & 7;
        uint32_t t3 = (a0 + 0x0U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B34: ;
    ITR(0x51B34U, 8);
    { /* 051B34 051b34 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B50;
    }
L_051B36: ;
    ITR(0x51B36U, 12);
    { /* 051B36 051b36 tst.b src=None dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t = rd8((a0 + 0x15U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B3A: ;
    ITR(0x51B3AU, 8);
    { /* 051B3A 051b3a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B42;
    }
L_051B3C: ;
    ITR(0x51B3CU, 16);
    { /* 051B3C 051b3c subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x15U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        }
    }
L_051B40: ;
    ITR(0x51B40U, 10);
    { /* 051B40 051b40 bra src=None dst=None cc=0 */
        goto L_051B50;
    }
L_051B42: ;
    ITR(0x51B42U, 12);
    { /* 051B42 051b42 move.b src=EA(d16 r=0 d=20 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x14U));
        SETB(d1, t1);
        }
    }
L_051B46: ;
    ITR(0x51B46U, 4);
    { /* 051B46 051b46 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B48: ;
    ITR(0x51B48U, 16);
    { /* 051B48 051b48 add.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=32 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t4 = (a0 + 0x20U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        wr16(t4, t3);
        }
    }
L_051B4C: ;
    ITR(0x51B4CU, 12);
    { /* 051B4C 051b4c sub.w src=EA(d16 r=0 d=32 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a0 + 0x20U));
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B50: ;
    ITR(0x51B50U, 12);
    { /* 051B50 051b50 tst.b src=None dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t = rd8((a0 + 0x1U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B54: ;
    ITR(0x51B54U, 8);
    { /* 051B54 051b54 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA2;
    }
L_051B56: ;
    ITR(0x51B56U, 8);
    { /* 051B56 051b56 bcc src=None dst=None cc=10 */
        if (COND_10) goto L_051B72;
    }
L_051B58: ;
    ITR(0x51B58U, 12);
    { /* 051B58 051b58 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B5C: ;
    ITR(0x51B5CU, 12);
    { /* 051B5C 051b5c add.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B60: ;
    ITR(0x51B60U, 12);
    { /* 051B60 051b60 move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        }
    }
L_051B64: ;
    ITR(0x51B64U, 12);
    { /* 051B64 051b64 cmp.b src=EA(d16 r=0 d=46 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2EU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051B68: ;
    ITR(0x51B68U, 8);
    { /* 051B68 051b68 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B6A: ;
    ITR(0x51B6AU, 20);
    { /* 051B6A 051b6a bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B70: ;
    ITR(0x51B70U, 10);
    { /* 051B70 051b70 bra src=None dst=None cc=0 */
        goto L_051B86;
    }
L_051B72: ;
    ITR(0x51B72U, 12);
    { /* 051B72 051b72 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B76: ;
    ITR(0x51B76U, 12);
    { /* 051B76 051b76 sub.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B7A: ;
    ITR(0x51B7AU, 12);
    { /* 051B7A 051b7a move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051B7E: ;
    ITR(0x51B7EU, 8);
    { /* 051B7E 051b7e bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B80: ;
    ITR(0x51B80U, 20);
    { /* 051B80 051b80 bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B86: ;
    ITR(0x51B86U, 12);
    { /* 051B86 051b86 tst.b src=None dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t = rd8((a0 + 0x2DU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B8A: ;
    ITR(0x51B8AU, 8);
    { /* 051B8A 051b8a bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B92;
    }
L_051B8C: ;
    ITR(0x51B8CU, 20);
    { /* 051B8C 051b8c bchg.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B92: ;
    ITR(0x51B92U, 4);
    { /* 051B92 051b92 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B94: ;
    ITR(0x51B94U, 16);
    { /* 051B94 051b94 btst.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B9A: ;
    ITR(0x51B9AU, 8);
    { /* 051B9A 051b9a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA0;
    }
L_051B9C: ;
    ITR(0x51B9CU, 4);
    { /* 051B9C 051b9c add.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B9E: ;
    ITR(0x51B9EU, 10);
    { /* 051B9E 051b9e bra src=None dst=None cc=0 */
        goto L_051BA2;
    }
L_051BA0: ;
    ITR(0x51BA0U, 4);
    { /* 051BA0 051ba0 sub.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051BA2: ;
    ITR(0x51BA2U, 12);
    { /* 051BA2 051ba2 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051BA6: ;
    ITR(0x51BA6U, 12);
    { /* 051BA6 051ba6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BAA: ;
    ITR(0x51BAAU, 8);
    { /* 051BAA 051baa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BB0;
    }
L_051BAC: ;
    ITR(0x51BACU, 12);
    { /* 051BAC 051bac move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051BB0: ;
    ITR(0x51BB0U, 16);
    { /* 051BB0 051bb0 subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x2BU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BB4: ;
    ITR(0x51BB4U, 8);
    { /* 051BB4 051bb4 bcc src=None dst=None cc=4 */
        if (COND_4) goto L_051BE2;
    }
L_051BB6: ;
    ITR(0x51BB6U, 20);
    { /* 051BB6 051bb6 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051BBC: ;
    ITR(0x51BBCU, 16);
    { /* 051BBC 051bbc movea.l src=EA(d16 r=0 d=38 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x26U));
    }
L_051BC0: ;
    ITR(0x51BC0U, 8);
    { /* 051BC0 051bc0 move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051BC2: ;
    ITR(0x51BC2U, 8);
    { /* 051BC2 051bc2 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BC8;
    }
L_051BC4: ;
    ITR(0x51BC4U, 20);
    { /* 051BC4 051bc4 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051BC8: ;
    ITR(0x51BC8U, 8);
    { /* 051BC8 051bc8 andi.w src=EA(imm r=0 d=0 v=7f) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x7FU;
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_051BCC: ;
    ITR(0x51BCCU, 12);
    { /* 051BCC 051bcc move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051BD0: ;
    ITR(0x51BD0U, 70);
    { /* 051BD0 051bd0 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051BD2: ;
    ITR(0x51BD2U, 18);
    { /* 051BD2 051bd2 lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051BD4: ;
    ITR(0x51BD4U, 12);
    { /* 051BD4 051bd4 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051BD8: ;
    ITR(0x51BD8U, 12);
    { /* 051BD8 051bd8 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BDC: ;
    ITR(0x51BDCU, 8);
    { /* 051BDC 051bdc bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BE2;
    }
L_051BDE: ;
    ITR(0x51BDEU, 12);
    { /* 051BDE 051bde move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051BE2: ;
    ITR(0x51BE2U, 10);
    { /* 051BE2 051be2 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51AE6U); goto L_051AE6; }
    }
L_051BE6: ;
    ITR(0x51BE6U, 8);
    { /* 051BE6 051be6 cmp.b src=EA(imm r=0 d=0 v=e0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xE0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BEA: ;
    ITR(0x51BEAU, 8);
    { /* 051BEA 051bea bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051BFC;
    }
L_051BEC: ;
    ITR(0x51BECU, 8);
    { /* 051BEC 051bec subi.b src=EA(imm r=0 d=0 v=df) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xDFU;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051BF0: ;
    ITR(0x51BF0U, 78);
    { /* 051BF0 051bf0 mulu.w src=EA(pcd r=0 d=0 v=51d82) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * rd16(0x51D82U);
        d0 = t1;
        }
    }
L_051BF4: ;
    ITR(0x51BF4U, 12);
    { /* 051BF4 051bf4 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=28 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a0 + 0x1CU), t1);
        }
    }
L_051BF8: ;
    ITR(0x51BF8U, 10);
    { /* 051BF8 051bf8 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051BFC: ;
    ITR(0x51BFCU, 8);
    { /* 051BFC 051bfc cmp.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C00: ;
    ITR(0x51C00U, 8);
    { /* 051C00 051c00 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C18;
    }
L_051C02: ;
    ITR(0x51C02U, 8);
    { /* 051C02 051c02 subi.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C06: ;
    ITR(0x51C06U, 8);
    { /* 051C06 051c06 lea.l src=EA(pcd r=0 d=0 v=51f3c) dst=EA(an r=5 d=0 v=0) */
        a5 = 0x51F3CU;
    }
L_051C0A: ;
    ITR(0x51C0AU, 74);
    { /* 051C0A 051c0a mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_051C0E: ;
    ITR(0x51C0EU, 8);
    { /* 051C0E 051c0e adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 += SX16((d0 & 0xFFFF));
    }
L_051C10: ;
    ITR(0x51C10U, 20);
    { /* 051C10 051c10 move.l src=EA(an r=5 d=0 v=0) dst=EA(d16 r=0 d=24 v=0) */
        { uint32_t t1 = a5;
        wr32((a0 + 0x18U), t1);
        }
    }
L_051C14: ;
    ITR(0x51C14U, 10);
    { /* 051C14 051c14 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C18: ;
    ITR(0x51C18U, 8);
    { /* 051C18 051c18 cmp.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C1C: ;
    ITR(0x51C1CU, 8);
    { /* 051C1C 051c1c bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C3C;
    }
L_051C1E: ;
    ITR(0x51C1EU, 8);
    { /* 051C1E 051c1e subi.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C22: ;
    ITR(0x51C22U, 4);
    { /* 051C22 051c22 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C24: ;
    ITR(0x51C24U, 8);
    { /* 051C24 051c24 lea.l src=EA(pcd r=0 d=0 v=52f1e) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x52F1EU;
    }
L_051C28: ;
    ITR(0x51C28U, 14);
    { /* 051C28 051c28 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C2C: ;
    ITR(0x51C2CU, 6);
    { /* 051C2C 051c2c adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C2E: ;
    ITR(0x51C2EU, 20);
    { /* 051C2E 051c2e move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=34 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x22U), t1);
        }
    }
L_051C32: ;
    ITR(0x51C32U, 20);
    { /* 051C32 051c32 move.b src=EA(d16 r=2 d=-1 v=0) dst=EA(d16 r=0 d=42 v=0) */
        { uint32_t t1 = rd8((a2 + 0xFFFFFFFFU));
        wr8((a0 + 0x2AU), t1);
        }
    }
L_051C38: ;
    ITR(0x51C38U, 10);
    { /* 051C38 051c38 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C3C: ;
    ITR(0x51C3CU, 8);
    { /* 051C3C 051c3c cmp.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C40: ;
    ITR(0x51C40U, 8);
    { /* 051C40 051c40 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C5E;
    }
L_051C42: ;
    ITR(0x51C42U, 8);
    { /* 051C42 051c42 subi.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C46: ;
    ITR(0x51C46U, 4);
    { /* 051C46 051c46 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C48: ;
    ITR(0x51C48U, 8);
    { /* 051C48 051c48 lea.l src=EA(pcd r=0 d=0 v=51eea) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51EEAU;
    }
L_051C4C: ;
    ITR(0x51C4CU, 14);
    { /* 051C4C 051c4c movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C50: ;
    ITR(0x51C50U, 6);
    { /* 051C50 051c50 adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C52: ;
    ITR(0x51C52U, 20);
    { /* 051C52 051c52 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=12 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0xCU), t1);
        }
    }
L_051C56: ;
    ITR(0x51C56U, 20);
    { /* 051C56 051c56 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051C5A: ;
    ITR(0x51C5AU, 10);
    { /* 051C5A 051c5a bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C5E: ;
    ITR(0x51C5EU, 4);
    { /* 051C5E 051c5e add.b src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_051C60: ;
    ITR(0x51C60U, 8);
    { /* 051C60 051c60 lea.l src=EA(pcd r=0 d=0 v=51d6a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51D6AU;
    }
L_051C64: ;
    ITR(0x51C64U, 14);
    { /* 051C64 051c64 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C68: ;
    ITR(0x51C68U, 14);
    { /* 051C68 051c68 jmp src=EA(idx r=3 d=0 v=0) dst=None */
        { call_dynamic((a3 + 0x0U + ((uint32_t)(int32_t)(int16_t)a2))); return; }
    }
L_052A44: ;
    ITR(0x52A44U, 8);
    { /* 052A44 052a44 lea.l src=EA(pcd r=0 d=0 v=52b9c) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52B9CU;
    }
L_052A48: ;
    ITR(0x52A48U, 12);
    { /* 052A48 052a48 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A4C: ;
    ITR(0x52A4CU, 8);
    { /* 052A4C 052a4c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A5C;
    }
L_052A4E: ;
    ITR(0x52A4EU, 12);
    { /* 052A4E 052a4e lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF000U;
    }
L_052A54: ;
    ITR(0x52A54U, 4);
    { /* 052A54 052a54 moveq.l src=EA(imm r=0 d=0 v=1) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x1U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A56: ;
    ITR(0x52A56U, 8);
    { /* 052A56 052a56 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_052A5A: ;
    ITR(0x52A5AU, 18);
    { /* 052A5A 052a5a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A5CU);
    }
L_052A5C: ;
    ITR(0x52A5CU, 8);
    { /* 052A5C 052a5c lea.l src=EA(pcd r=0 d=0 v=52bc0) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BC0U;
    }
L_052A60: ;
    ITR(0x52A60U, 12);
    { /* 052A60 052a60 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A64: ;
    ITR(0x52A64U, 8);
    { /* 052A64 052a64 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A74;
    }
L_052A66: ;
    ITR(0x52A66U, 12);
    { /* 052A66 052a66 lea.l src=EA(absl r=0 d=0 v=dff010) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF010U;
    }
L_052A6C: ;
    ITR(0x52A6CU, 4);
    { /* 052A6C 052a6c moveq.l src=EA(imm r=0 d=0 v=2) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x2U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A6E: ;
    ITR(0x52A6EU, 8);
    { /* 052A6E 052a6e lea.l src=EA(pcd r=0 d=0 v=52c3a) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C3AU;
    }
L_052A72: ;
    ITR(0x52A72U, 18);
    { /* 052A72 052a72 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A74U);
    }
L_052A74: ;
    ITR(0x52A74U, 8);
    { /* 052A74 052a74 lea.l src=EA(pcd r=0 d=0 v=52be4) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BE4U;
    }
L_052A78: ;
    ITR(0x52A78U, 12);
    { /* 052A78 052a78 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A7C: ;
    ITR(0x52A7CU, 8);
    { /* 052A7C 052a7c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A8C;
    }
L_052A7E: ;
    ITR(0x52A7EU, 12);
    { /* 052A7E 052a7e lea.l src=EA(absl r=0 d=0 v=dff020) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF020U;
    }
L_052A84: ;
    ITR(0x52A84U, 4);
    { /* 052A84 052a84 moveq.l src=EA(imm r=0 d=0 v=4) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x4U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A86: ;
    ITR(0x52A86U, 8);
    { /* 052A86 052a86 lea.l src=EA(pcd r=0 d=0 v=52c46) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C46U;
    }
L_052A8A: ;
    ITR(0x52A8AU, 18);
    { /* 052A8A 052a8a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A8CU);
    }
L_052A8C: ;
    ITR(0x52A8CU, 8);
    { /* 052A8C 052a8c lea.l src=EA(pcd r=0 d=0 v=52c08) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52C08U;
    }
L_052A90: ;
    ITR(0x52A90U, 12);
    { /* 052A90 052a90 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A94: ;
    ITR(0x52A94U, 8);
    { /* 052A94 052a94 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052AA4;
    }
L_052A96: ;
    ITR(0x52A96U, 12);
    { /* 052A96 052a96 lea.l src=EA(absl r=0 d=0 v=dff030) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF030U;
    }
L_052A9C: ;
    ITR(0x52A9CU, 4);
    { /* 052A9C 052a9c moveq.l src=EA(imm r=0 d=0 v=8) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x8U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A9E: ;
    ITR(0x52A9EU, 8);
    { /* 052A9E 052a9e lea.l src=EA(pcd r=0 d=0 v=52c52) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C52U;
    }
L_052AA2: ;
    ITR(0x52AA2U, 18);
    { /* 052AA2 052aa2 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52AA4U);
    }
L_052AA4: ;
    ITR(0x52AA4U, 16);
    { /* 052AA4 052aa4 rts src=None dst=None */
        RTS();
    }
}

void dwam_051C6C(void)
{
    FN_ENTER(0x51C6CU);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51912U: goto L_051912;
        case 0x519A0U: goto L_0519A0;
        case 0x519A4U: goto L_0519A4;
        case 0x519A6U: goto L_0519A6;
        case 0x519AAU: goto L_0519AA;
        case 0x519ACU: goto L_0519AC;
        case 0x519B0U: goto L_0519B0;
        case 0x519B6U: goto L_0519B6;
        case 0x519BAU: goto L_0519BA;
        case 0x519BCU: goto L_0519BC;
        case 0x519C0U: goto L_0519C0;
        case 0x519C2U: goto L_0519C2;
        case 0x519C4U: goto L_0519C4;
        case 0x519C6U: goto L_0519C6;
        case 0x519C8U: goto L_0519C8;
        case 0x519CCU: goto L_0519CC;
        case 0x519D0U: goto L_0519D0;
        case 0x519D4U: goto L_0519D4;
        case 0x519D6U: goto L_0519D6;
        case 0x519DAU: goto L_0519DA;
        case 0x519DEU: goto L_0519DE;
        case 0x519E0U: goto L_0519E0;
        case 0x519E4U: goto L_0519E4;
        case 0x519E6U: goto L_0519E6;
        case 0x519E8U: goto L_0519E8;
        case 0x519ECU: goto L_0519EC;
        case 0x519EEU: goto L_0519EE;
        case 0x519F2U: goto L_0519F2;
        case 0x519F6U: goto L_0519F6;
        case 0x519FAU: goto L_0519FA;
        case 0x519FCU: goto L_0519FC;
        case 0x51A00U: goto L_051A00;
        case 0x51A04U: goto L_051A04;
        case 0x51A06U: goto L_051A06;
        case 0x51A0CU: goto L_051A0C;
        case 0x51A12U: goto L_051A12;
        case 0x51A16U: goto L_051A16;
        case 0x51A18U: goto L_051A18;
        case 0x51A1EU: goto L_051A1E;
        case 0x51A24U: goto L_051A24;
        case 0x51A28U: goto L_051A28;
        case 0x51A2AU: goto L_051A2A;
        case 0x51A30U: goto L_051A30;
        case 0x51A34U: goto L_051A34;
        case 0x51A38U: goto L_051A38;
        case 0x51A3AU: goto L_051A3A;
        case 0x51A3EU: goto L_051A3E;
        case 0x51A40U: goto L_051A40;
        case 0x51A42U: goto L_051A42;
        case 0x51A44U: goto L_051A44;
        case 0x51A4AU: goto L_051A4A;
        case 0x51A4EU: goto L_051A4E;
        case 0x51A52U: goto L_051A52;
        case 0x51A54U: goto L_051A54;
        case 0x51A56U: goto L_051A56;
        case 0x51A5AU: goto L_051A5A;
        case 0x51A5EU: goto L_051A5E;
        case 0x51A62U: goto L_051A62;
        case 0x51A66U: goto L_051A66;
        case 0x51A6AU: goto L_051A6A;
        case 0x51A6CU: goto L_051A6C;
        case 0x51A70U: goto L_051A70;
        case 0x51A76U: goto L_051A76;
        case 0x51A78U: goto L_051A78;
        case 0x51A7EU: goto L_051A7E;
        case 0x51A84U: goto L_051A84;
        case 0x51A88U: goto L_051A88;
        case 0x51A8AU: goto L_051A8A;
        case 0x51A8CU: goto L_051A8C;
        case 0x51A90U: goto L_051A90;
        case 0x51A94U: goto L_051A94;
        case 0x51A96U: goto L_051A96;
        case 0x51A9CU: goto L_051A9C;
        case 0x51AA2U: goto L_051AA2;
        case 0x51AA6U: goto L_051AA6;
        case 0x51AAAU: goto L_051AAA;
        case 0x51AAEU: goto L_051AAE;
        case 0x51AB2U: goto L_051AB2;
        case 0x51AB4U: goto L_051AB4;
        case 0x51AB6U: goto L_051AB6;
        case 0x51ABAU: goto L_051ABA;
        case 0x51ABCU: goto L_051ABC;
        case 0x51ABEU: goto L_051ABE;
        case 0x51AC2U: goto L_051AC2;
        case 0x51AC6U: goto L_051AC6;
        case 0x51AC8U: goto L_051AC8;
        case 0x51ACCU: goto L_051ACC;
        case 0x51AD0U: goto L_051AD0;
        case 0x51AD4U: goto L_051AD4;
        case 0x51ADAU: goto L_051ADA;
        case 0x51ADEU: goto L_051ADE;
        case 0x51AE0U: goto L_051AE0;
        case 0x51AE6U: goto L_051AE6;
        case 0x51AE8U: goto L_051AE8;
        case 0x51AECU: goto L_051AEC;
        case 0x51AF0U: goto L_051AF0;
        case 0x51AF4U: goto L_051AF4;
        case 0x51AF8U: goto L_051AF8;
        case 0x51AFCU: goto L_051AFC;
        case 0x51B00U: goto L_051B00;
        case 0x51B04U: goto L_051B04;
        case 0x51B06U: goto L_051B06;
        case 0x51B0AU: goto L_051B0A;
        case 0x51B0CU: goto L_051B0C;
        case 0x51B10U: goto L_051B10;
        case 0x51B14U: goto L_051B14;
        case 0x51B16U: goto L_051B16;
        case 0x51B1AU: goto L_051B1A;
        case 0x51B1EU: goto L_051B1E;
        case 0x51B22U: goto L_051B22;
        case 0x51B24U: goto L_051B24;
        case 0x51B26U: goto L_051B26;
        case 0x51B2AU: goto L_051B2A;
        case 0x51B2CU: goto L_051B2C;
        case 0x51B2EU: goto L_051B2E;
        case 0x51B34U: goto L_051B34;
        case 0x51B36U: goto L_051B36;
        case 0x51B3AU: goto L_051B3A;
        case 0x51B3CU: goto L_051B3C;
        case 0x51B40U: goto L_051B40;
        case 0x51B42U: goto L_051B42;
        case 0x51B46U: goto L_051B46;
        case 0x51B48U: goto L_051B48;
        case 0x51B4CU: goto L_051B4C;
        case 0x51B50U: goto L_051B50;
        case 0x51B54U: goto L_051B54;
        case 0x51B56U: goto L_051B56;
        case 0x51B58U: goto L_051B58;
        case 0x51B5CU: goto L_051B5C;
        case 0x51B60U: goto L_051B60;
        case 0x51B64U: goto L_051B64;
        case 0x51B68U: goto L_051B68;
        case 0x51B6AU: goto L_051B6A;
        case 0x51B70U: goto L_051B70;
        case 0x51B72U: goto L_051B72;
        case 0x51B76U: goto L_051B76;
        case 0x51B7AU: goto L_051B7A;
        case 0x51B7EU: goto L_051B7E;
        case 0x51B80U: goto L_051B80;
        case 0x51B86U: goto L_051B86;
        case 0x51B8AU: goto L_051B8A;
        case 0x51B8CU: goto L_051B8C;
        case 0x51B92U: goto L_051B92;
        case 0x51B94U: goto L_051B94;
        case 0x51B9AU: goto L_051B9A;
        case 0x51B9CU: goto L_051B9C;
        case 0x51B9EU: goto L_051B9E;
        case 0x51BA0U: goto L_051BA0;
        case 0x51BA2U: goto L_051BA2;
        case 0x51BA6U: goto L_051BA6;
        case 0x51BAAU: goto L_051BAA;
        case 0x51BACU: goto L_051BAC;
        case 0x51BB0U: goto L_051BB0;
        case 0x51BB4U: goto L_051BB4;
        case 0x51BB6U: goto L_051BB6;
        case 0x51BBCU: goto L_051BBC;
        case 0x51BC0U: goto L_051BC0;
        case 0x51BC2U: goto L_051BC2;
        case 0x51BC4U: goto L_051BC4;
        case 0x51BC8U: goto L_051BC8;
        case 0x51BCCU: goto L_051BCC;
        case 0x51BD0U: goto L_051BD0;
        case 0x51BD2U: goto L_051BD2;
        case 0x51BD4U: goto L_051BD4;
        case 0x51BD8U: goto L_051BD8;
        case 0x51BDCU: goto L_051BDC;
        case 0x51BDEU: goto L_051BDE;
        case 0x51BE2U: goto L_051BE2;
        case 0x51BE6U: goto L_051BE6;
        case 0x51BEAU: goto L_051BEA;
        case 0x51BECU: goto L_051BEC;
        case 0x51BF0U: goto L_051BF0;
        case 0x51BF4U: goto L_051BF4;
        case 0x51BF8U: goto L_051BF8;
        case 0x51BFCU: goto L_051BFC;
        case 0x51C00U: goto L_051C00;
        case 0x51C02U: goto L_051C02;
        case 0x51C06U: goto L_051C06;
        case 0x51C0AU: goto L_051C0A;
        case 0x51C0EU: goto L_051C0E;
        case 0x51C10U: goto L_051C10;
        case 0x51C14U: goto L_051C14;
        case 0x51C18U: goto L_051C18;
        case 0x51C1CU: goto L_051C1C;
        case 0x51C1EU: goto L_051C1E;
        case 0x51C22U: goto L_051C22;
        case 0x51C24U: goto L_051C24;
        case 0x51C28U: goto L_051C28;
        case 0x51C2CU: goto L_051C2C;
        case 0x51C2EU: goto L_051C2E;
        case 0x51C32U: goto L_051C32;
        case 0x51C38U: goto L_051C38;
        case 0x51C3CU: goto L_051C3C;
        case 0x51C40U: goto L_051C40;
        case 0x51C42U: goto L_051C42;
        case 0x51C46U: goto L_051C46;
        case 0x51C48U: goto L_051C48;
        case 0x51C4CU: goto L_051C4C;
        case 0x51C50U: goto L_051C50;
        case 0x51C52U: goto L_051C52;
        case 0x51C56U: goto L_051C56;
        case 0x51C5AU: goto L_051C5A;
        case 0x51C5EU: goto L_051C5E;
        case 0x51C60U: goto L_051C60;
        case 0x51C64U: goto L_051C64;
        case 0x51C68U: goto L_051C68;
        case 0x51C70U: goto L_051C70;
        case 0x51C74U: goto L_051C74;
        case 0x51C76U: goto L_051C76;
        case 0x51C78U: goto L_051C78;
        case 0x51C7CU: goto L_051C7C;
        case 0x51C7EU: goto L_051C7E;
        case 0x51C82U: goto L_051C82;
        case 0x51C84U: goto L_051C84;
        case 0x51C88U: goto L_051C88;
        case 0x51C8AU: goto L_051C8A;
        case 0x51C8EU: goto L_051C8E;
        case 0x52A44U: goto L_052A44;
        case 0x52A48U: goto L_052A48;
        case 0x52A4CU: goto L_052A4C;
        case 0x52A4EU: goto L_052A4E;
        case 0x52A54U: goto L_052A54;
        case 0x52A56U: goto L_052A56;
        case 0x52A5AU: goto L_052A5A;
        case 0x52A5CU: goto L_052A5C;
        case 0x52A60U: goto L_052A60;
        case 0x52A64U: goto L_052A64;
        case 0x52A66U: goto L_052A66;
        case 0x52A6CU: goto L_052A6C;
        case 0x52A6EU: goto L_052A6E;
        case 0x52A72U: goto L_052A72;
        case 0x52A74U: goto L_052A74;
        case 0x52A78U: goto L_052A78;
        case 0x52A7CU: goto L_052A7C;
        case 0x52A7EU: goto L_052A7E;
        case 0x52A84U: goto L_052A84;
        case 0x52A86U: goto L_052A86;
        case 0x52A8AU: goto L_052A8A;
        case 0x52A8CU: goto L_052A8C;
        case 0x52A90U: goto L_052A90;
        case 0x52A94U: goto L_052A94;
        case 0x52A96U: goto L_052A96;
        case 0x52A9CU: goto L_052A9C;
        case 0x52A9EU: goto L_052A9E;
        case 0x52AA2U: goto L_052AA2;
        case 0x52AA4U: goto L_052AA4;
        default: break; } }
    goto L_051C6C;
L_051912: ;
    ITR(0x51912U, 10);
    { /* 051912 051912 bra src=None dst=None cc=0 */
        goto L_052A44;
    }
L_0519A0: ;
    ITR(0x519A0U, 8);
    { /* 0519A0 0519a0 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_0519A4: ;
    ITR(0x519A4U, 4);
    { /* 0519A4 0519a4 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519A6: ;
    ITR(0x519A6U, 74);
    { /* 0519A6 0519a6 mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_0519AA: ;
    ITR(0x519AAU, 8);
    { /* 0519AA 0519aa adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=4 d=0 v=0) */
        a4 += SX16((d0 & 0xFFFF));
    }
L_0519AC: ;
    ITR(0x519ACU, 13);
    { /* 0519AC 0519ac scc.b src=None dst=EA(d16 r=4 d=10 v=0) cc=0 */
        { uint32_t t2 = (a4 + 0xAU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519B0: ;
    ITR(0x519B0U, 12);
    { /* 0519B0 0519b0 lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=6 d=0 v=0) */
        a6 = 0xDFF000U;
    }
L_0519B6: ;
    ITR(0x519B6U, 8);
    { /* 0519B6 0519b6 move.w src=EA(imm r=0 d=0 v=30) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x30U;
        SETW(d0, t1);
        }
    }
L_0519BA: ;
    ITR(0x519BAU, 70);
    { /* 0519BA 0519ba mulu.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d7 & 0xFFFF);
        d0 = t1;
        }
    }
L_0519BC: ;
    ITR(0x519BCU, 8);
    { /* 0519BC 0519bc lea.l src=EA(pcd r=0 d=0 v=51d9a) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x51D9AU;
    }
L_0519C0: ;
    ITR(0x519C0U, 8);
    { /* 0519C0 0519c0 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 += SX16((d0 & 0xFFFF));
    }
L_0519C2: ;
    ITR(0x519C2U, 4);
    { /* 0519C2 0519c2 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519C4: ;
    ITR(0x519C4U, 14);
    { /* 0519C4 0519c4 lsl.w src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 1, (d0 & 0xFFFF), 4, 16);
        SETW(d0, t1);
        }
    }
L_0519C6: ;
    ITR(0x519C6U, 8);
    { /* 0519C6 0519c6 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=6 d=0 v=0) */
        a6 += SX16((d0 & 0xFFFF));
    }
L_0519C8: ;
    ITR(0x519C8U, 16);
    { /* 0519C8 0519c8 movea.l src=EA(d16 r=0 d=4 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x4U));
    }
L_0519CC: ;
    ITR(0x519CCU, 16);
    { /* 0519CC 0519cc movea.l src=EA(d16 r=0 d=24 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 = rd32((a0 + 0x18U));
    }
L_0519D0: ;
    ITR(0x519D0U, 12);
    { /* 0519D0 0519d0 tst.b src=None dst=EA(d16 r=0 d=22 v=0) */
        { uint32_t t = rd8((a0 + 0x16U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519D4: ;
    ITR(0x519D4U, 8);
    { /* 0519D4 0519d4 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_0519D6: ;
    ITR(0x519D6U, 13);
    { /* 0519D6 0519d6 scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=0 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519DA: ;
    ITR(0x519DAU, 16);
    { /* 0519DA 0519da move.l src=EA(d16 r=5 d=4 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x4U));
        d0 = t1;
        FLAGS_LOGIC(t1, 0xFFFFFFFFU, 0x80000000U);
        }
    }
L_0519DE: ;
    ITR(0x519DEU, 8);
    { /* 0519DE 0519de bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051A06;
    }
L_0519E0: ;
    ITR(0x519E0U, 16);
    { /* 0519E0 0519e0 movea.l src=EA(d16 r=5 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a5 + 0x0U));
    }
L_0519E4: ;
    ITR(0x519E4U, 6);
    { /* 0519E4 0519e4 adda.l src=EA(dn r=0 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += d0;
    }
L_0519E6: ;
    ITR(0x519E6U, 10);
    { /* 0519E6 0519e6 lsr.l src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, 1, 32);
        d0 = t1;
        }
    }
L_0519E8: ;
    ITR(0x519E8U, 12);
    { /* 0519E8 0519e8 move.w src=EA(d16 r=5 d=8 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        SETW(d1, t1);
        }
    }
L_0519EC: ;
    ITR(0x519ECU, 4);
    { /* 0519EC 0519ec sub.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_0519EE: ;
    ITR(0x519EEU, 20);
    { /* 0519EE 0519ee move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = a2;
        wr32((a4 + 0x0U), t1);
        }
    }
L_0519F2: ;
    ITR(0x519F2U, 12);
    { /* 0519F2 0519f2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x4U), t1);
        }
    }
L_0519F6: ;
    ITR(0x519F6U, 12);
    { /* 0519F6 0519f6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519FA: ;
    ITR(0x519FAU, 8);
    { /* 0519FA 0519fa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A04;
    }
L_0519FC: ;
    ITR(0x519FCU, 20);
    { /* 0519FC 0519fc move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = a2;
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A00: ;
    ITR(0x51A00U, 12);
    { /* 051A00 051a00 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A04: ;
    ITR(0x51A04U, 10);
    { /* 051A04 051a04 bra src=None dst=None cc=0 */
        goto L_051A24;
    }
L_051A06: ;
    ITR(0x51A06U, 32);
    { /* 051A06 051a06 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A0C: ;
    ITR(0x51A0CU, 16);
    { /* 051A0C 051a0c move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A12: ;
    ITR(0x51A12U, 12);
    { /* 051A12 051a12 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A16: ;
    ITR(0x51A16U, 8);
    { /* 051A16 051a16 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_051A18: ;
    ITR(0x51A18U, 32);
    { /* 051A18 051a18 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A1E: ;
    ITR(0x51A1EU, 16);
    { /* 051A1E 051a1e move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A24: ;
    ITR(0x51A24U, 16);
    { /* 051A24 051a24 subq.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        wr16(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A28: ;
    ITR(0x51A28U, 8);
    { /* 051A28 051a28 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4E;
    }
L_051A2A: ;
    ITR(0x51A2AU, 16);
    { /* 051A2A 051a2a cmpi.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A30: ;
    ITR(0x51A30U, 8);
    { /* 051A30 051a30 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AF4;
    }
L_051A34: ;
    ITR(0x51A34U, 12);
    { /* 051A34 051a34 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A38: ;
    ITR(0x51A38U, 8);
    { /* 051A38 051a38 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A4A;
    }
L_051A3A: ;
    ITR(0x51A3AU, 12);
    { /* 051A3A 051a3a cmpi.b src=EA(imm r=0 d=0 v=83) dst=EA(ind r=1 d=0 v=0) */
        { uint32_t t1 = 0x83U;
        uint32_t t4 = a1;
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051A3E: ;
    ITR(0x51A3EU, 8);
    { /* 051A3E 051a3e bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4A;
    }
L_051A40: ;
    ITR(0x51A40U, 4);
    { /* 051A40 051a40 clr.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, 0);
    }
L_051A42: ;
    ITR(0x51A42U, 8);
    { /* 051A42 051a42 bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051A44: ;
    ITR(0x51A44U, 16);
    { /* 051A44 051a44 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051A4A: ;
    ITR(0x51A4AU, 10);
    { /* 051A4A 051a4a bra src=None dst=None cc=0 */
        goto L_051AE6;
    }
L_051A4E: ;
    ITR(0x51A4EU, 16);
    { /* 051A4E 051a4e clr.b src=None dst=EA(d16 r=0 d=0 v=0) */
        wr8((a0 + 0x0U), 0);
    }
L_051A52: ;
    ITR(0x51A52U, 4);
    { /* 051A52 051a52 moveq.l src=EA(imm r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        d0 = 0x0U;
    }
L_051A54: ;
    ITR(0x51A54U, 8);
    { /* 051A54 051a54 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d0, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051A56: ;
    ITR(0x51A56U, 8);
    { /* 051A56 051a56 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BE6;
    }
L_051A5A: ;
    ITR(0x51A5AU, 12);
    { /* 051A5A 051a5a move.b src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=2 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        wr8((a0 + 0x2U), t1);
        }
    }
L_051A5E: ;
    ITR(0x51A5EU, 12);
    { /* 051A5E 051a5e add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A62: ;
    ITR(0x51A62U, 12);
    { /* 051A62 051a62 add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A66: ;
    ITR(0x51A66U, 16);
    { /* 051A66 051a66 movea.l src=EA(d16 r=0 d=34 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x22U));
    }
L_051A6A: ;
    ITR(0x51A6AU, 8);
    { /* 051A6A 051a6a move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051A6C: ;
    ITR(0x51A6CU, 20);
    { /* 051A6C 051a6c move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051A70: ;
    ITR(0x51A70U, 20);
    { /* 051A70 051a70 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051A76: ;
    ITR(0x51A76U, 4);
    { /* 051A76 051a76 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051A78: ;
    ITR(0x51A78U, 32);
    { /* 051A78 051a78 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A7E: ;
    ITR(0x51A7EU, 20);
    { /* 051A7E 051a7e move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A84: ;
    ITR(0x51A84U, 12);
    { /* 051A84 051a84 move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051A88: ;
    ITR(0x51A88U, 70);
    { /* 051A88 051a88 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051A8A: ;
    ITR(0x51A8AU, 18);
    { /* 051A8A 051a8a lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051A8C: ;
    ITR(0x51A8CU, 12);
    { /* 051A8C 051a8c move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051A90: ;
    ITR(0x51A90U, 12);
    { /* 051A90 051a90 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A94: ;
    ITR(0x51A94U, 8);
    { /* 051A94 051a94 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AA6;
    }
L_051A96: ;
    ITR(0x51A96U, 32);
    { /* 051A96 051a96 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A9C: ;
    ITR(0x51A9CU, 20);
    { /* 051A9C 051a9c move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051AA2: ;
    ITR(0x51AA2U, 12);
    { /* 051AA2 051aa2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051AA6: ;
    ITR(0x51AA6U, 8);
    { /* 051AA6 051aa6 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AAA: ;
    ITR(0x51AAAU, 8);
    { /* 051AAA 051aaa lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051AAE: ;
    ITR(0x51AAEU, 12);
    { /* 051AAE 051aae move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051AB2: ;
    ITR(0x51AB2U, 4);
    { /* 051AB2 051ab2 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051AB4: ;
    ITR(0x51AB4U, 4);
    { /* 051AB4 051ab4 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AB6: ;
    ITR(0x51AB6U, 14);
    { /* 051AB6 051ab6 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051ABA: ;
    ITR(0x51ABAU, 70);
    { /* 051ABA 051aba mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051ABC: ;
    ITR(0x51ABCU, 16);
    { /* 051ABC 051abc lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051ABE: ;
    ITR(0x51ABEU, 12);
    { /* 051ABE 051abe move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051AC2: ;
    ITR(0x51AC2U, 12);
    { /* 051AC2 051ac2 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051AC6: ;
    ITR(0x51AC6U, 8);
    { /* 051AC6 051ac6 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051ACC;
    }
L_051AC8: ;
    ITR(0x51AC8U, 12);
    { /* 051AC8 051ac8 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051ACC: ;
    ITR(0x51ACCU, 13);
    { /* 051ACC 051acc scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=1 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051AD0: ;
    ITR(0x51AD0U, 20);
    { /* 051AD0 051ad0 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=4 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x4U), t1);
        }
    }
L_051AD4: ;
    ITR(0x51AD4U, 20);
    { /* 051AD4 051ad4 move.w src=EA(d16 r=0 d=28 v=0) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = rd16((a0 + 0x1CU));
        wr16((a0 + 0x1EU), t1);
        }
    }
L_051ADA: ;
    ITR(0x51ADAU, 8);
    { /* 051ADA 051ada move.w src=EA(imm r=0 d=0 v=8200) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x8200U;
        SETW(d1, t1);
        }
    }
L_051ADE: ;
    ITR(0x51ADEU, 8);
    { /* 051ADE 051ade bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051AE0: ;
    ITR(0x51AE0U, 16);
    { /* 051AE0 051ae0 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051AE6: ;
    ITR(0x51AE6U, 4);
    { /* 051AE6 051ae6 addq.w src=EA(imm r=0 d=0 v=1) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d7, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFFFU, 0x8000U, 1);
        }
    }
L_051AE8: ;
    ITR(0x51AE8U, 8);
    { /* 051AE8 051ae8 cmp.w src=EA(imm r=0 d=0 v=4) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x4U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051AEC: ;
    ITR(0x51AECU, 10);
    { /* 051AEC 051aec bcc src=None dst=None cc=6 */
        if (COND_6) { BUDGET_CHECK(0x519A0U); goto L_0519A0; }
    }
L_051AF0: ;
    ITR(0x51AF0U, 10);
    { /* 051AF0 051af0 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51912U); goto L_051912; }
    }
L_051AF4: ;
    ITR(0x51AF4U, 12);
    { /* 051AF4 051af4 move.b src=EA(d16 r=0 d=2 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2U));
        SETB(d0, t1);
        }
    }
L_051AF8: ;
    ITR(0x51AF8U, 12);
    { /* 051AF8 051af8 add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051AFC: ;
    ITR(0x51AFCU, 12);
    { /* 051AFC 051afc add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B00: ;
    ITR(0x51B00U, 16);
    { /* 051B00 051b00 movea.l src=EA(d16 r=0 d=16 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x10U));
    }
L_051B04: ;
    ITR(0x51B04U, 8);
    { /* 051B04 051b04 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051B06: ;
    ITR(0x51B06U, 12);
    { /* 051B06 051b06 bclr.l src=EA(imm r=0 d=0 v=7) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (0x7U) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 & ~(1u << t1);
        }
    }
L_051B0A: ;
    ITR(0x51B0AU, 8);
    { /* 051B0A 051b0a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B10;
    }
L_051B0C: ;
    ITR(0x51B0CU, 16);
    { /* 051B0C 051b0c movea.l src=EA(d16 r=0 d=12 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0xCU));
    }
L_051B10: ;
    ITR(0x51B10U, 20);
    { /* 051B10 051b10 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051B14: ;
    ITR(0x51B14U, 4);
    { /* 051B14 051b14 add.b src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B16: ;
    ITR(0x51B16U, 8);
    { /* 051B16 051b16 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B1A: ;
    ITR(0x51B1AU, 8);
    { /* 051B1A 051b1a lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051B1E: ;
    ITR(0x51B1EU, 12);
    { /* 051B1E 051b1e move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051B22: ;
    ITR(0x51B22U, 4);
    { /* 051B22 051b22 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051B24: ;
    ITR(0x51B24U, 4);
    { /* 051B24 051b24 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B26: ;
    ITR(0x51B26U, 14);
    { /* 051B26 051b26 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051B2A: ;
    ITR(0x51B2AU, 70);
    { /* 051B2A 051b2a mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051B2C: ;
    ITR(0x51B2CU, 16);
    { /* 051B2C 051b2c lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051B2E: ;
    ITR(0x51B2EU, 16);
    { /* 051B2E 051b2e btst.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=0 v=0) */
        { uint32_t t1 = (0x1U) & 7;
        uint32_t t3 = (a0 + 0x0U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B34: ;
    ITR(0x51B34U, 8);
    { /* 051B34 051b34 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B50;
    }
L_051B36: ;
    ITR(0x51B36U, 12);
    { /* 051B36 051b36 tst.b src=None dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t = rd8((a0 + 0x15U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B3A: ;
    ITR(0x51B3AU, 8);
    { /* 051B3A 051b3a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B42;
    }
L_051B3C: ;
    ITR(0x51B3CU, 16);
    { /* 051B3C 051b3c subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x15U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        }
    }
L_051B40: ;
    ITR(0x51B40U, 10);
    { /* 051B40 051b40 bra src=None dst=None cc=0 */
        goto L_051B50;
    }
L_051B42: ;
    ITR(0x51B42U, 12);
    { /* 051B42 051b42 move.b src=EA(d16 r=0 d=20 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x14U));
        SETB(d1, t1);
        }
    }
L_051B46: ;
    ITR(0x51B46U, 4);
    { /* 051B46 051b46 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B48: ;
    ITR(0x51B48U, 16);
    { /* 051B48 051b48 add.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=32 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t4 = (a0 + 0x20U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        wr16(t4, t3);
        }
    }
L_051B4C: ;
    ITR(0x51B4CU, 12);
    { /* 051B4C 051b4c sub.w src=EA(d16 r=0 d=32 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a0 + 0x20U));
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B50: ;
    ITR(0x51B50U, 12);
    { /* 051B50 051b50 tst.b src=None dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t = rd8((a0 + 0x1U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B54: ;
    ITR(0x51B54U, 8);
    { /* 051B54 051b54 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA2;
    }
L_051B56: ;
    ITR(0x51B56U, 8);
    { /* 051B56 051b56 bcc src=None dst=None cc=10 */
        if (COND_10) goto L_051B72;
    }
L_051B58: ;
    ITR(0x51B58U, 12);
    { /* 051B58 051b58 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B5C: ;
    ITR(0x51B5CU, 12);
    { /* 051B5C 051b5c add.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B60: ;
    ITR(0x51B60U, 12);
    { /* 051B60 051b60 move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        }
    }
L_051B64: ;
    ITR(0x51B64U, 12);
    { /* 051B64 051b64 cmp.b src=EA(d16 r=0 d=46 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2EU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051B68: ;
    ITR(0x51B68U, 8);
    { /* 051B68 051b68 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B6A: ;
    ITR(0x51B6AU, 20);
    { /* 051B6A 051b6a bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B70: ;
    ITR(0x51B70U, 10);
    { /* 051B70 051b70 bra src=None dst=None cc=0 */
        goto L_051B86;
    }
L_051B72: ;
    ITR(0x51B72U, 12);
    { /* 051B72 051b72 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B76: ;
    ITR(0x51B76U, 12);
    { /* 051B76 051b76 sub.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B7A: ;
    ITR(0x51B7AU, 12);
    { /* 051B7A 051b7a move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051B7E: ;
    ITR(0x51B7EU, 8);
    { /* 051B7E 051b7e bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B80: ;
    ITR(0x51B80U, 20);
    { /* 051B80 051b80 bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B86: ;
    ITR(0x51B86U, 12);
    { /* 051B86 051b86 tst.b src=None dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t = rd8((a0 + 0x2DU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B8A: ;
    ITR(0x51B8AU, 8);
    { /* 051B8A 051b8a bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B92;
    }
L_051B8C: ;
    ITR(0x51B8CU, 20);
    { /* 051B8C 051b8c bchg.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B92: ;
    ITR(0x51B92U, 4);
    { /* 051B92 051b92 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B94: ;
    ITR(0x51B94U, 16);
    { /* 051B94 051b94 btst.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B9A: ;
    ITR(0x51B9AU, 8);
    { /* 051B9A 051b9a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA0;
    }
L_051B9C: ;
    ITR(0x51B9CU, 4);
    { /* 051B9C 051b9c add.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B9E: ;
    ITR(0x51B9EU, 10);
    { /* 051B9E 051b9e bra src=None dst=None cc=0 */
        goto L_051BA2;
    }
L_051BA0: ;
    ITR(0x51BA0U, 4);
    { /* 051BA0 051ba0 sub.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051BA2: ;
    ITR(0x51BA2U, 12);
    { /* 051BA2 051ba2 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051BA6: ;
    ITR(0x51BA6U, 12);
    { /* 051BA6 051ba6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BAA: ;
    ITR(0x51BAAU, 8);
    { /* 051BAA 051baa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BB0;
    }
L_051BAC: ;
    ITR(0x51BACU, 12);
    { /* 051BAC 051bac move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051BB0: ;
    ITR(0x51BB0U, 16);
    { /* 051BB0 051bb0 subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x2BU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BB4: ;
    ITR(0x51BB4U, 8);
    { /* 051BB4 051bb4 bcc src=None dst=None cc=4 */
        if (COND_4) goto L_051BE2;
    }
L_051BB6: ;
    ITR(0x51BB6U, 20);
    { /* 051BB6 051bb6 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051BBC: ;
    ITR(0x51BBCU, 16);
    { /* 051BBC 051bbc movea.l src=EA(d16 r=0 d=38 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x26U));
    }
L_051BC0: ;
    ITR(0x51BC0U, 8);
    { /* 051BC0 051bc0 move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051BC2: ;
    ITR(0x51BC2U, 8);
    { /* 051BC2 051bc2 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BC8;
    }
L_051BC4: ;
    ITR(0x51BC4U, 20);
    { /* 051BC4 051bc4 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051BC8: ;
    ITR(0x51BC8U, 8);
    { /* 051BC8 051bc8 andi.w src=EA(imm r=0 d=0 v=7f) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x7FU;
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_051BCC: ;
    ITR(0x51BCCU, 12);
    { /* 051BCC 051bcc move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051BD0: ;
    ITR(0x51BD0U, 70);
    { /* 051BD0 051bd0 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051BD2: ;
    ITR(0x51BD2U, 18);
    { /* 051BD2 051bd2 lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051BD4: ;
    ITR(0x51BD4U, 12);
    { /* 051BD4 051bd4 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051BD8: ;
    ITR(0x51BD8U, 12);
    { /* 051BD8 051bd8 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BDC: ;
    ITR(0x51BDCU, 8);
    { /* 051BDC 051bdc bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BE2;
    }
L_051BDE: ;
    ITR(0x51BDEU, 12);
    { /* 051BDE 051bde move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051BE2: ;
    ITR(0x51BE2U, 10);
    { /* 051BE2 051be2 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51AE6U); goto L_051AE6; }
    }
L_051BE6: ;
    ITR(0x51BE6U, 8);
    { /* 051BE6 051be6 cmp.b src=EA(imm r=0 d=0 v=e0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xE0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BEA: ;
    ITR(0x51BEAU, 8);
    { /* 051BEA 051bea bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051BFC;
    }
L_051BEC: ;
    ITR(0x51BECU, 8);
    { /* 051BEC 051bec subi.b src=EA(imm r=0 d=0 v=df) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xDFU;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051BF0: ;
    ITR(0x51BF0U, 78);
    { /* 051BF0 051bf0 mulu.w src=EA(pcd r=0 d=0 v=51d82) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * rd16(0x51D82U);
        d0 = t1;
        }
    }
L_051BF4: ;
    ITR(0x51BF4U, 12);
    { /* 051BF4 051bf4 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=28 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a0 + 0x1CU), t1);
        }
    }
L_051BF8: ;
    ITR(0x51BF8U, 10);
    { /* 051BF8 051bf8 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051BFC: ;
    ITR(0x51BFCU, 8);
    { /* 051BFC 051bfc cmp.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C00: ;
    ITR(0x51C00U, 8);
    { /* 051C00 051c00 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C18;
    }
L_051C02: ;
    ITR(0x51C02U, 8);
    { /* 051C02 051c02 subi.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C06: ;
    ITR(0x51C06U, 8);
    { /* 051C06 051c06 lea.l src=EA(pcd r=0 d=0 v=51f3c) dst=EA(an r=5 d=0 v=0) */
        a5 = 0x51F3CU;
    }
L_051C0A: ;
    ITR(0x51C0AU, 74);
    { /* 051C0A 051c0a mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_051C0E: ;
    ITR(0x51C0EU, 8);
    { /* 051C0E 051c0e adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 += SX16((d0 & 0xFFFF));
    }
L_051C10: ;
    ITR(0x51C10U, 20);
    { /* 051C10 051c10 move.l src=EA(an r=5 d=0 v=0) dst=EA(d16 r=0 d=24 v=0) */
        { uint32_t t1 = a5;
        wr32((a0 + 0x18U), t1);
        }
    }
L_051C14: ;
    ITR(0x51C14U, 10);
    { /* 051C14 051c14 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C18: ;
    ITR(0x51C18U, 8);
    { /* 051C18 051c18 cmp.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C1C: ;
    ITR(0x51C1CU, 8);
    { /* 051C1C 051c1c bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C3C;
    }
L_051C1E: ;
    ITR(0x51C1EU, 8);
    { /* 051C1E 051c1e subi.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C22: ;
    ITR(0x51C22U, 4);
    { /* 051C22 051c22 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C24: ;
    ITR(0x51C24U, 8);
    { /* 051C24 051c24 lea.l src=EA(pcd r=0 d=0 v=52f1e) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x52F1EU;
    }
L_051C28: ;
    ITR(0x51C28U, 14);
    { /* 051C28 051c28 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C2C: ;
    ITR(0x51C2CU, 6);
    { /* 051C2C 051c2c adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C2E: ;
    ITR(0x51C2EU, 20);
    { /* 051C2E 051c2e move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=34 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x22U), t1);
        }
    }
L_051C32: ;
    ITR(0x51C32U, 20);
    { /* 051C32 051c32 move.b src=EA(d16 r=2 d=-1 v=0) dst=EA(d16 r=0 d=42 v=0) */
        { uint32_t t1 = rd8((a2 + 0xFFFFFFFFU));
        wr8((a0 + 0x2AU), t1);
        }
    }
L_051C38: ;
    ITR(0x51C38U, 10);
    { /* 051C38 051c38 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C3C: ;
    ITR(0x51C3CU, 8);
    { /* 051C3C 051c3c cmp.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C40: ;
    ITR(0x51C40U, 8);
    { /* 051C40 051c40 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C5E;
    }
L_051C42: ;
    ITR(0x51C42U, 8);
    { /* 051C42 051c42 subi.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C46: ;
    ITR(0x51C46U, 4);
    { /* 051C46 051c46 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C48: ;
    ITR(0x51C48U, 8);
    { /* 051C48 051c48 lea.l src=EA(pcd r=0 d=0 v=51eea) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51EEAU;
    }
L_051C4C: ;
    ITR(0x51C4CU, 14);
    { /* 051C4C 051c4c movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C50: ;
    ITR(0x51C50U, 6);
    { /* 051C50 051c50 adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C52: ;
    ITR(0x51C52U, 20);
    { /* 051C52 051c52 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=12 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0xCU), t1);
        }
    }
L_051C56: ;
    ITR(0x51C56U, 20);
    { /* 051C56 051c56 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051C5A: ;
    ITR(0x51C5AU, 10);
    { /* 051C5A 051c5a bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C5E: ;
    ITR(0x51C5EU, 4);
    { /* 051C5E 051c5e add.b src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_051C60: ;
    ITR(0x51C60U, 8);
    { /* 051C60 051c60 lea.l src=EA(pcd r=0 d=0 v=51d6a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51D6AU;
    }
L_051C64: ;
    ITR(0x51C64U, 14);
    { /* 051C64 051c64 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C68: ;
    ITR(0x51C68U, 14);
    { /* 051C68 051c68 jmp src=EA(idx r=3 d=0 v=0) dst=None */
        { call_dynamic((a3 + 0x0U + ((uint32_t)(int32_t)(int16_t)a2))); return; }
    }
L_051C6C: ;
    ITR(0x51C6CU, 12);
    { /* 051C6C 051c6c move.w src=EA(d16 r=0 d=10 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a0 + 0xAU));
        SETW(d0, t1);
        }
    }
L_051C70: ;
    ITR(0x51C70U, 12);
    { /* 051C70 051c70 movea.w src=EA(d16 r=0 d=8 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a0 + 0x8U)));
    }
L_051C74: ;
    ITR(0x51C74U, 8);
    { /* 051C74 051c74 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += SX16((d0 & 0xFFFF));
    }
L_051C76: ;
    ITR(0x51C76U, 4);
    { /* 051C76 051c76 addq.w src=EA(imm r=0 d=0 v=2) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x2U;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C78: ;
    ITR(0x51C78U, 14);
    { /* 051C78 051c78 tst.w src=None dst=EA(idx r=3 d=0 v=0) */
        { uint32_t t = rd16((a3 + 0x0U + ((uint32_t)(int32_t)(int16_t)a2)));
        FLAGS_LOGIC(t, 0xFFFFU, 0x8000U);
        }
    }
L_051C7C: ;
    ITR(0x51C7CU, 8);
    { /* 051C7C 051c7c bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051C84;
    }
L_051C7E: ;
    ITR(0x51C7EU, 12);
    { /* 051C7E 051c7e movea.w src=EA(d16 r=0 d=8 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a0 + 0x8U)));
    }
L_051C82: ;
    ITR(0x51C82U, 4);
    { /* 051C82 051c82 moveq.l src=EA(imm r=0 d=0 v=2) dst=EA(dn r=0 d=0 v=0) */
        d0 = 0x2U;
    }
L_051C84: ;
    ITR(0x51C84U, 14);
    { /* 051C84 051c84 movea.w src=EA(idx r=3 d=0 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = SX16(rd16((a3 + 0x0U + ((uint32_t)(int32_t)(int16_t)a2))));
    }
L_051C88: ;
    ITR(0x51C88U, 6);
    { /* 051C88 051c88 adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 += a3;
    }
L_051C8A: ;
    ITR(0x51C8AU, 12);
    { /* 051C8A 051c8a move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=10 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a0 + 0xAU), t1);
        }
    }
L_051C8E: ;
    ITR(0x51C8EU, 10);
    { /* 051C8E 051c8e bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_052A44: ;
    ITR(0x52A44U, 8);
    { /* 052A44 052a44 lea.l src=EA(pcd r=0 d=0 v=52b9c) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52B9CU;
    }
L_052A48: ;
    ITR(0x52A48U, 12);
    { /* 052A48 052a48 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A4C: ;
    ITR(0x52A4CU, 8);
    { /* 052A4C 052a4c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A5C;
    }
L_052A4E: ;
    ITR(0x52A4EU, 12);
    { /* 052A4E 052a4e lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF000U;
    }
L_052A54: ;
    ITR(0x52A54U, 4);
    { /* 052A54 052a54 moveq.l src=EA(imm r=0 d=0 v=1) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x1U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A56: ;
    ITR(0x52A56U, 8);
    { /* 052A56 052a56 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_052A5A: ;
    ITR(0x52A5AU, 18);
    { /* 052A5A 052a5a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A5CU);
    }
L_052A5C: ;
    ITR(0x52A5CU, 8);
    { /* 052A5C 052a5c lea.l src=EA(pcd r=0 d=0 v=52bc0) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BC0U;
    }
L_052A60: ;
    ITR(0x52A60U, 12);
    { /* 052A60 052a60 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A64: ;
    ITR(0x52A64U, 8);
    { /* 052A64 052a64 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A74;
    }
L_052A66: ;
    ITR(0x52A66U, 12);
    { /* 052A66 052a66 lea.l src=EA(absl r=0 d=0 v=dff010) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF010U;
    }
L_052A6C: ;
    ITR(0x52A6CU, 4);
    { /* 052A6C 052a6c moveq.l src=EA(imm r=0 d=0 v=2) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x2U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A6E: ;
    ITR(0x52A6EU, 8);
    { /* 052A6E 052a6e lea.l src=EA(pcd r=0 d=0 v=52c3a) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C3AU;
    }
L_052A72: ;
    ITR(0x52A72U, 18);
    { /* 052A72 052a72 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A74U);
    }
L_052A74: ;
    ITR(0x52A74U, 8);
    { /* 052A74 052a74 lea.l src=EA(pcd r=0 d=0 v=52be4) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BE4U;
    }
L_052A78: ;
    ITR(0x52A78U, 12);
    { /* 052A78 052a78 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A7C: ;
    ITR(0x52A7CU, 8);
    { /* 052A7C 052a7c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A8C;
    }
L_052A7E: ;
    ITR(0x52A7EU, 12);
    { /* 052A7E 052a7e lea.l src=EA(absl r=0 d=0 v=dff020) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF020U;
    }
L_052A84: ;
    ITR(0x52A84U, 4);
    { /* 052A84 052a84 moveq.l src=EA(imm r=0 d=0 v=4) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x4U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A86: ;
    ITR(0x52A86U, 8);
    { /* 052A86 052a86 lea.l src=EA(pcd r=0 d=0 v=52c46) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C46U;
    }
L_052A8A: ;
    ITR(0x52A8AU, 18);
    { /* 052A8A 052a8a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A8CU);
    }
L_052A8C: ;
    ITR(0x52A8CU, 8);
    { /* 052A8C 052a8c lea.l src=EA(pcd r=0 d=0 v=52c08) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52C08U;
    }
L_052A90: ;
    ITR(0x52A90U, 12);
    { /* 052A90 052a90 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A94: ;
    ITR(0x52A94U, 8);
    { /* 052A94 052a94 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052AA4;
    }
L_052A96: ;
    ITR(0x52A96U, 12);
    { /* 052A96 052a96 lea.l src=EA(absl r=0 d=0 v=dff030) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF030U;
    }
L_052A9C: ;
    ITR(0x52A9CU, 4);
    { /* 052A9C 052a9c moveq.l src=EA(imm r=0 d=0 v=8) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x8U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A9E: ;
    ITR(0x52A9EU, 8);
    { /* 052A9E 052a9e lea.l src=EA(pcd r=0 d=0 v=52c52) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C52U;
    }
L_052AA2: ;
    ITR(0x52AA2U, 18);
    { /* 052AA2 052aa2 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52AA4U);
    }
L_052AA4: ;
    ITR(0x52AA4U, 16);
    { /* 052AA4 052aa4 rts src=None dst=None */
        RTS();
    }
}

void dwam_051C92(void)
{
    FN_ENTER(0x51C92U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51912U: goto L_051912;
        case 0x519A0U: goto L_0519A0;
        case 0x519A4U: goto L_0519A4;
        case 0x519A6U: goto L_0519A6;
        case 0x519AAU: goto L_0519AA;
        case 0x519ACU: goto L_0519AC;
        case 0x519B0U: goto L_0519B0;
        case 0x519B6U: goto L_0519B6;
        case 0x519BAU: goto L_0519BA;
        case 0x519BCU: goto L_0519BC;
        case 0x519C0U: goto L_0519C0;
        case 0x519C2U: goto L_0519C2;
        case 0x519C4U: goto L_0519C4;
        case 0x519C6U: goto L_0519C6;
        case 0x519C8U: goto L_0519C8;
        case 0x519CCU: goto L_0519CC;
        case 0x519D0U: goto L_0519D0;
        case 0x519D4U: goto L_0519D4;
        case 0x519D6U: goto L_0519D6;
        case 0x519DAU: goto L_0519DA;
        case 0x519DEU: goto L_0519DE;
        case 0x519E0U: goto L_0519E0;
        case 0x519E4U: goto L_0519E4;
        case 0x519E6U: goto L_0519E6;
        case 0x519E8U: goto L_0519E8;
        case 0x519ECU: goto L_0519EC;
        case 0x519EEU: goto L_0519EE;
        case 0x519F2U: goto L_0519F2;
        case 0x519F6U: goto L_0519F6;
        case 0x519FAU: goto L_0519FA;
        case 0x519FCU: goto L_0519FC;
        case 0x51A00U: goto L_051A00;
        case 0x51A04U: goto L_051A04;
        case 0x51A06U: goto L_051A06;
        case 0x51A0CU: goto L_051A0C;
        case 0x51A12U: goto L_051A12;
        case 0x51A16U: goto L_051A16;
        case 0x51A18U: goto L_051A18;
        case 0x51A1EU: goto L_051A1E;
        case 0x51A24U: goto L_051A24;
        case 0x51A28U: goto L_051A28;
        case 0x51A2AU: goto L_051A2A;
        case 0x51A30U: goto L_051A30;
        case 0x51A34U: goto L_051A34;
        case 0x51A38U: goto L_051A38;
        case 0x51A3AU: goto L_051A3A;
        case 0x51A3EU: goto L_051A3E;
        case 0x51A40U: goto L_051A40;
        case 0x51A42U: goto L_051A42;
        case 0x51A44U: goto L_051A44;
        case 0x51A4AU: goto L_051A4A;
        case 0x51A4EU: goto L_051A4E;
        case 0x51A52U: goto L_051A52;
        case 0x51A54U: goto L_051A54;
        case 0x51A56U: goto L_051A56;
        case 0x51A5AU: goto L_051A5A;
        case 0x51A5EU: goto L_051A5E;
        case 0x51A62U: goto L_051A62;
        case 0x51A66U: goto L_051A66;
        case 0x51A6AU: goto L_051A6A;
        case 0x51A6CU: goto L_051A6C;
        case 0x51A70U: goto L_051A70;
        case 0x51A76U: goto L_051A76;
        case 0x51A78U: goto L_051A78;
        case 0x51A7EU: goto L_051A7E;
        case 0x51A84U: goto L_051A84;
        case 0x51A88U: goto L_051A88;
        case 0x51A8AU: goto L_051A8A;
        case 0x51A8CU: goto L_051A8C;
        case 0x51A90U: goto L_051A90;
        case 0x51A94U: goto L_051A94;
        case 0x51A96U: goto L_051A96;
        case 0x51A9CU: goto L_051A9C;
        case 0x51AA2U: goto L_051AA2;
        case 0x51AA6U: goto L_051AA6;
        case 0x51AAAU: goto L_051AAA;
        case 0x51AAEU: goto L_051AAE;
        case 0x51AB2U: goto L_051AB2;
        case 0x51AB4U: goto L_051AB4;
        case 0x51AB6U: goto L_051AB6;
        case 0x51ABAU: goto L_051ABA;
        case 0x51ABCU: goto L_051ABC;
        case 0x51ABEU: goto L_051ABE;
        case 0x51AC2U: goto L_051AC2;
        case 0x51AC6U: goto L_051AC6;
        case 0x51AC8U: goto L_051AC8;
        case 0x51ACCU: goto L_051ACC;
        case 0x51AD0U: goto L_051AD0;
        case 0x51AD4U: goto L_051AD4;
        case 0x51ADAU: goto L_051ADA;
        case 0x51ADEU: goto L_051ADE;
        case 0x51AE0U: goto L_051AE0;
        case 0x51AE6U: goto L_051AE6;
        case 0x51AE8U: goto L_051AE8;
        case 0x51AECU: goto L_051AEC;
        case 0x51AF0U: goto L_051AF0;
        case 0x51AF4U: goto L_051AF4;
        case 0x51AF8U: goto L_051AF8;
        case 0x51AFCU: goto L_051AFC;
        case 0x51B00U: goto L_051B00;
        case 0x51B04U: goto L_051B04;
        case 0x51B06U: goto L_051B06;
        case 0x51B0AU: goto L_051B0A;
        case 0x51B0CU: goto L_051B0C;
        case 0x51B10U: goto L_051B10;
        case 0x51B14U: goto L_051B14;
        case 0x51B16U: goto L_051B16;
        case 0x51B1AU: goto L_051B1A;
        case 0x51B1EU: goto L_051B1E;
        case 0x51B22U: goto L_051B22;
        case 0x51B24U: goto L_051B24;
        case 0x51B26U: goto L_051B26;
        case 0x51B2AU: goto L_051B2A;
        case 0x51B2CU: goto L_051B2C;
        case 0x51B2EU: goto L_051B2E;
        case 0x51B34U: goto L_051B34;
        case 0x51B36U: goto L_051B36;
        case 0x51B3AU: goto L_051B3A;
        case 0x51B3CU: goto L_051B3C;
        case 0x51B40U: goto L_051B40;
        case 0x51B42U: goto L_051B42;
        case 0x51B46U: goto L_051B46;
        case 0x51B48U: goto L_051B48;
        case 0x51B4CU: goto L_051B4C;
        case 0x51B50U: goto L_051B50;
        case 0x51B54U: goto L_051B54;
        case 0x51B56U: goto L_051B56;
        case 0x51B58U: goto L_051B58;
        case 0x51B5CU: goto L_051B5C;
        case 0x51B60U: goto L_051B60;
        case 0x51B64U: goto L_051B64;
        case 0x51B68U: goto L_051B68;
        case 0x51B6AU: goto L_051B6A;
        case 0x51B70U: goto L_051B70;
        case 0x51B72U: goto L_051B72;
        case 0x51B76U: goto L_051B76;
        case 0x51B7AU: goto L_051B7A;
        case 0x51B7EU: goto L_051B7E;
        case 0x51B80U: goto L_051B80;
        case 0x51B86U: goto L_051B86;
        case 0x51B8AU: goto L_051B8A;
        case 0x51B8CU: goto L_051B8C;
        case 0x51B92U: goto L_051B92;
        case 0x51B94U: goto L_051B94;
        case 0x51B9AU: goto L_051B9A;
        case 0x51B9CU: goto L_051B9C;
        case 0x51B9EU: goto L_051B9E;
        case 0x51BA0U: goto L_051BA0;
        case 0x51BA2U: goto L_051BA2;
        case 0x51BA6U: goto L_051BA6;
        case 0x51BAAU: goto L_051BAA;
        case 0x51BACU: goto L_051BAC;
        case 0x51BB0U: goto L_051BB0;
        case 0x51BB4U: goto L_051BB4;
        case 0x51BB6U: goto L_051BB6;
        case 0x51BBCU: goto L_051BBC;
        case 0x51BC0U: goto L_051BC0;
        case 0x51BC2U: goto L_051BC2;
        case 0x51BC4U: goto L_051BC4;
        case 0x51BC8U: goto L_051BC8;
        case 0x51BCCU: goto L_051BCC;
        case 0x51BD0U: goto L_051BD0;
        case 0x51BD2U: goto L_051BD2;
        case 0x51BD4U: goto L_051BD4;
        case 0x51BD8U: goto L_051BD8;
        case 0x51BDCU: goto L_051BDC;
        case 0x51BDEU: goto L_051BDE;
        case 0x51BE2U: goto L_051BE2;
        case 0x51BE6U: goto L_051BE6;
        case 0x51BEAU: goto L_051BEA;
        case 0x51BECU: goto L_051BEC;
        case 0x51BF0U: goto L_051BF0;
        case 0x51BF4U: goto L_051BF4;
        case 0x51BF8U: goto L_051BF8;
        case 0x51BFCU: goto L_051BFC;
        case 0x51C00U: goto L_051C00;
        case 0x51C02U: goto L_051C02;
        case 0x51C06U: goto L_051C06;
        case 0x51C0AU: goto L_051C0A;
        case 0x51C0EU: goto L_051C0E;
        case 0x51C10U: goto L_051C10;
        case 0x51C14U: goto L_051C14;
        case 0x51C18U: goto L_051C18;
        case 0x51C1CU: goto L_051C1C;
        case 0x51C1EU: goto L_051C1E;
        case 0x51C22U: goto L_051C22;
        case 0x51C24U: goto L_051C24;
        case 0x51C28U: goto L_051C28;
        case 0x51C2CU: goto L_051C2C;
        case 0x51C2EU: goto L_051C2E;
        case 0x51C32U: goto L_051C32;
        case 0x51C38U: goto L_051C38;
        case 0x51C3CU: goto L_051C3C;
        case 0x51C40U: goto L_051C40;
        case 0x51C42U: goto L_051C42;
        case 0x51C46U: goto L_051C46;
        case 0x51C48U: goto L_051C48;
        case 0x51C4CU: goto L_051C4C;
        case 0x51C50U: goto L_051C50;
        case 0x51C52U: goto L_051C52;
        case 0x51C56U: goto L_051C56;
        case 0x51C5AU: goto L_051C5A;
        case 0x51C5EU: goto L_051C5E;
        case 0x51C60U: goto L_051C60;
        case 0x51C64U: goto L_051C64;
        case 0x51C68U: goto L_051C68;
        case 0x51C96U: goto L_051C96;
        case 0x51C9AU: goto L_051C9A;
        case 0x51C9EU: goto L_051C9E;
        case 0x51CA4U: goto L_051CA4;
        case 0x52A44U: goto L_052A44;
        case 0x52A48U: goto L_052A48;
        case 0x52A4CU: goto L_052A4C;
        case 0x52A4EU: goto L_052A4E;
        case 0x52A54U: goto L_052A54;
        case 0x52A56U: goto L_052A56;
        case 0x52A5AU: goto L_052A5A;
        case 0x52A5CU: goto L_052A5C;
        case 0x52A60U: goto L_052A60;
        case 0x52A64U: goto L_052A64;
        case 0x52A66U: goto L_052A66;
        case 0x52A6CU: goto L_052A6C;
        case 0x52A6EU: goto L_052A6E;
        case 0x52A72U: goto L_052A72;
        case 0x52A74U: goto L_052A74;
        case 0x52A78U: goto L_052A78;
        case 0x52A7CU: goto L_052A7C;
        case 0x52A7EU: goto L_052A7E;
        case 0x52A84U: goto L_052A84;
        case 0x52A86U: goto L_052A86;
        case 0x52A8AU: goto L_052A8A;
        case 0x52A8CU: goto L_052A8C;
        case 0x52A90U: goto L_052A90;
        case 0x52A94U: goto L_052A94;
        case 0x52A96U: goto L_052A96;
        case 0x52A9CU: goto L_052A9C;
        case 0x52A9EU: goto L_052A9E;
        case 0x52AA2U: goto L_052AA2;
        case 0x52AA4U: goto L_052AA4;
        default: break; } }
    goto L_051C92;
L_051912: ;
    ITR(0x51912U, 10);
    { /* 051912 051912 bra src=None dst=None cc=0 */
        goto L_052A44;
    }
L_0519A0: ;
    ITR(0x519A0U, 8);
    { /* 0519A0 0519a0 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_0519A4: ;
    ITR(0x519A4U, 4);
    { /* 0519A4 0519a4 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519A6: ;
    ITR(0x519A6U, 74);
    { /* 0519A6 0519a6 mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_0519AA: ;
    ITR(0x519AAU, 8);
    { /* 0519AA 0519aa adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=4 d=0 v=0) */
        a4 += SX16((d0 & 0xFFFF));
    }
L_0519AC: ;
    ITR(0x519ACU, 13);
    { /* 0519AC 0519ac scc.b src=None dst=EA(d16 r=4 d=10 v=0) cc=0 */
        { uint32_t t2 = (a4 + 0xAU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519B0: ;
    ITR(0x519B0U, 12);
    { /* 0519B0 0519b0 lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=6 d=0 v=0) */
        a6 = 0xDFF000U;
    }
L_0519B6: ;
    ITR(0x519B6U, 8);
    { /* 0519B6 0519b6 move.w src=EA(imm r=0 d=0 v=30) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x30U;
        SETW(d0, t1);
        }
    }
L_0519BA: ;
    ITR(0x519BAU, 70);
    { /* 0519BA 0519ba mulu.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d7 & 0xFFFF);
        d0 = t1;
        }
    }
L_0519BC: ;
    ITR(0x519BCU, 8);
    { /* 0519BC 0519bc lea.l src=EA(pcd r=0 d=0 v=51d9a) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x51D9AU;
    }
L_0519C0: ;
    ITR(0x519C0U, 8);
    { /* 0519C0 0519c0 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 += SX16((d0 & 0xFFFF));
    }
L_0519C2: ;
    ITR(0x519C2U, 4);
    { /* 0519C2 0519c2 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519C4: ;
    ITR(0x519C4U, 14);
    { /* 0519C4 0519c4 lsl.w src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 1, (d0 & 0xFFFF), 4, 16);
        SETW(d0, t1);
        }
    }
L_0519C6: ;
    ITR(0x519C6U, 8);
    { /* 0519C6 0519c6 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=6 d=0 v=0) */
        a6 += SX16((d0 & 0xFFFF));
    }
L_0519C8: ;
    ITR(0x519C8U, 16);
    { /* 0519C8 0519c8 movea.l src=EA(d16 r=0 d=4 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x4U));
    }
L_0519CC: ;
    ITR(0x519CCU, 16);
    { /* 0519CC 0519cc movea.l src=EA(d16 r=0 d=24 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 = rd32((a0 + 0x18U));
    }
L_0519D0: ;
    ITR(0x519D0U, 12);
    { /* 0519D0 0519d0 tst.b src=None dst=EA(d16 r=0 d=22 v=0) */
        { uint32_t t = rd8((a0 + 0x16U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519D4: ;
    ITR(0x519D4U, 8);
    { /* 0519D4 0519d4 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_0519D6: ;
    ITR(0x519D6U, 13);
    { /* 0519D6 0519d6 scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=0 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519DA: ;
    ITR(0x519DAU, 16);
    { /* 0519DA 0519da move.l src=EA(d16 r=5 d=4 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x4U));
        d0 = t1;
        FLAGS_LOGIC(t1, 0xFFFFFFFFU, 0x80000000U);
        }
    }
L_0519DE: ;
    ITR(0x519DEU, 8);
    { /* 0519DE 0519de bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051A06;
    }
L_0519E0: ;
    ITR(0x519E0U, 16);
    { /* 0519E0 0519e0 movea.l src=EA(d16 r=5 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a5 + 0x0U));
    }
L_0519E4: ;
    ITR(0x519E4U, 6);
    { /* 0519E4 0519e4 adda.l src=EA(dn r=0 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += d0;
    }
L_0519E6: ;
    ITR(0x519E6U, 10);
    { /* 0519E6 0519e6 lsr.l src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, 1, 32);
        d0 = t1;
        }
    }
L_0519E8: ;
    ITR(0x519E8U, 12);
    { /* 0519E8 0519e8 move.w src=EA(d16 r=5 d=8 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        SETW(d1, t1);
        }
    }
L_0519EC: ;
    ITR(0x519ECU, 4);
    { /* 0519EC 0519ec sub.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_0519EE: ;
    ITR(0x519EEU, 20);
    { /* 0519EE 0519ee move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = a2;
        wr32((a4 + 0x0U), t1);
        }
    }
L_0519F2: ;
    ITR(0x519F2U, 12);
    { /* 0519F2 0519f2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x4U), t1);
        }
    }
L_0519F6: ;
    ITR(0x519F6U, 12);
    { /* 0519F6 0519f6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519FA: ;
    ITR(0x519FAU, 8);
    { /* 0519FA 0519fa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A04;
    }
L_0519FC: ;
    ITR(0x519FCU, 20);
    { /* 0519FC 0519fc move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = a2;
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A00: ;
    ITR(0x51A00U, 12);
    { /* 051A00 051a00 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A04: ;
    ITR(0x51A04U, 10);
    { /* 051A04 051a04 bra src=None dst=None cc=0 */
        goto L_051A24;
    }
L_051A06: ;
    ITR(0x51A06U, 32);
    { /* 051A06 051a06 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A0C: ;
    ITR(0x51A0CU, 16);
    { /* 051A0C 051a0c move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A12: ;
    ITR(0x51A12U, 12);
    { /* 051A12 051a12 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A16: ;
    ITR(0x51A16U, 8);
    { /* 051A16 051a16 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_051A18: ;
    ITR(0x51A18U, 32);
    { /* 051A18 051a18 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A1E: ;
    ITR(0x51A1EU, 16);
    { /* 051A1E 051a1e move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A24: ;
    ITR(0x51A24U, 16);
    { /* 051A24 051a24 subq.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        wr16(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A28: ;
    ITR(0x51A28U, 8);
    { /* 051A28 051a28 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4E;
    }
L_051A2A: ;
    ITR(0x51A2AU, 16);
    { /* 051A2A 051a2a cmpi.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A30: ;
    ITR(0x51A30U, 8);
    { /* 051A30 051a30 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AF4;
    }
L_051A34: ;
    ITR(0x51A34U, 12);
    { /* 051A34 051a34 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A38: ;
    ITR(0x51A38U, 8);
    { /* 051A38 051a38 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A4A;
    }
L_051A3A: ;
    ITR(0x51A3AU, 12);
    { /* 051A3A 051a3a cmpi.b src=EA(imm r=0 d=0 v=83) dst=EA(ind r=1 d=0 v=0) */
        { uint32_t t1 = 0x83U;
        uint32_t t4 = a1;
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051A3E: ;
    ITR(0x51A3EU, 8);
    { /* 051A3E 051a3e bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4A;
    }
L_051A40: ;
    ITR(0x51A40U, 4);
    { /* 051A40 051a40 clr.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, 0);
    }
L_051A42: ;
    ITR(0x51A42U, 8);
    { /* 051A42 051a42 bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051A44: ;
    ITR(0x51A44U, 16);
    { /* 051A44 051a44 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051A4A: ;
    ITR(0x51A4AU, 10);
    { /* 051A4A 051a4a bra src=None dst=None cc=0 */
        goto L_051AE6;
    }
L_051A4E: ;
    ITR(0x51A4EU, 16);
    { /* 051A4E 051a4e clr.b src=None dst=EA(d16 r=0 d=0 v=0) */
        wr8((a0 + 0x0U), 0);
    }
L_051A52: ;
    ITR(0x51A52U, 4);
    { /* 051A52 051a52 moveq.l src=EA(imm r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        d0 = 0x0U;
    }
L_051A54: ;
    ITR(0x51A54U, 8);
    { /* 051A54 051a54 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d0, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051A56: ;
    ITR(0x51A56U, 8);
    { /* 051A56 051a56 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BE6;
    }
L_051A5A: ;
    ITR(0x51A5AU, 12);
    { /* 051A5A 051a5a move.b src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=2 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        wr8((a0 + 0x2U), t1);
        }
    }
L_051A5E: ;
    ITR(0x51A5EU, 12);
    { /* 051A5E 051a5e add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A62: ;
    ITR(0x51A62U, 12);
    { /* 051A62 051a62 add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A66: ;
    ITR(0x51A66U, 16);
    { /* 051A66 051a66 movea.l src=EA(d16 r=0 d=34 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x22U));
    }
L_051A6A: ;
    ITR(0x51A6AU, 8);
    { /* 051A6A 051a6a move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051A6C: ;
    ITR(0x51A6CU, 20);
    { /* 051A6C 051a6c move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051A70: ;
    ITR(0x51A70U, 20);
    { /* 051A70 051a70 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051A76: ;
    ITR(0x51A76U, 4);
    { /* 051A76 051a76 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051A78: ;
    ITR(0x51A78U, 32);
    { /* 051A78 051a78 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A7E: ;
    ITR(0x51A7EU, 20);
    { /* 051A7E 051a7e move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A84: ;
    ITR(0x51A84U, 12);
    { /* 051A84 051a84 move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051A88: ;
    ITR(0x51A88U, 70);
    { /* 051A88 051a88 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051A8A: ;
    ITR(0x51A8AU, 18);
    { /* 051A8A 051a8a lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051A8C: ;
    ITR(0x51A8CU, 12);
    { /* 051A8C 051a8c move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051A90: ;
    ITR(0x51A90U, 12);
    { /* 051A90 051a90 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A94: ;
    ITR(0x51A94U, 8);
    { /* 051A94 051a94 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AA6;
    }
L_051A96: ;
    ITR(0x51A96U, 32);
    { /* 051A96 051a96 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A9C: ;
    ITR(0x51A9CU, 20);
    { /* 051A9C 051a9c move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051AA2: ;
    ITR(0x51AA2U, 12);
    { /* 051AA2 051aa2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051AA6: ;
    ITR(0x51AA6U, 8);
    { /* 051AA6 051aa6 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AAA: ;
    ITR(0x51AAAU, 8);
    { /* 051AAA 051aaa lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051AAE: ;
    ITR(0x51AAEU, 12);
    { /* 051AAE 051aae move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051AB2: ;
    ITR(0x51AB2U, 4);
    { /* 051AB2 051ab2 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051AB4: ;
    ITR(0x51AB4U, 4);
    { /* 051AB4 051ab4 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AB6: ;
    ITR(0x51AB6U, 14);
    { /* 051AB6 051ab6 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051ABA: ;
    ITR(0x51ABAU, 70);
    { /* 051ABA 051aba mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051ABC: ;
    ITR(0x51ABCU, 16);
    { /* 051ABC 051abc lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051ABE: ;
    ITR(0x51ABEU, 12);
    { /* 051ABE 051abe move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051AC2: ;
    ITR(0x51AC2U, 12);
    { /* 051AC2 051ac2 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051AC6: ;
    ITR(0x51AC6U, 8);
    { /* 051AC6 051ac6 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051ACC;
    }
L_051AC8: ;
    ITR(0x51AC8U, 12);
    { /* 051AC8 051ac8 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051ACC: ;
    ITR(0x51ACCU, 13);
    { /* 051ACC 051acc scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=1 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051AD0: ;
    ITR(0x51AD0U, 20);
    { /* 051AD0 051ad0 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=4 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x4U), t1);
        }
    }
L_051AD4: ;
    ITR(0x51AD4U, 20);
    { /* 051AD4 051ad4 move.w src=EA(d16 r=0 d=28 v=0) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = rd16((a0 + 0x1CU));
        wr16((a0 + 0x1EU), t1);
        }
    }
L_051ADA: ;
    ITR(0x51ADAU, 8);
    { /* 051ADA 051ada move.w src=EA(imm r=0 d=0 v=8200) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x8200U;
        SETW(d1, t1);
        }
    }
L_051ADE: ;
    ITR(0x51ADEU, 8);
    { /* 051ADE 051ade bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051AE0: ;
    ITR(0x51AE0U, 16);
    { /* 051AE0 051ae0 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051AE6: ;
    ITR(0x51AE6U, 4);
    { /* 051AE6 051ae6 addq.w src=EA(imm r=0 d=0 v=1) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d7, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFFFU, 0x8000U, 1);
        }
    }
L_051AE8: ;
    ITR(0x51AE8U, 8);
    { /* 051AE8 051ae8 cmp.w src=EA(imm r=0 d=0 v=4) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x4U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051AEC: ;
    ITR(0x51AECU, 10);
    { /* 051AEC 051aec bcc src=None dst=None cc=6 */
        if (COND_6) { BUDGET_CHECK(0x519A0U); goto L_0519A0; }
    }
L_051AF0: ;
    ITR(0x51AF0U, 10);
    { /* 051AF0 051af0 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51912U); goto L_051912; }
    }
L_051AF4: ;
    ITR(0x51AF4U, 12);
    { /* 051AF4 051af4 move.b src=EA(d16 r=0 d=2 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2U));
        SETB(d0, t1);
        }
    }
L_051AF8: ;
    ITR(0x51AF8U, 12);
    { /* 051AF8 051af8 add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051AFC: ;
    ITR(0x51AFCU, 12);
    { /* 051AFC 051afc add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B00: ;
    ITR(0x51B00U, 16);
    { /* 051B00 051b00 movea.l src=EA(d16 r=0 d=16 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x10U));
    }
L_051B04: ;
    ITR(0x51B04U, 8);
    { /* 051B04 051b04 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051B06: ;
    ITR(0x51B06U, 12);
    { /* 051B06 051b06 bclr.l src=EA(imm r=0 d=0 v=7) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (0x7U) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 & ~(1u << t1);
        }
    }
L_051B0A: ;
    ITR(0x51B0AU, 8);
    { /* 051B0A 051b0a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B10;
    }
L_051B0C: ;
    ITR(0x51B0CU, 16);
    { /* 051B0C 051b0c movea.l src=EA(d16 r=0 d=12 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0xCU));
    }
L_051B10: ;
    ITR(0x51B10U, 20);
    { /* 051B10 051b10 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051B14: ;
    ITR(0x51B14U, 4);
    { /* 051B14 051b14 add.b src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B16: ;
    ITR(0x51B16U, 8);
    { /* 051B16 051b16 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B1A: ;
    ITR(0x51B1AU, 8);
    { /* 051B1A 051b1a lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051B1E: ;
    ITR(0x51B1EU, 12);
    { /* 051B1E 051b1e move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051B22: ;
    ITR(0x51B22U, 4);
    { /* 051B22 051b22 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051B24: ;
    ITR(0x51B24U, 4);
    { /* 051B24 051b24 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B26: ;
    ITR(0x51B26U, 14);
    { /* 051B26 051b26 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051B2A: ;
    ITR(0x51B2AU, 70);
    { /* 051B2A 051b2a mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051B2C: ;
    ITR(0x51B2CU, 16);
    { /* 051B2C 051b2c lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051B2E: ;
    ITR(0x51B2EU, 16);
    { /* 051B2E 051b2e btst.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=0 v=0) */
        { uint32_t t1 = (0x1U) & 7;
        uint32_t t3 = (a0 + 0x0U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B34: ;
    ITR(0x51B34U, 8);
    { /* 051B34 051b34 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B50;
    }
L_051B36: ;
    ITR(0x51B36U, 12);
    { /* 051B36 051b36 tst.b src=None dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t = rd8((a0 + 0x15U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B3A: ;
    ITR(0x51B3AU, 8);
    { /* 051B3A 051b3a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B42;
    }
L_051B3C: ;
    ITR(0x51B3CU, 16);
    { /* 051B3C 051b3c subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x15U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        }
    }
L_051B40: ;
    ITR(0x51B40U, 10);
    { /* 051B40 051b40 bra src=None dst=None cc=0 */
        goto L_051B50;
    }
L_051B42: ;
    ITR(0x51B42U, 12);
    { /* 051B42 051b42 move.b src=EA(d16 r=0 d=20 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x14U));
        SETB(d1, t1);
        }
    }
L_051B46: ;
    ITR(0x51B46U, 4);
    { /* 051B46 051b46 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B48: ;
    ITR(0x51B48U, 16);
    { /* 051B48 051b48 add.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=32 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t4 = (a0 + 0x20U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        wr16(t4, t3);
        }
    }
L_051B4C: ;
    ITR(0x51B4CU, 12);
    { /* 051B4C 051b4c sub.w src=EA(d16 r=0 d=32 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a0 + 0x20U));
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B50: ;
    ITR(0x51B50U, 12);
    { /* 051B50 051b50 tst.b src=None dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t = rd8((a0 + 0x1U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B54: ;
    ITR(0x51B54U, 8);
    { /* 051B54 051b54 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA2;
    }
L_051B56: ;
    ITR(0x51B56U, 8);
    { /* 051B56 051b56 bcc src=None dst=None cc=10 */
        if (COND_10) goto L_051B72;
    }
L_051B58: ;
    ITR(0x51B58U, 12);
    { /* 051B58 051b58 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B5C: ;
    ITR(0x51B5CU, 12);
    { /* 051B5C 051b5c add.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B60: ;
    ITR(0x51B60U, 12);
    { /* 051B60 051b60 move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        }
    }
L_051B64: ;
    ITR(0x51B64U, 12);
    { /* 051B64 051b64 cmp.b src=EA(d16 r=0 d=46 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2EU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051B68: ;
    ITR(0x51B68U, 8);
    { /* 051B68 051b68 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B6A: ;
    ITR(0x51B6AU, 20);
    { /* 051B6A 051b6a bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B70: ;
    ITR(0x51B70U, 10);
    { /* 051B70 051b70 bra src=None dst=None cc=0 */
        goto L_051B86;
    }
L_051B72: ;
    ITR(0x51B72U, 12);
    { /* 051B72 051b72 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B76: ;
    ITR(0x51B76U, 12);
    { /* 051B76 051b76 sub.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B7A: ;
    ITR(0x51B7AU, 12);
    { /* 051B7A 051b7a move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051B7E: ;
    ITR(0x51B7EU, 8);
    { /* 051B7E 051b7e bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B80: ;
    ITR(0x51B80U, 20);
    { /* 051B80 051b80 bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B86: ;
    ITR(0x51B86U, 12);
    { /* 051B86 051b86 tst.b src=None dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t = rd8((a0 + 0x2DU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B8A: ;
    ITR(0x51B8AU, 8);
    { /* 051B8A 051b8a bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B92;
    }
L_051B8C: ;
    ITR(0x51B8CU, 20);
    { /* 051B8C 051b8c bchg.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B92: ;
    ITR(0x51B92U, 4);
    { /* 051B92 051b92 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B94: ;
    ITR(0x51B94U, 16);
    { /* 051B94 051b94 btst.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B9A: ;
    ITR(0x51B9AU, 8);
    { /* 051B9A 051b9a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA0;
    }
L_051B9C: ;
    ITR(0x51B9CU, 4);
    { /* 051B9C 051b9c add.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B9E: ;
    ITR(0x51B9EU, 10);
    { /* 051B9E 051b9e bra src=None dst=None cc=0 */
        goto L_051BA2;
    }
L_051BA0: ;
    ITR(0x51BA0U, 4);
    { /* 051BA0 051ba0 sub.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051BA2: ;
    ITR(0x51BA2U, 12);
    { /* 051BA2 051ba2 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051BA6: ;
    ITR(0x51BA6U, 12);
    { /* 051BA6 051ba6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BAA: ;
    ITR(0x51BAAU, 8);
    { /* 051BAA 051baa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BB0;
    }
L_051BAC: ;
    ITR(0x51BACU, 12);
    { /* 051BAC 051bac move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051BB0: ;
    ITR(0x51BB0U, 16);
    { /* 051BB0 051bb0 subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x2BU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BB4: ;
    ITR(0x51BB4U, 8);
    { /* 051BB4 051bb4 bcc src=None dst=None cc=4 */
        if (COND_4) goto L_051BE2;
    }
L_051BB6: ;
    ITR(0x51BB6U, 20);
    { /* 051BB6 051bb6 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051BBC: ;
    ITR(0x51BBCU, 16);
    { /* 051BBC 051bbc movea.l src=EA(d16 r=0 d=38 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x26U));
    }
L_051BC0: ;
    ITR(0x51BC0U, 8);
    { /* 051BC0 051bc0 move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051BC2: ;
    ITR(0x51BC2U, 8);
    { /* 051BC2 051bc2 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BC8;
    }
L_051BC4: ;
    ITR(0x51BC4U, 20);
    { /* 051BC4 051bc4 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051BC8: ;
    ITR(0x51BC8U, 8);
    { /* 051BC8 051bc8 andi.w src=EA(imm r=0 d=0 v=7f) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x7FU;
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_051BCC: ;
    ITR(0x51BCCU, 12);
    { /* 051BCC 051bcc move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051BD0: ;
    ITR(0x51BD0U, 70);
    { /* 051BD0 051bd0 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051BD2: ;
    ITR(0x51BD2U, 18);
    { /* 051BD2 051bd2 lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051BD4: ;
    ITR(0x51BD4U, 12);
    { /* 051BD4 051bd4 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051BD8: ;
    ITR(0x51BD8U, 12);
    { /* 051BD8 051bd8 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BDC: ;
    ITR(0x51BDCU, 8);
    { /* 051BDC 051bdc bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BE2;
    }
L_051BDE: ;
    ITR(0x51BDEU, 12);
    { /* 051BDE 051bde move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051BE2: ;
    ITR(0x51BE2U, 10);
    { /* 051BE2 051be2 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51AE6U); goto L_051AE6; }
    }
L_051BE6: ;
    ITR(0x51BE6U, 8);
    { /* 051BE6 051be6 cmp.b src=EA(imm r=0 d=0 v=e0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xE0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BEA: ;
    ITR(0x51BEAU, 8);
    { /* 051BEA 051bea bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051BFC;
    }
L_051BEC: ;
    ITR(0x51BECU, 8);
    { /* 051BEC 051bec subi.b src=EA(imm r=0 d=0 v=df) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xDFU;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051BF0: ;
    ITR(0x51BF0U, 78);
    { /* 051BF0 051bf0 mulu.w src=EA(pcd r=0 d=0 v=51d82) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * rd16(0x51D82U);
        d0 = t1;
        }
    }
L_051BF4: ;
    ITR(0x51BF4U, 12);
    { /* 051BF4 051bf4 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=28 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a0 + 0x1CU), t1);
        }
    }
L_051BF8: ;
    ITR(0x51BF8U, 10);
    { /* 051BF8 051bf8 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051BFC: ;
    ITR(0x51BFCU, 8);
    { /* 051BFC 051bfc cmp.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C00: ;
    ITR(0x51C00U, 8);
    { /* 051C00 051c00 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C18;
    }
L_051C02: ;
    ITR(0x51C02U, 8);
    { /* 051C02 051c02 subi.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C06: ;
    ITR(0x51C06U, 8);
    { /* 051C06 051c06 lea.l src=EA(pcd r=0 d=0 v=51f3c) dst=EA(an r=5 d=0 v=0) */
        a5 = 0x51F3CU;
    }
L_051C0A: ;
    ITR(0x51C0AU, 74);
    { /* 051C0A 051c0a mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_051C0E: ;
    ITR(0x51C0EU, 8);
    { /* 051C0E 051c0e adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 += SX16((d0 & 0xFFFF));
    }
L_051C10: ;
    ITR(0x51C10U, 20);
    { /* 051C10 051c10 move.l src=EA(an r=5 d=0 v=0) dst=EA(d16 r=0 d=24 v=0) */
        { uint32_t t1 = a5;
        wr32((a0 + 0x18U), t1);
        }
    }
L_051C14: ;
    ITR(0x51C14U, 10);
    { /* 051C14 051c14 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C18: ;
    ITR(0x51C18U, 8);
    { /* 051C18 051c18 cmp.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C1C: ;
    ITR(0x51C1CU, 8);
    { /* 051C1C 051c1c bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C3C;
    }
L_051C1E: ;
    ITR(0x51C1EU, 8);
    { /* 051C1E 051c1e subi.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C22: ;
    ITR(0x51C22U, 4);
    { /* 051C22 051c22 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C24: ;
    ITR(0x51C24U, 8);
    { /* 051C24 051c24 lea.l src=EA(pcd r=0 d=0 v=52f1e) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x52F1EU;
    }
L_051C28: ;
    ITR(0x51C28U, 14);
    { /* 051C28 051c28 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C2C: ;
    ITR(0x51C2CU, 6);
    { /* 051C2C 051c2c adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C2E: ;
    ITR(0x51C2EU, 20);
    { /* 051C2E 051c2e move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=34 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x22U), t1);
        }
    }
L_051C32: ;
    ITR(0x51C32U, 20);
    { /* 051C32 051c32 move.b src=EA(d16 r=2 d=-1 v=0) dst=EA(d16 r=0 d=42 v=0) */
        { uint32_t t1 = rd8((a2 + 0xFFFFFFFFU));
        wr8((a0 + 0x2AU), t1);
        }
    }
L_051C38: ;
    ITR(0x51C38U, 10);
    { /* 051C38 051c38 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C3C: ;
    ITR(0x51C3CU, 8);
    { /* 051C3C 051c3c cmp.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C40: ;
    ITR(0x51C40U, 8);
    { /* 051C40 051c40 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C5E;
    }
L_051C42: ;
    ITR(0x51C42U, 8);
    { /* 051C42 051c42 subi.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C46: ;
    ITR(0x51C46U, 4);
    { /* 051C46 051c46 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C48: ;
    ITR(0x51C48U, 8);
    { /* 051C48 051c48 lea.l src=EA(pcd r=0 d=0 v=51eea) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51EEAU;
    }
L_051C4C: ;
    ITR(0x51C4CU, 14);
    { /* 051C4C 051c4c movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C50: ;
    ITR(0x51C50U, 6);
    { /* 051C50 051c50 adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C52: ;
    ITR(0x51C52U, 20);
    { /* 051C52 051c52 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=12 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0xCU), t1);
        }
    }
L_051C56: ;
    ITR(0x51C56U, 20);
    { /* 051C56 051c56 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051C5A: ;
    ITR(0x51C5AU, 10);
    { /* 051C5A 051c5a bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C5E: ;
    ITR(0x51C5EU, 4);
    { /* 051C5E 051c5e add.b src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_051C60: ;
    ITR(0x51C60U, 8);
    { /* 051C60 051c60 lea.l src=EA(pcd r=0 d=0 v=51d6a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51D6AU;
    }
L_051C64: ;
    ITR(0x51C64U, 14);
    { /* 051C64 051c64 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C68: ;
    ITR(0x51C68U, 14);
    { /* 051C68 051c68 jmp src=EA(idx r=3 d=0 v=0) dst=None */
        { call_dynamic((a3 + 0x0U + ((uint32_t)(int32_t)(int16_t)a2))); return; }
    }
L_051C92: ;
    ITR(0x51C92U, 16);
    { /* 051C92 051c92 clr.w src=None dst=EA(d16 r=0 d=32 v=0) */
        wr16((a0 + 0x20U), 0);
    }
L_051C96: ;
    ITR(0x51C96U, 16);
    { /* 051C96 051c96 move.b src=EA(post r=1 d=0 v=0) dst=EA(d16 r=0 d=20 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        wr8((a0 + 0x14U), t1);
        }
    }
L_051C9A: ;
    ITR(0x51C9AU, 16);
    { /* 051C9A 051c9a move.b src=EA(post r=1 d=0 v=0) dst=EA(d16 r=0 d=21 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        wr8((a0 + 0x15U), t1);
        }
    }
L_051C9E: ;
    ITR(0x51C9EU, 20);
    { /* 051C9E 051c9e bset.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=0 v=0) */
        { uint32_t t1 = (0x1U) & 7;
        uint32_t t3 = (a0 + 0x0U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 | (1u << t1));
        }
    }
L_051CA4: ;
    ITR(0x51CA4U, 10);
    { /* 051CA4 051ca4 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_052A44: ;
    ITR(0x52A44U, 8);
    { /* 052A44 052a44 lea.l src=EA(pcd r=0 d=0 v=52b9c) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52B9CU;
    }
L_052A48: ;
    ITR(0x52A48U, 12);
    { /* 052A48 052a48 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A4C: ;
    ITR(0x52A4CU, 8);
    { /* 052A4C 052a4c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A5C;
    }
L_052A4E: ;
    ITR(0x52A4EU, 12);
    { /* 052A4E 052a4e lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF000U;
    }
L_052A54: ;
    ITR(0x52A54U, 4);
    { /* 052A54 052a54 moveq.l src=EA(imm r=0 d=0 v=1) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x1U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A56: ;
    ITR(0x52A56U, 8);
    { /* 052A56 052a56 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_052A5A: ;
    ITR(0x52A5AU, 18);
    { /* 052A5A 052a5a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A5CU);
    }
L_052A5C: ;
    ITR(0x52A5CU, 8);
    { /* 052A5C 052a5c lea.l src=EA(pcd r=0 d=0 v=52bc0) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BC0U;
    }
L_052A60: ;
    ITR(0x52A60U, 12);
    { /* 052A60 052a60 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A64: ;
    ITR(0x52A64U, 8);
    { /* 052A64 052a64 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A74;
    }
L_052A66: ;
    ITR(0x52A66U, 12);
    { /* 052A66 052a66 lea.l src=EA(absl r=0 d=0 v=dff010) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF010U;
    }
L_052A6C: ;
    ITR(0x52A6CU, 4);
    { /* 052A6C 052a6c moveq.l src=EA(imm r=0 d=0 v=2) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x2U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A6E: ;
    ITR(0x52A6EU, 8);
    { /* 052A6E 052a6e lea.l src=EA(pcd r=0 d=0 v=52c3a) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C3AU;
    }
L_052A72: ;
    ITR(0x52A72U, 18);
    { /* 052A72 052a72 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A74U);
    }
L_052A74: ;
    ITR(0x52A74U, 8);
    { /* 052A74 052a74 lea.l src=EA(pcd r=0 d=0 v=52be4) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BE4U;
    }
L_052A78: ;
    ITR(0x52A78U, 12);
    { /* 052A78 052a78 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A7C: ;
    ITR(0x52A7CU, 8);
    { /* 052A7C 052a7c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A8C;
    }
L_052A7E: ;
    ITR(0x52A7EU, 12);
    { /* 052A7E 052a7e lea.l src=EA(absl r=0 d=0 v=dff020) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF020U;
    }
L_052A84: ;
    ITR(0x52A84U, 4);
    { /* 052A84 052a84 moveq.l src=EA(imm r=0 d=0 v=4) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x4U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A86: ;
    ITR(0x52A86U, 8);
    { /* 052A86 052a86 lea.l src=EA(pcd r=0 d=0 v=52c46) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C46U;
    }
L_052A8A: ;
    ITR(0x52A8AU, 18);
    { /* 052A8A 052a8a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A8CU);
    }
L_052A8C: ;
    ITR(0x52A8CU, 8);
    { /* 052A8C 052a8c lea.l src=EA(pcd r=0 d=0 v=52c08) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52C08U;
    }
L_052A90: ;
    ITR(0x52A90U, 12);
    { /* 052A90 052a90 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A94: ;
    ITR(0x52A94U, 8);
    { /* 052A94 052a94 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052AA4;
    }
L_052A96: ;
    ITR(0x52A96U, 12);
    { /* 052A96 052a96 lea.l src=EA(absl r=0 d=0 v=dff030) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF030U;
    }
L_052A9C: ;
    ITR(0x52A9CU, 4);
    { /* 052A9C 052a9c moveq.l src=EA(imm r=0 d=0 v=8) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x8U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A9E: ;
    ITR(0x52A9EU, 8);
    { /* 052A9E 052a9e lea.l src=EA(pcd r=0 d=0 v=52c52) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C52U;
    }
L_052AA2: ;
    ITR(0x52AA2U, 18);
    { /* 052AA2 052aa2 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52AA4U);
    }
L_052AA4: ;
    ITR(0x52AA4U, 16);
    { /* 052AA4 052aa4 rts src=None dst=None */
        RTS();
    }
}

void dwam_051CA8(void)
{
    FN_ENTER(0x51CA8U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51912U: goto L_051912;
        case 0x519A0U: goto L_0519A0;
        case 0x519A4U: goto L_0519A4;
        case 0x519A6U: goto L_0519A6;
        case 0x519AAU: goto L_0519AA;
        case 0x519ACU: goto L_0519AC;
        case 0x519B0U: goto L_0519B0;
        case 0x519B6U: goto L_0519B6;
        case 0x519BAU: goto L_0519BA;
        case 0x519BCU: goto L_0519BC;
        case 0x519C0U: goto L_0519C0;
        case 0x519C2U: goto L_0519C2;
        case 0x519C4U: goto L_0519C4;
        case 0x519C6U: goto L_0519C6;
        case 0x519C8U: goto L_0519C8;
        case 0x519CCU: goto L_0519CC;
        case 0x519D0U: goto L_0519D0;
        case 0x519D4U: goto L_0519D4;
        case 0x519D6U: goto L_0519D6;
        case 0x519DAU: goto L_0519DA;
        case 0x519DEU: goto L_0519DE;
        case 0x519E0U: goto L_0519E0;
        case 0x519E4U: goto L_0519E4;
        case 0x519E6U: goto L_0519E6;
        case 0x519E8U: goto L_0519E8;
        case 0x519ECU: goto L_0519EC;
        case 0x519EEU: goto L_0519EE;
        case 0x519F2U: goto L_0519F2;
        case 0x519F6U: goto L_0519F6;
        case 0x519FAU: goto L_0519FA;
        case 0x519FCU: goto L_0519FC;
        case 0x51A00U: goto L_051A00;
        case 0x51A04U: goto L_051A04;
        case 0x51A06U: goto L_051A06;
        case 0x51A0CU: goto L_051A0C;
        case 0x51A12U: goto L_051A12;
        case 0x51A16U: goto L_051A16;
        case 0x51A18U: goto L_051A18;
        case 0x51A1EU: goto L_051A1E;
        case 0x51A24U: goto L_051A24;
        case 0x51A28U: goto L_051A28;
        case 0x51A2AU: goto L_051A2A;
        case 0x51A30U: goto L_051A30;
        case 0x51A34U: goto L_051A34;
        case 0x51A38U: goto L_051A38;
        case 0x51A3AU: goto L_051A3A;
        case 0x51A3EU: goto L_051A3E;
        case 0x51A40U: goto L_051A40;
        case 0x51A42U: goto L_051A42;
        case 0x51A44U: goto L_051A44;
        case 0x51A4AU: goto L_051A4A;
        case 0x51A4EU: goto L_051A4E;
        case 0x51A52U: goto L_051A52;
        case 0x51A54U: goto L_051A54;
        case 0x51A56U: goto L_051A56;
        case 0x51A5AU: goto L_051A5A;
        case 0x51A5EU: goto L_051A5E;
        case 0x51A62U: goto L_051A62;
        case 0x51A66U: goto L_051A66;
        case 0x51A6AU: goto L_051A6A;
        case 0x51A6CU: goto L_051A6C;
        case 0x51A70U: goto L_051A70;
        case 0x51A76U: goto L_051A76;
        case 0x51A78U: goto L_051A78;
        case 0x51A7EU: goto L_051A7E;
        case 0x51A84U: goto L_051A84;
        case 0x51A88U: goto L_051A88;
        case 0x51A8AU: goto L_051A8A;
        case 0x51A8CU: goto L_051A8C;
        case 0x51A90U: goto L_051A90;
        case 0x51A94U: goto L_051A94;
        case 0x51A96U: goto L_051A96;
        case 0x51A9CU: goto L_051A9C;
        case 0x51AA2U: goto L_051AA2;
        case 0x51AA6U: goto L_051AA6;
        case 0x51AAAU: goto L_051AAA;
        case 0x51AAEU: goto L_051AAE;
        case 0x51AB2U: goto L_051AB2;
        case 0x51AB4U: goto L_051AB4;
        case 0x51AB6U: goto L_051AB6;
        case 0x51ABAU: goto L_051ABA;
        case 0x51ABCU: goto L_051ABC;
        case 0x51ABEU: goto L_051ABE;
        case 0x51AC2U: goto L_051AC2;
        case 0x51AC6U: goto L_051AC6;
        case 0x51AC8U: goto L_051AC8;
        case 0x51ACCU: goto L_051ACC;
        case 0x51AD0U: goto L_051AD0;
        case 0x51AD4U: goto L_051AD4;
        case 0x51ADAU: goto L_051ADA;
        case 0x51ADEU: goto L_051ADE;
        case 0x51AE0U: goto L_051AE0;
        case 0x51AE6U: goto L_051AE6;
        case 0x51AE8U: goto L_051AE8;
        case 0x51AECU: goto L_051AEC;
        case 0x51AF0U: goto L_051AF0;
        case 0x51AF4U: goto L_051AF4;
        case 0x51AF8U: goto L_051AF8;
        case 0x51AFCU: goto L_051AFC;
        case 0x51B00U: goto L_051B00;
        case 0x51B04U: goto L_051B04;
        case 0x51B06U: goto L_051B06;
        case 0x51B0AU: goto L_051B0A;
        case 0x51B0CU: goto L_051B0C;
        case 0x51B10U: goto L_051B10;
        case 0x51B14U: goto L_051B14;
        case 0x51B16U: goto L_051B16;
        case 0x51B1AU: goto L_051B1A;
        case 0x51B1EU: goto L_051B1E;
        case 0x51B22U: goto L_051B22;
        case 0x51B24U: goto L_051B24;
        case 0x51B26U: goto L_051B26;
        case 0x51B2AU: goto L_051B2A;
        case 0x51B2CU: goto L_051B2C;
        case 0x51B2EU: goto L_051B2E;
        case 0x51B34U: goto L_051B34;
        case 0x51B36U: goto L_051B36;
        case 0x51B3AU: goto L_051B3A;
        case 0x51B3CU: goto L_051B3C;
        case 0x51B40U: goto L_051B40;
        case 0x51B42U: goto L_051B42;
        case 0x51B46U: goto L_051B46;
        case 0x51B48U: goto L_051B48;
        case 0x51B4CU: goto L_051B4C;
        case 0x51B50U: goto L_051B50;
        case 0x51B54U: goto L_051B54;
        case 0x51B56U: goto L_051B56;
        case 0x51B58U: goto L_051B58;
        case 0x51B5CU: goto L_051B5C;
        case 0x51B60U: goto L_051B60;
        case 0x51B64U: goto L_051B64;
        case 0x51B68U: goto L_051B68;
        case 0x51B6AU: goto L_051B6A;
        case 0x51B70U: goto L_051B70;
        case 0x51B72U: goto L_051B72;
        case 0x51B76U: goto L_051B76;
        case 0x51B7AU: goto L_051B7A;
        case 0x51B7EU: goto L_051B7E;
        case 0x51B80U: goto L_051B80;
        case 0x51B86U: goto L_051B86;
        case 0x51B8AU: goto L_051B8A;
        case 0x51B8CU: goto L_051B8C;
        case 0x51B92U: goto L_051B92;
        case 0x51B94U: goto L_051B94;
        case 0x51B9AU: goto L_051B9A;
        case 0x51B9CU: goto L_051B9C;
        case 0x51B9EU: goto L_051B9E;
        case 0x51BA0U: goto L_051BA0;
        case 0x51BA2U: goto L_051BA2;
        case 0x51BA6U: goto L_051BA6;
        case 0x51BAAU: goto L_051BAA;
        case 0x51BACU: goto L_051BAC;
        case 0x51BB0U: goto L_051BB0;
        case 0x51BB4U: goto L_051BB4;
        case 0x51BB6U: goto L_051BB6;
        case 0x51BBCU: goto L_051BBC;
        case 0x51BC0U: goto L_051BC0;
        case 0x51BC2U: goto L_051BC2;
        case 0x51BC4U: goto L_051BC4;
        case 0x51BC8U: goto L_051BC8;
        case 0x51BCCU: goto L_051BCC;
        case 0x51BD0U: goto L_051BD0;
        case 0x51BD2U: goto L_051BD2;
        case 0x51BD4U: goto L_051BD4;
        case 0x51BD8U: goto L_051BD8;
        case 0x51BDCU: goto L_051BDC;
        case 0x51BDEU: goto L_051BDE;
        case 0x51BE2U: goto L_051BE2;
        case 0x51BE6U: goto L_051BE6;
        case 0x51BEAU: goto L_051BEA;
        case 0x51BECU: goto L_051BEC;
        case 0x51BF0U: goto L_051BF0;
        case 0x51BF4U: goto L_051BF4;
        case 0x51BF8U: goto L_051BF8;
        case 0x51BFCU: goto L_051BFC;
        case 0x51C00U: goto L_051C00;
        case 0x51C02U: goto L_051C02;
        case 0x51C06U: goto L_051C06;
        case 0x51C0AU: goto L_051C0A;
        case 0x51C0EU: goto L_051C0E;
        case 0x51C10U: goto L_051C10;
        case 0x51C14U: goto L_051C14;
        case 0x51C18U: goto L_051C18;
        case 0x51C1CU: goto L_051C1C;
        case 0x51C1EU: goto L_051C1E;
        case 0x51C22U: goto L_051C22;
        case 0x51C24U: goto L_051C24;
        case 0x51C28U: goto L_051C28;
        case 0x51C2CU: goto L_051C2C;
        case 0x51C2EU: goto L_051C2E;
        case 0x51C32U: goto L_051C32;
        case 0x51C38U: goto L_051C38;
        case 0x51C3CU: goto L_051C3C;
        case 0x51C40U: goto L_051C40;
        case 0x51C42U: goto L_051C42;
        case 0x51C46U: goto L_051C46;
        case 0x51C48U: goto L_051C48;
        case 0x51C4CU: goto L_051C4C;
        case 0x51C50U: goto L_051C50;
        case 0x51C52U: goto L_051C52;
        case 0x51C56U: goto L_051C56;
        case 0x51C5AU: goto L_051C5A;
        case 0x51C5EU: goto L_051C5E;
        case 0x51C60U: goto L_051C60;
        case 0x51C64U: goto L_051C64;
        case 0x51C68U: goto L_051C68;
        case 0x51CAEU: goto L_051CAE;
        case 0x51CB2U: goto L_051CB2;
        case 0x51CB8U: goto L_051CB8;
        case 0x51CBEU: goto L_051CBE;
        case 0x51CC2U: goto L_051CC2;
        case 0x51CC4U: goto L_051CC4;
        case 0x51CCAU: goto L_051CCA;
        case 0x51CD0U: goto L_051CD0;
        case 0x52A44U: goto L_052A44;
        case 0x52A48U: goto L_052A48;
        case 0x52A4CU: goto L_052A4C;
        case 0x52A4EU: goto L_052A4E;
        case 0x52A54U: goto L_052A54;
        case 0x52A56U: goto L_052A56;
        case 0x52A5AU: goto L_052A5A;
        case 0x52A5CU: goto L_052A5C;
        case 0x52A60U: goto L_052A60;
        case 0x52A64U: goto L_052A64;
        case 0x52A66U: goto L_052A66;
        case 0x52A6CU: goto L_052A6C;
        case 0x52A6EU: goto L_052A6E;
        case 0x52A72U: goto L_052A72;
        case 0x52A74U: goto L_052A74;
        case 0x52A78U: goto L_052A78;
        case 0x52A7CU: goto L_052A7C;
        case 0x52A7EU: goto L_052A7E;
        case 0x52A84U: goto L_052A84;
        case 0x52A86U: goto L_052A86;
        case 0x52A8AU: goto L_052A8A;
        case 0x52A8CU: goto L_052A8C;
        case 0x52A90U: goto L_052A90;
        case 0x52A94U: goto L_052A94;
        case 0x52A96U: goto L_052A96;
        case 0x52A9CU: goto L_052A9C;
        case 0x52A9EU: goto L_052A9E;
        case 0x52AA2U: goto L_052AA2;
        case 0x52AA4U: goto L_052AA4;
        default: break; } }
    goto L_051CA8;
L_051912: ;
    ITR(0x51912U, 10);
    { /* 051912 051912 bra src=None dst=None cc=0 */
        goto L_052A44;
    }
L_0519A0: ;
    ITR(0x519A0U, 8);
    { /* 0519A0 0519a0 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_0519A4: ;
    ITR(0x519A4U, 4);
    { /* 0519A4 0519a4 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519A6: ;
    ITR(0x519A6U, 74);
    { /* 0519A6 0519a6 mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_0519AA: ;
    ITR(0x519AAU, 8);
    { /* 0519AA 0519aa adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=4 d=0 v=0) */
        a4 += SX16((d0 & 0xFFFF));
    }
L_0519AC: ;
    ITR(0x519ACU, 13);
    { /* 0519AC 0519ac scc.b src=None dst=EA(d16 r=4 d=10 v=0) cc=0 */
        { uint32_t t2 = (a4 + 0xAU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519B0: ;
    ITR(0x519B0U, 12);
    { /* 0519B0 0519b0 lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=6 d=0 v=0) */
        a6 = 0xDFF000U;
    }
L_0519B6: ;
    ITR(0x519B6U, 8);
    { /* 0519B6 0519b6 move.w src=EA(imm r=0 d=0 v=30) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x30U;
        SETW(d0, t1);
        }
    }
L_0519BA: ;
    ITR(0x519BAU, 70);
    { /* 0519BA 0519ba mulu.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d7 & 0xFFFF);
        d0 = t1;
        }
    }
L_0519BC: ;
    ITR(0x519BCU, 8);
    { /* 0519BC 0519bc lea.l src=EA(pcd r=0 d=0 v=51d9a) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x51D9AU;
    }
L_0519C0: ;
    ITR(0x519C0U, 8);
    { /* 0519C0 0519c0 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 += SX16((d0 & 0xFFFF));
    }
L_0519C2: ;
    ITR(0x519C2U, 4);
    { /* 0519C2 0519c2 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519C4: ;
    ITR(0x519C4U, 14);
    { /* 0519C4 0519c4 lsl.w src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 1, (d0 & 0xFFFF), 4, 16);
        SETW(d0, t1);
        }
    }
L_0519C6: ;
    ITR(0x519C6U, 8);
    { /* 0519C6 0519c6 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=6 d=0 v=0) */
        a6 += SX16((d0 & 0xFFFF));
    }
L_0519C8: ;
    ITR(0x519C8U, 16);
    { /* 0519C8 0519c8 movea.l src=EA(d16 r=0 d=4 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x4U));
    }
L_0519CC: ;
    ITR(0x519CCU, 16);
    { /* 0519CC 0519cc movea.l src=EA(d16 r=0 d=24 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 = rd32((a0 + 0x18U));
    }
L_0519D0: ;
    ITR(0x519D0U, 12);
    { /* 0519D0 0519d0 tst.b src=None dst=EA(d16 r=0 d=22 v=0) */
        { uint32_t t = rd8((a0 + 0x16U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519D4: ;
    ITR(0x519D4U, 8);
    { /* 0519D4 0519d4 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_0519D6: ;
    ITR(0x519D6U, 13);
    { /* 0519D6 0519d6 scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=0 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519DA: ;
    ITR(0x519DAU, 16);
    { /* 0519DA 0519da move.l src=EA(d16 r=5 d=4 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x4U));
        d0 = t1;
        FLAGS_LOGIC(t1, 0xFFFFFFFFU, 0x80000000U);
        }
    }
L_0519DE: ;
    ITR(0x519DEU, 8);
    { /* 0519DE 0519de bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051A06;
    }
L_0519E0: ;
    ITR(0x519E0U, 16);
    { /* 0519E0 0519e0 movea.l src=EA(d16 r=5 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a5 + 0x0U));
    }
L_0519E4: ;
    ITR(0x519E4U, 6);
    { /* 0519E4 0519e4 adda.l src=EA(dn r=0 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += d0;
    }
L_0519E6: ;
    ITR(0x519E6U, 10);
    { /* 0519E6 0519e6 lsr.l src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, 1, 32);
        d0 = t1;
        }
    }
L_0519E8: ;
    ITR(0x519E8U, 12);
    { /* 0519E8 0519e8 move.w src=EA(d16 r=5 d=8 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        SETW(d1, t1);
        }
    }
L_0519EC: ;
    ITR(0x519ECU, 4);
    { /* 0519EC 0519ec sub.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_0519EE: ;
    ITR(0x519EEU, 20);
    { /* 0519EE 0519ee move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = a2;
        wr32((a4 + 0x0U), t1);
        }
    }
L_0519F2: ;
    ITR(0x519F2U, 12);
    { /* 0519F2 0519f2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x4U), t1);
        }
    }
L_0519F6: ;
    ITR(0x519F6U, 12);
    { /* 0519F6 0519f6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519FA: ;
    ITR(0x519FAU, 8);
    { /* 0519FA 0519fa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A04;
    }
L_0519FC: ;
    ITR(0x519FCU, 20);
    { /* 0519FC 0519fc move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = a2;
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A00: ;
    ITR(0x51A00U, 12);
    { /* 051A00 051a00 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A04: ;
    ITR(0x51A04U, 10);
    { /* 051A04 051a04 bra src=None dst=None cc=0 */
        goto L_051A24;
    }
L_051A06: ;
    ITR(0x51A06U, 32);
    { /* 051A06 051a06 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A0C: ;
    ITR(0x51A0CU, 16);
    { /* 051A0C 051a0c move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A12: ;
    ITR(0x51A12U, 12);
    { /* 051A12 051a12 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A16: ;
    ITR(0x51A16U, 8);
    { /* 051A16 051a16 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_051A18: ;
    ITR(0x51A18U, 32);
    { /* 051A18 051a18 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A1E: ;
    ITR(0x51A1EU, 16);
    { /* 051A1E 051a1e move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A24: ;
    ITR(0x51A24U, 16);
    { /* 051A24 051a24 subq.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        wr16(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A28: ;
    ITR(0x51A28U, 8);
    { /* 051A28 051a28 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4E;
    }
L_051A2A: ;
    ITR(0x51A2AU, 16);
    { /* 051A2A 051a2a cmpi.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A30: ;
    ITR(0x51A30U, 8);
    { /* 051A30 051a30 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AF4;
    }
L_051A34: ;
    ITR(0x51A34U, 12);
    { /* 051A34 051a34 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A38: ;
    ITR(0x51A38U, 8);
    { /* 051A38 051a38 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A4A;
    }
L_051A3A: ;
    ITR(0x51A3AU, 12);
    { /* 051A3A 051a3a cmpi.b src=EA(imm r=0 d=0 v=83) dst=EA(ind r=1 d=0 v=0) */
        { uint32_t t1 = 0x83U;
        uint32_t t4 = a1;
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051A3E: ;
    ITR(0x51A3EU, 8);
    { /* 051A3E 051a3e bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4A;
    }
L_051A40: ;
    ITR(0x51A40U, 4);
    { /* 051A40 051a40 clr.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, 0);
    }
L_051A42: ;
    ITR(0x51A42U, 8);
    { /* 051A42 051a42 bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051A44: ;
    ITR(0x51A44U, 16);
    { /* 051A44 051a44 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051A4A: ;
    ITR(0x51A4AU, 10);
    { /* 051A4A 051a4a bra src=None dst=None cc=0 */
        goto L_051AE6;
    }
L_051A4E: ;
    ITR(0x51A4EU, 16);
    { /* 051A4E 051a4e clr.b src=None dst=EA(d16 r=0 d=0 v=0) */
        wr8((a0 + 0x0U), 0);
    }
L_051A52: ;
    ITR(0x51A52U, 4);
    { /* 051A52 051a52 moveq.l src=EA(imm r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        d0 = 0x0U;
    }
L_051A54: ;
    ITR(0x51A54U, 8);
    { /* 051A54 051a54 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d0, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051A56: ;
    ITR(0x51A56U, 8);
    { /* 051A56 051a56 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BE6;
    }
L_051A5A: ;
    ITR(0x51A5AU, 12);
    { /* 051A5A 051a5a move.b src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=2 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        wr8((a0 + 0x2U), t1);
        }
    }
L_051A5E: ;
    ITR(0x51A5EU, 12);
    { /* 051A5E 051a5e add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A62: ;
    ITR(0x51A62U, 12);
    { /* 051A62 051a62 add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A66: ;
    ITR(0x51A66U, 16);
    { /* 051A66 051a66 movea.l src=EA(d16 r=0 d=34 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x22U));
    }
L_051A6A: ;
    ITR(0x51A6AU, 8);
    { /* 051A6A 051a6a move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051A6C: ;
    ITR(0x51A6CU, 20);
    { /* 051A6C 051a6c move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051A70: ;
    ITR(0x51A70U, 20);
    { /* 051A70 051a70 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051A76: ;
    ITR(0x51A76U, 4);
    { /* 051A76 051a76 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051A78: ;
    ITR(0x51A78U, 32);
    { /* 051A78 051a78 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A7E: ;
    ITR(0x51A7EU, 20);
    { /* 051A7E 051a7e move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A84: ;
    ITR(0x51A84U, 12);
    { /* 051A84 051a84 move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051A88: ;
    ITR(0x51A88U, 70);
    { /* 051A88 051a88 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051A8A: ;
    ITR(0x51A8AU, 18);
    { /* 051A8A 051a8a lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051A8C: ;
    ITR(0x51A8CU, 12);
    { /* 051A8C 051a8c move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051A90: ;
    ITR(0x51A90U, 12);
    { /* 051A90 051a90 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A94: ;
    ITR(0x51A94U, 8);
    { /* 051A94 051a94 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AA6;
    }
L_051A96: ;
    ITR(0x51A96U, 32);
    { /* 051A96 051a96 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A9C: ;
    ITR(0x51A9CU, 20);
    { /* 051A9C 051a9c move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051AA2: ;
    ITR(0x51AA2U, 12);
    { /* 051AA2 051aa2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051AA6: ;
    ITR(0x51AA6U, 8);
    { /* 051AA6 051aa6 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AAA: ;
    ITR(0x51AAAU, 8);
    { /* 051AAA 051aaa lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051AAE: ;
    ITR(0x51AAEU, 12);
    { /* 051AAE 051aae move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051AB2: ;
    ITR(0x51AB2U, 4);
    { /* 051AB2 051ab2 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051AB4: ;
    ITR(0x51AB4U, 4);
    { /* 051AB4 051ab4 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AB6: ;
    ITR(0x51AB6U, 14);
    { /* 051AB6 051ab6 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051ABA: ;
    ITR(0x51ABAU, 70);
    { /* 051ABA 051aba mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051ABC: ;
    ITR(0x51ABCU, 16);
    { /* 051ABC 051abc lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051ABE: ;
    ITR(0x51ABEU, 12);
    { /* 051ABE 051abe move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051AC2: ;
    ITR(0x51AC2U, 12);
    { /* 051AC2 051ac2 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051AC6: ;
    ITR(0x51AC6U, 8);
    { /* 051AC6 051ac6 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051ACC;
    }
L_051AC8: ;
    ITR(0x51AC8U, 12);
    { /* 051AC8 051ac8 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051ACC: ;
    ITR(0x51ACCU, 13);
    { /* 051ACC 051acc scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=1 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051AD0: ;
    ITR(0x51AD0U, 20);
    { /* 051AD0 051ad0 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=4 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x4U), t1);
        }
    }
L_051AD4: ;
    ITR(0x51AD4U, 20);
    { /* 051AD4 051ad4 move.w src=EA(d16 r=0 d=28 v=0) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = rd16((a0 + 0x1CU));
        wr16((a0 + 0x1EU), t1);
        }
    }
L_051ADA: ;
    ITR(0x51ADAU, 8);
    { /* 051ADA 051ada move.w src=EA(imm r=0 d=0 v=8200) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x8200U;
        SETW(d1, t1);
        }
    }
L_051ADE: ;
    ITR(0x51ADEU, 8);
    { /* 051ADE 051ade bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051AE0: ;
    ITR(0x51AE0U, 16);
    { /* 051AE0 051ae0 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051AE6: ;
    ITR(0x51AE6U, 4);
    { /* 051AE6 051ae6 addq.w src=EA(imm r=0 d=0 v=1) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d7, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFFFU, 0x8000U, 1);
        }
    }
L_051AE8: ;
    ITR(0x51AE8U, 8);
    { /* 051AE8 051ae8 cmp.w src=EA(imm r=0 d=0 v=4) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x4U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051AEC: ;
    ITR(0x51AECU, 10);
    { /* 051AEC 051aec bcc src=None dst=None cc=6 */
        if (COND_6) { BUDGET_CHECK(0x519A0U); goto L_0519A0; }
    }
L_051AF0: ;
    ITR(0x51AF0U, 10);
    { /* 051AF0 051af0 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51912U); goto L_051912; }
    }
L_051AF4: ;
    ITR(0x51AF4U, 12);
    { /* 051AF4 051af4 move.b src=EA(d16 r=0 d=2 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2U));
        SETB(d0, t1);
        }
    }
L_051AF8: ;
    ITR(0x51AF8U, 12);
    { /* 051AF8 051af8 add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051AFC: ;
    ITR(0x51AFCU, 12);
    { /* 051AFC 051afc add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B00: ;
    ITR(0x51B00U, 16);
    { /* 051B00 051b00 movea.l src=EA(d16 r=0 d=16 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x10U));
    }
L_051B04: ;
    ITR(0x51B04U, 8);
    { /* 051B04 051b04 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051B06: ;
    ITR(0x51B06U, 12);
    { /* 051B06 051b06 bclr.l src=EA(imm r=0 d=0 v=7) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (0x7U) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 & ~(1u << t1);
        }
    }
L_051B0A: ;
    ITR(0x51B0AU, 8);
    { /* 051B0A 051b0a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B10;
    }
L_051B0C: ;
    ITR(0x51B0CU, 16);
    { /* 051B0C 051b0c movea.l src=EA(d16 r=0 d=12 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0xCU));
    }
L_051B10: ;
    ITR(0x51B10U, 20);
    { /* 051B10 051b10 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051B14: ;
    ITR(0x51B14U, 4);
    { /* 051B14 051b14 add.b src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B16: ;
    ITR(0x51B16U, 8);
    { /* 051B16 051b16 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B1A: ;
    ITR(0x51B1AU, 8);
    { /* 051B1A 051b1a lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051B1E: ;
    ITR(0x51B1EU, 12);
    { /* 051B1E 051b1e move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051B22: ;
    ITR(0x51B22U, 4);
    { /* 051B22 051b22 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051B24: ;
    ITR(0x51B24U, 4);
    { /* 051B24 051b24 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B26: ;
    ITR(0x51B26U, 14);
    { /* 051B26 051b26 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051B2A: ;
    ITR(0x51B2AU, 70);
    { /* 051B2A 051b2a mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051B2C: ;
    ITR(0x51B2CU, 16);
    { /* 051B2C 051b2c lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051B2E: ;
    ITR(0x51B2EU, 16);
    { /* 051B2E 051b2e btst.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=0 v=0) */
        { uint32_t t1 = (0x1U) & 7;
        uint32_t t3 = (a0 + 0x0U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B34: ;
    ITR(0x51B34U, 8);
    { /* 051B34 051b34 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B50;
    }
L_051B36: ;
    ITR(0x51B36U, 12);
    { /* 051B36 051b36 tst.b src=None dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t = rd8((a0 + 0x15U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B3A: ;
    ITR(0x51B3AU, 8);
    { /* 051B3A 051b3a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B42;
    }
L_051B3C: ;
    ITR(0x51B3CU, 16);
    { /* 051B3C 051b3c subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x15U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        }
    }
L_051B40: ;
    ITR(0x51B40U, 10);
    { /* 051B40 051b40 bra src=None dst=None cc=0 */
        goto L_051B50;
    }
L_051B42: ;
    ITR(0x51B42U, 12);
    { /* 051B42 051b42 move.b src=EA(d16 r=0 d=20 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x14U));
        SETB(d1, t1);
        }
    }
L_051B46: ;
    ITR(0x51B46U, 4);
    { /* 051B46 051b46 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B48: ;
    ITR(0x51B48U, 16);
    { /* 051B48 051b48 add.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=32 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t4 = (a0 + 0x20U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        wr16(t4, t3);
        }
    }
L_051B4C: ;
    ITR(0x51B4CU, 12);
    { /* 051B4C 051b4c sub.w src=EA(d16 r=0 d=32 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a0 + 0x20U));
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B50: ;
    ITR(0x51B50U, 12);
    { /* 051B50 051b50 tst.b src=None dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t = rd8((a0 + 0x1U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B54: ;
    ITR(0x51B54U, 8);
    { /* 051B54 051b54 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA2;
    }
L_051B56: ;
    ITR(0x51B56U, 8);
    { /* 051B56 051b56 bcc src=None dst=None cc=10 */
        if (COND_10) goto L_051B72;
    }
L_051B58: ;
    ITR(0x51B58U, 12);
    { /* 051B58 051b58 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B5C: ;
    ITR(0x51B5CU, 12);
    { /* 051B5C 051b5c add.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B60: ;
    ITR(0x51B60U, 12);
    { /* 051B60 051b60 move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        }
    }
L_051B64: ;
    ITR(0x51B64U, 12);
    { /* 051B64 051b64 cmp.b src=EA(d16 r=0 d=46 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2EU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051B68: ;
    ITR(0x51B68U, 8);
    { /* 051B68 051b68 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B6A: ;
    ITR(0x51B6AU, 20);
    { /* 051B6A 051b6a bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B70: ;
    ITR(0x51B70U, 10);
    { /* 051B70 051b70 bra src=None dst=None cc=0 */
        goto L_051B86;
    }
L_051B72: ;
    ITR(0x51B72U, 12);
    { /* 051B72 051b72 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B76: ;
    ITR(0x51B76U, 12);
    { /* 051B76 051b76 sub.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B7A: ;
    ITR(0x51B7AU, 12);
    { /* 051B7A 051b7a move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051B7E: ;
    ITR(0x51B7EU, 8);
    { /* 051B7E 051b7e bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B80: ;
    ITR(0x51B80U, 20);
    { /* 051B80 051b80 bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B86: ;
    ITR(0x51B86U, 12);
    { /* 051B86 051b86 tst.b src=None dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t = rd8((a0 + 0x2DU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B8A: ;
    ITR(0x51B8AU, 8);
    { /* 051B8A 051b8a bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B92;
    }
L_051B8C: ;
    ITR(0x51B8CU, 20);
    { /* 051B8C 051b8c bchg.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B92: ;
    ITR(0x51B92U, 4);
    { /* 051B92 051b92 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B94: ;
    ITR(0x51B94U, 16);
    { /* 051B94 051b94 btst.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B9A: ;
    ITR(0x51B9AU, 8);
    { /* 051B9A 051b9a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA0;
    }
L_051B9C: ;
    ITR(0x51B9CU, 4);
    { /* 051B9C 051b9c add.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B9E: ;
    ITR(0x51B9EU, 10);
    { /* 051B9E 051b9e bra src=None dst=None cc=0 */
        goto L_051BA2;
    }
L_051BA0: ;
    ITR(0x51BA0U, 4);
    { /* 051BA0 051ba0 sub.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051BA2: ;
    ITR(0x51BA2U, 12);
    { /* 051BA2 051ba2 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051BA6: ;
    ITR(0x51BA6U, 12);
    { /* 051BA6 051ba6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BAA: ;
    ITR(0x51BAAU, 8);
    { /* 051BAA 051baa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BB0;
    }
L_051BAC: ;
    ITR(0x51BACU, 12);
    { /* 051BAC 051bac move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051BB0: ;
    ITR(0x51BB0U, 16);
    { /* 051BB0 051bb0 subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x2BU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BB4: ;
    ITR(0x51BB4U, 8);
    { /* 051BB4 051bb4 bcc src=None dst=None cc=4 */
        if (COND_4) goto L_051BE2;
    }
L_051BB6: ;
    ITR(0x51BB6U, 20);
    { /* 051BB6 051bb6 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051BBC: ;
    ITR(0x51BBCU, 16);
    { /* 051BBC 051bbc movea.l src=EA(d16 r=0 d=38 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x26U));
    }
L_051BC0: ;
    ITR(0x51BC0U, 8);
    { /* 051BC0 051bc0 move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051BC2: ;
    ITR(0x51BC2U, 8);
    { /* 051BC2 051bc2 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BC8;
    }
L_051BC4: ;
    ITR(0x51BC4U, 20);
    { /* 051BC4 051bc4 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051BC8: ;
    ITR(0x51BC8U, 8);
    { /* 051BC8 051bc8 andi.w src=EA(imm r=0 d=0 v=7f) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x7FU;
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_051BCC: ;
    ITR(0x51BCCU, 12);
    { /* 051BCC 051bcc move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051BD0: ;
    ITR(0x51BD0U, 70);
    { /* 051BD0 051bd0 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051BD2: ;
    ITR(0x51BD2U, 18);
    { /* 051BD2 051bd2 lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051BD4: ;
    ITR(0x51BD4U, 12);
    { /* 051BD4 051bd4 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051BD8: ;
    ITR(0x51BD8U, 12);
    { /* 051BD8 051bd8 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BDC: ;
    ITR(0x51BDCU, 8);
    { /* 051BDC 051bdc bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BE2;
    }
L_051BDE: ;
    ITR(0x51BDEU, 12);
    { /* 051BDE 051bde move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051BE2: ;
    ITR(0x51BE2U, 10);
    { /* 051BE2 051be2 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51AE6U); goto L_051AE6; }
    }
L_051BE6: ;
    ITR(0x51BE6U, 8);
    { /* 051BE6 051be6 cmp.b src=EA(imm r=0 d=0 v=e0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xE0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BEA: ;
    ITR(0x51BEAU, 8);
    { /* 051BEA 051bea bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051BFC;
    }
L_051BEC: ;
    ITR(0x51BECU, 8);
    { /* 051BEC 051bec subi.b src=EA(imm r=0 d=0 v=df) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xDFU;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051BF0: ;
    ITR(0x51BF0U, 78);
    { /* 051BF0 051bf0 mulu.w src=EA(pcd r=0 d=0 v=51d82) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * rd16(0x51D82U);
        d0 = t1;
        }
    }
L_051BF4: ;
    ITR(0x51BF4U, 12);
    { /* 051BF4 051bf4 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=28 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a0 + 0x1CU), t1);
        }
    }
L_051BF8: ;
    ITR(0x51BF8U, 10);
    { /* 051BF8 051bf8 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051BFC: ;
    ITR(0x51BFCU, 8);
    { /* 051BFC 051bfc cmp.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C00: ;
    ITR(0x51C00U, 8);
    { /* 051C00 051c00 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C18;
    }
L_051C02: ;
    ITR(0x51C02U, 8);
    { /* 051C02 051c02 subi.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C06: ;
    ITR(0x51C06U, 8);
    { /* 051C06 051c06 lea.l src=EA(pcd r=0 d=0 v=51f3c) dst=EA(an r=5 d=0 v=0) */
        a5 = 0x51F3CU;
    }
L_051C0A: ;
    ITR(0x51C0AU, 74);
    { /* 051C0A 051c0a mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_051C0E: ;
    ITR(0x51C0EU, 8);
    { /* 051C0E 051c0e adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 += SX16((d0 & 0xFFFF));
    }
L_051C10: ;
    ITR(0x51C10U, 20);
    { /* 051C10 051c10 move.l src=EA(an r=5 d=0 v=0) dst=EA(d16 r=0 d=24 v=0) */
        { uint32_t t1 = a5;
        wr32((a0 + 0x18U), t1);
        }
    }
L_051C14: ;
    ITR(0x51C14U, 10);
    { /* 051C14 051c14 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C18: ;
    ITR(0x51C18U, 8);
    { /* 051C18 051c18 cmp.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C1C: ;
    ITR(0x51C1CU, 8);
    { /* 051C1C 051c1c bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C3C;
    }
L_051C1E: ;
    ITR(0x51C1EU, 8);
    { /* 051C1E 051c1e subi.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C22: ;
    ITR(0x51C22U, 4);
    { /* 051C22 051c22 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C24: ;
    ITR(0x51C24U, 8);
    { /* 051C24 051c24 lea.l src=EA(pcd r=0 d=0 v=52f1e) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x52F1EU;
    }
L_051C28: ;
    ITR(0x51C28U, 14);
    { /* 051C28 051c28 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C2C: ;
    ITR(0x51C2CU, 6);
    { /* 051C2C 051c2c adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C2E: ;
    ITR(0x51C2EU, 20);
    { /* 051C2E 051c2e move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=34 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x22U), t1);
        }
    }
L_051C32: ;
    ITR(0x51C32U, 20);
    { /* 051C32 051c32 move.b src=EA(d16 r=2 d=-1 v=0) dst=EA(d16 r=0 d=42 v=0) */
        { uint32_t t1 = rd8((a2 + 0xFFFFFFFFU));
        wr8((a0 + 0x2AU), t1);
        }
    }
L_051C38: ;
    ITR(0x51C38U, 10);
    { /* 051C38 051c38 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C3C: ;
    ITR(0x51C3CU, 8);
    { /* 051C3C 051c3c cmp.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C40: ;
    ITR(0x51C40U, 8);
    { /* 051C40 051c40 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C5E;
    }
L_051C42: ;
    ITR(0x51C42U, 8);
    { /* 051C42 051c42 subi.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C46: ;
    ITR(0x51C46U, 4);
    { /* 051C46 051c46 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C48: ;
    ITR(0x51C48U, 8);
    { /* 051C48 051c48 lea.l src=EA(pcd r=0 d=0 v=51eea) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51EEAU;
    }
L_051C4C: ;
    ITR(0x51C4CU, 14);
    { /* 051C4C 051c4c movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C50: ;
    ITR(0x51C50U, 6);
    { /* 051C50 051c50 adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C52: ;
    ITR(0x51C52U, 20);
    { /* 051C52 051c52 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=12 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0xCU), t1);
        }
    }
L_051C56: ;
    ITR(0x51C56U, 20);
    { /* 051C56 051c56 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051C5A: ;
    ITR(0x51C5AU, 10);
    { /* 051C5A 051c5a bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C5E: ;
    ITR(0x51C5EU, 4);
    { /* 051C5E 051c5e add.b src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_051C60: ;
    ITR(0x51C60U, 8);
    { /* 051C60 051c60 lea.l src=EA(pcd r=0 d=0 v=51d6a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51D6AU;
    }
L_051C64: ;
    ITR(0x51C64U, 14);
    { /* 051C64 051c64 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C68: ;
    ITR(0x51C68U, 14);
    { /* 051C68 051c68 jmp src=EA(idx r=3 d=0 v=0) dst=None */
        { call_dynamic((a3 + 0x0U + ((uint32_t)(int32_t)(int16_t)a2))); return; }
    }
L_051CA8: ;
    ITR(0x51CA8U, 20);
    { /* 051CA8 051ca8 move.w src=EA(d16 r=0 d=28 v=0) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = rd16((a0 + 0x1CU));
        wr16((a0 + 0x1EU), t1);
        }
    }
L_051CAE: ;
    ITR(0x51CAEU, 20);
    { /* 051CAE 051cae move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=4 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x4U), t1);
        }
    }
L_051CB2: ;
    ITR(0x51CB2U, 32);
    { /* 051CB2 051cb2 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a4 + 0x0U), t1);
        }
    }
L_051CB8: ;
    ITR(0x51CB8U, 16);
    { /* 051CB8 051cb8 move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a4 + 0x4U), t1);
        }
    }
L_051CBE: ;
    ITR(0x51CBEU, 12);
    { /* 051CBE 051cbe tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051CC2: ;
    ITR(0x51CC2U, 8);
    { /* 051CC2 051cc2 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051CD0;
    }
L_051CC4: ;
    ITR(0x51CC4U, 32);
    { /* 051CC4 051cc4 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051CCA: ;
    ITR(0x51CCAU, 16);
    { /* 051CCA 051cca move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051CD0: ;
    ITR(0x51CD0U, 10);
    { /* 051CD0 051cd0 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51AE6U); goto L_051AE6; }
    }
L_052A44: ;
    ITR(0x52A44U, 8);
    { /* 052A44 052a44 lea.l src=EA(pcd r=0 d=0 v=52b9c) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52B9CU;
    }
L_052A48: ;
    ITR(0x52A48U, 12);
    { /* 052A48 052a48 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A4C: ;
    ITR(0x52A4CU, 8);
    { /* 052A4C 052a4c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A5C;
    }
L_052A4E: ;
    ITR(0x52A4EU, 12);
    { /* 052A4E 052a4e lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF000U;
    }
L_052A54: ;
    ITR(0x52A54U, 4);
    { /* 052A54 052a54 moveq.l src=EA(imm r=0 d=0 v=1) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x1U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A56: ;
    ITR(0x52A56U, 8);
    { /* 052A56 052a56 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_052A5A: ;
    ITR(0x52A5AU, 18);
    { /* 052A5A 052a5a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A5CU);
    }
L_052A5C: ;
    ITR(0x52A5CU, 8);
    { /* 052A5C 052a5c lea.l src=EA(pcd r=0 d=0 v=52bc0) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BC0U;
    }
L_052A60: ;
    ITR(0x52A60U, 12);
    { /* 052A60 052a60 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A64: ;
    ITR(0x52A64U, 8);
    { /* 052A64 052a64 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A74;
    }
L_052A66: ;
    ITR(0x52A66U, 12);
    { /* 052A66 052a66 lea.l src=EA(absl r=0 d=0 v=dff010) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF010U;
    }
L_052A6C: ;
    ITR(0x52A6CU, 4);
    { /* 052A6C 052a6c moveq.l src=EA(imm r=0 d=0 v=2) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x2U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A6E: ;
    ITR(0x52A6EU, 8);
    { /* 052A6E 052a6e lea.l src=EA(pcd r=0 d=0 v=52c3a) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C3AU;
    }
L_052A72: ;
    ITR(0x52A72U, 18);
    { /* 052A72 052a72 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A74U);
    }
L_052A74: ;
    ITR(0x52A74U, 8);
    { /* 052A74 052a74 lea.l src=EA(pcd r=0 d=0 v=52be4) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BE4U;
    }
L_052A78: ;
    ITR(0x52A78U, 12);
    { /* 052A78 052a78 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A7C: ;
    ITR(0x52A7CU, 8);
    { /* 052A7C 052a7c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A8C;
    }
L_052A7E: ;
    ITR(0x52A7EU, 12);
    { /* 052A7E 052a7e lea.l src=EA(absl r=0 d=0 v=dff020) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF020U;
    }
L_052A84: ;
    ITR(0x52A84U, 4);
    { /* 052A84 052a84 moveq.l src=EA(imm r=0 d=0 v=4) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x4U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A86: ;
    ITR(0x52A86U, 8);
    { /* 052A86 052a86 lea.l src=EA(pcd r=0 d=0 v=52c46) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C46U;
    }
L_052A8A: ;
    ITR(0x52A8AU, 18);
    { /* 052A8A 052a8a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A8CU);
    }
L_052A8C: ;
    ITR(0x52A8CU, 8);
    { /* 052A8C 052a8c lea.l src=EA(pcd r=0 d=0 v=52c08) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52C08U;
    }
L_052A90: ;
    ITR(0x52A90U, 12);
    { /* 052A90 052a90 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A94: ;
    ITR(0x52A94U, 8);
    { /* 052A94 052a94 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052AA4;
    }
L_052A96: ;
    ITR(0x52A96U, 12);
    { /* 052A96 052a96 lea.l src=EA(absl r=0 d=0 v=dff030) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF030U;
    }
L_052A9C: ;
    ITR(0x52A9CU, 4);
    { /* 052A9C 052a9c moveq.l src=EA(imm r=0 d=0 v=8) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x8U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A9E: ;
    ITR(0x52A9EU, 8);
    { /* 052A9E 052a9e lea.l src=EA(pcd r=0 d=0 v=52c52) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C52U;
    }
L_052AA2: ;
    ITR(0x52AA2U, 18);
    { /* 052AA2 052aa2 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52AA4U);
    }
L_052AA4: ;
    ITR(0x52AA4U, 16);
    { /* 052AA4 052aa4 rts src=None dst=None */
        RTS();
    }
}

void dwam_051CD4(void)
{
    FN_ENTER(0x51CD4U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51912U: goto L_051912;
        case 0x519A0U: goto L_0519A0;
        case 0x519A4U: goto L_0519A4;
        case 0x519A6U: goto L_0519A6;
        case 0x519AAU: goto L_0519AA;
        case 0x519ACU: goto L_0519AC;
        case 0x519B0U: goto L_0519B0;
        case 0x519B6U: goto L_0519B6;
        case 0x519BAU: goto L_0519BA;
        case 0x519BCU: goto L_0519BC;
        case 0x519C0U: goto L_0519C0;
        case 0x519C2U: goto L_0519C2;
        case 0x519C4U: goto L_0519C4;
        case 0x519C6U: goto L_0519C6;
        case 0x519C8U: goto L_0519C8;
        case 0x519CCU: goto L_0519CC;
        case 0x519D0U: goto L_0519D0;
        case 0x519D4U: goto L_0519D4;
        case 0x519D6U: goto L_0519D6;
        case 0x519DAU: goto L_0519DA;
        case 0x519DEU: goto L_0519DE;
        case 0x519E0U: goto L_0519E0;
        case 0x519E4U: goto L_0519E4;
        case 0x519E6U: goto L_0519E6;
        case 0x519E8U: goto L_0519E8;
        case 0x519ECU: goto L_0519EC;
        case 0x519EEU: goto L_0519EE;
        case 0x519F2U: goto L_0519F2;
        case 0x519F6U: goto L_0519F6;
        case 0x519FAU: goto L_0519FA;
        case 0x519FCU: goto L_0519FC;
        case 0x51A00U: goto L_051A00;
        case 0x51A04U: goto L_051A04;
        case 0x51A06U: goto L_051A06;
        case 0x51A0CU: goto L_051A0C;
        case 0x51A12U: goto L_051A12;
        case 0x51A16U: goto L_051A16;
        case 0x51A18U: goto L_051A18;
        case 0x51A1EU: goto L_051A1E;
        case 0x51A24U: goto L_051A24;
        case 0x51A28U: goto L_051A28;
        case 0x51A2AU: goto L_051A2A;
        case 0x51A30U: goto L_051A30;
        case 0x51A34U: goto L_051A34;
        case 0x51A38U: goto L_051A38;
        case 0x51A3AU: goto L_051A3A;
        case 0x51A3EU: goto L_051A3E;
        case 0x51A40U: goto L_051A40;
        case 0x51A42U: goto L_051A42;
        case 0x51A44U: goto L_051A44;
        case 0x51A4AU: goto L_051A4A;
        case 0x51A4EU: goto L_051A4E;
        case 0x51A52U: goto L_051A52;
        case 0x51A54U: goto L_051A54;
        case 0x51A56U: goto L_051A56;
        case 0x51A5AU: goto L_051A5A;
        case 0x51A5EU: goto L_051A5E;
        case 0x51A62U: goto L_051A62;
        case 0x51A66U: goto L_051A66;
        case 0x51A6AU: goto L_051A6A;
        case 0x51A6CU: goto L_051A6C;
        case 0x51A70U: goto L_051A70;
        case 0x51A76U: goto L_051A76;
        case 0x51A78U: goto L_051A78;
        case 0x51A7EU: goto L_051A7E;
        case 0x51A84U: goto L_051A84;
        case 0x51A88U: goto L_051A88;
        case 0x51A8AU: goto L_051A8A;
        case 0x51A8CU: goto L_051A8C;
        case 0x51A90U: goto L_051A90;
        case 0x51A94U: goto L_051A94;
        case 0x51A96U: goto L_051A96;
        case 0x51A9CU: goto L_051A9C;
        case 0x51AA2U: goto L_051AA2;
        case 0x51AA6U: goto L_051AA6;
        case 0x51AAAU: goto L_051AAA;
        case 0x51AAEU: goto L_051AAE;
        case 0x51AB2U: goto L_051AB2;
        case 0x51AB4U: goto L_051AB4;
        case 0x51AB6U: goto L_051AB6;
        case 0x51ABAU: goto L_051ABA;
        case 0x51ABCU: goto L_051ABC;
        case 0x51ABEU: goto L_051ABE;
        case 0x51AC2U: goto L_051AC2;
        case 0x51AC6U: goto L_051AC6;
        case 0x51AC8U: goto L_051AC8;
        case 0x51ACCU: goto L_051ACC;
        case 0x51AD0U: goto L_051AD0;
        case 0x51AD4U: goto L_051AD4;
        case 0x51ADAU: goto L_051ADA;
        case 0x51ADEU: goto L_051ADE;
        case 0x51AE0U: goto L_051AE0;
        case 0x51AE6U: goto L_051AE6;
        case 0x51AE8U: goto L_051AE8;
        case 0x51AECU: goto L_051AEC;
        case 0x51AF0U: goto L_051AF0;
        case 0x51AF4U: goto L_051AF4;
        case 0x51AF8U: goto L_051AF8;
        case 0x51AFCU: goto L_051AFC;
        case 0x51B00U: goto L_051B00;
        case 0x51B04U: goto L_051B04;
        case 0x51B06U: goto L_051B06;
        case 0x51B0AU: goto L_051B0A;
        case 0x51B0CU: goto L_051B0C;
        case 0x51B10U: goto L_051B10;
        case 0x51B14U: goto L_051B14;
        case 0x51B16U: goto L_051B16;
        case 0x51B1AU: goto L_051B1A;
        case 0x51B1EU: goto L_051B1E;
        case 0x51B22U: goto L_051B22;
        case 0x51B24U: goto L_051B24;
        case 0x51B26U: goto L_051B26;
        case 0x51B2AU: goto L_051B2A;
        case 0x51B2CU: goto L_051B2C;
        case 0x51B2EU: goto L_051B2E;
        case 0x51B34U: goto L_051B34;
        case 0x51B36U: goto L_051B36;
        case 0x51B3AU: goto L_051B3A;
        case 0x51B3CU: goto L_051B3C;
        case 0x51B40U: goto L_051B40;
        case 0x51B42U: goto L_051B42;
        case 0x51B46U: goto L_051B46;
        case 0x51B48U: goto L_051B48;
        case 0x51B4CU: goto L_051B4C;
        case 0x51B50U: goto L_051B50;
        case 0x51B54U: goto L_051B54;
        case 0x51B56U: goto L_051B56;
        case 0x51B58U: goto L_051B58;
        case 0x51B5CU: goto L_051B5C;
        case 0x51B60U: goto L_051B60;
        case 0x51B64U: goto L_051B64;
        case 0x51B68U: goto L_051B68;
        case 0x51B6AU: goto L_051B6A;
        case 0x51B70U: goto L_051B70;
        case 0x51B72U: goto L_051B72;
        case 0x51B76U: goto L_051B76;
        case 0x51B7AU: goto L_051B7A;
        case 0x51B7EU: goto L_051B7E;
        case 0x51B80U: goto L_051B80;
        case 0x51B86U: goto L_051B86;
        case 0x51B8AU: goto L_051B8A;
        case 0x51B8CU: goto L_051B8C;
        case 0x51B92U: goto L_051B92;
        case 0x51B94U: goto L_051B94;
        case 0x51B9AU: goto L_051B9A;
        case 0x51B9CU: goto L_051B9C;
        case 0x51B9EU: goto L_051B9E;
        case 0x51BA0U: goto L_051BA0;
        case 0x51BA2U: goto L_051BA2;
        case 0x51BA6U: goto L_051BA6;
        case 0x51BAAU: goto L_051BAA;
        case 0x51BACU: goto L_051BAC;
        case 0x51BB0U: goto L_051BB0;
        case 0x51BB4U: goto L_051BB4;
        case 0x51BB6U: goto L_051BB6;
        case 0x51BBCU: goto L_051BBC;
        case 0x51BC0U: goto L_051BC0;
        case 0x51BC2U: goto L_051BC2;
        case 0x51BC4U: goto L_051BC4;
        case 0x51BC8U: goto L_051BC8;
        case 0x51BCCU: goto L_051BCC;
        case 0x51BD0U: goto L_051BD0;
        case 0x51BD2U: goto L_051BD2;
        case 0x51BD4U: goto L_051BD4;
        case 0x51BD8U: goto L_051BD8;
        case 0x51BDCU: goto L_051BDC;
        case 0x51BDEU: goto L_051BDE;
        case 0x51BE2U: goto L_051BE2;
        case 0x51BE6U: goto L_051BE6;
        case 0x51BEAU: goto L_051BEA;
        case 0x51BECU: goto L_051BEC;
        case 0x51BF0U: goto L_051BF0;
        case 0x51BF4U: goto L_051BF4;
        case 0x51BF8U: goto L_051BF8;
        case 0x51BFCU: goto L_051BFC;
        case 0x51C00U: goto L_051C00;
        case 0x51C02U: goto L_051C02;
        case 0x51C06U: goto L_051C06;
        case 0x51C0AU: goto L_051C0A;
        case 0x51C0EU: goto L_051C0E;
        case 0x51C10U: goto L_051C10;
        case 0x51C14U: goto L_051C14;
        case 0x51C18U: goto L_051C18;
        case 0x51C1CU: goto L_051C1C;
        case 0x51C1EU: goto L_051C1E;
        case 0x51C22U: goto L_051C22;
        case 0x51C24U: goto L_051C24;
        case 0x51C28U: goto L_051C28;
        case 0x51C2CU: goto L_051C2C;
        case 0x51C2EU: goto L_051C2E;
        case 0x51C32U: goto L_051C32;
        case 0x51C38U: goto L_051C38;
        case 0x51C3CU: goto L_051C3C;
        case 0x51C40U: goto L_051C40;
        case 0x51C42U: goto L_051C42;
        case 0x51C46U: goto L_051C46;
        case 0x51C48U: goto L_051C48;
        case 0x51C4CU: goto L_051C4C;
        case 0x51C50U: goto L_051C50;
        case 0x51C52U: goto L_051C52;
        case 0x51C56U: goto L_051C56;
        case 0x51C5AU: goto L_051C5A;
        case 0x51C5EU: goto L_051C5E;
        case 0x51C60U: goto L_051C60;
        case 0x51C64U: goto L_051C64;
        case 0x51C68U: goto L_051C68;
        case 0x52A44U: goto L_052A44;
        case 0x52A48U: goto L_052A48;
        case 0x52A4CU: goto L_052A4C;
        case 0x52A4EU: goto L_052A4E;
        case 0x52A54U: goto L_052A54;
        case 0x52A56U: goto L_052A56;
        case 0x52A5AU: goto L_052A5A;
        case 0x52A5CU: goto L_052A5C;
        case 0x52A60U: goto L_052A60;
        case 0x52A64U: goto L_052A64;
        case 0x52A66U: goto L_052A66;
        case 0x52A6CU: goto L_052A6C;
        case 0x52A6EU: goto L_052A6E;
        case 0x52A72U: goto L_052A72;
        case 0x52A74U: goto L_052A74;
        case 0x52A78U: goto L_052A78;
        case 0x52A7CU: goto L_052A7C;
        case 0x52A7EU: goto L_052A7E;
        case 0x52A84U: goto L_052A84;
        case 0x52A86U: goto L_052A86;
        case 0x52A8AU: goto L_052A8A;
        case 0x52A8CU: goto L_052A8C;
        case 0x52A90U: goto L_052A90;
        case 0x52A94U: goto L_052A94;
        case 0x52A96U: goto L_052A96;
        case 0x52A9CU: goto L_052A9C;
        case 0x52A9EU: goto L_052A9E;
        case 0x52AA2U: goto L_052AA2;
        case 0x52AA4U: goto L_052AA4;
        default: break; } }
    goto L_051CD4;
L_051912: ;
    ITR(0x51912U, 10);
    { /* 051912 051912 bra src=None dst=None cc=0 */
        goto L_052A44;
    }
L_0519A0: ;
    ITR(0x519A0U, 8);
    { /* 0519A0 0519a0 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_0519A4: ;
    ITR(0x519A4U, 4);
    { /* 0519A4 0519a4 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519A6: ;
    ITR(0x519A6U, 74);
    { /* 0519A6 0519a6 mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_0519AA: ;
    ITR(0x519AAU, 8);
    { /* 0519AA 0519aa adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=4 d=0 v=0) */
        a4 += SX16((d0 & 0xFFFF));
    }
L_0519AC: ;
    ITR(0x519ACU, 13);
    { /* 0519AC 0519ac scc.b src=None dst=EA(d16 r=4 d=10 v=0) cc=0 */
        { uint32_t t2 = (a4 + 0xAU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519B0: ;
    ITR(0x519B0U, 12);
    { /* 0519B0 0519b0 lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=6 d=0 v=0) */
        a6 = 0xDFF000U;
    }
L_0519B6: ;
    ITR(0x519B6U, 8);
    { /* 0519B6 0519b6 move.w src=EA(imm r=0 d=0 v=30) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x30U;
        SETW(d0, t1);
        }
    }
L_0519BA: ;
    ITR(0x519BAU, 70);
    { /* 0519BA 0519ba mulu.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d7 & 0xFFFF);
        d0 = t1;
        }
    }
L_0519BC: ;
    ITR(0x519BCU, 8);
    { /* 0519BC 0519bc lea.l src=EA(pcd r=0 d=0 v=51d9a) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x51D9AU;
    }
L_0519C0: ;
    ITR(0x519C0U, 8);
    { /* 0519C0 0519c0 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 += SX16((d0 & 0xFFFF));
    }
L_0519C2: ;
    ITR(0x519C2U, 4);
    { /* 0519C2 0519c2 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519C4: ;
    ITR(0x519C4U, 14);
    { /* 0519C4 0519c4 lsl.w src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 1, (d0 & 0xFFFF), 4, 16);
        SETW(d0, t1);
        }
    }
L_0519C6: ;
    ITR(0x519C6U, 8);
    { /* 0519C6 0519c6 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=6 d=0 v=0) */
        a6 += SX16((d0 & 0xFFFF));
    }
L_0519C8: ;
    ITR(0x519C8U, 16);
    { /* 0519C8 0519c8 movea.l src=EA(d16 r=0 d=4 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x4U));
    }
L_0519CC: ;
    ITR(0x519CCU, 16);
    { /* 0519CC 0519cc movea.l src=EA(d16 r=0 d=24 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 = rd32((a0 + 0x18U));
    }
L_0519D0: ;
    ITR(0x519D0U, 12);
    { /* 0519D0 0519d0 tst.b src=None dst=EA(d16 r=0 d=22 v=0) */
        { uint32_t t = rd8((a0 + 0x16U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519D4: ;
    ITR(0x519D4U, 8);
    { /* 0519D4 0519d4 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_0519D6: ;
    ITR(0x519D6U, 13);
    { /* 0519D6 0519d6 scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=0 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519DA: ;
    ITR(0x519DAU, 16);
    { /* 0519DA 0519da move.l src=EA(d16 r=5 d=4 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x4U));
        d0 = t1;
        FLAGS_LOGIC(t1, 0xFFFFFFFFU, 0x80000000U);
        }
    }
L_0519DE: ;
    ITR(0x519DEU, 8);
    { /* 0519DE 0519de bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051A06;
    }
L_0519E0: ;
    ITR(0x519E0U, 16);
    { /* 0519E0 0519e0 movea.l src=EA(d16 r=5 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a5 + 0x0U));
    }
L_0519E4: ;
    ITR(0x519E4U, 6);
    { /* 0519E4 0519e4 adda.l src=EA(dn r=0 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += d0;
    }
L_0519E6: ;
    ITR(0x519E6U, 10);
    { /* 0519E6 0519e6 lsr.l src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, 1, 32);
        d0 = t1;
        }
    }
L_0519E8: ;
    ITR(0x519E8U, 12);
    { /* 0519E8 0519e8 move.w src=EA(d16 r=5 d=8 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        SETW(d1, t1);
        }
    }
L_0519EC: ;
    ITR(0x519ECU, 4);
    { /* 0519EC 0519ec sub.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_0519EE: ;
    ITR(0x519EEU, 20);
    { /* 0519EE 0519ee move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = a2;
        wr32((a4 + 0x0U), t1);
        }
    }
L_0519F2: ;
    ITR(0x519F2U, 12);
    { /* 0519F2 0519f2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x4U), t1);
        }
    }
L_0519F6: ;
    ITR(0x519F6U, 12);
    { /* 0519F6 0519f6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519FA: ;
    ITR(0x519FAU, 8);
    { /* 0519FA 0519fa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A04;
    }
L_0519FC: ;
    ITR(0x519FCU, 20);
    { /* 0519FC 0519fc move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = a2;
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A00: ;
    ITR(0x51A00U, 12);
    { /* 051A00 051a00 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A04: ;
    ITR(0x51A04U, 10);
    { /* 051A04 051a04 bra src=None dst=None cc=0 */
        goto L_051A24;
    }
L_051A06: ;
    ITR(0x51A06U, 32);
    { /* 051A06 051a06 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A0C: ;
    ITR(0x51A0CU, 16);
    { /* 051A0C 051a0c move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A12: ;
    ITR(0x51A12U, 12);
    { /* 051A12 051a12 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A16: ;
    ITR(0x51A16U, 8);
    { /* 051A16 051a16 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_051A18: ;
    ITR(0x51A18U, 32);
    { /* 051A18 051a18 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A1E: ;
    ITR(0x51A1EU, 16);
    { /* 051A1E 051a1e move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A24: ;
    ITR(0x51A24U, 16);
    { /* 051A24 051a24 subq.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        wr16(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A28: ;
    ITR(0x51A28U, 8);
    { /* 051A28 051a28 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4E;
    }
L_051A2A: ;
    ITR(0x51A2AU, 16);
    { /* 051A2A 051a2a cmpi.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A30: ;
    ITR(0x51A30U, 8);
    { /* 051A30 051a30 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AF4;
    }
L_051A34: ;
    ITR(0x51A34U, 12);
    { /* 051A34 051a34 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A38: ;
    ITR(0x51A38U, 8);
    { /* 051A38 051a38 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A4A;
    }
L_051A3A: ;
    ITR(0x51A3AU, 12);
    { /* 051A3A 051a3a cmpi.b src=EA(imm r=0 d=0 v=83) dst=EA(ind r=1 d=0 v=0) */
        { uint32_t t1 = 0x83U;
        uint32_t t4 = a1;
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051A3E: ;
    ITR(0x51A3EU, 8);
    { /* 051A3E 051a3e bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4A;
    }
L_051A40: ;
    ITR(0x51A40U, 4);
    { /* 051A40 051a40 clr.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, 0);
    }
L_051A42: ;
    ITR(0x51A42U, 8);
    { /* 051A42 051a42 bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051A44: ;
    ITR(0x51A44U, 16);
    { /* 051A44 051a44 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051A4A: ;
    ITR(0x51A4AU, 10);
    { /* 051A4A 051a4a bra src=None dst=None cc=0 */
        goto L_051AE6;
    }
L_051A4E: ;
    ITR(0x51A4EU, 16);
    { /* 051A4E 051a4e clr.b src=None dst=EA(d16 r=0 d=0 v=0) */
        wr8((a0 + 0x0U), 0);
    }
L_051A52: ;
    ITR(0x51A52U, 4);
    { /* 051A52 051a52 moveq.l src=EA(imm r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        d0 = 0x0U;
    }
L_051A54: ;
    ITR(0x51A54U, 8);
    { /* 051A54 051a54 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d0, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051A56: ;
    ITR(0x51A56U, 8);
    { /* 051A56 051a56 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BE6;
    }
L_051A5A: ;
    ITR(0x51A5AU, 12);
    { /* 051A5A 051a5a move.b src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=2 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        wr8((a0 + 0x2U), t1);
        }
    }
L_051A5E: ;
    ITR(0x51A5EU, 12);
    { /* 051A5E 051a5e add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A62: ;
    ITR(0x51A62U, 12);
    { /* 051A62 051a62 add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A66: ;
    ITR(0x51A66U, 16);
    { /* 051A66 051a66 movea.l src=EA(d16 r=0 d=34 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x22U));
    }
L_051A6A: ;
    ITR(0x51A6AU, 8);
    { /* 051A6A 051a6a move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051A6C: ;
    ITR(0x51A6CU, 20);
    { /* 051A6C 051a6c move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051A70: ;
    ITR(0x51A70U, 20);
    { /* 051A70 051a70 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051A76: ;
    ITR(0x51A76U, 4);
    { /* 051A76 051a76 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051A78: ;
    ITR(0x51A78U, 32);
    { /* 051A78 051a78 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A7E: ;
    ITR(0x51A7EU, 20);
    { /* 051A7E 051a7e move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A84: ;
    ITR(0x51A84U, 12);
    { /* 051A84 051a84 move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051A88: ;
    ITR(0x51A88U, 70);
    { /* 051A88 051a88 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051A8A: ;
    ITR(0x51A8AU, 18);
    { /* 051A8A 051a8a lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051A8C: ;
    ITR(0x51A8CU, 12);
    { /* 051A8C 051a8c move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051A90: ;
    ITR(0x51A90U, 12);
    { /* 051A90 051a90 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A94: ;
    ITR(0x51A94U, 8);
    { /* 051A94 051a94 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AA6;
    }
L_051A96: ;
    ITR(0x51A96U, 32);
    { /* 051A96 051a96 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A9C: ;
    ITR(0x51A9CU, 20);
    { /* 051A9C 051a9c move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051AA2: ;
    ITR(0x51AA2U, 12);
    { /* 051AA2 051aa2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051AA6: ;
    ITR(0x51AA6U, 8);
    { /* 051AA6 051aa6 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AAA: ;
    ITR(0x51AAAU, 8);
    { /* 051AAA 051aaa lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051AAE: ;
    ITR(0x51AAEU, 12);
    { /* 051AAE 051aae move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051AB2: ;
    ITR(0x51AB2U, 4);
    { /* 051AB2 051ab2 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051AB4: ;
    ITR(0x51AB4U, 4);
    { /* 051AB4 051ab4 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AB6: ;
    ITR(0x51AB6U, 14);
    { /* 051AB6 051ab6 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051ABA: ;
    ITR(0x51ABAU, 70);
    { /* 051ABA 051aba mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051ABC: ;
    ITR(0x51ABCU, 16);
    { /* 051ABC 051abc lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051ABE: ;
    ITR(0x51ABEU, 12);
    { /* 051ABE 051abe move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051AC2: ;
    ITR(0x51AC2U, 12);
    { /* 051AC2 051ac2 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051AC6: ;
    ITR(0x51AC6U, 8);
    { /* 051AC6 051ac6 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051ACC;
    }
L_051AC8: ;
    ITR(0x51AC8U, 12);
    { /* 051AC8 051ac8 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051ACC: ;
    ITR(0x51ACCU, 13);
    { /* 051ACC 051acc scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=1 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051AD0: ;
    ITR(0x51AD0U, 20);
    { /* 051AD0 051ad0 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=4 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x4U), t1);
        }
    }
L_051AD4: ;
    ITR(0x51AD4U, 20);
    { /* 051AD4 051ad4 move.w src=EA(d16 r=0 d=28 v=0) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = rd16((a0 + 0x1CU));
        wr16((a0 + 0x1EU), t1);
        }
    }
L_051ADA: ;
    ITR(0x51ADAU, 8);
    { /* 051ADA 051ada move.w src=EA(imm r=0 d=0 v=8200) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x8200U;
        SETW(d1, t1);
        }
    }
L_051ADE: ;
    ITR(0x51ADEU, 8);
    { /* 051ADE 051ade bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051AE0: ;
    ITR(0x51AE0U, 16);
    { /* 051AE0 051ae0 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051AE6: ;
    ITR(0x51AE6U, 4);
    { /* 051AE6 051ae6 addq.w src=EA(imm r=0 d=0 v=1) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d7, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFFFU, 0x8000U, 1);
        }
    }
L_051AE8: ;
    ITR(0x51AE8U, 8);
    { /* 051AE8 051ae8 cmp.w src=EA(imm r=0 d=0 v=4) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x4U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051AEC: ;
    ITR(0x51AECU, 10);
    { /* 051AEC 051aec bcc src=None dst=None cc=6 */
        if (COND_6) { BUDGET_CHECK(0x519A0U); goto L_0519A0; }
    }
L_051AF0: ;
    ITR(0x51AF0U, 10);
    { /* 051AF0 051af0 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51912U); goto L_051912; }
    }
L_051AF4: ;
    ITR(0x51AF4U, 12);
    { /* 051AF4 051af4 move.b src=EA(d16 r=0 d=2 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2U));
        SETB(d0, t1);
        }
    }
L_051AF8: ;
    ITR(0x51AF8U, 12);
    { /* 051AF8 051af8 add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051AFC: ;
    ITR(0x51AFCU, 12);
    { /* 051AFC 051afc add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B00: ;
    ITR(0x51B00U, 16);
    { /* 051B00 051b00 movea.l src=EA(d16 r=0 d=16 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x10U));
    }
L_051B04: ;
    ITR(0x51B04U, 8);
    { /* 051B04 051b04 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051B06: ;
    ITR(0x51B06U, 12);
    { /* 051B06 051b06 bclr.l src=EA(imm r=0 d=0 v=7) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (0x7U) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 & ~(1u << t1);
        }
    }
L_051B0A: ;
    ITR(0x51B0AU, 8);
    { /* 051B0A 051b0a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B10;
    }
L_051B0C: ;
    ITR(0x51B0CU, 16);
    { /* 051B0C 051b0c movea.l src=EA(d16 r=0 d=12 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0xCU));
    }
L_051B10: ;
    ITR(0x51B10U, 20);
    { /* 051B10 051b10 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051B14: ;
    ITR(0x51B14U, 4);
    { /* 051B14 051b14 add.b src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B16: ;
    ITR(0x51B16U, 8);
    { /* 051B16 051b16 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B1A: ;
    ITR(0x51B1AU, 8);
    { /* 051B1A 051b1a lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051B1E: ;
    ITR(0x51B1EU, 12);
    { /* 051B1E 051b1e move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051B22: ;
    ITR(0x51B22U, 4);
    { /* 051B22 051b22 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051B24: ;
    ITR(0x51B24U, 4);
    { /* 051B24 051b24 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B26: ;
    ITR(0x51B26U, 14);
    { /* 051B26 051b26 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051B2A: ;
    ITR(0x51B2AU, 70);
    { /* 051B2A 051b2a mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051B2C: ;
    ITR(0x51B2CU, 16);
    { /* 051B2C 051b2c lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051B2E: ;
    ITR(0x51B2EU, 16);
    { /* 051B2E 051b2e btst.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=0 v=0) */
        { uint32_t t1 = (0x1U) & 7;
        uint32_t t3 = (a0 + 0x0U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B34: ;
    ITR(0x51B34U, 8);
    { /* 051B34 051b34 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B50;
    }
L_051B36: ;
    ITR(0x51B36U, 12);
    { /* 051B36 051b36 tst.b src=None dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t = rd8((a0 + 0x15U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B3A: ;
    ITR(0x51B3AU, 8);
    { /* 051B3A 051b3a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B42;
    }
L_051B3C: ;
    ITR(0x51B3CU, 16);
    { /* 051B3C 051b3c subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x15U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        }
    }
L_051B40: ;
    ITR(0x51B40U, 10);
    { /* 051B40 051b40 bra src=None dst=None cc=0 */
        goto L_051B50;
    }
L_051B42: ;
    ITR(0x51B42U, 12);
    { /* 051B42 051b42 move.b src=EA(d16 r=0 d=20 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x14U));
        SETB(d1, t1);
        }
    }
L_051B46: ;
    ITR(0x51B46U, 4);
    { /* 051B46 051b46 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B48: ;
    ITR(0x51B48U, 16);
    { /* 051B48 051b48 add.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=32 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t4 = (a0 + 0x20U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        wr16(t4, t3);
        }
    }
L_051B4C: ;
    ITR(0x51B4CU, 12);
    { /* 051B4C 051b4c sub.w src=EA(d16 r=0 d=32 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a0 + 0x20U));
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B50: ;
    ITR(0x51B50U, 12);
    { /* 051B50 051b50 tst.b src=None dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t = rd8((a0 + 0x1U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B54: ;
    ITR(0x51B54U, 8);
    { /* 051B54 051b54 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA2;
    }
L_051B56: ;
    ITR(0x51B56U, 8);
    { /* 051B56 051b56 bcc src=None dst=None cc=10 */
        if (COND_10) goto L_051B72;
    }
L_051B58: ;
    ITR(0x51B58U, 12);
    { /* 051B58 051b58 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B5C: ;
    ITR(0x51B5CU, 12);
    { /* 051B5C 051b5c add.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B60: ;
    ITR(0x51B60U, 12);
    { /* 051B60 051b60 move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        }
    }
L_051B64: ;
    ITR(0x51B64U, 12);
    { /* 051B64 051b64 cmp.b src=EA(d16 r=0 d=46 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2EU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051B68: ;
    ITR(0x51B68U, 8);
    { /* 051B68 051b68 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B6A: ;
    ITR(0x51B6AU, 20);
    { /* 051B6A 051b6a bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B70: ;
    ITR(0x51B70U, 10);
    { /* 051B70 051b70 bra src=None dst=None cc=0 */
        goto L_051B86;
    }
L_051B72: ;
    ITR(0x51B72U, 12);
    { /* 051B72 051b72 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B76: ;
    ITR(0x51B76U, 12);
    { /* 051B76 051b76 sub.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B7A: ;
    ITR(0x51B7AU, 12);
    { /* 051B7A 051b7a move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051B7E: ;
    ITR(0x51B7EU, 8);
    { /* 051B7E 051b7e bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B80: ;
    ITR(0x51B80U, 20);
    { /* 051B80 051b80 bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B86: ;
    ITR(0x51B86U, 12);
    { /* 051B86 051b86 tst.b src=None dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t = rd8((a0 + 0x2DU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B8A: ;
    ITR(0x51B8AU, 8);
    { /* 051B8A 051b8a bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B92;
    }
L_051B8C: ;
    ITR(0x51B8CU, 20);
    { /* 051B8C 051b8c bchg.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B92: ;
    ITR(0x51B92U, 4);
    { /* 051B92 051b92 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B94: ;
    ITR(0x51B94U, 16);
    { /* 051B94 051b94 btst.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B9A: ;
    ITR(0x51B9AU, 8);
    { /* 051B9A 051b9a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA0;
    }
L_051B9C: ;
    ITR(0x51B9CU, 4);
    { /* 051B9C 051b9c add.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B9E: ;
    ITR(0x51B9EU, 10);
    { /* 051B9E 051b9e bra src=None dst=None cc=0 */
        goto L_051BA2;
    }
L_051BA0: ;
    ITR(0x51BA0U, 4);
    { /* 051BA0 051ba0 sub.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051BA2: ;
    ITR(0x51BA2U, 12);
    { /* 051BA2 051ba2 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051BA6: ;
    ITR(0x51BA6U, 12);
    { /* 051BA6 051ba6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BAA: ;
    ITR(0x51BAAU, 8);
    { /* 051BAA 051baa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BB0;
    }
L_051BAC: ;
    ITR(0x51BACU, 12);
    { /* 051BAC 051bac move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051BB0: ;
    ITR(0x51BB0U, 16);
    { /* 051BB0 051bb0 subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x2BU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BB4: ;
    ITR(0x51BB4U, 8);
    { /* 051BB4 051bb4 bcc src=None dst=None cc=4 */
        if (COND_4) goto L_051BE2;
    }
L_051BB6: ;
    ITR(0x51BB6U, 20);
    { /* 051BB6 051bb6 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051BBC: ;
    ITR(0x51BBCU, 16);
    { /* 051BBC 051bbc movea.l src=EA(d16 r=0 d=38 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x26U));
    }
L_051BC0: ;
    ITR(0x51BC0U, 8);
    { /* 051BC0 051bc0 move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051BC2: ;
    ITR(0x51BC2U, 8);
    { /* 051BC2 051bc2 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BC8;
    }
L_051BC4: ;
    ITR(0x51BC4U, 20);
    { /* 051BC4 051bc4 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051BC8: ;
    ITR(0x51BC8U, 8);
    { /* 051BC8 051bc8 andi.w src=EA(imm r=0 d=0 v=7f) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x7FU;
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_051BCC: ;
    ITR(0x51BCCU, 12);
    { /* 051BCC 051bcc move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051BD0: ;
    ITR(0x51BD0U, 70);
    { /* 051BD0 051bd0 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051BD2: ;
    ITR(0x51BD2U, 18);
    { /* 051BD2 051bd2 lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051BD4: ;
    ITR(0x51BD4U, 12);
    { /* 051BD4 051bd4 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051BD8: ;
    ITR(0x51BD8U, 12);
    { /* 051BD8 051bd8 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BDC: ;
    ITR(0x51BDCU, 8);
    { /* 051BDC 051bdc bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BE2;
    }
L_051BDE: ;
    ITR(0x51BDEU, 12);
    { /* 051BDE 051bde move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051BE2: ;
    ITR(0x51BE2U, 10);
    { /* 051BE2 051be2 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51AE6U); goto L_051AE6; }
    }
L_051BE6: ;
    ITR(0x51BE6U, 8);
    { /* 051BE6 051be6 cmp.b src=EA(imm r=0 d=0 v=e0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xE0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BEA: ;
    ITR(0x51BEAU, 8);
    { /* 051BEA 051bea bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051BFC;
    }
L_051BEC: ;
    ITR(0x51BECU, 8);
    { /* 051BEC 051bec subi.b src=EA(imm r=0 d=0 v=df) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xDFU;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051BF0: ;
    ITR(0x51BF0U, 78);
    { /* 051BF0 051bf0 mulu.w src=EA(pcd r=0 d=0 v=51d82) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * rd16(0x51D82U);
        d0 = t1;
        }
    }
L_051BF4: ;
    ITR(0x51BF4U, 12);
    { /* 051BF4 051bf4 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=28 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a0 + 0x1CU), t1);
        }
    }
L_051BF8: ;
    ITR(0x51BF8U, 10);
    { /* 051BF8 051bf8 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051BFC: ;
    ITR(0x51BFCU, 8);
    { /* 051BFC 051bfc cmp.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C00: ;
    ITR(0x51C00U, 8);
    { /* 051C00 051c00 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C18;
    }
L_051C02: ;
    ITR(0x51C02U, 8);
    { /* 051C02 051c02 subi.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C06: ;
    ITR(0x51C06U, 8);
    { /* 051C06 051c06 lea.l src=EA(pcd r=0 d=0 v=51f3c) dst=EA(an r=5 d=0 v=0) */
        a5 = 0x51F3CU;
    }
L_051C0A: ;
    ITR(0x51C0AU, 74);
    { /* 051C0A 051c0a mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_051C0E: ;
    ITR(0x51C0EU, 8);
    { /* 051C0E 051c0e adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 += SX16((d0 & 0xFFFF));
    }
L_051C10: ;
    ITR(0x51C10U, 20);
    { /* 051C10 051c10 move.l src=EA(an r=5 d=0 v=0) dst=EA(d16 r=0 d=24 v=0) */
        { uint32_t t1 = a5;
        wr32((a0 + 0x18U), t1);
        }
    }
L_051C14: ;
    ITR(0x51C14U, 10);
    { /* 051C14 051c14 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C18: ;
    ITR(0x51C18U, 8);
    { /* 051C18 051c18 cmp.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C1C: ;
    ITR(0x51C1CU, 8);
    { /* 051C1C 051c1c bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C3C;
    }
L_051C1E: ;
    ITR(0x51C1EU, 8);
    { /* 051C1E 051c1e subi.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C22: ;
    ITR(0x51C22U, 4);
    { /* 051C22 051c22 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C24: ;
    ITR(0x51C24U, 8);
    { /* 051C24 051c24 lea.l src=EA(pcd r=0 d=0 v=52f1e) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x52F1EU;
    }
L_051C28: ;
    ITR(0x51C28U, 14);
    { /* 051C28 051c28 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C2C: ;
    ITR(0x51C2CU, 6);
    { /* 051C2C 051c2c adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C2E: ;
    ITR(0x51C2EU, 20);
    { /* 051C2E 051c2e move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=34 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x22U), t1);
        }
    }
L_051C32: ;
    ITR(0x51C32U, 20);
    { /* 051C32 051c32 move.b src=EA(d16 r=2 d=-1 v=0) dst=EA(d16 r=0 d=42 v=0) */
        { uint32_t t1 = rd8((a2 + 0xFFFFFFFFU));
        wr8((a0 + 0x2AU), t1);
        }
    }
L_051C38: ;
    ITR(0x51C38U, 10);
    { /* 051C38 051c38 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C3C: ;
    ITR(0x51C3CU, 8);
    { /* 051C3C 051c3c cmp.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C40: ;
    ITR(0x51C40U, 8);
    { /* 051C40 051c40 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C5E;
    }
L_051C42: ;
    ITR(0x51C42U, 8);
    { /* 051C42 051c42 subi.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C46: ;
    ITR(0x51C46U, 4);
    { /* 051C46 051c46 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C48: ;
    ITR(0x51C48U, 8);
    { /* 051C48 051c48 lea.l src=EA(pcd r=0 d=0 v=51eea) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51EEAU;
    }
L_051C4C: ;
    ITR(0x51C4CU, 14);
    { /* 051C4C 051c4c movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C50: ;
    ITR(0x51C50U, 6);
    { /* 051C50 051c50 adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C52: ;
    ITR(0x51C52U, 20);
    { /* 051C52 051c52 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=12 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0xCU), t1);
        }
    }
L_051C56: ;
    ITR(0x51C56U, 20);
    { /* 051C56 051c56 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051C5A: ;
    ITR(0x51C5AU, 10);
    { /* 051C5A 051c5a bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C5E: ;
    ITR(0x51C5EU, 4);
    { /* 051C5E 051c5e add.b src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_051C60: ;
    ITR(0x51C60U, 8);
    { /* 051C60 051c60 lea.l src=EA(pcd r=0 d=0 v=51d6a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51D6AU;
    }
L_051C64: ;
    ITR(0x51C64U, 14);
    { /* 051C64 051c64 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C68: ;
    ITR(0x51C68U, 14);
    { /* 051C68 051c68 jmp src=EA(idx r=3 d=0 v=0) dst=None */
        { call_dynamic((a3 + 0x0U + ((uint32_t)(int32_t)(int16_t)a2))); return; }
    }
L_051CD4: ;
    ITR(0x51CD4U, 10);
    { /* 051CD4 051cd4 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51AD0U); goto L_051AD0; }
    }
L_052A44: ;
    ITR(0x52A44U, 8);
    { /* 052A44 052a44 lea.l src=EA(pcd r=0 d=0 v=52b9c) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52B9CU;
    }
L_052A48: ;
    ITR(0x52A48U, 12);
    { /* 052A48 052a48 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A4C: ;
    ITR(0x52A4CU, 8);
    { /* 052A4C 052a4c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A5C;
    }
L_052A4E: ;
    ITR(0x52A4EU, 12);
    { /* 052A4E 052a4e lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF000U;
    }
L_052A54: ;
    ITR(0x52A54U, 4);
    { /* 052A54 052a54 moveq.l src=EA(imm r=0 d=0 v=1) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x1U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A56: ;
    ITR(0x52A56U, 8);
    { /* 052A56 052a56 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_052A5A: ;
    ITR(0x52A5AU, 18);
    { /* 052A5A 052a5a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A5CU);
    }
L_052A5C: ;
    ITR(0x52A5CU, 8);
    { /* 052A5C 052a5c lea.l src=EA(pcd r=0 d=0 v=52bc0) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BC0U;
    }
L_052A60: ;
    ITR(0x52A60U, 12);
    { /* 052A60 052a60 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A64: ;
    ITR(0x52A64U, 8);
    { /* 052A64 052a64 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A74;
    }
L_052A66: ;
    ITR(0x52A66U, 12);
    { /* 052A66 052a66 lea.l src=EA(absl r=0 d=0 v=dff010) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF010U;
    }
L_052A6C: ;
    ITR(0x52A6CU, 4);
    { /* 052A6C 052a6c moveq.l src=EA(imm r=0 d=0 v=2) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x2U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A6E: ;
    ITR(0x52A6EU, 8);
    { /* 052A6E 052a6e lea.l src=EA(pcd r=0 d=0 v=52c3a) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C3AU;
    }
L_052A72: ;
    ITR(0x52A72U, 18);
    { /* 052A72 052a72 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A74U);
    }
L_052A74: ;
    ITR(0x52A74U, 8);
    { /* 052A74 052a74 lea.l src=EA(pcd r=0 d=0 v=52be4) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BE4U;
    }
L_052A78: ;
    ITR(0x52A78U, 12);
    { /* 052A78 052a78 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A7C: ;
    ITR(0x52A7CU, 8);
    { /* 052A7C 052a7c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A8C;
    }
L_052A7E: ;
    ITR(0x52A7EU, 12);
    { /* 052A7E 052a7e lea.l src=EA(absl r=0 d=0 v=dff020) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF020U;
    }
L_052A84: ;
    ITR(0x52A84U, 4);
    { /* 052A84 052a84 moveq.l src=EA(imm r=0 d=0 v=4) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x4U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A86: ;
    ITR(0x52A86U, 8);
    { /* 052A86 052a86 lea.l src=EA(pcd r=0 d=0 v=52c46) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C46U;
    }
L_052A8A: ;
    ITR(0x52A8AU, 18);
    { /* 052A8A 052a8a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A8CU);
    }
L_052A8C: ;
    ITR(0x52A8CU, 8);
    { /* 052A8C 052a8c lea.l src=EA(pcd r=0 d=0 v=52c08) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52C08U;
    }
L_052A90: ;
    ITR(0x52A90U, 12);
    { /* 052A90 052a90 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A94: ;
    ITR(0x52A94U, 8);
    { /* 052A94 052a94 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052AA4;
    }
L_052A96: ;
    ITR(0x52A96U, 12);
    { /* 052A96 052a96 lea.l src=EA(absl r=0 d=0 v=dff030) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF030U;
    }
L_052A9C: ;
    ITR(0x52A9CU, 4);
    { /* 052A9C 052a9c moveq.l src=EA(imm r=0 d=0 v=8) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x8U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A9E: ;
    ITR(0x52A9EU, 8);
    { /* 052A9E 052a9e lea.l src=EA(pcd r=0 d=0 v=52c52) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C52U;
    }
L_052AA2: ;
    ITR(0x52AA2U, 18);
    { /* 052AA2 052aa2 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52AA4U);
    }
L_052AA4: ;
    ITR(0x52AA4U, 16);
    { /* 052AA4 052aa4 rts src=None dst=None */
        RTS();
    }
}

void dwam_051CD8(void)
{
    FN_ENTER(0x51CD8U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51CDCU: goto L_051CDC;
        case 0x51CE0U: goto L_051CE0;
        case 0x51CE4U: goto L_051CE4;
        case 0x51CE8U: goto L_051CE8;
        case 0x51CECU: goto L_051CEC;
        case 0x51CF0U: goto L_051CF0;
        case 0x51CF4U: goto L_051CF4;
        case 0x51CF8U: goto L_051CF8;
        case 0x51CFCU: goto L_051CFC;
        case 0x51D00U: goto L_051D00;
        case 0x51D08U: goto L_051D08;
        case 0x51D10U: goto L_051D10;
        default: break; } }
L_051CD8: ;
    ITR(0x51CD8U, 13);
    { /* 051CD8 051cd8 scc.b src=None dst=EA(d16 r=3 d=1578 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x62AU);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051CDC: ;
    ITR(0x51CDCU, 13);
    { /* 051CDC 051cdc scc.b src=None dst=EA(d16 r=3 d=1580 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x62CU);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051CE0: ;
    ITR(0x51CE0U, 13);
    { /* 051CE0 051ce0 scc.b src=None dst=EA(d16 r=3 d=5204 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x1454U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051CE4: ;
    ITR(0x51CE4U, 13);
    { /* 051CE4 051ce4 scc.b src=None dst=EA(d16 r=3 d=5240 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x1478U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051CE8: ;
    ITR(0x51CE8U, 13);
    { /* 051CE8 051ce8 scc.b src=None dst=EA(d16 r=3 d=5276 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x149CU);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051CEC: ;
    ITR(0x51CECU, 13);
    { /* 051CEC 051cec scc.b src=None dst=EA(d16 r=3 d=5312 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x14C0U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051CF0: ;
    ITR(0x51CF0U, 16);
    { /* 051CF0 051cf0 clr.w src=None dst=EA(d16 r=3 d=5334 v=0) */
        wr16((a3 + 0x14D6U), 0);
    }
L_051CF4: ;
    ITR(0x51CF4U, 16);
    { /* 051CF4 051cf4 clr.w src=None dst=EA(d16 r=3 d=5346 v=0) */
        wr16((a3 + 0x14E2U), 0);
    }
L_051CF8: ;
    ITR(0x51CF8U, 16);
    { /* 051CF8 051cf8 clr.w src=None dst=EA(d16 r=3 d=5358 v=0) */
        wr16((a3 + 0x14EEU), 0);
    }
L_051CFC: ;
    ITR(0x51CFCU, 16);
    { /* 051CFC 051cfc clr.w src=None dst=EA(d16 r=3 d=5370 v=0) */
        wr16((a3 + 0x14FAU), 0);
    }
L_051D00: ;
    ITR(0x51D00U, 20);
    { /* 051D00 051d00 move.w src=EA(imm r=0 d=0 v=f) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = 0xFU;
        wr16(0xDFF096U, t1);
        }
    }
L_051D08: ;
    ITR(0x51D08U, 20);
    { /* 051D08 051d08 move.w src=EA(imm r=0 d=0 v=ff) dst=EA(absl r=0 d=0 v=dff09e) */
        { uint32_t t1 = 0xFFU;
        wr16(0xDFF09EU, t1);
        FLAGS_LOGIC(t1, 0xFFFFU, 0x8000U);
        }
    }
L_051D10: ;
    ITR(0x51D10U, 16);
    { /* 051D10 051d10 rts src=None dst=None */
        RTS();
    }
}

void dwam_051D12(void)
{
    FN_ENTER(0x51D12U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51912U: goto L_051912;
        case 0x519A0U: goto L_0519A0;
        case 0x519A4U: goto L_0519A4;
        case 0x519A6U: goto L_0519A6;
        case 0x519AAU: goto L_0519AA;
        case 0x519ACU: goto L_0519AC;
        case 0x519B0U: goto L_0519B0;
        case 0x519B6U: goto L_0519B6;
        case 0x519BAU: goto L_0519BA;
        case 0x519BCU: goto L_0519BC;
        case 0x519C0U: goto L_0519C0;
        case 0x519C2U: goto L_0519C2;
        case 0x519C4U: goto L_0519C4;
        case 0x519C6U: goto L_0519C6;
        case 0x519C8U: goto L_0519C8;
        case 0x519CCU: goto L_0519CC;
        case 0x519D0U: goto L_0519D0;
        case 0x519D4U: goto L_0519D4;
        case 0x519D6U: goto L_0519D6;
        case 0x519DAU: goto L_0519DA;
        case 0x519DEU: goto L_0519DE;
        case 0x519E0U: goto L_0519E0;
        case 0x519E4U: goto L_0519E4;
        case 0x519E6U: goto L_0519E6;
        case 0x519E8U: goto L_0519E8;
        case 0x519ECU: goto L_0519EC;
        case 0x519EEU: goto L_0519EE;
        case 0x519F2U: goto L_0519F2;
        case 0x519F6U: goto L_0519F6;
        case 0x519FAU: goto L_0519FA;
        case 0x519FCU: goto L_0519FC;
        case 0x51A00U: goto L_051A00;
        case 0x51A04U: goto L_051A04;
        case 0x51A06U: goto L_051A06;
        case 0x51A0CU: goto L_051A0C;
        case 0x51A12U: goto L_051A12;
        case 0x51A16U: goto L_051A16;
        case 0x51A18U: goto L_051A18;
        case 0x51A1EU: goto L_051A1E;
        case 0x51A24U: goto L_051A24;
        case 0x51A28U: goto L_051A28;
        case 0x51A2AU: goto L_051A2A;
        case 0x51A30U: goto L_051A30;
        case 0x51A34U: goto L_051A34;
        case 0x51A38U: goto L_051A38;
        case 0x51A3AU: goto L_051A3A;
        case 0x51A3EU: goto L_051A3E;
        case 0x51A40U: goto L_051A40;
        case 0x51A42U: goto L_051A42;
        case 0x51A44U: goto L_051A44;
        case 0x51A4AU: goto L_051A4A;
        case 0x51A4EU: goto L_051A4E;
        case 0x51A52U: goto L_051A52;
        case 0x51A54U: goto L_051A54;
        case 0x51A56U: goto L_051A56;
        case 0x51A5AU: goto L_051A5A;
        case 0x51A5EU: goto L_051A5E;
        case 0x51A62U: goto L_051A62;
        case 0x51A66U: goto L_051A66;
        case 0x51A6AU: goto L_051A6A;
        case 0x51A6CU: goto L_051A6C;
        case 0x51A70U: goto L_051A70;
        case 0x51A76U: goto L_051A76;
        case 0x51A78U: goto L_051A78;
        case 0x51A7EU: goto L_051A7E;
        case 0x51A84U: goto L_051A84;
        case 0x51A88U: goto L_051A88;
        case 0x51A8AU: goto L_051A8A;
        case 0x51A8CU: goto L_051A8C;
        case 0x51A90U: goto L_051A90;
        case 0x51A94U: goto L_051A94;
        case 0x51A96U: goto L_051A96;
        case 0x51A9CU: goto L_051A9C;
        case 0x51AA2U: goto L_051AA2;
        case 0x51AA6U: goto L_051AA6;
        case 0x51AAAU: goto L_051AAA;
        case 0x51AAEU: goto L_051AAE;
        case 0x51AB2U: goto L_051AB2;
        case 0x51AB4U: goto L_051AB4;
        case 0x51AB6U: goto L_051AB6;
        case 0x51ABAU: goto L_051ABA;
        case 0x51ABCU: goto L_051ABC;
        case 0x51ABEU: goto L_051ABE;
        case 0x51AC2U: goto L_051AC2;
        case 0x51AC6U: goto L_051AC6;
        case 0x51AC8U: goto L_051AC8;
        case 0x51ACCU: goto L_051ACC;
        case 0x51AD0U: goto L_051AD0;
        case 0x51AD4U: goto L_051AD4;
        case 0x51ADAU: goto L_051ADA;
        case 0x51ADEU: goto L_051ADE;
        case 0x51AE0U: goto L_051AE0;
        case 0x51AE6U: goto L_051AE6;
        case 0x51AE8U: goto L_051AE8;
        case 0x51AECU: goto L_051AEC;
        case 0x51AF0U: goto L_051AF0;
        case 0x51AF4U: goto L_051AF4;
        case 0x51AF8U: goto L_051AF8;
        case 0x51AFCU: goto L_051AFC;
        case 0x51B00U: goto L_051B00;
        case 0x51B04U: goto L_051B04;
        case 0x51B06U: goto L_051B06;
        case 0x51B0AU: goto L_051B0A;
        case 0x51B0CU: goto L_051B0C;
        case 0x51B10U: goto L_051B10;
        case 0x51B14U: goto L_051B14;
        case 0x51B16U: goto L_051B16;
        case 0x51B1AU: goto L_051B1A;
        case 0x51B1EU: goto L_051B1E;
        case 0x51B22U: goto L_051B22;
        case 0x51B24U: goto L_051B24;
        case 0x51B26U: goto L_051B26;
        case 0x51B2AU: goto L_051B2A;
        case 0x51B2CU: goto L_051B2C;
        case 0x51B2EU: goto L_051B2E;
        case 0x51B34U: goto L_051B34;
        case 0x51B36U: goto L_051B36;
        case 0x51B3AU: goto L_051B3A;
        case 0x51B3CU: goto L_051B3C;
        case 0x51B40U: goto L_051B40;
        case 0x51B42U: goto L_051B42;
        case 0x51B46U: goto L_051B46;
        case 0x51B48U: goto L_051B48;
        case 0x51B4CU: goto L_051B4C;
        case 0x51B50U: goto L_051B50;
        case 0x51B54U: goto L_051B54;
        case 0x51B56U: goto L_051B56;
        case 0x51B58U: goto L_051B58;
        case 0x51B5CU: goto L_051B5C;
        case 0x51B60U: goto L_051B60;
        case 0x51B64U: goto L_051B64;
        case 0x51B68U: goto L_051B68;
        case 0x51B6AU: goto L_051B6A;
        case 0x51B70U: goto L_051B70;
        case 0x51B72U: goto L_051B72;
        case 0x51B76U: goto L_051B76;
        case 0x51B7AU: goto L_051B7A;
        case 0x51B7EU: goto L_051B7E;
        case 0x51B80U: goto L_051B80;
        case 0x51B86U: goto L_051B86;
        case 0x51B8AU: goto L_051B8A;
        case 0x51B8CU: goto L_051B8C;
        case 0x51B92U: goto L_051B92;
        case 0x51B94U: goto L_051B94;
        case 0x51B9AU: goto L_051B9A;
        case 0x51B9CU: goto L_051B9C;
        case 0x51B9EU: goto L_051B9E;
        case 0x51BA0U: goto L_051BA0;
        case 0x51BA2U: goto L_051BA2;
        case 0x51BA6U: goto L_051BA6;
        case 0x51BAAU: goto L_051BAA;
        case 0x51BACU: goto L_051BAC;
        case 0x51BB0U: goto L_051BB0;
        case 0x51BB4U: goto L_051BB4;
        case 0x51BB6U: goto L_051BB6;
        case 0x51BBCU: goto L_051BBC;
        case 0x51BC0U: goto L_051BC0;
        case 0x51BC2U: goto L_051BC2;
        case 0x51BC4U: goto L_051BC4;
        case 0x51BC8U: goto L_051BC8;
        case 0x51BCCU: goto L_051BCC;
        case 0x51BD0U: goto L_051BD0;
        case 0x51BD2U: goto L_051BD2;
        case 0x51BD4U: goto L_051BD4;
        case 0x51BD8U: goto L_051BD8;
        case 0x51BDCU: goto L_051BDC;
        case 0x51BDEU: goto L_051BDE;
        case 0x51BE2U: goto L_051BE2;
        case 0x51BE6U: goto L_051BE6;
        case 0x51BEAU: goto L_051BEA;
        case 0x51BECU: goto L_051BEC;
        case 0x51BF0U: goto L_051BF0;
        case 0x51BF4U: goto L_051BF4;
        case 0x51BF8U: goto L_051BF8;
        case 0x51BFCU: goto L_051BFC;
        case 0x51C00U: goto L_051C00;
        case 0x51C02U: goto L_051C02;
        case 0x51C06U: goto L_051C06;
        case 0x51C0AU: goto L_051C0A;
        case 0x51C0EU: goto L_051C0E;
        case 0x51C10U: goto L_051C10;
        case 0x51C14U: goto L_051C14;
        case 0x51C18U: goto L_051C18;
        case 0x51C1CU: goto L_051C1C;
        case 0x51C1EU: goto L_051C1E;
        case 0x51C22U: goto L_051C22;
        case 0x51C24U: goto L_051C24;
        case 0x51C28U: goto L_051C28;
        case 0x51C2CU: goto L_051C2C;
        case 0x51C2EU: goto L_051C2E;
        case 0x51C32U: goto L_051C32;
        case 0x51C38U: goto L_051C38;
        case 0x51C3CU: goto L_051C3C;
        case 0x51C40U: goto L_051C40;
        case 0x51C42U: goto L_051C42;
        case 0x51C46U: goto L_051C46;
        case 0x51C48U: goto L_051C48;
        case 0x51C4CU: goto L_051C4C;
        case 0x51C50U: goto L_051C50;
        case 0x51C52U: goto L_051C52;
        case 0x51C56U: goto L_051C56;
        case 0x51C5AU: goto L_051C5A;
        case 0x51C5EU: goto L_051C5E;
        case 0x51C60U: goto L_051C60;
        case 0x51C64U: goto L_051C64;
        case 0x51C68U: goto L_051C68;
        case 0x51D16U: goto L_051D16;
        case 0x52A44U: goto L_052A44;
        case 0x52A48U: goto L_052A48;
        case 0x52A4CU: goto L_052A4C;
        case 0x52A4EU: goto L_052A4E;
        case 0x52A54U: goto L_052A54;
        case 0x52A56U: goto L_052A56;
        case 0x52A5AU: goto L_052A5A;
        case 0x52A5CU: goto L_052A5C;
        case 0x52A60U: goto L_052A60;
        case 0x52A64U: goto L_052A64;
        case 0x52A66U: goto L_052A66;
        case 0x52A6CU: goto L_052A6C;
        case 0x52A6EU: goto L_052A6E;
        case 0x52A72U: goto L_052A72;
        case 0x52A74U: goto L_052A74;
        case 0x52A78U: goto L_052A78;
        case 0x52A7CU: goto L_052A7C;
        case 0x52A7EU: goto L_052A7E;
        case 0x52A84U: goto L_052A84;
        case 0x52A86U: goto L_052A86;
        case 0x52A8AU: goto L_052A8A;
        case 0x52A8CU: goto L_052A8C;
        case 0x52A90U: goto L_052A90;
        case 0x52A94U: goto L_052A94;
        case 0x52A96U: goto L_052A96;
        case 0x52A9CU: goto L_052A9C;
        case 0x52A9EU: goto L_052A9E;
        case 0x52AA2U: goto L_052AA2;
        case 0x52AA4U: goto L_052AA4;
        default: break; } }
    goto L_051D12;
L_051912: ;
    ITR(0x51912U, 10);
    { /* 051912 051912 bra src=None dst=None cc=0 */
        goto L_052A44;
    }
L_0519A0: ;
    ITR(0x519A0U, 8);
    { /* 0519A0 0519a0 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_0519A4: ;
    ITR(0x519A4U, 4);
    { /* 0519A4 0519a4 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519A6: ;
    ITR(0x519A6U, 74);
    { /* 0519A6 0519a6 mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_0519AA: ;
    ITR(0x519AAU, 8);
    { /* 0519AA 0519aa adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=4 d=0 v=0) */
        a4 += SX16((d0 & 0xFFFF));
    }
L_0519AC: ;
    ITR(0x519ACU, 13);
    { /* 0519AC 0519ac scc.b src=None dst=EA(d16 r=4 d=10 v=0) cc=0 */
        { uint32_t t2 = (a4 + 0xAU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519B0: ;
    ITR(0x519B0U, 12);
    { /* 0519B0 0519b0 lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=6 d=0 v=0) */
        a6 = 0xDFF000U;
    }
L_0519B6: ;
    ITR(0x519B6U, 8);
    { /* 0519B6 0519b6 move.w src=EA(imm r=0 d=0 v=30) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x30U;
        SETW(d0, t1);
        }
    }
L_0519BA: ;
    ITR(0x519BAU, 70);
    { /* 0519BA 0519ba mulu.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d7 & 0xFFFF);
        d0 = t1;
        }
    }
L_0519BC: ;
    ITR(0x519BCU, 8);
    { /* 0519BC 0519bc lea.l src=EA(pcd r=0 d=0 v=51d9a) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x51D9AU;
    }
L_0519C0: ;
    ITR(0x519C0U, 8);
    { /* 0519C0 0519c0 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 += SX16((d0 & 0xFFFF));
    }
L_0519C2: ;
    ITR(0x519C2U, 4);
    { /* 0519C2 0519c2 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519C4: ;
    ITR(0x519C4U, 14);
    { /* 0519C4 0519c4 lsl.w src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 1, (d0 & 0xFFFF), 4, 16);
        SETW(d0, t1);
        }
    }
L_0519C6: ;
    ITR(0x519C6U, 8);
    { /* 0519C6 0519c6 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=6 d=0 v=0) */
        a6 += SX16((d0 & 0xFFFF));
    }
L_0519C8: ;
    ITR(0x519C8U, 16);
    { /* 0519C8 0519c8 movea.l src=EA(d16 r=0 d=4 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x4U));
    }
L_0519CC: ;
    ITR(0x519CCU, 16);
    { /* 0519CC 0519cc movea.l src=EA(d16 r=0 d=24 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 = rd32((a0 + 0x18U));
    }
L_0519D0: ;
    ITR(0x519D0U, 12);
    { /* 0519D0 0519d0 tst.b src=None dst=EA(d16 r=0 d=22 v=0) */
        { uint32_t t = rd8((a0 + 0x16U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519D4: ;
    ITR(0x519D4U, 8);
    { /* 0519D4 0519d4 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_0519D6: ;
    ITR(0x519D6U, 13);
    { /* 0519D6 0519d6 scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=0 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519DA: ;
    ITR(0x519DAU, 16);
    { /* 0519DA 0519da move.l src=EA(d16 r=5 d=4 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x4U));
        d0 = t1;
        FLAGS_LOGIC(t1, 0xFFFFFFFFU, 0x80000000U);
        }
    }
L_0519DE: ;
    ITR(0x519DEU, 8);
    { /* 0519DE 0519de bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051A06;
    }
L_0519E0: ;
    ITR(0x519E0U, 16);
    { /* 0519E0 0519e0 movea.l src=EA(d16 r=5 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a5 + 0x0U));
    }
L_0519E4: ;
    ITR(0x519E4U, 6);
    { /* 0519E4 0519e4 adda.l src=EA(dn r=0 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += d0;
    }
L_0519E6: ;
    ITR(0x519E6U, 10);
    { /* 0519E6 0519e6 lsr.l src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, 1, 32);
        d0 = t1;
        }
    }
L_0519E8: ;
    ITR(0x519E8U, 12);
    { /* 0519E8 0519e8 move.w src=EA(d16 r=5 d=8 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        SETW(d1, t1);
        }
    }
L_0519EC: ;
    ITR(0x519ECU, 4);
    { /* 0519EC 0519ec sub.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_0519EE: ;
    ITR(0x519EEU, 20);
    { /* 0519EE 0519ee move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = a2;
        wr32((a4 + 0x0U), t1);
        }
    }
L_0519F2: ;
    ITR(0x519F2U, 12);
    { /* 0519F2 0519f2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x4U), t1);
        }
    }
L_0519F6: ;
    ITR(0x519F6U, 12);
    { /* 0519F6 0519f6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519FA: ;
    ITR(0x519FAU, 8);
    { /* 0519FA 0519fa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A04;
    }
L_0519FC: ;
    ITR(0x519FCU, 20);
    { /* 0519FC 0519fc move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = a2;
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A00: ;
    ITR(0x51A00U, 12);
    { /* 051A00 051a00 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A04: ;
    ITR(0x51A04U, 10);
    { /* 051A04 051a04 bra src=None dst=None cc=0 */
        goto L_051A24;
    }
L_051A06: ;
    ITR(0x51A06U, 32);
    { /* 051A06 051a06 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A0C: ;
    ITR(0x51A0CU, 16);
    { /* 051A0C 051a0c move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A12: ;
    ITR(0x51A12U, 12);
    { /* 051A12 051a12 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A16: ;
    ITR(0x51A16U, 8);
    { /* 051A16 051a16 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_051A18: ;
    ITR(0x51A18U, 32);
    { /* 051A18 051a18 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A1E: ;
    ITR(0x51A1EU, 16);
    { /* 051A1E 051a1e move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A24: ;
    ITR(0x51A24U, 16);
    { /* 051A24 051a24 subq.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        wr16(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A28: ;
    ITR(0x51A28U, 8);
    { /* 051A28 051a28 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4E;
    }
L_051A2A: ;
    ITR(0x51A2AU, 16);
    { /* 051A2A 051a2a cmpi.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A30: ;
    ITR(0x51A30U, 8);
    { /* 051A30 051a30 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AF4;
    }
L_051A34: ;
    ITR(0x51A34U, 12);
    { /* 051A34 051a34 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A38: ;
    ITR(0x51A38U, 8);
    { /* 051A38 051a38 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A4A;
    }
L_051A3A: ;
    ITR(0x51A3AU, 12);
    { /* 051A3A 051a3a cmpi.b src=EA(imm r=0 d=0 v=83) dst=EA(ind r=1 d=0 v=0) */
        { uint32_t t1 = 0x83U;
        uint32_t t4 = a1;
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051A3E: ;
    ITR(0x51A3EU, 8);
    { /* 051A3E 051a3e bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4A;
    }
L_051A40: ;
    ITR(0x51A40U, 4);
    { /* 051A40 051a40 clr.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, 0);
    }
L_051A42: ;
    ITR(0x51A42U, 8);
    { /* 051A42 051a42 bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051A44: ;
    ITR(0x51A44U, 16);
    { /* 051A44 051a44 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051A4A: ;
    ITR(0x51A4AU, 10);
    { /* 051A4A 051a4a bra src=None dst=None cc=0 */
        goto L_051AE6;
    }
L_051A4E: ;
    ITR(0x51A4EU, 16);
    { /* 051A4E 051a4e clr.b src=None dst=EA(d16 r=0 d=0 v=0) */
        wr8((a0 + 0x0U), 0);
    }
L_051A52: ;
    ITR(0x51A52U, 4);
    { /* 051A52 051a52 moveq.l src=EA(imm r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        d0 = 0x0U;
    }
L_051A54: ;
    ITR(0x51A54U, 8);
    { /* 051A54 051a54 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d0, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051A56: ;
    ITR(0x51A56U, 8);
    { /* 051A56 051a56 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BE6;
    }
L_051A5A: ;
    ITR(0x51A5AU, 12);
    { /* 051A5A 051a5a move.b src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=2 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        wr8((a0 + 0x2U), t1);
        }
    }
L_051A5E: ;
    ITR(0x51A5EU, 12);
    { /* 051A5E 051a5e add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A62: ;
    ITR(0x51A62U, 12);
    { /* 051A62 051a62 add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A66: ;
    ITR(0x51A66U, 16);
    { /* 051A66 051a66 movea.l src=EA(d16 r=0 d=34 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x22U));
    }
L_051A6A: ;
    ITR(0x51A6AU, 8);
    { /* 051A6A 051a6a move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051A6C: ;
    ITR(0x51A6CU, 20);
    { /* 051A6C 051a6c move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051A70: ;
    ITR(0x51A70U, 20);
    { /* 051A70 051a70 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051A76: ;
    ITR(0x51A76U, 4);
    { /* 051A76 051a76 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051A78: ;
    ITR(0x51A78U, 32);
    { /* 051A78 051a78 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A7E: ;
    ITR(0x51A7EU, 20);
    { /* 051A7E 051a7e move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A84: ;
    ITR(0x51A84U, 12);
    { /* 051A84 051a84 move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051A88: ;
    ITR(0x51A88U, 70);
    { /* 051A88 051a88 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051A8A: ;
    ITR(0x51A8AU, 18);
    { /* 051A8A 051a8a lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051A8C: ;
    ITR(0x51A8CU, 12);
    { /* 051A8C 051a8c move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051A90: ;
    ITR(0x51A90U, 12);
    { /* 051A90 051a90 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A94: ;
    ITR(0x51A94U, 8);
    { /* 051A94 051a94 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AA6;
    }
L_051A96: ;
    ITR(0x51A96U, 32);
    { /* 051A96 051a96 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A9C: ;
    ITR(0x51A9CU, 20);
    { /* 051A9C 051a9c move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051AA2: ;
    ITR(0x51AA2U, 12);
    { /* 051AA2 051aa2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051AA6: ;
    ITR(0x51AA6U, 8);
    { /* 051AA6 051aa6 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AAA: ;
    ITR(0x51AAAU, 8);
    { /* 051AAA 051aaa lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051AAE: ;
    ITR(0x51AAEU, 12);
    { /* 051AAE 051aae move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051AB2: ;
    ITR(0x51AB2U, 4);
    { /* 051AB2 051ab2 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051AB4: ;
    ITR(0x51AB4U, 4);
    { /* 051AB4 051ab4 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AB6: ;
    ITR(0x51AB6U, 14);
    { /* 051AB6 051ab6 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051ABA: ;
    ITR(0x51ABAU, 70);
    { /* 051ABA 051aba mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051ABC: ;
    ITR(0x51ABCU, 16);
    { /* 051ABC 051abc lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051ABE: ;
    ITR(0x51ABEU, 12);
    { /* 051ABE 051abe move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051AC2: ;
    ITR(0x51AC2U, 12);
    { /* 051AC2 051ac2 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051AC6: ;
    ITR(0x51AC6U, 8);
    { /* 051AC6 051ac6 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051ACC;
    }
L_051AC8: ;
    ITR(0x51AC8U, 12);
    { /* 051AC8 051ac8 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051ACC: ;
    ITR(0x51ACCU, 13);
    { /* 051ACC 051acc scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=1 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051AD0: ;
    ITR(0x51AD0U, 20);
    { /* 051AD0 051ad0 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=4 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x4U), t1);
        }
    }
L_051AD4: ;
    ITR(0x51AD4U, 20);
    { /* 051AD4 051ad4 move.w src=EA(d16 r=0 d=28 v=0) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = rd16((a0 + 0x1CU));
        wr16((a0 + 0x1EU), t1);
        }
    }
L_051ADA: ;
    ITR(0x51ADAU, 8);
    { /* 051ADA 051ada move.w src=EA(imm r=0 d=0 v=8200) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x8200U;
        SETW(d1, t1);
        }
    }
L_051ADE: ;
    ITR(0x51ADEU, 8);
    { /* 051ADE 051ade bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051AE0: ;
    ITR(0x51AE0U, 16);
    { /* 051AE0 051ae0 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051AE6: ;
    ITR(0x51AE6U, 4);
    { /* 051AE6 051ae6 addq.w src=EA(imm r=0 d=0 v=1) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d7, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFFFU, 0x8000U, 1);
        }
    }
L_051AE8: ;
    ITR(0x51AE8U, 8);
    { /* 051AE8 051ae8 cmp.w src=EA(imm r=0 d=0 v=4) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x4U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051AEC: ;
    ITR(0x51AECU, 10);
    { /* 051AEC 051aec bcc src=None dst=None cc=6 */
        if (COND_6) { BUDGET_CHECK(0x519A0U); goto L_0519A0; }
    }
L_051AF0: ;
    ITR(0x51AF0U, 10);
    { /* 051AF0 051af0 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51912U); goto L_051912; }
    }
L_051AF4: ;
    ITR(0x51AF4U, 12);
    { /* 051AF4 051af4 move.b src=EA(d16 r=0 d=2 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2U));
        SETB(d0, t1);
        }
    }
L_051AF8: ;
    ITR(0x51AF8U, 12);
    { /* 051AF8 051af8 add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051AFC: ;
    ITR(0x51AFCU, 12);
    { /* 051AFC 051afc add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B00: ;
    ITR(0x51B00U, 16);
    { /* 051B00 051b00 movea.l src=EA(d16 r=0 d=16 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x10U));
    }
L_051B04: ;
    ITR(0x51B04U, 8);
    { /* 051B04 051b04 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051B06: ;
    ITR(0x51B06U, 12);
    { /* 051B06 051b06 bclr.l src=EA(imm r=0 d=0 v=7) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (0x7U) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 & ~(1u << t1);
        }
    }
L_051B0A: ;
    ITR(0x51B0AU, 8);
    { /* 051B0A 051b0a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B10;
    }
L_051B0C: ;
    ITR(0x51B0CU, 16);
    { /* 051B0C 051b0c movea.l src=EA(d16 r=0 d=12 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0xCU));
    }
L_051B10: ;
    ITR(0x51B10U, 20);
    { /* 051B10 051b10 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051B14: ;
    ITR(0x51B14U, 4);
    { /* 051B14 051b14 add.b src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B16: ;
    ITR(0x51B16U, 8);
    { /* 051B16 051b16 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B1A: ;
    ITR(0x51B1AU, 8);
    { /* 051B1A 051b1a lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051B1E: ;
    ITR(0x51B1EU, 12);
    { /* 051B1E 051b1e move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051B22: ;
    ITR(0x51B22U, 4);
    { /* 051B22 051b22 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051B24: ;
    ITR(0x51B24U, 4);
    { /* 051B24 051b24 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B26: ;
    ITR(0x51B26U, 14);
    { /* 051B26 051b26 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051B2A: ;
    ITR(0x51B2AU, 70);
    { /* 051B2A 051b2a mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051B2C: ;
    ITR(0x51B2CU, 16);
    { /* 051B2C 051b2c lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051B2E: ;
    ITR(0x51B2EU, 16);
    { /* 051B2E 051b2e btst.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=0 v=0) */
        { uint32_t t1 = (0x1U) & 7;
        uint32_t t3 = (a0 + 0x0U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B34: ;
    ITR(0x51B34U, 8);
    { /* 051B34 051b34 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B50;
    }
L_051B36: ;
    ITR(0x51B36U, 12);
    { /* 051B36 051b36 tst.b src=None dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t = rd8((a0 + 0x15U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B3A: ;
    ITR(0x51B3AU, 8);
    { /* 051B3A 051b3a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B42;
    }
L_051B3C: ;
    ITR(0x51B3CU, 16);
    { /* 051B3C 051b3c subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x15U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        }
    }
L_051B40: ;
    ITR(0x51B40U, 10);
    { /* 051B40 051b40 bra src=None dst=None cc=0 */
        goto L_051B50;
    }
L_051B42: ;
    ITR(0x51B42U, 12);
    { /* 051B42 051b42 move.b src=EA(d16 r=0 d=20 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x14U));
        SETB(d1, t1);
        }
    }
L_051B46: ;
    ITR(0x51B46U, 4);
    { /* 051B46 051b46 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B48: ;
    ITR(0x51B48U, 16);
    { /* 051B48 051b48 add.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=32 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t4 = (a0 + 0x20U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        wr16(t4, t3);
        }
    }
L_051B4C: ;
    ITR(0x51B4CU, 12);
    { /* 051B4C 051b4c sub.w src=EA(d16 r=0 d=32 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a0 + 0x20U));
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B50: ;
    ITR(0x51B50U, 12);
    { /* 051B50 051b50 tst.b src=None dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t = rd8((a0 + 0x1U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B54: ;
    ITR(0x51B54U, 8);
    { /* 051B54 051b54 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA2;
    }
L_051B56: ;
    ITR(0x51B56U, 8);
    { /* 051B56 051b56 bcc src=None dst=None cc=10 */
        if (COND_10) goto L_051B72;
    }
L_051B58: ;
    ITR(0x51B58U, 12);
    { /* 051B58 051b58 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B5C: ;
    ITR(0x51B5CU, 12);
    { /* 051B5C 051b5c add.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B60: ;
    ITR(0x51B60U, 12);
    { /* 051B60 051b60 move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        }
    }
L_051B64: ;
    ITR(0x51B64U, 12);
    { /* 051B64 051b64 cmp.b src=EA(d16 r=0 d=46 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2EU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051B68: ;
    ITR(0x51B68U, 8);
    { /* 051B68 051b68 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B6A: ;
    ITR(0x51B6AU, 20);
    { /* 051B6A 051b6a bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B70: ;
    ITR(0x51B70U, 10);
    { /* 051B70 051b70 bra src=None dst=None cc=0 */
        goto L_051B86;
    }
L_051B72: ;
    ITR(0x51B72U, 12);
    { /* 051B72 051b72 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B76: ;
    ITR(0x51B76U, 12);
    { /* 051B76 051b76 sub.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B7A: ;
    ITR(0x51B7AU, 12);
    { /* 051B7A 051b7a move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051B7E: ;
    ITR(0x51B7EU, 8);
    { /* 051B7E 051b7e bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B80: ;
    ITR(0x51B80U, 20);
    { /* 051B80 051b80 bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B86: ;
    ITR(0x51B86U, 12);
    { /* 051B86 051b86 tst.b src=None dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t = rd8((a0 + 0x2DU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B8A: ;
    ITR(0x51B8AU, 8);
    { /* 051B8A 051b8a bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B92;
    }
L_051B8C: ;
    ITR(0x51B8CU, 20);
    { /* 051B8C 051b8c bchg.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B92: ;
    ITR(0x51B92U, 4);
    { /* 051B92 051b92 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B94: ;
    ITR(0x51B94U, 16);
    { /* 051B94 051b94 btst.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B9A: ;
    ITR(0x51B9AU, 8);
    { /* 051B9A 051b9a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA0;
    }
L_051B9C: ;
    ITR(0x51B9CU, 4);
    { /* 051B9C 051b9c add.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B9E: ;
    ITR(0x51B9EU, 10);
    { /* 051B9E 051b9e bra src=None dst=None cc=0 */
        goto L_051BA2;
    }
L_051BA0: ;
    ITR(0x51BA0U, 4);
    { /* 051BA0 051ba0 sub.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051BA2: ;
    ITR(0x51BA2U, 12);
    { /* 051BA2 051ba2 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051BA6: ;
    ITR(0x51BA6U, 12);
    { /* 051BA6 051ba6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BAA: ;
    ITR(0x51BAAU, 8);
    { /* 051BAA 051baa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BB0;
    }
L_051BAC: ;
    ITR(0x51BACU, 12);
    { /* 051BAC 051bac move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051BB0: ;
    ITR(0x51BB0U, 16);
    { /* 051BB0 051bb0 subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x2BU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BB4: ;
    ITR(0x51BB4U, 8);
    { /* 051BB4 051bb4 bcc src=None dst=None cc=4 */
        if (COND_4) goto L_051BE2;
    }
L_051BB6: ;
    ITR(0x51BB6U, 20);
    { /* 051BB6 051bb6 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051BBC: ;
    ITR(0x51BBCU, 16);
    { /* 051BBC 051bbc movea.l src=EA(d16 r=0 d=38 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x26U));
    }
L_051BC0: ;
    ITR(0x51BC0U, 8);
    { /* 051BC0 051bc0 move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051BC2: ;
    ITR(0x51BC2U, 8);
    { /* 051BC2 051bc2 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BC8;
    }
L_051BC4: ;
    ITR(0x51BC4U, 20);
    { /* 051BC4 051bc4 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051BC8: ;
    ITR(0x51BC8U, 8);
    { /* 051BC8 051bc8 andi.w src=EA(imm r=0 d=0 v=7f) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x7FU;
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_051BCC: ;
    ITR(0x51BCCU, 12);
    { /* 051BCC 051bcc move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051BD0: ;
    ITR(0x51BD0U, 70);
    { /* 051BD0 051bd0 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051BD2: ;
    ITR(0x51BD2U, 18);
    { /* 051BD2 051bd2 lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051BD4: ;
    ITR(0x51BD4U, 12);
    { /* 051BD4 051bd4 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051BD8: ;
    ITR(0x51BD8U, 12);
    { /* 051BD8 051bd8 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BDC: ;
    ITR(0x51BDCU, 8);
    { /* 051BDC 051bdc bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BE2;
    }
L_051BDE: ;
    ITR(0x51BDEU, 12);
    { /* 051BDE 051bde move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051BE2: ;
    ITR(0x51BE2U, 10);
    { /* 051BE2 051be2 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51AE6U); goto L_051AE6; }
    }
L_051BE6: ;
    ITR(0x51BE6U, 8);
    { /* 051BE6 051be6 cmp.b src=EA(imm r=0 d=0 v=e0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xE0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BEA: ;
    ITR(0x51BEAU, 8);
    { /* 051BEA 051bea bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051BFC;
    }
L_051BEC: ;
    ITR(0x51BECU, 8);
    { /* 051BEC 051bec subi.b src=EA(imm r=0 d=0 v=df) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xDFU;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051BF0: ;
    ITR(0x51BF0U, 78);
    { /* 051BF0 051bf0 mulu.w src=EA(pcd r=0 d=0 v=51d82) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * rd16(0x51D82U);
        d0 = t1;
        }
    }
L_051BF4: ;
    ITR(0x51BF4U, 12);
    { /* 051BF4 051bf4 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=28 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a0 + 0x1CU), t1);
        }
    }
L_051BF8: ;
    ITR(0x51BF8U, 10);
    { /* 051BF8 051bf8 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051BFC: ;
    ITR(0x51BFCU, 8);
    { /* 051BFC 051bfc cmp.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C00: ;
    ITR(0x51C00U, 8);
    { /* 051C00 051c00 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C18;
    }
L_051C02: ;
    ITR(0x51C02U, 8);
    { /* 051C02 051c02 subi.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C06: ;
    ITR(0x51C06U, 8);
    { /* 051C06 051c06 lea.l src=EA(pcd r=0 d=0 v=51f3c) dst=EA(an r=5 d=0 v=0) */
        a5 = 0x51F3CU;
    }
L_051C0A: ;
    ITR(0x51C0AU, 74);
    { /* 051C0A 051c0a mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_051C0E: ;
    ITR(0x51C0EU, 8);
    { /* 051C0E 051c0e adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 += SX16((d0 & 0xFFFF));
    }
L_051C10: ;
    ITR(0x51C10U, 20);
    { /* 051C10 051c10 move.l src=EA(an r=5 d=0 v=0) dst=EA(d16 r=0 d=24 v=0) */
        { uint32_t t1 = a5;
        wr32((a0 + 0x18U), t1);
        }
    }
L_051C14: ;
    ITR(0x51C14U, 10);
    { /* 051C14 051c14 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C18: ;
    ITR(0x51C18U, 8);
    { /* 051C18 051c18 cmp.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C1C: ;
    ITR(0x51C1CU, 8);
    { /* 051C1C 051c1c bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C3C;
    }
L_051C1E: ;
    ITR(0x51C1EU, 8);
    { /* 051C1E 051c1e subi.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C22: ;
    ITR(0x51C22U, 4);
    { /* 051C22 051c22 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C24: ;
    ITR(0x51C24U, 8);
    { /* 051C24 051c24 lea.l src=EA(pcd r=0 d=0 v=52f1e) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x52F1EU;
    }
L_051C28: ;
    ITR(0x51C28U, 14);
    { /* 051C28 051c28 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C2C: ;
    ITR(0x51C2CU, 6);
    { /* 051C2C 051c2c adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C2E: ;
    ITR(0x51C2EU, 20);
    { /* 051C2E 051c2e move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=34 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x22U), t1);
        }
    }
L_051C32: ;
    ITR(0x51C32U, 20);
    { /* 051C32 051c32 move.b src=EA(d16 r=2 d=-1 v=0) dst=EA(d16 r=0 d=42 v=0) */
        { uint32_t t1 = rd8((a2 + 0xFFFFFFFFU));
        wr8((a0 + 0x2AU), t1);
        }
    }
L_051C38: ;
    ITR(0x51C38U, 10);
    { /* 051C38 051c38 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C3C: ;
    ITR(0x51C3CU, 8);
    { /* 051C3C 051c3c cmp.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C40: ;
    ITR(0x51C40U, 8);
    { /* 051C40 051c40 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C5E;
    }
L_051C42: ;
    ITR(0x51C42U, 8);
    { /* 051C42 051c42 subi.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C46: ;
    ITR(0x51C46U, 4);
    { /* 051C46 051c46 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C48: ;
    ITR(0x51C48U, 8);
    { /* 051C48 051c48 lea.l src=EA(pcd r=0 d=0 v=51eea) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51EEAU;
    }
L_051C4C: ;
    ITR(0x51C4CU, 14);
    { /* 051C4C 051c4c movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C50: ;
    ITR(0x51C50U, 6);
    { /* 051C50 051c50 adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C52: ;
    ITR(0x51C52U, 20);
    { /* 051C52 051c52 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=12 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0xCU), t1);
        }
    }
L_051C56: ;
    ITR(0x51C56U, 20);
    { /* 051C56 051c56 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051C5A: ;
    ITR(0x51C5AU, 10);
    { /* 051C5A 051c5a bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C5E: ;
    ITR(0x51C5EU, 4);
    { /* 051C5E 051c5e add.b src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_051C60: ;
    ITR(0x51C60U, 8);
    { /* 051C60 051c60 lea.l src=EA(pcd r=0 d=0 v=51d6a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51D6AU;
    }
L_051C64: ;
    ITR(0x51C64U, 14);
    { /* 051C64 051c64 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C68: ;
    ITR(0x51C68U, 14);
    { /* 051C68 051c68 jmp src=EA(idx r=3 d=0 v=0) dst=None */
        { call_dynamic((a3 + 0x0U + ((uint32_t)(int32_t)(int16_t)a2))); return; }
    }
L_051D12: ;
    ITR(0x51D12U, 16);
    { /* 051D12 051d12 move.b src=EA(post r=1 d=0 v=0) dst=EA(d16 r=3 d=1581 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        wr8((a3 + 0x62DU), t1);
        }
    }
L_051D16: ;
    ITR(0x51D16U, 10);
    { /* 051D16 051d16 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_052A44: ;
    ITR(0x52A44U, 8);
    { /* 052A44 052a44 lea.l src=EA(pcd r=0 d=0 v=52b9c) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52B9CU;
    }
L_052A48: ;
    ITR(0x52A48U, 12);
    { /* 052A48 052a48 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A4C: ;
    ITR(0x52A4CU, 8);
    { /* 052A4C 052a4c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A5C;
    }
L_052A4E: ;
    ITR(0x52A4EU, 12);
    { /* 052A4E 052a4e lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF000U;
    }
L_052A54: ;
    ITR(0x52A54U, 4);
    { /* 052A54 052a54 moveq.l src=EA(imm r=0 d=0 v=1) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x1U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A56: ;
    ITR(0x52A56U, 8);
    { /* 052A56 052a56 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_052A5A: ;
    ITR(0x52A5AU, 18);
    { /* 052A5A 052a5a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A5CU);
    }
L_052A5C: ;
    ITR(0x52A5CU, 8);
    { /* 052A5C 052a5c lea.l src=EA(pcd r=0 d=0 v=52bc0) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BC0U;
    }
L_052A60: ;
    ITR(0x52A60U, 12);
    { /* 052A60 052a60 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A64: ;
    ITR(0x52A64U, 8);
    { /* 052A64 052a64 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A74;
    }
L_052A66: ;
    ITR(0x52A66U, 12);
    { /* 052A66 052a66 lea.l src=EA(absl r=0 d=0 v=dff010) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF010U;
    }
L_052A6C: ;
    ITR(0x52A6CU, 4);
    { /* 052A6C 052a6c moveq.l src=EA(imm r=0 d=0 v=2) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x2U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A6E: ;
    ITR(0x52A6EU, 8);
    { /* 052A6E 052a6e lea.l src=EA(pcd r=0 d=0 v=52c3a) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C3AU;
    }
L_052A72: ;
    ITR(0x52A72U, 18);
    { /* 052A72 052a72 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A74U);
    }
L_052A74: ;
    ITR(0x52A74U, 8);
    { /* 052A74 052a74 lea.l src=EA(pcd r=0 d=0 v=52be4) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BE4U;
    }
L_052A78: ;
    ITR(0x52A78U, 12);
    { /* 052A78 052a78 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A7C: ;
    ITR(0x52A7CU, 8);
    { /* 052A7C 052a7c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A8C;
    }
L_052A7E: ;
    ITR(0x52A7EU, 12);
    { /* 052A7E 052a7e lea.l src=EA(absl r=0 d=0 v=dff020) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF020U;
    }
L_052A84: ;
    ITR(0x52A84U, 4);
    { /* 052A84 052a84 moveq.l src=EA(imm r=0 d=0 v=4) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x4U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A86: ;
    ITR(0x52A86U, 8);
    { /* 052A86 052a86 lea.l src=EA(pcd r=0 d=0 v=52c46) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C46U;
    }
L_052A8A: ;
    ITR(0x52A8AU, 18);
    { /* 052A8A 052a8a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A8CU);
    }
L_052A8C: ;
    ITR(0x52A8CU, 8);
    { /* 052A8C 052a8c lea.l src=EA(pcd r=0 d=0 v=52c08) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52C08U;
    }
L_052A90: ;
    ITR(0x52A90U, 12);
    { /* 052A90 052a90 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A94: ;
    ITR(0x52A94U, 8);
    { /* 052A94 052a94 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052AA4;
    }
L_052A96: ;
    ITR(0x52A96U, 12);
    { /* 052A96 052a96 lea.l src=EA(absl r=0 d=0 v=dff030) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF030U;
    }
L_052A9C: ;
    ITR(0x52A9CU, 4);
    { /* 052A9C 052a9c moveq.l src=EA(imm r=0 d=0 v=8) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x8U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A9E: ;
    ITR(0x52A9EU, 8);
    { /* 052A9E 052a9e lea.l src=EA(pcd r=0 d=0 v=52c52) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C52U;
    }
L_052AA2: ;
    ITR(0x52AA2U, 18);
    { /* 052AA2 052aa2 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52AA4U);
    }
L_052AA4: ;
    ITR(0x52AA4U, 16);
    { /* 052AA4 052aa4 rts src=None dst=None */
        RTS();
    }
}

void dwam_051D1A(void)
{
    FN_ENTER(0x51D1AU);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51912U: goto L_051912;
        case 0x519A0U: goto L_0519A0;
        case 0x519A4U: goto L_0519A4;
        case 0x519A6U: goto L_0519A6;
        case 0x519AAU: goto L_0519AA;
        case 0x519ACU: goto L_0519AC;
        case 0x519B0U: goto L_0519B0;
        case 0x519B6U: goto L_0519B6;
        case 0x519BAU: goto L_0519BA;
        case 0x519BCU: goto L_0519BC;
        case 0x519C0U: goto L_0519C0;
        case 0x519C2U: goto L_0519C2;
        case 0x519C4U: goto L_0519C4;
        case 0x519C6U: goto L_0519C6;
        case 0x519C8U: goto L_0519C8;
        case 0x519CCU: goto L_0519CC;
        case 0x519D0U: goto L_0519D0;
        case 0x519D4U: goto L_0519D4;
        case 0x519D6U: goto L_0519D6;
        case 0x519DAU: goto L_0519DA;
        case 0x519DEU: goto L_0519DE;
        case 0x519E0U: goto L_0519E0;
        case 0x519E4U: goto L_0519E4;
        case 0x519E6U: goto L_0519E6;
        case 0x519E8U: goto L_0519E8;
        case 0x519ECU: goto L_0519EC;
        case 0x519EEU: goto L_0519EE;
        case 0x519F2U: goto L_0519F2;
        case 0x519F6U: goto L_0519F6;
        case 0x519FAU: goto L_0519FA;
        case 0x519FCU: goto L_0519FC;
        case 0x51A00U: goto L_051A00;
        case 0x51A04U: goto L_051A04;
        case 0x51A06U: goto L_051A06;
        case 0x51A0CU: goto L_051A0C;
        case 0x51A12U: goto L_051A12;
        case 0x51A16U: goto L_051A16;
        case 0x51A18U: goto L_051A18;
        case 0x51A1EU: goto L_051A1E;
        case 0x51A24U: goto L_051A24;
        case 0x51A28U: goto L_051A28;
        case 0x51A2AU: goto L_051A2A;
        case 0x51A30U: goto L_051A30;
        case 0x51A34U: goto L_051A34;
        case 0x51A38U: goto L_051A38;
        case 0x51A3AU: goto L_051A3A;
        case 0x51A3EU: goto L_051A3E;
        case 0x51A40U: goto L_051A40;
        case 0x51A42U: goto L_051A42;
        case 0x51A44U: goto L_051A44;
        case 0x51A4AU: goto L_051A4A;
        case 0x51A4EU: goto L_051A4E;
        case 0x51A52U: goto L_051A52;
        case 0x51A54U: goto L_051A54;
        case 0x51A56U: goto L_051A56;
        case 0x51A5AU: goto L_051A5A;
        case 0x51A5EU: goto L_051A5E;
        case 0x51A62U: goto L_051A62;
        case 0x51A66U: goto L_051A66;
        case 0x51A6AU: goto L_051A6A;
        case 0x51A6CU: goto L_051A6C;
        case 0x51A70U: goto L_051A70;
        case 0x51A76U: goto L_051A76;
        case 0x51A78U: goto L_051A78;
        case 0x51A7EU: goto L_051A7E;
        case 0x51A84U: goto L_051A84;
        case 0x51A88U: goto L_051A88;
        case 0x51A8AU: goto L_051A8A;
        case 0x51A8CU: goto L_051A8C;
        case 0x51A90U: goto L_051A90;
        case 0x51A94U: goto L_051A94;
        case 0x51A96U: goto L_051A96;
        case 0x51A9CU: goto L_051A9C;
        case 0x51AA2U: goto L_051AA2;
        case 0x51AA6U: goto L_051AA6;
        case 0x51AAAU: goto L_051AAA;
        case 0x51AAEU: goto L_051AAE;
        case 0x51AB2U: goto L_051AB2;
        case 0x51AB4U: goto L_051AB4;
        case 0x51AB6U: goto L_051AB6;
        case 0x51ABAU: goto L_051ABA;
        case 0x51ABCU: goto L_051ABC;
        case 0x51ABEU: goto L_051ABE;
        case 0x51AC2U: goto L_051AC2;
        case 0x51AC6U: goto L_051AC6;
        case 0x51AC8U: goto L_051AC8;
        case 0x51ACCU: goto L_051ACC;
        case 0x51AD0U: goto L_051AD0;
        case 0x51AD4U: goto L_051AD4;
        case 0x51ADAU: goto L_051ADA;
        case 0x51ADEU: goto L_051ADE;
        case 0x51AE0U: goto L_051AE0;
        case 0x51AE6U: goto L_051AE6;
        case 0x51AE8U: goto L_051AE8;
        case 0x51AECU: goto L_051AEC;
        case 0x51AF0U: goto L_051AF0;
        case 0x51AF4U: goto L_051AF4;
        case 0x51AF8U: goto L_051AF8;
        case 0x51AFCU: goto L_051AFC;
        case 0x51B00U: goto L_051B00;
        case 0x51B04U: goto L_051B04;
        case 0x51B06U: goto L_051B06;
        case 0x51B0AU: goto L_051B0A;
        case 0x51B0CU: goto L_051B0C;
        case 0x51B10U: goto L_051B10;
        case 0x51B14U: goto L_051B14;
        case 0x51B16U: goto L_051B16;
        case 0x51B1AU: goto L_051B1A;
        case 0x51B1EU: goto L_051B1E;
        case 0x51B22U: goto L_051B22;
        case 0x51B24U: goto L_051B24;
        case 0x51B26U: goto L_051B26;
        case 0x51B2AU: goto L_051B2A;
        case 0x51B2CU: goto L_051B2C;
        case 0x51B2EU: goto L_051B2E;
        case 0x51B34U: goto L_051B34;
        case 0x51B36U: goto L_051B36;
        case 0x51B3AU: goto L_051B3A;
        case 0x51B3CU: goto L_051B3C;
        case 0x51B40U: goto L_051B40;
        case 0x51B42U: goto L_051B42;
        case 0x51B46U: goto L_051B46;
        case 0x51B48U: goto L_051B48;
        case 0x51B4CU: goto L_051B4C;
        case 0x51B50U: goto L_051B50;
        case 0x51B54U: goto L_051B54;
        case 0x51B56U: goto L_051B56;
        case 0x51B58U: goto L_051B58;
        case 0x51B5CU: goto L_051B5C;
        case 0x51B60U: goto L_051B60;
        case 0x51B64U: goto L_051B64;
        case 0x51B68U: goto L_051B68;
        case 0x51B6AU: goto L_051B6A;
        case 0x51B70U: goto L_051B70;
        case 0x51B72U: goto L_051B72;
        case 0x51B76U: goto L_051B76;
        case 0x51B7AU: goto L_051B7A;
        case 0x51B7EU: goto L_051B7E;
        case 0x51B80U: goto L_051B80;
        case 0x51B86U: goto L_051B86;
        case 0x51B8AU: goto L_051B8A;
        case 0x51B8CU: goto L_051B8C;
        case 0x51B92U: goto L_051B92;
        case 0x51B94U: goto L_051B94;
        case 0x51B9AU: goto L_051B9A;
        case 0x51B9CU: goto L_051B9C;
        case 0x51B9EU: goto L_051B9E;
        case 0x51BA0U: goto L_051BA0;
        case 0x51BA2U: goto L_051BA2;
        case 0x51BA6U: goto L_051BA6;
        case 0x51BAAU: goto L_051BAA;
        case 0x51BACU: goto L_051BAC;
        case 0x51BB0U: goto L_051BB0;
        case 0x51BB4U: goto L_051BB4;
        case 0x51BB6U: goto L_051BB6;
        case 0x51BBCU: goto L_051BBC;
        case 0x51BC0U: goto L_051BC0;
        case 0x51BC2U: goto L_051BC2;
        case 0x51BC4U: goto L_051BC4;
        case 0x51BC8U: goto L_051BC8;
        case 0x51BCCU: goto L_051BCC;
        case 0x51BD0U: goto L_051BD0;
        case 0x51BD2U: goto L_051BD2;
        case 0x51BD4U: goto L_051BD4;
        case 0x51BD8U: goto L_051BD8;
        case 0x51BDCU: goto L_051BDC;
        case 0x51BDEU: goto L_051BDE;
        case 0x51BE2U: goto L_051BE2;
        case 0x51BE6U: goto L_051BE6;
        case 0x51BEAU: goto L_051BEA;
        case 0x51BECU: goto L_051BEC;
        case 0x51BF0U: goto L_051BF0;
        case 0x51BF4U: goto L_051BF4;
        case 0x51BF8U: goto L_051BF8;
        case 0x51BFCU: goto L_051BFC;
        case 0x51C00U: goto L_051C00;
        case 0x51C02U: goto L_051C02;
        case 0x51C06U: goto L_051C06;
        case 0x51C0AU: goto L_051C0A;
        case 0x51C0EU: goto L_051C0E;
        case 0x51C10U: goto L_051C10;
        case 0x51C14U: goto L_051C14;
        case 0x51C18U: goto L_051C18;
        case 0x51C1CU: goto L_051C1C;
        case 0x51C1EU: goto L_051C1E;
        case 0x51C22U: goto L_051C22;
        case 0x51C24U: goto L_051C24;
        case 0x51C28U: goto L_051C28;
        case 0x51C2CU: goto L_051C2C;
        case 0x51C2EU: goto L_051C2E;
        case 0x51C32U: goto L_051C32;
        case 0x51C38U: goto L_051C38;
        case 0x51C3CU: goto L_051C3C;
        case 0x51C40U: goto L_051C40;
        case 0x51C42U: goto L_051C42;
        case 0x51C46U: goto L_051C46;
        case 0x51C48U: goto L_051C48;
        case 0x51C4CU: goto L_051C4C;
        case 0x51C50U: goto L_051C50;
        case 0x51C52U: goto L_051C52;
        case 0x51C56U: goto L_051C56;
        case 0x51C5AU: goto L_051C5A;
        case 0x51C5EU: goto L_051C5E;
        case 0x51C60U: goto L_051C60;
        case 0x51C64U: goto L_051C64;
        case 0x51C68U: goto L_051C68;
        case 0x51D1EU: goto L_051D1E;
        case 0x51D22U: goto L_051D22;
        case 0x51D26U: goto L_051D26;
        case 0x51D2AU: goto L_051D2A;
        case 0x52A44U: goto L_052A44;
        case 0x52A48U: goto L_052A48;
        case 0x52A4CU: goto L_052A4C;
        case 0x52A4EU: goto L_052A4E;
        case 0x52A54U: goto L_052A54;
        case 0x52A56U: goto L_052A56;
        case 0x52A5AU: goto L_052A5A;
        case 0x52A5CU: goto L_052A5C;
        case 0x52A60U: goto L_052A60;
        case 0x52A64U: goto L_052A64;
        case 0x52A66U: goto L_052A66;
        case 0x52A6CU: goto L_052A6C;
        case 0x52A6EU: goto L_052A6E;
        case 0x52A72U: goto L_052A72;
        case 0x52A74U: goto L_052A74;
        case 0x52A78U: goto L_052A78;
        case 0x52A7CU: goto L_052A7C;
        case 0x52A7EU: goto L_052A7E;
        case 0x52A84U: goto L_052A84;
        case 0x52A86U: goto L_052A86;
        case 0x52A8AU: goto L_052A8A;
        case 0x52A8CU: goto L_052A8C;
        case 0x52A90U: goto L_052A90;
        case 0x52A94U: goto L_052A94;
        case 0x52A96U: goto L_052A96;
        case 0x52A9CU: goto L_052A9C;
        case 0x52A9EU: goto L_052A9E;
        case 0x52AA2U: goto L_052AA2;
        case 0x52AA4U: goto L_052AA4;
        default: break; } }
    goto L_051D1A;
L_051912: ;
    ITR(0x51912U, 10);
    { /* 051912 051912 bra src=None dst=None cc=0 */
        goto L_052A44;
    }
L_0519A0: ;
    ITR(0x519A0U, 8);
    { /* 0519A0 0519a0 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_0519A4: ;
    ITR(0x519A4U, 4);
    { /* 0519A4 0519a4 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519A6: ;
    ITR(0x519A6U, 74);
    { /* 0519A6 0519a6 mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_0519AA: ;
    ITR(0x519AAU, 8);
    { /* 0519AA 0519aa adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=4 d=0 v=0) */
        a4 += SX16((d0 & 0xFFFF));
    }
L_0519AC: ;
    ITR(0x519ACU, 13);
    { /* 0519AC 0519ac scc.b src=None dst=EA(d16 r=4 d=10 v=0) cc=0 */
        { uint32_t t2 = (a4 + 0xAU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519B0: ;
    ITR(0x519B0U, 12);
    { /* 0519B0 0519b0 lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=6 d=0 v=0) */
        a6 = 0xDFF000U;
    }
L_0519B6: ;
    ITR(0x519B6U, 8);
    { /* 0519B6 0519b6 move.w src=EA(imm r=0 d=0 v=30) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x30U;
        SETW(d0, t1);
        }
    }
L_0519BA: ;
    ITR(0x519BAU, 70);
    { /* 0519BA 0519ba mulu.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d7 & 0xFFFF);
        d0 = t1;
        }
    }
L_0519BC: ;
    ITR(0x519BCU, 8);
    { /* 0519BC 0519bc lea.l src=EA(pcd r=0 d=0 v=51d9a) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x51D9AU;
    }
L_0519C0: ;
    ITR(0x519C0U, 8);
    { /* 0519C0 0519c0 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 += SX16((d0 & 0xFFFF));
    }
L_0519C2: ;
    ITR(0x519C2U, 4);
    { /* 0519C2 0519c2 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519C4: ;
    ITR(0x519C4U, 14);
    { /* 0519C4 0519c4 lsl.w src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 1, (d0 & 0xFFFF), 4, 16);
        SETW(d0, t1);
        }
    }
L_0519C6: ;
    ITR(0x519C6U, 8);
    { /* 0519C6 0519c6 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=6 d=0 v=0) */
        a6 += SX16((d0 & 0xFFFF));
    }
L_0519C8: ;
    ITR(0x519C8U, 16);
    { /* 0519C8 0519c8 movea.l src=EA(d16 r=0 d=4 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x4U));
    }
L_0519CC: ;
    ITR(0x519CCU, 16);
    { /* 0519CC 0519cc movea.l src=EA(d16 r=0 d=24 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 = rd32((a0 + 0x18U));
    }
L_0519D0: ;
    ITR(0x519D0U, 12);
    { /* 0519D0 0519d0 tst.b src=None dst=EA(d16 r=0 d=22 v=0) */
        { uint32_t t = rd8((a0 + 0x16U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519D4: ;
    ITR(0x519D4U, 8);
    { /* 0519D4 0519d4 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_0519D6: ;
    ITR(0x519D6U, 13);
    { /* 0519D6 0519d6 scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=0 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519DA: ;
    ITR(0x519DAU, 16);
    { /* 0519DA 0519da move.l src=EA(d16 r=5 d=4 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x4U));
        d0 = t1;
        FLAGS_LOGIC(t1, 0xFFFFFFFFU, 0x80000000U);
        }
    }
L_0519DE: ;
    ITR(0x519DEU, 8);
    { /* 0519DE 0519de bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051A06;
    }
L_0519E0: ;
    ITR(0x519E0U, 16);
    { /* 0519E0 0519e0 movea.l src=EA(d16 r=5 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a5 + 0x0U));
    }
L_0519E4: ;
    ITR(0x519E4U, 6);
    { /* 0519E4 0519e4 adda.l src=EA(dn r=0 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += d0;
    }
L_0519E6: ;
    ITR(0x519E6U, 10);
    { /* 0519E6 0519e6 lsr.l src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, 1, 32);
        d0 = t1;
        }
    }
L_0519E8: ;
    ITR(0x519E8U, 12);
    { /* 0519E8 0519e8 move.w src=EA(d16 r=5 d=8 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        SETW(d1, t1);
        }
    }
L_0519EC: ;
    ITR(0x519ECU, 4);
    { /* 0519EC 0519ec sub.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_0519EE: ;
    ITR(0x519EEU, 20);
    { /* 0519EE 0519ee move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = a2;
        wr32((a4 + 0x0U), t1);
        }
    }
L_0519F2: ;
    ITR(0x519F2U, 12);
    { /* 0519F2 0519f2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x4U), t1);
        }
    }
L_0519F6: ;
    ITR(0x519F6U, 12);
    { /* 0519F6 0519f6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519FA: ;
    ITR(0x519FAU, 8);
    { /* 0519FA 0519fa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A04;
    }
L_0519FC: ;
    ITR(0x519FCU, 20);
    { /* 0519FC 0519fc move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = a2;
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A00: ;
    ITR(0x51A00U, 12);
    { /* 051A00 051a00 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A04: ;
    ITR(0x51A04U, 10);
    { /* 051A04 051a04 bra src=None dst=None cc=0 */
        goto L_051A24;
    }
L_051A06: ;
    ITR(0x51A06U, 32);
    { /* 051A06 051a06 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A0C: ;
    ITR(0x51A0CU, 16);
    { /* 051A0C 051a0c move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A12: ;
    ITR(0x51A12U, 12);
    { /* 051A12 051a12 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A16: ;
    ITR(0x51A16U, 8);
    { /* 051A16 051a16 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_051A18: ;
    ITR(0x51A18U, 32);
    { /* 051A18 051a18 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A1E: ;
    ITR(0x51A1EU, 16);
    { /* 051A1E 051a1e move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A24: ;
    ITR(0x51A24U, 16);
    { /* 051A24 051a24 subq.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        wr16(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A28: ;
    ITR(0x51A28U, 8);
    { /* 051A28 051a28 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4E;
    }
L_051A2A: ;
    ITR(0x51A2AU, 16);
    { /* 051A2A 051a2a cmpi.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A30: ;
    ITR(0x51A30U, 8);
    { /* 051A30 051a30 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AF4;
    }
L_051A34: ;
    ITR(0x51A34U, 12);
    { /* 051A34 051a34 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A38: ;
    ITR(0x51A38U, 8);
    { /* 051A38 051a38 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A4A;
    }
L_051A3A: ;
    ITR(0x51A3AU, 12);
    { /* 051A3A 051a3a cmpi.b src=EA(imm r=0 d=0 v=83) dst=EA(ind r=1 d=0 v=0) */
        { uint32_t t1 = 0x83U;
        uint32_t t4 = a1;
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051A3E: ;
    ITR(0x51A3EU, 8);
    { /* 051A3E 051a3e bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4A;
    }
L_051A40: ;
    ITR(0x51A40U, 4);
    { /* 051A40 051a40 clr.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, 0);
    }
L_051A42: ;
    ITR(0x51A42U, 8);
    { /* 051A42 051a42 bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051A44: ;
    ITR(0x51A44U, 16);
    { /* 051A44 051a44 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051A4A: ;
    ITR(0x51A4AU, 10);
    { /* 051A4A 051a4a bra src=None dst=None cc=0 */
        goto L_051AE6;
    }
L_051A4E: ;
    ITR(0x51A4EU, 16);
    { /* 051A4E 051a4e clr.b src=None dst=EA(d16 r=0 d=0 v=0) */
        wr8((a0 + 0x0U), 0);
    }
L_051A52: ;
    ITR(0x51A52U, 4);
    { /* 051A52 051a52 moveq.l src=EA(imm r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        d0 = 0x0U;
    }
L_051A54: ;
    ITR(0x51A54U, 8);
    { /* 051A54 051a54 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d0, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051A56: ;
    ITR(0x51A56U, 8);
    { /* 051A56 051a56 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BE6;
    }
L_051A5A: ;
    ITR(0x51A5AU, 12);
    { /* 051A5A 051a5a move.b src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=2 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        wr8((a0 + 0x2U), t1);
        }
    }
L_051A5E: ;
    ITR(0x51A5EU, 12);
    { /* 051A5E 051a5e add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A62: ;
    ITR(0x51A62U, 12);
    { /* 051A62 051a62 add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A66: ;
    ITR(0x51A66U, 16);
    { /* 051A66 051a66 movea.l src=EA(d16 r=0 d=34 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x22U));
    }
L_051A6A: ;
    ITR(0x51A6AU, 8);
    { /* 051A6A 051a6a move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051A6C: ;
    ITR(0x51A6CU, 20);
    { /* 051A6C 051a6c move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051A70: ;
    ITR(0x51A70U, 20);
    { /* 051A70 051a70 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051A76: ;
    ITR(0x51A76U, 4);
    { /* 051A76 051a76 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051A78: ;
    ITR(0x51A78U, 32);
    { /* 051A78 051a78 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A7E: ;
    ITR(0x51A7EU, 20);
    { /* 051A7E 051a7e move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A84: ;
    ITR(0x51A84U, 12);
    { /* 051A84 051a84 move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051A88: ;
    ITR(0x51A88U, 70);
    { /* 051A88 051a88 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051A8A: ;
    ITR(0x51A8AU, 18);
    { /* 051A8A 051a8a lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051A8C: ;
    ITR(0x51A8CU, 12);
    { /* 051A8C 051a8c move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051A90: ;
    ITR(0x51A90U, 12);
    { /* 051A90 051a90 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A94: ;
    ITR(0x51A94U, 8);
    { /* 051A94 051a94 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AA6;
    }
L_051A96: ;
    ITR(0x51A96U, 32);
    { /* 051A96 051a96 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A9C: ;
    ITR(0x51A9CU, 20);
    { /* 051A9C 051a9c move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051AA2: ;
    ITR(0x51AA2U, 12);
    { /* 051AA2 051aa2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051AA6: ;
    ITR(0x51AA6U, 8);
    { /* 051AA6 051aa6 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AAA: ;
    ITR(0x51AAAU, 8);
    { /* 051AAA 051aaa lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051AAE: ;
    ITR(0x51AAEU, 12);
    { /* 051AAE 051aae move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051AB2: ;
    ITR(0x51AB2U, 4);
    { /* 051AB2 051ab2 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051AB4: ;
    ITR(0x51AB4U, 4);
    { /* 051AB4 051ab4 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AB6: ;
    ITR(0x51AB6U, 14);
    { /* 051AB6 051ab6 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051ABA: ;
    ITR(0x51ABAU, 70);
    { /* 051ABA 051aba mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051ABC: ;
    ITR(0x51ABCU, 16);
    { /* 051ABC 051abc lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051ABE: ;
    ITR(0x51ABEU, 12);
    { /* 051ABE 051abe move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051AC2: ;
    ITR(0x51AC2U, 12);
    { /* 051AC2 051ac2 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051AC6: ;
    ITR(0x51AC6U, 8);
    { /* 051AC6 051ac6 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051ACC;
    }
L_051AC8: ;
    ITR(0x51AC8U, 12);
    { /* 051AC8 051ac8 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051ACC: ;
    ITR(0x51ACCU, 13);
    { /* 051ACC 051acc scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=1 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051AD0: ;
    ITR(0x51AD0U, 20);
    { /* 051AD0 051ad0 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=4 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x4U), t1);
        }
    }
L_051AD4: ;
    ITR(0x51AD4U, 20);
    { /* 051AD4 051ad4 move.w src=EA(d16 r=0 d=28 v=0) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = rd16((a0 + 0x1CU));
        wr16((a0 + 0x1EU), t1);
        }
    }
L_051ADA: ;
    ITR(0x51ADAU, 8);
    { /* 051ADA 051ada move.w src=EA(imm r=0 d=0 v=8200) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x8200U;
        SETW(d1, t1);
        }
    }
L_051ADE: ;
    ITR(0x51ADEU, 8);
    { /* 051ADE 051ade bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051AE0: ;
    ITR(0x51AE0U, 16);
    { /* 051AE0 051ae0 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051AE6: ;
    ITR(0x51AE6U, 4);
    { /* 051AE6 051ae6 addq.w src=EA(imm r=0 d=0 v=1) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d7, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFFFU, 0x8000U, 1);
        }
    }
L_051AE8: ;
    ITR(0x51AE8U, 8);
    { /* 051AE8 051ae8 cmp.w src=EA(imm r=0 d=0 v=4) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x4U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051AEC: ;
    ITR(0x51AECU, 10);
    { /* 051AEC 051aec bcc src=None dst=None cc=6 */
        if (COND_6) { BUDGET_CHECK(0x519A0U); goto L_0519A0; }
    }
L_051AF0: ;
    ITR(0x51AF0U, 10);
    { /* 051AF0 051af0 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51912U); goto L_051912; }
    }
L_051AF4: ;
    ITR(0x51AF4U, 12);
    { /* 051AF4 051af4 move.b src=EA(d16 r=0 d=2 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2U));
        SETB(d0, t1);
        }
    }
L_051AF8: ;
    ITR(0x51AF8U, 12);
    { /* 051AF8 051af8 add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051AFC: ;
    ITR(0x51AFCU, 12);
    { /* 051AFC 051afc add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B00: ;
    ITR(0x51B00U, 16);
    { /* 051B00 051b00 movea.l src=EA(d16 r=0 d=16 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x10U));
    }
L_051B04: ;
    ITR(0x51B04U, 8);
    { /* 051B04 051b04 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051B06: ;
    ITR(0x51B06U, 12);
    { /* 051B06 051b06 bclr.l src=EA(imm r=0 d=0 v=7) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (0x7U) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 & ~(1u << t1);
        }
    }
L_051B0A: ;
    ITR(0x51B0AU, 8);
    { /* 051B0A 051b0a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B10;
    }
L_051B0C: ;
    ITR(0x51B0CU, 16);
    { /* 051B0C 051b0c movea.l src=EA(d16 r=0 d=12 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0xCU));
    }
L_051B10: ;
    ITR(0x51B10U, 20);
    { /* 051B10 051b10 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051B14: ;
    ITR(0x51B14U, 4);
    { /* 051B14 051b14 add.b src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B16: ;
    ITR(0x51B16U, 8);
    { /* 051B16 051b16 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B1A: ;
    ITR(0x51B1AU, 8);
    { /* 051B1A 051b1a lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051B1E: ;
    ITR(0x51B1EU, 12);
    { /* 051B1E 051b1e move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051B22: ;
    ITR(0x51B22U, 4);
    { /* 051B22 051b22 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051B24: ;
    ITR(0x51B24U, 4);
    { /* 051B24 051b24 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B26: ;
    ITR(0x51B26U, 14);
    { /* 051B26 051b26 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051B2A: ;
    ITR(0x51B2AU, 70);
    { /* 051B2A 051b2a mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051B2C: ;
    ITR(0x51B2CU, 16);
    { /* 051B2C 051b2c lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051B2E: ;
    ITR(0x51B2EU, 16);
    { /* 051B2E 051b2e btst.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=0 v=0) */
        { uint32_t t1 = (0x1U) & 7;
        uint32_t t3 = (a0 + 0x0U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B34: ;
    ITR(0x51B34U, 8);
    { /* 051B34 051b34 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B50;
    }
L_051B36: ;
    ITR(0x51B36U, 12);
    { /* 051B36 051b36 tst.b src=None dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t = rd8((a0 + 0x15U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B3A: ;
    ITR(0x51B3AU, 8);
    { /* 051B3A 051b3a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B42;
    }
L_051B3C: ;
    ITR(0x51B3CU, 16);
    { /* 051B3C 051b3c subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x15U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        }
    }
L_051B40: ;
    ITR(0x51B40U, 10);
    { /* 051B40 051b40 bra src=None dst=None cc=0 */
        goto L_051B50;
    }
L_051B42: ;
    ITR(0x51B42U, 12);
    { /* 051B42 051b42 move.b src=EA(d16 r=0 d=20 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x14U));
        SETB(d1, t1);
        }
    }
L_051B46: ;
    ITR(0x51B46U, 4);
    { /* 051B46 051b46 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B48: ;
    ITR(0x51B48U, 16);
    { /* 051B48 051b48 add.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=32 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t4 = (a0 + 0x20U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        wr16(t4, t3);
        }
    }
L_051B4C: ;
    ITR(0x51B4CU, 12);
    { /* 051B4C 051b4c sub.w src=EA(d16 r=0 d=32 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a0 + 0x20U));
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B50: ;
    ITR(0x51B50U, 12);
    { /* 051B50 051b50 tst.b src=None dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t = rd8((a0 + 0x1U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B54: ;
    ITR(0x51B54U, 8);
    { /* 051B54 051b54 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA2;
    }
L_051B56: ;
    ITR(0x51B56U, 8);
    { /* 051B56 051b56 bcc src=None dst=None cc=10 */
        if (COND_10) goto L_051B72;
    }
L_051B58: ;
    ITR(0x51B58U, 12);
    { /* 051B58 051b58 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B5C: ;
    ITR(0x51B5CU, 12);
    { /* 051B5C 051b5c add.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B60: ;
    ITR(0x51B60U, 12);
    { /* 051B60 051b60 move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        }
    }
L_051B64: ;
    ITR(0x51B64U, 12);
    { /* 051B64 051b64 cmp.b src=EA(d16 r=0 d=46 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2EU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051B68: ;
    ITR(0x51B68U, 8);
    { /* 051B68 051b68 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B6A: ;
    ITR(0x51B6AU, 20);
    { /* 051B6A 051b6a bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B70: ;
    ITR(0x51B70U, 10);
    { /* 051B70 051b70 bra src=None dst=None cc=0 */
        goto L_051B86;
    }
L_051B72: ;
    ITR(0x51B72U, 12);
    { /* 051B72 051b72 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B76: ;
    ITR(0x51B76U, 12);
    { /* 051B76 051b76 sub.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B7A: ;
    ITR(0x51B7AU, 12);
    { /* 051B7A 051b7a move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051B7E: ;
    ITR(0x51B7EU, 8);
    { /* 051B7E 051b7e bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B80: ;
    ITR(0x51B80U, 20);
    { /* 051B80 051b80 bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B86: ;
    ITR(0x51B86U, 12);
    { /* 051B86 051b86 tst.b src=None dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t = rd8((a0 + 0x2DU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B8A: ;
    ITR(0x51B8AU, 8);
    { /* 051B8A 051b8a bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B92;
    }
L_051B8C: ;
    ITR(0x51B8CU, 20);
    { /* 051B8C 051b8c bchg.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B92: ;
    ITR(0x51B92U, 4);
    { /* 051B92 051b92 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B94: ;
    ITR(0x51B94U, 16);
    { /* 051B94 051b94 btst.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B9A: ;
    ITR(0x51B9AU, 8);
    { /* 051B9A 051b9a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA0;
    }
L_051B9C: ;
    ITR(0x51B9CU, 4);
    { /* 051B9C 051b9c add.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B9E: ;
    ITR(0x51B9EU, 10);
    { /* 051B9E 051b9e bra src=None dst=None cc=0 */
        goto L_051BA2;
    }
L_051BA0: ;
    ITR(0x51BA0U, 4);
    { /* 051BA0 051ba0 sub.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051BA2: ;
    ITR(0x51BA2U, 12);
    { /* 051BA2 051ba2 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051BA6: ;
    ITR(0x51BA6U, 12);
    { /* 051BA6 051ba6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BAA: ;
    ITR(0x51BAAU, 8);
    { /* 051BAA 051baa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BB0;
    }
L_051BAC: ;
    ITR(0x51BACU, 12);
    { /* 051BAC 051bac move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051BB0: ;
    ITR(0x51BB0U, 16);
    { /* 051BB0 051bb0 subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x2BU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BB4: ;
    ITR(0x51BB4U, 8);
    { /* 051BB4 051bb4 bcc src=None dst=None cc=4 */
        if (COND_4) goto L_051BE2;
    }
L_051BB6: ;
    ITR(0x51BB6U, 20);
    { /* 051BB6 051bb6 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051BBC: ;
    ITR(0x51BBCU, 16);
    { /* 051BBC 051bbc movea.l src=EA(d16 r=0 d=38 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x26U));
    }
L_051BC0: ;
    ITR(0x51BC0U, 8);
    { /* 051BC0 051bc0 move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051BC2: ;
    ITR(0x51BC2U, 8);
    { /* 051BC2 051bc2 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BC8;
    }
L_051BC4: ;
    ITR(0x51BC4U, 20);
    { /* 051BC4 051bc4 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051BC8: ;
    ITR(0x51BC8U, 8);
    { /* 051BC8 051bc8 andi.w src=EA(imm r=0 d=0 v=7f) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x7FU;
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_051BCC: ;
    ITR(0x51BCCU, 12);
    { /* 051BCC 051bcc move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051BD0: ;
    ITR(0x51BD0U, 70);
    { /* 051BD0 051bd0 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051BD2: ;
    ITR(0x51BD2U, 18);
    { /* 051BD2 051bd2 lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051BD4: ;
    ITR(0x51BD4U, 12);
    { /* 051BD4 051bd4 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051BD8: ;
    ITR(0x51BD8U, 12);
    { /* 051BD8 051bd8 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BDC: ;
    ITR(0x51BDCU, 8);
    { /* 051BDC 051bdc bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BE2;
    }
L_051BDE: ;
    ITR(0x51BDEU, 12);
    { /* 051BDE 051bde move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051BE2: ;
    ITR(0x51BE2U, 10);
    { /* 051BE2 051be2 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51AE6U); goto L_051AE6; }
    }
L_051BE6: ;
    ITR(0x51BE6U, 8);
    { /* 051BE6 051be6 cmp.b src=EA(imm r=0 d=0 v=e0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xE0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BEA: ;
    ITR(0x51BEAU, 8);
    { /* 051BEA 051bea bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051BFC;
    }
L_051BEC: ;
    ITR(0x51BECU, 8);
    { /* 051BEC 051bec subi.b src=EA(imm r=0 d=0 v=df) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xDFU;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051BF0: ;
    ITR(0x51BF0U, 78);
    { /* 051BF0 051bf0 mulu.w src=EA(pcd r=0 d=0 v=51d82) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * rd16(0x51D82U);
        d0 = t1;
        }
    }
L_051BF4: ;
    ITR(0x51BF4U, 12);
    { /* 051BF4 051bf4 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=28 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a0 + 0x1CU), t1);
        }
    }
L_051BF8: ;
    ITR(0x51BF8U, 10);
    { /* 051BF8 051bf8 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051BFC: ;
    ITR(0x51BFCU, 8);
    { /* 051BFC 051bfc cmp.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C00: ;
    ITR(0x51C00U, 8);
    { /* 051C00 051c00 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C18;
    }
L_051C02: ;
    ITR(0x51C02U, 8);
    { /* 051C02 051c02 subi.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C06: ;
    ITR(0x51C06U, 8);
    { /* 051C06 051c06 lea.l src=EA(pcd r=0 d=0 v=51f3c) dst=EA(an r=5 d=0 v=0) */
        a5 = 0x51F3CU;
    }
L_051C0A: ;
    ITR(0x51C0AU, 74);
    { /* 051C0A 051c0a mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_051C0E: ;
    ITR(0x51C0EU, 8);
    { /* 051C0E 051c0e adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 += SX16((d0 & 0xFFFF));
    }
L_051C10: ;
    ITR(0x51C10U, 20);
    { /* 051C10 051c10 move.l src=EA(an r=5 d=0 v=0) dst=EA(d16 r=0 d=24 v=0) */
        { uint32_t t1 = a5;
        wr32((a0 + 0x18U), t1);
        }
    }
L_051C14: ;
    ITR(0x51C14U, 10);
    { /* 051C14 051c14 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C18: ;
    ITR(0x51C18U, 8);
    { /* 051C18 051c18 cmp.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C1C: ;
    ITR(0x51C1CU, 8);
    { /* 051C1C 051c1c bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C3C;
    }
L_051C1E: ;
    ITR(0x51C1EU, 8);
    { /* 051C1E 051c1e subi.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C22: ;
    ITR(0x51C22U, 4);
    { /* 051C22 051c22 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C24: ;
    ITR(0x51C24U, 8);
    { /* 051C24 051c24 lea.l src=EA(pcd r=0 d=0 v=52f1e) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x52F1EU;
    }
L_051C28: ;
    ITR(0x51C28U, 14);
    { /* 051C28 051c28 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C2C: ;
    ITR(0x51C2CU, 6);
    { /* 051C2C 051c2c adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C2E: ;
    ITR(0x51C2EU, 20);
    { /* 051C2E 051c2e move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=34 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x22U), t1);
        }
    }
L_051C32: ;
    ITR(0x51C32U, 20);
    { /* 051C32 051c32 move.b src=EA(d16 r=2 d=-1 v=0) dst=EA(d16 r=0 d=42 v=0) */
        { uint32_t t1 = rd8((a2 + 0xFFFFFFFFU));
        wr8((a0 + 0x2AU), t1);
        }
    }
L_051C38: ;
    ITR(0x51C38U, 10);
    { /* 051C38 051c38 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C3C: ;
    ITR(0x51C3CU, 8);
    { /* 051C3C 051c3c cmp.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C40: ;
    ITR(0x51C40U, 8);
    { /* 051C40 051c40 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C5E;
    }
L_051C42: ;
    ITR(0x51C42U, 8);
    { /* 051C42 051c42 subi.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C46: ;
    ITR(0x51C46U, 4);
    { /* 051C46 051c46 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C48: ;
    ITR(0x51C48U, 8);
    { /* 051C48 051c48 lea.l src=EA(pcd r=0 d=0 v=51eea) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51EEAU;
    }
L_051C4C: ;
    ITR(0x51C4CU, 14);
    { /* 051C4C 051c4c movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C50: ;
    ITR(0x51C50U, 6);
    { /* 051C50 051c50 adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C52: ;
    ITR(0x51C52U, 20);
    { /* 051C52 051c52 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=12 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0xCU), t1);
        }
    }
L_051C56: ;
    ITR(0x51C56U, 20);
    { /* 051C56 051c56 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051C5A: ;
    ITR(0x51C5AU, 10);
    { /* 051C5A 051c5a bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C5E: ;
    ITR(0x51C5EU, 4);
    { /* 051C5E 051c5e add.b src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_051C60: ;
    ITR(0x51C60U, 8);
    { /* 051C60 051c60 lea.l src=EA(pcd r=0 d=0 v=51d6a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51D6AU;
    }
L_051C64: ;
    ITR(0x51C64U, 14);
    { /* 051C64 051c64 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C68: ;
    ITR(0x51C68U, 14);
    { /* 051C68 051c68 jmp src=EA(idx r=3 d=0 v=0) dst=None */
        { call_dynamic((a3 + 0x0U + ((uint32_t)(int32_t)(int16_t)a2))); return; }
    }
L_051D1A: ;
    ITR(0x51D1AU, 13);
    { /* 051D1A 051d1a scc.b src=None dst=EA(d16 r=0 d=1 v=0) cc=0 */
        { uint32_t t2 = (a0 + 0x1U);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_051D1E: ;
    ITR(0x51D1EU, 16);
    { /* 051D1E 051d1e move.b src=EA(post r=1 d=0 v=0) dst=EA(d16 r=0 d=44 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        wr8((a0 + 0x2CU), t1);
        }
    }
L_051D22: ;
    ITR(0x51D22U, 16);
    { /* 051D22 051d22 move.b src=EA(post r=1 d=0 v=0) dst=EA(d16 r=0 d=46 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        wr8((a0 + 0x2EU), t1);
        }
    }
L_051D26: ;
    ITR(0x51D26U, 16);
    { /* 051D26 051d26 clr.b src=None dst=EA(d16 r=0 d=45 v=0) */
        wr8((a0 + 0x2DU), 0);
    }
L_051D2A: ;
    ITR(0x51D2AU, 10);
    { /* 051D2A 051d2a bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_052A44: ;
    ITR(0x52A44U, 8);
    { /* 052A44 052a44 lea.l src=EA(pcd r=0 d=0 v=52b9c) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52B9CU;
    }
L_052A48: ;
    ITR(0x52A48U, 12);
    { /* 052A48 052a48 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A4C: ;
    ITR(0x52A4CU, 8);
    { /* 052A4C 052a4c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A5C;
    }
L_052A4E: ;
    ITR(0x52A4EU, 12);
    { /* 052A4E 052a4e lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF000U;
    }
L_052A54: ;
    ITR(0x52A54U, 4);
    { /* 052A54 052a54 moveq.l src=EA(imm r=0 d=0 v=1) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x1U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A56: ;
    ITR(0x52A56U, 8);
    { /* 052A56 052a56 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_052A5A: ;
    ITR(0x52A5AU, 18);
    { /* 052A5A 052a5a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A5CU);
    }
L_052A5C: ;
    ITR(0x52A5CU, 8);
    { /* 052A5C 052a5c lea.l src=EA(pcd r=0 d=0 v=52bc0) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BC0U;
    }
L_052A60: ;
    ITR(0x52A60U, 12);
    { /* 052A60 052a60 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A64: ;
    ITR(0x52A64U, 8);
    { /* 052A64 052a64 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A74;
    }
L_052A66: ;
    ITR(0x52A66U, 12);
    { /* 052A66 052a66 lea.l src=EA(absl r=0 d=0 v=dff010) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF010U;
    }
L_052A6C: ;
    ITR(0x52A6CU, 4);
    { /* 052A6C 052a6c moveq.l src=EA(imm r=0 d=0 v=2) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x2U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A6E: ;
    ITR(0x52A6EU, 8);
    { /* 052A6E 052a6e lea.l src=EA(pcd r=0 d=0 v=52c3a) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C3AU;
    }
L_052A72: ;
    ITR(0x52A72U, 18);
    { /* 052A72 052a72 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A74U);
    }
L_052A74: ;
    ITR(0x52A74U, 8);
    { /* 052A74 052a74 lea.l src=EA(pcd r=0 d=0 v=52be4) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BE4U;
    }
L_052A78: ;
    ITR(0x52A78U, 12);
    { /* 052A78 052a78 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A7C: ;
    ITR(0x52A7CU, 8);
    { /* 052A7C 052a7c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A8C;
    }
L_052A7E: ;
    ITR(0x52A7EU, 12);
    { /* 052A7E 052a7e lea.l src=EA(absl r=0 d=0 v=dff020) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF020U;
    }
L_052A84: ;
    ITR(0x52A84U, 4);
    { /* 052A84 052a84 moveq.l src=EA(imm r=0 d=0 v=4) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x4U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A86: ;
    ITR(0x52A86U, 8);
    { /* 052A86 052a86 lea.l src=EA(pcd r=0 d=0 v=52c46) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C46U;
    }
L_052A8A: ;
    ITR(0x52A8AU, 18);
    { /* 052A8A 052a8a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A8CU);
    }
L_052A8C: ;
    ITR(0x52A8CU, 8);
    { /* 052A8C 052a8c lea.l src=EA(pcd r=0 d=0 v=52c08) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52C08U;
    }
L_052A90: ;
    ITR(0x52A90U, 12);
    { /* 052A90 052a90 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A94: ;
    ITR(0x52A94U, 8);
    { /* 052A94 052a94 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052AA4;
    }
L_052A96: ;
    ITR(0x52A96U, 12);
    { /* 052A96 052a96 lea.l src=EA(absl r=0 d=0 v=dff030) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF030U;
    }
L_052A9C: ;
    ITR(0x52A9CU, 4);
    { /* 052A9C 052a9c moveq.l src=EA(imm r=0 d=0 v=8) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x8U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A9E: ;
    ITR(0x52A9EU, 8);
    { /* 052A9E 052a9e lea.l src=EA(pcd r=0 d=0 v=52c52) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C52U;
    }
L_052AA2: ;
    ITR(0x52AA2U, 18);
    { /* 052AA2 052aa2 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52AA4U);
    }
L_052AA4: ;
    ITR(0x52AA4U, 16);
    { /* 052AA4 052aa4 rts src=None dst=None */
        RTS();
    }
}

void dwam_051D2E(void)
{
    FN_ENTER(0x51D2EU);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51912U: goto L_051912;
        case 0x519A0U: goto L_0519A0;
        case 0x519A4U: goto L_0519A4;
        case 0x519A6U: goto L_0519A6;
        case 0x519AAU: goto L_0519AA;
        case 0x519ACU: goto L_0519AC;
        case 0x519B0U: goto L_0519B0;
        case 0x519B6U: goto L_0519B6;
        case 0x519BAU: goto L_0519BA;
        case 0x519BCU: goto L_0519BC;
        case 0x519C0U: goto L_0519C0;
        case 0x519C2U: goto L_0519C2;
        case 0x519C4U: goto L_0519C4;
        case 0x519C6U: goto L_0519C6;
        case 0x519C8U: goto L_0519C8;
        case 0x519CCU: goto L_0519CC;
        case 0x519D0U: goto L_0519D0;
        case 0x519D4U: goto L_0519D4;
        case 0x519D6U: goto L_0519D6;
        case 0x519DAU: goto L_0519DA;
        case 0x519DEU: goto L_0519DE;
        case 0x519E0U: goto L_0519E0;
        case 0x519E4U: goto L_0519E4;
        case 0x519E6U: goto L_0519E6;
        case 0x519E8U: goto L_0519E8;
        case 0x519ECU: goto L_0519EC;
        case 0x519EEU: goto L_0519EE;
        case 0x519F2U: goto L_0519F2;
        case 0x519F6U: goto L_0519F6;
        case 0x519FAU: goto L_0519FA;
        case 0x519FCU: goto L_0519FC;
        case 0x51A00U: goto L_051A00;
        case 0x51A04U: goto L_051A04;
        case 0x51A06U: goto L_051A06;
        case 0x51A0CU: goto L_051A0C;
        case 0x51A12U: goto L_051A12;
        case 0x51A16U: goto L_051A16;
        case 0x51A18U: goto L_051A18;
        case 0x51A1EU: goto L_051A1E;
        case 0x51A24U: goto L_051A24;
        case 0x51A28U: goto L_051A28;
        case 0x51A2AU: goto L_051A2A;
        case 0x51A30U: goto L_051A30;
        case 0x51A34U: goto L_051A34;
        case 0x51A38U: goto L_051A38;
        case 0x51A3AU: goto L_051A3A;
        case 0x51A3EU: goto L_051A3E;
        case 0x51A40U: goto L_051A40;
        case 0x51A42U: goto L_051A42;
        case 0x51A44U: goto L_051A44;
        case 0x51A4AU: goto L_051A4A;
        case 0x51A4EU: goto L_051A4E;
        case 0x51A52U: goto L_051A52;
        case 0x51A54U: goto L_051A54;
        case 0x51A56U: goto L_051A56;
        case 0x51A5AU: goto L_051A5A;
        case 0x51A5EU: goto L_051A5E;
        case 0x51A62U: goto L_051A62;
        case 0x51A66U: goto L_051A66;
        case 0x51A6AU: goto L_051A6A;
        case 0x51A6CU: goto L_051A6C;
        case 0x51A70U: goto L_051A70;
        case 0x51A76U: goto L_051A76;
        case 0x51A78U: goto L_051A78;
        case 0x51A7EU: goto L_051A7E;
        case 0x51A84U: goto L_051A84;
        case 0x51A88U: goto L_051A88;
        case 0x51A8AU: goto L_051A8A;
        case 0x51A8CU: goto L_051A8C;
        case 0x51A90U: goto L_051A90;
        case 0x51A94U: goto L_051A94;
        case 0x51A96U: goto L_051A96;
        case 0x51A9CU: goto L_051A9C;
        case 0x51AA2U: goto L_051AA2;
        case 0x51AA6U: goto L_051AA6;
        case 0x51AAAU: goto L_051AAA;
        case 0x51AAEU: goto L_051AAE;
        case 0x51AB2U: goto L_051AB2;
        case 0x51AB4U: goto L_051AB4;
        case 0x51AB6U: goto L_051AB6;
        case 0x51ABAU: goto L_051ABA;
        case 0x51ABCU: goto L_051ABC;
        case 0x51ABEU: goto L_051ABE;
        case 0x51AC2U: goto L_051AC2;
        case 0x51AC6U: goto L_051AC6;
        case 0x51AC8U: goto L_051AC8;
        case 0x51ACCU: goto L_051ACC;
        case 0x51AD0U: goto L_051AD0;
        case 0x51AD4U: goto L_051AD4;
        case 0x51ADAU: goto L_051ADA;
        case 0x51ADEU: goto L_051ADE;
        case 0x51AE0U: goto L_051AE0;
        case 0x51AE6U: goto L_051AE6;
        case 0x51AE8U: goto L_051AE8;
        case 0x51AECU: goto L_051AEC;
        case 0x51AF0U: goto L_051AF0;
        case 0x51AF4U: goto L_051AF4;
        case 0x51AF8U: goto L_051AF8;
        case 0x51AFCU: goto L_051AFC;
        case 0x51B00U: goto L_051B00;
        case 0x51B04U: goto L_051B04;
        case 0x51B06U: goto L_051B06;
        case 0x51B0AU: goto L_051B0A;
        case 0x51B0CU: goto L_051B0C;
        case 0x51B10U: goto L_051B10;
        case 0x51B14U: goto L_051B14;
        case 0x51B16U: goto L_051B16;
        case 0x51B1AU: goto L_051B1A;
        case 0x51B1EU: goto L_051B1E;
        case 0x51B22U: goto L_051B22;
        case 0x51B24U: goto L_051B24;
        case 0x51B26U: goto L_051B26;
        case 0x51B2AU: goto L_051B2A;
        case 0x51B2CU: goto L_051B2C;
        case 0x51B2EU: goto L_051B2E;
        case 0x51B34U: goto L_051B34;
        case 0x51B36U: goto L_051B36;
        case 0x51B3AU: goto L_051B3A;
        case 0x51B3CU: goto L_051B3C;
        case 0x51B40U: goto L_051B40;
        case 0x51B42U: goto L_051B42;
        case 0x51B46U: goto L_051B46;
        case 0x51B48U: goto L_051B48;
        case 0x51B4CU: goto L_051B4C;
        case 0x51B50U: goto L_051B50;
        case 0x51B54U: goto L_051B54;
        case 0x51B56U: goto L_051B56;
        case 0x51B58U: goto L_051B58;
        case 0x51B5CU: goto L_051B5C;
        case 0x51B60U: goto L_051B60;
        case 0x51B64U: goto L_051B64;
        case 0x51B68U: goto L_051B68;
        case 0x51B6AU: goto L_051B6A;
        case 0x51B70U: goto L_051B70;
        case 0x51B72U: goto L_051B72;
        case 0x51B76U: goto L_051B76;
        case 0x51B7AU: goto L_051B7A;
        case 0x51B7EU: goto L_051B7E;
        case 0x51B80U: goto L_051B80;
        case 0x51B86U: goto L_051B86;
        case 0x51B8AU: goto L_051B8A;
        case 0x51B8CU: goto L_051B8C;
        case 0x51B92U: goto L_051B92;
        case 0x51B94U: goto L_051B94;
        case 0x51B9AU: goto L_051B9A;
        case 0x51B9CU: goto L_051B9C;
        case 0x51B9EU: goto L_051B9E;
        case 0x51BA0U: goto L_051BA0;
        case 0x51BA2U: goto L_051BA2;
        case 0x51BA6U: goto L_051BA6;
        case 0x51BAAU: goto L_051BAA;
        case 0x51BACU: goto L_051BAC;
        case 0x51BB0U: goto L_051BB0;
        case 0x51BB4U: goto L_051BB4;
        case 0x51BB6U: goto L_051BB6;
        case 0x51BBCU: goto L_051BBC;
        case 0x51BC0U: goto L_051BC0;
        case 0x51BC2U: goto L_051BC2;
        case 0x51BC4U: goto L_051BC4;
        case 0x51BC8U: goto L_051BC8;
        case 0x51BCCU: goto L_051BCC;
        case 0x51BD0U: goto L_051BD0;
        case 0x51BD2U: goto L_051BD2;
        case 0x51BD4U: goto L_051BD4;
        case 0x51BD8U: goto L_051BD8;
        case 0x51BDCU: goto L_051BDC;
        case 0x51BDEU: goto L_051BDE;
        case 0x51BE2U: goto L_051BE2;
        case 0x51BE6U: goto L_051BE6;
        case 0x51BEAU: goto L_051BEA;
        case 0x51BECU: goto L_051BEC;
        case 0x51BF0U: goto L_051BF0;
        case 0x51BF4U: goto L_051BF4;
        case 0x51BF8U: goto L_051BF8;
        case 0x51BFCU: goto L_051BFC;
        case 0x51C00U: goto L_051C00;
        case 0x51C02U: goto L_051C02;
        case 0x51C06U: goto L_051C06;
        case 0x51C0AU: goto L_051C0A;
        case 0x51C0EU: goto L_051C0E;
        case 0x51C10U: goto L_051C10;
        case 0x51C14U: goto L_051C14;
        case 0x51C18U: goto L_051C18;
        case 0x51C1CU: goto L_051C1C;
        case 0x51C1EU: goto L_051C1E;
        case 0x51C22U: goto L_051C22;
        case 0x51C24U: goto L_051C24;
        case 0x51C28U: goto L_051C28;
        case 0x51C2CU: goto L_051C2C;
        case 0x51C2EU: goto L_051C2E;
        case 0x51C32U: goto L_051C32;
        case 0x51C38U: goto L_051C38;
        case 0x51C3CU: goto L_051C3C;
        case 0x51C40U: goto L_051C40;
        case 0x51C42U: goto L_051C42;
        case 0x51C46U: goto L_051C46;
        case 0x51C48U: goto L_051C48;
        case 0x51C4CU: goto L_051C4C;
        case 0x51C50U: goto L_051C50;
        case 0x51C52U: goto L_051C52;
        case 0x51C56U: goto L_051C56;
        case 0x51C5AU: goto L_051C5A;
        case 0x51C5EU: goto L_051C5E;
        case 0x51C60U: goto L_051C60;
        case 0x51C64U: goto L_051C64;
        case 0x51C68U: goto L_051C68;
        case 0x51D32U: goto L_051D32;
        case 0x52A44U: goto L_052A44;
        case 0x52A48U: goto L_052A48;
        case 0x52A4CU: goto L_052A4C;
        case 0x52A4EU: goto L_052A4E;
        case 0x52A54U: goto L_052A54;
        case 0x52A56U: goto L_052A56;
        case 0x52A5AU: goto L_052A5A;
        case 0x52A5CU: goto L_052A5C;
        case 0x52A60U: goto L_052A60;
        case 0x52A64U: goto L_052A64;
        case 0x52A66U: goto L_052A66;
        case 0x52A6CU: goto L_052A6C;
        case 0x52A6EU: goto L_052A6E;
        case 0x52A72U: goto L_052A72;
        case 0x52A74U: goto L_052A74;
        case 0x52A78U: goto L_052A78;
        case 0x52A7CU: goto L_052A7C;
        case 0x52A7EU: goto L_052A7E;
        case 0x52A84U: goto L_052A84;
        case 0x52A86U: goto L_052A86;
        case 0x52A8AU: goto L_052A8A;
        case 0x52A8CU: goto L_052A8C;
        case 0x52A90U: goto L_052A90;
        case 0x52A94U: goto L_052A94;
        case 0x52A96U: goto L_052A96;
        case 0x52A9CU: goto L_052A9C;
        case 0x52A9EU: goto L_052A9E;
        case 0x52AA2U: goto L_052AA2;
        case 0x52AA4U: goto L_052AA4;
        default: break; } }
    goto L_051D2E;
L_051912: ;
    ITR(0x51912U, 10);
    { /* 051912 051912 bra src=None dst=None cc=0 */
        goto L_052A44;
    }
L_0519A0: ;
    ITR(0x519A0U, 8);
    { /* 0519A0 0519a0 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_0519A4: ;
    ITR(0x519A4U, 4);
    { /* 0519A4 0519a4 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519A6: ;
    ITR(0x519A6U, 74);
    { /* 0519A6 0519a6 mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_0519AA: ;
    ITR(0x519AAU, 8);
    { /* 0519AA 0519aa adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=4 d=0 v=0) */
        a4 += SX16((d0 & 0xFFFF));
    }
L_0519AC: ;
    ITR(0x519ACU, 13);
    { /* 0519AC 0519ac scc.b src=None dst=EA(d16 r=4 d=10 v=0) cc=0 */
        { uint32_t t2 = (a4 + 0xAU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519B0: ;
    ITR(0x519B0U, 12);
    { /* 0519B0 0519b0 lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=6 d=0 v=0) */
        a6 = 0xDFF000U;
    }
L_0519B6: ;
    ITR(0x519B6U, 8);
    { /* 0519B6 0519b6 move.w src=EA(imm r=0 d=0 v=30) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x30U;
        SETW(d0, t1);
        }
    }
L_0519BA: ;
    ITR(0x519BAU, 70);
    { /* 0519BA 0519ba mulu.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d7 & 0xFFFF);
        d0 = t1;
        }
    }
L_0519BC: ;
    ITR(0x519BCU, 8);
    { /* 0519BC 0519bc lea.l src=EA(pcd r=0 d=0 v=51d9a) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x51D9AU;
    }
L_0519C0: ;
    ITR(0x519C0U, 8);
    { /* 0519C0 0519c0 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 += SX16((d0 & 0xFFFF));
    }
L_0519C2: ;
    ITR(0x519C2U, 4);
    { /* 0519C2 0519c2 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519C4: ;
    ITR(0x519C4U, 14);
    { /* 0519C4 0519c4 lsl.w src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 1, (d0 & 0xFFFF), 4, 16);
        SETW(d0, t1);
        }
    }
L_0519C6: ;
    ITR(0x519C6U, 8);
    { /* 0519C6 0519c6 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=6 d=0 v=0) */
        a6 += SX16((d0 & 0xFFFF));
    }
L_0519C8: ;
    ITR(0x519C8U, 16);
    { /* 0519C8 0519c8 movea.l src=EA(d16 r=0 d=4 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x4U));
    }
L_0519CC: ;
    ITR(0x519CCU, 16);
    { /* 0519CC 0519cc movea.l src=EA(d16 r=0 d=24 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 = rd32((a0 + 0x18U));
    }
L_0519D0: ;
    ITR(0x519D0U, 12);
    { /* 0519D0 0519d0 tst.b src=None dst=EA(d16 r=0 d=22 v=0) */
        { uint32_t t = rd8((a0 + 0x16U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519D4: ;
    ITR(0x519D4U, 8);
    { /* 0519D4 0519d4 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_0519D6: ;
    ITR(0x519D6U, 13);
    { /* 0519D6 0519d6 scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=0 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519DA: ;
    ITR(0x519DAU, 16);
    { /* 0519DA 0519da move.l src=EA(d16 r=5 d=4 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x4U));
        d0 = t1;
        FLAGS_LOGIC(t1, 0xFFFFFFFFU, 0x80000000U);
        }
    }
L_0519DE: ;
    ITR(0x519DEU, 8);
    { /* 0519DE 0519de bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051A06;
    }
L_0519E0: ;
    ITR(0x519E0U, 16);
    { /* 0519E0 0519e0 movea.l src=EA(d16 r=5 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a5 + 0x0U));
    }
L_0519E4: ;
    ITR(0x519E4U, 6);
    { /* 0519E4 0519e4 adda.l src=EA(dn r=0 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += d0;
    }
L_0519E6: ;
    ITR(0x519E6U, 10);
    { /* 0519E6 0519e6 lsr.l src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, 1, 32);
        d0 = t1;
        }
    }
L_0519E8: ;
    ITR(0x519E8U, 12);
    { /* 0519E8 0519e8 move.w src=EA(d16 r=5 d=8 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        SETW(d1, t1);
        }
    }
L_0519EC: ;
    ITR(0x519ECU, 4);
    { /* 0519EC 0519ec sub.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_0519EE: ;
    ITR(0x519EEU, 20);
    { /* 0519EE 0519ee move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = a2;
        wr32((a4 + 0x0U), t1);
        }
    }
L_0519F2: ;
    ITR(0x519F2U, 12);
    { /* 0519F2 0519f2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x4U), t1);
        }
    }
L_0519F6: ;
    ITR(0x519F6U, 12);
    { /* 0519F6 0519f6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519FA: ;
    ITR(0x519FAU, 8);
    { /* 0519FA 0519fa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A04;
    }
L_0519FC: ;
    ITR(0x519FCU, 20);
    { /* 0519FC 0519fc move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = a2;
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A00: ;
    ITR(0x51A00U, 12);
    { /* 051A00 051a00 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A04: ;
    ITR(0x51A04U, 10);
    { /* 051A04 051a04 bra src=None dst=None cc=0 */
        goto L_051A24;
    }
L_051A06: ;
    ITR(0x51A06U, 32);
    { /* 051A06 051a06 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A0C: ;
    ITR(0x51A0CU, 16);
    { /* 051A0C 051a0c move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A12: ;
    ITR(0x51A12U, 12);
    { /* 051A12 051a12 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A16: ;
    ITR(0x51A16U, 8);
    { /* 051A16 051a16 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_051A18: ;
    ITR(0x51A18U, 32);
    { /* 051A18 051a18 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A1E: ;
    ITR(0x51A1EU, 16);
    { /* 051A1E 051a1e move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A24: ;
    ITR(0x51A24U, 16);
    { /* 051A24 051a24 subq.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        wr16(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A28: ;
    ITR(0x51A28U, 8);
    { /* 051A28 051a28 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4E;
    }
L_051A2A: ;
    ITR(0x51A2AU, 16);
    { /* 051A2A 051a2a cmpi.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A30: ;
    ITR(0x51A30U, 8);
    { /* 051A30 051a30 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AF4;
    }
L_051A34: ;
    ITR(0x51A34U, 12);
    { /* 051A34 051a34 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A38: ;
    ITR(0x51A38U, 8);
    { /* 051A38 051a38 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A4A;
    }
L_051A3A: ;
    ITR(0x51A3AU, 12);
    { /* 051A3A 051a3a cmpi.b src=EA(imm r=0 d=0 v=83) dst=EA(ind r=1 d=0 v=0) */
        { uint32_t t1 = 0x83U;
        uint32_t t4 = a1;
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051A3E: ;
    ITR(0x51A3EU, 8);
    { /* 051A3E 051a3e bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4A;
    }
L_051A40: ;
    ITR(0x51A40U, 4);
    { /* 051A40 051a40 clr.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, 0);
    }
L_051A42: ;
    ITR(0x51A42U, 8);
    { /* 051A42 051a42 bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051A44: ;
    ITR(0x51A44U, 16);
    { /* 051A44 051a44 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051A4A: ;
    ITR(0x51A4AU, 10);
    { /* 051A4A 051a4a bra src=None dst=None cc=0 */
        goto L_051AE6;
    }
L_051A4E: ;
    ITR(0x51A4EU, 16);
    { /* 051A4E 051a4e clr.b src=None dst=EA(d16 r=0 d=0 v=0) */
        wr8((a0 + 0x0U), 0);
    }
L_051A52: ;
    ITR(0x51A52U, 4);
    { /* 051A52 051a52 moveq.l src=EA(imm r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        d0 = 0x0U;
    }
L_051A54: ;
    ITR(0x51A54U, 8);
    { /* 051A54 051a54 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d0, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051A56: ;
    ITR(0x51A56U, 8);
    { /* 051A56 051a56 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BE6;
    }
L_051A5A: ;
    ITR(0x51A5AU, 12);
    { /* 051A5A 051a5a move.b src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=2 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        wr8((a0 + 0x2U), t1);
        }
    }
L_051A5E: ;
    ITR(0x51A5EU, 12);
    { /* 051A5E 051a5e add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A62: ;
    ITR(0x51A62U, 12);
    { /* 051A62 051a62 add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A66: ;
    ITR(0x51A66U, 16);
    { /* 051A66 051a66 movea.l src=EA(d16 r=0 d=34 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x22U));
    }
L_051A6A: ;
    ITR(0x51A6AU, 8);
    { /* 051A6A 051a6a move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051A6C: ;
    ITR(0x51A6CU, 20);
    { /* 051A6C 051a6c move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051A70: ;
    ITR(0x51A70U, 20);
    { /* 051A70 051a70 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051A76: ;
    ITR(0x51A76U, 4);
    { /* 051A76 051a76 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051A78: ;
    ITR(0x51A78U, 32);
    { /* 051A78 051a78 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A7E: ;
    ITR(0x51A7EU, 20);
    { /* 051A7E 051a7e move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A84: ;
    ITR(0x51A84U, 12);
    { /* 051A84 051a84 move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051A88: ;
    ITR(0x51A88U, 70);
    { /* 051A88 051a88 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051A8A: ;
    ITR(0x51A8AU, 18);
    { /* 051A8A 051a8a lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051A8C: ;
    ITR(0x51A8CU, 12);
    { /* 051A8C 051a8c move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051A90: ;
    ITR(0x51A90U, 12);
    { /* 051A90 051a90 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A94: ;
    ITR(0x51A94U, 8);
    { /* 051A94 051a94 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AA6;
    }
L_051A96: ;
    ITR(0x51A96U, 32);
    { /* 051A96 051a96 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A9C: ;
    ITR(0x51A9CU, 20);
    { /* 051A9C 051a9c move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051AA2: ;
    ITR(0x51AA2U, 12);
    { /* 051AA2 051aa2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051AA6: ;
    ITR(0x51AA6U, 8);
    { /* 051AA6 051aa6 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AAA: ;
    ITR(0x51AAAU, 8);
    { /* 051AAA 051aaa lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051AAE: ;
    ITR(0x51AAEU, 12);
    { /* 051AAE 051aae move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051AB2: ;
    ITR(0x51AB2U, 4);
    { /* 051AB2 051ab2 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051AB4: ;
    ITR(0x51AB4U, 4);
    { /* 051AB4 051ab4 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AB6: ;
    ITR(0x51AB6U, 14);
    { /* 051AB6 051ab6 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051ABA: ;
    ITR(0x51ABAU, 70);
    { /* 051ABA 051aba mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051ABC: ;
    ITR(0x51ABCU, 16);
    { /* 051ABC 051abc lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051ABE: ;
    ITR(0x51ABEU, 12);
    { /* 051ABE 051abe move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051AC2: ;
    ITR(0x51AC2U, 12);
    { /* 051AC2 051ac2 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051AC6: ;
    ITR(0x51AC6U, 8);
    { /* 051AC6 051ac6 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051ACC;
    }
L_051AC8: ;
    ITR(0x51AC8U, 12);
    { /* 051AC8 051ac8 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051ACC: ;
    ITR(0x51ACCU, 13);
    { /* 051ACC 051acc scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=1 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051AD0: ;
    ITR(0x51AD0U, 20);
    { /* 051AD0 051ad0 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=4 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x4U), t1);
        }
    }
L_051AD4: ;
    ITR(0x51AD4U, 20);
    { /* 051AD4 051ad4 move.w src=EA(d16 r=0 d=28 v=0) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = rd16((a0 + 0x1CU));
        wr16((a0 + 0x1EU), t1);
        }
    }
L_051ADA: ;
    ITR(0x51ADAU, 8);
    { /* 051ADA 051ada move.w src=EA(imm r=0 d=0 v=8200) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x8200U;
        SETW(d1, t1);
        }
    }
L_051ADE: ;
    ITR(0x51ADEU, 8);
    { /* 051ADE 051ade bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051AE0: ;
    ITR(0x51AE0U, 16);
    { /* 051AE0 051ae0 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051AE6: ;
    ITR(0x51AE6U, 4);
    { /* 051AE6 051ae6 addq.w src=EA(imm r=0 d=0 v=1) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d7, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFFFU, 0x8000U, 1);
        }
    }
L_051AE8: ;
    ITR(0x51AE8U, 8);
    { /* 051AE8 051ae8 cmp.w src=EA(imm r=0 d=0 v=4) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x4U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051AEC: ;
    ITR(0x51AECU, 10);
    { /* 051AEC 051aec bcc src=None dst=None cc=6 */
        if (COND_6) { BUDGET_CHECK(0x519A0U); goto L_0519A0; }
    }
L_051AF0: ;
    ITR(0x51AF0U, 10);
    { /* 051AF0 051af0 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51912U); goto L_051912; }
    }
L_051AF4: ;
    ITR(0x51AF4U, 12);
    { /* 051AF4 051af4 move.b src=EA(d16 r=0 d=2 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2U));
        SETB(d0, t1);
        }
    }
L_051AF8: ;
    ITR(0x51AF8U, 12);
    { /* 051AF8 051af8 add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051AFC: ;
    ITR(0x51AFCU, 12);
    { /* 051AFC 051afc add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B00: ;
    ITR(0x51B00U, 16);
    { /* 051B00 051b00 movea.l src=EA(d16 r=0 d=16 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x10U));
    }
L_051B04: ;
    ITR(0x51B04U, 8);
    { /* 051B04 051b04 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051B06: ;
    ITR(0x51B06U, 12);
    { /* 051B06 051b06 bclr.l src=EA(imm r=0 d=0 v=7) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (0x7U) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 & ~(1u << t1);
        }
    }
L_051B0A: ;
    ITR(0x51B0AU, 8);
    { /* 051B0A 051b0a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B10;
    }
L_051B0C: ;
    ITR(0x51B0CU, 16);
    { /* 051B0C 051b0c movea.l src=EA(d16 r=0 d=12 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0xCU));
    }
L_051B10: ;
    ITR(0x51B10U, 20);
    { /* 051B10 051b10 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051B14: ;
    ITR(0x51B14U, 4);
    { /* 051B14 051b14 add.b src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B16: ;
    ITR(0x51B16U, 8);
    { /* 051B16 051b16 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B1A: ;
    ITR(0x51B1AU, 8);
    { /* 051B1A 051b1a lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051B1E: ;
    ITR(0x51B1EU, 12);
    { /* 051B1E 051b1e move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051B22: ;
    ITR(0x51B22U, 4);
    { /* 051B22 051b22 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051B24: ;
    ITR(0x51B24U, 4);
    { /* 051B24 051b24 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B26: ;
    ITR(0x51B26U, 14);
    { /* 051B26 051b26 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051B2A: ;
    ITR(0x51B2AU, 70);
    { /* 051B2A 051b2a mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051B2C: ;
    ITR(0x51B2CU, 16);
    { /* 051B2C 051b2c lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051B2E: ;
    ITR(0x51B2EU, 16);
    { /* 051B2E 051b2e btst.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=0 v=0) */
        { uint32_t t1 = (0x1U) & 7;
        uint32_t t3 = (a0 + 0x0U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B34: ;
    ITR(0x51B34U, 8);
    { /* 051B34 051b34 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B50;
    }
L_051B36: ;
    ITR(0x51B36U, 12);
    { /* 051B36 051b36 tst.b src=None dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t = rd8((a0 + 0x15U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B3A: ;
    ITR(0x51B3AU, 8);
    { /* 051B3A 051b3a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B42;
    }
L_051B3C: ;
    ITR(0x51B3CU, 16);
    { /* 051B3C 051b3c subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x15U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        }
    }
L_051B40: ;
    ITR(0x51B40U, 10);
    { /* 051B40 051b40 bra src=None dst=None cc=0 */
        goto L_051B50;
    }
L_051B42: ;
    ITR(0x51B42U, 12);
    { /* 051B42 051b42 move.b src=EA(d16 r=0 d=20 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x14U));
        SETB(d1, t1);
        }
    }
L_051B46: ;
    ITR(0x51B46U, 4);
    { /* 051B46 051b46 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B48: ;
    ITR(0x51B48U, 16);
    { /* 051B48 051b48 add.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=32 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t4 = (a0 + 0x20U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        wr16(t4, t3);
        }
    }
L_051B4C: ;
    ITR(0x51B4CU, 12);
    { /* 051B4C 051b4c sub.w src=EA(d16 r=0 d=32 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a0 + 0x20U));
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B50: ;
    ITR(0x51B50U, 12);
    { /* 051B50 051b50 tst.b src=None dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t = rd8((a0 + 0x1U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B54: ;
    ITR(0x51B54U, 8);
    { /* 051B54 051b54 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA2;
    }
L_051B56: ;
    ITR(0x51B56U, 8);
    { /* 051B56 051b56 bcc src=None dst=None cc=10 */
        if (COND_10) goto L_051B72;
    }
L_051B58: ;
    ITR(0x51B58U, 12);
    { /* 051B58 051b58 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B5C: ;
    ITR(0x51B5CU, 12);
    { /* 051B5C 051b5c add.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B60: ;
    ITR(0x51B60U, 12);
    { /* 051B60 051b60 move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        }
    }
L_051B64: ;
    ITR(0x51B64U, 12);
    { /* 051B64 051b64 cmp.b src=EA(d16 r=0 d=46 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2EU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051B68: ;
    ITR(0x51B68U, 8);
    { /* 051B68 051b68 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B6A: ;
    ITR(0x51B6AU, 20);
    { /* 051B6A 051b6a bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B70: ;
    ITR(0x51B70U, 10);
    { /* 051B70 051b70 bra src=None dst=None cc=0 */
        goto L_051B86;
    }
L_051B72: ;
    ITR(0x51B72U, 12);
    { /* 051B72 051b72 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B76: ;
    ITR(0x51B76U, 12);
    { /* 051B76 051b76 sub.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B7A: ;
    ITR(0x51B7AU, 12);
    { /* 051B7A 051b7a move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051B7E: ;
    ITR(0x51B7EU, 8);
    { /* 051B7E 051b7e bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B80: ;
    ITR(0x51B80U, 20);
    { /* 051B80 051b80 bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B86: ;
    ITR(0x51B86U, 12);
    { /* 051B86 051b86 tst.b src=None dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t = rd8((a0 + 0x2DU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B8A: ;
    ITR(0x51B8AU, 8);
    { /* 051B8A 051b8a bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B92;
    }
L_051B8C: ;
    ITR(0x51B8CU, 20);
    { /* 051B8C 051b8c bchg.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B92: ;
    ITR(0x51B92U, 4);
    { /* 051B92 051b92 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B94: ;
    ITR(0x51B94U, 16);
    { /* 051B94 051b94 btst.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B9A: ;
    ITR(0x51B9AU, 8);
    { /* 051B9A 051b9a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA0;
    }
L_051B9C: ;
    ITR(0x51B9CU, 4);
    { /* 051B9C 051b9c add.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B9E: ;
    ITR(0x51B9EU, 10);
    { /* 051B9E 051b9e bra src=None dst=None cc=0 */
        goto L_051BA2;
    }
L_051BA0: ;
    ITR(0x51BA0U, 4);
    { /* 051BA0 051ba0 sub.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051BA2: ;
    ITR(0x51BA2U, 12);
    { /* 051BA2 051ba2 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051BA6: ;
    ITR(0x51BA6U, 12);
    { /* 051BA6 051ba6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BAA: ;
    ITR(0x51BAAU, 8);
    { /* 051BAA 051baa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BB0;
    }
L_051BAC: ;
    ITR(0x51BACU, 12);
    { /* 051BAC 051bac move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051BB0: ;
    ITR(0x51BB0U, 16);
    { /* 051BB0 051bb0 subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x2BU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BB4: ;
    ITR(0x51BB4U, 8);
    { /* 051BB4 051bb4 bcc src=None dst=None cc=4 */
        if (COND_4) goto L_051BE2;
    }
L_051BB6: ;
    ITR(0x51BB6U, 20);
    { /* 051BB6 051bb6 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051BBC: ;
    ITR(0x51BBCU, 16);
    { /* 051BBC 051bbc movea.l src=EA(d16 r=0 d=38 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x26U));
    }
L_051BC0: ;
    ITR(0x51BC0U, 8);
    { /* 051BC0 051bc0 move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051BC2: ;
    ITR(0x51BC2U, 8);
    { /* 051BC2 051bc2 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BC8;
    }
L_051BC4: ;
    ITR(0x51BC4U, 20);
    { /* 051BC4 051bc4 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051BC8: ;
    ITR(0x51BC8U, 8);
    { /* 051BC8 051bc8 andi.w src=EA(imm r=0 d=0 v=7f) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x7FU;
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_051BCC: ;
    ITR(0x51BCCU, 12);
    { /* 051BCC 051bcc move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051BD0: ;
    ITR(0x51BD0U, 70);
    { /* 051BD0 051bd0 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051BD2: ;
    ITR(0x51BD2U, 18);
    { /* 051BD2 051bd2 lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051BD4: ;
    ITR(0x51BD4U, 12);
    { /* 051BD4 051bd4 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051BD8: ;
    ITR(0x51BD8U, 12);
    { /* 051BD8 051bd8 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BDC: ;
    ITR(0x51BDCU, 8);
    { /* 051BDC 051bdc bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BE2;
    }
L_051BDE: ;
    ITR(0x51BDEU, 12);
    { /* 051BDE 051bde move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051BE2: ;
    ITR(0x51BE2U, 10);
    { /* 051BE2 051be2 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51AE6U); goto L_051AE6; }
    }
L_051BE6: ;
    ITR(0x51BE6U, 8);
    { /* 051BE6 051be6 cmp.b src=EA(imm r=0 d=0 v=e0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xE0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BEA: ;
    ITR(0x51BEAU, 8);
    { /* 051BEA 051bea bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051BFC;
    }
L_051BEC: ;
    ITR(0x51BECU, 8);
    { /* 051BEC 051bec subi.b src=EA(imm r=0 d=0 v=df) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xDFU;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051BF0: ;
    ITR(0x51BF0U, 78);
    { /* 051BF0 051bf0 mulu.w src=EA(pcd r=0 d=0 v=51d82) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * rd16(0x51D82U);
        d0 = t1;
        }
    }
L_051BF4: ;
    ITR(0x51BF4U, 12);
    { /* 051BF4 051bf4 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=28 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a0 + 0x1CU), t1);
        }
    }
L_051BF8: ;
    ITR(0x51BF8U, 10);
    { /* 051BF8 051bf8 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051BFC: ;
    ITR(0x51BFCU, 8);
    { /* 051BFC 051bfc cmp.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C00: ;
    ITR(0x51C00U, 8);
    { /* 051C00 051c00 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C18;
    }
L_051C02: ;
    ITR(0x51C02U, 8);
    { /* 051C02 051c02 subi.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C06: ;
    ITR(0x51C06U, 8);
    { /* 051C06 051c06 lea.l src=EA(pcd r=0 d=0 v=51f3c) dst=EA(an r=5 d=0 v=0) */
        a5 = 0x51F3CU;
    }
L_051C0A: ;
    ITR(0x51C0AU, 74);
    { /* 051C0A 051c0a mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_051C0E: ;
    ITR(0x51C0EU, 8);
    { /* 051C0E 051c0e adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 += SX16((d0 & 0xFFFF));
    }
L_051C10: ;
    ITR(0x51C10U, 20);
    { /* 051C10 051c10 move.l src=EA(an r=5 d=0 v=0) dst=EA(d16 r=0 d=24 v=0) */
        { uint32_t t1 = a5;
        wr32((a0 + 0x18U), t1);
        }
    }
L_051C14: ;
    ITR(0x51C14U, 10);
    { /* 051C14 051c14 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C18: ;
    ITR(0x51C18U, 8);
    { /* 051C18 051c18 cmp.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C1C: ;
    ITR(0x51C1CU, 8);
    { /* 051C1C 051c1c bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C3C;
    }
L_051C1E: ;
    ITR(0x51C1EU, 8);
    { /* 051C1E 051c1e subi.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C22: ;
    ITR(0x51C22U, 4);
    { /* 051C22 051c22 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C24: ;
    ITR(0x51C24U, 8);
    { /* 051C24 051c24 lea.l src=EA(pcd r=0 d=0 v=52f1e) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x52F1EU;
    }
L_051C28: ;
    ITR(0x51C28U, 14);
    { /* 051C28 051c28 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C2C: ;
    ITR(0x51C2CU, 6);
    { /* 051C2C 051c2c adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C2E: ;
    ITR(0x51C2EU, 20);
    { /* 051C2E 051c2e move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=34 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x22U), t1);
        }
    }
L_051C32: ;
    ITR(0x51C32U, 20);
    { /* 051C32 051c32 move.b src=EA(d16 r=2 d=-1 v=0) dst=EA(d16 r=0 d=42 v=0) */
        { uint32_t t1 = rd8((a2 + 0xFFFFFFFFU));
        wr8((a0 + 0x2AU), t1);
        }
    }
L_051C38: ;
    ITR(0x51C38U, 10);
    { /* 051C38 051c38 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C3C: ;
    ITR(0x51C3CU, 8);
    { /* 051C3C 051c3c cmp.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C40: ;
    ITR(0x51C40U, 8);
    { /* 051C40 051c40 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C5E;
    }
L_051C42: ;
    ITR(0x51C42U, 8);
    { /* 051C42 051c42 subi.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C46: ;
    ITR(0x51C46U, 4);
    { /* 051C46 051c46 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C48: ;
    ITR(0x51C48U, 8);
    { /* 051C48 051c48 lea.l src=EA(pcd r=0 d=0 v=51eea) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51EEAU;
    }
L_051C4C: ;
    ITR(0x51C4CU, 14);
    { /* 051C4C 051c4c movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C50: ;
    ITR(0x51C50U, 6);
    { /* 051C50 051c50 adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C52: ;
    ITR(0x51C52U, 20);
    { /* 051C52 051c52 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=12 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0xCU), t1);
        }
    }
L_051C56: ;
    ITR(0x51C56U, 20);
    { /* 051C56 051c56 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051C5A: ;
    ITR(0x51C5AU, 10);
    { /* 051C5A 051c5a bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C5E: ;
    ITR(0x51C5EU, 4);
    { /* 051C5E 051c5e add.b src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_051C60: ;
    ITR(0x51C60U, 8);
    { /* 051C60 051c60 lea.l src=EA(pcd r=0 d=0 v=51d6a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51D6AU;
    }
L_051C64: ;
    ITR(0x51C64U, 14);
    { /* 051C64 051c64 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C68: ;
    ITR(0x51C68U, 14);
    { /* 051C68 051c68 jmp src=EA(idx r=3 d=0 v=0) dst=None */
        { call_dynamic((a3 + 0x0U + ((uint32_t)(int32_t)(int16_t)a2))); return; }
    }
L_051D2E: ;
    ITR(0x51D2EU, 13);
    { /* 051D2E 051d2e scc.b src=None dst=EA(d16 r=0 d=1 v=0) cc=1 */
        { uint32_t t2 = (a0 + 0x1U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051D32: ;
    ITR(0x51D32U, 10);
    { /* 051D32 051d32 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_052A44: ;
    ITR(0x52A44U, 8);
    { /* 052A44 052a44 lea.l src=EA(pcd r=0 d=0 v=52b9c) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52B9CU;
    }
L_052A48: ;
    ITR(0x52A48U, 12);
    { /* 052A48 052a48 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A4C: ;
    ITR(0x52A4CU, 8);
    { /* 052A4C 052a4c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A5C;
    }
L_052A4E: ;
    ITR(0x52A4EU, 12);
    { /* 052A4E 052a4e lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF000U;
    }
L_052A54: ;
    ITR(0x52A54U, 4);
    { /* 052A54 052a54 moveq.l src=EA(imm r=0 d=0 v=1) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x1U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A56: ;
    ITR(0x52A56U, 8);
    { /* 052A56 052a56 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_052A5A: ;
    ITR(0x52A5AU, 18);
    { /* 052A5A 052a5a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A5CU);
    }
L_052A5C: ;
    ITR(0x52A5CU, 8);
    { /* 052A5C 052a5c lea.l src=EA(pcd r=0 d=0 v=52bc0) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BC0U;
    }
L_052A60: ;
    ITR(0x52A60U, 12);
    { /* 052A60 052a60 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A64: ;
    ITR(0x52A64U, 8);
    { /* 052A64 052a64 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A74;
    }
L_052A66: ;
    ITR(0x52A66U, 12);
    { /* 052A66 052a66 lea.l src=EA(absl r=0 d=0 v=dff010) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF010U;
    }
L_052A6C: ;
    ITR(0x52A6CU, 4);
    { /* 052A6C 052a6c moveq.l src=EA(imm r=0 d=0 v=2) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x2U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A6E: ;
    ITR(0x52A6EU, 8);
    { /* 052A6E 052a6e lea.l src=EA(pcd r=0 d=0 v=52c3a) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C3AU;
    }
L_052A72: ;
    ITR(0x52A72U, 18);
    { /* 052A72 052a72 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A74U);
    }
L_052A74: ;
    ITR(0x52A74U, 8);
    { /* 052A74 052a74 lea.l src=EA(pcd r=0 d=0 v=52be4) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BE4U;
    }
L_052A78: ;
    ITR(0x52A78U, 12);
    { /* 052A78 052a78 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A7C: ;
    ITR(0x52A7CU, 8);
    { /* 052A7C 052a7c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A8C;
    }
L_052A7E: ;
    ITR(0x52A7EU, 12);
    { /* 052A7E 052a7e lea.l src=EA(absl r=0 d=0 v=dff020) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF020U;
    }
L_052A84: ;
    ITR(0x52A84U, 4);
    { /* 052A84 052a84 moveq.l src=EA(imm r=0 d=0 v=4) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x4U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A86: ;
    ITR(0x52A86U, 8);
    { /* 052A86 052a86 lea.l src=EA(pcd r=0 d=0 v=52c46) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C46U;
    }
L_052A8A: ;
    ITR(0x52A8AU, 18);
    { /* 052A8A 052a8a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A8CU);
    }
L_052A8C: ;
    ITR(0x52A8CU, 8);
    { /* 052A8C 052a8c lea.l src=EA(pcd r=0 d=0 v=52c08) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52C08U;
    }
L_052A90: ;
    ITR(0x52A90U, 12);
    { /* 052A90 052a90 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A94: ;
    ITR(0x52A94U, 8);
    { /* 052A94 052a94 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052AA4;
    }
L_052A96: ;
    ITR(0x52A96U, 12);
    { /* 052A96 052a96 lea.l src=EA(absl r=0 d=0 v=dff030) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF030U;
    }
L_052A9C: ;
    ITR(0x52A9CU, 4);
    { /* 052A9C 052a9c moveq.l src=EA(imm r=0 d=0 v=8) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x8U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A9E: ;
    ITR(0x52A9EU, 8);
    { /* 052A9E 052a9e lea.l src=EA(pcd r=0 d=0 v=52c52) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C52U;
    }
L_052AA2: ;
    ITR(0x52AA2U, 18);
    { /* 052AA2 052aa2 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52AA4U);
    }
L_052AA4: ;
    ITR(0x52AA4U, 16);
    { /* 052AA4 052aa4 rts src=None dst=None */
        RTS();
    }
}

void dwam_051D36(void)
{
    FN_ENTER(0x51D36U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51912U: goto L_051912;
        case 0x519A0U: goto L_0519A0;
        case 0x519A4U: goto L_0519A4;
        case 0x519A6U: goto L_0519A6;
        case 0x519AAU: goto L_0519AA;
        case 0x519ACU: goto L_0519AC;
        case 0x519B0U: goto L_0519B0;
        case 0x519B6U: goto L_0519B6;
        case 0x519BAU: goto L_0519BA;
        case 0x519BCU: goto L_0519BC;
        case 0x519C0U: goto L_0519C0;
        case 0x519C2U: goto L_0519C2;
        case 0x519C4U: goto L_0519C4;
        case 0x519C6U: goto L_0519C6;
        case 0x519C8U: goto L_0519C8;
        case 0x519CCU: goto L_0519CC;
        case 0x519D0U: goto L_0519D0;
        case 0x519D4U: goto L_0519D4;
        case 0x519D6U: goto L_0519D6;
        case 0x519DAU: goto L_0519DA;
        case 0x519DEU: goto L_0519DE;
        case 0x519E0U: goto L_0519E0;
        case 0x519E4U: goto L_0519E4;
        case 0x519E6U: goto L_0519E6;
        case 0x519E8U: goto L_0519E8;
        case 0x519ECU: goto L_0519EC;
        case 0x519EEU: goto L_0519EE;
        case 0x519F2U: goto L_0519F2;
        case 0x519F6U: goto L_0519F6;
        case 0x519FAU: goto L_0519FA;
        case 0x519FCU: goto L_0519FC;
        case 0x51A00U: goto L_051A00;
        case 0x51A04U: goto L_051A04;
        case 0x51A06U: goto L_051A06;
        case 0x51A0CU: goto L_051A0C;
        case 0x51A12U: goto L_051A12;
        case 0x51A16U: goto L_051A16;
        case 0x51A18U: goto L_051A18;
        case 0x51A1EU: goto L_051A1E;
        case 0x51A24U: goto L_051A24;
        case 0x51A28U: goto L_051A28;
        case 0x51A2AU: goto L_051A2A;
        case 0x51A30U: goto L_051A30;
        case 0x51A34U: goto L_051A34;
        case 0x51A38U: goto L_051A38;
        case 0x51A3AU: goto L_051A3A;
        case 0x51A3EU: goto L_051A3E;
        case 0x51A40U: goto L_051A40;
        case 0x51A42U: goto L_051A42;
        case 0x51A44U: goto L_051A44;
        case 0x51A4AU: goto L_051A4A;
        case 0x51A4EU: goto L_051A4E;
        case 0x51A52U: goto L_051A52;
        case 0x51A54U: goto L_051A54;
        case 0x51A56U: goto L_051A56;
        case 0x51A5AU: goto L_051A5A;
        case 0x51A5EU: goto L_051A5E;
        case 0x51A62U: goto L_051A62;
        case 0x51A66U: goto L_051A66;
        case 0x51A6AU: goto L_051A6A;
        case 0x51A6CU: goto L_051A6C;
        case 0x51A70U: goto L_051A70;
        case 0x51A76U: goto L_051A76;
        case 0x51A78U: goto L_051A78;
        case 0x51A7EU: goto L_051A7E;
        case 0x51A84U: goto L_051A84;
        case 0x51A88U: goto L_051A88;
        case 0x51A8AU: goto L_051A8A;
        case 0x51A8CU: goto L_051A8C;
        case 0x51A90U: goto L_051A90;
        case 0x51A94U: goto L_051A94;
        case 0x51A96U: goto L_051A96;
        case 0x51A9CU: goto L_051A9C;
        case 0x51AA2U: goto L_051AA2;
        case 0x51AA6U: goto L_051AA6;
        case 0x51AAAU: goto L_051AAA;
        case 0x51AAEU: goto L_051AAE;
        case 0x51AB2U: goto L_051AB2;
        case 0x51AB4U: goto L_051AB4;
        case 0x51AB6U: goto L_051AB6;
        case 0x51ABAU: goto L_051ABA;
        case 0x51ABCU: goto L_051ABC;
        case 0x51ABEU: goto L_051ABE;
        case 0x51AC2U: goto L_051AC2;
        case 0x51AC6U: goto L_051AC6;
        case 0x51AC8U: goto L_051AC8;
        case 0x51ACCU: goto L_051ACC;
        case 0x51AD0U: goto L_051AD0;
        case 0x51AD4U: goto L_051AD4;
        case 0x51ADAU: goto L_051ADA;
        case 0x51ADEU: goto L_051ADE;
        case 0x51AE0U: goto L_051AE0;
        case 0x51AE6U: goto L_051AE6;
        case 0x51AE8U: goto L_051AE8;
        case 0x51AECU: goto L_051AEC;
        case 0x51AF0U: goto L_051AF0;
        case 0x51AF4U: goto L_051AF4;
        case 0x51AF8U: goto L_051AF8;
        case 0x51AFCU: goto L_051AFC;
        case 0x51B00U: goto L_051B00;
        case 0x51B04U: goto L_051B04;
        case 0x51B06U: goto L_051B06;
        case 0x51B0AU: goto L_051B0A;
        case 0x51B0CU: goto L_051B0C;
        case 0x51B10U: goto L_051B10;
        case 0x51B14U: goto L_051B14;
        case 0x51B16U: goto L_051B16;
        case 0x51B1AU: goto L_051B1A;
        case 0x51B1EU: goto L_051B1E;
        case 0x51B22U: goto L_051B22;
        case 0x51B24U: goto L_051B24;
        case 0x51B26U: goto L_051B26;
        case 0x51B2AU: goto L_051B2A;
        case 0x51B2CU: goto L_051B2C;
        case 0x51B2EU: goto L_051B2E;
        case 0x51B34U: goto L_051B34;
        case 0x51B36U: goto L_051B36;
        case 0x51B3AU: goto L_051B3A;
        case 0x51B3CU: goto L_051B3C;
        case 0x51B40U: goto L_051B40;
        case 0x51B42U: goto L_051B42;
        case 0x51B46U: goto L_051B46;
        case 0x51B48U: goto L_051B48;
        case 0x51B4CU: goto L_051B4C;
        case 0x51B50U: goto L_051B50;
        case 0x51B54U: goto L_051B54;
        case 0x51B56U: goto L_051B56;
        case 0x51B58U: goto L_051B58;
        case 0x51B5CU: goto L_051B5C;
        case 0x51B60U: goto L_051B60;
        case 0x51B64U: goto L_051B64;
        case 0x51B68U: goto L_051B68;
        case 0x51B6AU: goto L_051B6A;
        case 0x51B70U: goto L_051B70;
        case 0x51B72U: goto L_051B72;
        case 0x51B76U: goto L_051B76;
        case 0x51B7AU: goto L_051B7A;
        case 0x51B7EU: goto L_051B7E;
        case 0x51B80U: goto L_051B80;
        case 0x51B86U: goto L_051B86;
        case 0x51B8AU: goto L_051B8A;
        case 0x51B8CU: goto L_051B8C;
        case 0x51B92U: goto L_051B92;
        case 0x51B94U: goto L_051B94;
        case 0x51B9AU: goto L_051B9A;
        case 0x51B9CU: goto L_051B9C;
        case 0x51B9EU: goto L_051B9E;
        case 0x51BA0U: goto L_051BA0;
        case 0x51BA2U: goto L_051BA2;
        case 0x51BA6U: goto L_051BA6;
        case 0x51BAAU: goto L_051BAA;
        case 0x51BACU: goto L_051BAC;
        case 0x51BB0U: goto L_051BB0;
        case 0x51BB4U: goto L_051BB4;
        case 0x51BB6U: goto L_051BB6;
        case 0x51BBCU: goto L_051BBC;
        case 0x51BC0U: goto L_051BC0;
        case 0x51BC2U: goto L_051BC2;
        case 0x51BC4U: goto L_051BC4;
        case 0x51BC8U: goto L_051BC8;
        case 0x51BCCU: goto L_051BCC;
        case 0x51BD0U: goto L_051BD0;
        case 0x51BD2U: goto L_051BD2;
        case 0x51BD4U: goto L_051BD4;
        case 0x51BD8U: goto L_051BD8;
        case 0x51BDCU: goto L_051BDC;
        case 0x51BDEU: goto L_051BDE;
        case 0x51BE2U: goto L_051BE2;
        case 0x51BE6U: goto L_051BE6;
        case 0x51BEAU: goto L_051BEA;
        case 0x51BECU: goto L_051BEC;
        case 0x51BF0U: goto L_051BF0;
        case 0x51BF4U: goto L_051BF4;
        case 0x51BF8U: goto L_051BF8;
        case 0x51BFCU: goto L_051BFC;
        case 0x51C00U: goto L_051C00;
        case 0x51C02U: goto L_051C02;
        case 0x51C06U: goto L_051C06;
        case 0x51C0AU: goto L_051C0A;
        case 0x51C0EU: goto L_051C0E;
        case 0x51C10U: goto L_051C10;
        case 0x51C14U: goto L_051C14;
        case 0x51C18U: goto L_051C18;
        case 0x51C1CU: goto L_051C1C;
        case 0x51C1EU: goto L_051C1E;
        case 0x51C22U: goto L_051C22;
        case 0x51C24U: goto L_051C24;
        case 0x51C28U: goto L_051C28;
        case 0x51C2CU: goto L_051C2C;
        case 0x51C2EU: goto L_051C2E;
        case 0x51C32U: goto L_051C32;
        case 0x51C38U: goto L_051C38;
        case 0x51C3CU: goto L_051C3C;
        case 0x51C40U: goto L_051C40;
        case 0x51C42U: goto L_051C42;
        case 0x51C46U: goto L_051C46;
        case 0x51C48U: goto L_051C48;
        case 0x51C4CU: goto L_051C4C;
        case 0x51C50U: goto L_051C50;
        case 0x51C52U: goto L_051C52;
        case 0x51C56U: goto L_051C56;
        case 0x51C5AU: goto L_051C5A;
        case 0x51C5EU: goto L_051C5E;
        case 0x51C60U: goto L_051C60;
        case 0x51C64U: goto L_051C64;
        case 0x51C68U: goto L_051C68;
        case 0x51D3AU: goto L_051D3A;
        case 0x52A44U: goto L_052A44;
        case 0x52A48U: goto L_052A48;
        case 0x52A4CU: goto L_052A4C;
        case 0x52A4EU: goto L_052A4E;
        case 0x52A54U: goto L_052A54;
        case 0x52A56U: goto L_052A56;
        case 0x52A5AU: goto L_052A5A;
        case 0x52A5CU: goto L_052A5C;
        case 0x52A60U: goto L_052A60;
        case 0x52A64U: goto L_052A64;
        case 0x52A66U: goto L_052A66;
        case 0x52A6CU: goto L_052A6C;
        case 0x52A6EU: goto L_052A6E;
        case 0x52A72U: goto L_052A72;
        case 0x52A74U: goto L_052A74;
        case 0x52A78U: goto L_052A78;
        case 0x52A7CU: goto L_052A7C;
        case 0x52A7EU: goto L_052A7E;
        case 0x52A84U: goto L_052A84;
        case 0x52A86U: goto L_052A86;
        case 0x52A8AU: goto L_052A8A;
        case 0x52A8CU: goto L_052A8C;
        case 0x52A90U: goto L_052A90;
        case 0x52A94U: goto L_052A94;
        case 0x52A96U: goto L_052A96;
        case 0x52A9CU: goto L_052A9C;
        case 0x52A9EU: goto L_052A9E;
        case 0x52AA2U: goto L_052AA2;
        case 0x52AA4U: goto L_052AA4;
        default: break; } }
    goto L_051D36;
L_051912: ;
    ITR(0x51912U, 10);
    { /* 051912 051912 bra src=None dst=None cc=0 */
        goto L_052A44;
    }
L_0519A0: ;
    ITR(0x519A0U, 8);
    { /* 0519A0 0519a0 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_0519A4: ;
    ITR(0x519A4U, 4);
    { /* 0519A4 0519a4 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519A6: ;
    ITR(0x519A6U, 74);
    { /* 0519A6 0519a6 mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_0519AA: ;
    ITR(0x519AAU, 8);
    { /* 0519AA 0519aa adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=4 d=0 v=0) */
        a4 += SX16((d0 & 0xFFFF));
    }
L_0519AC: ;
    ITR(0x519ACU, 13);
    { /* 0519AC 0519ac scc.b src=None dst=EA(d16 r=4 d=10 v=0) cc=0 */
        { uint32_t t2 = (a4 + 0xAU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519B0: ;
    ITR(0x519B0U, 12);
    { /* 0519B0 0519b0 lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=6 d=0 v=0) */
        a6 = 0xDFF000U;
    }
L_0519B6: ;
    ITR(0x519B6U, 8);
    { /* 0519B6 0519b6 move.w src=EA(imm r=0 d=0 v=30) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x30U;
        SETW(d0, t1);
        }
    }
L_0519BA: ;
    ITR(0x519BAU, 70);
    { /* 0519BA 0519ba mulu.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d7 & 0xFFFF);
        d0 = t1;
        }
    }
L_0519BC: ;
    ITR(0x519BCU, 8);
    { /* 0519BC 0519bc lea.l src=EA(pcd r=0 d=0 v=51d9a) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x51D9AU;
    }
L_0519C0: ;
    ITR(0x519C0U, 8);
    { /* 0519C0 0519c0 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 += SX16((d0 & 0xFFFF));
    }
L_0519C2: ;
    ITR(0x519C2U, 4);
    { /* 0519C2 0519c2 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519C4: ;
    ITR(0x519C4U, 14);
    { /* 0519C4 0519c4 lsl.w src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 1, (d0 & 0xFFFF), 4, 16);
        SETW(d0, t1);
        }
    }
L_0519C6: ;
    ITR(0x519C6U, 8);
    { /* 0519C6 0519c6 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=6 d=0 v=0) */
        a6 += SX16((d0 & 0xFFFF));
    }
L_0519C8: ;
    ITR(0x519C8U, 16);
    { /* 0519C8 0519c8 movea.l src=EA(d16 r=0 d=4 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x4U));
    }
L_0519CC: ;
    ITR(0x519CCU, 16);
    { /* 0519CC 0519cc movea.l src=EA(d16 r=0 d=24 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 = rd32((a0 + 0x18U));
    }
L_0519D0: ;
    ITR(0x519D0U, 12);
    { /* 0519D0 0519d0 tst.b src=None dst=EA(d16 r=0 d=22 v=0) */
        { uint32_t t = rd8((a0 + 0x16U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519D4: ;
    ITR(0x519D4U, 8);
    { /* 0519D4 0519d4 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_0519D6: ;
    ITR(0x519D6U, 13);
    { /* 0519D6 0519d6 scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=0 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519DA: ;
    ITR(0x519DAU, 16);
    { /* 0519DA 0519da move.l src=EA(d16 r=5 d=4 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x4U));
        d0 = t1;
        FLAGS_LOGIC(t1, 0xFFFFFFFFU, 0x80000000U);
        }
    }
L_0519DE: ;
    ITR(0x519DEU, 8);
    { /* 0519DE 0519de bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051A06;
    }
L_0519E0: ;
    ITR(0x519E0U, 16);
    { /* 0519E0 0519e0 movea.l src=EA(d16 r=5 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a5 + 0x0U));
    }
L_0519E4: ;
    ITR(0x519E4U, 6);
    { /* 0519E4 0519e4 adda.l src=EA(dn r=0 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += d0;
    }
L_0519E6: ;
    ITR(0x519E6U, 10);
    { /* 0519E6 0519e6 lsr.l src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, 1, 32);
        d0 = t1;
        }
    }
L_0519E8: ;
    ITR(0x519E8U, 12);
    { /* 0519E8 0519e8 move.w src=EA(d16 r=5 d=8 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        SETW(d1, t1);
        }
    }
L_0519EC: ;
    ITR(0x519ECU, 4);
    { /* 0519EC 0519ec sub.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_0519EE: ;
    ITR(0x519EEU, 20);
    { /* 0519EE 0519ee move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = a2;
        wr32((a4 + 0x0U), t1);
        }
    }
L_0519F2: ;
    ITR(0x519F2U, 12);
    { /* 0519F2 0519f2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x4U), t1);
        }
    }
L_0519F6: ;
    ITR(0x519F6U, 12);
    { /* 0519F6 0519f6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519FA: ;
    ITR(0x519FAU, 8);
    { /* 0519FA 0519fa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A04;
    }
L_0519FC: ;
    ITR(0x519FCU, 20);
    { /* 0519FC 0519fc move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = a2;
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A00: ;
    ITR(0x51A00U, 12);
    { /* 051A00 051a00 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A04: ;
    ITR(0x51A04U, 10);
    { /* 051A04 051a04 bra src=None dst=None cc=0 */
        goto L_051A24;
    }
L_051A06: ;
    ITR(0x51A06U, 32);
    { /* 051A06 051a06 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A0C: ;
    ITR(0x51A0CU, 16);
    { /* 051A0C 051a0c move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A12: ;
    ITR(0x51A12U, 12);
    { /* 051A12 051a12 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A16: ;
    ITR(0x51A16U, 8);
    { /* 051A16 051a16 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_051A18: ;
    ITR(0x51A18U, 32);
    { /* 051A18 051a18 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A1E: ;
    ITR(0x51A1EU, 16);
    { /* 051A1E 051a1e move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A24: ;
    ITR(0x51A24U, 16);
    { /* 051A24 051a24 subq.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        wr16(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A28: ;
    ITR(0x51A28U, 8);
    { /* 051A28 051a28 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4E;
    }
L_051A2A: ;
    ITR(0x51A2AU, 16);
    { /* 051A2A 051a2a cmpi.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A30: ;
    ITR(0x51A30U, 8);
    { /* 051A30 051a30 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AF4;
    }
L_051A34: ;
    ITR(0x51A34U, 12);
    { /* 051A34 051a34 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A38: ;
    ITR(0x51A38U, 8);
    { /* 051A38 051a38 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A4A;
    }
L_051A3A: ;
    ITR(0x51A3AU, 12);
    { /* 051A3A 051a3a cmpi.b src=EA(imm r=0 d=0 v=83) dst=EA(ind r=1 d=0 v=0) */
        { uint32_t t1 = 0x83U;
        uint32_t t4 = a1;
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051A3E: ;
    ITR(0x51A3EU, 8);
    { /* 051A3E 051a3e bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4A;
    }
L_051A40: ;
    ITR(0x51A40U, 4);
    { /* 051A40 051a40 clr.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, 0);
    }
L_051A42: ;
    ITR(0x51A42U, 8);
    { /* 051A42 051a42 bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051A44: ;
    ITR(0x51A44U, 16);
    { /* 051A44 051a44 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051A4A: ;
    ITR(0x51A4AU, 10);
    { /* 051A4A 051a4a bra src=None dst=None cc=0 */
        goto L_051AE6;
    }
L_051A4E: ;
    ITR(0x51A4EU, 16);
    { /* 051A4E 051a4e clr.b src=None dst=EA(d16 r=0 d=0 v=0) */
        wr8((a0 + 0x0U), 0);
    }
L_051A52: ;
    ITR(0x51A52U, 4);
    { /* 051A52 051a52 moveq.l src=EA(imm r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        d0 = 0x0U;
    }
L_051A54: ;
    ITR(0x51A54U, 8);
    { /* 051A54 051a54 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d0, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051A56: ;
    ITR(0x51A56U, 8);
    { /* 051A56 051a56 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BE6;
    }
L_051A5A: ;
    ITR(0x51A5AU, 12);
    { /* 051A5A 051a5a move.b src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=2 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        wr8((a0 + 0x2U), t1);
        }
    }
L_051A5E: ;
    ITR(0x51A5EU, 12);
    { /* 051A5E 051a5e add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A62: ;
    ITR(0x51A62U, 12);
    { /* 051A62 051a62 add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A66: ;
    ITR(0x51A66U, 16);
    { /* 051A66 051a66 movea.l src=EA(d16 r=0 d=34 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x22U));
    }
L_051A6A: ;
    ITR(0x51A6AU, 8);
    { /* 051A6A 051a6a move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051A6C: ;
    ITR(0x51A6CU, 20);
    { /* 051A6C 051a6c move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051A70: ;
    ITR(0x51A70U, 20);
    { /* 051A70 051a70 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051A76: ;
    ITR(0x51A76U, 4);
    { /* 051A76 051a76 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051A78: ;
    ITR(0x51A78U, 32);
    { /* 051A78 051a78 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A7E: ;
    ITR(0x51A7EU, 20);
    { /* 051A7E 051a7e move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A84: ;
    ITR(0x51A84U, 12);
    { /* 051A84 051a84 move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051A88: ;
    ITR(0x51A88U, 70);
    { /* 051A88 051a88 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051A8A: ;
    ITR(0x51A8AU, 18);
    { /* 051A8A 051a8a lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051A8C: ;
    ITR(0x51A8CU, 12);
    { /* 051A8C 051a8c move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051A90: ;
    ITR(0x51A90U, 12);
    { /* 051A90 051a90 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A94: ;
    ITR(0x51A94U, 8);
    { /* 051A94 051a94 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AA6;
    }
L_051A96: ;
    ITR(0x51A96U, 32);
    { /* 051A96 051a96 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A9C: ;
    ITR(0x51A9CU, 20);
    { /* 051A9C 051a9c move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051AA2: ;
    ITR(0x51AA2U, 12);
    { /* 051AA2 051aa2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051AA6: ;
    ITR(0x51AA6U, 8);
    { /* 051AA6 051aa6 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AAA: ;
    ITR(0x51AAAU, 8);
    { /* 051AAA 051aaa lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051AAE: ;
    ITR(0x51AAEU, 12);
    { /* 051AAE 051aae move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051AB2: ;
    ITR(0x51AB2U, 4);
    { /* 051AB2 051ab2 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051AB4: ;
    ITR(0x51AB4U, 4);
    { /* 051AB4 051ab4 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AB6: ;
    ITR(0x51AB6U, 14);
    { /* 051AB6 051ab6 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051ABA: ;
    ITR(0x51ABAU, 70);
    { /* 051ABA 051aba mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051ABC: ;
    ITR(0x51ABCU, 16);
    { /* 051ABC 051abc lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051ABE: ;
    ITR(0x51ABEU, 12);
    { /* 051ABE 051abe move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051AC2: ;
    ITR(0x51AC2U, 12);
    { /* 051AC2 051ac2 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051AC6: ;
    ITR(0x51AC6U, 8);
    { /* 051AC6 051ac6 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051ACC;
    }
L_051AC8: ;
    ITR(0x51AC8U, 12);
    { /* 051AC8 051ac8 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051ACC: ;
    ITR(0x51ACCU, 13);
    { /* 051ACC 051acc scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=1 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051AD0: ;
    ITR(0x51AD0U, 20);
    { /* 051AD0 051ad0 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=4 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x4U), t1);
        }
    }
L_051AD4: ;
    ITR(0x51AD4U, 20);
    { /* 051AD4 051ad4 move.w src=EA(d16 r=0 d=28 v=0) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = rd16((a0 + 0x1CU));
        wr16((a0 + 0x1EU), t1);
        }
    }
L_051ADA: ;
    ITR(0x51ADAU, 8);
    { /* 051ADA 051ada move.w src=EA(imm r=0 d=0 v=8200) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x8200U;
        SETW(d1, t1);
        }
    }
L_051ADE: ;
    ITR(0x51ADEU, 8);
    { /* 051ADE 051ade bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051AE0: ;
    ITR(0x51AE0U, 16);
    { /* 051AE0 051ae0 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051AE6: ;
    ITR(0x51AE6U, 4);
    { /* 051AE6 051ae6 addq.w src=EA(imm r=0 d=0 v=1) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d7, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFFFU, 0x8000U, 1);
        }
    }
L_051AE8: ;
    ITR(0x51AE8U, 8);
    { /* 051AE8 051ae8 cmp.w src=EA(imm r=0 d=0 v=4) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x4U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051AEC: ;
    ITR(0x51AECU, 10);
    { /* 051AEC 051aec bcc src=None dst=None cc=6 */
        if (COND_6) { BUDGET_CHECK(0x519A0U); goto L_0519A0; }
    }
L_051AF0: ;
    ITR(0x51AF0U, 10);
    { /* 051AF0 051af0 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51912U); goto L_051912; }
    }
L_051AF4: ;
    ITR(0x51AF4U, 12);
    { /* 051AF4 051af4 move.b src=EA(d16 r=0 d=2 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2U));
        SETB(d0, t1);
        }
    }
L_051AF8: ;
    ITR(0x51AF8U, 12);
    { /* 051AF8 051af8 add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051AFC: ;
    ITR(0x51AFCU, 12);
    { /* 051AFC 051afc add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B00: ;
    ITR(0x51B00U, 16);
    { /* 051B00 051b00 movea.l src=EA(d16 r=0 d=16 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x10U));
    }
L_051B04: ;
    ITR(0x51B04U, 8);
    { /* 051B04 051b04 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051B06: ;
    ITR(0x51B06U, 12);
    { /* 051B06 051b06 bclr.l src=EA(imm r=0 d=0 v=7) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (0x7U) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 & ~(1u << t1);
        }
    }
L_051B0A: ;
    ITR(0x51B0AU, 8);
    { /* 051B0A 051b0a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B10;
    }
L_051B0C: ;
    ITR(0x51B0CU, 16);
    { /* 051B0C 051b0c movea.l src=EA(d16 r=0 d=12 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0xCU));
    }
L_051B10: ;
    ITR(0x51B10U, 20);
    { /* 051B10 051b10 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051B14: ;
    ITR(0x51B14U, 4);
    { /* 051B14 051b14 add.b src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B16: ;
    ITR(0x51B16U, 8);
    { /* 051B16 051b16 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B1A: ;
    ITR(0x51B1AU, 8);
    { /* 051B1A 051b1a lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051B1E: ;
    ITR(0x51B1EU, 12);
    { /* 051B1E 051b1e move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051B22: ;
    ITR(0x51B22U, 4);
    { /* 051B22 051b22 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051B24: ;
    ITR(0x51B24U, 4);
    { /* 051B24 051b24 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B26: ;
    ITR(0x51B26U, 14);
    { /* 051B26 051b26 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051B2A: ;
    ITR(0x51B2AU, 70);
    { /* 051B2A 051b2a mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051B2C: ;
    ITR(0x51B2CU, 16);
    { /* 051B2C 051b2c lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051B2E: ;
    ITR(0x51B2EU, 16);
    { /* 051B2E 051b2e btst.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=0 v=0) */
        { uint32_t t1 = (0x1U) & 7;
        uint32_t t3 = (a0 + 0x0U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B34: ;
    ITR(0x51B34U, 8);
    { /* 051B34 051b34 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B50;
    }
L_051B36: ;
    ITR(0x51B36U, 12);
    { /* 051B36 051b36 tst.b src=None dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t = rd8((a0 + 0x15U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B3A: ;
    ITR(0x51B3AU, 8);
    { /* 051B3A 051b3a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B42;
    }
L_051B3C: ;
    ITR(0x51B3CU, 16);
    { /* 051B3C 051b3c subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x15U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        }
    }
L_051B40: ;
    ITR(0x51B40U, 10);
    { /* 051B40 051b40 bra src=None dst=None cc=0 */
        goto L_051B50;
    }
L_051B42: ;
    ITR(0x51B42U, 12);
    { /* 051B42 051b42 move.b src=EA(d16 r=0 d=20 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x14U));
        SETB(d1, t1);
        }
    }
L_051B46: ;
    ITR(0x51B46U, 4);
    { /* 051B46 051b46 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B48: ;
    ITR(0x51B48U, 16);
    { /* 051B48 051b48 add.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=32 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t4 = (a0 + 0x20U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        wr16(t4, t3);
        }
    }
L_051B4C: ;
    ITR(0x51B4CU, 12);
    { /* 051B4C 051b4c sub.w src=EA(d16 r=0 d=32 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a0 + 0x20U));
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B50: ;
    ITR(0x51B50U, 12);
    { /* 051B50 051b50 tst.b src=None dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t = rd8((a0 + 0x1U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B54: ;
    ITR(0x51B54U, 8);
    { /* 051B54 051b54 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA2;
    }
L_051B56: ;
    ITR(0x51B56U, 8);
    { /* 051B56 051b56 bcc src=None dst=None cc=10 */
        if (COND_10) goto L_051B72;
    }
L_051B58: ;
    ITR(0x51B58U, 12);
    { /* 051B58 051b58 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B5C: ;
    ITR(0x51B5CU, 12);
    { /* 051B5C 051b5c add.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B60: ;
    ITR(0x51B60U, 12);
    { /* 051B60 051b60 move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        }
    }
L_051B64: ;
    ITR(0x51B64U, 12);
    { /* 051B64 051b64 cmp.b src=EA(d16 r=0 d=46 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2EU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051B68: ;
    ITR(0x51B68U, 8);
    { /* 051B68 051b68 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B6A: ;
    ITR(0x51B6AU, 20);
    { /* 051B6A 051b6a bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B70: ;
    ITR(0x51B70U, 10);
    { /* 051B70 051b70 bra src=None dst=None cc=0 */
        goto L_051B86;
    }
L_051B72: ;
    ITR(0x51B72U, 12);
    { /* 051B72 051b72 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B76: ;
    ITR(0x51B76U, 12);
    { /* 051B76 051b76 sub.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B7A: ;
    ITR(0x51B7AU, 12);
    { /* 051B7A 051b7a move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051B7E: ;
    ITR(0x51B7EU, 8);
    { /* 051B7E 051b7e bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B80: ;
    ITR(0x51B80U, 20);
    { /* 051B80 051b80 bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B86: ;
    ITR(0x51B86U, 12);
    { /* 051B86 051b86 tst.b src=None dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t = rd8((a0 + 0x2DU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B8A: ;
    ITR(0x51B8AU, 8);
    { /* 051B8A 051b8a bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B92;
    }
L_051B8C: ;
    ITR(0x51B8CU, 20);
    { /* 051B8C 051b8c bchg.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B92: ;
    ITR(0x51B92U, 4);
    { /* 051B92 051b92 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B94: ;
    ITR(0x51B94U, 16);
    { /* 051B94 051b94 btst.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B9A: ;
    ITR(0x51B9AU, 8);
    { /* 051B9A 051b9a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA0;
    }
L_051B9C: ;
    ITR(0x51B9CU, 4);
    { /* 051B9C 051b9c add.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B9E: ;
    ITR(0x51B9EU, 10);
    { /* 051B9E 051b9e bra src=None dst=None cc=0 */
        goto L_051BA2;
    }
L_051BA0: ;
    ITR(0x51BA0U, 4);
    { /* 051BA0 051ba0 sub.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051BA2: ;
    ITR(0x51BA2U, 12);
    { /* 051BA2 051ba2 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051BA6: ;
    ITR(0x51BA6U, 12);
    { /* 051BA6 051ba6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BAA: ;
    ITR(0x51BAAU, 8);
    { /* 051BAA 051baa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BB0;
    }
L_051BAC: ;
    ITR(0x51BACU, 12);
    { /* 051BAC 051bac move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051BB0: ;
    ITR(0x51BB0U, 16);
    { /* 051BB0 051bb0 subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x2BU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BB4: ;
    ITR(0x51BB4U, 8);
    { /* 051BB4 051bb4 bcc src=None dst=None cc=4 */
        if (COND_4) goto L_051BE2;
    }
L_051BB6: ;
    ITR(0x51BB6U, 20);
    { /* 051BB6 051bb6 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051BBC: ;
    ITR(0x51BBCU, 16);
    { /* 051BBC 051bbc movea.l src=EA(d16 r=0 d=38 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x26U));
    }
L_051BC0: ;
    ITR(0x51BC0U, 8);
    { /* 051BC0 051bc0 move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051BC2: ;
    ITR(0x51BC2U, 8);
    { /* 051BC2 051bc2 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BC8;
    }
L_051BC4: ;
    ITR(0x51BC4U, 20);
    { /* 051BC4 051bc4 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051BC8: ;
    ITR(0x51BC8U, 8);
    { /* 051BC8 051bc8 andi.w src=EA(imm r=0 d=0 v=7f) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x7FU;
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_051BCC: ;
    ITR(0x51BCCU, 12);
    { /* 051BCC 051bcc move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051BD0: ;
    ITR(0x51BD0U, 70);
    { /* 051BD0 051bd0 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051BD2: ;
    ITR(0x51BD2U, 18);
    { /* 051BD2 051bd2 lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051BD4: ;
    ITR(0x51BD4U, 12);
    { /* 051BD4 051bd4 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051BD8: ;
    ITR(0x51BD8U, 12);
    { /* 051BD8 051bd8 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BDC: ;
    ITR(0x51BDCU, 8);
    { /* 051BDC 051bdc bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BE2;
    }
L_051BDE: ;
    ITR(0x51BDEU, 12);
    { /* 051BDE 051bde move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051BE2: ;
    ITR(0x51BE2U, 10);
    { /* 051BE2 051be2 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51AE6U); goto L_051AE6; }
    }
L_051BE6: ;
    ITR(0x51BE6U, 8);
    { /* 051BE6 051be6 cmp.b src=EA(imm r=0 d=0 v=e0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xE0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BEA: ;
    ITR(0x51BEAU, 8);
    { /* 051BEA 051bea bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051BFC;
    }
L_051BEC: ;
    ITR(0x51BECU, 8);
    { /* 051BEC 051bec subi.b src=EA(imm r=0 d=0 v=df) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xDFU;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051BF0: ;
    ITR(0x51BF0U, 78);
    { /* 051BF0 051bf0 mulu.w src=EA(pcd r=0 d=0 v=51d82) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * rd16(0x51D82U);
        d0 = t1;
        }
    }
L_051BF4: ;
    ITR(0x51BF4U, 12);
    { /* 051BF4 051bf4 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=28 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a0 + 0x1CU), t1);
        }
    }
L_051BF8: ;
    ITR(0x51BF8U, 10);
    { /* 051BF8 051bf8 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051BFC: ;
    ITR(0x51BFCU, 8);
    { /* 051BFC 051bfc cmp.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C00: ;
    ITR(0x51C00U, 8);
    { /* 051C00 051c00 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C18;
    }
L_051C02: ;
    ITR(0x51C02U, 8);
    { /* 051C02 051c02 subi.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C06: ;
    ITR(0x51C06U, 8);
    { /* 051C06 051c06 lea.l src=EA(pcd r=0 d=0 v=51f3c) dst=EA(an r=5 d=0 v=0) */
        a5 = 0x51F3CU;
    }
L_051C0A: ;
    ITR(0x51C0AU, 74);
    { /* 051C0A 051c0a mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_051C0E: ;
    ITR(0x51C0EU, 8);
    { /* 051C0E 051c0e adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 += SX16((d0 & 0xFFFF));
    }
L_051C10: ;
    ITR(0x51C10U, 20);
    { /* 051C10 051c10 move.l src=EA(an r=5 d=0 v=0) dst=EA(d16 r=0 d=24 v=0) */
        { uint32_t t1 = a5;
        wr32((a0 + 0x18U), t1);
        }
    }
L_051C14: ;
    ITR(0x51C14U, 10);
    { /* 051C14 051c14 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C18: ;
    ITR(0x51C18U, 8);
    { /* 051C18 051c18 cmp.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C1C: ;
    ITR(0x51C1CU, 8);
    { /* 051C1C 051c1c bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C3C;
    }
L_051C1E: ;
    ITR(0x51C1EU, 8);
    { /* 051C1E 051c1e subi.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C22: ;
    ITR(0x51C22U, 4);
    { /* 051C22 051c22 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C24: ;
    ITR(0x51C24U, 8);
    { /* 051C24 051c24 lea.l src=EA(pcd r=0 d=0 v=52f1e) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x52F1EU;
    }
L_051C28: ;
    ITR(0x51C28U, 14);
    { /* 051C28 051c28 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C2C: ;
    ITR(0x51C2CU, 6);
    { /* 051C2C 051c2c adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C2E: ;
    ITR(0x51C2EU, 20);
    { /* 051C2E 051c2e move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=34 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x22U), t1);
        }
    }
L_051C32: ;
    ITR(0x51C32U, 20);
    { /* 051C32 051c32 move.b src=EA(d16 r=2 d=-1 v=0) dst=EA(d16 r=0 d=42 v=0) */
        { uint32_t t1 = rd8((a2 + 0xFFFFFFFFU));
        wr8((a0 + 0x2AU), t1);
        }
    }
L_051C38: ;
    ITR(0x51C38U, 10);
    { /* 051C38 051c38 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C3C: ;
    ITR(0x51C3CU, 8);
    { /* 051C3C 051c3c cmp.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C40: ;
    ITR(0x51C40U, 8);
    { /* 051C40 051c40 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C5E;
    }
L_051C42: ;
    ITR(0x51C42U, 8);
    { /* 051C42 051c42 subi.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C46: ;
    ITR(0x51C46U, 4);
    { /* 051C46 051c46 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C48: ;
    ITR(0x51C48U, 8);
    { /* 051C48 051c48 lea.l src=EA(pcd r=0 d=0 v=51eea) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51EEAU;
    }
L_051C4C: ;
    ITR(0x51C4CU, 14);
    { /* 051C4C 051c4c movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C50: ;
    ITR(0x51C50U, 6);
    { /* 051C50 051c50 adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C52: ;
    ITR(0x51C52U, 20);
    { /* 051C52 051c52 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=12 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0xCU), t1);
        }
    }
L_051C56: ;
    ITR(0x51C56U, 20);
    { /* 051C56 051c56 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051C5A: ;
    ITR(0x51C5AU, 10);
    { /* 051C5A 051c5a bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C5E: ;
    ITR(0x51C5EU, 4);
    { /* 051C5E 051c5e add.b src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_051C60: ;
    ITR(0x51C60U, 8);
    { /* 051C60 051c60 lea.l src=EA(pcd r=0 d=0 v=51d6a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51D6AU;
    }
L_051C64: ;
    ITR(0x51C64U, 14);
    { /* 051C64 051c64 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C68: ;
    ITR(0x51C68U, 14);
    { /* 051C68 051c68 jmp src=EA(idx r=3 d=0 v=0) dst=None */
        { call_dynamic((a3 + 0x0U + ((uint32_t)(int32_t)(int16_t)a2))); return; }
    }
L_051D36: ;
    ITR(0x51D36U, 16);
    { /* 051D36 051d36 move.b src=EA(post r=1 d=0 v=0) dst=EA(d16 r=0 d=3 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        wr8((a0 + 0x3U), t1);
        }
    }
L_051D3A: ;
    ITR(0x51D3AU, 10);
    { /* 051D3A 051d3a bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_052A44: ;
    ITR(0x52A44U, 8);
    { /* 052A44 052a44 lea.l src=EA(pcd r=0 d=0 v=52b9c) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52B9CU;
    }
L_052A48: ;
    ITR(0x52A48U, 12);
    { /* 052A48 052a48 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A4C: ;
    ITR(0x52A4CU, 8);
    { /* 052A4C 052a4c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A5C;
    }
L_052A4E: ;
    ITR(0x52A4EU, 12);
    { /* 052A4E 052a4e lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF000U;
    }
L_052A54: ;
    ITR(0x52A54U, 4);
    { /* 052A54 052a54 moveq.l src=EA(imm r=0 d=0 v=1) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x1U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A56: ;
    ITR(0x52A56U, 8);
    { /* 052A56 052a56 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_052A5A: ;
    ITR(0x52A5AU, 18);
    { /* 052A5A 052a5a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A5CU);
    }
L_052A5C: ;
    ITR(0x52A5CU, 8);
    { /* 052A5C 052a5c lea.l src=EA(pcd r=0 d=0 v=52bc0) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BC0U;
    }
L_052A60: ;
    ITR(0x52A60U, 12);
    { /* 052A60 052a60 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A64: ;
    ITR(0x52A64U, 8);
    { /* 052A64 052a64 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A74;
    }
L_052A66: ;
    ITR(0x52A66U, 12);
    { /* 052A66 052a66 lea.l src=EA(absl r=0 d=0 v=dff010) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF010U;
    }
L_052A6C: ;
    ITR(0x52A6CU, 4);
    { /* 052A6C 052a6c moveq.l src=EA(imm r=0 d=0 v=2) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x2U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A6E: ;
    ITR(0x52A6EU, 8);
    { /* 052A6E 052a6e lea.l src=EA(pcd r=0 d=0 v=52c3a) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C3AU;
    }
L_052A72: ;
    ITR(0x52A72U, 18);
    { /* 052A72 052a72 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A74U);
    }
L_052A74: ;
    ITR(0x52A74U, 8);
    { /* 052A74 052a74 lea.l src=EA(pcd r=0 d=0 v=52be4) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BE4U;
    }
L_052A78: ;
    ITR(0x52A78U, 12);
    { /* 052A78 052a78 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A7C: ;
    ITR(0x52A7CU, 8);
    { /* 052A7C 052a7c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A8C;
    }
L_052A7E: ;
    ITR(0x52A7EU, 12);
    { /* 052A7E 052a7e lea.l src=EA(absl r=0 d=0 v=dff020) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF020U;
    }
L_052A84: ;
    ITR(0x52A84U, 4);
    { /* 052A84 052a84 moveq.l src=EA(imm r=0 d=0 v=4) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x4U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A86: ;
    ITR(0x52A86U, 8);
    { /* 052A86 052a86 lea.l src=EA(pcd r=0 d=0 v=52c46) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C46U;
    }
L_052A8A: ;
    ITR(0x52A8AU, 18);
    { /* 052A8A 052a8a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A8CU);
    }
L_052A8C: ;
    ITR(0x52A8CU, 8);
    { /* 052A8C 052a8c lea.l src=EA(pcd r=0 d=0 v=52c08) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52C08U;
    }
L_052A90: ;
    ITR(0x52A90U, 12);
    { /* 052A90 052a90 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A94: ;
    ITR(0x52A94U, 8);
    { /* 052A94 052a94 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052AA4;
    }
L_052A96: ;
    ITR(0x52A96U, 12);
    { /* 052A96 052a96 lea.l src=EA(absl r=0 d=0 v=dff030) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF030U;
    }
L_052A9C: ;
    ITR(0x52A9CU, 4);
    { /* 052A9C 052a9c moveq.l src=EA(imm r=0 d=0 v=8) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x8U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A9E: ;
    ITR(0x52A9EU, 8);
    { /* 052A9E 052a9e lea.l src=EA(pcd r=0 d=0 v=52c52) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C52U;
    }
L_052AA2: ;
    ITR(0x52AA2U, 18);
    { /* 052AA2 052aa2 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52AA4U);
    }
L_052AA4: ;
    ITR(0x52AA4U, 16);
    { /* 052AA4 052aa4 rts src=None dst=None */
        RTS();
    }
}

void dwam_051D3E(void)
{
    FN_ENTER(0x51D3EU);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51912U: goto L_051912;
        case 0x519A0U: goto L_0519A0;
        case 0x519A4U: goto L_0519A4;
        case 0x519A6U: goto L_0519A6;
        case 0x519AAU: goto L_0519AA;
        case 0x519ACU: goto L_0519AC;
        case 0x519B0U: goto L_0519B0;
        case 0x519B6U: goto L_0519B6;
        case 0x519BAU: goto L_0519BA;
        case 0x519BCU: goto L_0519BC;
        case 0x519C0U: goto L_0519C0;
        case 0x519C2U: goto L_0519C2;
        case 0x519C4U: goto L_0519C4;
        case 0x519C6U: goto L_0519C6;
        case 0x519C8U: goto L_0519C8;
        case 0x519CCU: goto L_0519CC;
        case 0x519D0U: goto L_0519D0;
        case 0x519D4U: goto L_0519D4;
        case 0x519D6U: goto L_0519D6;
        case 0x519DAU: goto L_0519DA;
        case 0x519DEU: goto L_0519DE;
        case 0x519E0U: goto L_0519E0;
        case 0x519E4U: goto L_0519E4;
        case 0x519E6U: goto L_0519E6;
        case 0x519E8U: goto L_0519E8;
        case 0x519ECU: goto L_0519EC;
        case 0x519EEU: goto L_0519EE;
        case 0x519F2U: goto L_0519F2;
        case 0x519F6U: goto L_0519F6;
        case 0x519FAU: goto L_0519FA;
        case 0x519FCU: goto L_0519FC;
        case 0x51A00U: goto L_051A00;
        case 0x51A04U: goto L_051A04;
        case 0x51A06U: goto L_051A06;
        case 0x51A0CU: goto L_051A0C;
        case 0x51A12U: goto L_051A12;
        case 0x51A16U: goto L_051A16;
        case 0x51A18U: goto L_051A18;
        case 0x51A1EU: goto L_051A1E;
        case 0x51A24U: goto L_051A24;
        case 0x51A28U: goto L_051A28;
        case 0x51A2AU: goto L_051A2A;
        case 0x51A30U: goto L_051A30;
        case 0x51A34U: goto L_051A34;
        case 0x51A38U: goto L_051A38;
        case 0x51A3AU: goto L_051A3A;
        case 0x51A3EU: goto L_051A3E;
        case 0x51A40U: goto L_051A40;
        case 0x51A42U: goto L_051A42;
        case 0x51A44U: goto L_051A44;
        case 0x51A4AU: goto L_051A4A;
        case 0x51A4EU: goto L_051A4E;
        case 0x51A52U: goto L_051A52;
        case 0x51A54U: goto L_051A54;
        case 0x51A56U: goto L_051A56;
        case 0x51A5AU: goto L_051A5A;
        case 0x51A5EU: goto L_051A5E;
        case 0x51A62U: goto L_051A62;
        case 0x51A66U: goto L_051A66;
        case 0x51A6AU: goto L_051A6A;
        case 0x51A6CU: goto L_051A6C;
        case 0x51A70U: goto L_051A70;
        case 0x51A76U: goto L_051A76;
        case 0x51A78U: goto L_051A78;
        case 0x51A7EU: goto L_051A7E;
        case 0x51A84U: goto L_051A84;
        case 0x51A88U: goto L_051A88;
        case 0x51A8AU: goto L_051A8A;
        case 0x51A8CU: goto L_051A8C;
        case 0x51A90U: goto L_051A90;
        case 0x51A94U: goto L_051A94;
        case 0x51A96U: goto L_051A96;
        case 0x51A9CU: goto L_051A9C;
        case 0x51AA2U: goto L_051AA2;
        case 0x51AA6U: goto L_051AA6;
        case 0x51AAAU: goto L_051AAA;
        case 0x51AAEU: goto L_051AAE;
        case 0x51AB2U: goto L_051AB2;
        case 0x51AB4U: goto L_051AB4;
        case 0x51AB6U: goto L_051AB6;
        case 0x51ABAU: goto L_051ABA;
        case 0x51ABCU: goto L_051ABC;
        case 0x51ABEU: goto L_051ABE;
        case 0x51AC2U: goto L_051AC2;
        case 0x51AC6U: goto L_051AC6;
        case 0x51AC8U: goto L_051AC8;
        case 0x51ACCU: goto L_051ACC;
        case 0x51AD0U: goto L_051AD0;
        case 0x51AD4U: goto L_051AD4;
        case 0x51ADAU: goto L_051ADA;
        case 0x51ADEU: goto L_051ADE;
        case 0x51AE0U: goto L_051AE0;
        case 0x51AE6U: goto L_051AE6;
        case 0x51AE8U: goto L_051AE8;
        case 0x51AECU: goto L_051AEC;
        case 0x51AF0U: goto L_051AF0;
        case 0x51AF4U: goto L_051AF4;
        case 0x51AF8U: goto L_051AF8;
        case 0x51AFCU: goto L_051AFC;
        case 0x51B00U: goto L_051B00;
        case 0x51B04U: goto L_051B04;
        case 0x51B06U: goto L_051B06;
        case 0x51B0AU: goto L_051B0A;
        case 0x51B0CU: goto L_051B0C;
        case 0x51B10U: goto L_051B10;
        case 0x51B14U: goto L_051B14;
        case 0x51B16U: goto L_051B16;
        case 0x51B1AU: goto L_051B1A;
        case 0x51B1EU: goto L_051B1E;
        case 0x51B22U: goto L_051B22;
        case 0x51B24U: goto L_051B24;
        case 0x51B26U: goto L_051B26;
        case 0x51B2AU: goto L_051B2A;
        case 0x51B2CU: goto L_051B2C;
        case 0x51B2EU: goto L_051B2E;
        case 0x51B34U: goto L_051B34;
        case 0x51B36U: goto L_051B36;
        case 0x51B3AU: goto L_051B3A;
        case 0x51B3CU: goto L_051B3C;
        case 0x51B40U: goto L_051B40;
        case 0x51B42U: goto L_051B42;
        case 0x51B46U: goto L_051B46;
        case 0x51B48U: goto L_051B48;
        case 0x51B4CU: goto L_051B4C;
        case 0x51B50U: goto L_051B50;
        case 0x51B54U: goto L_051B54;
        case 0x51B56U: goto L_051B56;
        case 0x51B58U: goto L_051B58;
        case 0x51B5CU: goto L_051B5C;
        case 0x51B60U: goto L_051B60;
        case 0x51B64U: goto L_051B64;
        case 0x51B68U: goto L_051B68;
        case 0x51B6AU: goto L_051B6A;
        case 0x51B70U: goto L_051B70;
        case 0x51B72U: goto L_051B72;
        case 0x51B76U: goto L_051B76;
        case 0x51B7AU: goto L_051B7A;
        case 0x51B7EU: goto L_051B7E;
        case 0x51B80U: goto L_051B80;
        case 0x51B86U: goto L_051B86;
        case 0x51B8AU: goto L_051B8A;
        case 0x51B8CU: goto L_051B8C;
        case 0x51B92U: goto L_051B92;
        case 0x51B94U: goto L_051B94;
        case 0x51B9AU: goto L_051B9A;
        case 0x51B9CU: goto L_051B9C;
        case 0x51B9EU: goto L_051B9E;
        case 0x51BA0U: goto L_051BA0;
        case 0x51BA2U: goto L_051BA2;
        case 0x51BA6U: goto L_051BA6;
        case 0x51BAAU: goto L_051BAA;
        case 0x51BACU: goto L_051BAC;
        case 0x51BB0U: goto L_051BB0;
        case 0x51BB4U: goto L_051BB4;
        case 0x51BB6U: goto L_051BB6;
        case 0x51BBCU: goto L_051BBC;
        case 0x51BC0U: goto L_051BC0;
        case 0x51BC2U: goto L_051BC2;
        case 0x51BC4U: goto L_051BC4;
        case 0x51BC8U: goto L_051BC8;
        case 0x51BCCU: goto L_051BCC;
        case 0x51BD0U: goto L_051BD0;
        case 0x51BD2U: goto L_051BD2;
        case 0x51BD4U: goto L_051BD4;
        case 0x51BD8U: goto L_051BD8;
        case 0x51BDCU: goto L_051BDC;
        case 0x51BDEU: goto L_051BDE;
        case 0x51BE2U: goto L_051BE2;
        case 0x51BE6U: goto L_051BE6;
        case 0x51BEAU: goto L_051BEA;
        case 0x51BECU: goto L_051BEC;
        case 0x51BF0U: goto L_051BF0;
        case 0x51BF4U: goto L_051BF4;
        case 0x51BF8U: goto L_051BF8;
        case 0x51BFCU: goto L_051BFC;
        case 0x51C00U: goto L_051C00;
        case 0x51C02U: goto L_051C02;
        case 0x51C06U: goto L_051C06;
        case 0x51C0AU: goto L_051C0A;
        case 0x51C0EU: goto L_051C0E;
        case 0x51C10U: goto L_051C10;
        case 0x51C14U: goto L_051C14;
        case 0x51C18U: goto L_051C18;
        case 0x51C1CU: goto L_051C1C;
        case 0x51C1EU: goto L_051C1E;
        case 0x51C22U: goto L_051C22;
        case 0x51C24U: goto L_051C24;
        case 0x51C28U: goto L_051C28;
        case 0x51C2CU: goto L_051C2C;
        case 0x51C2EU: goto L_051C2E;
        case 0x51C32U: goto L_051C32;
        case 0x51C38U: goto L_051C38;
        case 0x51C3CU: goto L_051C3C;
        case 0x51C40U: goto L_051C40;
        case 0x51C42U: goto L_051C42;
        case 0x51C46U: goto L_051C46;
        case 0x51C48U: goto L_051C48;
        case 0x51C4CU: goto L_051C4C;
        case 0x51C50U: goto L_051C50;
        case 0x51C52U: goto L_051C52;
        case 0x51C56U: goto L_051C56;
        case 0x51C5AU: goto L_051C5A;
        case 0x51C5EU: goto L_051C5E;
        case 0x51C60U: goto L_051C60;
        case 0x51C64U: goto L_051C64;
        case 0x51C68U: goto L_051C68;
        case 0x51D42U: goto L_051D42;
        case 0x51D46U: goto L_051D46;
        case 0x51D4CU: goto L_051D4C;
        case 0x52A44U: goto L_052A44;
        case 0x52A48U: goto L_052A48;
        case 0x52A4CU: goto L_052A4C;
        case 0x52A4EU: goto L_052A4E;
        case 0x52A54U: goto L_052A54;
        case 0x52A56U: goto L_052A56;
        case 0x52A5AU: goto L_052A5A;
        case 0x52A5CU: goto L_052A5C;
        case 0x52A60U: goto L_052A60;
        case 0x52A64U: goto L_052A64;
        case 0x52A66U: goto L_052A66;
        case 0x52A6CU: goto L_052A6C;
        case 0x52A6EU: goto L_052A6E;
        case 0x52A72U: goto L_052A72;
        case 0x52A74U: goto L_052A74;
        case 0x52A78U: goto L_052A78;
        case 0x52A7CU: goto L_052A7C;
        case 0x52A7EU: goto L_052A7E;
        case 0x52A84U: goto L_052A84;
        case 0x52A86U: goto L_052A86;
        case 0x52A8AU: goto L_052A8A;
        case 0x52A8CU: goto L_052A8C;
        case 0x52A90U: goto L_052A90;
        case 0x52A94U: goto L_052A94;
        case 0x52A96U: goto L_052A96;
        case 0x52A9CU: goto L_052A9C;
        case 0x52A9EU: goto L_052A9E;
        case 0x52AA2U: goto L_052AA2;
        case 0x52AA4U: goto L_052AA4;
        default: break; } }
    goto L_051D3E;
L_051912: ;
    ITR(0x51912U, 10);
    { /* 051912 051912 bra src=None dst=None cc=0 */
        goto L_052A44;
    }
L_0519A0: ;
    ITR(0x519A0U, 8);
    { /* 0519A0 0519a0 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_0519A4: ;
    ITR(0x519A4U, 4);
    { /* 0519A4 0519a4 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519A6: ;
    ITR(0x519A6U, 74);
    { /* 0519A6 0519a6 mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_0519AA: ;
    ITR(0x519AAU, 8);
    { /* 0519AA 0519aa adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=4 d=0 v=0) */
        a4 += SX16((d0 & 0xFFFF));
    }
L_0519AC: ;
    ITR(0x519ACU, 13);
    { /* 0519AC 0519ac scc.b src=None dst=EA(d16 r=4 d=10 v=0) cc=0 */
        { uint32_t t2 = (a4 + 0xAU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519B0: ;
    ITR(0x519B0U, 12);
    { /* 0519B0 0519b0 lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=6 d=0 v=0) */
        a6 = 0xDFF000U;
    }
L_0519B6: ;
    ITR(0x519B6U, 8);
    { /* 0519B6 0519b6 move.w src=EA(imm r=0 d=0 v=30) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x30U;
        SETW(d0, t1);
        }
    }
L_0519BA: ;
    ITR(0x519BAU, 70);
    { /* 0519BA 0519ba mulu.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d7 & 0xFFFF);
        d0 = t1;
        }
    }
L_0519BC: ;
    ITR(0x519BCU, 8);
    { /* 0519BC 0519bc lea.l src=EA(pcd r=0 d=0 v=51d9a) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x51D9AU;
    }
L_0519C0: ;
    ITR(0x519C0U, 8);
    { /* 0519C0 0519c0 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 += SX16((d0 & 0xFFFF));
    }
L_0519C2: ;
    ITR(0x519C2U, 4);
    { /* 0519C2 0519c2 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519C4: ;
    ITR(0x519C4U, 14);
    { /* 0519C4 0519c4 lsl.w src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 1, (d0 & 0xFFFF), 4, 16);
        SETW(d0, t1);
        }
    }
L_0519C6: ;
    ITR(0x519C6U, 8);
    { /* 0519C6 0519c6 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=6 d=0 v=0) */
        a6 += SX16((d0 & 0xFFFF));
    }
L_0519C8: ;
    ITR(0x519C8U, 16);
    { /* 0519C8 0519c8 movea.l src=EA(d16 r=0 d=4 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x4U));
    }
L_0519CC: ;
    ITR(0x519CCU, 16);
    { /* 0519CC 0519cc movea.l src=EA(d16 r=0 d=24 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 = rd32((a0 + 0x18U));
    }
L_0519D0: ;
    ITR(0x519D0U, 12);
    { /* 0519D0 0519d0 tst.b src=None dst=EA(d16 r=0 d=22 v=0) */
        { uint32_t t = rd8((a0 + 0x16U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519D4: ;
    ITR(0x519D4U, 8);
    { /* 0519D4 0519d4 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_0519D6: ;
    ITR(0x519D6U, 13);
    { /* 0519D6 0519d6 scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=0 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519DA: ;
    ITR(0x519DAU, 16);
    { /* 0519DA 0519da move.l src=EA(d16 r=5 d=4 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x4U));
        d0 = t1;
        FLAGS_LOGIC(t1, 0xFFFFFFFFU, 0x80000000U);
        }
    }
L_0519DE: ;
    ITR(0x519DEU, 8);
    { /* 0519DE 0519de bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051A06;
    }
L_0519E0: ;
    ITR(0x519E0U, 16);
    { /* 0519E0 0519e0 movea.l src=EA(d16 r=5 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a5 + 0x0U));
    }
L_0519E4: ;
    ITR(0x519E4U, 6);
    { /* 0519E4 0519e4 adda.l src=EA(dn r=0 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += d0;
    }
L_0519E6: ;
    ITR(0x519E6U, 10);
    { /* 0519E6 0519e6 lsr.l src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, 1, 32);
        d0 = t1;
        }
    }
L_0519E8: ;
    ITR(0x519E8U, 12);
    { /* 0519E8 0519e8 move.w src=EA(d16 r=5 d=8 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        SETW(d1, t1);
        }
    }
L_0519EC: ;
    ITR(0x519ECU, 4);
    { /* 0519EC 0519ec sub.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_0519EE: ;
    ITR(0x519EEU, 20);
    { /* 0519EE 0519ee move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = a2;
        wr32((a4 + 0x0U), t1);
        }
    }
L_0519F2: ;
    ITR(0x519F2U, 12);
    { /* 0519F2 0519f2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x4U), t1);
        }
    }
L_0519F6: ;
    ITR(0x519F6U, 12);
    { /* 0519F6 0519f6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519FA: ;
    ITR(0x519FAU, 8);
    { /* 0519FA 0519fa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A04;
    }
L_0519FC: ;
    ITR(0x519FCU, 20);
    { /* 0519FC 0519fc move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = a2;
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A00: ;
    ITR(0x51A00U, 12);
    { /* 051A00 051a00 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A04: ;
    ITR(0x51A04U, 10);
    { /* 051A04 051a04 bra src=None dst=None cc=0 */
        goto L_051A24;
    }
L_051A06: ;
    ITR(0x51A06U, 32);
    { /* 051A06 051a06 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A0C: ;
    ITR(0x51A0CU, 16);
    { /* 051A0C 051a0c move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A12: ;
    ITR(0x51A12U, 12);
    { /* 051A12 051a12 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A16: ;
    ITR(0x51A16U, 8);
    { /* 051A16 051a16 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_051A18: ;
    ITR(0x51A18U, 32);
    { /* 051A18 051a18 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A1E: ;
    ITR(0x51A1EU, 16);
    { /* 051A1E 051a1e move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A24: ;
    ITR(0x51A24U, 16);
    { /* 051A24 051a24 subq.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        wr16(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A28: ;
    ITR(0x51A28U, 8);
    { /* 051A28 051a28 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4E;
    }
L_051A2A: ;
    ITR(0x51A2AU, 16);
    { /* 051A2A 051a2a cmpi.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A30: ;
    ITR(0x51A30U, 8);
    { /* 051A30 051a30 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AF4;
    }
L_051A34: ;
    ITR(0x51A34U, 12);
    { /* 051A34 051a34 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A38: ;
    ITR(0x51A38U, 8);
    { /* 051A38 051a38 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A4A;
    }
L_051A3A: ;
    ITR(0x51A3AU, 12);
    { /* 051A3A 051a3a cmpi.b src=EA(imm r=0 d=0 v=83) dst=EA(ind r=1 d=0 v=0) */
        { uint32_t t1 = 0x83U;
        uint32_t t4 = a1;
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051A3E: ;
    ITR(0x51A3EU, 8);
    { /* 051A3E 051a3e bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4A;
    }
L_051A40: ;
    ITR(0x51A40U, 4);
    { /* 051A40 051a40 clr.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, 0);
    }
L_051A42: ;
    ITR(0x51A42U, 8);
    { /* 051A42 051a42 bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051A44: ;
    ITR(0x51A44U, 16);
    { /* 051A44 051a44 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051A4A: ;
    ITR(0x51A4AU, 10);
    { /* 051A4A 051a4a bra src=None dst=None cc=0 */
        goto L_051AE6;
    }
L_051A4E: ;
    ITR(0x51A4EU, 16);
    { /* 051A4E 051a4e clr.b src=None dst=EA(d16 r=0 d=0 v=0) */
        wr8((a0 + 0x0U), 0);
    }
L_051A52: ;
    ITR(0x51A52U, 4);
    { /* 051A52 051a52 moveq.l src=EA(imm r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        d0 = 0x0U;
    }
L_051A54: ;
    ITR(0x51A54U, 8);
    { /* 051A54 051a54 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d0, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051A56: ;
    ITR(0x51A56U, 8);
    { /* 051A56 051a56 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BE6;
    }
L_051A5A: ;
    ITR(0x51A5AU, 12);
    { /* 051A5A 051a5a move.b src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=2 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        wr8((a0 + 0x2U), t1);
        }
    }
L_051A5E: ;
    ITR(0x51A5EU, 12);
    { /* 051A5E 051a5e add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A62: ;
    ITR(0x51A62U, 12);
    { /* 051A62 051a62 add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A66: ;
    ITR(0x51A66U, 16);
    { /* 051A66 051a66 movea.l src=EA(d16 r=0 d=34 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x22U));
    }
L_051A6A: ;
    ITR(0x51A6AU, 8);
    { /* 051A6A 051a6a move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051A6C: ;
    ITR(0x51A6CU, 20);
    { /* 051A6C 051a6c move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051A70: ;
    ITR(0x51A70U, 20);
    { /* 051A70 051a70 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051A76: ;
    ITR(0x51A76U, 4);
    { /* 051A76 051a76 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051A78: ;
    ITR(0x51A78U, 32);
    { /* 051A78 051a78 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A7E: ;
    ITR(0x51A7EU, 20);
    { /* 051A7E 051a7e move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A84: ;
    ITR(0x51A84U, 12);
    { /* 051A84 051a84 move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051A88: ;
    ITR(0x51A88U, 70);
    { /* 051A88 051a88 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051A8A: ;
    ITR(0x51A8AU, 18);
    { /* 051A8A 051a8a lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051A8C: ;
    ITR(0x51A8CU, 12);
    { /* 051A8C 051a8c move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051A90: ;
    ITR(0x51A90U, 12);
    { /* 051A90 051a90 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A94: ;
    ITR(0x51A94U, 8);
    { /* 051A94 051a94 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AA6;
    }
L_051A96: ;
    ITR(0x51A96U, 32);
    { /* 051A96 051a96 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A9C: ;
    ITR(0x51A9CU, 20);
    { /* 051A9C 051a9c move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051AA2: ;
    ITR(0x51AA2U, 12);
    { /* 051AA2 051aa2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051AA6: ;
    ITR(0x51AA6U, 8);
    { /* 051AA6 051aa6 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AAA: ;
    ITR(0x51AAAU, 8);
    { /* 051AAA 051aaa lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051AAE: ;
    ITR(0x51AAEU, 12);
    { /* 051AAE 051aae move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051AB2: ;
    ITR(0x51AB2U, 4);
    { /* 051AB2 051ab2 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051AB4: ;
    ITR(0x51AB4U, 4);
    { /* 051AB4 051ab4 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AB6: ;
    ITR(0x51AB6U, 14);
    { /* 051AB6 051ab6 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051ABA: ;
    ITR(0x51ABAU, 70);
    { /* 051ABA 051aba mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051ABC: ;
    ITR(0x51ABCU, 16);
    { /* 051ABC 051abc lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051ABE: ;
    ITR(0x51ABEU, 12);
    { /* 051ABE 051abe move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051AC2: ;
    ITR(0x51AC2U, 12);
    { /* 051AC2 051ac2 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051AC6: ;
    ITR(0x51AC6U, 8);
    { /* 051AC6 051ac6 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051ACC;
    }
L_051AC8: ;
    ITR(0x51AC8U, 12);
    { /* 051AC8 051ac8 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051ACC: ;
    ITR(0x51ACCU, 13);
    { /* 051ACC 051acc scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=1 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051AD0: ;
    ITR(0x51AD0U, 20);
    { /* 051AD0 051ad0 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=4 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x4U), t1);
        }
    }
L_051AD4: ;
    ITR(0x51AD4U, 20);
    { /* 051AD4 051ad4 move.w src=EA(d16 r=0 d=28 v=0) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = rd16((a0 + 0x1CU));
        wr16((a0 + 0x1EU), t1);
        }
    }
L_051ADA: ;
    ITR(0x51ADAU, 8);
    { /* 051ADA 051ada move.w src=EA(imm r=0 d=0 v=8200) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x8200U;
        SETW(d1, t1);
        }
    }
L_051ADE: ;
    ITR(0x51ADEU, 8);
    { /* 051ADE 051ade bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051AE0: ;
    ITR(0x51AE0U, 16);
    { /* 051AE0 051ae0 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051AE6: ;
    ITR(0x51AE6U, 4);
    { /* 051AE6 051ae6 addq.w src=EA(imm r=0 d=0 v=1) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d7, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFFFU, 0x8000U, 1);
        }
    }
L_051AE8: ;
    ITR(0x51AE8U, 8);
    { /* 051AE8 051ae8 cmp.w src=EA(imm r=0 d=0 v=4) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x4U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051AEC: ;
    ITR(0x51AECU, 10);
    { /* 051AEC 051aec bcc src=None dst=None cc=6 */
        if (COND_6) { BUDGET_CHECK(0x519A0U); goto L_0519A0; }
    }
L_051AF0: ;
    ITR(0x51AF0U, 10);
    { /* 051AF0 051af0 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51912U); goto L_051912; }
    }
L_051AF4: ;
    ITR(0x51AF4U, 12);
    { /* 051AF4 051af4 move.b src=EA(d16 r=0 d=2 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2U));
        SETB(d0, t1);
        }
    }
L_051AF8: ;
    ITR(0x51AF8U, 12);
    { /* 051AF8 051af8 add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051AFC: ;
    ITR(0x51AFCU, 12);
    { /* 051AFC 051afc add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B00: ;
    ITR(0x51B00U, 16);
    { /* 051B00 051b00 movea.l src=EA(d16 r=0 d=16 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x10U));
    }
L_051B04: ;
    ITR(0x51B04U, 8);
    { /* 051B04 051b04 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051B06: ;
    ITR(0x51B06U, 12);
    { /* 051B06 051b06 bclr.l src=EA(imm r=0 d=0 v=7) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (0x7U) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 & ~(1u << t1);
        }
    }
L_051B0A: ;
    ITR(0x51B0AU, 8);
    { /* 051B0A 051b0a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B10;
    }
L_051B0C: ;
    ITR(0x51B0CU, 16);
    { /* 051B0C 051b0c movea.l src=EA(d16 r=0 d=12 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0xCU));
    }
L_051B10: ;
    ITR(0x51B10U, 20);
    { /* 051B10 051b10 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051B14: ;
    ITR(0x51B14U, 4);
    { /* 051B14 051b14 add.b src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B16: ;
    ITR(0x51B16U, 8);
    { /* 051B16 051b16 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B1A: ;
    ITR(0x51B1AU, 8);
    { /* 051B1A 051b1a lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051B1E: ;
    ITR(0x51B1EU, 12);
    { /* 051B1E 051b1e move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051B22: ;
    ITR(0x51B22U, 4);
    { /* 051B22 051b22 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051B24: ;
    ITR(0x51B24U, 4);
    { /* 051B24 051b24 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B26: ;
    ITR(0x51B26U, 14);
    { /* 051B26 051b26 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051B2A: ;
    ITR(0x51B2AU, 70);
    { /* 051B2A 051b2a mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051B2C: ;
    ITR(0x51B2CU, 16);
    { /* 051B2C 051b2c lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051B2E: ;
    ITR(0x51B2EU, 16);
    { /* 051B2E 051b2e btst.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=0 v=0) */
        { uint32_t t1 = (0x1U) & 7;
        uint32_t t3 = (a0 + 0x0U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B34: ;
    ITR(0x51B34U, 8);
    { /* 051B34 051b34 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B50;
    }
L_051B36: ;
    ITR(0x51B36U, 12);
    { /* 051B36 051b36 tst.b src=None dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t = rd8((a0 + 0x15U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B3A: ;
    ITR(0x51B3AU, 8);
    { /* 051B3A 051b3a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B42;
    }
L_051B3C: ;
    ITR(0x51B3CU, 16);
    { /* 051B3C 051b3c subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x15U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        }
    }
L_051B40: ;
    ITR(0x51B40U, 10);
    { /* 051B40 051b40 bra src=None dst=None cc=0 */
        goto L_051B50;
    }
L_051B42: ;
    ITR(0x51B42U, 12);
    { /* 051B42 051b42 move.b src=EA(d16 r=0 d=20 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x14U));
        SETB(d1, t1);
        }
    }
L_051B46: ;
    ITR(0x51B46U, 4);
    { /* 051B46 051b46 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B48: ;
    ITR(0x51B48U, 16);
    { /* 051B48 051b48 add.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=32 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t4 = (a0 + 0x20U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        wr16(t4, t3);
        }
    }
L_051B4C: ;
    ITR(0x51B4CU, 12);
    { /* 051B4C 051b4c sub.w src=EA(d16 r=0 d=32 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a0 + 0x20U));
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B50: ;
    ITR(0x51B50U, 12);
    { /* 051B50 051b50 tst.b src=None dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t = rd8((a0 + 0x1U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B54: ;
    ITR(0x51B54U, 8);
    { /* 051B54 051b54 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA2;
    }
L_051B56: ;
    ITR(0x51B56U, 8);
    { /* 051B56 051b56 bcc src=None dst=None cc=10 */
        if (COND_10) goto L_051B72;
    }
L_051B58: ;
    ITR(0x51B58U, 12);
    { /* 051B58 051b58 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B5C: ;
    ITR(0x51B5CU, 12);
    { /* 051B5C 051b5c add.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B60: ;
    ITR(0x51B60U, 12);
    { /* 051B60 051b60 move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        }
    }
L_051B64: ;
    ITR(0x51B64U, 12);
    { /* 051B64 051b64 cmp.b src=EA(d16 r=0 d=46 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2EU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051B68: ;
    ITR(0x51B68U, 8);
    { /* 051B68 051b68 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B6A: ;
    ITR(0x51B6AU, 20);
    { /* 051B6A 051b6a bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B70: ;
    ITR(0x51B70U, 10);
    { /* 051B70 051b70 bra src=None dst=None cc=0 */
        goto L_051B86;
    }
L_051B72: ;
    ITR(0x51B72U, 12);
    { /* 051B72 051b72 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B76: ;
    ITR(0x51B76U, 12);
    { /* 051B76 051b76 sub.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B7A: ;
    ITR(0x51B7AU, 12);
    { /* 051B7A 051b7a move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051B7E: ;
    ITR(0x51B7EU, 8);
    { /* 051B7E 051b7e bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B80: ;
    ITR(0x51B80U, 20);
    { /* 051B80 051b80 bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B86: ;
    ITR(0x51B86U, 12);
    { /* 051B86 051b86 tst.b src=None dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t = rd8((a0 + 0x2DU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B8A: ;
    ITR(0x51B8AU, 8);
    { /* 051B8A 051b8a bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B92;
    }
L_051B8C: ;
    ITR(0x51B8CU, 20);
    { /* 051B8C 051b8c bchg.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B92: ;
    ITR(0x51B92U, 4);
    { /* 051B92 051b92 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B94: ;
    ITR(0x51B94U, 16);
    { /* 051B94 051b94 btst.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B9A: ;
    ITR(0x51B9AU, 8);
    { /* 051B9A 051b9a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA0;
    }
L_051B9C: ;
    ITR(0x51B9CU, 4);
    { /* 051B9C 051b9c add.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B9E: ;
    ITR(0x51B9EU, 10);
    { /* 051B9E 051b9e bra src=None dst=None cc=0 */
        goto L_051BA2;
    }
L_051BA0: ;
    ITR(0x51BA0U, 4);
    { /* 051BA0 051ba0 sub.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051BA2: ;
    ITR(0x51BA2U, 12);
    { /* 051BA2 051ba2 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051BA6: ;
    ITR(0x51BA6U, 12);
    { /* 051BA6 051ba6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BAA: ;
    ITR(0x51BAAU, 8);
    { /* 051BAA 051baa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BB0;
    }
L_051BAC: ;
    ITR(0x51BACU, 12);
    { /* 051BAC 051bac move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051BB0: ;
    ITR(0x51BB0U, 16);
    { /* 051BB0 051bb0 subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x2BU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BB4: ;
    ITR(0x51BB4U, 8);
    { /* 051BB4 051bb4 bcc src=None dst=None cc=4 */
        if (COND_4) goto L_051BE2;
    }
L_051BB6: ;
    ITR(0x51BB6U, 20);
    { /* 051BB6 051bb6 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051BBC: ;
    ITR(0x51BBCU, 16);
    { /* 051BBC 051bbc movea.l src=EA(d16 r=0 d=38 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x26U));
    }
L_051BC0: ;
    ITR(0x51BC0U, 8);
    { /* 051BC0 051bc0 move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051BC2: ;
    ITR(0x51BC2U, 8);
    { /* 051BC2 051bc2 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BC8;
    }
L_051BC4: ;
    ITR(0x51BC4U, 20);
    { /* 051BC4 051bc4 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051BC8: ;
    ITR(0x51BC8U, 8);
    { /* 051BC8 051bc8 andi.w src=EA(imm r=0 d=0 v=7f) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x7FU;
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_051BCC: ;
    ITR(0x51BCCU, 12);
    { /* 051BCC 051bcc move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051BD0: ;
    ITR(0x51BD0U, 70);
    { /* 051BD0 051bd0 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051BD2: ;
    ITR(0x51BD2U, 18);
    { /* 051BD2 051bd2 lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051BD4: ;
    ITR(0x51BD4U, 12);
    { /* 051BD4 051bd4 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051BD8: ;
    ITR(0x51BD8U, 12);
    { /* 051BD8 051bd8 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BDC: ;
    ITR(0x51BDCU, 8);
    { /* 051BDC 051bdc bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BE2;
    }
L_051BDE: ;
    ITR(0x51BDEU, 12);
    { /* 051BDE 051bde move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051BE2: ;
    ITR(0x51BE2U, 10);
    { /* 051BE2 051be2 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51AE6U); goto L_051AE6; }
    }
L_051BE6: ;
    ITR(0x51BE6U, 8);
    { /* 051BE6 051be6 cmp.b src=EA(imm r=0 d=0 v=e0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xE0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BEA: ;
    ITR(0x51BEAU, 8);
    { /* 051BEA 051bea bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051BFC;
    }
L_051BEC: ;
    ITR(0x51BECU, 8);
    { /* 051BEC 051bec subi.b src=EA(imm r=0 d=0 v=df) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xDFU;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051BF0: ;
    ITR(0x51BF0U, 78);
    { /* 051BF0 051bf0 mulu.w src=EA(pcd r=0 d=0 v=51d82) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * rd16(0x51D82U);
        d0 = t1;
        }
    }
L_051BF4: ;
    ITR(0x51BF4U, 12);
    { /* 051BF4 051bf4 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=28 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a0 + 0x1CU), t1);
        }
    }
L_051BF8: ;
    ITR(0x51BF8U, 10);
    { /* 051BF8 051bf8 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051BFC: ;
    ITR(0x51BFCU, 8);
    { /* 051BFC 051bfc cmp.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C00: ;
    ITR(0x51C00U, 8);
    { /* 051C00 051c00 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C18;
    }
L_051C02: ;
    ITR(0x51C02U, 8);
    { /* 051C02 051c02 subi.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C06: ;
    ITR(0x51C06U, 8);
    { /* 051C06 051c06 lea.l src=EA(pcd r=0 d=0 v=51f3c) dst=EA(an r=5 d=0 v=0) */
        a5 = 0x51F3CU;
    }
L_051C0A: ;
    ITR(0x51C0AU, 74);
    { /* 051C0A 051c0a mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_051C0E: ;
    ITR(0x51C0EU, 8);
    { /* 051C0E 051c0e adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 += SX16((d0 & 0xFFFF));
    }
L_051C10: ;
    ITR(0x51C10U, 20);
    { /* 051C10 051c10 move.l src=EA(an r=5 d=0 v=0) dst=EA(d16 r=0 d=24 v=0) */
        { uint32_t t1 = a5;
        wr32((a0 + 0x18U), t1);
        }
    }
L_051C14: ;
    ITR(0x51C14U, 10);
    { /* 051C14 051c14 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C18: ;
    ITR(0x51C18U, 8);
    { /* 051C18 051c18 cmp.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C1C: ;
    ITR(0x51C1CU, 8);
    { /* 051C1C 051c1c bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C3C;
    }
L_051C1E: ;
    ITR(0x51C1EU, 8);
    { /* 051C1E 051c1e subi.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C22: ;
    ITR(0x51C22U, 4);
    { /* 051C22 051c22 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C24: ;
    ITR(0x51C24U, 8);
    { /* 051C24 051c24 lea.l src=EA(pcd r=0 d=0 v=52f1e) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x52F1EU;
    }
L_051C28: ;
    ITR(0x51C28U, 14);
    { /* 051C28 051c28 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C2C: ;
    ITR(0x51C2CU, 6);
    { /* 051C2C 051c2c adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C2E: ;
    ITR(0x51C2EU, 20);
    { /* 051C2E 051c2e move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=34 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x22U), t1);
        }
    }
L_051C32: ;
    ITR(0x51C32U, 20);
    { /* 051C32 051c32 move.b src=EA(d16 r=2 d=-1 v=0) dst=EA(d16 r=0 d=42 v=0) */
        { uint32_t t1 = rd8((a2 + 0xFFFFFFFFU));
        wr8((a0 + 0x2AU), t1);
        }
    }
L_051C38: ;
    ITR(0x51C38U, 10);
    { /* 051C38 051c38 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C3C: ;
    ITR(0x51C3CU, 8);
    { /* 051C3C 051c3c cmp.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C40: ;
    ITR(0x51C40U, 8);
    { /* 051C40 051c40 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C5E;
    }
L_051C42: ;
    ITR(0x51C42U, 8);
    { /* 051C42 051c42 subi.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C46: ;
    ITR(0x51C46U, 4);
    { /* 051C46 051c46 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C48: ;
    ITR(0x51C48U, 8);
    { /* 051C48 051c48 lea.l src=EA(pcd r=0 d=0 v=51eea) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51EEAU;
    }
L_051C4C: ;
    ITR(0x51C4CU, 14);
    { /* 051C4C 051c4c movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C50: ;
    ITR(0x51C50U, 6);
    { /* 051C50 051c50 adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C52: ;
    ITR(0x51C52U, 20);
    { /* 051C52 051c52 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=12 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0xCU), t1);
        }
    }
L_051C56: ;
    ITR(0x51C56U, 20);
    { /* 051C56 051c56 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051C5A: ;
    ITR(0x51C5AU, 10);
    { /* 051C5A 051c5a bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C5E: ;
    ITR(0x51C5EU, 4);
    { /* 051C5E 051c5e add.b src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_051C60: ;
    ITR(0x51C60U, 8);
    { /* 051C60 051c60 lea.l src=EA(pcd r=0 d=0 v=51d6a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51D6AU;
    }
L_051C64: ;
    ITR(0x51C64U, 14);
    { /* 051C64 051c64 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C68: ;
    ITR(0x51C68U, 14);
    { /* 051C68 051c68 jmp src=EA(idx r=3 d=0 v=0) dst=None */
        { call_dynamic((a3 + 0x0U + ((uint32_t)(int32_t)(int16_t)a2))); return; }
    }
L_051D3E: ;
    ITR(0x51D3EU, 16);
    { /* 051D3E 051d3e move.b src=EA(post r=1 d=0 v=0) dst=EA(d16 r=0 d=8 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        wr8((a0 + 0x8U), t1);
        }
    }
L_051D42: ;
    ITR(0x51D42U, 16);
    { /* 051D42 051d42 move.b src=EA(post r=1 d=0 v=0) dst=EA(d16 r=0 d=9 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        wr8((a0 + 0x9U), t1);
        }
    }
L_051D46: ;
    ITR(0x51D46U, 16);
    { /* 051D46 051d46 move.w src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=10 v=0) */
        { uint32_t t1 = 0x0U;
        wr16((a0 + 0xAU), t1);
        }
    }
L_051D4C: ;
    ITR(0x51D4CU, 10);
    { /* 051D4C 051d4c bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_052A44: ;
    ITR(0x52A44U, 8);
    { /* 052A44 052a44 lea.l src=EA(pcd r=0 d=0 v=52b9c) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52B9CU;
    }
L_052A48: ;
    ITR(0x52A48U, 12);
    { /* 052A48 052a48 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A4C: ;
    ITR(0x52A4CU, 8);
    { /* 052A4C 052a4c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A5C;
    }
L_052A4E: ;
    ITR(0x52A4EU, 12);
    { /* 052A4E 052a4e lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF000U;
    }
L_052A54: ;
    ITR(0x52A54U, 4);
    { /* 052A54 052a54 moveq.l src=EA(imm r=0 d=0 v=1) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x1U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A56: ;
    ITR(0x52A56U, 8);
    { /* 052A56 052a56 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_052A5A: ;
    ITR(0x52A5AU, 18);
    { /* 052A5A 052a5a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A5CU);
    }
L_052A5C: ;
    ITR(0x52A5CU, 8);
    { /* 052A5C 052a5c lea.l src=EA(pcd r=0 d=0 v=52bc0) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BC0U;
    }
L_052A60: ;
    ITR(0x52A60U, 12);
    { /* 052A60 052a60 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A64: ;
    ITR(0x52A64U, 8);
    { /* 052A64 052a64 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A74;
    }
L_052A66: ;
    ITR(0x52A66U, 12);
    { /* 052A66 052a66 lea.l src=EA(absl r=0 d=0 v=dff010) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF010U;
    }
L_052A6C: ;
    ITR(0x52A6CU, 4);
    { /* 052A6C 052a6c moveq.l src=EA(imm r=0 d=0 v=2) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x2U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A6E: ;
    ITR(0x52A6EU, 8);
    { /* 052A6E 052a6e lea.l src=EA(pcd r=0 d=0 v=52c3a) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C3AU;
    }
L_052A72: ;
    ITR(0x52A72U, 18);
    { /* 052A72 052a72 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A74U);
    }
L_052A74: ;
    ITR(0x52A74U, 8);
    { /* 052A74 052a74 lea.l src=EA(pcd r=0 d=0 v=52be4) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BE4U;
    }
L_052A78: ;
    ITR(0x52A78U, 12);
    { /* 052A78 052a78 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A7C: ;
    ITR(0x52A7CU, 8);
    { /* 052A7C 052a7c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A8C;
    }
L_052A7E: ;
    ITR(0x52A7EU, 12);
    { /* 052A7E 052a7e lea.l src=EA(absl r=0 d=0 v=dff020) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF020U;
    }
L_052A84: ;
    ITR(0x52A84U, 4);
    { /* 052A84 052a84 moveq.l src=EA(imm r=0 d=0 v=4) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x4U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A86: ;
    ITR(0x52A86U, 8);
    { /* 052A86 052a86 lea.l src=EA(pcd r=0 d=0 v=52c46) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C46U;
    }
L_052A8A: ;
    ITR(0x52A8AU, 18);
    { /* 052A8A 052a8a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A8CU);
    }
L_052A8C: ;
    ITR(0x52A8CU, 8);
    { /* 052A8C 052a8c lea.l src=EA(pcd r=0 d=0 v=52c08) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52C08U;
    }
L_052A90: ;
    ITR(0x52A90U, 12);
    { /* 052A90 052a90 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A94: ;
    ITR(0x52A94U, 8);
    { /* 052A94 052a94 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052AA4;
    }
L_052A96: ;
    ITR(0x52A96U, 12);
    { /* 052A96 052a96 lea.l src=EA(absl r=0 d=0 v=dff030) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF030U;
    }
L_052A9C: ;
    ITR(0x52A9CU, 4);
    { /* 052A9C 052a9c moveq.l src=EA(imm r=0 d=0 v=8) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x8U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A9E: ;
    ITR(0x52A9EU, 8);
    { /* 052A9E 052a9e lea.l src=EA(pcd r=0 d=0 v=52c52) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C52U;
    }
L_052AA2: ;
    ITR(0x52AA2U, 18);
    { /* 052AA2 052aa2 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52AA4U);
    }
L_052AA4: ;
    ITR(0x52AA4U, 16);
    { /* 052AA4 052aa4 rts src=None dst=None */
        RTS();
    }
}

void dwam_051D50(void)
{
    FN_ENTER(0x51D50U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51912U: goto L_051912;
        case 0x519A0U: goto L_0519A0;
        case 0x519A4U: goto L_0519A4;
        case 0x519A6U: goto L_0519A6;
        case 0x519AAU: goto L_0519AA;
        case 0x519ACU: goto L_0519AC;
        case 0x519B0U: goto L_0519B0;
        case 0x519B6U: goto L_0519B6;
        case 0x519BAU: goto L_0519BA;
        case 0x519BCU: goto L_0519BC;
        case 0x519C0U: goto L_0519C0;
        case 0x519C2U: goto L_0519C2;
        case 0x519C4U: goto L_0519C4;
        case 0x519C6U: goto L_0519C6;
        case 0x519C8U: goto L_0519C8;
        case 0x519CCU: goto L_0519CC;
        case 0x519D0U: goto L_0519D0;
        case 0x519D4U: goto L_0519D4;
        case 0x519D6U: goto L_0519D6;
        case 0x519DAU: goto L_0519DA;
        case 0x519DEU: goto L_0519DE;
        case 0x519E0U: goto L_0519E0;
        case 0x519E4U: goto L_0519E4;
        case 0x519E6U: goto L_0519E6;
        case 0x519E8U: goto L_0519E8;
        case 0x519ECU: goto L_0519EC;
        case 0x519EEU: goto L_0519EE;
        case 0x519F2U: goto L_0519F2;
        case 0x519F6U: goto L_0519F6;
        case 0x519FAU: goto L_0519FA;
        case 0x519FCU: goto L_0519FC;
        case 0x51A00U: goto L_051A00;
        case 0x51A04U: goto L_051A04;
        case 0x51A06U: goto L_051A06;
        case 0x51A0CU: goto L_051A0C;
        case 0x51A12U: goto L_051A12;
        case 0x51A16U: goto L_051A16;
        case 0x51A18U: goto L_051A18;
        case 0x51A1EU: goto L_051A1E;
        case 0x51A24U: goto L_051A24;
        case 0x51A28U: goto L_051A28;
        case 0x51A2AU: goto L_051A2A;
        case 0x51A30U: goto L_051A30;
        case 0x51A34U: goto L_051A34;
        case 0x51A38U: goto L_051A38;
        case 0x51A3AU: goto L_051A3A;
        case 0x51A3EU: goto L_051A3E;
        case 0x51A40U: goto L_051A40;
        case 0x51A42U: goto L_051A42;
        case 0x51A44U: goto L_051A44;
        case 0x51A4AU: goto L_051A4A;
        case 0x51A4EU: goto L_051A4E;
        case 0x51A52U: goto L_051A52;
        case 0x51A54U: goto L_051A54;
        case 0x51A56U: goto L_051A56;
        case 0x51A5AU: goto L_051A5A;
        case 0x51A5EU: goto L_051A5E;
        case 0x51A62U: goto L_051A62;
        case 0x51A66U: goto L_051A66;
        case 0x51A6AU: goto L_051A6A;
        case 0x51A6CU: goto L_051A6C;
        case 0x51A70U: goto L_051A70;
        case 0x51A76U: goto L_051A76;
        case 0x51A78U: goto L_051A78;
        case 0x51A7EU: goto L_051A7E;
        case 0x51A84U: goto L_051A84;
        case 0x51A88U: goto L_051A88;
        case 0x51A8AU: goto L_051A8A;
        case 0x51A8CU: goto L_051A8C;
        case 0x51A90U: goto L_051A90;
        case 0x51A94U: goto L_051A94;
        case 0x51A96U: goto L_051A96;
        case 0x51A9CU: goto L_051A9C;
        case 0x51AA2U: goto L_051AA2;
        case 0x51AA6U: goto L_051AA6;
        case 0x51AAAU: goto L_051AAA;
        case 0x51AAEU: goto L_051AAE;
        case 0x51AB2U: goto L_051AB2;
        case 0x51AB4U: goto L_051AB4;
        case 0x51AB6U: goto L_051AB6;
        case 0x51ABAU: goto L_051ABA;
        case 0x51ABCU: goto L_051ABC;
        case 0x51ABEU: goto L_051ABE;
        case 0x51AC2U: goto L_051AC2;
        case 0x51AC6U: goto L_051AC6;
        case 0x51AC8U: goto L_051AC8;
        case 0x51ACCU: goto L_051ACC;
        case 0x51AD0U: goto L_051AD0;
        case 0x51AD4U: goto L_051AD4;
        case 0x51ADAU: goto L_051ADA;
        case 0x51ADEU: goto L_051ADE;
        case 0x51AE0U: goto L_051AE0;
        case 0x51AE6U: goto L_051AE6;
        case 0x51AE8U: goto L_051AE8;
        case 0x51AECU: goto L_051AEC;
        case 0x51AF0U: goto L_051AF0;
        case 0x51AF4U: goto L_051AF4;
        case 0x51AF8U: goto L_051AF8;
        case 0x51AFCU: goto L_051AFC;
        case 0x51B00U: goto L_051B00;
        case 0x51B04U: goto L_051B04;
        case 0x51B06U: goto L_051B06;
        case 0x51B0AU: goto L_051B0A;
        case 0x51B0CU: goto L_051B0C;
        case 0x51B10U: goto L_051B10;
        case 0x51B14U: goto L_051B14;
        case 0x51B16U: goto L_051B16;
        case 0x51B1AU: goto L_051B1A;
        case 0x51B1EU: goto L_051B1E;
        case 0x51B22U: goto L_051B22;
        case 0x51B24U: goto L_051B24;
        case 0x51B26U: goto L_051B26;
        case 0x51B2AU: goto L_051B2A;
        case 0x51B2CU: goto L_051B2C;
        case 0x51B2EU: goto L_051B2E;
        case 0x51B34U: goto L_051B34;
        case 0x51B36U: goto L_051B36;
        case 0x51B3AU: goto L_051B3A;
        case 0x51B3CU: goto L_051B3C;
        case 0x51B40U: goto L_051B40;
        case 0x51B42U: goto L_051B42;
        case 0x51B46U: goto L_051B46;
        case 0x51B48U: goto L_051B48;
        case 0x51B4CU: goto L_051B4C;
        case 0x51B50U: goto L_051B50;
        case 0x51B54U: goto L_051B54;
        case 0x51B56U: goto L_051B56;
        case 0x51B58U: goto L_051B58;
        case 0x51B5CU: goto L_051B5C;
        case 0x51B60U: goto L_051B60;
        case 0x51B64U: goto L_051B64;
        case 0x51B68U: goto L_051B68;
        case 0x51B6AU: goto L_051B6A;
        case 0x51B70U: goto L_051B70;
        case 0x51B72U: goto L_051B72;
        case 0x51B76U: goto L_051B76;
        case 0x51B7AU: goto L_051B7A;
        case 0x51B7EU: goto L_051B7E;
        case 0x51B80U: goto L_051B80;
        case 0x51B86U: goto L_051B86;
        case 0x51B8AU: goto L_051B8A;
        case 0x51B8CU: goto L_051B8C;
        case 0x51B92U: goto L_051B92;
        case 0x51B94U: goto L_051B94;
        case 0x51B9AU: goto L_051B9A;
        case 0x51B9CU: goto L_051B9C;
        case 0x51B9EU: goto L_051B9E;
        case 0x51BA0U: goto L_051BA0;
        case 0x51BA2U: goto L_051BA2;
        case 0x51BA6U: goto L_051BA6;
        case 0x51BAAU: goto L_051BAA;
        case 0x51BACU: goto L_051BAC;
        case 0x51BB0U: goto L_051BB0;
        case 0x51BB4U: goto L_051BB4;
        case 0x51BB6U: goto L_051BB6;
        case 0x51BBCU: goto L_051BBC;
        case 0x51BC0U: goto L_051BC0;
        case 0x51BC2U: goto L_051BC2;
        case 0x51BC4U: goto L_051BC4;
        case 0x51BC8U: goto L_051BC8;
        case 0x51BCCU: goto L_051BCC;
        case 0x51BD0U: goto L_051BD0;
        case 0x51BD2U: goto L_051BD2;
        case 0x51BD4U: goto L_051BD4;
        case 0x51BD8U: goto L_051BD8;
        case 0x51BDCU: goto L_051BDC;
        case 0x51BDEU: goto L_051BDE;
        case 0x51BE2U: goto L_051BE2;
        case 0x51BE6U: goto L_051BE6;
        case 0x51BEAU: goto L_051BEA;
        case 0x51BECU: goto L_051BEC;
        case 0x51BF0U: goto L_051BF0;
        case 0x51BF4U: goto L_051BF4;
        case 0x51BF8U: goto L_051BF8;
        case 0x51BFCU: goto L_051BFC;
        case 0x51C00U: goto L_051C00;
        case 0x51C02U: goto L_051C02;
        case 0x51C06U: goto L_051C06;
        case 0x51C0AU: goto L_051C0A;
        case 0x51C0EU: goto L_051C0E;
        case 0x51C10U: goto L_051C10;
        case 0x51C14U: goto L_051C14;
        case 0x51C18U: goto L_051C18;
        case 0x51C1CU: goto L_051C1C;
        case 0x51C1EU: goto L_051C1E;
        case 0x51C22U: goto L_051C22;
        case 0x51C24U: goto L_051C24;
        case 0x51C28U: goto L_051C28;
        case 0x51C2CU: goto L_051C2C;
        case 0x51C2EU: goto L_051C2E;
        case 0x51C32U: goto L_051C32;
        case 0x51C38U: goto L_051C38;
        case 0x51C3CU: goto L_051C3C;
        case 0x51C40U: goto L_051C40;
        case 0x51C42U: goto L_051C42;
        case 0x51C46U: goto L_051C46;
        case 0x51C48U: goto L_051C48;
        case 0x51C4CU: goto L_051C4C;
        case 0x51C50U: goto L_051C50;
        case 0x51C52U: goto L_051C52;
        case 0x51C56U: goto L_051C56;
        case 0x51C5AU: goto L_051C5A;
        case 0x51C5EU: goto L_051C5E;
        case 0x51C60U: goto L_051C60;
        case 0x51C64U: goto L_051C64;
        case 0x51C68U: goto L_051C68;
        case 0x51D52U: goto L_051D52;
        case 0x51D54U: goto L_051D54;
        case 0x51D58U: goto L_051D58;
        case 0x52A44U: goto L_052A44;
        case 0x52A48U: goto L_052A48;
        case 0x52A4CU: goto L_052A4C;
        case 0x52A4EU: goto L_052A4E;
        case 0x52A54U: goto L_052A54;
        case 0x52A56U: goto L_052A56;
        case 0x52A5AU: goto L_052A5A;
        case 0x52A5CU: goto L_052A5C;
        case 0x52A60U: goto L_052A60;
        case 0x52A64U: goto L_052A64;
        case 0x52A66U: goto L_052A66;
        case 0x52A6CU: goto L_052A6C;
        case 0x52A6EU: goto L_052A6E;
        case 0x52A72U: goto L_052A72;
        case 0x52A74U: goto L_052A74;
        case 0x52A78U: goto L_052A78;
        case 0x52A7CU: goto L_052A7C;
        case 0x52A7EU: goto L_052A7E;
        case 0x52A84U: goto L_052A84;
        case 0x52A86U: goto L_052A86;
        case 0x52A8AU: goto L_052A8A;
        case 0x52A8CU: goto L_052A8C;
        case 0x52A90U: goto L_052A90;
        case 0x52A94U: goto L_052A94;
        case 0x52A96U: goto L_052A96;
        case 0x52A9CU: goto L_052A9C;
        case 0x52A9EU: goto L_052A9E;
        case 0x52AA2U: goto L_052AA2;
        case 0x52AA4U: goto L_052AA4;
        default: break; } }
    goto L_051D50;
L_051912: ;
    ITR(0x51912U, 10);
    { /* 051912 051912 bra src=None dst=None cc=0 */
        goto L_052A44;
    }
L_0519A0: ;
    ITR(0x519A0U, 8);
    { /* 0519A0 0519a0 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_0519A4: ;
    ITR(0x519A4U, 4);
    { /* 0519A4 0519a4 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519A6: ;
    ITR(0x519A6U, 74);
    { /* 0519A6 0519a6 mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_0519AA: ;
    ITR(0x519AAU, 8);
    { /* 0519AA 0519aa adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=4 d=0 v=0) */
        a4 += SX16((d0 & 0xFFFF));
    }
L_0519AC: ;
    ITR(0x519ACU, 13);
    { /* 0519AC 0519ac scc.b src=None dst=EA(d16 r=4 d=10 v=0) cc=0 */
        { uint32_t t2 = (a4 + 0xAU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519B0: ;
    ITR(0x519B0U, 12);
    { /* 0519B0 0519b0 lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=6 d=0 v=0) */
        a6 = 0xDFF000U;
    }
L_0519B6: ;
    ITR(0x519B6U, 8);
    { /* 0519B6 0519b6 move.w src=EA(imm r=0 d=0 v=30) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x30U;
        SETW(d0, t1);
        }
    }
L_0519BA: ;
    ITR(0x519BAU, 70);
    { /* 0519BA 0519ba mulu.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d7 & 0xFFFF);
        d0 = t1;
        }
    }
L_0519BC: ;
    ITR(0x519BCU, 8);
    { /* 0519BC 0519bc lea.l src=EA(pcd r=0 d=0 v=51d9a) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x51D9AU;
    }
L_0519C0: ;
    ITR(0x519C0U, 8);
    { /* 0519C0 0519c0 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 += SX16((d0 & 0xFFFF));
    }
L_0519C2: ;
    ITR(0x519C2U, 4);
    { /* 0519C2 0519c2 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519C4: ;
    ITR(0x519C4U, 14);
    { /* 0519C4 0519c4 lsl.w src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 1, (d0 & 0xFFFF), 4, 16);
        SETW(d0, t1);
        }
    }
L_0519C6: ;
    ITR(0x519C6U, 8);
    { /* 0519C6 0519c6 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=6 d=0 v=0) */
        a6 += SX16((d0 & 0xFFFF));
    }
L_0519C8: ;
    ITR(0x519C8U, 16);
    { /* 0519C8 0519c8 movea.l src=EA(d16 r=0 d=4 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x4U));
    }
L_0519CC: ;
    ITR(0x519CCU, 16);
    { /* 0519CC 0519cc movea.l src=EA(d16 r=0 d=24 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 = rd32((a0 + 0x18U));
    }
L_0519D0: ;
    ITR(0x519D0U, 12);
    { /* 0519D0 0519d0 tst.b src=None dst=EA(d16 r=0 d=22 v=0) */
        { uint32_t t = rd8((a0 + 0x16U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519D4: ;
    ITR(0x519D4U, 8);
    { /* 0519D4 0519d4 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_0519D6: ;
    ITR(0x519D6U, 13);
    { /* 0519D6 0519d6 scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=0 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519DA: ;
    ITR(0x519DAU, 16);
    { /* 0519DA 0519da move.l src=EA(d16 r=5 d=4 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x4U));
        d0 = t1;
        FLAGS_LOGIC(t1, 0xFFFFFFFFU, 0x80000000U);
        }
    }
L_0519DE: ;
    ITR(0x519DEU, 8);
    { /* 0519DE 0519de bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051A06;
    }
L_0519E0: ;
    ITR(0x519E0U, 16);
    { /* 0519E0 0519e0 movea.l src=EA(d16 r=5 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a5 + 0x0U));
    }
L_0519E4: ;
    ITR(0x519E4U, 6);
    { /* 0519E4 0519e4 adda.l src=EA(dn r=0 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += d0;
    }
L_0519E6: ;
    ITR(0x519E6U, 10);
    { /* 0519E6 0519e6 lsr.l src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, 1, 32);
        d0 = t1;
        }
    }
L_0519E8: ;
    ITR(0x519E8U, 12);
    { /* 0519E8 0519e8 move.w src=EA(d16 r=5 d=8 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        SETW(d1, t1);
        }
    }
L_0519EC: ;
    ITR(0x519ECU, 4);
    { /* 0519EC 0519ec sub.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_0519EE: ;
    ITR(0x519EEU, 20);
    { /* 0519EE 0519ee move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = a2;
        wr32((a4 + 0x0U), t1);
        }
    }
L_0519F2: ;
    ITR(0x519F2U, 12);
    { /* 0519F2 0519f2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x4U), t1);
        }
    }
L_0519F6: ;
    ITR(0x519F6U, 12);
    { /* 0519F6 0519f6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519FA: ;
    ITR(0x519FAU, 8);
    { /* 0519FA 0519fa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A04;
    }
L_0519FC: ;
    ITR(0x519FCU, 20);
    { /* 0519FC 0519fc move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = a2;
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A00: ;
    ITR(0x51A00U, 12);
    { /* 051A00 051a00 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A04: ;
    ITR(0x51A04U, 10);
    { /* 051A04 051a04 bra src=None dst=None cc=0 */
        goto L_051A24;
    }
L_051A06: ;
    ITR(0x51A06U, 32);
    { /* 051A06 051a06 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A0C: ;
    ITR(0x51A0CU, 16);
    { /* 051A0C 051a0c move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A12: ;
    ITR(0x51A12U, 12);
    { /* 051A12 051a12 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A16: ;
    ITR(0x51A16U, 8);
    { /* 051A16 051a16 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_051A18: ;
    ITR(0x51A18U, 32);
    { /* 051A18 051a18 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A1E: ;
    ITR(0x51A1EU, 16);
    { /* 051A1E 051a1e move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A24: ;
    ITR(0x51A24U, 16);
    { /* 051A24 051a24 subq.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        wr16(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A28: ;
    ITR(0x51A28U, 8);
    { /* 051A28 051a28 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4E;
    }
L_051A2A: ;
    ITR(0x51A2AU, 16);
    { /* 051A2A 051a2a cmpi.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A30: ;
    ITR(0x51A30U, 8);
    { /* 051A30 051a30 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AF4;
    }
L_051A34: ;
    ITR(0x51A34U, 12);
    { /* 051A34 051a34 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A38: ;
    ITR(0x51A38U, 8);
    { /* 051A38 051a38 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A4A;
    }
L_051A3A: ;
    ITR(0x51A3AU, 12);
    { /* 051A3A 051a3a cmpi.b src=EA(imm r=0 d=0 v=83) dst=EA(ind r=1 d=0 v=0) */
        { uint32_t t1 = 0x83U;
        uint32_t t4 = a1;
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051A3E: ;
    ITR(0x51A3EU, 8);
    { /* 051A3E 051a3e bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4A;
    }
L_051A40: ;
    ITR(0x51A40U, 4);
    { /* 051A40 051a40 clr.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, 0);
    }
L_051A42: ;
    ITR(0x51A42U, 8);
    { /* 051A42 051a42 bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051A44: ;
    ITR(0x51A44U, 16);
    { /* 051A44 051a44 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051A4A: ;
    ITR(0x51A4AU, 10);
    { /* 051A4A 051a4a bra src=None dst=None cc=0 */
        goto L_051AE6;
    }
L_051A4E: ;
    ITR(0x51A4EU, 16);
    { /* 051A4E 051a4e clr.b src=None dst=EA(d16 r=0 d=0 v=0) */
        wr8((a0 + 0x0U), 0);
    }
L_051A52: ;
    ITR(0x51A52U, 4);
    { /* 051A52 051a52 moveq.l src=EA(imm r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        d0 = 0x0U;
    }
L_051A54: ;
    ITR(0x51A54U, 8);
    { /* 051A54 051a54 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d0, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051A56: ;
    ITR(0x51A56U, 8);
    { /* 051A56 051a56 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BE6;
    }
L_051A5A: ;
    ITR(0x51A5AU, 12);
    { /* 051A5A 051a5a move.b src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=2 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        wr8((a0 + 0x2U), t1);
        }
    }
L_051A5E: ;
    ITR(0x51A5EU, 12);
    { /* 051A5E 051a5e add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A62: ;
    ITR(0x51A62U, 12);
    { /* 051A62 051a62 add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A66: ;
    ITR(0x51A66U, 16);
    { /* 051A66 051a66 movea.l src=EA(d16 r=0 d=34 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x22U));
    }
L_051A6A: ;
    ITR(0x51A6AU, 8);
    { /* 051A6A 051a6a move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051A6C: ;
    ITR(0x51A6CU, 20);
    { /* 051A6C 051a6c move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051A70: ;
    ITR(0x51A70U, 20);
    { /* 051A70 051a70 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051A76: ;
    ITR(0x51A76U, 4);
    { /* 051A76 051a76 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051A78: ;
    ITR(0x51A78U, 32);
    { /* 051A78 051a78 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A7E: ;
    ITR(0x51A7EU, 20);
    { /* 051A7E 051a7e move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A84: ;
    ITR(0x51A84U, 12);
    { /* 051A84 051a84 move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051A88: ;
    ITR(0x51A88U, 70);
    { /* 051A88 051a88 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051A8A: ;
    ITR(0x51A8AU, 18);
    { /* 051A8A 051a8a lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051A8C: ;
    ITR(0x51A8CU, 12);
    { /* 051A8C 051a8c move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051A90: ;
    ITR(0x51A90U, 12);
    { /* 051A90 051a90 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A94: ;
    ITR(0x51A94U, 8);
    { /* 051A94 051a94 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AA6;
    }
L_051A96: ;
    ITR(0x51A96U, 32);
    { /* 051A96 051a96 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A9C: ;
    ITR(0x51A9CU, 20);
    { /* 051A9C 051a9c move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051AA2: ;
    ITR(0x51AA2U, 12);
    { /* 051AA2 051aa2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051AA6: ;
    ITR(0x51AA6U, 8);
    { /* 051AA6 051aa6 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AAA: ;
    ITR(0x51AAAU, 8);
    { /* 051AAA 051aaa lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051AAE: ;
    ITR(0x51AAEU, 12);
    { /* 051AAE 051aae move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051AB2: ;
    ITR(0x51AB2U, 4);
    { /* 051AB2 051ab2 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051AB4: ;
    ITR(0x51AB4U, 4);
    { /* 051AB4 051ab4 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AB6: ;
    ITR(0x51AB6U, 14);
    { /* 051AB6 051ab6 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051ABA: ;
    ITR(0x51ABAU, 70);
    { /* 051ABA 051aba mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051ABC: ;
    ITR(0x51ABCU, 16);
    { /* 051ABC 051abc lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051ABE: ;
    ITR(0x51ABEU, 12);
    { /* 051ABE 051abe move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051AC2: ;
    ITR(0x51AC2U, 12);
    { /* 051AC2 051ac2 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051AC6: ;
    ITR(0x51AC6U, 8);
    { /* 051AC6 051ac6 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051ACC;
    }
L_051AC8: ;
    ITR(0x51AC8U, 12);
    { /* 051AC8 051ac8 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051ACC: ;
    ITR(0x51ACCU, 13);
    { /* 051ACC 051acc scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=1 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051AD0: ;
    ITR(0x51AD0U, 20);
    { /* 051AD0 051ad0 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=4 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x4U), t1);
        }
    }
L_051AD4: ;
    ITR(0x51AD4U, 20);
    { /* 051AD4 051ad4 move.w src=EA(d16 r=0 d=28 v=0) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = rd16((a0 + 0x1CU));
        wr16((a0 + 0x1EU), t1);
        }
    }
L_051ADA: ;
    ITR(0x51ADAU, 8);
    { /* 051ADA 051ada move.w src=EA(imm r=0 d=0 v=8200) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x8200U;
        SETW(d1, t1);
        }
    }
L_051ADE: ;
    ITR(0x51ADEU, 8);
    { /* 051ADE 051ade bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051AE0: ;
    ITR(0x51AE0U, 16);
    { /* 051AE0 051ae0 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051AE6: ;
    ITR(0x51AE6U, 4);
    { /* 051AE6 051ae6 addq.w src=EA(imm r=0 d=0 v=1) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d7, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFFFU, 0x8000U, 1);
        }
    }
L_051AE8: ;
    ITR(0x51AE8U, 8);
    { /* 051AE8 051ae8 cmp.w src=EA(imm r=0 d=0 v=4) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x4U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051AEC: ;
    ITR(0x51AECU, 10);
    { /* 051AEC 051aec bcc src=None dst=None cc=6 */
        if (COND_6) { BUDGET_CHECK(0x519A0U); goto L_0519A0; }
    }
L_051AF0: ;
    ITR(0x51AF0U, 10);
    { /* 051AF0 051af0 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51912U); goto L_051912; }
    }
L_051AF4: ;
    ITR(0x51AF4U, 12);
    { /* 051AF4 051af4 move.b src=EA(d16 r=0 d=2 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2U));
        SETB(d0, t1);
        }
    }
L_051AF8: ;
    ITR(0x51AF8U, 12);
    { /* 051AF8 051af8 add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051AFC: ;
    ITR(0x51AFCU, 12);
    { /* 051AFC 051afc add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B00: ;
    ITR(0x51B00U, 16);
    { /* 051B00 051b00 movea.l src=EA(d16 r=0 d=16 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x10U));
    }
L_051B04: ;
    ITR(0x51B04U, 8);
    { /* 051B04 051b04 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051B06: ;
    ITR(0x51B06U, 12);
    { /* 051B06 051b06 bclr.l src=EA(imm r=0 d=0 v=7) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (0x7U) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 & ~(1u << t1);
        }
    }
L_051B0A: ;
    ITR(0x51B0AU, 8);
    { /* 051B0A 051b0a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B10;
    }
L_051B0C: ;
    ITR(0x51B0CU, 16);
    { /* 051B0C 051b0c movea.l src=EA(d16 r=0 d=12 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0xCU));
    }
L_051B10: ;
    ITR(0x51B10U, 20);
    { /* 051B10 051b10 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051B14: ;
    ITR(0x51B14U, 4);
    { /* 051B14 051b14 add.b src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B16: ;
    ITR(0x51B16U, 8);
    { /* 051B16 051b16 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B1A: ;
    ITR(0x51B1AU, 8);
    { /* 051B1A 051b1a lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051B1E: ;
    ITR(0x51B1EU, 12);
    { /* 051B1E 051b1e move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051B22: ;
    ITR(0x51B22U, 4);
    { /* 051B22 051b22 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051B24: ;
    ITR(0x51B24U, 4);
    { /* 051B24 051b24 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B26: ;
    ITR(0x51B26U, 14);
    { /* 051B26 051b26 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051B2A: ;
    ITR(0x51B2AU, 70);
    { /* 051B2A 051b2a mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051B2C: ;
    ITR(0x51B2CU, 16);
    { /* 051B2C 051b2c lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051B2E: ;
    ITR(0x51B2EU, 16);
    { /* 051B2E 051b2e btst.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=0 v=0) */
        { uint32_t t1 = (0x1U) & 7;
        uint32_t t3 = (a0 + 0x0U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B34: ;
    ITR(0x51B34U, 8);
    { /* 051B34 051b34 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B50;
    }
L_051B36: ;
    ITR(0x51B36U, 12);
    { /* 051B36 051b36 tst.b src=None dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t = rd8((a0 + 0x15U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B3A: ;
    ITR(0x51B3AU, 8);
    { /* 051B3A 051b3a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B42;
    }
L_051B3C: ;
    ITR(0x51B3CU, 16);
    { /* 051B3C 051b3c subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x15U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        }
    }
L_051B40: ;
    ITR(0x51B40U, 10);
    { /* 051B40 051b40 bra src=None dst=None cc=0 */
        goto L_051B50;
    }
L_051B42: ;
    ITR(0x51B42U, 12);
    { /* 051B42 051b42 move.b src=EA(d16 r=0 d=20 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x14U));
        SETB(d1, t1);
        }
    }
L_051B46: ;
    ITR(0x51B46U, 4);
    { /* 051B46 051b46 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B48: ;
    ITR(0x51B48U, 16);
    { /* 051B48 051b48 add.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=32 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t4 = (a0 + 0x20U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        wr16(t4, t3);
        }
    }
L_051B4C: ;
    ITR(0x51B4CU, 12);
    { /* 051B4C 051b4c sub.w src=EA(d16 r=0 d=32 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a0 + 0x20U));
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B50: ;
    ITR(0x51B50U, 12);
    { /* 051B50 051b50 tst.b src=None dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t = rd8((a0 + 0x1U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B54: ;
    ITR(0x51B54U, 8);
    { /* 051B54 051b54 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA2;
    }
L_051B56: ;
    ITR(0x51B56U, 8);
    { /* 051B56 051b56 bcc src=None dst=None cc=10 */
        if (COND_10) goto L_051B72;
    }
L_051B58: ;
    ITR(0x51B58U, 12);
    { /* 051B58 051b58 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B5C: ;
    ITR(0x51B5CU, 12);
    { /* 051B5C 051b5c add.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B60: ;
    ITR(0x51B60U, 12);
    { /* 051B60 051b60 move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        }
    }
L_051B64: ;
    ITR(0x51B64U, 12);
    { /* 051B64 051b64 cmp.b src=EA(d16 r=0 d=46 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2EU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051B68: ;
    ITR(0x51B68U, 8);
    { /* 051B68 051b68 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B6A: ;
    ITR(0x51B6AU, 20);
    { /* 051B6A 051b6a bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B70: ;
    ITR(0x51B70U, 10);
    { /* 051B70 051b70 bra src=None dst=None cc=0 */
        goto L_051B86;
    }
L_051B72: ;
    ITR(0x51B72U, 12);
    { /* 051B72 051b72 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B76: ;
    ITR(0x51B76U, 12);
    { /* 051B76 051b76 sub.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B7A: ;
    ITR(0x51B7AU, 12);
    { /* 051B7A 051b7a move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051B7E: ;
    ITR(0x51B7EU, 8);
    { /* 051B7E 051b7e bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B80: ;
    ITR(0x51B80U, 20);
    { /* 051B80 051b80 bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B86: ;
    ITR(0x51B86U, 12);
    { /* 051B86 051b86 tst.b src=None dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t = rd8((a0 + 0x2DU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B8A: ;
    ITR(0x51B8AU, 8);
    { /* 051B8A 051b8a bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B92;
    }
L_051B8C: ;
    ITR(0x51B8CU, 20);
    { /* 051B8C 051b8c bchg.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B92: ;
    ITR(0x51B92U, 4);
    { /* 051B92 051b92 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B94: ;
    ITR(0x51B94U, 16);
    { /* 051B94 051b94 btst.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B9A: ;
    ITR(0x51B9AU, 8);
    { /* 051B9A 051b9a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA0;
    }
L_051B9C: ;
    ITR(0x51B9CU, 4);
    { /* 051B9C 051b9c add.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B9E: ;
    ITR(0x51B9EU, 10);
    { /* 051B9E 051b9e bra src=None dst=None cc=0 */
        goto L_051BA2;
    }
L_051BA0: ;
    ITR(0x51BA0U, 4);
    { /* 051BA0 051ba0 sub.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051BA2: ;
    ITR(0x51BA2U, 12);
    { /* 051BA2 051ba2 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051BA6: ;
    ITR(0x51BA6U, 12);
    { /* 051BA6 051ba6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BAA: ;
    ITR(0x51BAAU, 8);
    { /* 051BAA 051baa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BB0;
    }
L_051BAC: ;
    ITR(0x51BACU, 12);
    { /* 051BAC 051bac move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051BB0: ;
    ITR(0x51BB0U, 16);
    { /* 051BB0 051bb0 subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x2BU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BB4: ;
    ITR(0x51BB4U, 8);
    { /* 051BB4 051bb4 bcc src=None dst=None cc=4 */
        if (COND_4) goto L_051BE2;
    }
L_051BB6: ;
    ITR(0x51BB6U, 20);
    { /* 051BB6 051bb6 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051BBC: ;
    ITR(0x51BBCU, 16);
    { /* 051BBC 051bbc movea.l src=EA(d16 r=0 d=38 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x26U));
    }
L_051BC0: ;
    ITR(0x51BC0U, 8);
    { /* 051BC0 051bc0 move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051BC2: ;
    ITR(0x51BC2U, 8);
    { /* 051BC2 051bc2 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BC8;
    }
L_051BC4: ;
    ITR(0x51BC4U, 20);
    { /* 051BC4 051bc4 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051BC8: ;
    ITR(0x51BC8U, 8);
    { /* 051BC8 051bc8 andi.w src=EA(imm r=0 d=0 v=7f) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x7FU;
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_051BCC: ;
    ITR(0x51BCCU, 12);
    { /* 051BCC 051bcc move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051BD0: ;
    ITR(0x51BD0U, 70);
    { /* 051BD0 051bd0 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051BD2: ;
    ITR(0x51BD2U, 18);
    { /* 051BD2 051bd2 lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051BD4: ;
    ITR(0x51BD4U, 12);
    { /* 051BD4 051bd4 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051BD8: ;
    ITR(0x51BD8U, 12);
    { /* 051BD8 051bd8 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BDC: ;
    ITR(0x51BDCU, 8);
    { /* 051BDC 051bdc bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BE2;
    }
L_051BDE: ;
    ITR(0x51BDEU, 12);
    { /* 051BDE 051bde move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051BE2: ;
    ITR(0x51BE2U, 10);
    { /* 051BE2 051be2 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51AE6U); goto L_051AE6; }
    }
L_051BE6: ;
    ITR(0x51BE6U, 8);
    { /* 051BE6 051be6 cmp.b src=EA(imm r=0 d=0 v=e0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xE0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BEA: ;
    ITR(0x51BEAU, 8);
    { /* 051BEA 051bea bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051BFC;
    }
L_051BEC: ;
    ITR(0x51BECU, 8);
    { /* 051BEC 051bec subi.b src=EA(imm r=0 d=0 v=df) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xDFU;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051BF0: ;
    ITR(0x51BF0U, 78);
    { /* 051BF0 051bf0 mulu.w src=EA(pcd r=0 d=0 v=51d82) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * rd16(0x51D82U);
        d0 = t1;
        }
    }
L_051BF4: ;
    ITR(0x51BF4U, 12);
    { /* 051BF4 051bf4 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=28 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a0 + 0x1CU), t1);
        }
    }
L_051BF8: ;
    ITR(0x51BF8U, 10);
    { /* 051BF8 051bf8 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051BFC: ;
    ITR(0x51BFCU, 8);
    { /* 051BFC 051bfc cmp.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C00: ;
    ITR(0x51C00U, 8);
    { /* 051C00 051c00 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C18;
    }
L_051C02: ;
    ITR(0x51C02U, 8);
    { /* 051C02 051c02 subi.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C06: ;
    ITR(0x51C06U, 8);
    { /* 051C06 051c06 lea.l src=EA(pcd r=0 d=0 v=51f3c) dst=EA(an r=5 d=0 v=0) */
        a5 = 0x51F3CU;
    }
L_051C0A: ;
    ITR(0x51C0AU, 74);
    { /* 051C0A 051c0a mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_051C0E: ;
    ITR(0x51C0EU, 8);
    { /* 051C0E 051c0e adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 += SX16((d0 & 0xFFFF));
    }
L_051C10: ;
    ITR(0x51C10U, 20);
    { /* 051C10 051c10 move.l src=EA(an r=5 d=0 v=0) dst=EA(d16 r=0 d=24 v=0) */
        { uint32_t t1 = a5;
        wr32((a0 + 0x18U), t1);
        }
    }
L_051C14: ;
    ITR(0x51C14U, 10);
    { /* 051C14 051c14 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C18: ;
    ITR(0x51C18U, 8);
    { /* 051C18 051c18 cmp.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C1C: ;
    ITR(0x51C1CU, 8);
    { /* 051C1C 051c1c bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C3C;
    }
L_051C1E: ;
    ITR(0x51C1EU, 8);
    { /* 051C1E 051c1e subi.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C22: ;
    ITR(0x51C22U, 4);
    { /* 051C22 051c22 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C24: ;
    ITR(0x51C24U, 8);
    { /* 051C24 051c24 lea.l src=EA(pcd r=0 d=0 v=52f1e) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x52F1EU;
    }
L_051C28: ;
    ITR(0x51C28U, 14);
    { /* 051C28 051c28 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C2C: ;
    ITR(0x51C2CU, 6);
    { /* 051C2C 051c2c adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C2E: ;
    ITR(0x51C2EU, 20);
    { /* 051C2E 051c2e move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=34 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x22U), t1);
        }
    }
L_051C32: ;
    ITR(0x51C32U, 20);
    { /* 051C32 051c32 move.b src=EA(d16 r=2 d=-1 v=0) dst=EA(d16 r=0 d=42 v=0) */
        { uint32_t t1 = rd8((a2 + 0xFFFFFFFFU));
        wr8((a0 + 0x2AU), t1);
        }
    }
L_051C38: ;
    ITR(0x51C38U, 10);
    { /* 051C38 051c38 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C3C: ;
    ITR(0x51C3CU, 8);
    { /* 051C3C 051c3c cmp.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C40: ;
    ITR(0x51C40U, 8);
    { /* 051C40 051c40 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C5E;
    }
L_051C42: ;
    ITR(0x51C42U, 8);
    { /* 051C42 051c42 subi.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C46: ;
    ITR(0x51C46U, 4);
    { /* 051C46 051c46 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C48: ;
    ITR(0x51C48U, 8);
    { /* 051C48 051c48 lea.l src=EA(pcd r=0 d=0 v=51eea) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51EEAU;
    }
L_051C4C: ;
    ITR(0x51C4CU, 14);
    { /* 051C4C 051c4c movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C50: ;
    ITR(0x51C50U, 6);
    { /* 051C50 051c50 adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C52: ;
    ITR(0x51C52U, 20);
    { /* 051C52 051c52 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=12 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0xCU), t1);
        }
    }
L_051C56: ;
    ITR(0x51C56U, 20);
    { /* 051C56 051c56 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051C5A: ;
    ITR(0x51C5AU, 10);
    { /* 051C5A 051c5a bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C5E: ;
    ITR(0x51C5EU, 4);
    { /* 051C5E 051c5e add.b src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_051C60: ;
    ITR(0x51C60U, 8);
    { /* 051C60 051c60 lea.l src=EA(pcd r=0 d=0 v=51d6a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51D6AU;
    }
L_051C64: ;
    ITR(0x51C64U, 14);
    { /* 051C64 051c64 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C68: ;
    ITR(0x51C68U, 14);
    { /* 051C68 051c68 jmp src=EA(idx r=3 d=0 v=0) dst=None */
        { call_dynamic((a3 + 0x0U + ((uint32_t)(int32_t)(int16_t)a2))); return; }
    }
L_051D50: ;
    ITR(0x51D50U, 8);
    { /* 051D50 051d50 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d0, t1);
        }
    }
L_051D52: ;
    ITR(0x51D52U, 4);
    { /* 051D52 051d52 ext.w src=None dst=EA(dn r=0 d=0 v=0) */
        SETW(d0, SX8(d0));
    }
L_051D54: ;
    ITR(0x51D54U, 12);
    { /* 051D54 051d54 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=3 d=1568 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a3 + 0x620U), t1);
        }
    }
L_051D58: ;
    ITR(0x51D58U, 10);
    { /* 051D58 051d58 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_052A44: ;
    ITR(0x52A44U, 8);
    { /* 052A44 052a44 lea.l src=EA(pcd r=0 d=0 v=52b9c) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52B9CU;
    }
L_052A48: ;
    ITR(0x52A48U, 12);
    { /* 052A48 052a48 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A4C: ;
    ITR(0x52A4CU, 8);
    { /* 052A4C 052a4c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A5C;
    }
L_052A4E: ;
    ITR(0x52A4EU, 12);
    { /* 052A4E 052a4e lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF000U;
    }
L_052A54: ;
    ITR(0x52A54U, 4);
    { /* 052A54 052a54 moveq.l src=EA(imm r=0 d=0 v=1) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x1U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A56: ;
    ITR(0x52A56U, 8);
    { /* 052A56 052a56 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_052A5A: ;
    ITR(0x52A5AU, 18);
    { /* 052A5A 052a5a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A5CU);
    }
L_052A5C: ;
    ITR(0x52A5CU, 8);
    { /* 052A5C 052a5c lea.l src=EA(pcd r=0 d=0 v=52bc0) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BC0U;
    }
L_052A60: ;
    ITR(0x52A60U, 12);
    { /* 052A60 052a60 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A64: ;
    ITR(0x52A64U, 8);
    { /* 052A64 052a64 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A74;
    }
L_052A66: ;
    ITR(0x52A66U, 12);
    { /* 052A66 052a66 lea.l src=EA(absl r=0 d=0 v=dff010) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF010U;
    }
L_052A6C: ;
    ITR(0x52A6CU, 4);
    { /* 052A6C 052a6c moveq.l src=EA(imm r=0 d=0 v=2) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x2U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A6E: ;
    ITR(0x52A6EU, 8);
    { /* 052A6E 052a6e lea.l src=EA(pcd r=0 d=0 v=52c3a) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C3AU;
    }
L_052A72: ;
    ITR(0x52A72U, 18);
    { /* 052A72 052a72 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A74U);
    }
L_052A74: ;
    ITR(0x52A74U, 8);
    { /* 052A74 052a74 lea.l src=EA(pcd r=0 d=0 v=52be4) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BE4U;
    }
L_052A78: ;
    ITR(0x52A78U, 12);
    { /* 052A78 052a78 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A7C: ;
    ITR(0x52A7CU, 8);
    { /* 052A7C 052a7c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A8C;
    }
L_052A7E: ;
    ITR(0x52A7EU, 12);
    { /* 052A7E 052a7e lea.l src=EA(absl r=0 d=0 v=dff020) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF020U;
    }
L_052A84: ;
    ITR(0x52A84U, 4);
    { /* 052A84 052a84 moveq.l src=EA(imm r=0 d=0 v=4) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x4U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A86: ;
    ITR(0x52A86U, 8);
    { /* 052A86 052a86 lea.l src=EA(pcd r=0 d=0 v=52c46) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C46U;
    }
L_052A8A: ;
    ITR(0x52A8AU, 18);
    { /* 052A8A 052a8a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A8CU);
    }
L_052A8C: ;
    ITR(0x52A8CU, 8);
    { /* 052A8C 052a8c lea.l src=EA(pcd r=0 d=0 v=52c08) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52C08U;
    }
L_052A90: ;
    ITR(0x52A90U, 12);
    { /* 052A90 052a90 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A94: ;
    ITR(0x52A94U, 8);
    { /* 052A94 052a94 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052AA4;
    }
L_052A96: ;
    ITR(0x52A96U, 12);
    { /* 052A96 052a96 lea.l src=EA(absl r=0 d=0 v=dff030) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF030U;
    }
L_052A9C: ;
    ITR(0x52A9CU, 4);
    { /* 052A9C 052a9c moveq.l src=EA(imm r=0 d=0 v=8) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x8U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A9E: ;
    ITR(0x52A9EU, 8);
    { /* 052A9E 052a9e lea.l src=EA(pcd r=0 d=0 v=52c52) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C52U;
    }
L_052AA2: ;
    ITR(0x52AA2U, 18);
    { /* 052AA2 052aa2 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52AA4U);
    }
L_052AA4: ;
    ITR(0x52AA4U, 16);
    { /* 052AA4 052aa4 rts src=None dst=None */
        RTS();
    }
}

void dwam_051D5C(void)
{
    FN_ENTER(0x51D5CU);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x51912U: goto L_051912;
        case 0x519A0U: goto L_0519A0;
        case 0x519A4U: goto L_0519A4;
        case 0x519A6U: goto L_0519A6;
        case 0x519AAU: goto L_0519AA;
        case 0x519ACU: goto L_0519AC;
        case 0x519B0U: goto L_0519B0;
        case 0x519B6U: goto L_0519B6;
        case 0x519BAU: goto L_0519BA;
        case 0x519BCU: goto L_0519BC;
        case 0x519C0U: goto L_0519C0;
        case 0x519C2U: goto L_0519C2;
        case 0x519C4U: goto L_0519C4;
        case 0x519C6U: goto L_0519C6;
        case 0x519C8U: goto L_0519C8;
        case 0x519CCU: goto L_0519CC;
        case 0x519D0U: goto L_0519D0;
        case 0x519D4U: goto L_0519D4;
        case 0x519D6U: goto L_0519D6;
        case 0x519DAU: goto L_0519DA;
        case 0x519DEU: goto L_0519DE;
        case 0x519E0U: goto L_0519E0;
        case 0x519E4U: goto L_0519E4;
        case 0x519E6U: goto L_0519E6;
        case 0x519E8U: goto L_0519E8;
        case 0x519ECU: goto L_0519EC;
        case 0x519EEU: goto L_0519EE;
        case 0x519F2U: goto L_0519F2;
        case 0x519F6U: goto L_0519F6;
        case 0x519FAU: goto L_0519FA;
        case 0x519FCU: goto L_0519FC;
        case 0x51A00U: goto L_051A00;
        case 0x51A04U: goto L_051A04;
        case 0x51A06U: goto L_051A06;
        case 0x51A0CU: goto L_051A0C;
        case 0x51A12U: goto L_051A12;
        case 0x51A16U: goto L_051A16;
        case 0x51A18U: goto L_051A18;
        case 0x51A1EU: goto L_051A1E;
        case 0x51A24U: goto L_051A24;
        case 0x51A28U: goto L_051A28;
        case 0x51A2AU: goto L_051A2A;
        case 0x51A30U: goto L_051A30;
        case 0x51A34U: goto L_051A34;
        case 0x51A38U: goto L_051A38;
        case 0x51A3AU: goto L_051A3A;
        case 0x51A3EU: goto L_051A3E;
        case 0x51A40U: goto L_051A40;
        case 0x51A42U: goto L_051A42;
        case 0x51A44U: goto L_051A44;
        case 0x51A4AU: goto L_051A4A;
        case 0x51A4EU: goto L_051A4E;
        case 0x51A52U: goto L_051A52;
        case 0x51A54U: goto L_051A54;
        case 0x51A56U: goto L_051A56;
        case 0x51A5AU: goto L_051A5A;
        case 0x51A5EU: goto L_051A5E;
        case 0x51A62U: goto L_051A62;
        case 0x51A66U: goto L_051A66;
        case 0x51A6AU: goto L_051A6A;
        case 0x51A6CU: goto L_051A6C;
        case 0x51A70U: goto L_051A70;
        case 0x51A76U: goto L_051A76;
        case 0x51A78U: goto L_051A78;
        case 0x51A7EU: goto L_051A7E;
        case 0x51A84U: goto L_051A84;
        case 0x51A88U: goto L_051A88;
        case 0x51A8AU: goto L_051A8A;
        case 0x51A8CU: goto L_051A8C;
        case 0x51A90U: goto L_051A90;
        case 0x51A94U: goto L_051A94;
        case 0x51A96U: goto L_051A96;
        case 0x51A9CU: goto L_051A9C;
        case 0x51AA2U: goto L_051AA2;
        case 0x51AA6U: goto L_051AA6;
        case 0x51AAAU: goto L_051AAA;
        case 0x51AAEU: goto L_051AAE;
        case 0x51AB2U: goto L_051AB2;
        case 0x51AB4U: goto L_051AB4;
        case 0x51AB6U: goto L_051AB6;
        case 0x51ABAU: goto L_051ABA;
        case 0x51ABCU: goto L_051ABC;
        case 0x51ABEU: goto L_051ABE;
        case 0x51AC2U: goto L_051AC2;
        case 0x51AC6U: goto L_051AC6;
        case 0x51AC8U: goto L_051AC8;
        case 0x51ACCU: goto L_051ACC;
        case 0x51AD0U: goto L_051AD0;
        case 0x51AD4U: goto L_051AD4;
        case 0x51ADAU: goto L_051ADA;
        case 0x51ADEU: goto L_051ADE;
        case 0x51AE0U: goto L_051AE0;
        case 0x51AE6U: goto L_051AE6;
        case 0x51AE8U: goto L_051AE8;
        case 0x51AECU: goto L_051AEC;
        case 0x51AF0U: goto L_051AF0;
        case 0x51AF4U: goto L_051AF4;
        case 0x51AF8U: goto L_051AF8;
        case 0x51AFCU: goto L_051AFC;
        case 0x51B00U: goto L_051B00;
        case 0x51B04U: goto L_051B04;
        case 0x51B06U: goto L_051B06;
        case 0x51B0AU: goto L_051B0A;
        case 0x51B0CU: goto L_051B0C;
        case 0x51B10U: goto L_051B10;
        case 0x51B14U: goto L_051B14;
        case 0x51B16U: goto L_051B16;
        case 0x51B1AU: goto L_051B1A;
        case 0x51B1EU: goto L_051B1E;
        case 0x51B22U: goto L_051B22;
        case 0x51B24U: goto L_051B24;
        case 0x51B26U: goto L_051B26;
        case 0x51B2AU: goto L_051B2A;
        case 0x51B2CU: goto L_051B2C;
        case 0x51B2EU: goto L_051B2E;
        case 0x51B34U: goto L_051B34;
        case 0x51B36U: goto L_051B36;
        case 0x51B3AU: goto L_051B3A;
        case 0x51B3CU: goto L_051B3C;
        case 0x51B40U: goto L_051B40;
        case 0x51B42U: goto L_051B42;
        case 0x51B46U: goto L_051B46;
        case 0x51B48U: goto L_051B48;
        case 0x51B4CU: goto L_051B4C;
        case 0x51B50U: goto L_051B50;
        case 0x51B54U: goto L_051B54;
        case 0x51B56U: goto L_051B56;
        case 0x51B58U: goto L_051B58;
        case 0x51B5CU: goto L_051B5C;
        case 0x51B60U: goto L_051B60;
        case 0x51B64U: goto L_051B64;
        case 0x51B68U: goto L_051B68;
        case 0x51B6AU: goto L_051B6A;
        case 0x51B70U: goto L_051B70;
        case 0x51B72U: goto L_051B72;
        case 0x51B76U: goto L_051B76;
        case 0x51B7AU: goto L_051B7A;
        case 0x51B7EU: goto L_051B7E;
        case 0x51B80U: goto L_051B80;
        case 0x51B86U: goto L_051B86;
        case 0x51B8AU: goto L_051B8A;
        case 0x51B8CU: goto L_051B8C;
        case 0x51B92U: goto L_051B92;
        case 0x51B94U: goto L_051B94;
        case 0x51B9AU: goto L_051B9A;
        case 0x51B9CU: goto L_051B9C;
        case 0x51B9EU: goto L_051B9E;
        case 0x51BA0U: goto L_051BA0;
        case 0x51BA2U: goto L_051BA2;
        case 0x51BA6U: goto L_051BA6;
        case 0x51BAAU: goto L_051BAA;
        case 0x51BACU: goto L_051BAC;
        case 0x51BB0U: goto L_051BB0;
        case 0x51BB4U: goto L_051BB4;
        case 0x51BB6U: goto L_051BB6;
        case 0x51BBCU: goto L_051BBC;
        case 0x51BC0U: goto L_051BC0;
        case 0x51BC2U: goto L_051BC2;
        case 0x51BC4U: goto L_051BC4;
        case 0x51BC8U: goto L_051BC8;
        case 0x51BCCU: goto L_051BCC;
        case 0x51BD0U: goto L_051BD0;
        case 0x51BD2U: goto L_051BD2;
        case 0x51BD4U: goto L_051BD4;
        case 0x51BD8U: goto L_051BD8;
        case 0x51BDCU: goto L_051BDC;
        case 0x51BDEU: goto L_051BDE;
        case 0x51BE2U: goto L_051BE2;
        case 0x51BE6U: goto L_051BE6;
        case 0x51BEAU: goto L_051BEA;
        case 0x51BECU: goto L_051BEC;
        case 0x51BF0U: goto L_051BF0;
        case 0x51BF4U: goto L_051BF4;
        case 0x51BF8U: goto L_051BF8;
        case 0x51BFCU: goto L_051BFC;
        case 0x51C00U: goto L_051C00;
        case 0x51C02U: goto L_051C02;
        case 0x51C06U: goto L_051C06;
        case 0x51C0AU: goto L_051C0A;
        case 0x51C0EU: goto L_051C0E;
        case 0x51C10U: goto L_051C10;
        case 0x51C14U: goto L_051C14;
        case 0x51C18U: goto L_051C18;
        case 0x51C1CU: goto L_051C1C;
        case 0x51C1EU: goto L_051C1E;
        case 0x51C22U: goto L_051C22;
        case 0x51C24U: goto L_051C24;
        case 0x51C28U: goto L_051C28;
        case 0x51C2CU: goto L_051C2C;
        case 0x51C2EU: goto L_051C2E;
        case 0x51C32U: goto L_051C32;
        case 0x51C38U: goto L_051C38;
        case 0x51C3CU: goto L_051C3C;
        case 0x51C40U: goto L_051C40;
        case 0x51C42U: goto L_051C42;
        case 0x51C46U: goto L_051C46;
        case 0x51C48U: goto L_051C48;
        case 0x51C4CU: goto L_051C4C;
        case 0x51C50U: goto L_051C50;
        case 0x51C52U: goto L_051C52;
        case 0x51C56U: goto L_051C56;
        case 0x51C5AU: goto L_051C5A;
        case 0x51C5EU: goto L_051C5E;
        case 0x51C60U: goto L_051C60;
        case 0x51C64U: goto L_051C64;
        case 0x51C68U: goto L_051C68;
        case 0x51D60U: goto L_051D60;
        case 0x51D66U: goto L_051D66;
        case 0x52A44U: goto L_052A44;
        case 0x52A48U: goto L_052A48;
        case 0x52A4CU: goto L_052A4C;
        case 0x52A4EU: goto L_052A4E;
        case 0x52A54U: goto L_052A54;
        case 0x52A56U: goto L_052A56;
        case 0x52A5AU: goto L_052A5A;
        case 0x52A5CU: goto L_052A5C;
        case 0x52A60U: goto L_052A60;
        case 0x52A64U: goto L_052A64;
        case 0x52A66U: goto L_052A66;
        case 0x52A6CU: goto L_052A6C;
        case 0x52A6EU: goto L_052A6E;
        case 0x52A72U: goto L_052A72;
        case 0x52A74U: goto L_052A74;
        case 0x52A78U: goto L_052A78;
        case 0x52A7CU: goto L_052A7C;
        case 0x52A7EU: goto L_052A7E;
        case 0x52A84U: goto L_052A84;
        case 0x52A86U: goto L_052A86;
        case 0x52A8AU: goto L_052A8A;
        case 0x52A8CU: goto L_052A8C;
        case 0x52A90U: goto L_052A90;
        case 0x52A94U: goto L_052A94;
        case 0x52A96U: goto L_052A96;
        case 0x52A9CU: goto L_052A9C;
        case 0x52A9EU: goto L_052A9E;
        case 0x52AA2U: goto L_052AA2;
        case 0x52AA4U: goto L_052AA4;
        default: break; } }
    goto L_051D5C;
L_051912: ;
    ITR(0x51912U, 10);
    { /* 051912 051912 bra src=None dst=None cc=0 */
        goto L_052A44;
    }
L_0519A0: ;
    ITR(0x519A0U, 8);
    { /* 0519A0 0519a0 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_0519A4: ;
    ITR(0x519A4U, 4);
    { /* 0519A4 0519a4 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519A6: ;
    ITR(0x519A6U, 74);
    { /* 0519A6 0519a6 mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_0519AA: ;
    ITR(0x519AAU, 8);
    { /* 0519AA 0519aa adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=4 d=0 v=0) */
        a4 += SX16((d0 & 0xFFFF));
    }
L_0519AC: ;
    ITR(0x519ACU, 13);
    { /* 0519AC 0519ac scc.b src=None dst=EA(d16 r=4 d=10 v=0) cc=0 */
        { uint32_t t2 = (a4 + 0xAU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519B0: ;
    ITR(0x519B0U, 12);
    { /* 0519B0 0519b0 lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=6 d=0 v=0) */
        a6 = 0xDFF000U;
    }
L_0519B6: ;
    ITR(0x519B6U, 8);
    { /* 0519B6 0519b6 move.w src=EA(imm r=0 d=0 v=30) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x30U;
        SETW(d0, t1);
        }
    }
L_0519BA: ;
    ITR(0x519BAU, 70);
    { /* 0519BA 0519ba mulu.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d7 & 0xFFFF);
        d0 = t1;
        }
    }
L_0519BC: ;
    ITR(0x519BCU, 8);
    { /* 0519BC 0519bc lea.l src=EA(pcd r=0 d=0 v=51d9a) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x51D9AU;
    }
L_0519C0: ;
    ITR(0x519C0U, 8);
    { /* 0519C0 0519c0 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 += SX16((d0 & 0xFFFF));
    }
L_0519C2: ;
    ITR(0x519C2U, 4);
    { /* 0519C2 0519c2 move.w src=EA(dn r=7 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF);
        SETW(d0, t1);
        }
    }
L_0519C4: ;
    ITR(0x519C4U, 14);
    { /* 0519C4 0519c4 lsl.w src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 1, (d0 & 0xFFFF), 4, 16);
        SETW(d0, t1);
        }
    }
L_0519C6: ;
    ITR(0x519C6U, 8);
    { /* 0519C6 0519c6 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=6 d=0 v=0) */
        a6 += SX16((d0 & 0xFFFF));
    }
L_0519C8: ;
    ITR(0x519C8U, 16);
    { /* 0519C8 0519c8 movea.l src=EA(d16 r=0 d=4 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x4U));
    }
L_0519CC: ;
    ITR(0x519CCU, 16);
    { /* 0519CC 0519cc movea.l src=EA(d16 r=0 d=24 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 = rd32((a0 + 0x18U));
    }
L_0519D0: ;
    ITR(0x519D0U, 12);
    { /* 0519D0 0519d0 tst.b src=None dst=EA(d16 r=0 d=22 v=0) */
        { uint32_t t = rd8((a0 + 0x16U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519D4: ;
    ITR(0x519D4U, 8);
    { /* 0519D4 0519d4 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_0519D6: ;
    ITR(0x519D6U, 13);
    { /* 0519D6 0519d6 scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=0 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0519DA: ;
    ITR(0x519DAU, 16);
    { /* 0519DA 0519da move.l src=EA(d16 r=5 d=4 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x4U));
        d0 = t1;
        FLAGS_LOGIC(t1, 0xFFFFFFFFU, 0x80000000U);
        }
    }
L_0519DE: ;
    ITR(0x519DEU, 8);
    { /* 0519DE 0519de bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051A06;
    }
L_0519E0: ;
    ITR(0x519E0U, 16);
    { /* 0519E0 0519e0 movea.l src=EA(d16 r=5 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a5 + 0x0U));
    }
L_0519E4: ;
    ITR(0x519E4U, 6);
    { /* 0519E4 0519e4 adda.l src=EA(dn r=0 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += d0;
    }
L_0519E6: ;
    ITR(0x519E6U, 10);
    { /* 0519E6 0519e6 lsr.l src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, 1, 32);
        d0 = t1;
        }
    }
L_0519E8: ;
    ITR(0x519E8U, 12);
    { /* 0519E8 0519e8 move.w src=EA(d16 r=5 d=8 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        SETW(d1, t1);
        }
    }
L_0519EC: ;
    ITR(0x519ECU, 4);
    { /* 0519EC 0519ec sub.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_0519EE: ;
    ITR(0x519EEU, 20);
    { /* 0519EE 0519ee move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = a2;
        wr32((a4 + 0x0U), t1);
        }
    }
L_0519F2: ;
    ITR(0x519F2U, 12);
    { /* 0519F2 0519f2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x4U), t1);
        }
    }
L_0519F6: ;
    ITR(0x519F6U, 12);
    { /* 0519F6 0519f6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0519FA: ;
    ITR(0x519FAU, 8);
    { /* 0519FA 0519fa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A04;
    }
L_0519FC: ;
    ITR(0x519FCU, 20);
    { /* 0519FC 0519fc move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = a2;
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A00: ;
    ITR(0x51A00U, 12);
    { /* 051A00 051a00 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A04: ;
    ITR(0x51A04U, 10);
    { /* 051A04 051a04 bra src=None dst=None cc=0 */
        goto L_051A24;
    }
L_051A06: ;
    ITR(0x51A06U, 32);
    { /* 051A06 051a06 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A0C: ;
    ITR(0x51A0CU, 16);
    { /* 051A0C 051a0c move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A12: ;
    ITR(0x51A12U, 12);
    { /* 051A12 051a12 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A16: ;
    ITR(0x51A16U, 8);
    { /* 051A16 051a16 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A24;
    }
L_051A18: ;
    ITR(0x51A18U, 32);
    { /* 051A18 051a18 move.l src=EA(pcd r=0 d=0 v=51d92) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32(0x51D92U);
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A1E: ;
    ITR(0x51A1EU, 16);
    { /* 051A1E 051a1e move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051A24: ;
    ITR(0x51A24U, 16);
    { /* 051A24 051a24 subq.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        wr16(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A28: ;
    ITR(0x51A28U, 8);
    { /* 051A28 051a28 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4E;
    }
L_051A2A: ;
    ITR(0x51A2AU, 16);
    { /* 051A2A 051a2a cmpi.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x1EU);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051A30: ;
    ITR(0x51A30U, 8);
    { /* 051A30 051a30 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AF4;
    }
L_051A34: ;
    ITR(0x51A34U, 12);
    { /* 051A34 051a34 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A38: ;
    ITR(0x51A38U, 8);
    { /* 051A38 051a38 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051A4A;
    }
L_051A3A: ;
    ITR(0x51A3AU, 12);
    { /* 051A3A 051a3a cmpi.b src=EA(imm r=0 d=0 v=83) dst=EA(ind r=1 d=0 v=0) */
        { uint32_t t1 = 0x83U;
        uint32_t t4 = a1;
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051A3E: ;
    ITR(0x51A3EU, 8);
    { /* 051A3E 051a3e bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051A4A;
    }
L_051A40: ;
    ITR(0x51A40U, 4);
    { /* 051A40 051a40 clr.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, 0);
    }
L_051A42: ;
    ITR(0x51A42U, 8);
    { /* 051A42 051a42 bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051A44: ;
    ITR(0x51A44U, 16);
    { /* 051A44 051a44 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051A4A: ;
    ITR(0x51A4AU, 10);
    { /* 051A4A 051a4a bra src=None dst=None cc=0 */
        goto L_051AE6;
    }
L_051A4E: ;
    ITR(0x51A4EU, 16);
    { /* 051A4E 051a4e clr.b src=None dst=EA(d16 r=0 d=0 v=0) */
        wr8((a0 + 0x0U), 0);
    }
L_051A52: ;
    ITR(0x51A52U, 4);
    { /* 051A52 051a52 moveq.l src=EA(imm r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        d0 = 0x0U;
    }
L_051A54: ;
    ITR(0x51A54U, 8);
    { /* 051A54 051a54 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d0, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051A56: ;
    ITR(0x51A56U, 8);
    { /* 051A56 051a56 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BE6;
    }
L_051A5A: ;
    ITR(0x51A5AU, 12);
    { /* 051A5A 051a5a move.b src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=2 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        wr8((a0 + 0x2U), t1);
        }
    }
L_051A5E: ;
    ITR(0x51A5EU, 12);
    { /* 051A5E 051a5e add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A62: ;
    ITR(0x51A62U, 12);
    { /* 051A62 051a62 add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051A66: ;
    ITR(0x51A66U, 16);
    { /* 051A66 051a66 movea.l src=EA(d16 r=0 d=34 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x22U));
    }
L_051A6A: ;
    ITR(0x51A6AU, 8);
    { /* 051A6A 051a6a move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051A6C: ;
    ITR(0x51A6CU, 20);
    { /* 051A6C 051a6c move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051A70: ;
    ITR(0x51A70U, 20);
    { /* 051A70 051a70 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051A76: ;
    ITR(0x51A76U, 4);
    { /* 051A76 051a76 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051A78: ;
    ITR(0x51A78U, 32);
    { /* 051A78 051a78 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=4 d=0 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a4 + 0x0U), t1);
        }
    }
L_051A7E: ;
    ITR(0x51A7EU, 20);
    { /* 051A7E 051a7e move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=4 d=4 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a4 + 0x4U), t1);
        }
    }
L_051A84: ;
    ITR(0x51A84U, 12);
    { /* 051A84 051a84 move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051A88: ;
    ITR(0x51A88U, 70);
    { /* 051A88 051a88 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051A8A: ;
    ITR(0x51A8AU, 18);
    { /* 051A8A 051a8a lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051A8C: ;
    ITR(0x51A8CU, 12);
    { /* 051A8C 051a8c move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051A90: ;
    ITR(0x51A90U, 12);
    { /* 051A90 051a90 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051A94: ;
    ITR(0x51A94U, 8);
    { /* 051A94 051a94 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051AA6;
    }
L_051A96: ;
    ITR(0x51A96U, 32);
    { /* 051A96 051a96 move.l src=EA(d16 r=5 d=0 v=0) dst=EA(d16 r=6 d=160 v=0) */
        { uint32_t t1 = rd32((a5 + 0x0U));
        wr32((a6 + 0xA0U), t1);
        }
    }
L_051A9C: ;
    ITR(0x51A9CU, 20);
    { /* 051A9C 051a9c move.w src=EA(d16 r=5 d=8 v=0) dst=EA(d16 r=6 d=164 v=0) */
        { uint32_t t1 = rd16((a5 + 0x8U));
        wr16((a6 + 0xA4U), t1);
        }
    }
L_051AA2: ;
    ITR(0x51AA2U, 12);
    { /* 051AA2 051aa2 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051AA6: ;
    ITR(0x51AA6U, 8);
    { /* 051AA6 051aa6 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AAA: ;
    ITR(0x51AAAU, 8);
    { /* 051AAA 051aaa lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051AAE: ;
    ITR(0x51AAEU, 12);
    { /* 051AAE 051aae move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051AB2: ;
    ITR(0x51AB2U, 4);
    { /* 051AB2 051ab2 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051AB4: ;
    ITR(0x51AB4U, 4);
    { /* 051AB4 051ab4 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051AB6: ;
    ITR(0x51AB6U, 14);
    { /* 051AB6 051ab6 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051ABA: ;
    ITR(0x51ABAU, 70);
    { /* 051ABA 051aba mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051ABC: ;
    ITR(0x51ABCU, 16);
    { /* 051ABC 051abc lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051ABE: ;
    ITR(0x51ABEU, 12);
    { /* 051ABE 051abe move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051AC2: ;
    ITR(0x51AC2U, 12);
    { /* 051AC2 051ac2 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051AC6: ;
    ITR(0x51AC6U, 8);
    { /* 051AC6 051ac6 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051ACC;
    }
L_051AC8: ;
    ITR(0x51AC8U, 12);
    { /* 051AC8 051ac8 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051ACC: ;
    ITR(0x51ACCU, 13);
    { /* 051ACC 051acc scc.b src=None dst=EA(d16 r=0 d=22 v=0) cc=1 */
        { uint32_t t2 = (a0 + 0x16U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_051AD0: ;
    ITR(0x51AD0U, 20);
    { /* 051AD0 051ad0 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=4 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x4U), t1);
        }
    }
L_051AD4: ;
    ITR(0x51AD4U, 20);
    { /* 051AD4 051ad4 move.w src=EA(d16 r=0 d=28 v=0) dst=EA(d16 r=0 d=30 v=0) */
        { uint32_t t1 = rd16((a0 + 0x1CU));
        wr16((a0 + 0x1EU), t1);
        }
    }
L_051ADA: ;
    ITR(0x51ADAU, 8);
    { /* 051ADA 051ada move.w src=EA(imm r=0 d=0 v=8200) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x8200U;
        SETW(d1, t1);
        }
    }
L_051ADE: ;
    ITR(0x51ADEU, 8);
    { /* 051ADE 051ade bset.l src=EA(dn r=7 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d7) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 | (1u << t1);
        }
    }
L_051AE0: ;
    ITR(0x51AE0U, 16);
    { /* 051AE0 051ae0 move.w src=EA(dn r=1 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_051AE6: ;
    ITR(0x51AE6U, 4);
    { /* 051AE6 051ae6 addq.w src=EA(imm r=0 d=0 v=1) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d7, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFFFU, 0x8000U, 1);
        }
    }
L_051AE8: ;
    ITR(0x51AE8U, 8);
    { /* 051AE8 051ae8 cmp.w src=EA(imm r=0 d=0 v=4) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = 0x4U;
        uint32_t t2 = (d7 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_051AEC: ;
    ITR(0x51AECU, 10);
    { /* 051AEC 051aec bcc src=None dst=None cc=6 */
        if (COND_6) { BUDGET_CHECK(0x519A0U); goto L_0519A0; }
    }
L_051AF0: ;
    ITR(0x51AF0U, 10);
    { /* 051AF0 051af0 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51912U); goto L_051912; }
    }
L_051AF4: ;
    ITR(0x51AF4U, 12);
    { /* 051AF4 051af4 move.b src=EA(d16 r=0 d=2 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2U));
        SETB(d0, t1);
        }
    }
L_051AF8: ;
    ITR(0x51AF8U, 12);
    { /* 051AF8 051af8 add.b src=EA(pcd r=0 d=0 v=51d8f) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8(0x51D8FU);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051AFC: ;
    ITR(0x51AFCU, 12);
    { /* 051AFC 051afc add.b src=EA(d16 r=0 d=3 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x3U));
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B00: ;
    ITR(0x51B00U, 16);
    { /* 051B00 051b00 movea.l src=EA(d16 r=0 d=16 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0x10U));
    }
L_051B04: ;
    ITR(0x51B04U, 8);
    { /* 051B04 051b04 move.b src=EA(post r=1 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        }
    }
L_051B06: ;
    ITR(0x51B06U, 12);
    { /* 051B06 051b06 bclr.l src=EA(imm r=0 d=0 v=7) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (0x7U) & 31;
        uint32_t t2 = d1;
        fz = !((t2 >> t1) & 1);
        d1 = t2 & ~(1u << t1);
        }
    }
L_051B0A: ;
    ITR(0x51B0AU, 8);
    { /* 051B0A 051b0a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B10;
    }
L_051B0C: ;
    ITR(0x51B0CU, 16);
    { /* 051B0C 051b0c movea.l src=EA(d16 r=0 d=12 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32((a0 + 0xCU));
    }
L_051B10: ;
    ITR(0x51B10U, 20);
    { /* 051B10 051b10 move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051B14: ;
    ITR(0x51B14U, 4);
    { /* 051B14 051b14 add.b src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051B16: ;
    ITR(0x51B16U, 8);
    { /* 051B16 051b16 andi.w src=EA(imm r=0 d=0 v=ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xFFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B1A: ;
    ITR(0x51B1AU, 8);
    { /* 051B1A 051b1a lea.l src=EA(pcd r=0 d=0 v=51e5a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51E5AU;
    }
L_051B1E: ;
    ITR(0x51B1EU, 12);
    { /* 051B1E 051b1e move.w src=EA(d16 r=5 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a5 + 0xAU));
        SETW(d1, t1);
        }
    }
L_051B22: ;
    ITR(0x51B22U, 4);
    { /* 051B22 051b22 moveq.l src=EA(imm r=0 d=0 v=a) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0xAU;
    }
L_051B24: ;
    ITR(0x51B24U, 4);
    { /* 051B24 051b24 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B26: ;
    ITR(0x51B26U, 14);
    { /* 051B26 051b26 move.w src=EA(idx r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0)));
        SETW(d0, t1);
        }
    }
L_051B2A: ;
    ITR(0x51B2AU, 70);
    { /* 051B2A 051b2a mulu.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * (d1 & 0xFFFF);
        d0 = t1;
        }
    }
L_051B2C: ;
    ITR(0x51B2CU, 16);
    { /* 051B2C 051b2c lsr.l src=EA(dn r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d0, d2 & 63, 32);
        d0 = t1;
        }
    }
L_051B2E: ;
    ITR(0x51B2EU, 16);
    { /* 051B2E 051b2e btst.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=0 v=0) */
        { uint32_t t1 = (0x1U) & 7;
        uint32_t t3 = (a0 + 0x0U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B34: ;
    ITR(0x51B34U, 8);
    { /* 051B34 051b34 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B50;
    }
L_051B36: ;
    ITR(0x51B36U, 12);
    { /* 051B36 051b36 tst.b src=None dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t = rd8((a0 + 0x15U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B3A: ;
    ITR(0x51B3AU, 8);
    { /* 051B3A 051b3a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051B42;
    }
L_051B3C: ;
    ITR(0x51B3CU, 16);
    { /* 051B3C 051b3c subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=21 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x15U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        }
    }
L_051B40: ;
    ITR(0x51B40U, 10);
    { /* 051B40 051b40 bra src=None dst=None cc=0 */
        goto L_051B50;
    }
L_051B42: ;
    ITR(0x51B42U, 12);
    { /* 051B42 051b42 move.b src=EA(d16 r=0 d=20 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x14U));
        SETB(d1, t1);
        }
    }
L_051B46: ;
    ITR(0x51B46U, 4);
    { /* 051B46 051b46 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B48: ;
    ITR(0x51B48U, 16);
    { /* 051B48 051b48 add.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=32 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t4 = (a0 + 0x20U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        wr16(t4, t3);
        }
    }
L_051B4C: ;
    ITR(0x51B4CU, 12);
    { /* 051B4C 051b4c sub.w src=EA(d16 r=0 d=32 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd16((a0 + 0x20U));
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B50: ;
    ITR(0x51B50U, 12);
    { /* 051B50 051b50 tst.b src=None dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t = rd8((a0 + 0x1U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B54: ;
    ITR(0x51B54U, 8);
    { /* 051B54 051b54 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA2;
    }
L_051B56: ;
    ITR(0x51B56U, 8);
    { /* 051B56 051b56 bcc src=None dst=None cc=10 */
        if (COND_10) goto L_051B72;
    }
L_051B58: ;
    ITR(0x51B58U, 12);
    { /* 051B58 051b58 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B5C: ;
    ITR(0x51B5CU, 12);
    { /* 051B5C 051b5c add.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B60: ;
    ITR(0x51B60U, 12);
    { /* 051B60 051b60 move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        }
    }
L_051B64: ;
    ITR(0x51B64U, 12);
    { /* 051B64 051b64 cmp.b src=EA(d16 r=0 d=46 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2EU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051B68: ;
    ITR(0x51B68U, 8);
    { /* 051B68 051b68 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B6A: ;
    ITR(0x51B6AU, 20);
    { /* 051B6A 051b6a bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B70: ;
    ITR(0x51B70U, 10);
    { /* 051B70 051b70 bra src=None dst=None cc=0 */
        goto L_051B86;
    }
L_051B72: ;
    ITR(0x51B72U, 12);
    { /* 051B72 051b72 move.b src=EA(d16 r=0 d=45 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2DU));
        SETB(d1, t1);
        }
    }
L_051B76: ;
    ITR(0x51B76U, 12);
    { /* 051B76 051b76 sub.b src=EA(d16 r=0 d=44 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2CU));
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d1, t3);
        }
    }
L_051B7A: ;
    ITR(0x51B7AU, 12);
    { /* 051B7A 051b7a move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a0 + 0x2DU), t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051B7E: ;
    ITR(0x51B7EU, 8);
    { /* 051B7E 051b7e bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B86;
    }
L_051B80: ;
    ITR(0x51B80U, 20);
    { /* 051B80 051b80 bchg.b src=EA(imm r=0 d=0 v=7) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x7U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B86: ;
    ITR(0x51B86U, 12);
    { /* 051B86 051b86 tst.b src=None dst=EA(d16 r=0 d=45 v=0) */
        { uint32_t t = rd8((a0 + 0x2DU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051B8A: ;
    ITR(0x51B8AU, 8);
    { /* 051B8A 051b8a bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051B92;
    }
L_051B8C: ;
    ITR(0x51B8CU, 20);
    { /* 051B8C 051b8c bchg.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 ^ (1u << t1));
        }
    }
L_051B92: ;
    ITR(0x51B92U, 4);
    { /* 051B92 051b92 ext.w src=None dst=EA(dn r=1 d=0 v=0) */
        SETW(d1, SX8(d1));
    }
L_051B94: ;
    ITR(0x51B94U, 16);
    { /* 051B94 051b94 btst.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=0 d=1 v=0) */
        { uint32_t t1 = (0x0U) & 7;
        uint32_t t3 = (a0 + 0x1U);
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        }
    }
L_051B9A: ;
    ITR(0x51B9AU, 8);
    { /* 051B9A 051b9a bcc src=None dst=None cc=7 */
        if (COND_7) goto L_051BA0;
    }
L_051B9C: ;
    ITR(0x51B9CU, 4);
    { /* 051B9C 051b9c add.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051B9E: ;
    ITR(0x51B9EU, 10);
    { /* 051B9E 051b9e bra src=None dst=None cc=0 */
        goto L_051BA2;
    }
L_051BA0: ;
    ITR(0x51BA0U, 4);
    { /* 051BA0 051ba0 sub.w src=EA(dn r=1 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051BA2: ;
    ITR(0x51BA2U, 12);
    { /* 051BA2 051ba2 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=4 d=6 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a4 + 0x6U), t1);
        }
    }
L_051BA6: ;
    ITR(0x51BA6U, 12);
    { /* 051BA6 051ba6 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BAA: ;
    ITR(0x51BAAU, 8);
    { /* 051BAA 051baa bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BB0;
    }
L_051BAC: ;
    ITR(0x51BACU, 12);
    { /* 051BAC 051bac move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=6 d=166 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a6 + 0xA6U), t1);
        }
    }
L_051BB0: ;
    ITR(0x51BB0U, 16);
    { /* 051BB0 051bb0 subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a0 + 0x2BU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BB4: ;
    ITR(0x51BB4U, 8);
    { /* 051BB4 051bb4 bcc src=None dst=None cc=4 */
        if (COND_4) goto L_051BE2;
    }
L_051BB6: ;
    ITR(0x51BB6U, 20);
    { /* 051BB6 051bb6 move.b src=EA(d16 r=0 d=42 v=0) dst=EA(d16 r=0 d=43 v=0) */
        { uint32_t t1 = rd8((a0 + 0x2AU));
        wr8((a0 + 0x2BU), t1);
        }
    }
L_051BBC: ;
    ITR(0x51BBCU, 16);
    { /* 051BBC 051bbc movea.l src=EA(d16 r=0 d=38 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a0 + 0x26U));
    }
L_051BC0: ;
    ITR(0x51BC0U, 8);
    { /* 051BC0 051bc0 move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d1, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_051BC2: ;
    ITR(0x51BC2U, 8);
    { /* 051BC2 051bc2 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_051BC8;
    }
L_051BC4: ;
    ITR(0x51BC4U, 20);
    { /* 051BC4 051bc4 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=38 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x26U), t1);
        }
    }
L_051BC8: ;
    ITR(0x51BC8U, 8);
    { /* 051BC8 051bc8 andi.w src=EA(imm r=0 d=0 v=7f) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x7FU;
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d1, t3);
        }
    }
L_051BCC: ;
    ITR(0x51BCCU, 12);
    { /* 051BCC 051bcc move.w src=EA(pcd r=0 d=0 v=51d84) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = rd16(0x51D84U);
        SETW(d2, t1);
        }
    }
L_051BD0: ;
    ITR(0x51BD0U, 70);
    { /* 051BD0 051bd0 mulu.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF) * (d2 & 0xFFFF);
        d1 = t1;
        }
    }
L_051BD2: ;
    ITR(0x51BD2U, 18);
    { /* 051BD2 051bd2 lsr.w src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, (d1 & 0xFFFF), 6, 16);
        SETW(d1, t1);
        }
    }
L_051BD4: ;
    ITR(0x51BD4U, 12);
    { /* 051BD4 051bd4 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=4 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a4 + 0x8U), t1);
        }
    }
L_051BD8: ;
    ITR(0x51BD8U, 12);
    { /* 051BD8 051bd8 tst.b src=None dst=EA(d16 r=4 d=11 v=0) */
        { uint32_t t = rd8((a4 + 0xBU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_051BDC: ;
    ITR(0x51BDCU, 8);
    { /* 051BDC 051bdc bcc src=None dst=None cc=6 */
        if (COND_6) goto L_051BE2;
    }
L_051BDE: ;
    ITR(0x51BDEU, 12);
    { /* 051BDE 051bde move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=6 d=168 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a6 + 0xA8U), t1);
        }
    }
L_051BE2: ;
    ITR(0x51BE2U, 10);
    { /* 051BE2 051be2 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51AE6U); goto L_051AE6; }
    }
L_051BE6: ;
    ITR(0x51BE6U, 8);
    { /* 051BE6 051be6 cmp.b src=EA(imm r=0 d=0 v=e0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xE0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051BEA: ;
    ITR(0x51BEAU, 8);
    { /* 051BEA 051bea bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051BFC;
    }
L_051BEC: ;
    ITR(0x51BECU, 8);
    { /* 051BEC 051bec subi.b src=EA(imm r=0 d=0 v=df) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xDFU;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051BF0: ;
    ITR(0x51BF0U, 78);
    { /* 051BF0 051bf0 mulu.w src=EA(pcd r=0 d=0 v=51d82) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * rd16(0x51D82U);
        d0 = t1;
        }
    }
L_051BF4: ;
    ITR(0x51BF4U, 12);
    { /* 051BF4 051bf4 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=28 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a0 + 0x1CU), t1);
        }
    }
L_051BF8: ;
    ITR(0x51BF8U, 10);
    { /* 051BF8 051bf8 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051BFC: ;
    ITR(0x51BFCU, 8);
    { /* 051BFC 051bfc cmp.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C00: ;
    ITR(0x51C00U, 8);
    { /* 051C00 051c00 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C18;
    }
L_051C02: ;
    ITR(0x51C02U, 8);
    { /* 051C02 051c02 subi.b src=EA(imm r=0 d=0 v=b0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xB0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C06: ;
    ITR(0x51C06U, 8);
    { /* 051C06 051c06 lea.l src=EA(pcd r=0 d=0 v=51f3c) dst=EA(an r=5 d=0 v=0) */
        a5 = 0x51F3CU;
    }
L_051C0A: ;
    ITR(0x51C0AU, 74);
    { /* 051C0A 051c0a mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0xCU;
        d0 = t1;
        }
    }
L_051C0E: ;
    ITR(0x51C0EU, 8);
    { /* 051C0E 051c0e adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=5 d=0 v=0) */
        a5 += SX16((d0 & 0xFFFF));
    }
L_051C10: ;
    ITR(0x51C10U, 20);
    { /* 051C10 051c10 move.l src=EA(an r=5 d=0 v=0) dst=EA(d16 r=0 d=24 v=0) */
        { uint32_t t1 = a5;
        wr32((a0 + 0x18U), t1);
        }
    }
L_051C14: ;
    ITR(0x51C14U, 10);
    { /* 051C14 051c14 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C18: ;
    ITR(0x51C18U, 8);
    { /* 051C18 051c18 cmp.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C1C: ;
    ITR(0x51C1CU, 8);
    { /* 051C1C 051c1c bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C3C;
    }
L_051C1E: ;
    ITR(0x51C1EU, 8);
    { /* 051C1E 051c1e subi.b src=EA(imm r=0 d=0 v=a0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0xA0U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C22: ;
    ITR(0x51C22U, 4);
    { /* 051C22 051c22 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C24: ;
    ITR(0x51C24U, 8);
    { /* 051C24 051c24 lea.l src=EA(pcd r=0 d=0 v=52f1e) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x52F1EU;
    }
L_051C28: ;
    ITR(0x51C28U, 14);
    { /* 051C28 051c28 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C2C: ;
    ITR(0x51C2CU, 6);
    { /* 051C2C 051c2c adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C2E: ;
    ITR(0x51C2EU, 20);
    { /* 051C2E 051c2e move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=34 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x22U), t1);
        }
    }
L_051C32: ;
    ITR(0x51C32U, 20);
    { /* 051C32 051c32 move.b src=EA(d16 r=2 d=-1 v=0) dst=EA(d16 r=0 d=42 v=0) */
        { uint32_t t1 = rd8((a2 + 0xFFFFFFFFU));
        wr8((a0 + 0x2AU), t1);
        }
    }
L_051C38: ;
    ITR(0x51C38U, 10);
    { /* 051C38 051c38 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C3C: ;
    ITR(0x51C3CU, 8);
    { /* 051C3C 051c3c cmp.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_051C40: ;
    ITR(0x51C40U, 8);
    { /* 051C40 051c40 bcc src=None dst=None cc=13 */
        if (COND_13) goto L_051C5E;
    }
L_051C42: ;
    ITR(0x51C42U, 8);
    { /* 051C42 051c42 subi.b src=EA(imm r=0 d=0 v=90) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x90U;
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d0, t3);
        }
    }
L_051C46: ;
    ITR(0x51C46U, 4);
    { /* 051C46 051c46 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_051C48: ;
    ITR(0x51C48U, 8);
    { /* 051C48 051c48 lea.l src=EA(pcd r=0 d=0 v=51eea) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51EEAU;
    }
L_051C4C: ;
    ITR(0x51C4CU, 14);
    { /* 051C4C 051c4c movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C50: ;
    ITR(0x51C50U, 6);
    { /* 051C50 051c50 adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 += a3;
    }
L_051C52: ;
    ITR(0x51C52U, 20);
    { /* 051C52 051c52 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=12 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0xCU), t1);
        }
    }
L_051C56: ;
    ITR(0x51C56U, 20);
    { /* 051C56 051c56 move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=0 d=16 v=0) */
        { uint32_t t1 = a2;
        wr32((a0 + 0x10U), t1);
        }
    }
L_051C5A: ;
    ITR(0x51C5AU, 10);
    { /* 051C5A 051c5a bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_051C5E: ;
    ITR(0x51C5EU, 4);
    { /* 051C5E 051c5e add.b src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        uint32_t t2 = (d0 & 0xFF);
        uint32_t t3 = (t2 + t1) & 0xFFU;
        SETB(d0, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_051C60: ;
    ITR(0x51C60U, 8);
    { /* 051C60 051c60 lea.l src=EA(pcd r=0 d=0 v=51d6a) dst=EA(an r=2 d=0 v=0) */
        a2 = 0x51D6AU;
    }
L_051C64: ;
    ITR(0x51C64U, 14);
    { /* 051C64 051c64 movea.w src=EA(idx r=2 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = SX16(rd16((a2 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_051C68: ;
    ITR(0x51C68U, 14);
    { /* 051C68 051c68 jmp src=EA(idx r=3 d=0 v=0) dst=None */
        { call_dynamic((a3 + 0x0U + ((uint32_t)(int32_t)(int16_t)a2))); return; }
    }
L_051D5C: ;
    ITR(0x51D5CU, 16);
    { /* 051D5C 051d5c move.b src=EA(post r=1 d=0 v=0) dst=EA(d16 r=3 d=1575 v=0) */
        uint32_t t2 = a1; a1 += 1;
        { uint32_t t1 = rd8(t2);
        wr8((a3 + 0x627U), t1);
        }
    }
L_051D60: ;
    ITR(0x51D60U, 20);
    { /* 051D60 051d60 move.b src=EA(pcd r=0 d=0 v=51d89) dst=EA(d16 r=3 d=1576 v=0) */
        { uint32_t t1 = rd8(0x51D89U);
        wr8((a3 + 0x628U), t1);
        }
    }
L_051D66: ;
    ITR(0x51D66U, 10);
    { /* 051D66 051d66 bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x51A52U); goto L_051A52; }
    }
L_052A44: ;
    ITR(0x52A44U, 8);
    { /* 052A44 052a44 lea.l src=EA(pcd r=0 d=0 v=52b9c) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52B9CU;
    }
L_052A48: ;
    ITR(0x52A48U, 12);
    { /* 052A48 052a48 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A4C: ;
    ITR(0x52A4CU, 8);
    { /* 052A4C 052a4c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A5C;
    }
L_052A4E: ;
    ITR(0x52A4EU, 12);
    { /* 052A4E 052a4e lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF000U;
    }
L_052A54: ;
    ITR(0x52A54U, 4);
    { /* 052A54 052a54 moveq.l src=EA(imm r=0 d=0 v=1) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x1U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A56: ;
    ITR(0x52A56U, 8);
    { /* 052A56 052a56 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_052A5A: ;
    ITR(0x52A5AU, 18);
    { /* 052A5A 052a5a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A5CU);
    }
L_052A5C: ;
    ITR(0x52A5CU, 8);
    { /* 052A5C 052a5c lea.l src=EA(pcd r=0 d=0 v=52bc0) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BC0U;
    }
L_052A60: ;
    ITR(0x52A60U, 12);
    { /* 052A60 052a60 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A64: ;
    ITR(0x52A64U, 8);
    { /* 052A64 052a64 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A74;
    }
L_052A66: ;
    ITR(0x52A66U, 12);
    { /* 052A66 052a66 lea.l src=EA(absl r=0 d=0 v=dff010) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF010U;
    }
L_052A6C: ;
    ITR(0x52A6CU, 4);
    { /* 052A6C 052a6c moveq.l src=EA(imm r=0 d=0 v=2) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x2U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A6E: ;
    ITR(0x52A6EU, 8);
    { /* 052A6E 052a6e lea.l src=EA(pcd r=0 d=0 v=52c3a) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C3AU;
    }
L_052A72: ;
    ITR(0x52A72U, 18);
    { /* 052A72 052a72 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A74U);
    }
L_052A74: ;
    ITR(0x52A74U, 8);
    { /* 052A74 052a74 lea.l src=EA(pcd r=0 d=0 v=52be4) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52BE4U;
    }
L_052A78: ;
    ITR(0x52A78U, 12);
    { /* 052A78 052a78 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A7C: ;
    ITR(0x52A7CU, 8);
    { /* 052A7C 052a7c bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052A8C;
    }
L_052A7E: ;
    ITR(0x52A7EU, 12);
    { /* 052A7E 052a7e lea.l src=EA(absl r=0 d=0 v=dff020) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF020U;
    }
L_052A84: ;
    ITR(0x52A84U, 4);
    { /* 052A84 052a84 moveq.l src=EA(imm r=0 d=0 v=4) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x4U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A86: ;
    ITR(0x52A86U, 8);
    { /* 052A86 052a86 lea.l src=EA(pcd r=0 d=0 v=52c46) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C46U;
    }
L_052A8A: ;
    ITR(0x52A8AU, 18);
    { /* 052A8A 052a8a bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52A8CU);
    }
L_052A8C: ;
    ITR(0x52A8CU, 8);
    { /* 052A8C 052a8c lea.l src=EA(pcd r=0 d=0 v=52c08) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52C08U;
    }
L_052A90: ;
    ITR(0x52A90U, 12);
    { /* 052A90 052a90 tst.b src=None dst=EA(d16 r=1 d=26 v=0) */
        { uint32_t t = rd8((a1 + 0x1AU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052A94: ;
    ITR(0x52A94U, 8);
    { /* 052A94 052a94 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052AA4;
    }
L_052A96: ;
    ITR(0x52A96U, 12);
    { /* 052A96 052a96 lea.l src=EA(absl r=0 d=0 v=dff030) dst=EA(an r=0 d=0 v=0) */
        a0 = 0xDFF030U;
    }
L_052A9C: ;
    ITR(0x52A9CU, 4);
    { /* 052A9C 052a9c moveq.l src=EA(imm r=0 d=0 v=8) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x8U;
        FLAGS_LOGIC(d2, 0xFFFFFFFFU, 0x80000000U);
    }
L_052A9E: ;
    ITR(0x52A9EU, 8);
    { /* 052A9E 052a9e lea.l src=EA(pcd r=0 d=0 v=52c52) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C52U;
    }
L_052AA2: ;
    ITR(0x52AA2U, 18);
    { /* 052AA2 052aa2 bsr src=None dst=None cc=1 */
        CALL(dwam_052AA6, 0x52AA4U);
    }
L_052AA4: ;
    ITR(0x52AA4U, 16);
    { /* 052AA4 052aa4 rts src=None dst=None */
        RTS();
    }
}

void dwam_0528E2(void)
{
    FN_ENTER(0x528E2U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x528E6U: goto L_0528E6;
        case 0x528EAU: goto L_0528EA;
        case 0x528EEU: goto L_0528EE;
        case 0x528F2U: goto L_0528F2;
        case 0x528F4U: goto L_0528F4;
        case 0x528F6U: goto L_0528F6;
        case 0x528F8U: goto L_0528F8;
        case 0x528FCU: goto L_0528FC;
        case 0x528FEU: goto L_0528FE;
        case 0x52900U: goto L_052900;
        case 0x52904U: goto L_052904;
        case 0x5290AU: goto L_05290A;
        case 0x5290CU: goto L_05290C;
        case 0x52910U: goto L_052910;
        case 0x52914U: goto L_052914;
        case 0x52918U: goto L_052918;
        case 0x5291CU: goto L_05291C;
        case 0x52920U: goto L_052920;
        case 0x52924U: goto L_052924;
        case 0x52928U: goto L_052928;
        case 0x5292CU: goto L_05292C;
        case 0x52930U: goto L_052930;
        case 0x52934U: goto L_052934;
        case 0x52938U: goto L_052938;
        case 0x5293CU: goto L_05293C;
        case 0x52940U: goto L_052940;
        case 0x52944U: goto L_052944;
        case 0x5294AU: goto L_05294A;
        case 0x52950U: goto L_052950;
        case 0x52954U: goto L_052954;
        default: break; } }
L_0528E2: ;
    ITR(0x528E2U, 12);
    { /* 0528E2 0528e2 tst.b src=None dst=EA(d16 r=3 d=1579 v=0) */
        { uint32_t t = rd8((a3 + 0x62BU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_0528E6: ;
    ITR(0x528E6U, 8);
    { /* 0528E6 0528e6 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_052954;
    }
L_0528EA: ;
    ITR(0x528EAU, 8);
    { /* 0528EA 0528ea lea.l src=EA(pcd r=0 d=0 v=53076) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x53076U;
    }
L_0528EE: ;
    ITR(0x528EEU, 8);
    { /* 0528EE 0528ee lea.l src=EA(pcd r=0 d=0 v=51f3c) dst=EA(an r=5 d=0 v=0) */
        a5 = 0x51F3CU;
    }
L_0528F2: ;
    ITR(0x528F2U, 4);
    { /* 0528F2 0528f2 moveq.l src=EA(imm r=0 d=0 v=9) dst=EA(dn r=1 d=0 v=0) */
        d1 = 0x9U;
    }
L_0528F4: ;
    ITR(0x528F4U, 12);
    { /* 0528F4 0528f4 move.l src=EA(post r=0 d=0 v=0) dst=EA(dn r=2 d=0 v=0) */
        uint32_t t2 = a0; a0 += 4;
        { uint32_t t1 = rd32(t2);
        d2 = t1;
        }
    }
L_0528F6: ;
    ITR(0x528F6U, 8);
    { /* 0528F6 0528f6 move.w src=EA(post r=0 d=0 v=0) dst=EA(dn r=3 d=0 v=0) */
        uint32_t t2 = a0; a0 += 2;
        { uint32_t t1 = rd16(t2);
        SETW(d3, t1);
        }
    }
L_0528F8: ;
    ITR(0x528F8U, 20);
    { /* 0528F8 0528f8 move.l src=EA(an r=0 d=0 v=0) dst=EA(d16 r=5 d=0 v=0) */
        { uint32_t t1 = a0;
        wr32((a5 + 0x0U), t1);
        }
    }
L_0528FC: ;
    ITR(0x528FCU, 6);
    { /* 0528FC 0528fc adda.l src=EA(dn r=2 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 += d2;
    }
L_0528FE: ;
    ITR(0x528FEU, 10);
    { /* 0528FE 0528fe lsr.l src=None dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = shift_op(1, 0, d2, 1, 32);
        d2 = t1;
        }
    }
L_052900: ;
    ITR(0x52900U, 12);
    { /* 052900 052900 move.w src=EA(dn r=2 d=0 v=0) dst=EA(d16 r=5 d=8 v=0) */
        { uint32_t t1 = (d2 & 0xFFFF);
        wr16((a5 + 0x8U), t1);
        }
    }
L_052904: ;
    ITR(0x52904U, 12);
    { /* 052904 052904 move.l src=EA(imm r=0 d=0 v=369e99) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = 0x369E99U;
        d2 = t1;
        }
    }
L_05290A: ;
    ITR(0x5290AU, 140);
    { /* 05290A 05290a divu.w src=EA(dn r=3 d=0 v=0) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t dv_ = (d3 & 0xFFFF); if (!dv_) { cpu_trap_zerodiv(); } else {
        uint32_t n_ = d2, q_ = n_ / dv_, rm_ = n_ % dv_;
        if (q_ > 0xFFFF) { fv = 1; fc = 0; } else { d2 = (rm_ << 16) | q_; fn = !!(q_ & 0x8000); fz = (q_ == 0); fv = 0; fc = 0; } }
        }
    }
L_05290C: ;
    ITR(0x5290CU, 12);
    { /* 05290C 05290c move.w src=EA(dn r=2 d=0 v=0) dst=EA(d16 r=5 d=10 v=0) */
        { uint32_t t1 = (d2 & 0xFFFF);
        wr16((a5 + 0xAU), t1);
        }
    }
L_052910: ;
    ITR(0x52910U, 12);
    { /* 052910 052910 adda.w src=EA(imm r=0 d=0 v=c) dst=EA(an r=5 d=0 v=0) */
        a5 += 0xCU;
    }
L_052914: ;
    ITR(0x52914U, 10);
    { /* 052914 052914 dbcc.w src=None dst=EA(dn r=1 d=0 v=0) cc=1 */
        {
        SETW(d1, d1 - 1); if ((d1 & 0xFFFF) != 0xFFFF) { BUDGET_CHECK(0x528F4U); goto L_0528F4; }
        }
    }
L_052918: ;
    ITR(0x52918U, 20);
    { /* 052918 052918 move.l src=EA(an r=0 d=0 v=0) dst=EA(d16 r=3 d=1584 v=0) */
        { uint32_t t1 = a0;
        wr32((a3 + 0x630U), t1);
        }
    }
L_05291C: ;
    ITR(0x5291CU, 12);
    { /* 05291C 05291c adda.w src=EA(imm r=0 d=0 v=40) dst=EA(an r=0 d=0 v=0) */
        a0 += 0x40U;
    }
L_052920: ;
    ITR(0x52920U, 20);
    { /* 052920 052920 move.l src=EA(an r=0 d=0 v=0) dst=EA(d16 r=3 d=5924 v=0) */
        { uint32_t t1 = a0;
        wr32((a3 + 0x1724U), t1);
        }
    }
L_052924: ;
    ITR(0x52924U, 13);
    { /* 052924 052924 scc.b src=None dst=EA(d16 r=3 d=1579 v=0) cc=0 */
        { uint32_t t2 = (a3 + 0x62BU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_052928: ;
    ITR(0x52928U, 16);
    { /* 052928 052928 movea.l src=EA(pcd r=0 d=0 v=51fa8) dst=EA(an r=0 d=0 v=0) */
        a0 = rd32(0x51FA8U);
    }
L_05292C: ;
    ITR(0x5292CU, 8);
    { /* 05292C 05292c move.w src=EA(imm r=0 d=0 v=f) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0xFU;
        SETW(d1, t1);
        }
    }
L_052930: ;
    ITR(0x52930U, 12);
    { /* 052930 052930 move.w src=EA(imm r=0 d=0 v=c0c0) dst=EA(post r=0 d=0 v=0) */
        { uint32_t t1 = 0xC0C0U;
        uint32_t t2 = a0; a0 += 2;
        wr16(t2, t1);
        }
    }
L_052934: ;
    ITR(0x52934U, 10);
    { /* 052934 052934 dbcc.w src=None dst=EA(dn r=1 d=0 v=0) cc=1 */
        {
        SETW(d1, d1 - 1); if ((d1 & 0xFFFF) != 0xFFFF) { BUDGET_CHECK(0x52930U); goto L_052930; }
        }
    }
L_052938: ;
    ITR(0x52938U, 8);
    { /* 052938 052938 move.w src=EA(imm r=0 d=0 v=f) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0xFU;
        SETW(d1, t1);
        }
    }
L_05293C: ;
    ITR(0x5293CU, 12);
    { /* 05293C 05293c move.w src=EA(imm r=0 d=0 v=3f3f) dst=EA(post r=0 d=0 v=0) */
        { uint32_t t1 = 0x3F3FU;
        uint32_t t2 = a0; a0 += 2;
        wr16(t2, t1);
        }
    }
L_052940: ;
    ITR(0x52940U, 10);
    { /* 052940 052940 dbcc.w src=None dst=EA(dn r=1 d=0 v=0) cc=1 */
        {
        SETW(d1, d1 - 1); if ((d1 & 0xFFFF) != 0xFFFF) { BUDGET_CHECK(0x5293CU); goto L_05293C; }
        }
    }
L_052944: ;
    ITR(0x52944U, 16);
    { /* 052944 052944 move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=3 d=2126 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a3 + 0x84EU), t1);
        }
    }
L_05294A: ;
    ITR(0x5294AU, 16);
    { /* 05294A 05294a move.w src=EA(imm r=0 d=0 v=20) dst=EA(d16 r=3 d=1590 v=0) */
        { uint32_t t1 = 0x20U;
        wr16((a3 + 0x636U), t1);
        }
    }
L_052950: ;
    ITR(0x52950U, 16);
    { /* 052950 052950 clr.w src=None dst=EA(d16 r=3 d=1588 v=0) */
        wr16((a3 + 0x634U), 0);
        fn = 0; fz = 1; fv = 0; fc = 0;
    }
L_052954: ;
    ITR(0x52954U, 16);
    { /* 052954 052954 rts src=None dst=None */
        RTS();
    }
}

void dwam_052956(void)
{
    FN_ENTER(0x52956U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x5295EU: goto L_05295E;
        case 0x52966U: goto L_052966;
        case 0x5296AU: goto L_05296A;
        case 0x5296EU: goto L_05296E;
        case 0x52972U: goto L_052972;
        case 0x52978U: goto L_052978;
        case 0x5297AU: goto L_05297A;
        case 0x5297EU: goto L_05297E;
        case 0x52984U: goto L_052984;
        case 0x52986U: goto L_052986;
        case 0x5298AU: goto L_05298A;
        case 0x52990U: goto L_052990;
        case 0x52992U: goto L_052992;
        case 0x52996U: goto L_052996;
        case 0x5299CU: goto L_05299C;
        case 0x5299EU: goto L_05299E;
        case 0x529A2U: goto L_0529A2;
        case 0x529A6U: goto L_0529A6;
        case 0x529A8U: goto L_0529A8;
        case 0x529ACU: goto L_0529AC;
        case 0x529B0U: goto L_0529B0;
        case 0x529B4U: goto L_0529B4;
        case 0x529B8U: goto L_0529B8;
        case 0x529BAU: goto L_0529BA;
        case 0x529BEU: goto L_0529BE;
        case 0x529C2U: goto L_0529C2;
        case 0x529C4U: goto L_0529C4;
        case 0x529CAU: goto L_0529CA;
        case 0x529CEU: goto L_0529CE;
        case 0x529D0U: goto L_0529D0;
        case 0x529D2U: goto L_0529D2;
        case 0x529D6U: goto L_0529D6;
        case 0x529D8U: goto L_0529D8;
        case 0x529DCU: goto L_0529DC;
        case 0x529DEU: goto L_0529DE;
        case 0x529E2U: goto L_0529E2;
        case 0x529E4U: goto L_0529E4;
        case 0x529E6U: goto L_0529E6;
        case 0x529ECU: goto L_0529EC;
        case 0x529F2U: goto L_0529F2;
        case 0x529F6U: goto L_0529F6;
        case 0x529FCU: goto L_0529FC;
        case 0x52A00U: goto L_052A00;
        case 0x52A02U: goto L_052A02;
        case 0x52A04U: goto L_052A04;
        case 0x52A08U: goto L_052A08;
        case 0x52A0EU: goto L_052A0E;
        case 0x52A14U: goto L_052A14;
        case 0x52A1AU: goto L_052A1A;
        case 0x52A1EU: goto L_052A1E;
        case 0x52A20U: goto L_052A20;
        case 0x52A22U: goto L_052A22;
        case 0x52A26U: goto L_052A26;
        case 0x52A2AU: goto L_052A2A;
        case 0x52A2CU: goto L_052A2C;
        case 0x52A30U: goto L_052A30;
        case 0x52A34U: goto L_052A34;
        case 0x52A38U: goto L_052A38;
        default: break; } }
L_052956: ;
    ITR(0x52956U, 24);
    { /* 052956 052956 bset.b src=EA(imm r=0 d=0 v=1) dst=EA(absl r=0 d=0 v=bfe001) */
        { uint32_t t1 = (0x1U) & 7;
        uint32_t t3 = 0xBFE001U;
        uint32_t t2 = rd8(t3);
        fz = !((t2 >> t1) & 1);
        wr8(t3, t2 | (1u << t1));
        }
    }
L_05295E: ;
    ITR(0x5295EU, 20);
    { /* 05295E 05295e move.w src=EA(imm r=0 d=0 v=ff) dst=EA(absl r=0 d=0 v=dff09e) */
        { uint32_t t1 = 0xFFU;
        wr16(0xDFF09EU, t1);
        }
    }
L_052966: ;
    ITR(0x52966U, 8);
    { /* 052966 052966 lea.l src=EA(pcd r=0 d=0 v=51762) dst=EA(an r=3 d=0 v=0) */
        a3 = 0x51762U;
    }
L_05296A: ;
    ITR(0x5296AU, 8);
    { /* 05296A 05296a andi.w src=EA(imm r=0 d=0 v=3ff) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x3FFU;
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 & t1) & 0xFFFFU;
        SETW(d0, t3);
        }
    }
L_05296E: ;
    ITR(0x5296EU, 12);
    { /* 05296E 05296e move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=3 d=5322 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a3 + 0x14CAU), t1);
        }
    }
L_052972: ;
    ITR(0x52972U, 16);
    { /* 052972 052972 cmpi.b src=EA(imm r=0 d=0 v=0) dst=EA(d16 r=3 d=5322 v=0) */
        { uint32_t t1 = 0x0U;
        uint32_t t4 = (a3 + 0x14CAU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_052978: ;
    ITR(0x52978U, 8);
    { /* 052978 052978 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_05297E;
    }
L_05297A: ;
    ITR(0x5297AU, 13);
    { /* 05297A 05297a scc.b src=None dst=EA(d16 r=3 d=5204 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x1454U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_05297E: ;
    ITR(0x5297EU, 16);
    { /* 05297E 05297e cmpi.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=3 d=5322 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a3 + 0x14CAU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_052984: ;
    ITR(0x52984U, 8);
    { /* 052984 052984 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_05298A;
    }
L_052986: ;
    ITR(0x52986U, 13);
    { /* 052986 052986 scc.b src=None dst=EA(d16 r=3 d=5240 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x1478U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_05298A: ;
    ITR(0x5298AU, 16);
    { /* 05298A 05298a cmpi.b src=EA(imm r=0 d=0 v=2) dst=EA(d16 r=3 d=5322 v=0) */
        { uint32_t t1 = 0x2U;
        uint32_t t4 = (a3 + 0x14CAU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_052990: ;
    ITR(0x52990U, 8);
    { /* 052990 052990 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_052996;
    }
L_052992: ;
    ITR(0x52992U, 13);
    { /* 052992 052992 scc.b src=None dst=EA(d16 r=3 d=5276 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x149CU);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_052996: ;
    ITR(0x52996U, 16);
    { /* 052996 052996 cmpi.b src=EA(imm r=0 d=0 v=3) dst=EA(d16 r=3 d=5322 v=0) */
        { uint32_t t1 = 0x3U;
        uint32_t t4 = (a3 + 0x14CAU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_05299C: ;
    ITR(0x5299CU, 8);
    { /* 05299C 05299c bcc src=None dst=None cc=6 */
        if (COND_6) goto L_0529A2;
    }
L_05299E: ;
    ITR(0x5299EU, 13);
    { /* 05299E 05299e scc.b src=None dst=EA(d16 r=3 d=5312 v=0) cc=1 */
        { uint32_t t2 = (a3 + 0x14C0U);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_0529A2: ;
    ITR(0x529A2U, 18);
    { /* 0529A2 0529a2 bsr src=None dst=None cc=1 */
        CALL(dwam_0528E2, 0x529A6U);
    }
L_0529A6: ;
    ITR(0x529A6U, 4);
    { /* 0529A6 0529a6 moveq.l src=EA(imm r=0 d=0 v=0) dst=EA(dn r=7 d=0 v=0) */
        d7 = 0x0U;
    }
L_0529A8: ;
    ITR(0x529A8U, 8);
    { /* 0529A8 0529a8 lea.l src=EA(pcd r=0 d=0 v=52c2e) dst=EA(an r=4 d=0 v=0) */
        a4 = 0x52C2EU;
    }
L_0529AC: ;
    ITR(0x529ACU, 12);
    { /* 0529AC 0529ac move.b src=EA(pcd r=0 d=0 v=52c2c) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = rd8(0x52C2CU);
        SETB(d7, t1);
        }
    }
L_0529B0: ;
    ITR(0x529B0U, 74);
    { /* 0529B0 0529b0 mulu.w src=EA(imm r=0 d=0 v=c) dst=EA(dn r=7 d=0 v=0) */
        { uint32_t t1 = (d7 & 0xFFFF) * 0xCU;
        d7 = t1;
        }
    }
L_0529B4: ;
    ITR(0x529B4U, 15);
    { /* 0529B4 0529b4 scc.b src=None dst=EA(idx r=4 d=11 v=0) cc=0 */
        { uint32_t t2 = (a4 + 0xBU + ((uint32_t)(int32_t)(int16_t)d7));
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_0529B8: ;
    ITR(0x529B8U, 4);
    { /* 0529B8 0529b8 ext.w src=None dst=EA(dn r=0 d=0 v=0) */
        SETW(d0, SX8(d0));
    }
L_0529BA: ;
    ITR(0x529BAU, 74);
    { /* 0529BA 0529ba mulu.w src=EA(imm r=0 d=0 v=18) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF) * 0x18U;
        d0 = t1;
        }
    }
L_0529BE: ;
    ITR(0x529BEU, 8);
    { /* 0529BE 0529be lea.l src=EA(pcd r=0 d=0 v=52b9c) dst=EA(an r=1 d=0 v=0) */
        a1 = 0x52B9CU;
    }
L_0529C2: ;
    ITR(0x529C2U, 4);
    { /* 0529C2 0529c2 moveq.l src=EA(imm r=0 d=0 v=1) dst=EA(dn r=2 d=0 v=0) */
        d2 = 0x1U;
    }
L_0529C4: ;
    ITR(0x529C4U, 12);
    { /* 0529C4 0529c4 lea.l src=EA(absl r=0 d=0 v=dff000) dst=EA(an r=5 d=0 v=0) */
        a5 = 0xDFF000U;
    }
L_0529CA: ;
    ITR(0x529CAU, 12);
    { /* 0529CA 0529ca move.b src=EA(pcd r=0 d=0 v=52c2c) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8(0x52C2CU);
        SETB(d1, t1);
        }
    }
L_0529CE: ;
    ITR(0x529CEU, 4);
    { /* 0529CE 0529ce subq.b src=EA(imm r=0 d=0 v=1) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t2 = (d1 & 0xFF);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        SETB(d1, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_0529D0: ;
    ITR(0x529D0U, 8);
    { /* 0529D0 0529d0 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_0529DE;
    }
L_0529D2: ;
    ITR(0x529D2U, 12);
    { /* 0529D2 0529d2 adda.w src=EA(imm r=0 d=0 v=24) dst=EA(an r=1 d=0 v=0) */
        a1 += 0x24U;
    }
L_0529D6: ;
    ITR(0x529D6U, 4);
    { /* 0529D6 0529d6 add.w src=EA(dn r=2 d=0 v=0) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = (d2 & 0xFFFF);
        uint32_t t2 = (d2 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d2, t3);
        }
    }
L_0529D8: ;
    ITR(0x529D8U, 12);
    { /* 0529D8 0529d8 adda.w src=EA(imm r=0 d=0 v=10) dst=EA(an r=5 d=0 v=0) */
        a5 += 0x10U;
    }
L_0529DC: ;
    ITR(0x529DCU, 10);
    { /* 0529DC 0529dc bra src=None dst=None cc=0 */
        { BUDGET_CHECK(0x529CEU); goto L_0529CE; }
    }
L_0529DE: ;
    ITR(0x529DEU, 8);
    { /* 0529DE 0529de lea.l src=EA(pcd r=0 d=0 v=52c5e) dst=EA(an r=0 d=0 v=0) */
        a0 = 0x52C5EU;
    }
L_0529E2: ;
    ITR(0x529E2U, 8);
    { /* 0529E2 0529e2 adda.w src=EA(dn r=0 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 += SX16((d0 & 0xFFFF));
    }
L_0529E4: ;
    ITR(0x529E4U, 4);
    { /* 0529E4 0529e4 movea.l src=EA(an r=1 d=0 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = a1;
    }
L_0529E6: ;
    ITR(0x529E6U, 16);
    { /* 0529E6 0529e6 move.w src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=5 d=164 v=0) */
        { uint32_t t1 = 0x1U;
        wr16((a5 + 0xA4U), t1);
        }
    }
L_0529EC: ;
    ITR(0x529ECU, 16);
    { /* 0529EC 0529ec move.w src=EA(imm r=0 d=0 v=7c) dst=EA(d16 r=5 d=166 v=0) */
        { uint32_t t1 = 0x7CU;
        wr16((a5 + 0xA6U), t1);
        FLAGS_LOGIC(t1, 0xFFFFU, 0x8000U);
        }
    }
L_0529F2: ;
    ITR(0x529F2U, 18);
    { /* 0529F2 0529f2 bsr src=None dst=None cc=1 */
        CALL(dwam_052A3A, 0x529F6U);
    }
L_0529F6: ;
    ITR(0x529F6U, 16);
    { /* 0529F6 0529f6 move.w src=EA(dn r=2 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d2 & 0xFFFF);
        wr16(0xDFF096U, t1);
        FLAGS_LOGIC(t1, 0xFFFFU, 0x8000U);
        }
    }
L_0529FC: ;
    ITR(0x529FCU, 18);
    { /* 0529FC 0529fc bsr src=None dst=None cc=1 */
        CALL(dwam_052A3A, 0x52A00U);
    }
L_052A00: ;
    ITR(0x52A00U, 4);
    { /* 052A00 052a00 moveq.l src=EA(imm r=0 d=0 v=b) dst=EA(dn r=0 d=0 v=0) */
        d0 = 0xBU;
    }
L_052A02: ;
    ITR(0x52A02U, 12);
    { /* 052A02 052a02 move.w src=EA(post r=0 d=0 v=0) dst=EA(post r=1 d=0 v=0) */
        uint32_t t2 = a0; a0 += 2;
        { uint32_t t1 = rd16(t2);
        uint32_t t3 = a1; a1 += 2;
        wr16(t3, t1);
        }
    }
L_052A04: ;
    ITR(0x52A04U, 10);
    { /* 052A04 052a04 dbcc.w src=None dst=EA(dn r=0 d=0 v=0) cc=1 */
        {
        SETW(d0, d0 - 1); if ((d0 & 0xFFFF) != 0xFFFF) { BUDGET_CHECK(0x52A02U); goto L_052A02; }
        }
    }
L_052A08: ;
    ITR(0x52A08U, 20);
    { /* 052A08 052a08 move.w src=EA(d16 r=2 d=22 v=0) dst=EA(d16 r=5 d=164 v=0) */
        { uint32_t t1 = rd16((a2 + 0x16U));
        wr16((a5 + 0xA4U), t1);
        }
    }
L_052A0E: ;
    ITR(0x52A0EU, 20);
    { /* 052A0E 052a0e move.w src=EA(d16 r=2 d=14 v=0) dst=EA(d16 r=2 d=24 v=0) */
        { uint32_t t1 = rd16((a2 + 0xEU));
        wr16((a2 + 0x18U), t1);
        }
    }
L_052A14: ;
    ITR(0x52A14U, 16);
    { /* 052A14 052a14 move.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=2 d=27 v=0) */
        { uint32_t t1 = 0x1U;
        wr8((a2 + 0x1BU), t1);
        }
    }
L_052A1A: ;
    ITR(0x52A1AU, 12);
    { /* 052A1A 052a1a move.b src=EA(d16 r=2 d=20 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a2 + 0x14U));
        SETB(d0, t1);
        }
    }
L_052A1E: ;
    ITR(0x52A1EU, 4);
    { /* 052A1E 052a1e ext.w src=None dst=EA(dn r=0 d=0 v=0) */
        SETW(d0, SX8(d0));
    }
L_052A20: ;
    ITR(0x52A20U, 4);
    { /* 052A20 052a20 add.w src=EA(dn r=0 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t2 = (d0 & 0xFFFF);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        SETW(d0, t3);
        FLAGS_ADD(t1, t2, t3, 0xFFFFU, 0x8000U, 1);
        }
    }
L_052A22: ;
    ITR(0x52A22U, 8);
    { /* 052A22 052a22 lea.l src=EA(d16 r=3 d=5928 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 = (a3 + 0x1728U);
    }
L_052A26: ;
    ITR(0x52A26U, 14);
    { /* 052A26 052a26 movea.w src=EA(idx r=0 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 = SX16(rd16((a0 + 0x0U + ((uint32_t)(int32_t)(int16_t)d0))));
    }
L_052A2A: ;
    ITR(0x52A2AU, 6);
    { /* 052A2A 052a2a adda.l src=EA(an r=3 d=0 v=0) dst=EA(an r=0 d=0 v=0) */
        a0 += a3;
    }
L_052A2C: ;
    ITR(0x52A2CU, 20);
    { /* 052A2C 052a2c move.l src=EA(an r=0 d=0 v=0) dst=EA(d16 r=2 d=28 v=0) */
        { uint32_t t1 = a0;
        wr32((a2 + 0x1CU), t1);
        FLAGS_LOGIC(t1, 0xFFFFFFFFU, 0x80000000U);
        }
    }
L_052A30: ;
    ITR(0x52A30U, 18);
    { /* 052A30 052a30 bsr src=None dst=None cc=1 */
        CALL(dwam_052A3A, 0x52A34U);
    }
L_052A34: ;
    ITR(0x52A34U, 13);
    { /* 052A34 052a34 scc.b src=None dst=EA(d16 r=2 d=26 v=0) cc=0 */
        { uint32_t t2 = (a2 + 0x1AU);
        wr8(t2, (COND_0) ? 0xFF : 0);
        }
    }
L_052A38: ;
    ITR(0x52A38U, 16);
    { /* 052A38 052a38 rts src=None dst=None */
        RTS();
    }
}

void dwam_052A3A(void)
{
    FN_ENTER(0x52A3AU);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x52A3EU: goto L_052A3E;
        case 0x52A42U: goto L_052A42;
        default: break; } }
L_052A3A: ;
    ITR(0x52A3AU, 8);
    { /* 052A3A 052a3a move.w src=EA(imm r=0 d=0 v=200) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = 0x200U;
        SETW(d0, t1);
        FLAGS_LOGIC(t1, 0xFFFFU, 0x8000U);
        }
    }
L_052A3E: ;
    ITR(0x52A3EU, 10);
    { /* 052A3E 052a3e dbcc.w src=None dst=EA(dn r=0 d=0 v=0) cc=1 */
        {
        SETW(d0, d0 - 1); if ((d0 & 0xFFFF) != 0xFFFF) { BUDGET_CHECK(0x52A3EU); goto L_052A3E; }
        }
    }
L_052A42: ;
    ITR(0x52A42U, 16);
    { /* 052A42 052a42 rts src=None dst=None */
        RTS();
    }
}

void dwam_052AA6(void)
{
    FN_ENTER(0x52AA6U);
    if (resume_pc) { uint32_t rp_ = resume_pc; resume_pc = 0; switch (rp_) {
        case 0x52AAAU: goto L_052AAA;
        case 0x52AACU: goto L_052AAC;
        case 0x52AB0U: goto L_052AB0;
        case 0x52AB2U: goto L_052AB2;
        case 0x52AB6U: goto L_052AB6;
        case 0x52ABCU: goto L_052ABC;
        case 0x52AC0U: goto L_052AC0;
        case 0x52AC4U: goto L_052AC4;
        case 0x52AC6U: goto L_052AC6;
        case 0x52ACCU: goto L_052ACC;
        case 0x52AD2U: goto L_052AD2;
        case 0x52AD6U: goto L_052AD6;
        case 0x52ADCU: goto L_052ADC;
        case 0x52AE2U: goto L_052AE2;
        case 0x52AE8U: goto L_052AE8;
        case 0x52AEEU: goto L_052AEE;
        case 0x52AF2U: goto L_052AF2;
        case 0x52AF8U: goto L_052AF8;
        case 0x52AFAU: goto L_052AFA;
        case 0x52AFEU: goto L_052AFE;
        case 0x52B00U: goto L_052B00;
        case 0x52B04U: goto L_052B04;
        case 0x52B06U: goto L_052B06;
        case 0x52B0CU: goto L_052B0C;
        case 0x52B10U: goto L_052B10;
        case 0x52B14U: goto L_052B14;
        case 0x52B16U: goto L_052B16;
        case 0x52B18U: goto L_052B18;
        case 0x52B1AU: goto L_052B1A;
        case 0x52B1EU: goto L_052B1E;
        case 0x52B22U: goto L_052B22;
        case 0x52B26U: goto L_052B26;
        case 0x52B2AU: goto L_052B2A;
        case 0x52B2EU: goto L_052B2E;
        case 0x52B30U: goto L_052B30;
        case 0x52B34U: goto L_052B34;
        case 0x52B36U: goto L_052B36;
        case 0x52B3CU: goto L_052B3C;
        case 0x52B42U: goto L_052B42;
        case 0x52B46U: goto L_052B46;
        case 0x52B48U: goto L_052B48;
        case 0x52B4EU: goto L_052B4E;
        case 0x52B52U: goto L_052B52;
        case 0x52B54U: goto L_052B54;
        case 0x52B58U: goto L_052B58;
        case 0x52B5AU: goto L_052B5A;
        case 0x52B5EU: goto L_052B5E;
        case 0x52B60U: goto L_052B60;
        case 0x52B64U: goto L_052B64;
        case 0x52B68U: goto L_052B68;
        case 0x52B6CU: goto L_052B6C;
        case 0x52B6EU: goto L_052B6E;
        case 0x52B70U: goto L_052B70;
        case 0x52B74U: goto L_052B74;
        case 0x52B78U: goto L_052B78;
        case 0x52B7CU: goto L_052B7C;
        case 0x52B7EU: goto L_052B7E;
        case 0x52B80U: goto L_052B80;
        case 0x52B82U: goto L_052B82;
        case 0x52B86U: goto L_052B86;
        case 0x52B8AU: goto L_052B8A;
        case 0x52B8CU: goto L_052B8C;
        case 0x52B90U: goto L_052B90;
        case 0x52B94U: goto L_052B94;
        case 0x52B9AU: goto L_052B9A;
        default: break; } }
L_052AA6: ;
    ITR(0x52AA6U, 12);
    { /* 052AA6 052aa6 tst.b src=None dst=EA(d16 r=1 d=18 v=0) */
        { uint32_t t = rd8((a1 + 0x12U));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052AAA: ;
    ITR(0x52AAAU, 8);
    { /* 052AAA 052aaa bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052AFA;
    }
L_052AAC: ;
    ITR(0x52AACU, 16);
    { /* 052AAC 052aac subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=1 d=18 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a1 + 0x12U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_052AB0: ;
    ITR(0x52AB0U, 8);
    { /* 052AB0 052ab0 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_052AFA;
    }
L_052AB2: ;
    ITR(0x52AB2U, 13);
    { /* 052AB2 052ab2 scc.b src=None dst=EA(d16 r=1 d=26 v=0) cc=1 */
        { uint32_t t2 = (a1 + 0x1AU);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_052AB6: ;
    ITR(0x52AB6U, 16);
    { /* 052AB6 052ab6 move.w src=EA(dn r=2 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d2 & 0xFFFF);
        wr16(0xDFF096U, t1);
        }
    }
L_052ABC: ;
    ITR(0x52ABCU, 13);
    { /* 052ABC 052abc scc.b src=None dst=EA(d16 r=4 d=11 v=0) cc=1 */
        { uint32_t t2 = (a4 + 0xBU);
        wr8(t2, (COND_1) ? 0xFF : 0);
        }
    }
L_052AC0: ;
    ITR(0x52AC0U, 12);
    { /* 052AC0 052ac0 tst.b src=None dst=EA(d16 r=4 d=10 v=0) */
        { uint32_t t = rd8((a4 + 0xAU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052AC4: ;
    ITR(0x52AC4U, 8);
    { /* 052AC4 052ac4 bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052AF8;
    }
L_052AC6: ;
    ITR(0x52AC6U, 16);
    { /* 052AC6 052ac6 move.w src=EA(imm r=0 d=0 v=7c) dst=EA(d16 r=0 d=166 v=0) */
        { uint32_t t1 = 0x7CU;
        wr16((a0 + 0xA6U), t1);
        }
    }
L_052ACC: ;
    ITR(0x52ACCU, 16);
    { /* 052ACC 052acc move.w src=EA(dn r=2 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d2 & 0xFFFF);
        wr16(0xDFF096U, t1);
        FLAGS_LOGIC(t1, 0xFFFFU, 0x8000U);
        }
    }
L_052AD2: ;
    ITR(0x52AD2U, 18);
    { /* 052AD2 052ad2 bsr src=None dst=None cc=1 */
        CALL(dwam_052A3A, 0x52AD6U);
    }
L_052AD6: ;
    ITR(0x52AD6U, 32);
    { /* 052AD6 052ad6 move.l src=EA(d16 r=4 d=0 v=0) dst=EA(d16 r=0 d=160 v=0) */
        { uint32_t t1 = rd32((a4 + 0x0U));
        wr32((a0 + 0xA0U), t1);
        }
    }
L_052ADC: ;
    ITR(0x52ADCU, 20);
    { /* 052ADC 052adc move.w src=EA(d16 r=4 d=4 v=0) dst=EA(d16 r=0 d=164 v=0) */
        { uint32_t t1 = rd16((a4 + 0x4U));
        wr16((a0 + 0xA4U), t1);
        }
    }
L_052AE2: ;
    ITR(0x52AE2U, 20);
    { /* 052AE2 052ae2 move.w src=EA(d16 r=4 d=6 v=0) dst=EA(d16 r=0 d=166 v=0) */
        { uint32_t t1 = rd16((a4 + 0x6U));
        wr16((a0 + 0xA6U), t1);
        }
    }
L_052AE8: ;
    ITR(0x52AE8U, 20);
    { /* 052AE8 052ae8 move.w src=EA(d16 r=4 d=8 v=0) dst=EA(d16 r=0 d=168 v=0) */
        { uint32_t t1 = rd16((a4 + 0x8U));
        wr16((a0 + 0xA8U), t1);
        }
    }
L_052AEE: ;
    ITR(0x52AEEU, 8);
    { /* 052AEE 052aee ori.w src=EA(imm r=0 d=0 v=8200) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = 0x8200U;
        uint32_t t2 = (d2 & 0xFFFF);
        uint32_t t3 = (t2 | t1) & 0xFFFFU;
        SETW(d2, t3);
        }
    }
L_052AF2: ;
    ITR(0x52AF2U, 16);
    { /* 052AF2 052af2 move.w src=EA(dn r=2 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d2 & 0xFFFF);
        wr16(0xDFF096U, t1);
        FLAGS_LOGIC(t1, 0xFFFFU, 0x8000U);
        }
    }
L_052AF8: ;
    ITR(0x52AF8U, 16);
    { /* 052AF8 052af8 rts src=None dst=None */
        RTS();
    }
L_052AFA: ;
    ITR(0x52AFAU, 12);
    { /* 052AFA 052afa tst.b src=None dst=EA(d16 r=1 d=15 v=0) */
        { uint32_t t = rd8((a1 + 0xFU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052AFE: ;
    ITR(0x52AFEU, 8);
    { /* 052AFE 052afe bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052B22;
    }
L_052B00: ;
    ITR(0x52B00U, 16);
    { /* 052B00 052b00 subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=1 d=25 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a1 + 0x19U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_052B04: ;
    ITR(0x52B04U, 8);
    { /* 052B04 052b04 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_052B22;
    }
L_052B06: ;
    ITR(0x52B06U, 20);
    { /* 052B06 052b06 move.b src=EA(d16 r=1 d=15 v=0) dst=EA(d16 r=1 d=25 v=0) */
        { uint32_t t1 = rd8((a1 + 0xFU));
        wr8((a1 + 0x19U), t1);
        }
    }
L_052B0C: ;
    ITR(0x52B0CU, 16);
    { /* 052B0C 052b0c move.l src=EA(d16 r=1 d=4 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd32((a1 + 0x4U));
        d0 = t1;
        }
    }
L_052B10: ;
    ITR(0x52B10U, 12);
    { /* 052B10 052b10 move.b src=EA(d16 r=1 d=16 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd8((a1 + 0x10U));
        SETB(d1, t1);
        }
    }
L_052B14: ;
    ITR(0x52B14U, 8);
    { /* 052B14 052b14 ror.b src=None dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = shift_op(3, 0, (d1 & 0xFF), 1, 8);
        SETB(d1, t1);
        }
    }
L_052B16: ;
    ITR(0x52B16U, 8);
    { /* 052B16 052b16 bcc src=None dst=None cc=5 */
        if (COND_5) goto L_052B1A;
    }
L_052B18: ;
    ITR(0x52B18U, 4);
    { /* 052B18 052b18 swap.w src=None dst=EA(dn r=0 d=0 v=0) */
        d0 = (d0 << 16) | (d0 >> 16);
    }
L_052B1A: ;
    ITR(0x52B1AU, 12);
    { /* 052B1A 052b1a move.b src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=1 d=16 v=0) */
        { uint32_t t1 = (d1 & 0xFF);
        wr8((a1 + 0x10U), t1);
        }
    }
L_052B1E: ;
    ITR(0x52B1EU, 16);
    { /* 052B1E 052b1e add.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=1 d=8 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        uint32_t t4 = (a1 + 0x8U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        wr16(t4, t3);
        }
    }
L_052B22: ;
    ITR(0x52B22U, 12);
    { /* 052B22 052b22 move.w src=EA(d16 r=1 d=0 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a1 + 0x0U));
        SETW(d1, t1);
        }
    }
L_052B26: ;
    ITR(0x52B26U, 16);
    { /* 052B26 052b26 add.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=1 d=8 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        uint32_t t4 = (a1 + 0x8U);
        uint32_t t2 = rd16(t4);
        uint32_t t3 = (t2 + t1) & 0xFFFFU;
        wr16(t4, t3);
        }
    }
L_052B2A: ;
    ITR(0x52B2AU, 12);
    { /* 052B2A 052b2a tst.b src=None dst=EA(d16 r=1 d=14 v=0) */
        { uint32_t t = rd8((a1 + 0xEU));
        FLAGS_LOGIC(t, 0xFFU, 0x80U);
        }
    }
L_052B2E: ;
    ITR(0x52B2EU, 8);
    { /* 052B2E 052b2e bcc src=None dst=None cc=7 */
        if (COND_7) goto L_052B42;
    }
L_052B30: ;
    ITR(0x52B30U, 16);
    { /* 052B30 052b30 subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=1 d=24 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a1 + 0x18U);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 0);
        }
    }
L_052B34: ;
    ITR(0x52B34U, 8);
    { /* 052B34 052b34 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_052B42;
    }
L_052B36: ;
    ITR(0x52B36U, 20);
    { /* 052B36 052b36 move.b src=EA(d16 r=1 d=14 v=0) dst=EA(d16 r=1 d=24 v=0) */
        { uint32_t t1 = rd8((a1 + 0xEU));
        wr8((a1 + 0x18U), t1);
        }
    }
L_052B3C: ;
    ITR(0x52B3CU, 20);
    { /* 052B3C 052b3c move.w src=EA(d16 r=1 d=2 v=0) dst=EA(d16 r=1 d=8 v=0) */
        { uint32_t t1 = rd16((a1 + 0x2U));
        wr16((a1 + 0x8U), t1);
        }
    }
L_052B42: ;
    ITR(0x52B42U, 16);
    { /* 052B42 052b42 subq.b src=EA(imm r=0 d=0 v=1) dst=EA(d16 r=1 d=27 v=0) */
        { uint32_t t1 = 0x1U;
        uint32_t t4 = (a1 + 0x1BU);
        uint32_t t2 = rd8(t4);
        uint32_t t3 = (t2 - t1) & 0xFFU;
        wr8(t4, t3);
        FLAGS_SUB(t1, t2, t3, 0xFFU, 0x80U, 1);
        }
    }
L_052B46: ;
    ITR(0x52B46U, 8);
    { /* 052B46 052b46 bcc src=None dst=None cc=6 */
        if (COND_6) goto L_052B64;
    }
L_052B48: ;
    ITR(0x52B48U, 20);
    { /* 052B48 052b48 move.b src=EA(d16 r=1 d=19 v=0) dst=EA(d16 r=1 d=27 v=0) */
        { uint32_t t1 = rd8((a1 + 0x13U));
        wr8((a1 + 0x1BU), t1);
        }
    }
L_052B4E: ;
    ITR(0x52B4EU, 16);
    { /* 052B4E 052b4e movea.l src=EA(d16 r=1 d=28 v=0) dst=EA(an r=2 d=0 v=0) */
        a2 = rd32((a1 + 0x1CU));
    }
L_052B52: ;
    ITR(0x52B52U, 8);
    { /* 052B52 052b52 move.b src=EA(post r=2 d=0 v=0) dst=EA(dn r=0 d=0 v=0) */
        uint32_t t2 = a2; a2 += 1;
        { uint32_t t1 = rd8(t2);
        SETB(d0, t1);
        FLAGS_LOGIC(t1, 0xFFU, 0x80U);
        }
    }
L_052B54: ;
    ITR(0x52B54U, 10);
    { /* 052B54 052b54 bcc src=None dst=None cc=7 */
        if (COND_7) { BUDGET_CHECK(0x52AB2U); goto L_052AB2; }
    }
L_052B58: ;
    ITR(0x52B58U, 8);
    { /* 052B58 052b58 bcc src=None dst=None cc=11 */
        if (COND_11) goto L_052B64;
    }
L_052B5A: ;
    ITR(0x52B5AU, 20);
    { /* 052B5A 052b5a move.l src=EA(an r=2 d=0 v=0) dst=EA(d16 r=1 d=28 v=0) */
        { uint32_t t1 = a2;
        wr32((a1 + 0x1CU), t1);
        }
    }
L_052B5E: ;
    ITR(0x52B5EU, 4);
    { /* 052B5E 052b5e ext.w src=None dst=EA(dn r=0 d=0 v=0) */
        SETW(d0, SX8(d0));
    }
L_052B60: ;
    ITR(0x52B60U, 12);
    { /* 052B60 052b60 move.w src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=0 d=168 v=0) */
        { uint32_t t1 = (d0 & 0xFFFF);
        wr16((a0 + 0xA8U), t1);
        }
    }
L_052B64: ;
    ITR(0x52B64U, 12);
    { /* 052B64 052b64 move.w src=EA(d16 r=1 d=8 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd16((a1 + 0x8U));
        SETW(d1, t1);
        }
    }
L_052B68: ;
    ITR(0x52B68U, 8);
    { /* 052B68 052b68 cmp.w src=EA(imm r=0 d=0 v=7c) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = 0x7CU;
        uint32_t t2 = (d1 & 0xFFFF);
        uint32_t t3 = (t2 - t1) & 0xFFFFU;
        FLAGS_SUB(t1, t2, t3, 0xFFFFU, 0x8000U, 0);
        }
    }
L_052B6C: ;
    ITR(0x52B6CU, 8);
    { /* 052B6C 052b6c bcc src=None dst=None cc=12 */
        if (COND_12) goto L_052B70;
    }
L_052B6E: ;
    ITR(0x52B6EU, 4);
    { /* 052B6E 052b6e moveq.l src=EA(imm r=0 d=0 v=7c) dst=EA(dn r=1 d=0 v=0) */
        d1 = 0x7CU;
    }
L_052B70: ;
    ITR(0x52B70U, 12);
    { /* 052B70 052b70 move.w src=EA(dn r=1 d=0 v=0) dst=EA(d16 r=0 d=166 v=0) */
        { uint32_t t1 = (d1 & 0xFFFF);
        wr16((a0 + 0xA6U), t1);
        }
    }
L_052B74: ;
    ITR(0x52B74U, 16);
    { /* 052B74 052b74 move.l src=EA(d16 r=1 d=10 v=0) dst=EA(dn r=1 d=0 v=0) */
        { uint32_t t1 = rd32((a1 + 0xAU));
        d1 = t1;
        }
    }
L_052B78: ;
    ITR(0x52B78U, 12);
    { /* 052B78 052b78 move.b src=EA(d16 r=1 d=17 v=0) dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = rd8((a1 + 0x11U));
        SETB(d0, t1);
        }
    }
L_052B7C: ;
    ITR(0x52B7CU, 8);
    { /* 052B7C 052b7c ror.b src=None dst=EA(dn r=0 d=0 v=0) */
        { uint32_t t1 = shift_op(3, 0, (d0 & 0xFF), 1, 8);
        SETB(d0, t1);
        }
    }
L_052B7E: ;
    ITR(0x52B7EU, 8);
    { /* 052B7E 052b7e bcc src=None dst=None cc=5 */
        if (COND_5) goto L_052B82;
    }
L_052B80: ;
    ITR(0x52B80U, 4);
    { /* 052B80 052b80 swap.w src=None dst=EA(dn r=1 d=0 v=0) */
        d1 = (d1 << 16) | (d1 >> 16);
    }
L_052B82: ;
    ITR(0x52B82U, 12);
    { /* 052B82 052b82 move.b src=EA(dn r=0 d=0 v=0) dst=EA(d16 r=1 d=17 v=0) */
        { uint32_t t1 = (d0 & 0xFF);
        wr8((a1 + 0x11U), t1);
        }
    }
L_052B86: ;
    ITR(0x52B86U, 16);
    { /* 052B86 052b86 movea.l src=EA(pcd r=0 d=0 v=52e86) dst=EA(an r=1 d=0 v=0) */
        a1 = rd32(0x52E86U);
    }
L_052B8A: ;
    ITR(0x52B8AU, 8);
    { /* 052B8A 052b8a adda.w src=EA(dn r=1 d=0 v=0) dst=EA(an r=1 d=0 v=0) */
        a1 += SX16((d1 & 0xFFFF));
    }
L_052B8C: ;
    ITR(0x52B8CU, 20);
    { /* 052B8C 052b8c move.l src=EA(an r=1 d=0 v=0) dst=EA(d16 r=0 d=160 v=0) */
        { uint32_t t1 = a1;
        wr32((a0 + 0xA0U), t1);
        }
    }
L_052B90: ;
    ITR(0x52B90U, 8);
    { /* 052B90 052b90 ori.w src=EA(imm r=0 d=0 v=8200) dst=EA(dn r=2 d=0 v=0) */
        { uint32_t t1 = 0x8200U;
        uint32_t t2 = (d2 & 0xFFFF);
        uint32_t t3 = (t2 | t1) & 0xFFFFU;
        SETW(d2, t3);
        }
    }
L_052B94: ;
    ITR(0x52B94U, 16);
    { /* 052B94 052b94 move.w src=EA(dn r=2 d=0 v=0) dst=EA(absl r=0 d=0 v=dff096) */
        { uint32_t t1 = (d2 & 0xFFFF);
        wr16(0xDFF096U, t1);
        FLAGS_LOGIC(t1, 0xFFFFU, 0x8000U);
        }
    }
L_052B9A: ;
    ITR(0x52B9AU, 16);
    { /* 052B9A 052b9a rts src=None dst=None */
        RTS();
    }
}
