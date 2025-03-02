#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82572BB8"))) PPC_WEAK_FUNC(sub_82572BB8);
PPC_FUNC_IMPL(__imp__sub_82572BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x825710d0
	sub_825710D0(ctx, base);
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// lbz r5,124(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82570a28
	sub_82570A28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82572C08"))) PPC_WEAK_FUNC(sub_82572C08);
PPC_FUNC_IMPL(__imp__sub_82572C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,140(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 140);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82572c34
	if (!cr0.eq) goto loc_82572C34;
	// lbz r11,141(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 141);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82572e1c
	if (cr0.eq) goto loc_82572E1C;
loc_82572C34:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8256dad0
	sub_8256DAD0(ctx, base);
	// lwz r9,100(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 100);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,56(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 56);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82572c6c
	if (!cr6.lt) goto loc_82572C6C;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// b 0x82572c70
	goto loc_82572C70;
loc_82572C6C:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82572C70:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82572d20
	if (!cr6.eq) goto loc_82572D20;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82572cac
	if (cr6.eq) goto loc_82572CAC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,680
	ctx.r7.s64 = 680;
	// addi r6,r11,-9848
	ctx.r6.s64 = r11.s64 + -9848;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-8112
	ctx.r5.s64 = r11.s64 + -8112;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82572CAC:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82572e08
	if (!cr0.eq) goto loc_82572E08;
	// li r3,83
	ctx.r3.s64 = 83;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f4,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// addi r11,r11,-10280
	r11.s64 = r11.s64 + -10280;
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// bl 0x82586698
	sub_82586698(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// b 0x82572e08
	goto loc_82572E08;
loc_82572D20:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82572e08
	if (!cr0.eq) goto loc_82572E08;
	// lwz r11,104(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 104);
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(r29.s32, 3, xer);
	// blt cr6,0x82572d84
	if (cr6.lt) goto loc_82572D84;
	// cmpwi cr6,r29,7
	cr6.compare<int32_t>(r29.s32, 7, xer);
	// bge cr6,0x82572d58
	if (!cr6.lt) goto loc_82572D58;
	// bl 0x82576968
	sub_82576968(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r29,-3
	r29.s64 = r29.s64 + -3;
	// b 0x82572d84
	goto loc_82572D84;
loc_82572D58:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,703
	ctx.r7.s64 = 703;
	// addi r6,r11,-9848
	ctx.r6.s64 = r11.s64 + -9848;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82572D84:
	// li r3,102
	ctx.r3.s64 = 102;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x82588680
	sub_82588680(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// addi r30,r11,-10280
	r30.s64 = r11.s64 + -10280;
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// lwz r3,104(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 104);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82572E08:
	// lwz r3,100(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 100);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82572E1C:
	// addi r4,r28,20
	ctx.r4.s64 = r28.s64 + 20;
	// lbz r5,124(r28)
	ctx.r5.u64 = PPC_LOAD_U8(r28.u32 + 124);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82570a28
	sub_82570A28(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,136(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 136);
	// bl 0x82571348
	sub_82571348(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82572E40"))) PPC_WEAK_FUNC(sub_82572E40);
PPC_FUNC_IMPL(__imp__sub_82572E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82572fb0
	if (!cr0.eq) goto loc_82572FB0;
	// lwz r11,136(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 136);
	// lbz r11,141(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 141);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82572fb0
	if (cr0.eq) goto loc_82572FB0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8256dad0
	sub_8256DAD0(ctx, base);
	// lwz r11,136(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 136);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lbz r11,140(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 140);
	// lwz r27,56(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82572f50
	if (cr0.eq) goto loc_82572F50;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f4,29188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29188);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// stw r27,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r27.u32);
	// li r26,0
	r26.s64 = 0;
	// addi r28,r11,-10264
	r28.s64 = r11.s64 + -10264;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// lwz r11,-12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -12);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// li r3,90
	ctx.r3.s64 = 90;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,-12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -12);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r27.u32);
	// stw r26,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r26.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,228(r30)
	PPC_STORE_U32(r30.u32 + 228, r11.u32);
	// b 0x82572fa8
	goto loc_82572FA8;
loc_82572F50:
	// li r3,83
	ctx.r3.s64 = 83;
	// bl 0x82585608
	sub_82585608(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f4,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// stw r27,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r27.u32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// addi r11,r11,-10264
	r11.s64 = r11.s64 + -10264;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// lwz r11,-12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -12);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x82586698
	sub_82586698(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
loc_82572FA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
loc_82572FB0:
	// addi r4,r29,20
	ctx.r4.s64 = r29.s64 + 20;
	// lbz r5,124(r29)
	ctx.r5.u64 = PPC_LOAD_U8(r29.u32 + 124);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82570a28
	sub_82570A28(ctx, base);
	// lwz r11,136(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 136);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// bl 0x82571428
	sub_82571428(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82572FD8"))) PPC_WEAK_FUNC(sub_82572FD8);
PPC_FUNC_IMPL(__imp__sub_82572FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,136(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 136);
	// lbz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 140);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82573008
	if (!cr0.eq) goto loc_82573008;
	// lbz r11,141(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 141);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825731d8
	if (cr0.eq) goto loc_825731D8;
loc_82573008:
	// lwz r3,100(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 100);
	// bl 0x8256d878
	sub_8256D878(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// addi r26,r11,8972
	r26.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r25,r11,-9848
	r25.s64 = r11.s64 + -9848;
	// beq cr6,0x82573044
	if (cr6.eq) goto loc_82573044;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,792
	ctx.r7.s64 = 792;
	// addi r5,r11,-7976
	ctx.r5.s64 = r11.s64 + -7976;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82573044:
	// lwz r11,16(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 16);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825731d8
	if (!cr0.eq) goto loc_825731D8;
	// lwz r3,104(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 104);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8257317c
	if (!cr0.gt) goto loc_8257317C;
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// bl 0x8256d8d8
	sub_8256D8D8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8256dad0
	sub_8256DAD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,90
	ctx.r3.s64 = 90;
	// lwz r4,12(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// lwz r28,56(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,-10276(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -10276);
	// stw r28,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r28.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// blt cr6,0x825730ec
	if (cr6.lt) goto loc_825730EC;
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(r30.s32, 7, xer);
	// bge cr6,0x825730cc
	if (!cr6.lt) goto loc_825730CC;
	// addi r30,r30,-3
	r30.s64 = r30.s64 + -3;
	// b 0x825730ec
	goto loc_825730EC;
loc_825730CC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r7,819
	ctx.r7.s64 = 819;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825730EC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82589438
	sub_82589438(ctx, base);
	// b 0x825731d8
	goto loc_825731D8;
loc_8257317C:
	// lwz r11,100(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825731bc
	if (!cr6.eq) goto loc_825731BC;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x825731ac
	if (!cr6.lt) goto loc_825731AC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// b 0x825731b0
	goto loc_825731B0;
loc_825731AC:
	// li r11,0
	r11.s64 = 0;
loc_825731B0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825731d8
	if (cr6.eq) goto loc_825731D8;
loc_825731BC:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,828
	ctx.r7.s64 = 828;
	// addi r5,r11,-7944
	ctx.r5.s64 = r11.s64 + -7944;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825731D8:
	// addi r4,r24,20
	ctx.r4.s64 = r24.s64 + 20;
	// lbz r5,124(r24)
	ctx.r5.u64 = PPC_LOAD_U8(r24.u32 + 124);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82570a28
	sub_82570A28(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_825731F0"))) PPC_WEAK_FUNC(sub_825731F0);
PPC_FUNC_IMPL(__imp__sub_825731F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82573280
	if (!cr0.eq) goto loc_82573280;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256dad0
	sub_8256DAD0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,90
	ctx.r3.s64 = 90;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r9,56(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f4,-7980(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7980);
	ctx.f4.f64 = double(temp.f32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,-10276(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -10276);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// stw r8,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r8.u32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
loc_82573280:
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// lbz r5,124(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 124);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82570a28
	sub_82570A28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82573298"))) PPC_WEAK_FUNC(sub_82573298);
PPC_FUNC_IMPL(__imp__sub_82573298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82573328
	if (!cr0.eq) goto loc_82573328;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256dad0
	sub_8256DAD0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,90
	ctx.r3.s64 = 90;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r9,56(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f4,29188(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29188);
	ctx.f4.f64 = double(temp.f32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,-10276(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -10276);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// stw r8,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r8.u32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
loc_82573328:
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// lbz r5,124(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 124);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82570a28
	sub_82570A28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82573340"))) PPC_WEAK_FUNC(sub_82573340);
PPC_FUNC_IMPL(__imp__sub_82573340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r26,148(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r27,r11,-9848
	r27.s64 = r11.s64 + -9848;
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// bne 0x8257338c
	if (!cr0.eq) goto loc_8257338C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1628
	ctx.r7.s64 = 1628;
	// addi r5,r11,-7864
	ctx.r5.s64 = r11.s64 + -7864;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257338C:
	// addi r3,r26,20
	ctx.r3.s64 = r26.s64 + 20;
	// bl 0x82582968
	sub_82582968(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x825733a8
	if (cr6.gt) goto loc_825733A8;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_825733A8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825733ec
	if (!cr0.eq) goto loc_825733EC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82589a40
	sub_82589A40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825733ec
	if (cr0.eq) goto loc_825733EC;
	// lwz r11,56(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x825733d8
	if (!cr6.gt) goto loc_825733D8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x825733dc
	goto loc_825733DC;
loc_825733D8:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_825733DC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8257356c
	if (cr6.eq) goto loc_8257356C;
loc_825733EC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82573430
	if (cr0.eq) goto loc_82573430;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x825710d0
	sub_825710D0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82571280
	sub_82571280(ctx, base);
	// b 0x8257356c
	goto loc_8257356C;
loc_82573430:
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8257348c
	if (cr0.eq) goto loc_8257348C;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8257348c
	if (!cr6.eq) goto loc_8257348C;
	// bl 0x8256d878
	sub_8256D878(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82573474
	if (cr6.eq) goto loc_82573474;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1648
	ctx.r7.s64 = 1648;
	// addi r5,r11,-7976
	ctx.r5.s64 = r11.s64 + -7976;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82573474:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x8257356c
	goto loc_8257356C;
loc_8257348C:
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x825734b0
	if (!cr6.lt) goto loc_825734B0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// b 0x825734b4
	goto loc_825734B4;
loc_825734B0:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_825734B4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x825734dc
	if (cr6.eq) goto loc_825734DC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1653
	ctx.r7.s64 = 1653;
	// addi r5,r11,-7976
	ctx.r5.s64 = r11.s64 + -7976;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825734DC:
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8257356c
	if (!cr0.eq) goto loc_8257356C;
	// li r3,87
	ctx.r3.s64 = 87;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8256dad0
	sub_8256DAD0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82573528
	if (!cr0.eq) goto loc_82573528;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1658
	ctx.r7.s64 = 1658;
	// addi r5,r11,-8128
	ctx.r5.s64 = r11.s64 + -8128;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82573528:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// addi r30,r11,-10264
	r30.s64 = r11.s64 + -10264;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// lwz r11,-12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r25,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r25.u32);
	// bl 0x82589438
	sub_82589438(ctx, base);
loc_8257356C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82573574"))) PPC_WEAK_FUNC(sub_82573574);
PPC_FUNC_IMPL(__imp__sub_82573574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82573578"))) PPC_WEAK_FUNC(sub_82573578);
PPC_FUNC_IMPL(__imp__sub_82573578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825735c4
	if (!cr6.eq) goto loc_825735C4;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// b 0x825735c8
	goto loc_825735C8;
loc_825735C4:
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
loc_825735C8:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// lwz r6,360(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 360);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r3,512(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 512);
	// addi r7,r11,-15800
	ctx.r7.s64 = r11.s64 + -15800;
	// lwz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x825613c0
	sub_825613C0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// lwz r6,168(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x82572298
	sub_82572298(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b920
	sub_8254B920(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwimi r10,r11,5,25,26
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 5) & 0x60) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF9F);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r11,r9,0,13,4
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFF807FFFF;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r8,r10,1,0,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// srawi r6,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// rlwinm r10,r8,19,0,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0xFFF80000;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r11,r9,8,18,23
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0x3F00) | (r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// andi. r11,r11,16191
	r11.u64 = r11.u64 & 16191;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwimi r8,r11,1,0,30
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 1) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r9,r8,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r6,132(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// rlwimi r7,r9,1,0,30
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0xFFFFFFFE) | (ctx.r7.u64 & 0xFFFFFFFF00000001);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwimi r11,r7,1,0,30
	r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 1) & 0xFFFFFFFE) | (r11.u64 & 0xFFFFFFFF00000001);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// rlwinm r7,r7,0,20,9
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFC00FFF;
	// stb r8,11(r31)
	PPC_STORE_U8(r31.u32 + 11, ctx.r8.u8);
	// rlwinm r11,r11,12,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFFFF000;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r7,r7,0,8,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFC0FFFFFF;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// or r7,r11,r7
	ctx.r7.u64 = r11.u64 | ctx.r7.u64;
	// rlwinm r11,r6,8,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r6,24,16,23
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 24) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r6,8,8,15
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// rlwimi r11,r6,24,0,7
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 24) & 0xFF000000) | (r11.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r10,r11,30,0,1
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 30) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwimi r8,r11,8,1,23
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0x7FFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF800000FF);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,5600
	r11.s64 = r11.s64 + 5600;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// rlwimi r11,r10,0,0,26
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFE0) | (r11.u64 & 0xFFFFFFFF0000001F);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,236(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// lwz r3,1712(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r3,5,21,26
	r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 5) & 0x7E0) | (r11.u64 & 0xFFFFFFFFFFFFF81F);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r28,180(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// addi r27,r11,8972
	r27.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r26,r11,-9848
	r26.s64 = r11.s64 + -9848;
	// beq 0x825737a8
	if (cr0.eq) goto loc_825737A8;
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82573778
	if (cr0.eq) goto loc_82573778;
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// lwz r11,80(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 80);
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// rlwinm. r10,r10,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82573760
	if (cr0.eq) goto loc_82573760;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2944
	ctx.r7.s64 = 2944;
	// addi r5,r11,-8152
	ctx.r5.s64 = r11.s64 + -8152;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82573760:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,1712(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// stw r3,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r3.u32);
	// lwz r11,128(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 128);
	// b 0x82573780
	goto loc_82573780;
loc_82573778:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r11,-10280(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -10280);
loc_82573780:
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwimi r10,r11,27,2,4
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 27) & 0x38000000) | (ctx.r10.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x825737c0
	goto loc_825737C0;
loc_825737A8:
	// lbz r11,176(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 176);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825737c0
	if (cr0.eq) goto loc_825737C0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// oris r11,r11,16384
	r11.u64 = r11.u64 | 1073741824;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_825737C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,1712(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r3,12,14,19
	r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 12) & 0x3F000) | (r11.u64 & 0xFFFFFFFFFFFC0FFF);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lbz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 128);
	// bl 0x8256d5e8
	sub_8256D5E8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwimi r3,r11,0,0,28
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFF8) | (ctx.r3.u64 & 0xFFFFFFFF00000007);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lbz r3,129(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 129);
	// bl 0x8256d5e8
	sub_8256D5E8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r3,3,26,28
	r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 3) & 0x38) | (r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lbz r3,130(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 130);
	// bl 0x8256d5e8
	sub_8256D5E8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r3,6,23,25
	r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 6) & 0x1C0) | (r11.u64 & 0xFFFFFFFFFFFFFE3F);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lbz r3,131(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 131);
	// bl 0x8256d5e8
	sub_8256D5E8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r3,9,20,22
	r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 9) & 0xE00) | (r11.u64 & 0xFFFFFFFFFFFFF1FF);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8257387c
	if (cr0.eq) goto loc_8257387C;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82573874
	if (cr6.eq) goto loc_82573874;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x82573864
	if (cr6.eq) goto loc_82573864;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r7,2983
	ctx.r7.s64 = 2983;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x82573890
	goto loc_82573890;
loc_82573864:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// b 0x82573888
	goto loc_82573888;
loc_82573874:
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// b 0x82573880
	goto loc_82573880;
loc_8257387C:
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
loc_82573880:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
loc_82573888:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82573890:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82573898"))) PPC_WEAK_FUNC(sub_82573898);
PPC_FUNC_IMPL(__imp__sub_82573898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// bl 0x8256e8a0
	sub_8256E8A0(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// li r26,1
	r26.s64 = 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r25,0
	r25.s64 = 0;
	// bne 0x825738dc
	if (!cr0.eq) goto loc_825738DC;
	// stw r25,508(r11)
	PPC_STORE_U32(r11.u32 + 508, r25.u32);
	// b 0x8257391c
	goto loc_8257391C;
loc_825738DC:
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 508);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825738ec
	if (!cr6.eq) goto loc_825738EC;
	// stw r26,508(r11)
	PPC_STORE_U32(r11.u32 + 508, r26.u32);
loc_825738EC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,508(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8254be80
	sub_8254BE80(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 352);
	// mulli r4,r10,6
	ctx.r4.s64 = ctx.r10.s64 * 6;
	// bl 0x8254be80
	sub_8254BE80(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
loc_8257391C:
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// lwz r29,136(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lwz r28,8(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// b 0x82573988
	goto loc_82573988;
loc_82573938:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82573a3c
	if (cr0.eq) goto loc_82573A3C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8256de40
	sub_8256DE40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82573a3c
	if (cr0.eq) goto loc_82573A3C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82572738
	sub_82572738(ctx, base);
	// lwz r11,152(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 152);
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82573980:
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r28,8(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 8);
loc_82573988:
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x82573938
	if (!cr0.eq) goto loc_82573938;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8256db48
	sub_8256DB48(ctx, base);
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mulli r11,r11,6
	r11.s64 = r11.s64 * 6;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8256d1c0
	sub_8256D1C0(ctx, base);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,1112(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1112);
	// rlwinm. r11,r11,20,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82573b8c
	if (cr0.eq) goto loc_82573B8C;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82573b8c
	if (!cr0.eq) goto loc_82573B8C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stb r26,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r26.u8);
	// bl 0x82596c10
	sub_82596C10(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82573898
	sub_82573898(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-7852
	ctx.r4.s64 = r11.s64 + -7852;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r6,r30
	r11.s64 = r30.s64 - ctx.r6.s64;
	// twllei r30,0
	// mulli r10,r11,100
	ctx.r10.s64 = r11.s64 * 100;
	// rotlwi r11,r10,1
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r7,r10,r30
	ctx.r7.s32 = ctx.r10.s32 / r30.s32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// andc r11,r30,r11
	r11.u64 = r30.u64 & ~r11.u64;
	// twlgei r11,-1
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// b 0x82573c48
	goto loc_82573C48;
loc_82573A3C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82589a30
	sub_82589A30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82573aa4
	if (!cr0.gt) goto loc_82573AA4;
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82573a64
	if (!cr6.gt) goto loc_82573A64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82573a6c
	goto loc_82573A6C;
loc_82573A64:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82573A6C:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82573aa4
	if (cr0.eq) goto loc_82573AA4;
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82573aa4
	if (!cr6.eq) goto loc_82573AA4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573340
	sub_82573340(ctx, base);
loc_82573AA4:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82573b10
	if (!cr0.eq) goto loc_82573B10;
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82573ad4
	if (!cr6.lt) goto loc_82573AD4;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82573ad8
	goto loc_82573AD8;
loc_82573AD4:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82573AD8:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82573b04
	goto loc_82573B04;
loc_82573AE4:
	// lwz r9,228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82573b00
	if (cr0.eq) goto loc_82573B00;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r9,87
	cr6.compare<int32_t>(ctx.r9.s32, 87, xer);
	// beq cr6,0x82573b00
	if (cr6.eq) goto loc_82573B00;
	// stw r10,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r10.u32);
loc_82573B00:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82573B04:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82573ae4
	if (!cr6.eq) goto loc_82573AE4;
loc_82573B10:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r30,156(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,124(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 124);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82573980
	if (cr0.eq) goto loc_82573980;
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bne cr6,0x82573980
	if (!cr6.eq) goto loc_82573980;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r11,r25
	r11.u64 = r25.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82573B50:
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// ble cr6,0x82573b68
	if (!cr6.gt) goto loc_82573B68;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// b 0x82573b74
	goto loc_82573B74;
loc_82573B68:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
loc_82573B74:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82573980
	if (cr0.eq) goto loc_82573980;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r26,124(r8)
	PPC_STORE_U8(ctx.r8.u32 + 124, r26.u8);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x82573b50
	goto loc_82573B50;
loc_82573B8C:
	// lwz r10,336(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 336);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// mulli r30,r11,6
	r30.s64 = r11.s64 * 6;
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addze r10,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	// mulli r28,r11,12
	r28.s64 = r11.s64 * 12;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// ble cr6,0x82573bcc
	if (!cr6.gt) goto loc_82573BCC;
	// li r11,23
	r11.s64 = 23;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r6,16
	ctx.r3.s64 = ctx.r6.s64 + 16;
	// stw r11,340(r6)
	PPC_STORE_U32(ctx.r6.u32 + 340, r11.u32);
	// bl 0x826a70b0
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
loc_82573BCC:
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// stw r4,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r4.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254be30
	sub_8254BE30(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r3,r29,r30
	ctx.r3.u64 = r29.u64 + r30.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// bl 0x8256ddb0
	sub_8256DDB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825768f0
	sub_825768F0(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82573c48
	if (cr0.eq) goto loc_82573C48;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// lwz r11,412(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 412);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82573C48:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82571160
	sub_82571160(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82573C58"))) PPC_WEAK_FUNC(sub_82573C58);
PPC_FUNC_IMPL(__imp__sub_82573C58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82573C60"))) PPC_WEAK_FUNC(sub_82573C60);
PPC_FUNC_IMPL(__imp__sub_82573C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,908(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 908);
	// lwz r10,900(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82573C70"))) PPC_WEAK_FUNC(sub_82573C70);
PPC_FUNC_IMPL(__imp__sub_82573C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,916(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 916);
	// lwz r9,908(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 908);
	// lwz r10,900(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82573C88"))) PPC_WEAK_FUNC(sub_82573C88);
PPC_FUNC_IMPL(__imp__sub_82573C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,916(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 916);
	// lwz r11,924(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	// lwz r9,908(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 908);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,900(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82573CA8"))) PPC_WEAK_FUNC(sub_82573CA8);
PPC_FUNC_IMPL(__imp__sub_82573CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,928(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 928);
	// lwz r10,928(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 928);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82573ccc
	if (!cr6.eq) goto loc_82573CCC;
	// lwz r11,900(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,900(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 900);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82573CCC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82573CD4"))) PPC_WEAK_FUNC(sub_82573CD4);
PPC_FUNC_IMPL(__imp__sub_82573CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82573CD8"))) PPC_WEAK_FUNC(sub_82573CD8);
PPC_FUNC_IMPL(__imp__sub_82573CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,928(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 928);
	// lwz r10,928(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 928);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82573d1c
	if (!cr6.eq) goto loc_82573D1C;
	// lwz r11,900(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// lwz r10,900(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 900);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82573d1c
	if (!cr6.eq) goto loc_82573D1C;
	// lwz r11,932(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 932);
	// lwz r10,932(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 932);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82573d1c
	if (!cr6.eq) goto loc_82573D1C;
	// lwz r11,908(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 908);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,908(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 908);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82573D1C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82573D24"))) PPC_WEAK_FUNC(sub_82573D24);
PPC_FUNC_IMPL(__imp__sub_82573D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82573D28"))) PPC_WEAK_FUNC(sub_82573D28);
PPC_FUNC_IMPL(__imp__sub_82573D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,928(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 928);
	// lwz r10,928(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 928);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82573d8c
	if (!cr6.eq) goto loc_82573D8C;
	// lwz r11,900(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// lwz r10,900(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 900);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82573d8c
	if (!cr6.eq) goto loc_82573D8C;
	// lwz r11,932(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 932);
	// lwz r10,932(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 932);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82573d8c
	if (!cr6.eq) goto loc_82573D8C;
	// lwz r11,908(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 908);
	// lwz r10,908(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 908);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82573d8c
	if (!cr6.eq) goto loc_82573D8C;
	// lwz r11,936(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 936);
	// lwz r10,936(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 936);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82573d8c
	if (!cr6.eq) goto loc_82573D8C;
	// lwz r11,916(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 916);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,916(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 916);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82573D8C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82573D94"))) PPC_WEAK_FUNC(sub_82573D94);
PPC_FUNC_IMPL(__imp__sub_82573D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82573D98"))) PPC_WEAK_FUNC(sub_82573D98);
PPC_FUNC_IMPL(__imp__sub_82573D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,928(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 928);
	// lwz r10,928(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 928);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82573e1c
	if (!cr6.eq) goto loc_82573E1C;
	// lwz r11,900(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// lwz r10,900(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 900);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82573e1c
	if (!cr6.eq) goto loc_82573E1C;
	// lwz r11,932(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 932);
	// lwz r10,932(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 932);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82573e1c
	if (!cr6.eq) goto loc_82573E1C;
	// lwz r11,908(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 908);
	// lwz r10,908(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 908);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82573e1c
	if (!cr6.eq) goto loc_82573E1C;
	// lwz r11,936(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 936);
	// lwz r10,936(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 936);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82573e1c
	if (!cr6.eq) goto loc_82573E1C;
	// lwz r11,916(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 916);
	// lwz r10,916(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 916);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82573e1c
	if (!cr6.eq) goto loc_82573E1C;
	// lwz r11,940(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 940);
	// lwz r10,940(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 940);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82573e1c
	if (!cr6.eq) goto loc_82573E1C;
	// lwz r11,924(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,924(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 924);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82573E1C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82573E24"))) PPC_WEAK_FUNC(sub_82573E24);
PPC_FUNC_IMPL(__imp__sub_82573E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82573E28"))) PPC_WEAK_FUNC(sub_82573E28);
PPC_FUNC_IMPL(__imp__sub_82573E28) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82573E30"))) PPC_WEAK_FUNC(sub_82573E30);
PPC_FUNC_IMPL(__imp__sub_82573E30) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r3,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// lfs f13,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82573E54"))) PPC_WEAK_FUNC(sub_82573E54);
PPC_FUNC_IMPL(__imp__sub_82573E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82573E58"))) PPC_WEAK_FUNC(sub_82573E58);
PPC_FUNC_IMPL(__imp__sub_82573E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x82573eb8
	if (!cr6.gt) goto loc_82573EB8;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_82573E70:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82573e84
	if (!cr0.eq) goto loc_82573E84;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x82573ea8
	goto loc_82573EA8;
loc_82573E84:
	// li r11,0
	r11.s64 = 0;
loc_82573E88:
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// blt cr6,0x82573e88
	if (cr6.lt) goto loc_82573E88;
loc_82573EA8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// blt cr6,0x82573e70
	if (cr6.lt) goto loc_82573E70;
loc_82573EB8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82573EC0"))) PPC_WEAK_FUNC(sub_82573EC0);
PPC_FUNC_IMPL(__imp__sub_82573EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82573eec
	if (!cr6.eq) goto loc_82573EEC;
	// lfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82597108
	sub_82597108(ctx, base);
	// b 0x82573f10
	goto loc_82573F10;
loc_82573EEC:
	// lha r10,116(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 116));
	// lis r11,-32138
	r11.s64 = -2106195968;
	// lha r6,118(r1)
	ctx.r6.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 118));
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-11536
	r11.s64 = r11.s64 + -11536;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r4,r10,-7792
	ctx.r4.s64 = ctx.r10.s64 + -7792;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
loc_82573F10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82573F20"))) PPC_WEAK_FUNC(sub_82573F20);
PPC_FUNC_IMPL(__imp__sub_82573F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r5.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82573F50:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bge cr6,0x82573f70
	if (!cr6.lt) goto loc_82573F70;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x82573f50
	if (cr6.lt) goto loc_82573F50;
loc_82573F70:
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82573FAC"))) PPC_WEAK_FUNC(sub_82573FAC);
PPC_FUNC_IMPL(__imp__sub_82573FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82573FB0"))) PPC_WEAK_FUNC(sub_82573FB0);
PPC_FUNC_IMPL(__imp__sub_82573FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82574004
	if (!cr6.gt) goto loc_82574004;
	// li r30,0
	r30.s64 = 0;
loc_82573FD4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82573ff0
	if (cr6.eq) goto loc_82573FF0;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82573FF0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82573fd4
	if (cr6.lt) goto loc_82573FD4;
loc_82574004:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82574018"))) PPC_WEAK_FUNC(sub_82574018);
PPC_FUNC_IMPL(__imp__sub_82574018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82574028"))) PPC_WEAK_FUNC(sub_82574028);
PPC_FUNC_IMPL(__imp__sub_82574028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8257404c
	if (!cr6.eq) goto loc_8257404C;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8257404C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82574054"))) PPC_WEAK_FUNC(sub_82574054);
PPC_FUNC_IMPL(__imp__sub_82574054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82574058"))) PPC_WEAK_FUNC(sub_82574058);
PPC_FUNC_IMPL(__imp__sub_82574058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,32(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// beq 0x82574070
	if (cr0.eq) goto loc_82574070;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x82574074
	goto loc_82574074;
loc_82574070:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82574074:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,336(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpw cr6,r3,r9
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, xer);
	// blt cr6,0x8257409c
	if (cr6.lt) goto loc_8257409C;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_8257409C:
	// li r11,31
	r11.s64 = 31;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// stw r11,340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 340, r11.u32);
	// b 0x826a70b0
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
	return;
}

__attribute__((alias("__imp__sub_825740B0"))) PPC_WEAK_FUNC(sub_825740B0);
PPC_FUNC_IMPL(__imp__sub_825740B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825740B4"))) PPC_WEAK_FUNC(sub_825740B4);
PPC_FUNC_IMPL(__imp__sub_825740B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825740B8"))) PPC_WEAK_FUNC(sub_825740B8);
PPC_FUNC_IMPL(__imp__sub_825740B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r5,14
	r11.s64 = ctx.r5.s64 + 14;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r5,20
	ctx.r10.s64 = ctx.r5.s64 + 20;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82582e80
	sub_82582E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825740EC"))) PPC_WEAK_FUNC(sub_825740EC);
PPC_FUNC_IMPL(__imp__sub_825740EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825740F0"))) PPC_WEAK_FUNC(sub_825740F0);
PPC_FUNC_IMPL(__imp__sub_825740F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r5,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r5.u32);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r4,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r4.u32);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82582e80
	sub_82582E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257410C"))) PPC_WEAK_FUNC(sub_8257410C);
PPC_FUNC_IMPL(__imp__sub_8257410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82574110"))) PPC_WEAK_FUNC(sub_82574110);
PPC_FUNC_IMPL(__imp__sub_82574110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825831c0
	sub_825831C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82582f40
	sub_82582F40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82574160"))) PPC_WEAK_FUNC(sub_82574160);
PPC_FUNC_IMPL(__imp__sub_82574160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r30,428(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x825741bc
	if (cr0.eq) goto loc_825741BC;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82584038
	sub_82584038(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825741c0
	goto loc_825741C0;
loc_825741BC:
	// li r30,0
	r30.s64 = 0;
loc_825741C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82582f40
	sub_82582F40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_825741D8"))) PPC_WEAK_FUNC(sub_825741D8);
PPC_FUNC_IMPL(__imp__sub_825741D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcdc
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r5,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r5.u64);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// std r6,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r6.u64);
	// std r7,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r7.u64);
	// std r8,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r8.u64);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,369(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 369);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,8972
	r24.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r23,r11,-7696
	r23.s64 = r11.s64 + -7696;
	// bne 0x82574238
	if (!cr0.eq) goto loc_82574238;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,415
	ctx.r7.s64 = 415;
	// addi r5,r11,-7720
	ctx.r5.s64 = r11.s64 + -7720;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82574238:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x82574248
	if (!cr6.gt) goto loc_82574248;
	// cmpwi cr6,r25,5
	cr6.compare<int32_t>(r25.s32, 5, xer);
	// blt cr6,0x82574264
	if (cr6.lt) goto loc_82574264;
loc_82574248:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,416
	ctx.r7.s64 = 416;
	// addi r5,r11,-7764
	ctx.r5.s64 = r11.s64 + -7764;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82574264:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r21,0
	r21.s64 = 0;
	// li r9,928
	ctx.r9.s64 = 928;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// subfic r7,r10,896
	xer.ca = ctx.r10.u32 <= 896;
	ctx.r7.s64 = 896 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r22,1
	r22.s64 = 1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,256(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r11,264(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r11,268(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// lwz r11,272(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lwz r11,276(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lwz r11,280(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lwz r11,284(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
loc_825742E0:
	// cmpw cr6,r6,r25
	cr6.compare<int32_t>(ctx.r6.s32, r25.s32, xer);
	// bge cr6,0x82574310
	if (!cr6.lt) goto loc_82574310;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + r11.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stwx r22,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, r22.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// b 0x82574318
	goto loc_82574318;
loc_82574310:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stwx r21,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r21.u32);
loc_82574318:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpwi cr6,r9,944
	cr6.compare<int32_t>(ctx.r9.s32, 944, xer);
	// blt cr6,0x825742e0
	if (cr6.lt) goto loc_825742E0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r26,-4(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82582e80
	sub_82582E80(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x825744a0
	if (!cr0.eq) goto loc_825744A0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,428(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82574384
	if (cr0.eq) goto loc_82574384;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82586d00
	sub_82586D00(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82574388
	goto loc_82574388;
loc_82574384:
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82574388:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,368(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 368);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825743b4
	if (!cr0.eq) goto loc_825743B4;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// stw r10,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r10.u32);
	// b 0x82574428
	goto loc_82574428;
loc_825743B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82574058
	sub_82574058(ctx, base);
	// li r11,11
	r11.s64 = 11;
	// mr r29,r21
	r29.u64 = r21.u64;
	// stw r3,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r3.u32);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// ble cr6,0x82574428
	if (!cr6.gt) goto loc_82574428;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// addi r27,r11,-7780
	r27.s64 = r11.s64 + -7780;
loc_825743E0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82574404
	if (cr6.eq) goto loc_82574404;
	// li r7,450
	ctx.r7.s64 = 450;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82574404:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ld r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// bl 0x8254bff0
	sub_8254BFF0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r29,r25
	cr6.compare<int32_t>(r29.s32, r25.s32, xer);
	// blt cr6,0x825743e0
	if (cr6.lt) goto loc_825743E0;
loc_82574428:
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r30,928
	r11.s64 = r30.s64 + 928;
	// addi r9,r30,896
	ctx.r9.s64 = r30.s64 + 896;
loc_82574438:
	// cmpw cr6,r8,r25
	cr6.compare<int32_t>(ctx.r8.s32, r25.s32, xer);
	// bge cr6,0x82574458
	if (!cr6.lt) goto loc_82574458;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// b 0x8257445c
	goto loc_8257445C;
loc_82574458:
	// stw r21,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r21.u32);
loc_8257445C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// blt cr6,0x82574438
	if (cr6.lt) goto loc_82574438;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,1712(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82582f40
	sub_82582F40(ctx, base);
loc_825744A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_825744AC"))) PPC_WEAK_FUNC(sub_825744AC);
PPC_FUNC_IMPL(__imp__sub_825744AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825744B0"))) PPC_WEAK_FUNC(sub_825744B0);
PPC_FUNC_IMPL(__imp__sub_825744B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r4,940
	r11.s64 = ctx.r4.s64 + 940;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_825744C0:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// beq cr6,0x825744e0
	if (cr6.eq) goto loc_825744E0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82574558
	if (cr6.eq) goto loc_82574558;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x825744e8
	goto loc_825744E8;
loc_825744E0:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82574560
	if (!cr6.eq) goto loc_82574560;
loc_825744E8:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x825744c0
	if (!cr0.lt) goto loc_825744C0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82574550
	if (!cr6.gt) goto loc_82574550;
	// addi r9,r4,896
	ctx.r9.s64 = ctx.r4.s64 + 896;
	// addi r11,r3,900
	r11.s64 = ctx.r3.s64 + 900;
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_8257450C:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bne cr6,0x82574530
	if (!cr6.eq) goto loc_82574530;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r5,r7,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// beq cr6,0x82574534
	if (cr6.eq) goto loc_82574534;
loc_82574530:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82574534:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82574568
	if (!cr0.eq) goto loc_82574568;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x8257450c
	if (cr6.lt) goto loc_8257450C;
loc_82574550:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82574558:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82574560:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82574568:
	// addi r11,r10,112
	r11.s64 = ctx.r10.s64 + 112;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82574590
	if (cr6.eq) goto loc_82574590;
	// subfc r11,r9,r8
	xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// b 0x8257459c
	goto loc_8257459C;
loc_82574590:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_8257459C:
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825745BC"))) PPC_WEAK_FUNC(sub_825745BC);
PPC_FUNC_IMPL(__imp__sub_825745BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825745C0"))) PPC_WEAK_FUNC(sub_825745C0);
PPC_FUNC_IMPL(__imp__sub_825745C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r4,928
	ctx.r10.s64 = ctx.r4.s64 + 928;
loc_825745D4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825745f0
	if (cr6.eq) goto loc_825745F0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x825745d4
	if (cr6.lt) goto loc_825745D4;
loc_825745F0:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// bl 0x82583000
	sub_82583000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82574634"))) PPC_WEAK_FUNC(sub_82574634);
PPC_FUNC_IMPL(__imp__sub_82574634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82574638"))) PPC_WEAK_FUNC(sub_82574638);
PPC_FUNC_IMPL(__imp__sub_82574638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r4,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r4.u8);
	// stw r28,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r28.u32);
	// beq 0x82574664
	if (cr0.eq) goto loc_82574664;
	// stw r28,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r28.u32);
	// b 0x8257466c
	goto loc_8257466C;
loc_82574664:
	// li r11,32
	r11.s64 = 32;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
loc_8257466C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r29,428(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x825746b4
	if (cr0.eq) goto loc_825746B4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32169
	r11.s64 = -2108227584;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,16408
	ctx.r6.s64 = ctx.r10.s64 + 16408;
	// addi r5,r11,16424
	ctx.r5.s64 = r11.s64 + 16424;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,428(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 428);
	// bl 0x82573f20
	sub_82573F20(ctx, base);
	// b 0x825746b8
	goto loc_825746B8;
loc_825746B4:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_825746B8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r29,428(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x82574704
	if (cr0.eq) goto loc_82574704;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32169
	r11.s64 = -2108227584;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,15448
	ctx.r6.s64 = ctx.r10.s64 + 15448;
	// addi r5,r11,15528
	ctx.r5.s64 = r11.s64 + 15528;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,428(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 428);
	// bl 0x82573f20
	sub_82573F20(ctx, base);
	// b 0x82574708
	goto loc_82574708;
loc_82574704:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82574708:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// lwz r29,428(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x82574754
	if (cr0.eq) goto loc_82574754;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32169
	r11.s64 = -2108227584;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,15456
	ctx.r6.s64 = ctx.r10.s64 + 15456;
	// addi r5,r11,15576
	ctx.r5.s64 = r11.s64 + 15576;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,428(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 428);
	// bl 0x82573f20
	sub_82573F20(ctx, base);
	// b 0x82574758
	goto loc_82574758;
loc_82574754:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82574758:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// lwz r29,428(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x825747a4
	if (cr0.eq) goto loc_825747A4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32169
	r11.s64 = -2108227584;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,15472
	ctx.r6.s64 = ctx.r10.s64 + 15472;
	// addi r5,r11,15656
	ctx.r5.s64 = r11.s64 + 15656;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,428(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 428);
	// bl 0x82573f20
	sub_82573F20(ctx, base);
	// b 0x825747a8
	goto loc_825747A8;
loc_825747A4:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_825747A8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// lwz r29,428(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x825747f4
	if (cr0.eq) goto loc_825747F4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32169
	r11.s64 = -2108227584;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,15496
	ctx.r6.s64 = ctx.r10.s64 + 15496;
	// addi r5,r11,15768
	ctx.r5.s64 = r11.s64 + 15768;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,428(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 428);
	// bl 0x82573f20
	sub_82573F20(ctx, base);
	// b 0x825747f8
	goto loc_825747F8;
loc_825747F4:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_825747F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,52
	ctx.r4.s64 = 52;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// lwz r30,428(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82574834
	if (cr0.eq) goto loc_82574834;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82583410
	sub_82583410(ctx, base);
	// b 0x82574838
	goto loc_82574838;
loc_82574834:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82574838:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,964
	ctx.r4.s64 = 964;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lwz r30,428(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x8257486c
	if (cr0.eq) goto loc_8257486C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82586d00
	sub_82586D00(ctx, base);
	// b 0x82574870
	goto loc_82574870;
loc_8257486C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82574870:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// stw r28,408(r11)
	PPC_STORE_U32(r11.u32 + 408, r28.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r28,380(r11)
	PPC_STORE_U32(r11.u32 + 380, r28.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r28,384(r11)
	PPC_STORE_U32(r11.u32 + 384, r28.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,388(r11)
	PPC_STORE_U32(r11.u32 + 388, ctx.r10.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r28,392(r11)
	PPC_STORE_U32(r11.u32 + 392, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_825748A8"))) PPC_WEAK_FUNC(sub_825748A8);
PPC_FUNC_IMPL(__imp__sub_825748A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x825831a8
	sub_825831A8(ctx, base);
	// b 0x825748e4
	goto loc_825748E4;
loc_825748C8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825830e8
	sub_825830E8(ctx, base);
loc_825748E4:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bne cr6,0x825748c8
	if (!cr6.eq) goto loc_825748C8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82574904"))) PPC_WEAK_FUNC(sub_82574904);
PPC_FUNC_IMPL(__imp__sub_82574904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82574908"))) PPC_WEAK_FUNC(sub_82574908);
PPC_FUNC_IMPL(__imp__sub_82574908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82573fb0
	sub_82573FB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82573fb0
	sub_82573FB0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257494c
	if (cr0.eq) goto loc_8257494C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8257494c
	if (cr6.eq) goto loc_8257494C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8257494C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82574968"))) PPC_WEAK_FUNC(sub_82574968);
PPC_FUNC_IMPL(__imp__sub_82574968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r29,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r29.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r30,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r30.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82582e80
	sub_82582E80(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825749b4
	if (!cr0.eq) goto loc_825749B4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82574110
	sub_82574110(ctx, base);
loc_825749B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_825749BC"))) PPC_WEAK_FUNC(sub_825749BC);
PPC_FUNC_IMPL(__imp__sub_825749BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825749C0"))) PPC_WEAK_FUNC(sub_825749C0);
PPC_FUNC_IMPL(__imp__sub_825749C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r29,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r29.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r30,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r30.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82582e80
	sub_82582E80(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82574a14
	if (!cr0.eq) goto loc_82574A14;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82574160
	sub_82574160(ctx, base);
loc_82574A14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82574A1C"))) PPC_WEAK_FUNC(sub_82574A1C);
PPC_FUNC_IMPL(__imp__sub_82574A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82574A20"))) PPC_WEAK_FUNC(sub_82574A20);
PPC_FUNC_IMPL(__imp__sub_82574A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r5,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r5.u64);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// std r7,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r7.u64);
	// std r8,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r8.u64);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,369(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 369);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,8972
	r29.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r28,r11,-7696
	r28.s64 = r11.s64 + -7696;
	// beq 0x82574a80
	if (cr0.eq) goto loc_82574A80;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,336
	ctx.r7.s64 = 336;
	// addi r5,r11,-7584
	ctx.r5.s64 = r11.s64 + -7584;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82574A80:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x82574a90
	if (!cr6.gt) goto loc_82574A90;
	// cmpwi cr6,r25,5
	cr6.compare<int32_t>(r25.s32, 5, xer);
	// blt cr6,0x82574aac
	if (cr6.lt) goto loc_82574AAC;
loc_82574A90:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,339
	ctx.r7.s64 = 339;
	// addi r5,r11,-7764
	ctx.r5.s64 = r11.s64 + -7764;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82574AAC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r26,0
	r26.s64 = 0;
	// li r9,928
	ctx.r9.s64 = 928;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// subfic r8,r10,896
	xer.ca = ctx.r10.u32 <= 896;
	ctx.r8.s64 = 896 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r27,1
	r27.s64 = 1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,224(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,228(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r11,232(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r11,236(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// lwz r11,240(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lwz r11,244(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lwz r11,248(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lwz r11,252(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
loc_82574B28:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r7,r25
	cr6.compare<int32_t>(ctx.r7.s32, r25.s32, xer);
	// bge cr6,0x82574b58
	if (!cr6.lt) goto loc_82574B58;
	// stwx r27,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r27.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// b 0x82574b5c
	goto loc_82574B5C;
loc_82574B58:
	// stwx r26,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r26.u32);
loc_82574B5C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpwi cr6,r9,944
	cr6.compare<int32_t>(ctx.r9.s32, 944, xer);
	// blt cr6,0x82574b28
	if (cr6.lt) goto loc_82574B28;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r30,-4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82582e80
	sub_82582E80(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82574b9c
	if (cr0.eq) goto loc_82574B9C;
	// lwz r31,28(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x82574c5c
	goto loc_82574C5C;
loc_82574B9C:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// stw r5,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r5.u32);
	// bl 0x82574110
	sub_82574110(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82574be4
	if (cr6.eq) goto loc_82574BE4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,369
	ctx.r7.s64 = 369;
	// addi r5,r11,-7612
	ctx.r5.s64 = r11.s64 + -7612;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82574BE4:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82574bfc
	if (!cr6.gt) goto loc_82574BFC;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82574c04
	goto loc_82574C04;
loc_82574BFC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82574C04:
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r4,928
	r11.s64 = ctx.r4.s64 + 928;
	// addi r9,r4,896
	ctx.r9.s64 = ctx.r4.s64 + 896;
loc_82574C18:
	// cmpw cr6,r8,r25
	cr6.compare<int32_t>(ctx.r8.s32, r25.s32, xer);
	// bge cr6,0x82574c38
	if (!cr6.lt) goto loc_82574C38;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// b 0x82574c3c
	goto loc_82574C3C;
loc_82574C38:
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
loc_82574C3C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// blt cr6,0x82574c18
	if (cr6.lt) goto loc_82574C18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82582f40
	sub_82582F40(ctx, base);
loc_82574C5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82574C68"))) PPC_WEAK_FUNC(sub_82574C68);
PPC_FUNC_IMPL(__imp__sub_82574C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r8,7584(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 7584);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x825741d8
	sub_825741D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82574C84"))) PPC_WEAK_FUNC(sub_82574C84);
PPC_FUNC_IMPL(__imp__sub_82574C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82574C88"))) PPC_WEAK_FUNC(sub_82574C88);
PPC_FUNC_IMPL(__imp__sub_82574C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// ld r8,7584(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 7584);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// b 0x825741d8
	sub_825741D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82574CA4"))) PPC_WEAK_FUNC(sub_82574CA4);
PPC_FUNC_IMPL(__imp__sub_82574CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82574CA8"))) PPC_WEAK_FUNC(sub_82574CA8);
PPC_FUNC_IMPL(__imp__sub_82574CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// ld r8,7584(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 7584);
	// b 0x825741d8
	sub_825741D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82574CC4"))) PPC_WEAK_FUNC(sub_82574CC4);
PPC_FUNC_IMPL(__imp__sub_82574CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82574CC8"))) PPC_WEAK_FUNC(sub_82574CC8);
PPC_FUNC_IMPL(__imp__sub_82574CC8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x825741d8
	sub_825741D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82574CE0"))) PPC_WEAK_FUNC(sub_82574CE0);
PPC_FUNC_IMPL(__imp__sub_82574CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82574d70
	if (cr0.eq) goto loc_82574D70;
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82574d1c
	if (!cr6.lt) goto loc_82574D1C;
loc_82574D10:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x82574d28
	goto loc_82574D28;
loc_82574D1C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82574D28:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82574d50
	if (!cr6.eq) goto loc_82574D50;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82574d54
	if (cr6.eq) goto loc_82574D54;
loc_82574D50:
	// li r11,0
	r11.s64 = 0;
loc_82574D54:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82574da0
	if (!cr0.eq) goto loc_82574DA0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82574d10
	if (cr6.lt) goto loc_82574D10;
loc_82574D70:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,565
	ctx.r7.s64 = 565;
	// addi r6,r11,-7696
	ctx.r6.s64 = r11.s64 + -7696;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_82574D98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_82574DA0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82574d98
	goto loc_82574D98;
}

__attribute__((alias("__imp__sub_82574DA8"))) PPC_WEAK_FUNC(sub_82574DA8);
PPC_FUNC_IMPL(__imp__sub_82574DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r31,432(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// beq 0x82574df4
	if (cr0.eq) goto loc_82574DF4;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// li r23,0
	r23.s64 = 0;
	// b 0x82574dfc
	goto loc_82574DFC;
loc_82574DF4:
	// li r23,0
	r23.s64 = 0;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_82574DFC:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// addi r4,r11,-7504
	ctx.r4.s64 = r11.s64 + -7504;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwz r30,136(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// b 0x82574e80
	goto loc_82574E80;
loc_82574E14:
	// lwz r31,28(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// b 0x82574e70
	goto loc_82574E70;
loc_82574E1C:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82574e6c
	if (cr0.eq) goto loc_82574E6C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82574e6c
	if (cr0.eq) goto loc_82574E6C;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82574e6c
	if (cr0.eq) goto loc_82574E6C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bne cr6,0x82574e6c
	if (!cr6.eq) goto loc_82574E6C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82574E6C:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82574E70:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82574e1c
	if (!cr6.eq) goto loc_82574E1C;
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
loc_82574E80:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82574e14
	if (!cr6.eq) goto loc_82574E14;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82576584
	if (cr6.eq) goto loc_82576584;
	// lis r11,-32169
	r11.s64 = -2108227584;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17584
	ctx.r4.s64 = r11.s64 + 17584;
	// bl 0x82582a30
	sub_82582A30(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r10,1112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1112);
	// rlwinm. r10,r10,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825763f0
	if (cr0.eq) goto loc_825763F0;
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x82574eec
	if (cr0.eq) goto loc_82574EEC;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// mr r16,r31
	r16.u64 = r31.u64;
	// b 0x82574ef0
	goto loc_82574EF0;
loc_82574EEC:
	// mr r16,r23
	r16.u64 = r23.u64;
loc_82574EF0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r25,r23
	r25.u64 = r23.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82574ff4
	if (cr0.eq) goto loc_82574FF4;
	// mr r24,r23
	r24.u64 = r23.u64;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bge cr6,0x82574f18
	if (!cr6.lt) goto loc_82574F18;
loc_82574F0C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r24
	ctx.r3.u64 = r11.u64 + r24.u64;
	// b 0x82574f24
	goto loc_82574F24;
loc_82574F18:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82574F24:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r23
	r27.u64 = r23.u64;
	// addi r28,r11,896
	r28.s64 = r11.s64 + 896;
	// addi r26,r11,928
	r26.s64 = r11.s64 + 928;
loc_82574F34:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82574fe0
	if (cr6.eq) goto loc_82574FE0;
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// mr r31,r23
	r31.u64 = r23.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82574fbc
	if (cr0.eq) goto loc_82574FBC;
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82574f68
	if (!cr6.lt) goto loc_82574F68;
loc_82574F5C:
	// lwz r11,8(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x82574f74
	goto loc_82574F74;
loc_82574F68:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82574F74:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82574f9c
	if (!cr6.eq) goto loc_82574F9C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82574fa0
	if (cr6.eq) goto loc_82574FA0;
loc_82574F9C:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82574FA0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82574fcc
	if (!cr0.eq) goto loc_82574FCC;
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82574f5c
	if (cr6.lt) goto loc_82574F5C;
loc_82574FBC:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,4(r16)
	ctx.r4.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
loc_82574FCC:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(r27.s32, 4, xer);
	// blt cr6,0x82574f34
	if (cr6.lt) goto loc_82574F34;
loc_82574FE0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x82574f0c
	if (cr6.lt) goto loc_82574F0C;
loc_82574FF4:
	// lis r11,-32169
	r11.s64 = -2108227584;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// addi r4,r11,15920
	ctx.r4.s64 = r11.s64 + 15920;
	// bl 0x82582a30
	sub_82582A30(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,432(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r14.u32);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,432(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r18.u32);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,432(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,432(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r24.u32);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,432(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r19.u32);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,432(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// lwz r10,4(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// mr r25,r23
	r25.u64 = r23.u64;
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r20,r11,27,5,31
	r20.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r15.u32);
	// ble cr6,0x82575198
	if (!cr6.gt) goto loc_82575198;
	// rlwinm r30,r20,2,0,29
	r30.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r18
	r31.u64 = r18.u64;
	// subf r28,r18,r14
	r28.s64 = r14.s64 - r18.s64;
	// subf r27,r18,r22
	r27.s64 = r22.s64 - r18.s64;
	// subf r26,r18,r24
	r26.s64 = r24.s64 - r18.s64;
loc_825750F8:
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// stwx r3,r28,r31
	PPC_STORE_U32(r28.u32 + r31.u32, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// stwx r3,r27,r31
	PPC_STORE_U32(r27.u32 + r31.u32, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// stwx r3,r26,r31
	PPC_STORE_U32(r26.u32 + r31.u32, ctx.r3.u32);
	// ble cr6,0x82575184
	if (!cr6.gt) goto loc_82575184;
	// mr r11,r23
	r11.u64 = r23.u64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_82575158:
	// lwzx r9,r28,r31
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + r31.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwx r23,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, r23.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stwx r23,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r23.u32);
	// lwzx r9,r27,r31
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + r31.u32);
	// stwx r23,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r23.u32);
	// lwzx r9,r26,r31
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + r31.u32);
	// stwx r23,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r23.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82575158
	if (!cr0.eq) goto loc_82575158;
loc_82575184:
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x825750f8
	if (cr6.lt) goto loc_825750F8;
loc_82575198:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// li r23,4
	r23.s64 = 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825751e0
	if (!cr6.gt) goto loc_825751E0;
	// mr r11,r21
	r11.u64 = r21.u64;
	// subf r9,r21,r19
	ctx.r9.s64 = r19.s64 - r21.s64;
	// subf r8,r21,r15
	ctx.r8.s64 = r15.s64 - r21.s64;
loc_825751B8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r6,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r6.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stwx r23,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, r23.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x825751b8
	if (cr6.lt) goto loc_825751B8;
loc_825751E0:
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// rlwinm r31,r20,2,0,29
	r31.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r22.u32);
	// li r22,0
	r22.s64 = 0;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r24.u32);
	// stw r18,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r18.u32);
	// stw r14,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r14.u32);
	// beq 0x82575344
	if (cr0.eq) goto loc_82575344;
	// li r26,0
	r26.s64 = 0;
	// mr r28,r21
	r28.u64 = r21.u64;
	// subf r25,r21,r19
	r25.s64 = r19.s64 - r21.s64;
	// subf r24,r21,r15
	r24.s64 = r15.s64 - r21.s64;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// bge cr6,0x82575278
	if (!cr6.lt) goto loc_82575278;
loc_8257526C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// b 0x82575284
	goto loc_82575284;
loc_82575278:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82575284:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,928
	ctx.r10.s64 = ctx.r10.s64 + 928;
loc_82575290:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825752ac
	if (cr6.eq) goto loc_825752AC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82575290
	if (cr6.lt) goto loc_82575290;
loc_825752AC:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82575344
	if (!cr6.eq) goto loc_82575344;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r23,r28,r25
	PPC_STORE_U32(r28.u32 + r25.u32, r23.u32);
	// stw r22,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r22.u32);
	// clrlwi r11,r22,27
	r11.u64 = r22.u32 & 0x1F;
	// rlwinm r30,r22,29,3,29
	r30.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 29) & 0x1FFFFFFC;
	// li r31,896
	r31.s64 = 896;
	// stwx r10,r28,r24
	PPC_STORE_U32(r28.u32 + r24.u32, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r27,r10,r11
	r27.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
loc_825752D8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// bge cr6,0x825752f0
	if (!cr6.lt) goto loc_825752F0;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// b 0x825752fc
	goto loc_825752FC;
loc_825752F0:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825752FC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// ldx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + r31.u32);
	// bl 0x82574ce0
	sub_82574CE0(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpwi cr6,r31,928
	cr6.compare<int32_t>(r31.s32, 928, xer);
	// lwzx r11,r11,r14
	r11.u64 = PPC_LOAD_U32(r11.u32 + r14.u32);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// or r10,r27,r10
	ctx.r10.u64 = r27.u64 | ctx.r10.u64;
	// stwx r10,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r10.u32);
	// blt cr6,0x825752d8
	if (cr6.lt) goto loc_825752D8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// blt cr6,0x8257526c
	if (cr6.lt) goto loc_8257526C;
loc_82575344:
	// li r19,-1
	r19.s64 = -1;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r15,r22
	r15.u64 = r22.u64;
	// mr r14,r19
	r14.u64 = r19.u64;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r19.u32);
	// bge cr6,0x82575dbc
	if (!cr6.lt) goto loc_82575DBC;
	// lwz r21,120(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r23,116(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r24,112(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8257536C:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r22,2,0,29
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	r31.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,928
	r11.s64 = r11.s64 + 928;
loc_82575384:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825753a0
	if (cr6.eq) goto loc_825753A0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x82575384
	if (cr6.lt) goto loc_82575384;
loc_825753A0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// blt cr6,0x825753b8
	if (cr6.lt) goto loc_825753B8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825753B8:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r25,r22,2,0,29
	r25.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r31,4
	xer.ca = r31.u32 <= 4;
	r11.s64 = 4 - r31.s64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// stwx r11,r25,r10
	PPC_STORE_U32(r25.u32 + ctx.r10.u32, r11.u32);
	// ble cr6,0x82575410
	if (!cr6.gt) goto loc_82575410;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r8,r3,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r3.s64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r7,r3,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r3.s64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_825753F4:
	// stwx r19,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, r19.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r19,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r19.u32);
	// stwx r19,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, r19.u32);
	// stwx r19,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + r11.u32, r19.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x825753f4
	if (!cr0.eq) goto loc_825753F4;
loc_82575410:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r14,-1
	cr6.compare<int32_t>(r14.s32, -1, xer);
	// stwx r31,r25,r11
	PPC_STORE_U32(r25.u32 + r11.u32, r31.u32);
	// bne cr6,0x82575428
	if (!cr6.eq) goto loc_82575428;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// beq cr6,0x82575448
	if (cr6.eq) goto loc_82575448;
loc_82575428:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8257544c
	if (!cr6.eq) goto loc_8257544C;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bne cr6,0x8257544c
	if (!cr6.eq) goto loc_8257544C;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// cmpwi cr6,r14,-1
	cr6.compare<int32_t>(r14.s32, -1, xer);
	// bne cr6,0x8257544c
	if (!cr6.eq) goto loc_8257544C;
loc_82575448:
	// mr r14,r22
	r14.u64 = r22.u64;
loc_8257544C:
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x825755e4
	if (!cr6.gt) goto loc_825755E4;
	// li r27,896
	r27.s64 = 896;
loc_8257545C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// bge cr6,0x82575474
	if (!cr6.lt) goto loc_82575474;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x82575480
	goto loc_82575480;
loc_82575474:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82575480:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// ldx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U64(r27.u32 + r11.u32);
	// bl 0x82574ce0
	sub_82574CE0(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r22,r10
	cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, xer);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r28,r11,r10
	r28.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bge cr6,0x825754b4
	if (!cr6.lt) goto loc_825754B4;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x825754c0
	goto loc_825754C0;
loc_825754B4:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825754C0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// ldx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U64(r27.u32 + r11.u32);
	// bl 0x82574ce0
	sub_82574CE0(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r22,r10
	cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, xer);
	// lwzx r30,r11,r18
	r30.u64 = PPC_LOAD_U32(r11.u32 + r18.u32);
	// bge cr6,0x825754f0
	if (!cr6.lt) goto loc_825754F0;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x825754fc
	goto loc_825754FC;
loc_825754F0:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825754FC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// ldx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U64(r27.u32 + r11.u32);
	// bl 0x82574ce0
	sub_82574CE0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r21,0
	r21.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// ble cr6,0x82575620
	if (!cr6.gt) goto loc_82575620;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// neg r10,r11
	ctx.r10.s64 = -r11.s64;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r7,r11,r30
	ctx.r7.s64 = r30.s64 - r11.s64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r6,r11,r28
	ctx.r6.s64 = r28.s64 - r11.s64;
	// mr r30,r20
	r30.u64 = r20.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82575554:
	// lwzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	// lwzx r28,r9,r11
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// and. r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & r28.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// beq 0x82575574
	if (cr0.eq) goto loc_82575574;
	// li r24,1
	r24.s64 = 1;
loc_82575574:
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// bge cr6,0x82575590
	if (!cr6.lt) goto loc_82575590;
	// lwzx r10,r5,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + r11.u32);
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwx r10,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + r11.u32, ctx.r10.u32);
	// beq 0x82575590
	if (cr0.eq) goto loc_82575590;
	// li r23,1
	r23.s64 = 1;
loc_82575590:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// bge cr6,0x825755ac
	if (!cr6.lt) goto loc_825755AC;
	// lwzx r10,r4,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + r11.u32);
	// and. r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 & ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwx r10,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + r11.u32, ctx.r10.u32);
	// beq 0x825755ac
	if (cr0.eq) goto loc_825755AC;
	// li r21,1
	r21.s64 = 1;
loc_825755AC:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82575554
	if (!cr0.eq) goto loc_82575554;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x825755d0
	if (!cr6.eq) goto loc_825755D0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x825755d0
	if (!cr6.eq) goto loc_825755D0;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x82575620
	if (cr6.eq) goto loc_82575620;
loc_825755D0:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r26,r31
	cr6.compare<int32_t>(r26.s32, r31.s32, xer);
	// blt cr6,0x8257545c
	if (cr6.lt) goto loc_8257545C;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_825755E4:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x825755f4
	if (cr6.eq) goto loc_825755F4;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8257560c
	goto loc_8257560C;
loc_825755F4:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x82575604
	if (cr6.eq) goto loc_82575604;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x8257560c
	goto loc_8257560C;
loc_82575604:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x82575620
	if (cr6.eq) goto loc_82575620;
loc_8257560C:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82573e58
	sub_82573E58(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r3,r25,r11
	PPC_STORE_U32(r25.u32 + r11.u32, ctx.r3.u32);
	// b 0x82575dac
	goto loc_82575DAC;
loc_82575620:
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// bne cr6,0x825758f8
	if (!cr6.eq) goto loc_825758F8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// bge cr6,0x82575640
	if (!cr6.lt) goto loc_82575640;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x8257564c
	goto loc_8257564C;
loc_82575640:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257564C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// ld r4,896(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 896);
	// bl 0x82574ce0
	sub_82574CE0(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r22,r10
	cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, xer);
	// lwzx r27,r11,r18
	r27.u64 = PPC_LOAD_U32(r11.u32 + r18.u32);
	// bge cr6,0x8257567c
	if (!cr6.lt) goto loc_8257567C;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x82575688
	goto loc_82575688;
loc_8257567C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82575688:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// ld r4,904(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 904);
	// bl 0x82574ce0
	sub_82574CE0(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r22,r10
	cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, xer);
	// lwzx r30,r11,r18
	r30.u64 = PPC_LOAD_U32(r11.u32 + r18.u32);
	// bge cr6,0x825756b8
	if (!cr6.lt) goto loc_825756B8;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x825756c4
	goto loc_825756C4;
loc_825756B8:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825756C4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// ld r4,912(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 912);
	// bl 0x82574ce0
	sub_82574CE0(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r24,0
	r24.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// lwzx r10,r11,r18
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r23.u32);
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// ble cr6,0x82575770
	if (!cr6.gt) goto loc_82575770;
	// mr r11,r30
	r11.u64 = r30.u64;
	// subf r7,r30,r27
	ctx.r7.s64 = r27.s64 - r30.s64;
	// subf r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - r30.s64;
loc_82575710:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// lwzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	// and r23,r9,r8
	r23.u64 = ctx.r9.u64 & ctx.r8.u64;
	// and r21,r9,r10
	r21.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r23.u32);
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// and. r24,r10,r8
	r24.u64 = ctx.r10.u64 & ctx.r8.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// bne 0x8257575c
	if (!cr0.eq) goto loc_8257575C;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x82575764
	if (!cr6.eq) goto loc_82575764;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// bne cr6,0x8257576c
	if (!cr6.eq) goto loc_8257576C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r5,r20
	cr6.compare<int32_t>(ctx.r5.s32, r20.s32, xer);
	// blt cr6,0x82575710
	if (cr6.lt) goto loc_82575710;
	// b 0x82575770
	goto loc_82575770;
loc_8257575C:
	// li r28,0
	r28.s64 = 0;
	// b 0x82575770
	goto loc_82575770;
loc_82575764:
	// li r28,1
	r28.s64 = 1;
	// b 0x82575770
	goto loc_82575770;
loc_8257576C:
	// li r28,2
	r28.s64 = 2;
loc_82575770:
	// cmpw cr6,r5,r20
	cr6.compare<int32_t>(ctx.r5.s32, r20.s32, xer);
	// beq cr6,0x82575d24
	if (cr6.eq) goto loc_82575D24;
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82573e58
	sub_82573E58(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// add r31,r3,r10
	r31.u64 = ctx.r3.u64 + ctx.r10.u64;
	// bge cr6,0x825757ac
	if (!cr6.lt) goto loc_825757AC;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r30,r11,r25
	r30.u64 = r11.u64 + r25.u64;
	// b 0x825757bc
	goto loc_825757BC;
loc_825757AC:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825757BC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x825757d8
	if (!cr6.lt) goto loc_825757D8;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x825757e4
	goto loc_825757E4;
loc_825757D8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825757E4:
	// subfic r10,r28,114
	xer.ca = r28.u32 <= 114;
	ctx.r10.s64 = 114 - r28.s64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,920(r11)
	PPC_STORE_U32(r11.u32 + 920, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,924(r11)
	PPC_STORE_U32(r11.u32 + 924, ctx.r10.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82575824
	if (!cr6.lt) goto loc_82575824;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82575830
	goto loc_82575830;
loc_82575824:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82575830:
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r7,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r7.s64 = r31.s32 >> 5;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r6,r26,112
	ctx.r6.s64 = r26.s64 + 112;
	// subf r8,r10,r31
	ctx.r8.s64 = r31.s64 - ctx.r10.s64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// rlwinm r26,r6,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,940(r9)
	PPC_STORE_U32(ctx.r9.u32 + 940, ctx.r10.u32);
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r28,r9,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// slw r27,r10,r8
	r27.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r31,r25,r11
	PPC_STORE_U32(r25.u32 + r11.u32, r31.u32);
loc_82575884:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// bge cr6,0x8257589c
	if (!cr6.lt) goto loc_8257589C;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x825758a8
	goto loc_825758A8;
loc_8257589C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825758A8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// ldx r4,r11,r26
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + r26.u32);
	// bl 0x82574ce0
	sub_82574CE0(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// beq cr6,0x825758dc
	if (cr6.eq) goto loc_825758DC;
	// lwzx r11,r11,r18
	r11.u64 = PPC_LOAD_U32(r11.u32 + r18.u32);
	// lwzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// andc r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 & ~r27.u64;
	// stwx r9,r28,r11
	PPC_STORE_U32(r28.u32 + r11.u32, ctx.r9.u32);
loc_825758DC:
	// lwzx r11,r28,r10
	r11.u64 = PPC_LOAD_U32(r28.u32 + ctx.r10.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// or r11,r27,r11
	r11.u64 = r27.u64 | r11.u64;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// stwx r11,r28,r10
	PPC_STORE_U32(r28.u32 + ctx.r10.u32, r11.u32);
	// blt cr6,0x82575884
	if (cr6.lt) goto loc_82575884;
	// b 0x82575dac
	goto loc_82575DAC;
loc_825758F8:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// bne cr6,0x82575d24
	if (!cr6.eq) goto loc_82575D24;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// bge cr6,0x82575918
	if (!cr6.lt) goto loc_82575918;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x82575924
	goto loc_82575924;
loc_82575918:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82575924:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// ld r4,896(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 896);
	// bl 0x82574ce0
	sub_82574CE0(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r22,r10
	cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, xer);
	// lwzx r27,r11,r18
	r27.u64 = PPC_LOAD_U32(r11.u32 + r18.u32);
	// bge cr6,0x82575954
	if (!cr6.lt) goto loc_82575954;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x82575960
	goto loc_82575960;
loc_82575954:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82575960:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// ld r4,904(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 904);
	// bl 0x82574ce0
	sub_82574CE0(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r22,r10
	cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, xer);
	// lwzx r30,r11,r18
	r30.u64 = PPC_LOAD_U32(r11.u32 + r18.u32);
	// bge cr6,0x82575990
	if (!cr6.lt) goto loc_82575990;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x8257599c
	goto loc_8257599C;
loc_82575990:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257599C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// ld r4,896(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 896);
	// bl 0x82574ce0
	sub_82574CE0(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r22,r10
	cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwzx r28,r11,r10
	r28.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bge cr6,0x825759d0
	if (!cr6.lt) goto loc_825759D0;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x825759dc
	goto loc_825759DC;
loc_825759D0:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825759DC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// ld r4,904(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 904);
	// bl 0x82574ce0
	sub_82574CE0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r24,0
	r24.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// li r26,0
	r26.s64 = 0;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r23.u32);
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// ble cr6,0x82575aa4
	if (!cr6.gt) goto loc_82575AA4;
	// mr r11,r30
	r11.u64 = r30.u64;
	// subf r9,r30,r27
	ctx.r9.s64 = r27.s64 - r30.s64;
	// subf r8,r30,r28
	ctx.r8.s64 = r28.s64 - r30.s64;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
loc_82575A34:
	// lwzx r24,r9,r11
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r23,0(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r21,r8,r11
	r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpwi r24,0
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r23.u32);
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// bne 0x82575a88
	if (!cr0.eq) goto loc_82575A88;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x82575a90
	if (!cr6.eq) goto loc_82575A90;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// bne cr6,0x82575a98
	if (!cr6.eq) goto loc_82575A98;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82575aa0
	if (!cr6.eq) goto loc_82575AA0;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r6,r20
	cr6.compare<int32_t>(ctx.r6.s32, r20.s32, xer);
	// blt cr6,0x82575a34
	if (cr6.lt) goto loc_82575A34;
	// b 0x82575aa4
	goto loc_82575AA4;
loc_82575A88:
	// li r26,0
	r26.s64 = 0;
	// b 0x82575aa4
	goto loc_82575AA4;
loc_82575A90:
	// li r26,1
	r26.s64 = 1;
	// b 0x82575aa4
	goto loc_82575AA4;
loc_82575A98:
	// li r26,2
	r26.s64 = 2;
	// b 0x82575aa4
	goto loc_82575AA4;
loc_82575AA0:
	// li r26,3
	r26.s64 = 3;
loc_82575AA4:
	// cmpw cr6,r6,r20
	cr6.compare<int32_t>(ctx.r6.s32, r20.s32, xer);
	// beq cr6,0x82575d24
	if (cr6.eq) goto loc_82575D24;
	// rlwinm r11,r26,2,0,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82573e58
	sub_82573E58(ctx, base);
	// rlwinm r11,r6,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// add r31,r3,r11
	r31.u64 = ctx.r3.u64 + r11.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bge cr6,0x82575b7c
	if (!cr6.lt) goto loc_82575B7C;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// bge cr6,0x82575ae8
	if (!cr6.lt) goto loc_82575AE8;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r30,r11,r25
	r30.u64 = r11.u64 + r25.u64;
	// b 0x82575af8
	goto loc_82575AF8;
loc_82575AE8:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82575AF8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82575b14
	if (!cr6.lt) goto loc_82575B14;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82575b20
	goto loc_82575B20;
loc_82575B14:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82575B20:
	// subfic r10,r26,113
	xer.ca = r26.u32 <= 113;
	ctx.r10.s64 = 113 - r26.s64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,920(r11)
	PPC_STORE_U32(r11.u32 + 920, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,924(r11)
	PPC_STORE_U32(r11.u32 + 924, ctx.r10.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82575b60
	if (!cr6.lt) goto loc_82575B60;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82575b6c
	goto loc_82575B6C;
loc_82575B60:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82575B6C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,940(r11)
	PPC_STORE_U32(r11.u32 + 940, ctx.r10.u32);
	// b 0x82575c20
	goto loc_82575C20;
loc_82575B7C:
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// bge cr6,0x82575b90
	if (!cr6.lt) goto loc_82575B90;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r30,r11,r25
	r30.u64 = r11.u64 + r25.u64;
	// b 0x82575ba0
	goto loc_82575BA0;
loc_82575B90:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82575BA0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82575bbc
	if (!cr6.lt) goto loc_82575BBC;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82575bc8
	goto loc_82575BC8;
loc_82575BBC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82575BC8:
	// subfic r10,r26,115
	xer.ca = r26.u32 <= 115;
	ctx.r10.s64 = 115 - r26.s64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,912(r11)
	PPC_STORE_U32(r11.u32 + 912, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,916(r11)
	PPC_STORE_U32(r11.u32 + 916, ctx.r10.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82575c08
	if (!cr6.lt) goto loc_82575C08;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82575c14
	goto loc_82575C14;
loc_82575C08:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82575C14:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,936(r11)
	PPC_STORE_U32(r11.u32 + 936, ctx.r10.u32);
loc_82575C20:
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,896
	r30.s64 = 896;
	// li r28,928
	r28.s64 = 928;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r31,r25,r11
	PPC_STORE_U32(r25.u32 + r11.u32, r31.u32);
loc_82575C44:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// bge cr6,0x82575c5c
	if (!cr6.lt) goto loc_82575C5C;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x82575c68
	goto loc_82575C68;
loc_82575C5C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82575C68:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82575dac
	if (cr6.eq) goto loc_82575DAC;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// bge cr6,0x82575c90
	if (!cr6.lt) goto loc_82575C90;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x82575c9c
	goto loc_82575C9C;
loc_82575C90:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82575C9C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// ldx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + r30.u32);
	// bl 0x82574ce0
	sub_82574CE0(ctx, base);
	// srawi r11,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r11.s64 = r31.s32 >> 5;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subf r8,r11,r31
	ctx.r8.s64 = r31.s64 - r11.s64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// ble cr6,0x82575cec
	if (!cr6.gt) goto loc_82575CEC;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r9,r9,r18
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r18.u32);
	// b 0x82575cf8
	goto loc_82575CF8;
loc_82575CEC:
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r8,r9,r18
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r18.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
loc_82575CF8:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// andc r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r10.u64;
	// cmpwi cr6,r28,944
	cr6.compare<int32_t>(r28.s32, 944, xer);
	// stwx r7,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// blt cr6,0x82575c44
	if (cr6.lt) goto loc_82575C44;
	// b 0x82575dac
	goto loc_82575DAC;
loc_82575D24:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stwx r22,r25,r11
	PPC_STORE_U32(r25.u32 + r11.u32, r22.u32);
	// ble cr6,0x82575dac
	if (!cr6.gt) goto loc_82575DAC;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// clrlwi r9,r22,27
	ctx.r9.u64 = r22.u32 & 0x1F;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r28,r22,29,3,29
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 29) & 0x1FFFFFFC;
	// li r30,896
	r30.s64 = 896;
	// lwz r27,-4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// li r11,1
	r11.s64 = 1;
	// slw r26,r11,r9
	r26.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
loc_82575D58:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// bge cr6,0x82575d70
	if (!cr6.lt) goto loc_82575D70;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x82575d7c
	goto loc_82575D7C;
loc_82575D70:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82575D7C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// ldx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + r30.u32);
	// bl 0x82574ce0
	sub_82574CE0(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// or r10,r26,r10
	ctx.r10.u64 = r26.u64 | ctx.r10.u64;
	// stwx r10,r28,r11
	PPC_STORE_U32(r28.u32 + r11.u32, ctx.r10.u32);
	// bne 0x82575d58
	if (!cr0.eq) goto loc_82575D58;
loc_82575DAC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// blt cr6,0x8257536c
	if (cr6.lt) goto loc_8257536C;
loc_82575DBC:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r24,r15
	r24.u64 = r15.u64;
	// cmplw cr6,r15,r10
	cr6.compare<uint32_t>(r15.u32, ctx.r10.u32, xer);
	// bge cr6,0x82575fd8
	if (!cr6.lt) goto loc_82575FD8;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r15,2,0,29
	r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r19,r11,r9
	r19.u64 = r11.u64 + ctx.r9.u64;
	// subf r18,r9,r8
	r18.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_82575DE0:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82575fc4
	if (!cr0.gt) goto loc_82575FC4;
	// lwzx r9,r18,r19
	ctx.r9.u64 = PPC_LOAD_U32(r18.u32 + r19.u32);
	// cmplw cr6,r9,r24
	cr6.compare<uint32_t>(ctx.r9.u32, r24.u32, xer);
	// bne cr6,0x82575fc4
	if (!cr6.eq) goto loc_82575FC4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82575e08
	if (!cr6.eq) goto loc_82575E08;
	// lwz r30,128(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x82575e18
	goto loc_82575E18;
loc_82575E08:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// mr r30,r14
	r30.u64 = r14.u64;
	// beq cr6,0x82575e18
	if (cr6.eq) goto loc_82575E18;
	// mr r30,r15
	r30.u64 = r15.u64;
loc_82575E18:
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x82575fc4
	if (!cr6.lt) goto loc_82575FC4;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r24,2,0,29
	r21.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r11,r10
	r22.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r20,r10,r11
	r20.s64 = r11.s64 - ctx.r10.s64;
loc_82575E38:
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(r30.u32, r24.u32, xer);
	// ble cr6,0x82575fb0
	if (!cr6.gt) goto loc_82575FB0;
	// lwzx r11,r20,r22
	r11.u64 = PPC_LOAD_U32(r20.u32 + r22.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82575fb0
	if (!cr6.eq) goto loc_82575FB0;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82575fb0
	if (cr6.lt) goto loc_82575FB0;
	// stwx r24,r20,r22
	PPC_STORE_U32(r20.u32 + r22.u32, r24.u32);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// subfic r11,r11,4
	xer.ca = r11.u32 <= 4;
	r11.s64 = 4 - r11.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x82575fa0
	if (!cr6.lt) goto loc_82575FA0;
	// addi r10,r11,232
	ctx.r10.s64 = r11.s64 + 232;
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// rlwinm r23,r30,2,0,29
	r23.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r10,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r25,928
	r25.s64 = 928;
	// rlwinm r27,r11,3,0,28
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r28,896
	r28.s64 = 896;
loc_82575E8C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// bge cr6,0x82575ea4
	if (!cr6.lt) goto loc_82575EA4;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r21
	ctx.r3.u64 = r11.u64 + r21.u64;
	// b 0x82575eb0
	goto loc_82575EB0;
loc_82575EA4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82575EB0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r26,r11
	r11.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82575f90
	if (!cr6.eq) goto loc_82575F90;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82575ed8
	if (!cr6.lt) goto loc_82575ED8;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r31,r11,r23
	r31.u64 = r11.u64 + r23.u64;
	// b 0x82575ee8
	goto loc_82575EE8;
loc_82575ED8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82575EE8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// bge cr6,0x82575f00
	if (!cr6.lt) goto loc_82575F00;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r21
	ctx.r3.u64 = r11.u64 + r21.u64;
	// b 0x82575f0c
	goto loc_82575F0C;
loc_82575F00:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82575F0C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// add r10,r27,r10
	ctx.r10.u64 = r27.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82575f44
	if (!cr6.lt) goto loc_82575F44;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r31,r11,r23
	r31.u64 = r11.u64 + r23.u64;
	// b 0x82575f54
	goto loc_82575F54;
loc_82575F44:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82575F54:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// bge cr6,0x82575f6c
	if (!cr6.lt) goto loc_82575F6C;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r21
	ctx.r3.u64 = r11.u64 + r21.u64;
	// b 0x82575f78
	goto loc_82575F78;
loc_82575F6C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82575F78:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r11,r25
	r11.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// stwx r11,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + r26.u32, r11.u32);
loc_82575F90:
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpwi cr6,r27,928
	cr6.compare<int32_t>(r27.s32, 928, xer);
	// blt cr6,0x82575e8c
	if (cr6.lt) goto loc_82575E8C;
loc_82575FA0:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r11.u32);
loc_82575FB0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82575e38
	if (cr6.lt) goto loc_82575E38;
loc_82575FC4:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(r24.u32, ctx.r10.u32, xer);
	// blt cr6,0x82575de0
	if (cr6.lt) goto loc_82575DE0;
loc_82575FD8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r25,0
	r25.s64 = 0;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x825762b8
	if (cr0.eq) goto loc_825762B8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r24,0
	r24.s64 = 0;
	// addi r20,r11,2936
	r20.s64 = r11.s64 + 2936;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r18,11
	r18.s64 = 11;
	// addi r23,r11,-7508
	r23.s64 = r11.s64 + -7508;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// addi r21,r11,-7540
	r21.s64 = r11.s64 + -7540;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r19,r11,-7548
	r19.s64 = r11.s64 + -7548;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r22,r11,-7560
	r22.s64 = r11.s64 + -7560;
	// bge cr6,0x8257602c
	if (!cr6.lt) goto loc_8257602C;
loc_82576020:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r24
	ctx.r3.u64 = r11.u64 + r24.u64;
	// b 0x82576038
	goto loc_82576038;
loc_8257602C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82576038:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r5,224(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// li r28,928
	r28.s64 = 928;
	// li r31,896
	r31.s64 = 896;
loc_82576058:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bge cr6,0x82576070
	if (!cr6.lt) goto loc_82576070;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r24
	ctx.r3.u64 = r11.u64 + r24.u64;
	// b 0x8257607c
	goto loc_8257607C;
loc_82576070:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257607C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// ldx r30,r31,r11
	r30.u64 = PPC_LOAD_U64(r31.u32 + r11.u32);
	// bge cr6,0x8257609c
	if (!cr6.lt) goto loc_8257609C;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r24
	ctx.r3.u64 = r11.u64 + r24.u64;
	// b 0x825760a8
	goto loc_825760A8;
loc_8257609C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825760A8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825760e4
	if (cr6.eq) goto loc_825760E4;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82573ec0
	sub_82573EC0(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpwi cr6,r31,928
	cr6.compare<int32_t>(r31.s32, 928, xer);
	// blt cr6,0x82576058
	if (cr6.lt) goto loc_82576058;
loc_825760E4:
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwzx r5,r24,r31
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + r31.u32);
	// cmplw cr6,r5,r25
	cr6.compare<uint32_t>(ctx.r5.u32, r25.u32, xer);
	// beq cr6,0x82576224
	if (cr6.eq) goto loc_82576224;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwzx r4,r24,r31
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + r31.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82576120
	if (!cr6.lt) goto loc_82576120;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82576128
	goto loc_82576128;
loc_82576120:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82576128:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r26,0(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bge cr6,0x82576144
	if (!cr6.lt) goto loc_82576144;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r24
	ctx.r3.u64 = r11.u64 + r24.u64;
	// b 0x82576150
	goto loc_82576150;
loc_82576144:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82576150:
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r27,r31,896
	r27.s64 = r31.s64 + 896;
	// addi r28,r31,928
	r28.s64 = r31.s64 + 928;
loc_82576160:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82576214
	if (cr6.eq) goto loc_82576214;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r26,896
	r11.s64 = r26.s64 + 896;
	// addi r8,r26,928
	ctx.r8.s64 = r26.s64 + 928;
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
loc_82576180:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825761e0
	if (cr6.eq) goto loc_825761E0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x825761b0
	if (!cr6.eq) goto loc_825761B0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq cr6,0x825761b4
	if (cr6.eq) goto loc_825761B4;
loc_825761B0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_825761B4:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825761d4
	if (!cr0.eq) goto loc_825761D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x82576180
	if (cr6.lt) goto loc_82576180;
	// b 0x825761e0
	goto loc_825761E0;
loc_825761D4:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// add r10,r31,r30
	ctx.r10.u64 = r31.u64 + r30.u64;
	// stb r11,944(r10)
	PPC_STORE_U8(ctx.r10.u32 + 944, r11.u8);
loc_825761E0:
	// lwz r11,56(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 56);
	// add r10,r31,r30
	ctx.r10.u64 = r31.u64 + r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r18,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r18.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// lbz r5,944(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 944);
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x82576160
	if (cr6.lt) goto loc_82576160;
loc_82576214:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// b 0x825762a4
	goto loc_825762A4;
loc_82576224:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bge cr6,0x82576244
	if (!cr6.lt) goto loc_82576244;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r24
	ctx.r3.u64 = r11.u64 + r24.u64;
	// b 0x82576250
	goto loc_82576250;
loc_82576244:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82576250:
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82574058
	sub_82574058(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r28,r31,896
	r28.s64 = r31.s64 + 896;
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// addi r27,r31,928
	r27.s64 = r31.s64 + 928;
	// stw r18,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r18.u32);
loc_82576270:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825762a4
	if (cr6.eq) goto loc_825762A4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// ld r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// bl 0x8254bff0
	sub_8254BFF0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x82576270
	if (cr6.lt) goto loc_82576270;
loc_825762A4:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// blt cr6,0x82576020
	if (cr6.lt) goto loc_82576020;
loc_825762B8:
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// lwz r26,84(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8257637c
	if (!cr6.gt) goto loc_8257637C;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r31,r26
	r31.u64 = r26.u64;
	// subf r29,r26,r11
	r29.s64 = r11.s64 - r26.s64;
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// subf r28,r26,r11
	r28.s64 = r11.s64 - r26.s64;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r27,r26,r11
	r27.s64 = r11.s64 - r26.s64;
loc_82576328:
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwzx r4,r28,r31
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + r31.u32);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwzx r4,r27,r31
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + r31.u32);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82576328
	if (cr6.lt) goto loc_82576328;
loc_8257637C:
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// b 0x82576584
	goto loc_82576584;
loc_825763F0:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82576584
	if (cr0.eq) goto loc_82576584;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r25,r23
	r25.u64 = r23.u64;
	// addi r22,r11,2936
	r22.s64 = r11.s64 + 2936;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r18,11
	r18.s64 = 11;
	// addi r23,r11,-7548
	r23.s64 = r11.s64 + -7548;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// addi r24,r11,-7560
	r24.s64 = r11.s64 + -7560;
	// bge cr6,0x82576434
	if (!cr6.lt) goto loc_82576434;
loc_82576428:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x82576440
	goto loc_82576440;
loc_82576434:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82576440:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r5,224(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// li r28,928
	r28.s64 = 928;
	// li r31,896
	r31.s64 = 896;
loc_82576460:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bge cr6,0x82576478
	if (!cr6.lt) goto loc_82576478;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x82576484
	goto loc_82576484;
loc_82576478:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82576484:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// ldx r30,r31,r11
	r30.u64 = PPC_LOAD_U64(r31.u32 + r11.u32);
	// bge cr6,0x825764a4
	if (!cr6.lt) goto loc_825764A4;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x825764b0
	goto loc_825764B0;
loc_825764A4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825764B0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825764ec
	if (cr6.eq) goto loc_825764EC;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82573ec0
	sub_82573EC0(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpwi cr6,r31,928
	cr6.compare<int32_t>(r31.s32, 928, xer);
	// blt cr6,0x82576460
	if (cr6.lt) goto loc_82576460;
loc_825764EC:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bge cr6,0x82576510
	if (!cr6.lt) goto loc_82576510;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x8257651c
	goto loc_8257651C;
loc_82576510:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257651C:
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82574058
	sub_82574058(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r28,r31,896
	r28.s64 = r31.s64 + 896;
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// addi r27,r31,928
	r27.s64 = r31.s64 + 928;
	// stw r18,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r18.u32);
loc_8257653C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82576570
	if (cr6.eq) goto loc_82576570;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// ld r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// bl 0x8254bff0
	sub_8254BFF0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x8257653c
	if (cr6.lt) goto loc_8257653C;
loc_82576570:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// blt cr6,0x82576428
	if (cr6.lt) goto loc_82576428;
loc_82576584:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8257658C"))) PPC_WEAK_FUNC(sub_8257658C);
PPC_FUNC_IMPL(__imp__sub_8257658C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576590"))) PPC_WEAK_FUNC(sub_82576590);
PPC_FUNC_IMPL(__imp__sub_82576590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825748a8
	sub_825748A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825765bc
	if (cr0.eq) goto loc_825765BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82574908
	sub_82574908(ctx, base);
loc_825765BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825765D0"))) PPC_WEAK_FUNC(sub_825765D0);
PPC_FUNC_IMPL(__imp__sub_825765D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r8,7584(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 7584);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x82574a20
	sub_82574A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825765EC"))) PPC_WEAK_FUNC(sub_825765EC);
PPC_FUNC_IMPL(__imp__sub_825765EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825765F0"))) PPC_WEAK_FUNC(sub_825765F0);
PPC_FUNC_IMPL(__imp__sub_825765F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// ld r8,7584(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 7584);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// b 0x82574a20
	sub_82574A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257660C"))) PPC_WEAK_FUNC(sub_8257660C);
PPC_FUNC_IMPL(__imp__sub_8257660C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576610"))) PPC_WEAK_FUNC(sub_82576610);
PPC_FUNC_IMPL(__imp__sub_82576610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// ld r8,7584(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 7584);
	// b 0x82574a20
	sub_82574A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257662C"))) PPC_WEAK_FUNC(sub_8257662C);
PPC_FUNC_IMPL(__imp__sub_8257662C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576630"))) PPC_WEAK_FUNC(sub_82576630);
PPC_FUNC_IMPL(__imp__sub_82576630) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82574a20
	sub_82574A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576648"))) PPC_WEAK_FUNC(sub_82576648);
PPC_FUNC_IMPL(__imp__sub_82576648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82574da8
	sub_82574DA8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,368(r11)
	PPC_STORE_U8(r11.u32 + 368, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576688"))) PPC_WEAK_FUNC(sub_82576688);
PPC_FUNC_IMPL(__imp__sub_82576688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x825766c4
	if (cr0.eq) goto loc_825766C4;
loc_82576698:
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825766cc
	if (!cr0.eq) goto loc_825766CC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82576698
	if (cr6.lt) goto loc_82576698;
loc_825766C4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_825766CC:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825766D4"))) PPC_WEAK_FUNC(sub_825766D4);
PPC_FUNC_IMPL(__imp__sub_825766D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825766D8"))) PPC_WEAK_FUNC(sub_825766D8);
PPC_FUNC_IMPL(__imp__sub_825766D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82576708
	if (!cr6.lt) goto loc_82576708;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8257670c
	goto loc_8257670C;
loc_82576708:
	// li r11,0
	r11.s64 = 0;
loc_8257670C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576734"))) PPC_WEAK_FUNC(sub_82576734);
PPC_FUNC_IMPL(__imp__sub_82576734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576738"))) PPC_WEAK_FUNC(sub_82576738);
PPC_FUNC_IMPL(__imp__sub_82576738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,2140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2140);
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576764"))) PPC_WEAK_FUNC(sub_82576764);
PPC_FUNC_IMPL(__imp__sub_82576764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576768"))) PPC_WEAK_FUNC(sub_82576768);
PPC_FUNC_IMPL(__imp__sub_82576768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// rlwinm r11,r4,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,2140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2140);
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt 0x82576794
	if (cr0.gt) goto loc_82576794;
	// li r11,0
	r11.s64 = 0;
loc_82576794:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257679C"))) PPC_WEAK_FUNC(sub_8257679C);
PPC_FUNC_IMPL(__imp__sub_8257679C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825767A0"))) PPC_WEAK_FUNC(sub_825767A0);
PPC_FUNC_IMPL(__imp__sub_825767A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,2136(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2136);
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825767CC"))) PPC_WEAK_FUNC(sub_825767CC);
PPC_FUNC_IMPL(__imp__sub_825767CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825767D0"))) PPC_WEAK_FUNC(sub_825767D0);
PPC_FUNC_IMPL(__imp__sub_825767D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + r11.u64;
	// addi r11,r10,31
	r11.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82576834
	if (!cr6.eq) goto loc_82576834;
	// subf r11,r4,r10
	r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x82576824
	goto loc_82576824;
loc_825767F8:
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82576824:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x825767f8
	if (cr6.lt) goto loc_825767F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82576834:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257683C"))) PPC_WEAK_FUNC(sub_8257683C);
PPC_FUNC_IMPL(__imp__sub_8257683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576840"))) PPC_WEAK_FUNC(sub_82576840);
PPC_FUNC_IMPL(__imp__sub_82576840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r31,27,5,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r31,27
	ctx.r9.u64 = r31.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82576884
	if (!cr0.eq) goto loc_82576884;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82576884:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576898"))) PPC_WEAK_FUNC(sub_82576898);
PPC_FUNC_IMPL(__imp__sub_82576898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825766d8
	sub_825766D8(ctx, base);
	// clrlwi r8,r3,27
	ctx.r8.u64 = ctx.r3.u32 & 0x1F;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r3,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825768EC"))) PPC_WEAK_FUNC(sub_825768EC);
PPC_FUNC_IMPL(__imp__sub_825768EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825768F0"))) PPC_WEAK_FUNC(sub_825768F0);
PPC_FUNC_IMPL(__imp__sub_825768F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	r11.s64 = 0;
	// stw r9,2080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2080, ctx.r9.u32);
	// lwz r10,336(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// lwz r8,2136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2136);
loc_82576914:
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r11,27
	ctx.r7.u64 = r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt 0x8257693c
	if (cr0.gt) goto loc_8257693C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257693C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82576958
	if (!cr0.eq) goto loc_82576958;
	// lwz r10,2080(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2080);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82576954
	if (!cr6.gt) goto loc_82576954;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82576954:
	// stw r10,2080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2080, ctx.r10.u32);
loc_82576958:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82576914
	if (cr6.lt) goto loc_82576914;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576968"))) PPC_WEAK_FUNC(sub_82576968);
PPC_FUNC_IMPL(__imp__sub_82576968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,2136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 2136);
	// bl 0x82576688
	sub_82576688(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x825769b8
	if (!cr6.eq) goto loc_825769B8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,550
	ctx.r7.s64 = 550;
	// addi r6,r11,-7440
	ctx.r6.s64 = r11.s64 + -7440;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-7452
	ctx.r5.s64 = r11.s64 + -7452;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825769B8:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,2136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2136);
	// clrlwi r9,r31,27
	ctx.r9.u64 = r31.u32 & 0x1F;
	// rlwinm r10,r31,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x7FFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825769FC"))) PPC_WEAK_FUNC(sub_825769FC);
PPC_FUNC_IMPL(__imp__sub_825769FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576A00"))) PPC_WEAK_FUNC(sub_82576A00);
PPC_FUNC_IMPL(__imp__sub_82576A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// clrlwi r29,r4,27
	r29.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,2136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2136);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// srw r11,r11,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (r11.u32 >> (r29.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt 0x82576a3c
	if (cr0.gt) goto loc_82576A3C;
	// li r11,0
	r11.s64 = 0;
loc_82576A3C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82576a68
	if (cr0.eq) goto loc_82576A68;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,564
	ctx.r7.s64 = 564;
	// addi r6,r11,-7440
	ctx.r6.s64 = r11.s64 + -7440;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-7352
	ctx.r5.s64 = r11.s64 + -7352;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82576A68:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,2136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2136);
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// slw r10,r10,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r29.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82576A88"))) PPC_WEAK_FUNC(sub_82576A88);
PPC_FUNC_IMPL(__imp__sub_82576A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bccc
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82576ae8
	if (!cr6.gt) goto loc_82576AE8;
loc_82576AB4:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82576adc
	if (!cr6.gt) goto loc_82576ADC;
loc_82576AC0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82595600
	sub_82595600(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(r30.s32, r31.s32, xer);
	// blt cr6,0x82576ac0
	if (cr6.lt) goto loc_82576AC0;
loc_82576ADC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x82576ab4
	if (cr6.lt) goto loc_82576AB4;
loc_82576AE8:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x82565568
	sub_82565568(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x82576b48
	if (cr0.eq) goto loc_82576B48;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82565568
	sub_82565568(ctx, base);
	// mr r19,r31
	r19.u64 = r31.u64;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// b 0x82576b4c
	goto loc_82576B4C;
loc_82576B48:
	// li r19,0
	r19.s64 = 0;
loc_82576B4C:
	// lwz r21,136(r29)
	r21.u64 = PPC_LOAD_U32(r29.u32 + 136);
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825770f4
	if (cr6.eq) goto loc_825770F4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// clrlwi r17,r23,24
	r17.u64 = r23.u32 & 0xFF;
	// addi r20,r11,26496
	r20.s64 = r11.s64 + 26496;
	// li r22,1
	r22.s64 = 1;
loc_82576B6C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82576b9c
	if (!cr6.gt) goto loc_82576B9C;
	// addi r11,r26,8
	r11.s64 = r26.s64 + 8;
loc_82576B80:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82576b80
	if (cr6.lt) goto loc_82576B80;
loc_82576B9C:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x82576c14
	if (cr6.eq) goto loc_82576C14;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// ble cr6,0x82576c4c
	if (!cr6.gt) goto loc_82576C4C;
loc_82576BB0:
	// rlwinm r11,r31,27,5,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,104(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 104);
	// clrlwi r9,r31,27
	ctx.r9.u64 = r31.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82576c04
	if (cr0.eq) goto loc_82576C04;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82594db0
	sub_82594DB0(ctx, base);
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r11,r3,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// slw r10,r22,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r26
	PPC_STORE_U32(r11.u32 + r26.u32, ctx.r10.u32);
loc_82576C04:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r18
	cr6.compare<int32_t>(r31.s32, r18.s32, xer);
	// blt cr6,0x82576bb0
	if (cr6.lt) goto loc_82576BB0;
	// b 0x82576c4c
	goto loc_82576C4C;
loc_82576C14:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,104(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82576c4c
	if (!cr6.gt) goto loc_82576C4C;
	// addi r11,r26,8
	r11.s64 = r26.s64 + 8;
	// subf r9,r26,r9
	ctx.r9.s64 = ctx.r9.s64 - r26.s64;
loc_82576C30:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82576c30
	if (cr6.lt) goto loc_82576C30;
loc_82576C4C:
	// lwz r24,36(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 36);
	// b 0x825770d8
	goto loc_825770D8;
loc_82576C54:
	// lwz r10,28(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 28);
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(r24.u32, ctx.r10.u32, xer);
	// beq cr6,0x82576c6c
	if (cr6.eq) goto loc_82576C6C;
	// lwz r11,228(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825770d4
	if (!cr0.eq) goto loc_825770D4;
loc_82576C6C:
	// li r11,0
	r11.s64 = 0;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_82576C74:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82576e88
	if (!cr0.eq) goto loc_82576E88;
	// addi r27,r28,228
	r27.s64 = r28.s64 + 228;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82576e70
	if (cr0.eq) goto loc_82576E70;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82576e70
	if (!cr0.eq) goto loc_82576E70;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82576cdc
	if (cr6.eq) goto loc_82576CDC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82576cdc
	if (!cr0.eq) goto loc_82576CDC;
	// lwz r11,80(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 80);
	// addi r10,r20,4
	ctx.r10.s64 = r20.s64 + 4;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// bne 0x82576ce0
	if (!cr0.eq) goto loc_82576CE0;
loc_82576CDC:
	// li r11,0
	r11.s64 = 0;
loc_82576CE0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82576e70
	if (cr0.eq) goto loc_82576E70;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r30,-1
	r30.s64 = -1;
	// bl 0x82594db0
	sub_82594DB0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82570870
	sub_82570870(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82576d68
	if (cr0.eq) goto loc_82576D68;
	// lwz r11,236(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 236);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82576d48
	if (cr6.eq) goto loc_82576D48;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82576d48
	if (!cr0.eq) goto loc_82576D48;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// addi r9,r20,4
	ctx.r9.s64 = r20.s64 + 4;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// bne 0x82576d4c
	if (!cr0.eq) goto loc_82576D4C;
loc_82576D48:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82576D4C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82576d68
	if (cr0.eq) goto loc_82576D68;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82594db0
	sub_82594DB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82576D68:
	// rlwinm r11,r29,27,5,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r29,27
	ctx.r10.u64 = r29.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// srw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82576e64
	if (cr0.eq) goto loc_82576E64;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82576df0
	if (!cr6.gt) goto loc_82576DF0;
loc_82576D98:
	// rlwinm r11,r31,27,5,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r31,27
	ctx.r10.u64 = r31.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// srw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82576de0
	if (cr0.eq) goto loc_82576DE0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82594db0
	sub_82594DB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpw cr6,r5,r30
	cr6.compare<int32_t>(ctx.r5.s32, r30.s32, xer);
	// beq cr6,0x82576de0
	if (cr6.eq) goto loc_82576DE0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82595600
	sub_82595600(ctx, base);
loc_82576DE0:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82576d98
	if (cr6.lt) goto loc_82576D98;
loc_82576DF0:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(r11.s32, 50, xer);
	// bne cr6,0x82576e70
	if (!cr6.eq) goto loc_82576E70;
	// lwz r11,236(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 236);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82576e34
	if (cr6.eq) goto loc_82576E34;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82576e34
	if (!cr0.eq) goto loc_82576E34;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// addi r9,r20,4
	ctx.r9.s64 = r20.s64 + 4;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// bne 0x82576e38
	if (!cr0.eq) goto loc_82576E38;
loc_82576E34:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82576E38:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82576e70
	if (cr0.eq) goto loc_82576E70;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82594db0
	sub_82594DB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82595600
	sub_82595600(ctx, base);
	// b 0x82576e70
	goto loc_82576E70;
loc_82576E64:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82576840
	sub_82576840(ctx, base);
loc_82576E70:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r28,8(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// rlwinm r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// bne 0x82576c74
	if (!cr0.eq) goto loc_82576C74;
loc_82576E88:
	// li r11,0
	r11.s64 = 0;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82576E90:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82576fbc
	if (!cr0.eq) goto loc_82576FBC;
	// addi r30,r31,228
	r30.s64 = r31.s64 + 228;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82576f34
	if (cr0.eq) goto loc_82576F34;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82576f34
	if (!cr0.eq) goto loc_82576F34;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82576ef8
	if (cr6.eq) goto loc_82576EF8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82576ef8
	if (!cr0.eq) goto loc_82576EF8;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r10,r20,4
	ctx.r10.s64 = r20.s64 + 4;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// bne 0x82576efc
	if (!cr0.eq) goto loc_82576EFC;
loc_82576EF8:
	// li r11,0
	r11.s64 = 0;
loc_82576EFC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82576f34
	if (cr0.eq) goto loc_82576F34;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82594db0
	sub_82594DB0(ctx, base);
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r11,r3,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// slw r10,r22,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r10.u8 & 0x3F));
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stwx r10,r11,r26
	PPC_STORE_U32(r11.u32 + r26.u32, ctx.r10.u32);
loc_82576F34:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// rlwinm r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// bne 0x82576e90
	if (!cr0.eq) goto loc_82576E90;
	// b 0x82576fbc
	goto loc_82576FBC;
loc_82576F50:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82576898
	sub_82576898(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82576fbc
	if (!cr6.gt) goto loc_82576FBC;
loc_82576F6C:
	// rlwinm r11,r31,27,5,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r31,27
	ctx.r10.u64 = r31.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// srw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82576fac
	if (cr0.eq) goto loc_82576FAC;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82594db0
	sub_82594DB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82595600
	sub_82595600(ctx, base);
loc_82576FAC:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82576f6c
	if (cr6.lt) goto loc_82576F6C;
loc_82576FBC:
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82576f50
	if (cr0.eq) goto loc_82576F50;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82576FD4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825770d4
	if (!cr0.eq) goto loc_825770D4;
	// addi r27,r31,228
	r27.s64 = r31.s64 + 228;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825770bc
	if (cr0.eq) goto loc_825770BC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825770bc
	if (!cr0.eq) goto loc_825770BC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x825770bc
	if (cr6.lt) goto loc_825770BC;
	// addi r28,r31,236
	r28.s64 = r31.s64 + 236;
loc_8257701C:
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82577054
	if (cr6.eq) goto loc_82577054;
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82577054
	if (!cr0.eq) goto loc_82577054;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// addi r10,r20,4
	ctx.r10.s64 = r20.s64 + 4;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// bne 0x82577058
	if (!cr0.eq) goto loc_82577058;
loc_82577054:
	// li r11,0
	r11.s64 = 0;
loc_82577058:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825770a8
	if (cr0.eq) goto loc_825770A8;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82586188
	sub_82586188(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825770a8
	if (!cr0.eq) goto loc_825770A8;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82594db0
	sub_82594DB0(ctx, base);
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r11,r3,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// slw r10,r22,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r26
	PPC_STORE_U32(r11.u32 + r26.u32, ctx.r10.u32);
loc_825770A8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// ble cr6,0x8257701c
	if (!cr6.gt) goto loc_8257701C;
loc_825770BC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// rlwinm r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// bne 0x82576fd4
	if (!cr0.eq) goto loc_82576FD4;
loc_825770D4:
	// lwz r24,4(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 4);
loc_825770D8:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82576c54
	if (!cr0.eq) goto loc_82576C54;
	// lwz r21,8(r21)
	r21.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82576b6c
	if (!cr6.eq) goto loc_82576B6C;
loc_825770F4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82577108
	if (cr6.eq) goto loc_82577108;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82577108:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd1c
	return;
}

__attribute__((alias("__imp__sub_82577110"))) PPC_WEAK_FUNC(sub_82577110);
PPC_FUNC_IMPL(__imp__sub_82577110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825768f0
	sub_825768F0(ctx, base);
	// lwz r11,2080(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2080);
	// li r17,0
	r17.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r16,r11,1
	r16.s64 = r11.s64 + 1;
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r10,500(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 500);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r9,-25300(r11)
	PPC_STORE_U32(r11.u32 + -25300, ctx.r9.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r23,r16,r6
	r23.u64 = r16.u64 + ctx.r6.u64;
	// lwz r10,1112(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1112);
	// rlwinm. r10,r10,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82577180
	if (cr0.eq) goto loc_82577180;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82577180
	if (!cr6.eq) goto loc_82577180;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r4,r10,-6992
	ctx.r4.s64 = ctx.r10.s64 + -6992;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// stw r10,-25300(r11)
	PPC_STORE_U32(r11.u32 + -25300, ctx.r10.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// b 0x825777e8
	goto loc_825777E8;
loc_82577180:
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r7,r11,26496
	ctx.r7.s64 = r11.s64 + 26496;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// beq cr6,0x8257722c
	if (cr6.eq) goto loc_8257722C;
loc_8257719C:
	// lwz r11,28(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// b 0x82577210
	goto loc_82577210;
loc_825771A4:
	// lwz r9,228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8257720c
	if (cr0.eq) goto loc_8257720C;
	// rlwinm. r10,r9,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8257720c
	if (!cr0.eq) goto loc_8257720C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825771e8
	if (cr6.eq) goto loc_825771E8;
	// rlwinm. r10,r9,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825771e8
	if (!cr0.eq) goto loc_825771E8;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// addi r5,r7,4
	ctx.r5.s64 = ctx.r7.s64 + 4;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lbzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x825771ec
	if (!cr0.eq) goto loc_825771EC;
loc_825771E8:
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
loc_825771EC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8257720c
	if (cr0.eq) goto loc_8257720C;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// ori r9,r9,128
	ctx.r9.u64 = ctx.r9.u64 | 128;
	// stw r17,80(r11)
	PPC_STORE_U32(r11.u32 + 80, r17.u32);
	// add r10,r10,r16
	ctx.r10.u64 = ctx.r10.u64 + r16.u64;
	// stw r9,228(r11)
	PPC_STORE_U32(r11.u32 + 228, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
loc_8257720C:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82577210:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825771a4
	if (!cr6.eq) goto loc_825771A4;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257719c
	if (!cr6.eq) goto loc_8257719C;
loc_8257722C:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// addi r4,r11,-7072
	ctx.r4.s64 = r11.s64 + -7072;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825942f0
	sub_825942F0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x8257728c
	if (cr0.eq) goto loc_8257728C;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x825952e8
	sub_825952E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82577290
	goto loc_82577290;
loc_8257728C:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82577290:
	// mr r27,r17
	r27.u64 = r17.u64;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r17.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,2064(r31)
	PPC_STORE_U32(r31.u32 + 2064, r11.u32);
	// mr r26,r17
	r26.u64 = r17.u64;
	// mr r15,r17
	r15.u64 = r17.u64;
	// mr r20,r17
	r20.u64 = r17.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// bl 0x82564ea8
	sub_82564EA8(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r18,r31,128
	r18.s64 = r31.s64 + 128;
loc_825772BC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 468);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,468(r11)
	PPC_STORE_U32(r11.u32 + 468, ctx.r10.u32);
	// ble cr6,0x825772e8
	if (!cr6.gt) goto loc_825772E8;
	// lwz r3,2064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// bl 0x82595750
	sub_82595750(ctx, base);
	// lwz r3,2064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// bl 0x82594f98
	sub_82594F98(ctx, base);
loc_825772E8:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r4,2064(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82576a88
	sub_82576A88(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// mr r26,r17
	r26.u64 = r17.u64;
	// mr r19,r17
	r19.u64 = r17.u64;
	// bl 0x82582968
	sub_82582968(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x825776c8
	if (!cr0.gt) goto loc_825776C8;
	// mr r21,r14
	r21.u64 = r14.u64;
loc_8257731C:
	// lwz r22,0(r21)
	r22.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// li r11,1
	r11.s64 = 1;
	// lwz r24,28(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 28);
	// b 0x825776a4
	goto loc_825776A4;
loc_8257732C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82577694
	if (cr0.eq) goto loc_82577694;
	// mr r11,r17
	r11.u64 = r17.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_8257733C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82577694
	if (!cr0.eq) goto loc_82577694;
	// addi r25,r28,228
	r25.s64 = r28.s64 + 228;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82577678
	if (cr0.eq) goto loc_82577678;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82577678
	if (!cr0.eq) goto loc_82577678;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82577578
	if (cr0.eq) goto loc_82577578;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// lwz r3,2064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// bl 0x82594db0
	sub_82594DB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,2064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// lwz r4,56(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// bl 0x82594db0
	sub_82594DB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpw cr6,r5,r30
	cr6.compare<int32_t>(ctx.r5.s32, r30.s32, xer);
	// beq cr6,0x82577678
	if (cr6.eq) goto loc_82577678;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257753c
	if (cr0.eq) goto loc_8257753C;
	// lwz r11,228(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257753c
	if (cr0.eq) goto loc_8257753C;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r27,r23
	r27.u64 = r23.u64;
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r23,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r23.u32);
	// stw r17,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r17.u32);
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// ori r11,r11,2176
	r11.u64 = r11.u64 | 2176;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,228(r30)
	PPC_STORE_U32(r30.u32 + 228, r11.u32);
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// beq 0x82577438
	if (cr0.eq) goto loc_82577438;
	// addi r11,r11,58
	r11.s64 = r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, r30.u32);
	// b 0x82577458
	goto loc_82577458;
loc_82577438:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r11,58
	ctx.r10.s64 = r11.s64 + 58;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r11.u32);
	// stwx r30,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, r30.u32);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_82577458:
	// lwz r3,2064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// bl 0x82595490
	sub_82595490(ctx, base);
	// lwz r29,136(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x825774d0
	goto loc_825774D0;
loc_8257746C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 104);
	// bl 0x825767d0
	sub_825767D0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825774cc
	if (!cr0.eq) goto loc_825774CC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r30,104(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 104);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x82565568
	sub_82565568(ctx, base);
	// stw r3,104(r29)
	PPC_STORE_U32(r29.u32 + 104, ctx.r3.u32);
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825774cc
	if (!cr6.gt) goto loc_825774CC;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// subf r9,r3,r30
	ctx.r9.s64 = r30.s64 - ctx.r3.s64;
loc_825774B0:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x825774b0
	if (cr6.lt) goto loc_825774B0;
loc_825774CC:
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_825774D0:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257746c
	if (!cr6.eq) goto loc_8257746C;
	// mr r30,r17
	r30.u64 = r17.u64;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// ble cr6,0x82577678
	if (!cr6.gt) goto loc_82577678;
loc_825774E8:
	// rlwinm r11,r30,27,5,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,104(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 104);
	// clrlwi r9,r30,27
	ctx.r9.u64 = r30.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257752c
	if (cr0.eq) goto loc_8257752C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,2064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82594db0
	sub_82594DB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,2064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// bl 0x82595600
	sub_82595600(ctx, base);
loc_8257752C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r23
	cr6.compare<int32_t>(r30.s32, r23.s32, xer);
	// blt cr6,0x825774e8
	if (cr6.lt) goto loc_825774E8;
	// b 0x82577678
	goto loc_82577678;
loc_8257753C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,2064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// bl 0x825957c0
	sub_825957C0(ctx, base);
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// clrlwi r26,r10,24
	r26.u64 = ctx.r10.u32 & 0xFF;
	// beq 0x82577568
	if (cr0.eq) goto loc_82577568;
	// addi r11,r27,1
	r11.s64 = r27.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// b 0x82577678
	goto loc_82577678;
loc_82577568:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// b 0x82577678
	goto loc_82577678;
loc_82577578:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82570870
	sub_82570870(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82577678
	if (cr0.eq) goto loc_82577678;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm. r11,r11,21,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82577678
	if (!cr0.eq) goto loc_82577678;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// lwz r3,2064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// bl 0x82594db0
	sub_82594DB0(ctx, base);
	// lwz r11,236(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 236);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825775e4
	if (cr6.eq) goto loc_825775E4;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825775e4
	if (!cr0.eq) goto loc_825775E4;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x825775e8
	if (!cr0.eq) goto loc_825775E8;
loc_825775E4:
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
loc_825775E8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82577678
	if (cr0.eq) goto loc_82577678;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r3,2064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// bl 0x82594db0
	sub_82594DB0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r11,1688(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1688);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82577628
	if (!cr6.gt) goto loc_82577628;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,2064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825957c0
	sub_825957C0(ctx, base);
loc_82577628:
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// clrlwi r26,r10,24
	r26.u64 = ctx.r10.u32 & 0xFF;
	// beq 0x82577660
	if (cr0.eq) goto loc_82577660;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82577678
	goto loc_82577678;
loc_82577660:
	// cmpw cr6,r29,r16
	cr6.compare<int32_t>(r29.s32, r16.s32, xer);
	// blt cr6,0x82577678
	if (cr6.lt) goto loc_82577678;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,2064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82595408
	sub_82595408(ctx, base);
loc_82577678:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r28,8(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// lwz r27,88(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// rlwinm r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// bne 0x8257733c
	if (!cr0.eq) goto loc_8257733C;
loc_82577694:
	// lwz r11,228(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 228);
	// lwz r24,8(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
loc_825776A4:
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8257732c
	if (!cr6.eq) goto loc_8257732C;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// bl 0x82582968
	sub_82582968(ctx, base);
	// cmpw cr6,r19,r3
	cr6.compare<int32_t>(r19.s32, ctx.r3.s32, xer);
	// blt cr6,0x8257731c
	if (cr6.lt) goto loc_8257731C;
loc_825776C8:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// beq 0x825776e4
	if (cr0.eq) goto loc_825776E4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,1688(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1688);
	// cmpw cr6,r15,r11
	cr6.compare<int32_t>(r15.s32, r11.s32, xer);
	// blt cr6,0x825772bc
	if (cr6.lt) goto loc_825772BC;
loc_825776E4:
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bgt cr6,0x82577700
	if (cr6.gt) goto loc_82577700;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bgt cr6,0x82577700
	if (cr6.gt) goto loc_82577700;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// beq cr6,0x82577744
	if (cr6.eq) goto loc_82577744;
loc_82577700:
	// mr r30,r17
	r30.u64 = r17.u64;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// ble cr6,0x82577728
	if (!cr6.gt) goto loc_82577728;
loc_8257770C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,2064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82594db0
	sub_82594DB0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r23
	cr6.compare<int32_t>(r30.s32, r23.s32, xer);
	// blt cr6,0x8257770c
	if (cr6.lt) goto loc_8257770C;
loc_82577728:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// beq cr6,0x82577744
	if (cr6.eq) goto loc_82577744;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r11,-7152
	ctx.r4.s64 = r11.s64 + -7152;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_82577744:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x82577758
	if (!cr6.eq) goto loc_82577758;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82577774
	if (cr6.eq) goto loc_82577774;
loc_82577758:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,-7216
	ctx.r4.s64 = r11.s64 + -7216;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r6,r11,r27
	ctx.r6.u64 = r11.u64 + r27.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_82577774:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82577794
	if (!cr6.gt) goto loc_82577794;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// addi r4,r11,-7276
	ctx.r4.s64 = r11.s64 + -7276;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_82577794:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,1712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// bl 0x82594198
	sub_82594198(ctx, base);
	// lwz r3,2064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// bl 0x82595a30
	sub_82595A30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825768f0
	sub_825768F0(ctx, base);
	// lwz r11,2080(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2080);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// addi r4,r10,-7328
	ctx.r4.s64 = ctx.r10.s64 + -7328;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwz r31,2064(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x825777e8
	if (cr0.eq) goto loc_825777E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825960f0
	sub_825960F0(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_825777E8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_825777F0"))) PPC_WEAK_FUNC(sub_825777F0);
PPC_FUNC_IMPL(__imp__sub_825777F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r11,r3,20
	r11.s64 = ctx.r3.s64 + 20;
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// addi r9,r11,240
	ctx.r9.s64 = r11.s64 + 240;
loc_825777FC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8257781c
	if (!cr0.eq) goto loc_8257781C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x825777fc
	if (!cr6.eq) goto loc_825777FC;
loc_8257781C:
	// subfic r11,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	r11.s64 = 0 - ctx.r8.s64;
	// subfe r3,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577828"))) PPC_WEAK_FUNC(sub_82577828);
PPC_FUNC_IMPL(__imp__sub_82577828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82577854
	if (cr6.lt) goto loc_82577854;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x82577878
	if (cr6.lt) goto loc_82577878;
loc_82577854:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,190
	ctx.r7.s64 = 190;
	// addi r6,r11,-11472
	ctx.r6.s64 = r11.s64 + -11472;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-6936
	ctx.r5.s64 = r11.s64 + -6936;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82577878:
	// lbzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577894"))) PPC_WEAK_FUNC(sub_82577894);
PPC_FUNC_IMPL(__imp__sub_82577894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577898"))) PPC_WEAK_FUNC(sub_82577898);
PPC_FUNC_IMPL(__imp__sub_82577898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// blt cr6,0x825778ec
	if (cr6.lt) goto loc_825778EC;
	// addi r10,r3,236
	ctx.r10.s64 = ctx.r3.s64 + 236;
loc_825778B0:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825778dc
	if (cr0.eq) goto loc_825778DC;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x825778dc
	if (cr6.eq) goto loc_825778DC;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825778d4
	if (!cr6.eq) goto loc_825778D4;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// b 0x825778dc
	goto loc_825778DC;
loc_825778D4:
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bne cr6,0x825778f4
	if (!cr6.eq) goto loc_825778F4;
loc_825778DC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// ble cr6,0x825778b0
	if (!cr6.gt) goto loc_825778B0;
loc_825778EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_825778F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825778FC"))) PPC_WEAK_FUNC(sub_825778FC);
PPC_FUNC_IMPL(__imp__sub_825778FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577900"))) PPC_WEAK_FUNC(sub_82577900);
PPC_FUNC_IMPL(__imp__sub_82577900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x8257793c
	if (!cr0.gt) goto loc_8257793C;
	// addi r11,r3,100
	r11.s64 = ctx.r3.s64 + 100;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8257791C:
	// li r10,4
	ctx.r10.s64 = 4;
loc_82577920:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// bne 0x82577920
	if (!cr0.eq) goto loc_82577920;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8257791c
	if (!cr0.eq) goto loc_8257791C;
loc_8257793C:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,101
	ctx.r10.s64 = 101;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// divw r10,r11,r10
	ctx.r10.s32 = r11.s32 / ctx.r10.s32;
	// mulli r10,r10,101
	ctx.r10.s64 = ctx.r10.s64 * 101;
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577958"))) PPC_WEAK_FUNC(sub_82577958);
PPC_FUNC_IMPL(__imp__sub_82577958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r24,1
	r24.s64 = 1;
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lbz r11,164(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 164);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x825779fc
	if (cr6.lt) goto loc_825779FC;
	// li r28,204
	r28.s64 = 204;
	// addi r29,r31,40
	r29.s64 = r31.s64 + 40;
	// addi r27,r31,-124
	r27.s64 = r31.s64 + -124;
loc_825779A8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lbz r11,152(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 152);
	// stw r11,-4(r29)
	PPC_STORE_U32(r29.u32 + -4, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbz r11,158(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 158);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// stwx r11,r27,r28
	PPC_STORE_U32(r27.u32 + r28.u32, r11.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// ble cr6,0x825779a8
	if (!cr6.gt) goto loc_825779A8;
loc_825779FC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82577ad8
	if (cr0.eq) goto loc_82577AD8;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// blt cr6,0x82577a50
	if (cr6.lt) goto loc_82577A50;
	// addi r11,r11,236
	r11.s64 = r11.s64 + 236;
loc_82577A34:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82577ad0
	if (cr6.eq) goto loc_82577AD0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x82577a34
	if (!cr6.gt) goto loc_82577A34;
loc_82577A50:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82577A54:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82577a80
	if (!cr0.eq) goto loc_82577A80;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,677
	ctx.r7.s64 = 677;
	// addi r6,r11,-6880
	ctx.r6.s64 = r11.s64 + -6880;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-6920
	ctx.r5.s64 = r11.s64 + -6920;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82577A80:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82577cc8
	if (cr6.lt) goto loc_82577CC8;
	// addi r8,r31,-264
	ctx.r8.s64 = r31.s64 + -264;
	// li r11,380
	r11.s64 = 380;
loc_82577A9C:
	// li r10,4
	ctx.r10.s64 = 4;
loc_82577AA0:
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwzx r7,r11,r7
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// stwx r7,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82577aa0
	if (!cr0.eq) goto loc_82577AA0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x82577a9c
	if (!cr6.gt) goto loc_82577A9C;
	// b 0x82577cc8
	goto loc_82577CC8;
loc_82577AD0:
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82577a54
	goto loc_82577A54;
loc_82577AD8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x82577bc4
	if (cr6.lt) goto loc_82577BC4;
	// li r27,32
	r27.s64 = 32;
	// addi r29,r31,116
	r29.s64 = r31.s64 + 116;
loc_82577B04:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8257ec58
	sub_8257EC58(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r3,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r3.u32);
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r5,1712(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// bl 0x8257f1c8
	sub_8257F1C8(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r28,r25
	r28.u64 = r25.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r25,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r25.u32);
loc_82577B4C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82577828
	sub_82577828(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82577b8c
	if (cr0.eq) goto loc_82577B8C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82577b90
	goto loc_82577B90;
loc_82577B8C:
	// stw r25,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r25.u32);
loc_82577B90:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// blt cr6,0x82577b4c
	if (cr6.lt) goto loc_82577B4C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// ble cr6,0x82577b04
	if (!cr6.gt) goto loc_82577B04;
loc_82577BC4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,228(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82577c14
	if (cr0.eq) goto loc_82577C14;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_82577C14:
	// mr r29,r25
	r29.u64 = r25.u64;
	// addi r28,r31,100
	r28.s64 = r31.s64 + 100;
loc_82577C1C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82577c78
	if (cr6.eq) goto loc_82577C78;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82577c6c
	if (cr6.eq) goto loc_82577C6C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82577c64
	if (cr6.eq) goto loc_82577C64;
	// ble cr6,0x82577cb8
	if (!cr6.gt) goto loc_82577CB8;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bgt cr6,0x82577cb8
	if (cr6.gt) goto loc_82577CB8;
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// b 0x82577cb8
	goto loc_82577CB8;
loc_82577C64:
	// stw r24,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r24.u32);
	// b 0x82577cb8
	goto loc_82577CB8;
loc_82577C6C:
	// li r11,2
	r11.s64 = 2;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x82577cb8
	goto loc_82577CB8;
loc_82577C78:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,20(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,25
	r11.s64 = r11.s64 + 25;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
loc_82577CB8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x82577c1c
	if (cr6.lt) goto loc_82577C1C;
loc_82577CC8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,168
	ctx.r4.s64 = r11.s64 + 168;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82577d10
	if (cr0.eq) goto loc_82577D10;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r31,228
	ctx.r3.s64 = r31.s64 + 228;
	// li r5,30
	ctx.r5.s64 = 30;
	// stw r25,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r25.u32);
	// lwz r4,184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_82577D10:
	// stb r24,264(r31)
	PPC_STORE_U8(r31.u32 + 264, r24.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82577D1C"))) PPC_WEAK_FUNC(sub_82577D1C);
PPC_FUNC_IMPL(__imp__sub_82577D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577D20"))) PPC_WEAK_FUNC(sub_82577D20);
PPC_FUNC_IMPL(__imp__sub_82577D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,264(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 264);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82577d50
	if (!cr0.eq) goto loc_82577D50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82577958
	sub_82577958(ctx, base);
loc_82577D50:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82582e80
	sub_82582E80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577D74"))) PPC_WEAK_FUNC(sub_82577D74);
PPC_FUNC_IMPL(__imp__sub_82577D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577D78"))) PPC_WEAK_FUNC(sub_82577D78);
PPC_FUNC_IMPL(__imp__sub_82577D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82577db0
	if (!cr0.eq) goto loc_82577DB0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r24,0(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82577db4
	goto loc_82577DB4;
loc_82577DB0:
	// li r24,0
	r24.s64 = 0;
loc_82577DB4:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,8972
	r27.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r28,0
	r28.s64 = 0;
	// addi r26,r11,-6800
	r26.s64 = r11.s64 + -6800;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r30,r31
	r30.u64 = r31.u64;
	// subf r23,r31,r24
	r23.s64 = r24.s64 - r31.s64;
	// addi r25,r11,-6880
	r25.s64 = r11.s64 + -6880;
loc_82577DDC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82577e18
	if (cr6.lt) goto loc_82577E18;
	// beq cr6,0x82577e84
	if (cr6.eq) goto loc_82577E84;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x82577e7c
	if (cr6.lt) goto loc_82577E7C;
	// beq cr6,0x82577e74
	if (cr6.eq) goto loc_82577E74;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bge cr6,0x82577f18
	if (!cr6.lt) goto loc_82577F18;
loc_82577E18:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82577f04
	if (cr0.eq) goto loc_82577F04;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_82577E6C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82577f18
	goto loc_82577F18;
loc_82577E74:
	// li r11,1
	r11.s64 = 1;
	// b 0x82577e6c
	goto loc_82577E6C;
loc_82577E7C:
	// li r11,2
	r11.s64 = 2;
	// b 0x82577e6c
	goto loc_82577E6C;
loc_82577E84:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// rlwinm. r10,r10,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82577ebc
	if (cr0.eq) goto loc_82577EBC;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// b 0x82577e6c
	goto loc_82577E6C;
loc_82577EBC:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82577ed8
	if (cr6.eq) goto loc_82577ED8;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r10,137
	cr6.compare<int32_t>(ctx.r10.s32, 137, xer);
	// beq cr6,0x82577ed8
	if (cr6.eq) goto loc_82577ED8;
	// lwzx r11,r23,r30
	r11.u64 = PPC_LOAD_U32(r23.u32 + r30.u32);
	// b 0x82577e6c
	goto loc_82577E6C;
loc_82577ED8:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r11,137
	cr6.compare<int32_t>(r11.s32, 137, xer);
	// beq cr6,0x82577efc
	if (cr6.eq) goto loc_82577EFC;
	// li r7,871
	ctx.r7.s64 = 871;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82577EFC:
	// li r11,3
	r11.s64 = 3;
	// b 0x82577e6c
	goto loc_82577E6C;
loc_82577F04:
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r10,504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 504);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,504(r11)
	PPC_STORE_U32(r11.u32 + 504, ctx.r10.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82577F18:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpwi cr6,r28,16
	cr6.compare<int32_t>(r28.s32, 16, xer);
	// blt cr6,0x82577ddc
	if (cr6.lt) goto loc_82577DDC;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82577F34"))) PPC_WEAK_FUNC(sub_82577F34);
PPC_FUNC_IMPL(__imp__sub_82577F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577F38"))) PPC_WEAK_FUNC(sub_82577F38);
PPC_FUNC_IMPL(__imp__sub_82577F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82577d78
	sub_82577D78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82582f40
	sub_82582F40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577F80"))) PPC_WEAK_FUNC(sub_82577F80);
PPC_FUNC_IMPL(__imp__sub_82577F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82578058
	if (cr0.eq) goto loc_82578058;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82577fc8
	if (cr0.eq) goto loc_82577FC8;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// b 0x82577fcc
	goto loc_82577FCC;
loc_82577FC8:
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 84);
loc_82577FCC:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// addi r11,r11,26496
	r11.s64 = r11.s64 + 26496;
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// subfic r11,r11,3
	xer.ca = r11.u32 <= 3;
	r11.s64 = 3 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82578058
	if (cr0.eq) goto loc_82578058;
	// li r31,0
	r31.s64 = 0;
loc_82577FFC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bgt cr6,0x82578044
	if (cr6.gt) goto loc_82578044;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82578058
	if (cr6.eq) goto loc_82578058;
loc_82578044:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x82577ffc
	if (cr6.lt) goto loc_82577FFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8257805c
	goto loc_8257805C;
loc_82578058:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257805C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82578064"))) PPC_WEAK_FUNC(sub_82578064);
PPC_FUNC_IMPL(__imp__sub_82578064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578068"))) PPC_WEAK_FUNC(sub_82578068);
PPC_FUNC_IMPL(__imp__sub_82578068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r18,0
	r18.s64 = 0;
	// lwz r17,80(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// stw r18,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r18.u32);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// stw r18,4(r21)
	PPC_STORE_U32(r21.u32 + 4, r18.u32);
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// stw r18,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r18.u32);
	// mr r14,r10
	r14.u64 = ctx.r10.u64;
	// stw r18,4(r19)
	PPC_STORE_U32(r19.u32 + 4, r18.u32);
	// mr r27,r18
	r27.u64 = r18.u64;
	// mr r23,r18
	r23.u64 = r18.u64;
	// stw r18,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r18.u32);
	// li r22,1
	r22.s64 = 1;
loc_825780BC:
	// lwz r11,56(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r22,r10
	cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, xer);
	// ble cr6,0x825780d4
	if (!cr6.gt) goto loc_825780D4;
	// mr r11,r18
	r11.u64 = r18.u64;
	// b 0x825780e0
	goto loc_825780E0;
loc_825780D4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// lwzx r27,r10,r23
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + r23.u32);
loc_825780E0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257828c
	if (cr0.eq) goto loc_8257828C;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82589930
	sub_82589930(ctx, base);
	// lwz r28,28(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// lwz r17,2148(r16)
	r17.u64 = PPC_LOAD_U32(r16.u32 + 2148);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x82578274
	goto loc_82578274;
loc_82578104:
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82578270
	if (cr0.eq) goto loc_82578270;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82578270
	if (cr0.eq) goto loc_82578270;
	// addi r11,r25,58
	r11.s64 = r25.s64 + 58;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r31
	r29.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82578158
	if (!cr6.eq) goto loc_82578158;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82578270
	if (cr6.eq) goto loc_82578270;
loc_82578158:
	// lwz r11,892(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 892);
	// cmpw cr6,r11,r17
	cr6.compare<int32_t>(r11.s32, r17.s32, xer);
	// bgt cr6,0x8257818c
	if (cr6.gt) goto loc_8257818C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// add r11,r30,r17
	r11.u64 = r30.u64 + r17.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,892(r31)
	PPC_STORE_U32(r31.u32 + 892, r11.u32);
	// b 0x82578194
	goto loc_82578194;
loc_8257818C:
	// subf r11,r17,r11
	r11.s64 = r11.s64 - r17.s64;
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
loc_82578194:
	// lwz r11,892(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 892);
	// cmpw cr6,r11,r17
	cr6.compare<int32_t>(r11.s32, r17.s32, xer);
	// bgt cr6,0x825781c8
	if (cr6.gt) goto loc_825781C8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// add r11,r31,r17
	r11.u64 = r31.u64 + r17.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,892(r29)
	PPC_STORE_U32(r29.u32 + 892, r11.u32);
	// b 0x825781d0
	goto loc_825781D0;
loc_825781C8:
	// subf r11,r17,r11
	r11.s64 = r11.s64 - r17.s64;
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
loc_825781D0:
	// rlwinm r11,r31,16,0,15
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 16) & 0xFFFF0000;
	// lwz r4,4(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82578204
	if (!cr6.lt) goto loc_82578204;
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82578210
	goto loc_82578210;
loc_82578204:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82578210:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82578230
	if (!cr6.lt) goto loc_82578230;
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8257823c
	goto loc_8257823C;
loc_82578230:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257823C:
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8257825c
	if (!cr6.lt) goto loc_8257825C;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82578268
	goto loc_82578268;
loc_8257825C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82578268:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
loc_82578270:
	// lwz r28,8(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 8);
loc_82578274:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82578104
	if (!cr6.eq) goto loc_82578104;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// b 0x825780bc
	goto loc_825780BC;
loc_8257828C:
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// addic. r31,r11,-1
	xer.ca = r11.u32 > 0;
	r31.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82578324
	if (cr0.lt) goto loc_82578324;
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8257829C:
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x825782b4
	if (!cr6.lt) goto loc_825782B4;
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x825782c0
	goto loc_825782C0;
loc_825782B4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825782C0:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// clrlwi r4,r30,16
	ctx.r4.u64 = r30.u32 & 0xFFFF;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x825782e4
	if (!cr6.lt) goto loc_825782E4;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x825782ec
	goto loc_825782EC;
loc_825782E4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825782EC:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82578318
	if (cr6.eq) goto loc_82578318;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r4,4(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x82582b08
	sub_82582B08(ctx, base);
loc_82578318:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x8257829c
	if (!cr0.lt) goto loc_8257829C;
loc_82578324:
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82578354
	if (!cr6.eq) goto loc_82578354;
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82578500
	if (!cr6.eq) goto loc_82578500;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r11,2148(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 2148);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,2148(r16)
	PPC_STORE_U32(r16.u32 + 2148, r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd10
	return;
loc_82578354:
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82578374
	if (!cr6.lt) goto loc_82578374;
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82578380
	goto loc_82578380;
loc_82578374:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82578380:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// clrlwi r27,r11,16
	r27.u64 = r11.u32 & 0xFFFF;
	// srawi r28,r11,16
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFF) != 0);
	r28.s64 = r11.s32 >> 16;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x825783b4
	if (!cr6.lt) goto loc_825783B4;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x825783c0
	goto loc_825783C0;
loc_825783B4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825783C0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// lwz r29,56(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// bge cr6,0x825783e4
	if (!cr6.lt) goto loc_825783E4;
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x825783f4
	goto loc_825783F4;
loc_825783E4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825783F4:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r16)
	ctx.r4.u64 = PPC_LOAD_U32(r16.u32 + 12);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// stw r18,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r18.u32);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8257842c
	if (!cr6.lt) goto loc_8257842C;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82578438
	goto loc_82578438;
loc_8257842C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82578438:
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x82578470
	if (!cr6.lt) goto loc_82578470;
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8257847c
	goto loc_8257847C;
loc_82578470:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257847C:
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// addic. r31,r11,-1
	xer.ca = r11.u32 > 0;
	r31.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x825784f4
	if (cr0.lt) goto loc_825784F4;
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82578490:
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x825784a8
	if (!cr6.lt) goto loc_825784A8;
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x825784b4
	goto loc_825784B4;
loc_825784A8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825784B4:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r30,16
	r11.u64 = r30.u32 & 0xFFFF;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// beq cr6,0x825784d4
	if (cr6.eq) goto loc_825784D4;
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82578490
	if (!cr0.lt) goto loc_82578490;
	// b 0x825784f4
	goto loc_825784F4;
loc_825784D4:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r4,4(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x82582b08
	sub_82582B08(ctx, base);
loc_825784F4:
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82578354
	if (!cr6.eq) goto loc_82578354;
loc_82578500:
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82578324
	if (cr0.eq) goto loc_82578324;
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82578528
	if (!cr6.lt) goto loc_82578528;
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82578534
	goto loc_82578534;
loc_82578528:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82578534:
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// clrlwi r29,r28,16
	r29.u64 = r28.u32 & 0xFFFF;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
	// lwz r11,12(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 12);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r10,500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 500);
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// stw r30,500(r11)
	PPC_STORE_U32(r11.u32 + 500, r30.u32);
	// lwz r4,12(r16)
	ctx.r4.u64 = PPC_LOAD_U32(r16.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r18,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r18.u32);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8257858c
	if (!cr6.lt) goto loc_8257858C;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82578598
	goto loc_82578598;
loc_8257858C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82578598:
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// lwz r11,892(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 892);
	// cmpw cr6,r11,r17
	cr6.compare<int32_t>(r11.s32, r17.s32, xer);
	// bgt cr6,0x825785e8
	if (cr6.gt) goto loc_825785E8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// add r11,r30,r17
	r11.u64 = r30.u64 + r17.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,892(r31)
	PPC_STORE_U32(r31.u32 + 892, r11.u32);
	// b 0x825785f0
	goto loc_825785F0;
loc_825785E8:
	// subf r11,r17,r11
	r11.s64 = r11.s64 - r17.s64;
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
loc_825785F0:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8257860c
	if (!cr6.lt) goto loc_8257860C;
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8257861c
	goto loc_8257861C;
loc_8257860C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8257861C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// lwz r4,4(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// lwz r11,0(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r14)
	PPC_STORE_U32(r14.u32 + 0, r11.u32);
	// b 0x82578324
	goto loc_82578324;
}

__attribute__((alias("__imp__sub_82578640"))) PPC_WEAK_FUNC(sub_82578640);
PPC_FUNC_IMPL(__imp__sub_82578640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257867c
	if (cr0.eq) goto loc_8257867C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8257867C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578698"))) PPC_WEAK_FUNC(sub_82578698);
PPC_FUNC_IMPL(__imp__sub_82578698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825786d4
	if (cr0.eq) goto loc_825786D4;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_825786D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825786F0"))) PPC_WEAK_FUNC(sub_825786F0);
PPC_FUNC_IMPL(__imp__sub_825786F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,136(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// b 0x8257876c
	goto loc_8257876C;
loc_82578704:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82589a08
	sub_82589A08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82578768
	if (cr0.eq) goto loc_82578768;
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r30,1
	r30.s64 = 1;
loc_82578720:
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// ble cr6,0x82578738
	if (!cr6.gt) goto loc_82578738;
	// li r11,0
	r11.s64 = 0;
	// b 0x82578744
	goto loc_82578744;
loc_82578738:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// lwzx r29,r10,r31
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
loc_82578744:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82578768
	if (cr0.eq) goto loc_82578768;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825899f0
	sub_825899F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82578784
	if (!cr0.eq) goto loc_82578784;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x82578720
	goto loc_82578720;
loc_82578768:
	// lwz r28,8(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 8);
loc_8257876C:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82578704
	if (!cr6.eq) goto loc_82578704;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8257877C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_82578784:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8257877c
	goto loc_8257877C;
}

__attribute__((alias("__imp__sub_8257878C"))) PPC_WEAK_FUNC(sub_8257878C);
PPC_FUNC_IMPL(__imp__sub_8257878C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578790"))) PPC_WEAK_FUNC(sub_82578790);
PPC_FUNC_IMPL(__imp__sub_82578790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// lwz r11,12(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// lwz r4,428(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// bl 0x82565568
	sub_82565568(ctx, base);
	// lwz r11,12(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// lwz r4,428(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// bl 0x82565568
	sub_82565568(ctx, base);
	// lwz r11,172(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 172);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x825831a8
	sub_825831A8(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// beq cr6,0x82578ac0
	if (cr6.eq) goto loc_82578AC0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r18,0
	r18.s64 = 0;
	// addi r15,r11,8972
	r15.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r20,1
	r20.s64 = 1;
	// addi r14,r11,-6752
	r14.s64 = r11.s64 + -6752;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,-6880
	r11.s64 = r11.s64 + -6880;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82578810:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82578aa4
	if (cr0.eq) goto loc_82578AA4;
	// lwz r11,48(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 48);
	// lwz r9,176(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 176);
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// srw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82578aa4
	if (cr0.eq) goto loc_82578AA4;
	// lwz r11,0(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8257887c
	if (!cr6.gt) goto loc_8257887C;
	// addi r11,r16,8
	r11.s64 = r16.s64 + 8;
loc_82578864:
	// stw r18,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r18.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r16)
	ctx.r9.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82578864
	if (cr6.lt) goto loc_82578864;
loc_8257887C:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825788a8
	if (!cr6.gt) goto loc_825788A8;
	// addi r11,r21,8
	r11.s64 = r21.s64 + 8;
loc_82578890:
	// stw r18,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r18.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82578890
	if (cr6.lt) goto loc_82578890;
loc_825788A8:
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
loc_825788B4:
	// lwz r11,40(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 40);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// ble cr6,0x825788cc
	if (!cr6.gt) goto loc_825788CC;
	// mr r11,r18
	r11.u64 = r18.u64;
	// b 0x825788d8
	goto loc_825788D8;
loc_825788CC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r11,r20
	r11.u64 = r20.u64;
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
loc_825788D8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82578920
	if (cr0.eq) goto loc_82578920;
	// lwz r11,228(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82578914
	if (cr0.eq) goto loc_82578914;
	// lwz r11,948(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 948);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// clrlwi r6,r11,27
	ctx.r6.u64 = r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r20,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r6,r11,r21
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r21.u32);
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stwx r10,r11,r21
	PPC_STORE_U32(r11.u32 + r21.u32, ctx.r10.u32);
loc_82578914:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// b 0x825788b4
	goto loc_825788B4;
loc_82578920:
	// mr r24,r18
	r24.u64 = r18.u64;
	// mr r23,r18
	r23.u64 = r18.u64;
	// mr r22,r20
	r22.u64 = r20.u64;
loc_8257892C:
	// lwz r11,40(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 40);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r22,r10
	cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, xer);
	// ble cr6,0x82578944
	if (!cr6.gt) goto loc_82578944;
	// mr r11,r18
	r11.u64 = r18.u64;
	// b 0x82578950
	goto loc_82578950;
loc_82578944:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r11,r20
	r11.u64 = r20.u64;
	// lwzx r24,r10,r23
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + r23.u32);
loc_82578950:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82578aa4
	if (cr0.eq) goto loc_82578AA4;
	// lwz r11,228(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82578a98
	if (cr0.eq) goto loc_82578A98;
	// lwz r25,948(r24)
	r25.u64 = PPC_LOAD_U32(r24.u32 + 948);
	// mr r28,r18
	r28.u64 = r18.u64;
	// mr r27,r18
	r27.u64 = r18.u64;
	// mr r26,r20
	r26.u64 = r20.u64;
loc_82578974:
	// lwz r11,92(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 92);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// ble cr6,0x8257898c
	if (!cr6.gt) goto loc_8257898C;
	// mr r11,r18
	r11.u64 = r18.u64;
	// b 0x82578998
	goto loc_82578998;
loc_8257898C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r11,r20
	r11.u64 = r20.u64;
	// lwzx r28,r10,r27
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
loc_82578998:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82578a98
	if (cr0.eq) goto loc_82578A98;
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r29,r11,27
	r29.u64 = r11.u32 & 0x1F;
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r16
	r11.u64 = PPC_LOAD_U32(r30.u32 + r16.u32);
	// srw r11,r11,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (r11.u32 >> (r29.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82578a8c
	if (!cr0.eq) goto loc_82578A8C;
	// lwz r11,12(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r31,428(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// beq 0x825789f8
	if (cr0.eq) goto loc_825789F8;
	// lwz r4,12(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// bl 0x82587070
	sub_82587070(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825789fc
	goto loc_825789FC;
loc_825789F8:
	// mr r31,r18
	r31.u64 = r18.u64;
loc_825789FC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82589a30
	sub_82589A30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwzx r11,r30,r21
	r11.u64 = PPC_LOAD_U32(r30.u32 + r21.u32);
	// srw r11,r11,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (r11.u32 >> (r29.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82578a48
	if (!cr0.eq) goto loc_82578A48;
	// lwzx r11,r30,r21
	r11.u64 = PPC_LOAD_U32(r30.u32 + r21.u32);
	// slw r10,r20,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (r20.u32 << (r29.u8 & 0x3F));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stwx r11,r30,r21
	PPC_STORE_U32(r30.u32 + r21.u32, r11.u32);
	// bl 0x82583518
	sub_82583518(ctx, base);
loc_82578A48:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82589438
	sub_82589438(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82589588
	sub_82589588(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82578a7c
	if (!cr0.eq) goto loc_82578A7C;
	// li r7,517
	ctx.r7.s64 = 517;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82578A7C:
	// lwzx r11,r30,r16
	r11.u64 = PPC_LOAD_U32(r30.u32 + r16.u32);
	// slw r10,r20,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (r20.u32 << (r29.u8 & 0x3F));
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stwx r11,r30,r16
	PPC_STORE_U32(r30.u32 + r16.u32, r11.u32);
loc_82578A8C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// b 0x82578974
	goto loc_82578974;
loc_82578A98:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// b 0x8257892c
	goto loc_8257892C;
loc_82578AA4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825830e8
	sub_825830E8(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// bne cr6,0x82578810
	if (!cr6.eq) goto loc_82578810;
loc_82578AC0:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82578ad4
	if (cr6.eq) goto loc_82578AD4;
	// addi r4,r21,-4
	ctx.r4.s64 = r21.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82578AD4:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x82578ae8
	if (cr6.eq) goto loc_82578AE8;
	// addi r4,r16,-4
	ctx.r4.s64 = r16.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82578AE8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_82578AF0"))) PPC_WEAK_FUNC(sub_82578AF0);
PPC_FUNC_IMPL(__imp__sub_82578AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82568588
	sub_82568588(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82582968
	sub_82582968(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,432(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r28,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r28.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x82578b48
	if (cr0.eq) goto loc_82578B48;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x82578b4c
	goto loc_82578B4C;
loc_82578B48:
	// li r28,0
	r28.s64 = 0;
loc_82578B4C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r27,432(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82578b84
	if (cr0.eq) goto loc_82578B84;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// mr r24,r29
	r24.u64 = r29.u64;
	// b 0x82578b88
	goto loc_82578B88;
loc_82578B84:
	// li r24,0
	r24.s64 = 0;
loc_82578B88:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r27,432(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82578bc0
	if (cr0.eq) goto loc_82578BC0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// mr r25,r29
	r25.u64 = r29.u64;
	// b 0x82578bc4
	goto loc_82578BC4;
loc_82578BC0:
	// li r25,0
	r25.s64 = 0;
loc_82578BC4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r27,432(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82578bfc
	if (cr0.eq) goto loc_82578BFC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// mr r26,r29
	r26.u64 = r29.u64;
	// b 0x82578c00
	goto loc_82578C00;
loc_82578BFC:
	// li r26,0
	r26.s64 = 0;
loc_82578C00:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r27,432(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82578c38
	if (cr0.eq) goto loc_82578C38;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// mr r27,r29
	r27.u64 = r29.u64;
	// b 0x82578c3c
	goto loc_82578C3C;
loc_82578C38:
	// li r27,0
	r27.s64 = 0;
loc_82578C3C:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// blt cr6,0x82578c84
	if (cr6.lt) goto loc_82578C84;
	// addi r29,r23,4
	r29.s64 = r23.s64 + 4;
loc_82578C50:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82578068
	sub_82578068(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82578c50
	if (!cr0.eq) goto loc_82578C50;
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82578C84:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82578c98
	if (cr6.eq) goto loc_82578C98;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82564b78
	sub_82564B78(ctx, base);
loc_82578C98:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82578cac
	if (cr6.eq) goto loc_82578CAC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82578640
	sub_82578640(ctx, base);
loc_82578CAC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82578cc0
	if (cr6.eq) goto loc_82578CC0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82578640
	sub_82578640(ctx, base);
loc_82578CC0:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82578cd4
	if (cr6.eq) goto loc_82578CD4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82578640
	sub_82578640(ctx, base);
loc_82578CD4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82578ce8
	if (cr6.eq) goto loc_82578CE8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82578698
	sub_82578698(ctx, base);
loc_82578CE8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stb r10,372(r11)
	PPC_STORE_U8(r11.u32 + 372, ctx.r10.u8);
	// beq cr6,0x82578d10
	if (cr6.eq) goto loc_82578D10;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,-6732
	ctx.r4.s64 = r11.s64 + -6732;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_82578D10:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82578D18"))) PPC_WEAK_FUNC(sub_82578D18);
PPC_FUNC_IMPL(__imp__sub_82578D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r31,164(r23)
	r31.u64 = PPC_LOAD_U32(r23.u32 + 164);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r17,0
	r17.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r21,164(r23)
	r21.u64 = PPC_LOAD_U32(r23.u32 + 164);
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r17.u32);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r17.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// lwz r18,168(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r20,164(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r16,-32245
	r16.s64 = -2113208320;
	// addi r11,r11,-3664
	r11.s64 = r11.s64 + -3664;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r19,r11,26496
	r19.s64 = r11.s64 + 26496;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,-6440
	r11.s64 = r11.s64 + -6440;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r15,r11,8972
	r15.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,-6452
	r11.s64 = r11.s64 + -6452;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r14,r11,-6880
	r14.s64 = r11.s64 + -6880;
loc_82578DC8:
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r10,1112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1112);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82578e44
	if (cr0.eq) goto loc_82578E44;
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x82578e1c
	if (cr0.eq) goto loc_82578E1C;
	// lwz r9,12(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32169
	r11.s64 = -2108227584;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,30976
	ctx.r6.s64 = ctx.r10.s64 + 30976;
	// addi r5,r11,30704
	ctx.r5.s64 = r11.s64 + 30704;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,432(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// bl 0x82573f20
	sub_82573F20(ctx, base);
	// b 0x82578e20
	goto loc_82578E20;
loc_82578E1C:
	// mr r31,r17
	r31.u64 = r17.u64;
loc_82578E20:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r26,r11,1
	r26.s64 = r11.s64 + 1;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// b 0x82578e48
	goto loc_82578E48;
loc_82578E44:
	// lwz r26,80(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82578E48:
	// lwz r31,28(r21)
	r31.u64 = PPC_LOAD_U32(r21.u32 + 28);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825796e0
	if (cr6.eq) goto loc_825796E0;
	// b 0x82578e60
	goto loc_82578E60;
loc_82578E5C:
	// lwz r26,80(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82578E60:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825796d0
	if (cr0.eq) goto loc_825796D0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825796d0
	if (!cr0.eq) goto loc_825796D0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825796d0
	if (!cr0.eq) goto loc_825796D0;
	// addi r22,r31,28
	r22.s64 = r31.s64 + 28;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82578f04
	if (cr0.eq) goto loc_82578F04;
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82578ee0
	if (cr0.eq) goto loc_82578EE0;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r9,r11,64
	ctx.r9.u64 = r11.u64 | 64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x82578f04
	goto loc_82578F04;
loc_82578EE0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82578f04
	if (cr0.eq) goto loc_82578F04;
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// stw r17,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r17.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_82578F04:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82578f40
	if (cr0.eq) goto loc_82578F40;
	// lwz r11,948(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,132(r11)
	PPC_STORE_U32(r11.u32 + 132, ctx.r10.u32);
	// lwz r11,948(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,132(r11)
	PPC_STORE_U32(r11.u32 + 132, ctx.r10.u32);
loc_82578F40:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// bne cr6,0x82578f68
	if (!cr6.eq) goto loc_82578F68;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82578f68
	if (!cr6.eq) goto loc_82578F68;
	// lwz r11,948(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r10,132(r11)
	PPC_STORE_U32(r11.u32 + 132, ctx.r10.u32);
loc_82578F68:
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// li r4,272
	ctx.r4.s64 = 272;
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x82578fb4
	if (cr0.eq) goto loc_82578FB4;
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// mr r24,r11
	r24.u64 = r11.u64;
	// stb r17,264(r11)
	PPC_STORE_U8(r11.u32 + 264, r17.u8);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// stw r10,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r10.u32);
	// b 0x82578fb8
	goto loc_82578FB8;
loc_82578FB4:
	// mr r24,r17
	r24.u64 = r17.u64;
loc_82578FB8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8257910c
	if (cr0.eq) goto loc_8257910C;
	// lwz r9,12(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r11,1112(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1112);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579644
	if (cr0.eq) goto loc_82579644;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x82579018
	if (cr6.lt) goto loc_82579018;
	// addi r10,r31,236
	ctx.r10.s64 = r31.s64 + 236;
loc_82578FF8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82579090
	if (cr6.eq) goto loc_82579090;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// ble cr6,0x82578ff8
	if (!cr6.gt) goto loc_82578FF8;
loc_82579018:
	// li r11,1
	r11.s64 = 1;
loc_8257901C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579644
	if (cr0.eq) goto loc_82579644;
	// lwz r11,1692(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1692);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82579644
	if (!cr6.lt) goto loc_82579644;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82577898
	sub_82577898(ctx, base);
	// clrlwi. r29,r3,24
	r29.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82579064
	if (cr0.eq) goto loc_82579064;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8258a150
	sub_8258A150(ctx, base);
loc_82579064:
	// mr r30,r17
	r30.u64 = r17.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x825790e8
	if (!cr6.eq) goto loc_825790E8;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82579098
	if (!cr6.lt) goto loc_82579098;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x825790a0
	goto loc_825790A0;
loc_82579090:
	// mr r11,r17
	r11.u64 = r17.u64;
	// b 0x8257901c
	goto loc_8257901C;
loc_82579098:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825790A0:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,12(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// bl 0x82577d20
	sub_82577D20(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x825790c8
	if (cr0.eq) goto loc_825790C8;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// li r30,1
	r30.s64 = 1;
	// bl 0x8258a150
	sub_8258A150(ctx, base);
loc_825790C8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x825790e8
	if (!cr6.eq) goto loc_825790E8;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825790e8
	if (!cr0.eq) goto loc_825790E8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82577f38
	sub_82577F38(ctx, base);
	// b 0x82579644
	goto loc_82579644;
loc_825790E8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// b 0x825796d0
	goto loc_825796D0;
loc_8257910C:
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r11,1112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1112);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825791d8
	if (cr0.eq) goto loc_825791D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82570870
	sub_82570870(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825791d8
	if (cr0.eq) goto loc_825791D8;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82579140
	if (cr0.eq) goto loc_82579140;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// b 0x82579144
	goto loc_82579144;
loc_82579140:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_82579144:
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// addi r10,r19,6
	ctx.r10.s64 = r19.s64 + 6;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// subfic r11,r11,3
	xer.ca = r11.u32 <= 3;
	r11.s64 = 3 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825791d8
	if (!cr0.eq) goto loc_825791D8;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579188
	if (cr0.eq) goto loc_82579188;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x82576768
	sub_82576768(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825791d8
	if (cr0.eq) goto loc_825791D8;
loc_82579188:
	// lwz r5,12(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,1696(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1696);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x825791d8
	if (!cr6.lt) goto loc_825791D8;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r4,164(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 164);
	// bl 0x825835e8
	sub_825835E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8258a150
	sub_8258A150(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// b 0x825796d0
	goto loc_825796D0;
loc_825791D8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x8257924c
	if (cr6.lt) goto loc_8257924C;
	// addi r30,r1,164
	r30.s64 = ctx.r1.s64 + 164;
	// addi r28,r31,32
	r28.s64 = r31.s64 + 32;
loc_825791F0:
	// lwz r27,0(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// bne 0x82579214
	if (!cr0.eq) goto loc_82579214;
	// li r7,1158
	ctx.r7.s64 = 1158;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82579214:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,12(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r4,164(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 164);
	// bl 0x825835e8
	sub_825835E8(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// ble cr6,0x825791f0
	if (!cr6.gt) goto loc_825791F0;
	// lwz r18,168(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r20,164(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_8257924C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579310
	if (cr0.eq) goto loc_82579310;
	// lwz r11,80(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 80);
	// addi r10,r19,6
	ctx.r10.s64 = r19.s64 + 6;
	// mulli r9,r11,12
	ctx.r9.s64 = r11.s64 * 12;
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfic r10,r10,3
	xer.ca = ctx.r10.u32 <= 3;
	ctx.r10.s64 = 3 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82579298
	if (cr0.eq) goto loc_82579298;
	// lwz r10,80(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825792bc
	if (cr6.eq) goto loc_825792BC;
loc_82579298:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82579310
	if (!cr6.eq) goto loc_82579310;
	// lwz r11,80(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82579310
	if (!cr6.eq) goto loc_82579310;
	// lwz r11,224(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 224);
	// lwz r10,224(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 224);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82579310
	if (!cr6.gt) goto loc_82579310;
loc_825792BC:
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// mr r11,r20
	r11.u64 = r20.u64;
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// mr r20,r18
	r20.u64 = r18.u64;
	// mr r18,r11
	r18.u64 = r11.u64;
	// stw r10,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r10.u32);
	// stw r9,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r9.u32);
	// lbz r10,154(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 154);
	// lbz r11,153(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 153);
	// lbz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 160);
	// lbz r8,159(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 159);
	// stw r20,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r20.u32);
	// stb r10,153(r31)
	PPC_STORE_U8(r31.u32 + 153, ctx.r10.u8);
	// stb r11,154(r31)
	PPC_STORE_U8(r31.u32 + 154, r11.u8);
	// stb r9,159(r31)
	PPC_STORE_U8(r31.u32 + 159, ctx.r9.u8);
	// stb r8,160(r31)
	PPC_STORE_U8(r31.u32 + 160, ctx.r8.u8);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// stw r18,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r18.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// stw r10,204(r31)
	PPC_STORE_U32(r31.u32 + 204, ctx.r10.u32);
loc_82579310:
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r10,1112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1112);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8257947c
	if (cr0.eq) goto loc_8257947C;
	// lwz r11,1692(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1692);
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x8257947c
	if (!cr6.lt) goto loc_8257947C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82579364
	if (cr0.eq) goto loc_82579364;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82579364
	if (!cr0.eq) goto loc_82579364;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r9,r19,4
	ctx.r9.s64 = r19.s64 + 4;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r9
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82579368
	if (!cr0.eq) goto loc_82579368;
loc_82579364:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82579368:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579424
	if (cr0.eq) goto loc_82579424;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82579424
	if (!cr6.gt) goto loc_82579424;
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// blt cr6,0x825793d4
	if (cr6.lt) goto loc_825793D4;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_8257938C:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x825793a4
	if (!cr6.lt) goto loc_825793A4;
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// b 0x825793b0
	goto loc_825793B0;
loc_825793A4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825793B0:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,12(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// bl 0x82577d20
	sub_82577D20(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x825793e4
	if (!cr0.eq) goto loc_825793E4;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x8257938c
	if (!cr0.lt) goto loc_8257938C;
loc_825793D4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82577f38
	sub_82577F38(ctx, base);
	// b 0x8257947c
	goto loc_8257947C;
loc_825793E4:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x8258a150
	sub_8258A150(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x825796d0
	if (cr6.eq) goto loc_825796D0;
	// addi r4,r24,-4
	ctx.r4.s64 = r24.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// b 0x825796d0
	goto loc_825796D0;
loc_82579424:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8257947c
	if (cr6.eq) goto loc_8257947C;
	// mr r11,r17
	r11.u64 = r17.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_82579434:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bne cr6,0x82579578
	if (!cr6.eq) goto loc_82579578;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82579434
	if (cr6.lt) goto loc_82579434;
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82579454:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579474
	if (cr0.eq) goto loc_82579474;
	// li r7,1224
	ctx.r7.s64 = 1224;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82579474:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82577d78
	sub_82577D78(ctx, base);
loc_8257947C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82579644
	if (cr6.lt) goto loc_82579644;
	// addi r25,r1,164
	r25.s64 = ctx.r1.s64 + 164;
	// addi r27,r31,132
	r27.s64 = r31.s64 + 132;
loc_82579494:
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r11,1112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1112);
	// rlwinm. r11,r11,29,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579608
	if (cr0.eq) goto loc_82579608;
	// lwz r29,0(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82577f80
	sub_82577F80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579608
	if (cr0.eq) goto loc_82579608;
	// lwz r11,228(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825794e0
	if (cr0.eq) goto loc_825794E0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,56(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// bl 0x82576768
	sub_82576768(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579608
	if (cr0.eq) goto loc_82579608;
loc_825794E0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// bgt cr6,0x82579608
	if (cr6.gt) goto loc_82579608;
	// lbz r11,164(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 164);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82579608
	if (!cr0.eq) goto loc_82579608;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825858d0
	sub_825858D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82579608
	if (!cr0.eq) goto loc_82579608;
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// lbz r8,159(r29)
	ctx.r8.u64 = PPC_LOAD_U8(r29.u32 + 159);
	// lbz r7,153(r29)
	ctx.r7.u64 = PPC_LOAD_U8(r29.u32 + 153);
	// add r10,r30,r31
	ctx.r10.u64 = r30.u64 + r31.u64;
	// lbz r9,158(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 158);
	// lbz r6,152(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 152);
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stb r8,158(r11)
	PPC_STORE_U8(r11.u32 + 158, ctx.r8.u8);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// and r11,r11,r7
	r11.u64 = r11.u64 & ctx.r7.u64;
	// xor r11,r11,r6
	r11.u64 = r11.u64 ^ ctx.r6.u64;
	// stb r11,152(r10)
	PPC_STORE_U8(ctx.r10.u32 + 152, r11.u8);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,-6940(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + -6940);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579580
	if (cr0.eq) goto loc_82579580;
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// b 0x825795e8
	goto loc_825795E8;
loc_82579578:
	// li r11,1
	r11.s64 = 1;
	// b 0x82579454
	goto loc_82579454;
loc_82579580:
	// mr r28,r17
	r28.u64 = r17.u64;
loc_82579584:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r26,0(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 88);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// blt cr6,0x82579584
	if (cr6.lt) goto loc_82579584;
loc_825795E8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,236(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 236);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// b 0x82579618
	goto loc_82579618;
loc_82579608:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
loc_82579618:
	// li r11,48
	r11.s64 = 48;
	// stw r17,-100(r27)
	PPC_STORE_U32(r27.u32 + -100, r17.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// stw r11,-48(r27)
	PPC_STORE_U32(r27.u32 + -48, r11.u32);
	// stw r10,-72(r27)
	PPC_STORE_U32(r27.u32 + -72, ctx.r10.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x82579494
	if (!cr6.gt) goto loc_82579494;
loc_82579644:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r29,r17
	r29.u64 = r17.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8257967c
	if (!cr6.gt) goto loc_8257967C;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82579658:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8258a150
	sub_8258A150(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82579658
	if (cr6.lt) goto loc_82579658;
loc_8257967C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825796b0
	if (cr6.eq) goto loc_825796B0;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825796b0
	if (!cr0.eq) goto loc_825796B0;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r10,r19,4
	ctx.r10.s64 = r19.s64 + 4;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x825796b4
	if (!cr0.eq) goto loc_825796B4;
loc_825796B0:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_825796B4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825796d0
	if (cr0.eq) goto loc_825796D0;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825796d0
	if (!cr0.eq) goto loc_825796D0;
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_825796D0:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82578e5c
	if (!cr6.eq) goto loc_82578E5C;
loc_825796E0:
	// mr r27,r17
	r27.u64 = r17.u64;
	// mr r26,r17
	r26.u64 = r17.u64;
	// li r25,1
	r25.s64 = 1;
loc_825796EC:
	// lwz r11,56(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// ble cr6,0x82579704
	if (!cr6.gt) goto loc_82579704;
	// mr r11,r17
	r11.u64 = r17.u64;
	// b 0x82579710
	goto loc_82579710;
loc_82579704:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// lwzx r27,r10,r26
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
loc_82579710:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579838
	if (cr0.eq) goto loc_82579838;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82589930
	sub_82589930(ctx, base);
	// lwz r28,28(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82579820
	goto loc_82579820;
loc_82579730:
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257981c
	if (cr0.eq) goto loc_8257981C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8257981c
	if (cr0.eq) goto loc_8257981C;
	// lwz r31,28(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x8257977c
	if (!cr0.eq) goto loc_8257977C;
	// li r7,1318
	ctx.r7.s64 = 1318;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257977C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,12(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r4,164(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 164);
	// bl 0x825835e8
	sub_825835E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,4
	ctx.r10.s64 = 4;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,364
	r11.s64 = r11.s64 + 364;
loc_825797B0:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x825797b0
	if (!cr0.eq) goto loc_825797B0;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825797fc
	if (cr6.eq) goto loc_825797FC;
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825797fc
	if (!cr0.eq) goto loc_825797FC;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// addi r10,r19,4
	ctx.r10.s64 = r19.s64 + 4;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82579800
	if (!cr0.eq) goto loc_82579800;
loc_825797FC:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82579800:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257981c
	if (cr0.eq) goto loc_8257981C;
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257981c
	if (!cr0.eq) goto loc_8257981C;
	// lwz r11,224(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
loc_8257981C:
	// lwz r28,8(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 8);
loc_82579820:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82579730
	if (!cr6.eq) goto loc_82579730;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x825796ec
	goto loc_825796EC;
loc_82579838:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82589a58
	sub_82589A58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825798bc
	if (cr0.eq) goto loc_825798BC;
	// lwz r28,88(r21)
	r28.u64 = PPC_LOAD_U32(r21.u32 + 88);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82579860
	if (cr0.eq) goto loc_82579860;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// b 0x82579864
	goto loc_82579864;
loc_82579860:
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
loc_82579864:
	// lwz r21,0(r10)
	r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r31,1
	r31.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x8257994c
	if (!cr6.gt) goto loc_8257994C;
	// li r30,4
	r30.s64 = 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8257988c
	if (!cr6.lt) goto loc_8257988C;
loc_82579880:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// b 0x82579890
	goto loc_82579890;
loc_8257988C:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82579890:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82579880
	if (cr6.lt) goto loc_82579880;
	// b 0x8257994c
	goto loc_8257994C;
loc_825798BC:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8258a108
	sub_8258A108(ctx, base);
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r11,1112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1112);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825798f0
	if (cr0.eq) goto loc_825798F0;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
	// addi r30,r31,-1
	r30.s64 = r31.s64 + -1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// b 0x825798f4
	goto loc_825798F4;
loc_825798F0:
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825798F4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r31,84(r21)
	r31.u64 = PPC_LOAD_U32(r21.u32 + 84);
	// bl 0x825648d8
	sub_825648D8(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// b 0x82579944
	goto loc_82579944;
loc_82579908:
	// lwz r11,84(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 84);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x8257994c
	if (cr6.eq) goto loc_8257994C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8258a108
	sub_8258A108(ctx, base);
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r31,84(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,1112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1112);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579944
	if (cr0.eq) goto loc_82579944;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_82579944:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82579908
	if (!cr6.eq) goto loc_82579908;
loc_8257994C:
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82578dc8
	if (cr0.eq) goto loc_82578DC8;
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r11,1112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1112);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579984
	if (cr0.eq) goto loc_82579984;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82579984
	if (cr6.eq) goto loc_82579984;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-6504
	ctx.r4.s64 = r11.s64 + -6504;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_82579984:
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r11,1112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1112);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825799c8
	if (cr0.eq) goto loc_825799C8;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x825799ac
	if (cr6.eq) goto loc_825799AC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-6564
	ctx.r4.s64 = r11.s64 + -6564;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_825799AC:
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x825799c8
	if (cr6.eq) goto loc_825799C8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// addi r4,r11,-6624
	ctx.r4.s64 = r11.s64 + -6624;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_825799C8:
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x825799e4
	if (cr6.eq) goto loc_825799E4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// addi r4,r11,-6676
	ctx.r4.s64 = r11.s64 + -6676;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_825799E4:
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,369(r11)
	PPC_STORE_U8(r11.u32 + 369, ctx.r10.u8);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_82579A10"))) PPC_WEAK_FUNC(sub_82579A10);
PPC_FUNC_IMPL(__imp__sub_82579A10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82589cd0
	sub_82589CD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82589360
	sub_82589360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82578790
	sub_82578790(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82578d18
	sub_82578D18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564790
	sub_82564790(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82594160
	sub_82594160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565510
	sub_82565510(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82579a84
	if (!cr0.eq) goto loc_82579A84;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1428
	ctx.r7.s64 = 1428;
	// addi r6,r11,-6880
	ctx.r6.s64 = r11.s64 + -6880;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-6416
	ctx.r5.s64 = r11.s64 + -6416;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82579A84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82579A98"))) PPC_WEAK_FUNC(sub_82579A98);
PPC_FUNC_IMPL(__imp__sub_82579A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82579ac4
	if (!cr6.gt) goto loc_82579AC4;
loc_82579ABC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82579ba0
	goto loc_82579BA0;
loc_82579AC4:
	// bge cr6,0x82579ad0
	if (!cr6.lt) goto loc_82579AD0;
loc_82579AC8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82579ba0
	goto loc_82579BA0;
loc_82579AD0:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// clrlwi r31,r10,24
	r31.u64 = ctx.r10.u32 & 0xFF;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,24(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82579b24
	if (cr6.eq) goto loc_82579B24;
	// subfic r11,r31,0
	xer.ca = r31.u32 <= 0;
	r11.s64 = 0 - r31.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// b 0x82579ba0
	goto loc_82579BA0;
loc_82579B24:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82579b40
	if (!cr6.gt) goto loc_82579B40;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// b 0x82579b48
	goto loc_82579B48;
loc_82579B40:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
loc_82579B48:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82579b64
	if (!cr6.gt) goto loc_82579B64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x82579b68
	goto loc_82579B68;
loc_82579B64:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82579B68:
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82579abc
	if (cr6.gt) goto loc_82579ABC;
	// blt cr6,0x82579ac8
	if (cr6.lt) goto loc_82579AC8;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// bgt cr6,0x82579abc
	if (cr6.gt) goto loc_82579ABC;
	// blt cr6,0x82579ac8
	if (cr6.lt) goto loc_82579AC8;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82579abc
	if (cr6.gt) goto loc_82579ABC;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// li r3,-1
	ctx.r3.s64 = -1;
	// blt cr6,0x82579ba0
	if (cr6.lt) goto loc_82579BA0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82579BA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82579BA8"))) PPC_WEAK_FUNC(sub_82579BA8);
PPC_FUNC_IMPL(__imp__sub_82579BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82579c10
	if (!cr6.eq) goto loc_82579C10;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_82579BD0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82579c04
	if (!cr0.eq) goto loc_82579C04;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x82579c08
	if (cr0.eq) goto loc_82579C08;
loc_82579C04:
	// li r11,0
	r11.s64 = 0;
loc_82579C08:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x82579c28
	goto loc_82579C28;
loc_82579C10:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82579c24
	if (!cr6.eq) goto loc_82579C24;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// b 0x82579bd0
	goto loc_82579BD0;
loc_82579C24:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82579C28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82579C3C"))) PPC_WEAK_FUNC(sub_82579C3C);
PPC_FUNC_IMPL(__imp__sub_82579C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579C40"))) PPC_WEAK_FUNC(sub_82579C40);
PPC_FUNC_IMPL(__imp__sub_82579C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r19,0
	r19.s64 = 0;
	// addi r25,r10,8972
	r25.s64 = ctx.r10.s64 + 8972;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r19
	r26.u64 = r19.u64;
	// li r18,1
	r18.s64 = 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// addi r24,r10,-6112
	r24.s64 = ctx.r10.s64 + -6112;
	// beq cr6,0x82579c84
	if (cr6.eq) goto loc_82579C84;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82579d58
	if (!cr6.eq) goto loc_82579D58;
loc_82579C84:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r29,r18
	r29.u64 = r18.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82579cb0
	if (!cr6.eq) goto loc_82579CB0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,385
	ctx.r7.s64 = 385;
	// addi r5,r11,-6128
	ctx.r5.s64 = r11.s64 + -6128;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82579CB0:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r30,r11,-6264
	r30.s64 = r11.s64 + -6264;
loc_82579CBC:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82579cd8
	if (!cr6.eq) goto loc_82579CD8;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x82597a58
	sub_82597A58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82579d0c
	if (!cr0.eq) goto loc_82579D0C;
loc_82579CD8:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82579cf4
	if (!cr6.eq) goto loc_82579CF4;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x82597a90
	sub_82597A90(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82579d0c
	if (!cr0.eq) goto loc_82579D0C;
loc_82579CF4:
	// li r7,391
	ctx.r7.s64 = 391;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82579D0C:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82579d1c
	if (!cr6.gt) goto loc_82579D1C;
	// mr r29,r19
	r29.u64 = r19.u64;
loc_82579D1C:
	// mr r26,r31
	r26.u64 = r31.u64;
	// lwz r31,64(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x82579cbc
	if (!cr0.eq) goto loc_82579CBC;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579d58
	if (cr0.eq) goto loc_82579D58;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r19,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r19.u32);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82579d4c
	if (!cr6.eq) goto loc_82579D4C;
	// stw r18,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r18.u32);
	// b 0x82579d58
	goto loc_82579D58;
loc_82579D4C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82579d58
	if (!cr6.eq) goto loc_82579D58;
	// stw r19,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r19.u32);
loc_82579D58:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r20,2
	r20.s64 = 2;
	// addi r22,r11,-6288
	r22.s64 = r11.s64 + -6288;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r30,r11,-6316
	r30.s64 = r11.s64 + -6316;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r29,r11,-6348
	r29.s64 = r11.s64 + -6348;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r23,r11,-6364
	r23.s64 = r11.s64 + -6364;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r21,r11,-6388
	r21.s64 = r11.s64 + -6388;
loc_82579D84:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82579f84
	if (cr0.eq) goto loc_82579F84;
	// lwz r31,40(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579e90
	if (cr0.eq) goto loc_82579E90;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82579dd4
	if (!cr6.eq) goto loc_82579DD4;
	// li r7,414
	ctx.r7.s64 = 414;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82579DD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82597a90
	sub_82597A90(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// beq 0x82579e80
	if (cr0.eq) goto loc_82579E80;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579df8
	if (cr0.eq) goto loc_82579DF8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82579e00
	if (!cr6.eq) goto loc_82579E00;
loc_82579DF8:
	// li r11,3
	r11.s64 = 3;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_82579E00:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82579e64
	if (cr6.eq) goto loc_82579E64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82579e2c
	if (!cr6.eq) goto loc_82579E2C;
	// li r7,421
	ctx.r7.s64 = 421;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82579E2C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,64(r26)
	PPC_STORE_U32(r26.u32 + 64, r11.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82579e5c
	if (cr6.eq) goto loc_82579E5C;
	// li r7,423
	ctx.r7.s64 = 423;
loc_82579E48:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82579E5C:
	// lwz r26,64(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 64);
	// b 0x82579f84
	goto loc_82579F84;
loc_82579E64:
	// lwz r26,0(r27)
	r26.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
	// lwz r11,64(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82579f84
	if (cr6.eq) goto loc_82579F84;
	// li r7,428
	ctx.r7.s64 = 428;
	// b 0x82579f60
	goto loc_82579F60;
loc_82579E80:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82579f84
	if (!cr6.eq) goto loc_82579F84;
	// stw r18,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r18.u32);
	// b 0x82579f84
	goto loc_82579F84;
loc_82579E90:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579f84
	if (cr0.eq) goto loc_82579F84;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82579ed0
	if (!cr6.eq) goto loc_82579ED0;
	// li r7,436
	ctx.r7.s64 = 436;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82579ED0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82597a58
	sub_82597A58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// beq 0x82579f78
	if (cr0.eq) goto loc_82579F78;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82579ef4
	if (cr0.eq) goto loc_82579EF4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82579efc
	if (!cr6.eq) goto loc_82579EFC;
loc_82579EF4:
	// li r11,2
	r11.s64 = 2;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_82579EFC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82579f48
	if (cr6.eq) goto loc_82579F48;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82579f28
	if (!cr6.eq) goto loc_82579F28;
	// li r7,443
	ctx.r7.s64 = 443;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82579F28:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,64(r26)
	PPC_STORE_U32(r26.u32 + 64, r11.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82579e5c
	if (cr6.eq) goto loc_82579E5C;
	// li r7,445
	ctx.r7.s64 = 445;
	// b 0x82579e48
	goto loc_82579E48;
loc_82579F48:
	// lwz r26,0(r27)
	r26.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
	// lwz r11,64(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82579f84
	if (cr6.eq) goto loc_82579F84;
	// li r7,450
	ctx.r7.s64 = 450;
loc_82579F60:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x82579f84
	goto loc_82579F84;
loc_82579F78:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82579f84
	if (!cr6.eq) goto loc_82579F84;
	// stw r19,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r19.u32);
loc_82579F84:
	// addic. r20,r20,-1
	xer.ca = r20.u32 > 0;
	r20.s64 = r20.s64 + -1;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x82579d84
	if (!cr0.eq) goto loc_82579D84;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_82579F98"))) PPC_WEAK_FUNC(sub_82579F98);
PPC_FUNC_IMPL(__imp__sub_82579F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r30,r10,8972
	r30.s64 = ctx.r10.s64 + 8972;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r10,-6112
	r29.s64 = ctx.r10.s64 + -6112;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82579fec
	if (cr6.eq) goto loc_82579FEC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82579fec
	if (cr6.eq) goto loc_82579FEC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,466
	ctx.r7.s64 = 466;
	// addi r5,r11,-6004
	ctx.r5.s64 = r11.s64 + -6004;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82579FEC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8257a008
	if (!cr6.eq) goto loc_8257A008;
	// li r11,3
	r11.s64 = 3;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x8257a048
	goto loc_8257A048;
loc_8257A008:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8257a02c
	if (!cr6.eq) goto loc_8257A02C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x8257a048
	if (cr6.eq) goto loc_8257A048;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,472
	ctx.r7.s64 = 472;
	// addi r5,r11,-6032
	ctx.r5.s64 = r11.s64 + -6032;
	// b 0x8257a038
	goto loc_8257A038;
loc_8257A02C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r7,474
	ctx.r7.s64 = 474;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
loc_8257A038:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257A048:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8257A050"))) PPC_WEAK_FUNC(sub_8257A050);
PPC_FUNC_IMPL(__imp__sub_8257A050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x8257a08c
	if (cr0.eq) goto loc_8257A08C;
loc_8257A060:
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8257a094
	if (cr0.eq) goto loc_8257A094;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8257a060
	if (cr6.lt) goto loc_8257A060;
loc_8257A08C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8257A094:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A09C"))) PPC_WEAK_FUNC(sub_8257A09C);
PPC_FUNC_IMPL(__imp__sub_8257A09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A0A0"))) PPC_WEAK_FUNC(sub_8257A0A0);
PPC_FUNC_IMPL(__imp__sub_8257A0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A0AC"))) PPC_WEAK_FUNC(sub_8257A0AC);
PPC_FUNC_IMPL(__imp__sub_8257A0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A0B0"))) PPC_WEAK_FUNC(sub_8257A0B0);
PPC_FUNC_IMPL(__imp__sub_8257A0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// li r31,2
	r31.s64 = 2;
loc_8257A0CC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8257a0cc
	if (!cr0.eq) goto loc_8257A0CC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A104"))) PPC_WEAK_FUNC(sub_8257A104);
PPC_FUNC_IMPL(__imp__sub_8257A104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A108"))) PPC_WEAK_FUNC(sub_8257A108);
PPC_FUNC_IMPL(__imp__sub_8257A108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8257a12c
	if (!cr6.eq) goto loc_8257A12C;
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8257A12C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A134"))) PPC_WEAK_FUNC(sub_8257A134);
PPC_FUNC_IMPL(__imp__sub_8257A134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A138"))) PPC_WEAK_FUNC(sub_8257A138);
PPC_FUNC_IMPL(__imp__sub_8257A138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,56(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lis r11,1
	r11.s64 = 65536;
	// lwz r28,80(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r30,r11,-6112
	r30.s64 = r11.s64 + -6112;
	// blt cr6,0x8257a184
	if (cr6.lt) goto loc_8257A184;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,300
	ctx.r7.s64 = 300;
	// addi r5,r11,-5928
	ctx.r5.s64 = r11.s64 + -5928;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257A184:
	// lis r11,0
	r11.s64 = 0;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8257a1b0
	if (cr6.lt) goto loc_8257A1B0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,301
	ctx.r7.s64 = 301;
	// addi r5,r11,-5948
	ctx.r5.s64 = r11.s64 + -5948;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257A1B0:
	// rlwinm r11,r28,16,0,15
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 16) & 0xFFFF0000;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8257A1C0"))) PPC_WEAK_FUNC(sub_8257A1C0);
PPC_FUNC_IMPL(__imp__sub_8257A1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257a208
	if (cr0.eq) goto loc_8257A208;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x825829b8
	sub_825829B8(ctx, base);
	// b 0x8257a2b0
	goto loc_8257A2B0;
loc_8257A208:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257a27c
	if (!cr0.eq) goto loc_8257A27C;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// addi r11,r11,-3664
	r11.s64 = r11.s64 + -3664;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257a27c
	if (cr0.eq) goto loc_8257A27C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257a274
	if (cr6.eq) goto loc_8257A274;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,314
	ctx.r7.s64 = 314;
	// addi r6,r11,-6112
	ctx.r6.s64 = r11.s64 + -6112;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-5892
	ctx.r5.s64 = r11.s64 + -5892;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257A274:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// b 0x8257a2b0
	goto loc_8257A2B0;
loc_8257A27C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257a2ac
	if (cr6.eq) goto loc_8257A2AC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,311
	ctx.r7.s64 = 311;
	// addi r6,r11,-6112
	ctx.r6.s64 = r11.s64 + -6112;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-5908
	ctx.r5.s64 = r11.s64 + -5908;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257A2AC:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
loc_8257A2B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A2C8"))) PPC_WEAK_FUNC(sub_8257A2C8);
PPC_FUNC_IMPL(__imp__sub_8257A2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcdc
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257a300
	if (cr0.eq) goto loc_8257A300;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_8257A300:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r23,r11,8972
	r23.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r22,r11,-6112
	r22.s64 = r11.s64 + -6112;
	// beq 0x8257a390
	if (cr0.eq) goto loc_8257A390;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8257a354
	if (!cr6.eq) goto loc_8257A354;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// stw r10,228(r11)
	PPC_STORE_U32(r11.u32 + 228, ctx.r10.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
	// b 0x8257a378
	goto loc_8257A378;
loc_8257A354:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8257a378
	if (!cr6.eq) goto loc_8257A378;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,350
	ctx.r7.s64 = 350;
	// addi r5,r11,-6288
	ctx.r5.s64 = r11.s64 + -6288;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257A378:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x825979f8
	sub_825979F8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257a390
	if (cr0.eq) goto loc_8257A390;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,12(r27)
	PPC_STORE_U32(r27.u32 + 12, r11.u32);
loc_8257A390:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r29,0
	r29.s64 = 0;
	// lwz r21,4(r11)
	r21.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r21,0
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// ble 0x8257a508
	if (!cr0.gt) goto loc_8257A508;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r28,0
	r28.s64 = 0;
	// addi r26,r11,-5828
	r26.s64 = r11.s64 + -5828;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r25,r11,-5876
	r25.s64 = r11.s64 + -5876;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r24,r11,-6128
	r24.s64 = r11.s64 + -6128;
loc_8257A3C0:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8257a3dc
	if (!cr6.lt) goto loc_8257A3DC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// b 0x8257a3e4
	goto loc_8257A3E4;
loc_8257A3DC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257A3E4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8257a4f8
	if (!cr6.eq) goto loc_8257A4F8;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8257a410
	if (!cr6.lt) goto loc_8257A410;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// b 0x8257a418
	goto loc_8257A418;
loc_8257A410:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257A418:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x8257a4f8
	if (cr6.lt) goto loc_8257A4F8;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8257a45c
	if (cr6.eq) goto loc_8257A45C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8257a45c
	if (cr6.eq) goto loc_8257A45C;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// stw r10,228(r11)
	PPC_STORE_U32(r11.u32 + 228, ctx.r10.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// b 0x8257a4f4
	goto loc_8257A4F4;
loc_8257A45C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8257a480
	if (!cr6.eq) goto loc_8257A480;
	// li r7,363
	ctx.r7.s64 = 363;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257A480:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8257a4ac
	if (cr6.gt) goto loc_8257A4AC;
	// li r7,364
	ctx.r7.s64 = 364;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257A4AC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8257a4d8
	if (cr6.gt) goto loc_8257A4D8;
	// li r7,365
	ctx.r7.s64 = 365;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257A4D8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// stw r10,228(r11)
	PPC_STORE_U32(r11.u32 + 228, ctx.r10.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
loc_8257A4F4:
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_8257A4F8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r21
	cr6.compare<int32_t>(r29.s32, r21.s32, xer);
	// blt cr6,0x8257a3c0
	if (cr6.lt) goto loc_8257A3C0;
loc_8257A508:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_8257A510"))) PPC_WEAK_FUNC(sub_8257A510);
PPC_FUNC_IMPL(__imp__sub_8257A510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257a54c
	if (cr0.eq) goto loc_8257A54C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8257A54C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A568"))) PPC_WEAK_FUNC(sub_8257A568);
PPC_FUNC_IMPL(__imp__sub_8257A568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc8
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r18,136(r11)
	r18.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// lwz r11,8(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8257a970
	if (cr6.eq) goto loc_8257A970;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r21,0
	r21.s64 = 0;
	// addi r17,r11,-5620
	r17.s64 = r11.s64 + -5620;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r20,r11,-5684
	r20.s64 = r11.s64 + -5684;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r19,r11,-5696
	r19.s64 = r11.s64 + -5696;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,8972
	r24.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r16,r11,-5724
	r16.s64 = r11.s64 + -5724;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r23,r11,-6112
	r23.s64 = r11.s64 + -6112;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r22,r11,26496
	r22.s64 = r11.s64 + 26496;
loc_8257A5C8:
	// lwz r31,28(r18)
	r31.u64 = PPC_LOAD_U32(r18.u32 + 28);
	// b 0x8257a954
	goto loc_8257A954;
loc_8257A5D0:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257a950
	if (cr0.eq) goto loc_8257A950;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825973c0
	sub_825973C0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8257a950
	if (!cr6.eq) goto loc_8257A950;
	// lwz r11,140(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 140);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r28,r21
	r28.u64 = r21.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,140(r25)
	PPC_STORE_U32(r25.u32 + 140, r11.u32);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r27,1
	r27.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,224(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// stw r21,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r21.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x8257a724
	if (cr6.lt) goto loc_8257A724;
	// addi r26,r31,132
	r26.s64 = r31.s64 + 132;
loc_8257A640:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257a724
	if (!cr0.eq) goto loc_8257A724;
	// lwz r29,104(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 104);
	// addi r11,r22,6
	r11.s64 = r22.s64 + 6;
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8257a700
	if (cr0.eq) goto loc_8257A700;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825973c0
	sub_825973C0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// beq cr6,0x8257a6f4
	if (cr6.eq) goto loc_8257A6F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lbz r11,85(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bne cr6,0x8257a6dc
	if (!cr6.eq) goto loc_8257A6DC;
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8257a6dc
	if (!cr6.eq) goto loc_8257A6DC;
	// lbz r11,87(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x8257a6dc
	if (!cr6.eq) goto loc_8257A6DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825863a8
	sub_825863A8(ctx, base);
loc_8257A6DC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// b 0x8257a700
	goto loc_8257A700;
loc_8257A6F4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
loc_8257A700:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r27,r3
	cr6.compare<int32_t>(r27.s32, ctx.r3.s32, xer);
	// ble cr6,0x8257a640
	if (!cr6.gt) goto loc_8257A640;
loc_8257A724:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,144(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 144);
	// beq 0x8257a73c
	if (cr0.eq) goto loc_8257A73C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,144(r25)
	PPC_STORE_U32(r25.u32 + 144, r11.u32);
	// b 0x8257a950
	goto loc_8257A950;
loc_8257A73C:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,144(r25)
	PPC_STORE_U32(r25.u32 + 144, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bgt cr6,0x8257a778
	if (cr6.gt) goto loc_8257A778;
	// li r7,614
	ctx.r7.s64 = 614;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257A778:
	// lwz r29,236(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x8257a79c
	if (!cr0.eq) goto loc_8257A79C;
	// li r7,617
	ctx.r7.s64 = 617;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257A79C:
	// lwz r11,80(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// addi r10,r22,6
	ctx.r10.s64 = r22.s64 + 6;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8257a7cc
	if (!cr0.eq) goto loc_8257A7CC;
	// li r7,618
	ctx.r7.s64 = 618;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257A7CC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lbz r11,85(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bne cr6,0x8257a830
	if (!cr6.eq) goto loc_8257A830;
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8257a830
	if (!cr6.eq) goto loc_8257A830;
	// lbz r11,87(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x8257a830
	if (!cr6.eq) goto loc_8257A830;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825863a8
	sub_825863A8(ctx, base);
loc_8257A830:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,224(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// stw r21,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r21.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// lwz r29,240(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x8257a880
	if (!cr0.eq) goto loc_8257A880;
	// li r7,634
	ctx.r7.s64 = 634;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257A880:
	// lwz r11,80(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// addi r10,r22,6
	ctx.r10.s64 = r22.s64 + 6;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8257a8b0
	if (!cr0.eq) goto loc_8257A8B0;
	// li r7,635
	ctx.r7.s64 = 635;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257A8B0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lbz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x8257a914
	if (!cr6.eq) goto loc_8257A914;
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x8257a914
	if (!cr6.eq) goto loc_8257A914;
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x8257a914
	if (!cr6.eq) goto loc_8257A914;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825863a8
	sub_825863A8(ctx, base);
loc_8257A914:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825973c0
	sub_825973C0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8257a950
	if (!cr6.eq) goto loc_8257A950;
	// li r7,645
	ctx.r7.s64 = 645;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257A950:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8257A954:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257a5d0
	if (!cr6.eq) goto loc_8257A5D0;
	// lwz r18,8(r18)
	r18.u64 = PPC_LOAD_U32(r18.u32 + 8);
	// lwz r11,8(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257a5c8
	if (!cr6.eq) goto loc_8257A5C8;
loc_8257A970:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r6,144(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 144);
	// lwz r5,140(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 140);
	// addi r4,r11,-5784
	ctx.r4.s64 = r11.s64 + -5784;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_8257A990"))) PPC_WEAK_FUNC(sub_8257A990);
PPC_FUNC_IMPL(__imp__sub_8257A990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8257aa08
	if (!cr6.gt) goto loc_8257AA08;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_8257A9C0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8257a9d8
	if (!cr6.lt) goto loc_8257A9D8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// b 0x8257a9e0
	goto loc_8257A9E0;
loc_8257A9D8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257A9E0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// beq cr6,0x8257aa90
	if (cr6.eq) goto loc_8257AA90;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8257a9c0
	if (cr6.lt) goto loc_8257A9C0;
loc_8257AA08:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r29,432(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x8257aab8
	if (cr0.eq) goto loc_8257AAB8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r29,r11
	r29.u64 = r11.u64;
	// addi r10,r10,-5952
	ctx.r10.s64 = ctx.r10.s64 + -5952;
	// lfs f0,2480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r31.u32);
	// stw r8,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r8.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r31.u32);
	// stw r27,40(r11)
	PPC_STORE_U32(r11.u32 + 40, r27.u32);
	// stw r31,48(r11)
	PPC_STORE_U32(r11.u32 + 48, r31.u32);
	// stw r31,52(r11)
	PPC_STORE_U32(r11.u32 + 52, r31.u32);
	// stb r31,56(r11)
	PPC_STORE_U8(r11.u32 + 56, r31.u8);
	// stw r31,60(r11)
	PPC_STORE_U32(r11.u32 + 60, r31.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r31.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r9.u32);
	// b 0x8257aabc
	goto loc_8257AABC;
loc_8257AA90:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8257aaa8
	if (!cr6.lt) goto loc_8257AAA8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8257aab0
	goto loc_8257AAB0;
loc_8257AAA8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257AAB0:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8257ab4c
	goto loc_8257AB4C;
loc_8257AAB8:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_8257AABC:
	// stb r31,56(r29)
	PPC_STORE_U8(r29.u32 + 56, r31.u8);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,432(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r27,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r27.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x8257aaf4
	if (cr0.eq) goto loc_8257AAF4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x8257aaf8
	goto loc_8257AAF8;
loc_8257AAF4:
	// mr r27,r31
	r27.u64 = r31.u64;
loc_8257AAF8:
	// stw r27,52(r29)
	PPC_STORE_U32(r29.u32 + 52, r27.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,432(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r27,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r27.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x8257ab30
	if (cr0.eq) goto loc_8257AB30;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// mr r31,r27
	r31.u64 = r27.u64;
loc_8257AB30:
	// stw r31,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r31.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
loc_8257AB4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8257AB54"))) PPC_WEAK_FUNC(sub_8257AB54);
PPC_FUNC_IMPL(__imp__sub_8257AB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257AB58"))) PPC_WEAK_FUNC(sub_8257AB58);
PPC_FUNC_IMPL(__imp__sub_8257AB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82573fb0
	sub_82573FB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82573fb0
	sub_82573FB0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257ab9c
	if (cr0.eq) goto loc_8257AB9C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8257ab9c
	if (cr6.eq) goto loc_8257AB9C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8257AB9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257ABB8"))) PPC_WEAK_FUNC(sub_8257ABB8);
PPC_FUNC_IMPL(__imp__sub_8257ABB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,24(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// stw r10,108(r24)
	PPC_STORE_U32(r24.u32 + 108, ctx.r10.u32);
	// lwz r23,4(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addic. r26,r23,-1
	xer.ca = r23.u32 > 0;
	r26.s64 = r23.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x8257adb4
	if (cr0.lt) goto loc_8257ADB4;
	// rlwinm r25,r26,2,0,29
	r25.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_8257ABE8:
	// lwz r3,24(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bge cr6,0x8257ac04
	if (!cr6.lt) goto loc_8257AC04;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x8257ac0c
	goto loc_8257AC0C;
loc_8257AC04:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257AC0C:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r27,4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r27,0
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// ble 0x8257ace4
	if (!cr0.gt) goto loc_8257ACE4;
	// li r28,0
	r28.s64 = 0;
loc_8257AC28:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8257ac44
	if (!cr6.lt) goto loc_8257AC44;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// b 0x8257ac4c
	goto loc_8257AC4C;
loc_8257AC44:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257AC4C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8257ac7c
	if (!cr6.lt) goto loc_8257AC7C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// b 0x8257ac84
	goto loc_8257AC84;
loc_8257AC7C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257AC84:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8257aca4
	if (!cr6.lt) goto loc_8257ACA4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8257ACA4:
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x825979f8
	sub_825979F8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// beq 0x8257acc4
	if (cr0.eq) goto loc_8257ACC4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8257ACC4:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8257acd0
	if (!cr6.lt) goto loc_8257ACD0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8257ACD0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(r29.s32, r27.s32, xer);
	// blt cr6,0x8257ac28
	if (cr6.lt) goto loc_8257AC28;
loc_8257ACE4:
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x825978c0
	sub_825978C0(ctx, base);
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8257ad0c
	if (!cr6.gt) goto loc_8257AD0C;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x8257ad1c
	goto loc_8257AD1C;
loc_8257AD0C:
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// srawi r11,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	r11.s64 = ctx.r9.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
loc_8257AD1C:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r31,0
	r31.s64 = 0;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r28,0
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// ble 0x8257ad90
	if (!cr0.gt) goto loc_8257AD90;
	// li r29,0
	r29.s64 = 0;
loc_8257AD3C:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8257ad58
	if (!cr6.lt) goto loc_8257AD58;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x8257ad60
	goto loc_8257AD60;
loc_8257AD58:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257AD60:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8257ad80
	if (!cr6.eq) goto loc_8257AD80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
loc_8257AD80:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x8257ad3c
	if (cr6.lt) goto loc_8257AD3C;
loc_8257AD90:
	// lwz r11,108(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 108);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8257ada4
	if (!cr6.lt) goto loc_8257ADA4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8257ADA4:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// stw r11,108(r24)
	PPC_STORE_U32(r24.u32 + 108, r11.u32);
	// addi r25,r25,-4
	r25.s64 = r25.s64 + -4;
	// bge 0x8257abe8
	if (!cr0.lt) goto loc_8257ABE8;
loc_8257ADB4:
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// ble cr6,0x8257aeb0
	if (!cr6.gt) goto loc_8257AEB0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r26,0
	r26.s64 = 0;
	// lfd f31,-31360(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + -31360);
loc_8257ADCC:
	// lwz r3,24(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x8257ade8
	if (!cr6.lt) goto loc_8257ADE8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// b 0x8257adf0
	goto loc_8257ADF0;
loc_8257ADE8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257ADF0:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r28,0
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// ble 0x8257ae84
	if (!cr0.gt) goto loc_8257AE84;
	// li r29,0
	r29.s64 = 0;
loc_8257AE0C:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8257ae28
	if (!cr6.lt) goto loc_8257AE28;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x8257ae30
	goto loc_8257AE30;
loc_8257AE28:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257AE30:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8257ae74
	if (!cr6.eq) goto loc_8257AE74;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8257ae74
	if (!cr0.gt) goto loc_8257AE74;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fdiv f13,f31,f13
	ctx.f13.f64 = f31.f64 / ctx.f13.f64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
loc_8257AE74:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x8257ae0c
	if (cr6.lt) goto loc_8257AE0C;
loc_8257AE84:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8257aea0
	if (!cr6.gt) goto loc_8257AEA0;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// fsub f0,f0,f31
	f0.f64 = f0.f64 - f31.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
loc_8257AEA0:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r27,r23
	cr6.compare<int32_t>(r27.s32, r23.s32, xer);
	// blt cr6,0x8257adcc
	if (cr6.lt) goto loc_8257ADCC;
loc_8257AEB0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8257AEBC"))) PPC_WEAK_FUNC(sub_8257AEBC);
PPC_FUNC_IMPL(__imp__sub_8257AEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257AEC0"))) PPC_WEAK_FUNC(sub_8257AEC0);
PPC_FUNC_IMPL(__imp__sub_8257AEC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257aefc
	if (cr0.eq) goto loc_8257AEFC;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8257AEFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257AF18"))) PPC_WEAK_FUNC(sub_8257AF18);
PPC_FUNC_IMPL(__imp__sub_8257AF18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r31,44(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// b 0x8257af4c
	goto loc_8257AF4C;
loc_8257AF34:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82579a98
	sub_82579A98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x8257af6c
	if (cr0.gt) goto loc_8257AF6C;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8257AF4C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257af34
	if (!cr6.eq) goto loc_8257AF34;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x82582990
	sub_82582990(ctx, base);
loc_8257AF64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_8257AF6C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825828d0
	sub_825828D0(ctx, base);
	// b 0x8257af64
	goto loc_8257AF64;
}

__attribute__((alias("__imp__sub_8257AF7C"))) PPC_WEAK_FUNC(sub_8257AF7C);
PPC_FUNC_IMPL(__imp__sub_8257AF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257AF80"))) PPC_WEAK_FUNC(sub_8257AF80);
PPC_FUNC_IMPL(__imp__sub_8257AF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8257afcc
	if (cr6.eq) goto loc_8257AFCC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1388
	ctx.r7.s64 = 1388;
	// addi r6,r11,-6112
	ctx.r6.s64 = r11.s64 + -6112;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-5556
	ctx.r5.s64 = r11.s64 + -5556;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257AFCC:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8257afe4
	if (!cr6.gt) goto loc_8257AFE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8257b0b4
	goto loc_8257B0B4;
loc_8257AFE4:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257b0b0
	if (!cr0.eq) goto loc_8257B0B0;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8257b0b0
	if (!cr6.gt) goto loc_8257B0B0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8257b0b0
	if (cr6.gt) goto loc_8257B0B0;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8257b03c
	if (!cr6.gt) goto loc_8257B03C;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x8257b050
	goto loc_8257B050;
loc_8257B03C:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8257B050:
	// lwz r9,108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8257b094
	if (!cr6.gt) goto loc_8257B094;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8257b074
	if (!cr6.gt) goto loc_8257B074;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x8257b084
	goto loc_8257B084;
loc_8257B074:
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// srawi r11,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	r11.s64 = ctx.r9.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
loc_8257B084:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// b 0x8257b09c
	goto loc_8257B09C;
loc_8257B094:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
loc_8257B09C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,1704(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1704);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8257b0b4
	if (cr6.gt) goto loc_8257B0B4;
loc_8257B0B0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8257B0B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B0CC"))) PPC_WEAK_FUNC(sub_8257B0CC);
PPC_FUNC_IMPL(__imp__sub_8257B0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B0D0"))) PPC_WEAK_FUNC(sub_8257B0D0);
PPC_FUNC_IMPL(__imp__sub_8257B0D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r30,r11,-6112
	r30.s64 = r11.s64 + -6112;
	// beq cr6,0x8257b11c
	if (cr6.eq) goto loc_8257B11C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1418
	ctx.r7.s64 = 1418;
	// addi r5,r11,-5532
	ctx.r5.s64 = r11.s64 + -5532;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257B11C:
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8257b144
	if (cr6.eq) goto loc_8257B144;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1419
	ctx.r7.s64 = 1419;
	// addi r5,r11,-5556
	ctx.r5.s64 = r11.s64 + -5556;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257B144:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8257af80
	sub_8257AF80(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257b168
	if (cr0.eq) goto loc_8257B168;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8257af18
	sub_8257AF18(ctx, base);
	// b 0x8257b170
	goto loc_8257B170;
loc_8257B168:
	// addi r3,r28,60
	ctx.r3.s64 = r28.s64 + 60;
	// bl 0x82582990
	sub_82582990(ctx, base);
loc_8257B170:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8257B178"))) PPC_WEAK_FUNC(sub_8257B178);
PPC_FUNC_IMPL(__imp__sub_8257B178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r30,r11,-6112
	r30.s64 = r11.s64 + -6112;
	// bge cr6,0x8257b1c4
	if (!cr6.lt) goto loc_8257B1C4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1432
	ctx.r7.s64 = 1432;
	// addi r5,r11,-5508
	ctx.r5.s64 = r11.s64 + -5508;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257B1C4:
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8257b1ec
	if (cr6.eq) goto loc_8257B1EC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1433
	ctx.r7.s64 = 1433;
	// addi r5,r11,-5556
	ctx.r5.s64 = r11.s64 + -5556;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257B1EC:
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// li r30,0
	r30.s64 = 0;
	// lwz r27,4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r27,0
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// ble 0x8257b2dc
	if (!cr0.gt) goto loc_8257B2DC;
	// li r28,0
	r28.s64 = 0;
loc_8257B204:
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8257b220
	if (!cr6.lt) goto loc_8257B220;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// b 0x8257b228
	goto loc_8257B228;
loc_8257B220:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257B228:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8257b258
	if (!cr6.lt) goto loc_8257B258;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// b 0x8257b260
	goto loc_8257B260;
loc_8257B258:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257B260:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8257b2b0
	if (!cr6.lt) goto loc_8257B2B0;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8257b298
	if (!cr6.lt) goto loc_8257B298;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// b 0x8257b2a0
	goto loc_8257B2A0;
loc_8257B298:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257B2A0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_8257B2B0:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8257b2cc
	if (!cr6.eq) goto loc_8257B2CC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8257b0d0
	sub_8257B0D0(ctx, base);
loc_8257B2CC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// blt cr6,0x8257b204
	if (cr6.lt) goto loc_8257B204;
loc_8257B2DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8257B2E4"))) PPC_WEAK_FUNC(sub_8257B2E4);
PPC_FUNC_IMPL(__imp__sub_8257B2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B2E8"))) PPC_WEAK_FUNC(sub_8257B2E8);
PPC_FUNC_IMPL(__imp__sub_8257B2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257b38c
	if (cr0.eq) goto loc_8257B38C;
	// lwz r31,44(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8257b364
	if (cr6.eq) goto loc_8257B364;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// addi r29,r11,-3664
	r29.s64 = r11.s64 + -3664;
loc_8257B330:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257b374
	if (!cr0.eq) goto loc_8257B374;
	// bl 0x825854f8
	sub_825854F8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bge cr6,0x8257b384
	if (!cr6.lt) goto loc_8257B384;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257b330
	if (!cr6.eq) goto loc_8257B330;
loc_8257B364:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r11.u8);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// b 0x8257b430
	goto loc_8257B430;
loc_8257B374:
	// li r11,0
	r11.s64 = 0;
loc_8257B378:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8257B37C:
	// stb r11,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r11.u8);
	// b 0x8257b430
	goto loc_8257B430;
loc_8257B384:
	// li r11,1
	r11.s64 = 1;
	// b 0x8257b378
	goto loc_8257B378;
loc_8257B38C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257b3dc
	if (cr0.eq) goto loc_8257B3DC;
	// lwz r31,44(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// b 0x8257b3c4
	goto loc_8257B3C4;
loc_8257B3B0:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x825854f8
	sub_825854F8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bge cr6,0x8257b384
	if (!cr6.lt) goto loc_8257B384;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8257B3C4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257b3b0
	if (!cr6.eq) goto loc_8257B3B0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257B3D4:
	// li r11,0
	r11.s64 = 0;
	// b 0x8257b37c
	goto loc_8257B37C;
loc_8257B3DC:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257b42c
	if (cr0.eq) goto loc_8257B42C;
	// lwz r31,44(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// b 0x8257b414
	goto loc_8257B414;
loc_8257B400:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x825854f8
	sub_825854F8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// blt cr6,0x8257b424
	if (cr6.lt) goto loc_8257B424;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8257B414:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257b400
	if (!cr6.eq) goto loc_8257B400;
	// b 0x8257b364
	goto loc_8257B364;
loc_8257B424:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8257b3d4
	goto loc_8257B3D4;
loc_8257B42C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257B430:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8257B438"))) PPC_WEAK_FUNC(sub_8257B438);
PPC_FUNC_IMPL(__imp__sub_8257B438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8257b4a0
	if (!cr6.gt) goto loc_8257B4A0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1739
	ctx.r7.s64 = 1739;
	// addi r6,r11,-6112
	ctx.r6.s64 = r11.s64 + -6112;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-5484
	ctx.r5.s64 = r11.s64 + -5484;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257B4A0:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x8257b4c0
	if (!cr6.gt) goto loc_8257B4C0;
	// li r11,13
	r11.s64 = 13;
	// stb r11,0(0)
	PPC_STORE_U8(0, r11.u8);
loc_8257B4C0:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r28,0
	r28.s64 = 0;
	// b 0x8257b4e0
	goto loc_8257B4E0;
loc_8257B4CC:
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x8257b4dc
	if (!cr6.lt) goto loc_8257B4DC;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_8257B4DC:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8257B4E0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8257b4cc
	if (!cr0.eq) goto loc_8257B4CC;
	// lwz r30,92(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x8257b524
	goto loc_8257B524;
loc_8257B4F8:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x8257b508
	if (!cr6.lt) goto loc_8257B508;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_8257B508:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82582910
	sub_82582910(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257af18
	sub_8257AF18(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_8257B524:
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x8257b4f8
	if (!cr0.eq) goto loc_8257B4F8;
	// lwz r30,68(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// stw r28,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r28.u32);
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x8257b57c
	goto loc_8257B57C;
loc_8257B53C:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x8257b54c
	if (!cr6.lt) goto loc_8257B54C;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_8257B54C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257af80
	sub_8257AF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257b574
	if (cr0.eq) goto loc_8257B574;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82582910
	sub_82582910(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257af18
	sub_8257AF18(ctx, base);
loc_8257B574:
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_8257B57C:
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x8257b53c
	if (!cr0.eq) goto loc_8257B53C;
	// stw r28,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8257B590"))) PPC_WEAK_FUNC(sub_8257B590);
PPC_FUNC_IMPL(__imp__sub_8257B590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcdc
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// li r21,1
	r21.s64 = 1;
	// lwz r11,52(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// lwz r25,4(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r23,r11,8972
	r23.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// cmpwi r25,0
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r22,r11,-6112
	r22.s64 = r11.s64 + -6112;
	// ble 0x8257b6bc
	if (!cr0.gt) goto loc_8257B6BC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r26,0
	r26.s64 = 0;
	// addi r24,r11,-5348
	r24.s64 = r11.s64 + -5348;
loc_8257B5D8:
	// lwz r3,52(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x8257b5f4
	if (!cr6.lt) goto loc_8257B5F4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// b 0x8257b5fc
	goto loc_8257B5FC;
loc_8257B5F4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257B5FC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257b6ac
	if (!cr6.eq) goto loc_8257B6AC;
	// lwz r3,52(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x8257b628
	if (!cr6.lt) goto loc_8257B628;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// b 0x8257b630
	goto loc_8257B630;
loc_8257B628:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257B630:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
	// bne 0x8257b6ac
	if (!cr0.eq) goto loc_8257B6AC;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8257b6ac
	if (cr0.eq) goto loc_8257B6AC;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r30,r11,27
	r30.u64 = r11.u32 & 0x1F;
	// lwz r11,116(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 116);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r31,r10,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// srw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 >> (r30.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257b698
	if (!cr0.eq) goto loc_8257B698;
	// li r7,1904
	ctx.r7.s64 = 1904;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257B698:
	// lwz r11,116(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 116);
	// slw r10,r21,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r21.u32 << (r30.u8 & 0x3F));
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stwx r10,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r10.u32);
loc_8257B6AC:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r28,r25
	cr6.compare<int32_t>(r28.s32, r25.s32, xer);
	// blt cr6,0x8257b5d8
	if (cr6.lt) goto loc_8257B5D8;
loc_8257B6BC:
	// lwz r31,40(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257b6d8
	if (cr0.eq) goto loc_8257B6D8;
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
loc_8257B6D8:
	// lbz r11,56(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8257b7f0
	if (cr0.eq) goto loc_8257B7F0;
	// lwz r11,60(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8257b7f0
	if (!cr6.gt) goto loc_8257B7F0;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257b758
	if (cr0.eq) goto loc_8257B758;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// lwz r11,228(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257b758
	if (!cr0.eq) goto loc_8257B758;
	// lwz r30,56(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,116(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 116);
	// rlwinm r11,r30,27,5,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r30,27
	ctx.r9.u64 = r30.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257b764
	if (cr0.eq) goto loc_8257B764;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1922
	ctx.r7.s64 = 1922;
	// addi r5,r11,-5376
	ctx.r5.s64 = r11.s64 + -5376;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x8257b764
	goto loc_8257B764;
loc_8257B758:
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 116);
	// bl 0x8257a050
	sub_8257A050(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8257B764:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8257b784
	if (cr6.lt) goto loc_8257B784;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8257b7a0
	if (cr6.lt) goto loc_8257B7A0;
loc_8257B784:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1927
	ctx.r7.s64 = 1927;
	// addi r5,r11,-5440
	ctx.r5.s64 = r11.s64 + -5440;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257B7A0:
	// clrlwi r9,r30,27
	ctx.r9.u64 = r30.u32 & 0x1F;
	// lwz r11,116(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 116);
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// slw r9,r21,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r10,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r10.u32);
	// lwz r11,128(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 128);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x8257b88c
	if (!cr6.gt) goto loc_8257B88C;
	// stw r30,128(r29)
	PPC_STORE_U32(r29.u32 + 128, r30.u32);
	// b 0x8257b88c
	goto loc_8257B88C;
loc_8257B7F0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8257b82c
	if (cr6.eq) goto loc_8257B82C;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257b82c
	if (!cr0.eq) goto loc_8257B82C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,26496
	r11.s64 = r11.s64 + 26496;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r21
	r11.u64 = r21.u64;
	// bne 0x8257b830
	if (!cr0.eq) goto loc_8257B830;
loc_8257B82C:
	// li r11,0
	r11.s64 = 0;
loc_8257B830:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257b88c
	if (cr0.eq) goto loc_8257B88C;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257b864
	if (!cr0.eq) goto loc_8257B864;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 500);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,500(r11)
	PPC_STORE_U32(r11.u32 + 500, ctx.r10.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// b 0x8257b88c
	goto loc_8257B88C;
loc_8257B864:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,116(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 116);
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r9,2
	r11.s64 = ctx.r9.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r21,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8257B88C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_8257B894"))) PPC_WEAK_FUNC(sub_8257B894);
PPC_FUNC_IMPL(__imp__sub_8257B894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B898"))) PPC_WEAK_FUNC(sub_8257B898);
PPC_FUNC_IMPL(__imp__sub_8257B898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,228(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8257b8f4
	if (!cr0.eq) goto loc_8257B8F4;
	// rlwinm. r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8257b8f4
	if (!cr0.eq) goto loc_8257B8F4;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8257b8e4
	if (cr6.eq) goto loc_8257B8E4;
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257b8e4
	if (!cr0.eq) goto loc_8257B8E4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,26496
	r11.s64 = r11.s64 + 26496;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8257b8e8
	if (!cr0.eq) goto loc_8257B8E8;
loc_8257B8E4:
	// li r11,0
	r11.s64 = 0;
loc_8257B8E8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8257b8f8
	if (!cr0.eq) goto loc_8257B8F8;
loc_8257B8F4:
	// li r11,0
	r11.s64 = 0;
loc_8257B8F8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B900"))) PPC_WEAK_FUNC(sub_8257B900);
PPC_FUNC_IMPL(__imp__sub_8257B900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257B910"))) PPC_WEAK_FUNC(sub_8257B910);
PPC_FUNC_IMPL(__imp__sub_8257B910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B924"))) PPC_WEAK_FUNC(sub_8257B924);
PPC_FUNC_IMPL(__imp__sub_8257B924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B928"))) PPC_WEAK_FUNC(sub_8257B928);
PPC_FUNC_IMPL(__imp__sub_8257B928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,27464
	r11.s64 = r11.s64 + 27464;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B944"))) PPC_WEAK_FUNC(sub_8257B944);
PPC_FUNC_IMPL(__imp__sub_8257B944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B948"))) PPC_WEAK_FUNC(sub_8257B948);
PPC_FUNC_IMPL(__imp__sub_8257B948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B960"))) PPC_WEAK_FUNC(sub_8257B960);
PPC_FUNC_IMPL(__imp__sub_8257B960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257b978
	if (cr0.eq) goto loc_8257B978;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8257b97c
	if (!cr6.eq) goto loc_8257B97C;
loc_8257B978:
	// li r11,1
	r11.s64 = 1;
loc_8257B97C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B984"))) PPC_WEAK_FUNC(sub_8257B984);
PPC_FUNC_IMPL(__imp__sub_8257B984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B988"))) PPC_WEAK_FUNC(sub_8257B988);
PPC_FUNC_IMPL(__imp__sub_8257B988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5256
	r11.s64 = r11.s64 + -5256;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x8257b9dc
	if (cr0.eq) goto loc_8257B9DC;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// addi r10,r10,-5320
	ctx.r10.s64 = ctx.r10.s64 + -5320;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x8257b9e0
	goto loc_8257B9E0;
loc_8257B9DC:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8257B9E0:
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x8257ba10
	if (cr0.eq) goto loc_8257BA10;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// addi r10,r10,-5288
	ctx.r10.s64 = ctx.r10.s64 + -5288;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x8257ba14
	goto loc_8257BA14;
loc_8257BA10:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8257BA14:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// bl 0x8257a0b0
	sub_8257A0B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8257BA38"))) PPC_WEAK_FUNC(sub_8257BA38);
PPC_FUNC_IMPL(__imp__sub_8257BA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
loc_8257BA50:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257ba8c
	if (cr0.eq) goto loc_8257BA8C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// blt cr6,0x8257ba50
	if (cr6.lt) goto loc_8257BA50;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8257BA84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_8257BA8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8257ba84
	goto loc_8257BA84;
}

__attribute__((alias("__imp__sub_8257BA94"))) PPC_WEAK_FUNC(sub_8257BA94);
PPC_FUNC_IMPL(__imp__sub_8257BA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BA98"))) PPC_WEAK_FUNC(sub_8257BA98);
PPC_FUNC_IMPL(__imp__sub_8257BA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// li r31,2
	r31.s64 = 2;
loc_8257BAB0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8257bab0
	if (!cr0.eq) goto loc_8257BAB0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8257BADC"))) PPC_WEAK_FUNC(sub_8257BADC);
PPC_FUNC_IMPL(__imp__sub_8257BADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BAE0"))) PPC_WEAK_FUNC(sub_8257BAE0);
PPC_FUNC_IMPL(__imp__sub_8257BAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
loc_8257BAFC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257bb44
	if (!cr0.eq) goto loc_8257BB44;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// blt cr6,0x8257bafc
	if (cr6.lt) goto loc_8257BAFC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257BB2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8257BB44:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8257bb2c
	goto loc_8257BB2C;
}

__attribute__((alias("__imp__sub_8257BB4C"))) PPC_WEAK_FUNC(sub_8257BB4C);
PPC_FUNC_IMPL(__imp__sub_8257BB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BB50"))) PPC_WEAK_FUNC(sub_8257BB50);
PPC_FUNC_IMPL(__imp__sub_8257BB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
loc_8257BB6C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257bbb4
	if (cr0.eq) goto loc_8257BBB4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// blt cr6,0x8257bb6c
	if (cr6.lt) goto loc_8257BB6C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8257BB9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8257BBB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8257bb9c
	goto loc_8257BB9C;
}

__attribute__((alias("__imp__sub_8257BBBC"))) PPC_WEAK_FUNC(sub_8257BBBC);
PPC_FUNC_IMPL(__imp__sub_8257BBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BBC0"))) PPC_WEAK_FUNC(sub_8257BBC0);
PPC_FUNC_IMPL(__imp__sub_8257BBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
loc_8257BBDC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257bc24
	if (cr0.eq) goto loc_8257BC24;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// blt cr6,0x8257bbdc
	if (cr6.lt) goto loc_8257BBDC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8257BC0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8257BC24:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8257bc0c
	goto loc_8257BC0C;
}

__attribute__((alias("__imp__sub_8257BC2C"))) PPC_WEAK_FUNC(sub_8257BC2C);
PPC_FUNC_IMPL(__imp__sub_8257BC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BC30"))) PPC_WEAK_FUNC(sub_8257BC30);
PPC_FUNC_IMPL(__imp__sub_8257BC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
loc_8257BC4C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257bc94
	if (cr0.eq) goto loc_8257BC94;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// blt cr6,0x8257bc4c
	if (cr6.lt) goto loc_8257BC4C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8257BC7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8257BC94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8257bc7c
	goto loc_8257BC7C;
}

__attribute__((alias("__imp__sub_8257BC9C"))) PPC_WEAK_FUNC(sub_8257BC9C);
PPC_FUNC_IMPL(__imp__sub_8257BC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BCA0"))) PPC_WEAK_FUNC(sub_8257BCA0);
PPC_FUNC_IMPL(__imp__sub_8257BCA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11504
	r11.s64 = r11.s64 + -11504;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8257bcd4
	if (cr0.eq) goto loc_8257BCD4;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8257BCD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BCEC"))) PPC_WEAK_FUNC(sub_8257BCEC);
PPC_FUNC_IMPL(__imp__sub_8257BCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BCF0"))) PPC_WEAK_FUNC(sub_8257BCF0);
PPC_FUNC_IMPL(__imp__sub_8257BCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r29,r11,-6112
	r29.s64 = r11.s64 + -6112;
	// bne 0x8257bd48
	if (!cr0.eq) goto loc_8257BD48;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,213
	ctx.r7.s64 = 213;
	// addi r5,r11,-5204
	ctx.r5.s64 = r11.s64 + -5204;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257BD48:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257bd80
	if (!cr0.eq) goto loc_8257BD80;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,214
	ctx.r7.s64 = 214;
	// addi r5,r11,-5224
	ctx.r5.s64 = r11.s64 + -5224;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257BD80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825862a8
	sub_825862A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825862a8
	sub_825862A8(ctx, base);
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lwz r10,168(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 168);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8257bdc0
	if (!cr6.eq) goto loc_8257BDC0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8257bdc0
	if (cr6.eq) goto loc_8257BDC0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257bdc0
	if (cr6.eq) goto loc_8257BDC0;
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8257bdc4
	if (cr6.eq) goto loc_8257BDC4;
loc_8257BDC0:
	// li r11,0
	r11.s64 = 0;
loc_8257BDC4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8257BDD0"))) PPC_WEAK_FUNC(sub_8257BDD0);
PPC_FUNC_IMPL(__imp__sub_8257BDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11504
	r11.s64 = r11.s64 + -11504;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq 0x8257be10
	if (cr0.eq) goto loc_8257BE10;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8257be10
	if (cr6.eq) goto loc_8257BE10;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8257BE10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BE28"))) PPC_WEAK_FUNC(sub_8257BE28);
PPC_FUNC_IMPL(__imp__sub_8257BE28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,1112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1112);
	// rlwinm. r11,r11,22,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257be94
	if (!cr0.eq) goto loc_8257BE94;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// b 0x8257be84
	goto loc_8257BE84;
loc_8257BE54:
	// lwz r11,28(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// b 0x8257be74
	goto loc_8257BE74;
loc_8257BE5C:
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8257be70
	if (cr0.eq) goto loc_8257BE70;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,228(r11)
	PPC_STORE_U32(r11.u32 + 228, ctx.r10.u32);
loc_8257BE70:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_8257BE74:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8257be5c
	if (!cr6.eq) goto loc_8257BE5C;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_8257BE84:
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257be54
	if (!cr6.eq) goto loc_8257BE54;
	// b 0x8257c15c
	goto loc_8257C15C;
loc_8257BE94:
	// lwz r11,352(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8254be80
	sub_8254BE80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8257bed0
	if (!cr6.gt) goto loc_8257BED0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8257BEB8:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x8257beb8
	if (cr6.lt) goto loc_8257BEB8;
loc_8257BED0:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r27,136(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// b 0x8257c0a4
	goto loc_8257C0A4;
loc_8257BEDC:
	// lwz r31,28(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// b 0x8257c094
	goto loc_8257C094;
loc_8257BEE4:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257c090
	if (cr0.eq) goto loc_8257C090;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8257bf88
	if (cr0.eq) goto loc_8257BF88;
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82597bd8
	sub_82597BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82597c38
	sub_82597C38(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// li r29,1
	r29.s64 = 1;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x8257c014
	if (cr6.lt) goto loc_8257C014;
	// addi r28,r31,236
	r28.s64 = r31.s64 + 236;
loc_8257BF4C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82597bd8
	sub_82597BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82597c38
	sub_82597C38(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// ble cr6,0x8257bf4c
	if (!cr6.gt) goto loc_8257BF4C;
	// b 0x8257c014
	goto loc_8257C014;
loc_8257BF88:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(r11.s32, 50, xer);
	// bne cr6,0x8257bfb8
	if (!cr6.eq) goto loc_8257BFB8;
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82597bd8
	sub_82597BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82597c38
	sub_82597C38(ctx, base);
	// b 0x8257c014
	goto loc_8257C014;
loc_8257BFB8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x8257c014
	if (cr6.lt) goto loc_8257C014;
	// addi r29,r31,236
	r29.s64 = r31.s64 + 236;
loc_8257BFCC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// lwz r9,948(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 948);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x8257c000
	if (cr6.eq) goto loc_8257C000;
	// lwz r11,224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82597bd8
	sub_82597BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82597c38
	sub_82597C38(ctx, base);
loc_8257C000:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// ble cr6,0x8257bfcc
	if (!cr6.gt) goto loc_8257BFCC;
loc_8257C014:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257c03c
	if (cr0.eq) goto loc_8257C03C;
	// lwz r29,224(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// bl 0x82564938
	sub_82564938(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r29,1
	ctx.r3.s64 = r29.s64 + 1;
	// lwz r28,224(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// b 0x8257c058
	goto loc_8257C058;
loc_8257C03C:
	// bl 0x82570870
	sub_82570870(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257c090
	if (cr0.eq) goto loc_8257C090;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// lwz r28,224(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
loc_8257C058:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82597bd8
	sub_82597BD8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r28,1
	ctx.r3.s64 = r28.s64 + 1;
	// bl 0x82597bd8
	sub_82597BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x8257c084
	if (cr6.lt) goto loc_8257C084;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bge cr6,0x8257c088
	if (!cr6.lt) goto loc_8257C088;
loc_8257C084:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8257C088:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82597c38
	sub_82597C38(ctx, base);
loc_8257C090:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8257C094:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257bee4
	if (!cr6.eq) goto loc_8257BEE4;
	// lwz r27,8(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 8);
loc_8257C0A4:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257bedc
	if (!cr6.eq) goto loc_8257BEDC;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// lwz r29,136(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// b 0x8257c120
	goto loc_8257C120;
loc_8257C0C4:
	// lwz r31,28(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// b 0x8257c110
	goto loc_8257C110;
loc_8257C0CC:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257c10c
	if (cr0.eq) goto loc_8257C10C;
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82597bd8
	sub_82597BD8(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8257c100
	if (!cr0.eq) goto loc_8257C100;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// b 0x8257c104
	goto loc_8257C104;
loc_8257C100:
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_8257C104:
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_8257C10C:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8257C110:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257c0cc
	if (!cr6.eq) goto loc_8257C0CC;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_8257C120:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257c0c4
	if (!cr6.eq) goto loc_8257C0C4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r4,r11,-5184
	ctx.r4.s64 = r11.s64 + -5184;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// lwz r11,412(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 412);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8257C15C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8257C164"))) PPC_WEAK_FUNC(sub_8257C164);
PPC_FUNC_IMPL(__imp__sub_8257C164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257C168"))) PPC_WEAK_FUNC(sub_8257C168);
PPC_FUNC_IMPL(__imp__sub_8257C168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r24,1
	r24.s64 = 1;
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r31,136(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r25,4(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8257c29c
	goto loc_8257C29C;
loc_8257C194:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x82565568
	sub_82565568(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x82565568
	sub_82565568(ctx, base);
	// lwz r29,28(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// b 0x8257c28c
	goto loc_8257C28C;
loc_8257C1C8:
	// lwz r11,228(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257c288
	if (cr0.eq) goto loc_8257C288;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// mr r27,r24
	r27.u64 = r24.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x8257c288
	if (cr6.lt) goto loc_8257C288;
	// li r28,0
	r28.s64 = 0;
	// addi r26,r29,236
	r26.s64 = r29.s64 + 236;
loc_8257C1EC:
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257c270
	if (cr0.eq) goto loc_8257C270;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8257c248
	if (cr0.eq) goto loc_8257C248;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r10,r27,-1
	ctx.r10.s64 = r27.s64 + -1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8257c238
	if (!cr6.lt) goto loc_8257C238;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r10,r11,r28
	ctx.r10.u64 = r11.u64 + r28.u64;
	// b 0x8257c23c
	goto loc_8257C23C;
loc_8257C238:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257C23C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// b 0x8257c24c
	goto loc_8257C24C;
loc_8257C248:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
loc_8257C24C:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r9,2
	r11.s64 = ctx.r9.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r24,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8257C270:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// ble cr6,0x8257c1ec
	if (!cr6.gt) goto loc_8257C1EC;
loc_8257C288:
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_8257C28C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257c1c8
	if (!cr6.eq) goto loc_8257C1C8;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8257C29C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257c194
	if (!cr6.eq) goto loc_8257C194;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// bl 0x82568630
	sub_82568630(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8257C2B4:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// mr r30,r24
	r30.u64 = r24.u64;
	// addi r3,r11,128
	ctx.r3.s64 = r11.s64 + 128;
	// bl 0x82582968
	sub_82582968(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x8257c4a8
	if (cr6.lt) goto loc_8257C4A8;
	// addi r28,r27,4
	r28.s64 = r27.s64 + 4;
loc_8257C2D4:
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257c48c
	if (!cr0.eq) goto loc_8257C48C;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// li r11,0
	r11.s64 = 0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8257c328
	if (!cr6.gt) goto loc_8257C328;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_8257C30C:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8257c30c
	if (cr6.lt) goto loc_8257C30C;
loc_8257C328:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_8257C338:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8257c350
	if (!cr6.gt) goto loc_8257C350;
	// li r11,0
	r11.s64 = 0;
	// b 0x8257c35c
	goto loc_8257C35C;
loc_8257C350:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r11,r24
	r11.u64 = r24.u64;
	// lwzx r7,r10,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_8257C35C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257c3f8
	if (cr0.eq) goto loc_8257C3F8;
	// lwz r8,100(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// clrlwi. r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8257c3b0
	if (cr0.eq) goto loc_8257C3B0;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8257c3a8
	if (!cr6.gt) goto loc_8257C3A8;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
loc_8257C38C:
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x8257c38c
	if (cr6.lt) goto loc_8257C38C;
loc_8257C3A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8257c3ec
	goto loc_8257C3EC;
loc_8257C3B0:
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8257c3ec
	if (!cr6.gt) goto loc_8257C3EC;
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_8257C3C8:
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// or r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 | r26.u64;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// blt cr6,0x8257c3c8
	if (cr6.lt) goto loc_8257C3C8;
loc_8257C3EC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// b 0x8257c338
	goto loc_8257C338;
loc_8257C3F8:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x8257c43c
	if (cr0.eq) goto loc_8257C43C;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// addi r11,r9,8
	r11.s64 = ctx.r9.s64 + 8;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_8257C418:
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// or r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 | ctx.r5.u64;
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// bne cr6,0x8257c4b8
	if (!cr6.eq) goto loc_8257C4B8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// blt cr6,0x8257c418
	if (cr6.lt) goto loc_8257C418;
loc_8257C43C:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8257C440:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257c48c
	if (!cr0.eq) goto loc_8257C48C;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8257c48c
	if (!cr6.gt) goto loc_8257C48C;
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_8257C468:
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x8257c468
	if (cr6.lt) goto loc_8257C468;
loc_8257C48C:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r3,r11,128
	ctx.r3.s64 = r11.s64 + 128;
	// bl 0x82582968
	sub_82582968(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// ble cr6,0x8257c2d4
	if (!cr6.gt) goto loc_8257C2D4;
loc_8257C4A8:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257c2b4
	if (!cr0.eq) goto loc_8257C2B4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
loc_8257C4B8:
	// li r11,0
	r11.s64 = 0;
	// b 0x8257c440
	goto loc_8257C440;
}

__attribute__((alias("__imp__sub_8257C4C0"))) PPC_WEAK_FUNC(sub_8257C4C0);
PPC_FUNC_IMPL(__imp__sub_8257C4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r20,0
	r20.s64 = 0;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stb r20,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r20.u8);
	// lwz r11,1112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1112);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257c4fc
	if (cr0.eq) goto loc_8257C4FC;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// b 0x8257c500
	goto loc_8257C500;
loc_8257C4FC:
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r20.u32);
loc_8257C500:
	// mr r29,r20
	r29.u64 = r20.u64;
	// stw r4,16(r25)
	PPC_STORE_U32(r25.u32 + 16, ctx.r4.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// bl 0x82582930
	sub_82582930(ctx, base);
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// lwz r27,28(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r30,r11,-6112
	r30.s64 = r11.s64 + -6112;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// beq cr6,0x8257cce0
	if (cr6.eq) goto loc_8257CCE0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r19,r11,-5952
	r19.s64 = r11.s64 + -5952;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,26496
	r11.s64 = r11.s64 + 26496;
	// lfs f31,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f31.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r18,r11,-4872
	r18.s64 = r11.s64 + -4872;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r17,r11,-4908
	r17.s64 = r11.s64 + -4908;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r16,r11,-4916
	r16.s64 = r11.s64 + -4916;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r15,r11,-4944
	r15.s64 = r11.s64 + -4944;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r14,r11,-4980
	r14.s64 = r11.s64 + -4980;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,-5000
	r11.s64 = r11.s64 + -5000;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,-5024
	r11.s64 = r11.s64 + -5024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
loc_8257C59C:
	// lwz r11,228(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 228);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8257ccd0
	if (cr0.eq) goto loc_8257CCD0;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r11,228(r27)
	PPC_STORE_U32(r27.u32 + 228, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257ccd0
	if (!cr0.eq) goto loc_8257CCD0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257ccd0
	if (!cr0.eq) goto loc_8257CCD0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// beq 0x8257c69c
	if (cr0.eq) goto loc_8257C69C;
	// bl 0x8257b898
	sub_8257B898(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257c62c
	if (cr0.eq) goto loc_8257C62C;
	// li r7,882
	ctx.r7.s64 = 882;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257C62C:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8257c664
	if (cr6.eq) goto loc_8257C664;
	// lwz r11,228(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257c664
	if (!cr0.eq) goto loc_8257C664;
	// lwz r11,80(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 80);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8257c668
	if (!cr0.eq) goto loc_8257C668;
loc_8257C664:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8257C668:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257ccd0
	if (cr0.eq) goto loc_8257CCD0;
	// lwz r11,228(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257ccd0
	if (!cr0.eq) goto loc_8257CCD0;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r9,80(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 80);
	// lwz r10,500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 500);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,500(r11)
	PPC_STORE_U32(r11.u32 + 500, ctx.r10.u32);
	// stw r10,56(r27)
	PPC_STORE_U32(r27.u32 + 56, ctx.r10.u32);
	// stw r9,80(r27)
	PPC_STORE_U32(r27.u32 + 80, ctx.r9.u32);
	// b 0x8257ccd0
	goto loc_8257CCD0;
loc_8257C69C:
	// bl 0x825979c0
	sub_825979C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257c6c8
	if (!cr0.eq) goto loc_8257C6C8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82597a90
	sub_82597A90(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257c6c8
	if (!cr0.eq) goto loc_8257C6C8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82597a58
	sub_82597A58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257c6d0
	if (cr0.eq) goto loc_8257C6D0;
loc_8257C6C8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
loc_8257C6D0:
	// stw r29,892(r27)
	PPC_STORE_U32(r27.u32 + 892, r29.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r31,432(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// beq 0x8257c744
	if (cr0.eq) goto loc_8257C744;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f31,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stw r20,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r20.u32);
	// mr r24,r11
	r24.u64 = r11.u64;
	// stw r20,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r20.u32);
	// stw r19,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r19.u32);
	// stw r20,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r20.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// stw r20,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r20.u32);
	// stw r27,40(r11)
	PPC_STORE_U32(r11.u32 + 40, r27.u32);
	// stw r29,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r29.u32);
	// stw r20,48(r11)
	PPC_STORE_U32(r11.u32 + 48, r20.u32);
	// stw r20,52(r11)
	PPC_STORE_U32(r11.u32 + 52, r20.u32);
	// stb r20,56(r11)
	PPC_STORE_U8(r11.u32 + 56, r20.u8);
	// stw r20,60(r11)
	PPC_STORE_U32(r11.u32 + 60, r20.u32);
	// stw r20,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r20.u32);
	// stw r20,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r20.u32);
	// stw r20,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r20.u32);
	// stw r20,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r20.u32);
	// b 0x8257c748
	goto loc_8257C748;
loc_8257C744:
	// mr r24,r20
	r24.u64 = r20.u64;
loc_8257C748:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8257b898
	sub_8257B898(ctx, base);
	// stb r3,56(r24)
	PPC_STORE_U8(r24.u32 + 56, ctx.r3.u8);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r31,432(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// beq 0x8257c788
	if (cr0.eq) goto loc_8257C788;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x8257c78c
	goto loc_8257C78C;
loc_8257C788:
	// mr r30,r20
	r30.u64 = r20.u64;
loc_8257C78C:
	// stw r30,52(r24)
	PPC_STORE_U32(r24.u32 + 52, r30.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r31,432(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// beq 0x8257c7c4
	if (cr0.eq) goto loc_8257C7C4;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x8257c7c8
	goto loc_8257C7C8;
loc_8257C7C4:
	// mr r30,r20
	r30.u64 = r20.u64;
loc_8257C7C8:
	// stw r30,48(r24)
	PPC_STORE_U32(r24.u32 + 48, r30.u32);
	// li r23,1
	r23.s64 = 1;
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x8257caec
	if (cr6.lt) goto loc_8257CAEC;
	// addi r21,r27,236
	r21.s64 = r27.s64 + 236;
	// mr r22,r21
	r22.u64 = r21.u64;
loc_8257C7E4:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257c808
	if (!cr6.eq) goto loc_8257C808;
	// li r7,905
	ctx.r7.s64 = 905;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257C808:
	// lwz r26,0(r22)
	r26.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8257c8ac
	if (!cr0.eq) goto loc_8257C8AC;
	// lwz r11,948(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 948);
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8257c8ac
	if (!cr6.eq) goto loc_8257C8AC;
	// lwz r11,892(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 892);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// blt cr6,0x8257c858
	if (cr6.lt) goto loc_8257C858;
	// li r7,914
	ctx.r7.s64 = 914;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257C858:
	// lwz r3,24(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// lwz r4,892(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 892);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x8257c87c
	if (!cr6.lt) goto loc_8257C87C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8257c880
	goto loc_8257C880;
loc_8257C87C:
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257C880:
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// beq cr6,0x8257c8bc
	if (cr6.eq) goto loc_8257C8BC;
	// li r7,916
	ctx.r7.s64 = 916;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x8257c8bc
	goto loc_8257C8BC;
loc_8257C8AC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8257a990
	sub_8257A990(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8257C8BC:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// bl 0x82597ad0
	sub_82597AD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257c974
	if (!cr0.eq) goto loc_8257C974;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r23,r3
	cr6.compare<int32_t>(r23.s32, ctx.r3.s32, xer);
	// bgt cr6,0x8257c974
	if (cr6.gt) goto loc_8257C974;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257c964
	if (cr0.eq) goto loc_8257C964;
	// lwz r30,236(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 236);
loc_8257C964:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825979f8
	sub_825979F8(ctx, base);
	// stb r3,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r3.u8);
	// b 0x8257c978
	goto loc_8257C978;
loc_8257C974:
	// stb r20,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r20.u8);
loc_8257C978:
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r3,52(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257cad8
	if (cr0.eq) goto loc_8257CAD8;
	// lwz r11,228(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257cad8
	if (cr0.eq) goto loc_8257CAD8;
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// bne cr6,0x8257cad8
	if (!cr6.eq) goto loc_8257CAD8;
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// bgt cr6,0x8257c9f0
	if (cr6.gt) goto loc_8257C9F0;
	// li r7,944
	ctx.r7.s64 = 944;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257C9F0:
	// lwz r31,0(r21)
	r31.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r11,892(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 892);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// blt cr6,0x8257ca18
	if (cr6.lt) goto loc_8257CA18;
	// li r7,947
	ctx.r7.s64 = 947;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257CA18:
	// lwz r3,24(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// lwz r4,892(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 892);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x8257ca3c
	if (!cr6.lt) goto loc_8257CA3C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8257ca40
	goto loc_8257CA40;
loc_8257CA3C:
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257CA40:
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x8257ca68
	if (cr6.eq) goto loc_8257CA68;
	// li r7,949
	ctx.r7.s64 = 949;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257CA68:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x82597ad0
	sub_82597AD0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_8257CAD8:
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// ble cr6,0x8257c7e4
	if (!cr6.gt) goto loc_8257C7E4;
loc_8257CAEC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257cb14
	if (cr0.eq) goto loc_8257CB14;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82582990
	sub_82582990(ctx, base);
loc_8257CB14:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x8257cbe4
	if (!cr6.eq) goto loc_8257CBE4;
	// addic. r28,r29,-1
	xer.ca = r29.u32 > 0;
	r28.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// blt 0x8257cca8
	if (cr0.lt) goto loc_8257CCA8;
	// rlwinm r26,r28,2,0,29
	r26.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_8257CB2C:
	// lwz r3,24(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x8257cb48
	if (!cr6.lt) goto loc_8257CB48;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// b 0x8257cb50
	goto loc_8257CB50;
loc_8257CB48:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257CB50:
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,40(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257cbd4
	if (!cr0.eq) goto loc_8257CBD4;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// li r11,1
	r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82597ad0
	sub_82597AD0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// stb r20,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r20.u8);
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r3,52(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_8257CBD4:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r26,r26,-4
	r26.s64 = r26.s64 + -4;
	// bge 0x8257cb2c
	if (!cr0.lt) goto loc_8257CB2C;
	// b 0x8257cca8
	goto loc_8257CCA8;
loc_8257CBE4:
	// ble cr6,0x8257cca8
	if (!cr6.gt) goto loc_8257CCA8;
	// lwz r3,24(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x8257cc10
	if (!cr6.lt) goto loc_8257CC10;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8257cc14
	goto loc_8257CC14;
loc_8257CC10:
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257CC14:
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,40(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257cca8
	if (!cr0.eq) goto loc_8257CCA8;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// li r11,1
	r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82597ad0
	sub_82597AD0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// stb r20,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r20.u8);
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r3,52(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_8257CCA8:
	// lwz r3,24(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r31,88(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_8257CCD0:
	// lwz r27,8(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257c59c
	if (!cr6.eq) goto loc_8257C59C;
loc_8257CCE0:
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x8257cd0c
	if (cr6.eq) goto loc_8257CD0C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1010
	ctx.r7.s64 = 1010;
	// addi r5,r11,-5060
	ctx.r5.s64 = r11.s64 + -5060;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257CD0C:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8257d328
	if (cr0.eq) goto loc_8257D328;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x8257cd64
	if (cr0.eq) goto loc_8257CD64;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r11,-32168
	r11.s64 = -2108162048;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,-24264
	ctx.r6.s64 = ctx.r10.s64 + -24264;
	// addi r5,r11,-24312
	ctx.r5.s64 = r11.s64 + -24312;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,432(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// bl 0x82573f20
	sub_82573F20(ctx, base);
	// mr r19,r31
	r19.u64 = r31.u64;
	// b 0x8257cd68
	goto loc_8257CD68;
loc_8257CD64:
	// mr r19,r20
	r19.u64 = r20.u64;
loc_8257CD68:
	// addic. r18,r29,-1
	xer.ca = r29.u32 > 0;
	r18.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r18.s32, 0, xer);
	// mr r21,r20
	r21.u64 = r20.u64;
	// mr r22,r20
	r22.u64 = r20.u64;
	// blt 0x8257d314
	if (cr0.lt) goto loc_8257D314;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// rlwinm r15,r18,2,0,29
	r15.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r17,r11,-5088
	r17.s64 = r11.s64 + -5088;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r23,3
	r23.s64 = 3;
	// addi r16,r11,-5124
	r16.s64 = r11.s64 + -5124;
	// b 0x8257cd98
	goto loc_8257CD98;
loc_8257CD94:
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8257CD98:
	// lwz r3,24(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(r18.u32, r11.u32, xer);
	// bge cr6,0x8257cdb4
	if (!cr6.lt) goto loc_8257CDB4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r15
	ctx.r3.u64 = r11.u64 + r15.u64;
	// b 0x8257cdbc
	goto loc_8257CDBC;
loc_8257CDB4:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257CDBC:
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,40(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825979c0
	sub_825979C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257ceec
	if (cr0.eq) goto loc_8257CEEC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82582e80
	sub_82582E80(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x8257cee0
	if (cr0.eq) goto loc_8257CEE0;
	// lwz r11,892(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 892);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// blt cr6,0x8257ce0c
	if (cr6.lt) goto loc_8257CE0C;
	// li r7,1060
	ctx.r7.s64 = 1060;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257CE0C:
	// lwz r3,24(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// lwz r4,892(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 892);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x8257ce30
	if (!cr6.lt) goto loc_8257CE30;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8257ce34
	goto loc_8257CE34;
loc_8257CE30:
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257CE34:
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// beq cr6,0x8257ce5c
	if (cr6.eq) goto loc_8257CE5C;
	// li r7,1062
	ctx.r7.s64 = 1062;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257CE5C:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r29,432(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// li r11,1
	r11.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r27.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x82597ad0
	sub_82597AD0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// stb r20,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r20.u8);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r3,52(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x82583000
	sub_82583000(ctx, base);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8257CEE0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82582f40
	sub_82582F40(ctx, base);
loc_8257CEEC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82597a58
	sub_82597A58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257cf78
	if (cr0.eq) goto loc_8257CF78;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8257cf74
	if (cr6.eq) goto loc_8257CF74;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r29,432(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r21,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r21.u32);
	// stw r23,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r23.u32);
	// lwz r4,40(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 40);
	// bl 0x82597ad0
	sub_82597AD0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// stb r20,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r20.u8);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r3,52(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_8257CF74:
	// mr r21,r31
	r21.u64 = r31.u64;
loc_8257CF78:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82597a90
	sub_82597A90(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257d004
	if (cr0.eq) goto loc_8257D004;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x8257d000
	if (cr6.eq) goto loc_8257D000;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r29,432(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r22,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r22.u32);
	// stw r23,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r23.u32);
	// lwz r4,40(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 40);
	// bl 0x82597ad0
	sub_82597AD0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// stb r20,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r20.u8);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r3,52(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_8257D000:
	// mr r22,r31
	r22.u64 = r31.u64;
loc_8257D004:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x8257d140
	if (cr6.lt) goto loc_8257D140;
	// addi r24,r28,236
	r24.s64 = r28.s64 + 236;
loc_8257D018:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x825979c0
	sub_825979C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257d12c
	if (cr0.eq) goto loc_8257D12C;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x82582e80
	sub_82582E80(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8257d12c
	if (cr0.eq) goto loc_8257D12C;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x8257d12c
	if (cr6.eq) goto loc_8257D12C;
	// lwz r11,892(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 892);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// blt cr6,0x8257d068
	if (cr6.lt) goto loc_8257D068;
	// li r7,1116
	ctx.r7.s64 = 1116;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257D068:
	// lwz r3,24(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// lwz r4,892(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 892);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x8257d08c
	if (!cr6.lt) goto loc_8257D08C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8257d090
	goto loc_8257D090;
loc_8257D08C:
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257D090:
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x8257d0b8
	if (cr6.eq) goto loc_8257D0B8;
	// li r7,1118
	ctx.r7.s64 = 1118;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257D0B8:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r29,432(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r27.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bl 0x82597ad0
	sub_82597AD0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// stb r20,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r20.u8);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r3,52(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_8257D12C:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// ble cr6,0x8257d018
	if (!cr6.gt) goto loc_8257D018;
loc_8257D140:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257d1d0
	if (cr0.eq) goto loc_8257D1D0;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x8257d1d0
	if (cr6.eq) goto loc_8257D1D0;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r29,432(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r22,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r22.u32);
	// stw r23,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r23.u32);
	// lwz r4,40(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 40);
	// bl 0x82597ad0
	sub_82597AD0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// stb r20,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r20.u8);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r3,52(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_8257D1D0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257d260
	if (cr0.eq) goto loc_8257D260;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8257d260
	if (cr6.eq) goto loc_8257D260;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r29,432(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r21,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r21.u32);
	// stw r23,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r23.u32);
	// lwz r4,40(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 40);
	// bl 0x82597ad0
	sub_82597AD0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// stb r20,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r20.u8);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r3,52(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_8257D260:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825979f8
	sub_825979F8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257d308
	if (cr0.eq) goto loc_8257D308;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82582880
	sub_82582880(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257d308
	if (!cr0.eq) goto loc_8257D308;
	// lwz r29,120(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x8257d2f8
	goto loc_8257D2F8;
loc_8257D288:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r26,432(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r23,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r23.u32);
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// bl 0x82597ad0
	sub_82597AD0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// stb r20,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r20.u8);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r29,0(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_8257D2F8:
	// addi r27,r29,8
	r27.s64 = r29.s64 + 8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257d288
	if (!cr6.eq) goto loc_8257D288;
loc_8257D308:
	// addic. r18,r18,-1
	xer.ca = r18.u32 > 0;
	r18.s64 = r18.s64 + -1;
	cr0.compare<int32_t>(r18.s32, 0, xer);
	// addi r15,r15,-4
	r15.s64 = r15.s64 + -4;
	// bge 0x8257cd94
	if (!cr0.lt) goto loc_8257CD94;
loc_8257D314:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x8257d328
	if (cr6.eq) goto loc_8257D328;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8257ab58
	sub_8257AB58(ctx, base);
loc_8257D328:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8257D334"))) PPC_WEAK_FUNC(sub_8257D334);
PPC_FUNC_IMPL(__imp__sub_8257D334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D338"))) PPC_WEAK_FUNC(sub_8257D338);
PPC_FUNC_IMPL(__imp__sub_8257D338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd4
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// addi r3,r19,36
	ctx.r3.s64 = r19.s64 + 36;
	// bl 0x82582880
	sub_82582880(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,8972
	r25.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r24,r11,-6112
	r24.s64 = r11.s64 + -6112;
	// bne 0x8257d384
	if (!cr0.eq) goto loc_8257D384;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1333
	ctx.r7.s64 = 1333;
	// addi r5,r11,-4800
	ctx.r5.s64 = r11.s64 + -4800;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257D384:
	// addi r3,r19,60
	ctx.r3.s64 = r19.s64 + 60;
	// bl 0x82582880
	sub_82582880(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257d3b0
	if (!cr0.eq) goto loc_8257D3B0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1334
	ctx.r7.s64 = 1334;
	// addi r5,r11,-4820
	ctx.r5.s64 = r11.s64 + -4820;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257D3B0:
	// addi r3,r19,84
	ctx.r3.s64 = r19.s64 + 84;
	// bl 0x82582880
	sub_82582880(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257d3dc
	if (!cr0.eq) goto loc_8257D3DC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1335
	ctx.r7.s64 = 1335;
	// addi r5,r11,-4844
	ctx.r5.s64 = r11.s64 + -4844;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257D3DC:
	// lwz r11,24(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 24);
	// li r20,0
	r20.s64 = 0;
	// mr r27,r20
	r27.u64 = r20.u64;
	// lwz r21,4(r11)
	r21.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r21,0
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// ble 0x8257d534
	if (!cr0.gt) goto loc_8257D534;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r26,r20
	r26.u64 = r20.u64;
	// addi r23,r11,-5508
	r23.s64 = r11.s64 + -5508;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r22,r11,-5556
	r22.s64 = r11.s64 + -5556;
loc_8257D408:
	// lwz r3,24(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 24);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x8257d424
	if (!cr6.lt) goto loc_8257D424;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// b 0x8257d42c
	goto loc_8257D42C;
loc_8257D424:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257D42C:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r20,892(r11)
	PPC_STORE_U32(r11.u32 + 892, r20.u32);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8257d45c
	if (cr6.eq) goto loc_8257D45C;
	// li r7,1342
	ctx.r7.s64 = 1342;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257D45C:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x8257d480
	if (!cr6.lt) goto loc_8257D480;
	// li r7,1343
	ctx.r7.s64 = 1343;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257D480:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r31,r20
	r31.u64 = r20.u64;
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r28,0
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// ble 0x8257d4e4
	if (!cr0.gt) goto loc_8257D4E4;
	// mr r29,r20
	r29.u64 = r20.u64;
loc_8257D498:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8257d4b4
	if (!cr6.lt) goto loc_8257D4B4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x8257d4bc
	goto loc_8257D4BC;
loc_8257D4B4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257D4BC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8257d4d4
	if (cr0.eq) goto loc_8257D4D4;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8257D4D4:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x8257d498
	if (cr6.lt) goto loc_8257D498;
loc_8257D4E4:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8257d4f8
	if (cr0.eq) goto loc_8257D4F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8257aec0
	sub_8257AEC0(ctx, base);
loc_8257D4F8:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8257d50c
	if (cr0.eq) goto loc_8257D50C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8257aec0
	sub_8257AEC0(ctx, base);
loc_8257D50C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r27,r21
	cr6.compare<int32_t>(r27.s32, r21.s32, xer);
	// blt cr6,0x8257d408
	if (cr6.lt) goto loc_8257D408;
loc_8257D534:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// mr r27,r20
	r27.u64 = r20.u64;
	// lwz r25,4(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r25,0
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// ble 0x8257d628
	if (!cr0.gt) goto loc_8257D628;
	// mr r26,r20
	r26.u64 = r20.u64;
loc_8257D54C:
	// lwz r3,20(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x8257d568
	if (!cr6.lt) goto loc_8257D568;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// b 0x8257d570
	goto loc_8257D570;
loc_8257D568:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257D570:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r20
	r31.u64 = r20.u64;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r28,0
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// ble 0x8257d5d8
	if (!cr0.gt) goto loc_8257D5D8;
	// mr r29,r20
	r29.u64 = r20.u64;
loc_8257D58C:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8257d5a8
	if (!cr6.lt) goto loc_8257D5A8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x8257d5b0
	goto loc_8257D5B0;
loc_8257D5A8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257D5B0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8257d5c8
	if (cr0.eq) goto loc_8257D5C8;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8257D5C8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x8257d58c
	if (cr6.lt) goto loc_8257D58C;
loc_8257D5D8:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8257d5ec
	if (cr0.eq) goto loc_8257D5EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8257aec0
	sub_8257AEC0(ctx, base);
loc_8257D5EC:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8257d600
	if (cr0.eq) goto loc_8257D600;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8257aec0
	sub_8257AEC0(ctx, base);
loc_8257D600:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r27,r25
	cr6.compare<int32_t>(r27.s32, r25.s32, xer);
	// blt cr6,0x8257d54c
	if (cr6.lt) goto loc_8257D54C;
loc_8257D628:
	// lwz r11,24(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 24);
	// stw r20,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r20.u32);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// stw r20,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r20.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_8257D640"))) PPC_WEAK_FUNC(sub_8257D640);
PPC_FUNC_IMPL(__imp__sub_8257D640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r29,r11,-6112
	r29.s64 = r11.s64 + -6112;
	// beq cr6,0x8257d68c
	if (cr6.eq) goto loc_8257D68C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1780
	ctx.r7.s64 = 1780;
	// addi r5,r11,-5532
	ctx.r5.s64 = r11.s64 + -5532;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257D68C:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8257d6b4
	if (cr6.eq) goto loc_8257D6B4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1781
	ctx.r7.s64 = 1781;
	// addi r5,r11,-5556
	ctx.r5.s64 = r11.s64 + -5556;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257D6B4:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8257d6e0
	if (!cr6.gt) goto loc_8257D6E0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1782
	ctx.r7.s64 = 1782;
	// addi r5,r11,-4776
	ctx.r5.s64 = r11.s64 + -4776;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257D6E0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// bl 0x8257a1c0
	sub_8257A1C0(ctx, base);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lwz r11,112(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 112);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x8257d70c
	if (!cr6.lt) goto loc_8257D70C;
	// stw r10,112(r28)
	PPC_STORE_U32(r28.u32 + 112, ctx.r10.u32);
loc_8257D70C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8257b178
	sub_8257B178(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8257b590
	sub_8257B590(ctx, base);
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8257d7e8
	if (cr0.eq) goto loc_8257D7E8;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r30,172(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257d784
	if (cr0.eq) goto loc_8257D784;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,236(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x8257d7e8
	if (!cr6.eq) goto loc_8257D7E8;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x8257d7e8
	if (cr6.eq) goto loc_8257D7E8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// b 0x8257d7e8
	goto loc_8257D7E8;
loc_8257D784:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x8257d7e8
	if (!cr6.eq) goto loc_8257D7E8;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// rlwinm. r10,r10,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8257d7e8
	if (cr0.eq) goto loc_8257D7E8;
	// lwz r10,120(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r9,236(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// rlwinm. r10,r10,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// beq 0x8257d7c8
	if (cr0.eq) goto loc_8257D7C8;
	// addi r10,r10,58
	ctx.r10.s64 = ctx.r10.s64 + 58;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// b 0x8257d7e8
	goto loc_8257D7E8;
loc_8257D7C8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r10,58
	ctx.r8.s64 = ctx.r10.s64 + 58;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r9.u32);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// stw r10,228(r11)
	PPC_STORE_U32(r11.u32 + 228, ctx.r10.u32);
loc_8257D7E8:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257d808
	if (cr0.eq) goto loc_8257D808;
	// stw r31,120(r28)
	PPC_STORE_U32(r28.u32 + 120, r31.u32);
loc_8257D808:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// bl 0x82597940
	sub_82597940(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x8257a2c8
	sub_8257A2C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8257D840"))) PPC_WEAK_FUNC(sub_8257D840);
PPC_FUNC_IMPL(__imp__sub_8257D840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcdc
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r21,1
	r21.s64 = 1;
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// lwz r26,4(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r23,r11,8972
	r23.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// cmpwi r26,0
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r22,r11,-6112
	r22.s64 = r11.s64 + -6112;
	// ble 0x8257d96c
	if (!cr0.gt) goto loc_8257D96C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r27,0
	r27.s64 = 0;
	// addi r25,r11,-5348
	r25.s64 = r11.s64 + -5348;
loc_8257D888:
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8257d8a4
	if (!cr6.lt) goto loc_8257D8A4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// b 0x8257d8ac
	goto loc_8257D8AC;
loc_8257D8A4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257D8AC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257d95c
	if (!cr6.eq) goto loc_8257D95C;
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8257d8d8
	if (!cr6.lt) goto loc_8257D8D8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// b 0x8257d8e0
	goto loc_8257D8E0;
loc_8257D8D8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257D8E0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
	// bne 0x8257d95c
	if (!cr0.eq) goto loc_8257D95C;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8257d95c
	if (cr0.eq) goto loc_8257D95C;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r30,r11,27
	r30.u64 = r11.u32 & 0x1F;
	// lwz r11,116(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r31,r10,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// srw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 >> (r30.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257d948
	if (!cr0.eq) goto loc_8257D948;
	// li r7,1837
	ctx.r7.s64 = 1837;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257D948:
	// lwz r11,116(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// slw r10,r21,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r21.u32 << (r30.u8 & 0x3F));
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stwx r10,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r10.u32);
loc_8257D95C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// blt cr6,0x8257d888
	if (cr6.lt) goto loc_8257D888;
loc_8257D96C:
	// lwz r11,120(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 120);
	// b 0x8257d978
	goto loc_8257D978;
loc_8257D974:
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
loc_8257D978:
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8257d974
	if (!cr6.eq) goto loc_8257D974;
	// stw r28,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r28.u32);
	// lwz r4,40(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82597940
	sub_82597940(ctx, base);
	// lwz r11,120(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 120);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,32(r28)
	PPC_STORE_U32(r28.u32 + 32, r11.u32);
	// stw r11,28(r28)
	PPC_STORE_U32(r28.u32 + 28, r11.u32);
	// lwz r27,172(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// bne 0x8257d9d0
	if (!cr0.eq) goto loc_8257D9D0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1854
	ctx.r7.s64 = 1854;
	// addi r5,r11,-4744
	ctx.r5.s64 = r11.s64 + -4744;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257D9D0:
	// lwz r11,120(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 120);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// lwz r11,56(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stw r11,56(r27)
	PPC_STORE_U32(r27.u32 + 56, r11.u32);
	// stw r9,80(r27)
	PPC_STORE_U32(r27.u32 + 80, ctx.r9.u32);
	// lwz r10,228(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8257da28
	if (cr0.eq) goto loc_8257DA28;
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,116(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r21,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,228(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 228);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,228(r27)
	PPC_STORE_U32(r27.u32 + 228, r11.u32);
loc_8257DA28:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// li r30,0
	r30.s64 = 0;
	// lwz r26,4(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r26,0
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// ble 0x8257db60
	if (!cr0.gt) goto loc_8257DB60;
	// li r29,0
	r29.s64 = 0;
loc_8257DA40:
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8257da5c
	if (!cr6.lt) goto loc_8257DA5C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x8257da64
	goto loc_8257DA64;
loc_8257DA5C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257DA64:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8257da94
	if (!cr6.lt) goto loc_8257DA94;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x8257da9c
	goto loc_8257DA9C;
loc_8257DA94:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257DA9C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8257daec
	if (!cr6.lt) goto loc_8257DAEC;
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8257dad4
	if (!cr6.lt) goto loc_8257DAD4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x8257dadc
	goto loc_8257DADC;
loc_8257DAD4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257DADC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_8257DAEC:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8257db50
	if (!cr6.eq) goto loc_8257DB50;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// beq cr6,0x8257db18
	if (cr6.eq) goto loc_8257DB18;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8257b0d0
	sub_8257B0D0(ctx, base);
	// b 0x8257db50
	goto loc_8257DB50;
loc_8257DB18:
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,60(r28)
	PPC_STORE_U32(r28.u32 + 60, r11.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82597940
	sub_82597940(ctx, base);
	// lwz r11,120(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 120);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// bl 0x8257b178
	sub_8257B178(ctx, base);
loc_8257DB50:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// blt cr6,0x8257da40
	if (cr6.lt) goto loc_8257DA40;
loc_8257DB60:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_8257DB68"))) PPC_WEAK_FUNC(sub_8257DB68);
PPC_FUNC_IMPL(__imp__sub_8257DB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bccc
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r21,0
	r21.s64 = 0;
	// lwz r27,44(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r18,r11,8972
	r18.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r17,r11,-6112
	r17.s64 = r11.s64 + -6112;
	// beq cr6,0x8257dec0
	if (cr6.eq) goto loc_8257DEC0;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// addi r20,r11,-3664
	r20.s64 = r11.s64 + -3664;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r19,r11,-4604
	r19.s64 = r11.s64 + -4604;
loc_8257DBAC:
	// lwz r31,40(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257dc28
	if (cr0.eq) goto loc_8257DC28;
	// lwz r11,120(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8257dc28
	if (cr0.eq) goto loc_8257DC28;
	// lwz r9,12(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8257dc28
	if (cr6.lt) goto loc_8257DC28;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// bl 0x8257bcf0
	sub_8257BCF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257dc28
	if (cr0.eq) goto loc_8257DC28;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82582910
	sub_82582910(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8257d840
	sub_8257D840(ctx, base);
	// lwz r4,120(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 120);
	// lwz r3,12(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// bl 0x82579f98
	sub_82579F98(ctx, base);
	// lwz r27,44(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// b 0x8257deb4
	goto loc_8257DEB4;
loc_8257DC28:
	// lwz r11,60(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8257dd54
	if (!cr6.gt) goto loc_8257DD54;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257dd54
	if (cr0.eq) goto loc_8257DD54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// lwz r11,52(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r25,r21
	r25.u64 = r21.u64;
	// mr r22,r21
	r22.u64 = r21.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
	// lwz r26,4(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r26,0
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// ble 0x8257dcf8
	if (!cr0.gt) goto loc_8257DCF8;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_8257DC6C:
	// lwz r3,52(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8257dc88
	if (!cr6.lt) goto loc_8257DC88;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// b 0x8257dc90
	goto loc_8257DC90;
loc_8257DC88:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257DC90:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bne cr6,0x8257dce0
	if (!cr6.eq) goto loc_8257DCE0;
	// lwz r3,52(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8257dcc0
	if (!cr6.lt) goto loc_8257DCC0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// b 0x8257dcc8
	goto loc_8257DCC8;
loc_8257DCC0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257DCC8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257dce0
	if (!cr6.eq) goto loc_8257DCE0;
	// mr r25,r29
	r25.u64 = r29.u64;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
loc_8257DCE0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// blt cr6,0x8257dc6c
	if (cr6.lt) goto loc_8257DC6C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x8257dd10
	if (!cr6.eq) goto loc_8257DD10;
loc_8257DCF8:
	// li r7,1496
	ctx.r7.s64 = 1496;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257DD10:
	// lwz r11,228(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 228);
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8257dd30
	if (cr0.eq) goto loc_8257DD30;
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257dd30
	if (cr0.eq) goto loc_8257DD30;
	// lbz r11,56(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8257dd3c
	if (!cr0.eq) goto loc_8257DD3C;
loc_8257DD30:
	// lwz r11,60(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 60);
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(r11.s32, r22.s32, xer);
	// ble cr6,0x8257dd54
	if (!cr6.gt) goto loc_8257DD54;
loc_8257DD3C:
	// lwz r11,28(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 28);
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8257de98
	if (!cr6.lt) goto loc_8257DE98;
	// lwz r27,8(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// b 0x8257deb4
	goto loc_8257DEB4;
loc_8257DD54:
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257dd98
	if (cr0.eq) goto loc_8257DD98;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,12(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// bl 0x82579ba8
	sub_82579BA8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257de98
	if (cr0.eq) goto loc_8257DE98;
loc_8257DD88:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82582910
	sub_82582910(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x8257e404
	goto loc_8257E404;
loc_8257DD98:
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257de98
	if (cr0.eq) goto loc_8257DE98;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r10,r11,r20
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8257dddc
	if (cr0.eq) goto loc_8257DDDC;
	// addi r10,r20,4
	ctx.r10.s64 = r20.s64 + 4;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8257dde0
	if (!cr6.eq) goto loc_8257DDE0;
loc_8257DDDC:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8257DDE0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257de98
	if (cr0.eq) goto loc_8257DE98;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82597940
	sub_82597940(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825864d8
	sub_825864D8(ctx, base);
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257de78
	if (cr0.eq) goto loc_8257DE78;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,12(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// bl 0x82579ba8
	sub_82579BA8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257df9c
	if (!cr0.eq) goto loc_8257DF9C;
loc_8257DE78:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825863a8
	sub_825863A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x825978c0
	sub_825978C0(ctx, base);
loc_8257DE98:
	// mr r31,r27
	r31.u64 = r27.u64;
	// lwz r27,8(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82582910
	sub_82582910(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r24,84
	ctx.r3.s64 = r24.s64 + 84;
	// bl 0x82582990
	sub_82582990(ctx, base);
loc_8257DEB4:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257dbac
	if (!cr6.eq) goto loc_8257DBAC;
loc_8257DEC0:
	// addi r3,r24,36
	ctx.r3.s64 = r24.s64 + 36;
	// bl 0x82582880
	sub_82582880(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257e400
	if (!cr0.eq) goto loc_8257E400;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8257b2e8
	sub_8257B2E8(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// beq 0x8257e400
	if (cr0.eq) goto loc_8257E400;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82582910
	sub_82582910(ctx, base);
	// lwz r11,60(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 60);
	// lwz r22,40(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8257df08
	if (!cr6.gt) goto loc_8257DF08;
	// lwz r11,228(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257df24
	if (!cr0.eq) goto loc_8257DF24;
loc_8257DF08:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1566
	ctx.r7.s64 = 1566;
	// addi r5,r11,-4664
	ctx.r5.s64 = r11.s64 + -4664;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257DF24:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// lbz r31,80(r1)
	r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// li r3,102
	ctx.r3.s64 = 102;
	// bne 0x8257df48
	if (!cr0.eq) goto loc_8257DF48;
	// li r3,49
	ctx.r3.s64 = 49;
loc_8257DF48:
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r11,224(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 224);
	// stw r21,80(r28)
	PPC_STORE_U32(r28.u32 + 80, r21.u32);
	// stw r11,56(r28)
	PPC_STORE_U32(r28.u32 + 56, r11.u32);
	// bl 0x82585550
	sub_82585550(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8257e04c
	if (cr6.eq) goto loc_8257E04C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8257dfac
	if (!cr0.eq) goto loc_8257DFAC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r11,-6404(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -6404);
	// b 0x8257e044
	goto loc_8257E044;
loc_8257DF9C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x825978c0
	sub_825978C0(ctx, base);
	// b 0x8257dd88
	goto loc_8257DD88;
loc_8257DFAC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8257dfe0
	if (!cr0.eq) goto loc_8257DFE0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,-6404
	r11.s64 = r11.s64 + -6404;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8257e044
	goto loc_8257E044;
loc_8257DFE0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8257e014
	if (!cr0.eq) goto loc_8257E014;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,-6404
	r11.s64 = r11.s64 + -6404;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8257e044
	goto loc_8257E044;
loc_8257E014:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8257e0b0
	if (!cr0.eq) goto loc_8257E0B0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,-6404
	r11.s64 = r11.s64 + -6404;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
loc_8257E044:
	// stw r11,132(r28)
	PPC_STORE_U32(r28.u32 + 132, r11.u32);
	// b 0x8257e0b0
	goto loc_8257E0B0;
loc_8257E04C:
	// mr r31,r21
	r31.u64 = r21.u64;
loc_8257E050:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8257e0a4
	if (!cr6.eq) goto loc_8257E0A4;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// srawi r9,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r9.s64 = r11.s32 >> 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// lwz r10,88(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r9,r11
	ctx.r6.s64 = r11.s64 - ctx.r9.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8257E0A4:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x8257e050
	if (cr6.lt) goto loc_8257E050;
loc_8257E0B0:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,228(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,20(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 20);
	// beq 0x8257e0e0
	if (cr0.eq) goto loc_8257E0E0;
	// addi r11,r11,58
	r11.s64 = r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r22
	PPC_STORE_U32(r11.u32 + r22.u32, r28.u32);
	// b 0x8257e100
	goto loc_8257E100;
loc_8257E0E0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r11,58
	ctx.r10.s64 = r11.s64 + 58;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,20(r22)
	PPC_STORE_U32(r22.u32 + 20, r11.u32);
	// stwx r28,r10,r22
	PPC_STORE_U32(ctx.r10.u32 + r22.u32, r28.u32);
	// lwz r11,228(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 228);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,228(r22)
	PPC_STORE_U32(r22.u32 + 228, r11.u32);
loc_8257E100:
	// lwz r11,24(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r31,892(r28)
	PPC_STORE_U32(r28.u32 + 892, r31.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r27,-1
	r27.s64 = -1;
	// beq 0x8257e18c
	if (cr0.eq) goto loc_8257E18C;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r31,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r31.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r21,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r21.u32);
	// addi r10,r10,-5952
	ctx.r10.s64 = ctx.r10.s64 + -5952;
	// stw r21,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r21.u32);
	// stw r27,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r27.u32);
	// mr r31,r11
	r31.u64 = r11.u64;
	// stw r21,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r21.u32);
	// stw r21,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r21.u32);
	// lfs f0,2480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stw r28,40(r11)
	PPC_STORE_U32(r11.u32 + 40, r28.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r21,48(r11)
	PPC_STORE_U32(r11.u32 + 48, r21.u32);
	// stw r21,52(r11)
	PPC_STORE_U32(r11.u32 + 52, r21.u32);
	// stb r21,56(r11)
	PPC_STORE_U8(r11.u32 + 56, r21.u8);
	// stw r21,60(r11)
	PPC_STORE_U32(r11.u32 + 60, r21.u32);
	// stw r21,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r21.u32);
	// stw r21,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r21.u32);
	// stw r21,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r21.u32);
	// stw r21,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r21.u32);
	// b 0x8257e190
	goto loc_8257E190;
loc_8257E18C:
	// mr r31,r21
	r31.u64 = r21.u64;
loc_8257E190:
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// li r4,20
	ctx.r4.s64 = 20;
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,228(r28)
	PPC_STORE_U32(r28.u32 + 228, r11.u32);
	// lbz r11,56(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 56);
	// stb r11,56(r31)
	PPC_STORE_U8(r31.u32 + 56, r11.u8);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x8257e1d8
	if (cr0.eq) goto loc_8257E1D8;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x8257e1dc
	goto loc_8257E1DC;
loc_8257E1D8:
	// mr r29,r21
	r29.u64 = r21.u64;
loc_8257E1DC:
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x8257e214
	if (cr0.eq) goto loc_8257E214;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x8257e218
	goto loc_8257E218;
loc_8257E214:
	// mr r29,r21
	r29.u64 = r21.u64;
loc_8257E218:
	// stw r27,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r27.u32);
	// stw r21,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r21.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
	// lwz r11,28(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 28);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// lwz r3,24(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r26,r21
	r26.u64 = r21.u64;
	// lwz r11,52(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 52);
	// lwz r27,4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r27,0
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// ble 0x8257e3e0
	if (!cr0.gt) goto loc_8257E3E0;
	// mr r25,r21
	r25.u64 = r21.u64;
loc_8257E254:
	// lwz r3,52(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 52);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bge cr6,0x8257e270
	if (!cr6.lt) goto loc_8257E270;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x8257e278
	goto loc_8257E278;
loc_8257E270:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257E278:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(r11.u32, r20.u32, xer);
	// bne cr6,0x8257e298
	if (!cr6.eq) goto loc_8257E298;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8257e2ac
	if (cr6.eq) goto loc_8257E2AC;
loc_8257E298:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(r26.s32, r27.s32, xer);
	// blt cr6,0x8257e254
	if (cr6.lt) goto loc_8257E254;
	// b 0x8257e3e0
	goto loc_8257E3E0;
loc_8257E2AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82597ad0
	sub_82597AD0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,28(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 28);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x8257e310
	if (!cr6.gt) goto loc_8257E310;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1639
	ctx.r7.s64 = 1639;
	// addi r5,r11,-4712
	ctx.r5.s64 = r11.s64 + -4712;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257E310:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r29,432(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r23,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r23.u32);
	// stw r21,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r21.u32);
	// lwz r6,20(r22)
	ctx.r6.u64 = PPC_LOAD_U32(r22.u32 + 20);
	// bl 0x82597ad0
	sub_82597AD0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// beq 0x8257e37c
	if (cr0.eq) goto loc_8257E37C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1647
	ctx.r7.s64 = 1647;
	// addi r5,r11,-4732
	ctx.r5.s64 = r11.s64 + -4732;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257E37C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r3,52(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 52);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bge cr6,0x8257e3ac
	if (!cr6.lt) goto loc_8257E3AC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8257e3b4
	goto loc_8257E3B4;
loc_8257E3AC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257E3B4:
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,28(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 28);
	// lwz r11,36(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 36);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,32(r23)
	PPC_STORE_U32(r23.u32 + 32, ctx.r10.u32);
	// stw r11,36(r23)
	PPC_STORE_U32(r23.u32 + 36, r11.u32);
loc_8257E3E0:
	// lwz r11,136(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 136);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,136(r24)
	PPC_STORE_U32(r24.u32 + 136, r11.u32);
	// bl 0x825978c0
	sub_825978C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8257e404
	goto loc_8257E404;
loc_8257E400:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257E404:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd1c
	return;
}

__attribute__((alias("__imp__sub_8257E40C"))) PPC_WEAK_FUNC(sub_8257E40C);
PPC_FUNC_IMPL(__imp__sub_8257E40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E410"))) PPC_WEAK_FUNC(sub_8257E410);
PPC_FUNC_IMPL(__imp__sub_8257E410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8257e430
	goto loc_8257E430;
loc_8257E424:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257d640
	sub_8257D640(ctx, base);
loc_8257E430:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257db68
	sub_8257DB68(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8257e424
	if (!cr0.eq) goto loc_8257E424;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82579c40
	sub_82579C40(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_8257E454:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257e494
	if (cr6.eq) goto loc_8257E494;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r30,40(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// mr r11,r30
	r11.u64 = r30.u64;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r10,228(r30)
	PPC_STORE_U32(r30.u32 + 228, ctx.r10.u32);
loc_8257E494:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// blt cr6,0x8257e454
	if (cr6.lt) goto loc_8257E454;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8257e4dc
	goto loc_8257E4DC;
loc_8257E4B0:
	// lwz r29,40(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x82582910
	sub_82582910(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// lwz r10,228(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 228);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r10,228(r29)
	PPC_STORE_U32(r29.u32 + 228, ctx.r10.u32);
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
loc_8257E4DC:
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x8257e4b0
	if (!cr0.eq) goto loc_8257E4B0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257e4f8
	if (cr6.eq) goto loc_8257E4F8;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,228(r11)
	PPC_STORE_U32(r11.u32 + 228, ctx.r10.u32);
loc_8257E4F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257b438
	sub_8257B438(ctx, base);
	// addi r30,r31,36
	r30.s64 = r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82582880
	sub_82582880(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257e540
	if (cr0.eq) goto loc_8257E540;
	// addi r29,r31,60
	r29.s64 = r31.s64 + 60;
loc_8257E518:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82582880
	sub_82582880(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257e540
	if (!cr0.eq) goto loc_8257E540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257b438
	sub_8257B438(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82582880
	sub_82582880(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257e518
	if (!cr0.eq) goto loc_8257E518;
loc_8257E540:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8257E548"))) PPC_WEAK_FUNC(sub_8257E548);
PPC_FUNC_IMPL(__imp__sub_8257E548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// bl 0x8257c4c0
	sub_8257C4C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8257abb8
	sub_8257ABB8(ctx, base);
	// lwz r11,116(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 116);
	// li r24,0
	r24.s64 = 0;
	// lwz r8,100(r23)
	ctx.r8.u64 = PPC_LOAD_U32(r23.u32 + 100);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8257e5a8
	if (!cr6.gt) goto loc_8257E5A8;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
loc_8257E58C:
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x8257e58c
	if (cr6.lt) goto loc_8257E58C;
loc_8257E5A8:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8257e6c4
	if (!cr6.gt) goto loc_8257E6C4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r24
	r29.u64 = r24.u64;
	// addi r27,r11,8972
	r27.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r26,r11,-4588
	r26.s64 = r11.s64 + -4588;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r25,r11,-6112
	r25.s64 = r11.s64 + -6112;
loc_8257E5D8:
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8257e5f4
	if (!cr6.lt) goto loc_8257E5F4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x8257e5fc
	goto loc_8257E5FC;
loc_8257E5F4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257E5FC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,40(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257e6ac
	if (cr0.eq) goto loc_8257E6AC;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r9,100(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 100);
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// srw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257e650
	if (!cr0.eq) goto loc_8257E650;
	// li r7,1271
	ctx.r7.s64 = 1271;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257E650:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r9,104(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 104);
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// srw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257e6ac
	if (cr0.eq) goto loc_8257E6AC;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8257e694
	if (!cr6.lt) goto loc_8257E694;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x8257e69c
	goto loc_8257E69C;
loc_8257E694:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257E69C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
loc_8257E6AC:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8257e5d8
	if (cr6.lt) goto loc_8257E5D8;
loc_8257E6C4:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r31,r24
	r31.u64 = r24.u64;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r24.u32);
	// stw r24,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r24.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// stw r24,28(r28)
	PPC_STORE_U32(r28.u32 + 28, r24.u32);
	// stw r24,120(r28)
	PPC_STORE_U32(r28.u32 + 120, r24.u32);
	// stw r24,112(r28)
	PPC_STORE_U32(r28.u32 + 112, r24.u32);
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r29,0
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x8257e760
	if (!cr0.gt) goto loc_8257E760;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8257E714:
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8257e730
	if (!cr6.lt) goto loc_8257E730;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x8257e738
	goto loc_8257E738;
loc_8257E730:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8257E738:
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257e750
	if (!cr6.eq) goto loc_8257E750;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8257b0d0
	sub_8257B0D0(ctx, base);
loc_8257E750:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x8257e714
	if (cr6.lt) goto loc_8257E714;
loc_8257E760:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r31,28(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8257e83c
	if (cr6.eq) goto loc_8257E83C;
loc_8257E778:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257e818
	if (cr0.eq) goto loc_8257E818;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257e7e4
	if (!cr0.eq) goto loc_8257E7E4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257e7e4
	if (!cr0.eq) goto loc_8257E7E4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8257e7e4
	if (!cr0.eq) goto loc_8257E7E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82582910
	sub_82582910(ctx, base);
	// b 0x8257e818
	goto loc_8257E818;
loc_8257E7E4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8257e810
	if (cr0.eq) goto loc_8257E810;
	// mr r30,r31
	r30.u64 = r31.u64;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// b 0x8257e814
	goto loc_8257E814;
loc_8257E810:
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_8257E814:
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
loc_8257E818:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257e778
	if (!cr6.eq) goto loc_8257E778;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8257e83c
	if (cr6.eq) goto loc_8257E83C;
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,228(r30)
	PPC_STORE_U32(r30.u32 + 228, r11.u32);
loc_8257E83C:
	// addi r31,r28,36
	r31.s64 = r28.s64 + 36;
	// b 0x8257e84c
	goto loc_8257E84C;
loc_8257E844:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8257e410
	sub_8257E410(ctx, base);
loc_8257E84C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82582880
	sub_82582880(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257e844
	if (cr0.eq) goto loc_8257E844;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// bge cr6,0x8257e878
	if (!cr6.lt) goto loc_8257E878;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8257E878:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257e8cc
	if (cr0.eq) goto loc_8257E8CC;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r11,r24
	r11.u64 = r24.u64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8257E88C:
	// lwz r10,56(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 56);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// ble cr6,0x8257e8a4
	if (!cr6.gt) goto loc_8257E8A4;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// b 0x8257e8b0
	goto loc_8257E8B0;
loc_8257E8A4:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
loc_8257E8B0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8257e8cc
	if (cr0.eq) goto loc_8257E8CC;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stb r10,124(r8)
	PPC_STORE_U8(ctx.r8.u32 + 124, ctx.r10.u8);
	// b 0x8257e88c
	goto loc_8257E88C;
loc_8257E8CC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8257d338
	sub_8257D338(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8257E8DC"))) PPC_WEAK_FUNC(sub_8257E8DC);
PPC_FUNC_IMPL(__imp__sub_8257E8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E8E0"))) PPC_WEAK_FUNC(sub_8257E8E0);
PPC_FUNC_IMPL(__imp__sub_8257E8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x8257e934
	if (cr0.eq) goto loc_8257E934;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8257b988
	sub_8257B988(ctx, base);
	// b 0x8257e938
	goto loc_8257E938;
loc_8257E934:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8257E938:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r27,-1
	r27.s64 = -1;
	// beq 0x8257e974
	if (cr0.eq) goto loc_8257E974;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// b 0x8257e978
	goto loc_8257E978;
loc_8257E974:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8257E978:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r28,432(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x8257e9b0
	if (cr0.eq) goto loc_8257E9B0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x8257e9b4
	goto loc_8257E9B4;
loc_8257E9B0:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8257E9B4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// lwz r28,432(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x8257e9ec
	if (cr0.eq) goto loc_8257E9EC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x8257e9f0
	goto loc_8257E9F0;
loc_8257E9EC:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8257E9F0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,36
	ctx.r4.s64 = 36;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// lwz r28,432(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x8257ea2c
	if (cr0.eq) goto loc_8257EA2C;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82582930
	sub_82582930(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// b 0x8257ea30
	goto loc_8257EA30;
loc_8257EA2C:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8257EA30:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82565568
	sub_82565568(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r29.u32);
	// stw r29,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r29.u32);
	// stw r29,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r29.u32);
	// stw r27,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r27.u32);
	// stw r29,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r29.u32);
	// stw r29,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r29.u32);
	// bl 0x8257a568
	sub_8257A568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257be28
	sub_8257BE28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257c168
	sub_8257C168(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r30,136(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// b 0x8257eac8
	goto loc_8257EAC8;
loc_8257EA88:
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x82582968
	sub_82582968(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8257eaa0
	if (cr6.gt) goto loc_8257EAA0;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8257EAA0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257eac4
	if (cr0.eq) goto loc_8257EAC4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257e548
	sub_8257E548(ctx, base);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
loc_8257EAC4:
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
loc_8257EAC8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257ea88
	if (!cr6.eq) goto loc_8257EA88;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8257eafc
	if (cr6.lt) goto loc_8257EAFC;
loc_8257EAE0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x825767a0
	sub_825767A0(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// ble cr6,0x8257eae0
	if (!cr6.gt) goto loc_8257EAE0;
loc_8257EAFC:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-4468
	ctx.r4.s64 = r11.s64 + -4468;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi r5,0
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt 0x8257eb2c
	if (cr0.lt) goto loc_8257EB2C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-4504
	ctx.r4.s64 = r11.s64 + -4504;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_8257EB2C:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r6,136(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lwz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,-4548
	ctx.r4.s64 = r11.s64 + -4548;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82594198
	sub_82594198(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8257eb64
	if (cr0.eq) goto loc_8257EB64;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8257EB64:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8257eb78
	if (cr0.eq) goto loc_8257EB78;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8257bdd0
	sub_8257BDD0(ctx, base);
loc_8257EB78:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8257eb8c
	if (cr0.eq) goto loc_8257EB8C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8257a510
	sub_8257A510(ctx, base);
loc_8257EB8C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8257eba0
	if (cr0.eq) goto loc_8257EBA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8257a510
	sub_8257A510(ctx, base);
loc_8257EBA0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8257ebb8
	if (cr0.eq) goto loc_8257EBB8;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8257EBB8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8257ebd0
	if (cr0.eq) goto loc_8257EBD0;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8257EBD0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8257EBD8"))) PPC_WEAK_FUNC(sub_8257EBD8);
PPC_FUNC_IMPL(__imp__sub_8257EBD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82582930
	sub_82582930(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82582930
	sub_82582930(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82582930
	sub_82582930(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257e8e0
	sub_8257E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565510
	sub_82565510(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257ec44
	if (!cr0.eq) goto loc_8257EC44;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,491
	ctx.r7.s64 = 491;
	// addi r6,r11,-6112
	ctx.r6.s64 = r11.s64 + -6112;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-4436
	ctx.r5.s64 = r11.s64 + -4436;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257EC44:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EC58"))) PPC_WEAK_FUNC(sub_8257EC58);
PPC_FUNC_IMPL(__imp__sub_8257EC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// lbz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 20);
	// lbz r9,21(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 21);
	// lbz r10,22(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 22);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lbz r11,23(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 23);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// stb r10,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r10.u8);
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, r11.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257ECCC"))) PPC_WEAK_FUNC(sub_8257ECCC);
PPC_FUNC_IMPL(__imp__sub_8257ECCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257ECD0"))) PPC_WEAK_FUNC(sub_8257ECD0);
PPC_FUNC_IMPL(__imp__sub_8257ECD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lbz r11,20(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8257ecf4
	if (cr0.eq) goto loc_8257ECF4;
	// li r11,0
	r11.s64 = 0;
	// b 0x8257ecf8
	goto loc_8257ECF8;
loc_8257ECF4:
	// lbz r11,28(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 28);
loc_8257ECF8:
	// lbz r10,21(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 21);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, r11.u8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8257ed10
	if (cr0.eq) goto loc_8257ED10;
	// li r11,0
	r11.s64 = 0;
	// b 0x8257ed14
	goto loc_8257ED14;
loc_8257ED10:
	// lbz r11,29(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 29);
loc_8257ED14:
	// lbz r10,22(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 22);
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, r11.u8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8257ed2c
	if (cr0.eq) goto loc_8257ED2C;
	// li r11,0
	r11.s64 = 0;
	// b 0x8257ed30
	goto loc_8257ED30;
loc_8257ED2C:
	// lbz r11,30(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 30);
loc_8257ED30:
	// lbz r10,23(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 23);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, r11.u8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8257ed48
	if (cr0.eq) goto loc_8257ED48;
	// li r11,0
	r11.s64 = 0;
	// b 0x8257ed4c
	goto loc_8257ED4C;
loc_8257ED48:
	// lbz r11,31(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 31);
loc_8257ED4C:
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, r11.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257ED58"))) PPC_WEAK_FUNC(sub_8257ED58);
PPC_FUNC_IMPL(__imp__sub_8257ED58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lbz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 20);
	// lbz r8,21(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 21);
	// lbz r11,28(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 28);
	// lbz r10,29(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 29);
	// rlwimi r8,r9,1,30,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0x2) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// lbz r8,22(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 22);
	// clrlwi r11,r10,30
	r11.u64 = ctx.r10.u32 & 0x3;
	// lbz r10,30(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 30);
	// rlwimi r8,r9,1,0,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// lbz r9,31(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 31);
	// rlwimi r10,r11,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// lbz r11,23(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 23);
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// rlwimi r11,r8,1,0,30
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 1) & 0xFFFFFFFE) | (r11.u64 & 0xFFFFFFFF00000001);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32138
	ctx.r10.s64 = -2106195968;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r10,r10,-10016
	ctx.r10.s64 = ctx.r10.s64 + -10016;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// stb r10,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r10.u8);
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, r11.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EDDC"))) PPC_WEAK_FUNC(sub_8257EDDC);
PPC_FUNC_IMPL(__imp__sub_8257EDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257EDE0"))) PPC_WEAK_FUNC(sub_8257EDE0);
PPC_FUNC_IMPL(__imp__sub_8257EDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,27144
	ctx.r3.s64 = r11.s64 + 27144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EDEC"))) PPC_WEAK_FUNC(sub_8257EDEC);
PPC_FUNC_IMPL(__imp__sub_8257EDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257EDF0"))) PPC_WEAK_FUNC(sub_8257EDF0);
PPC_FUNC_IMPL(__imp__sub_8257EDF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11504
	r11.s64 = r11.s64 + -11504;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8257ee24
	if (cr0.eq) goto loc_8257EE24;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8257EE24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EE3C"))) PPC_WEAK_FUNC(sub_8257EE3C);
PPC_FUNC_IMPL(__imp__sub_8257EE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257EE40"))) PPC_WEAK_FUNC(sub_8257EE40);
PPC_FUNC_IMPL(__imp__sub_8257EE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r3,r11,-4280
	ctx.r3.s64 = r11.s64 + -4280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EE4C"))) PPC_WEAK_FUNC(sub_8257EE4C);
PPC_FUNC_IMPL(__imp__sub_8257EE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257EE50"))) PPC_WEAK_FUNC(sub_8257EE50);
PPC_FUNC_IMPL(__imp__sub_8257EE50) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EE58"))) PPC_WEAK_FUNC(sub_8257EE58);
PPC_FUNC_IMPL(__imp__sub_8257EE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// stbx r6,r11,r3
	PPC_STORE_U8(r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EE6C"))) PPC_WEAK_FUNC(sub_8257EE6C);
PPC_FUNC_IMPL(__imp__sub_8257EE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257EE70"))) PPC_WEAK_FUNC(sub_8257EE70);
PPC_FUNC_IMPL(__imp__sub_8257EE70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r6,4
	cr6.compare<int32_t>(ctx.r6.s32, 4, xer);
	// blt cr6,0x8257eea4
	if (cr6.lt) goto loc_8257EEA4;
	// cmpwi cr6,r6,5
	cr6.compare<int32_t>(ctx.r6.s32, 5, xer);
	// bgt cr6,0x8257eea4
	if (cr6.gt) goto loc_8257EEA4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1686
	ctx.r7.s64 = 1686;
	// addi r6,r11,-9768
	ctx.r6.s64 = r11.s64 + -9768;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// b 0x8249d0e0
	sub_8249D0E0(ctx, base);
	return;
loc_8257EEA4:
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// stbx r6,r11,r3
	PPC_STORE_U8(r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EEB8"))) PPC_WEAK_FUNC(sub_8257EEB8);
PPC_FUNC_IMPL(__imp__sub_8257EEB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r6,4
	cr6.compare<int32_t>(ctx.r6.s32, 4, xer);
	// blt cr6,0x8257eeec
	if (cr6.lt) goto loc_8257EEEC;
	// cmpwi cr6,r6,5
	cr6.compare<int32_t>(ctx.r6.s32, 5, xer);
	// bgt cr6,0x8257eeec
	if (cr6.gt) goto loc_8257EEEC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1699
	ctx.r7.s64 = 1699;
	// addi r6,r11,-9768
	ctx.r6.s64 = r11.s64 + -9768;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// b 0x8249d0e0
	sub_8249D0E0(ctx, base);
	return;
loc_8257EEEC:
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// stbx r6,r11,r3
	PPC_STORE_U8(r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EF00"))) PPC_WEAK_FUNC(sub_8257EF00);
PPC_FUNC_IMPL(__imp__sub_8257EF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// lbzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EF14"))) PPC_WEAK_FUNC(sub_8257EF14);
PPC_FUNC_IMPL(__imp__sub_8257EF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257EF18"))) PPC_WEAK_FUNC(sub_8257EF18);
PPC_FUNC_IMPL(__imp__sub_8257EF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// li r22,0
	r22.s64 = 0;
	// lwz r19,136(r18)
	r19.u64 = PPC_LOAD_U32(r18.u32 + 136);
	// lwz r11,8(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8257f1bc
	if (cr6.eq) goto loc_8257F1BC;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r20,1
	r20.s64 = 1;
	// addi r21,r11,-3664
	r21.s64 = r11.s64 + -3664;
loc_8257EF48:
	// lwz r31,28(r19)
	r31.u64 = PPC_LOAD_U32(r19.u32 + 28);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x8257ef58
	goto loc_8257EF58;
loc_8257EF54:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_8257EF58:
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257ef54
	if (!cr0.eq) goto loc_8257EF54;
	// b 0x8257f184
	goto loc_8257F184;
loc_8257EF64:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257f180
	if (cr0.eq) goto loc_8257F180;
	// lwz r11,12(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 12);
	// lwz r11,1700(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1700);
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// bge cr6,0x8257f180
	if (!cr6.lt) goto loc_8257F180;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mulli r10,r11,52
	ctx.r10.s64 = r11.s64 * 52;
	// lwzx r9,r10,r21
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r21.u32);
	// li r24,0
	r24.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// rlwinm. r9,r9,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8257efdc
	if (cr0.eq) goto loc_8257EFDC;
	// addi r9,r21,4
	ctx.r9.s64 = r21.s64 + 4;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8257efdc
	if (cr6.eq) goto loc_8257EFDC;
	// addi r10,r11,-18
	ctx.r10.s64 = r11.s64 + -18;
	// mr r11,r20
	r11.u64 = r20.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r24,r10,24
	r24.u64 = ctx.r10.u32 & 0xFF;
	// b 0x8257efe0
	goto loc_8257EFE0;
loc_8257EFDC:
	// li r11,0
	r11.s64 = 0;
loc_8257EFE0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257f180
	if (cr0.eq) goto loc_8257F180;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257f180
	if (!cr0.eq) goto loc_8257F180;
	// li r29,0
	r29.s64 = 0;
	// li r27,-1
	r27.s64 = -1;
	// li r26,-1
	r26.s64 = -1;
	// li r30,0
	r30.s64 = 0;
loc_8257F004:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8257f030
	if (!cr0.eq) goto loc_8257F030;
	// slw r11,r20,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r20.u32 << (r30.u8 & 0x3F));
	// or r29,r11,r29
	r29.u64 = r11.u64 | r29.u64;
loc_8257F030:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x8257f004
	if (cr6.lt) goto loc_8257F004;
	// mr r28,r20
	r28.u64 = r20.u64;
	// li r30,0
	r30.s64 = 0;
loc_8257F044:
	// slw r11,r20,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r20.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257f0f0
	if (cr0.eq) goto loc_8257F0F0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x8257f07c
	if (cr6.lt) goto loc_8257F07C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r27,r3
	cr6.compare<int32_t>(r27.s32, ctx.r3.s32, xer);
	// bne cr6,0x8257f100
	if (!cr6.eq) goto loc_8257F100;
loc_8257F07C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8257f0f0
	if (!cr6.eq) goto loc_8257F0F0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// blt cr6,0x8257f0d0
	if (cr6.lt) goto loc_8257F0D0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r26,r3
	cr6.compare<int32_t>(r26.s32, ctx.r3.s32, xer);
	// bne cr6,0x8257f100
	if (!cr6.eq) goto loc_8257F100;
loc_8257F0D0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8257F0F0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x8257f044
	if (cr6.lt) goto loc_8257F044;
	// b 0x8257f104
	goto loc_8257F104;
loc_8257F100:
	// li r28,0
	r28.s64 = 0;
loc_8257F104:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257f180
	if (cr0.eq) goto loc_8257F180;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8257f168
	if (!cr6.eq) goto loc_8257F168;
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x8257f144
	if (!cr6.eq) goto loc_8257F144;
	// lbz r9,154(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 154);
	// lbz r8,153(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 153);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8257f144
	if (!cr6.eq) goto loc_8257F144;
	// lbz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 160);
	// lbz r8,159(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 159);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x8257f168
	if (cr6.eq) goto loc_8257F168;
loc_8257F144:
	// clrlwi. r9,r24,24
	ctx.r9.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8257f180
	if (cr0.eq) goto loc_8257F180;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x8257f180
	if (!cr6.eq) goto loc_8257F180;
	// lbz r11,160(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 160);
	// lbz r10,159(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 159);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8257f180
	if (!cr6.eq) goto loc_8257F180;
	// mr r23,r20
	r23.u64 = r20.u64;
loc_8257F168:
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// bl 0x825863a8
	sub_825863A8(ctx, base);
loc_8257F180:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8257F184:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257ef64
	if (!cr6.eq) goto loc_8257EF64;
	// lwz r19,8(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// lwz r11,8(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257ef48
	if (!cr6.eq) goto loc_8257EF48;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// ble cr6,0x8257f1bc
	if (!cr6.gt) goto loc_8257F1BC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,12(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 12);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r11,-4168
	ctx.r4.s64 = r11.s64 + -4168;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_8257F1BC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_8257F1C4"))) PPC_WEAK_FUNC(sub_8257F1C4);
PPC_FUNC_IMPL(__imp__sub_8257F1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F1C8"))) PPC_WEAK_FUNC(sub_8257F1C8);
PPC_FUNC_IMPL(__imp__sub_8257F1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r10,r26,32
	ctx.r10.s64 = r26.s64 + 32;
	// li r28,1
	r28.s64 = 1;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r27,r10,r31
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_8257F208:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8257f224
	if (cr0.eq) goto loc_8257F224;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// b 0x8257f228
	goto loc_8257F228;
loc_8257F224:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_8257F228:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stbx r10,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x8257f208
	if (cr6.lt) goto loc_8257F208;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257f48c
	if (cr0.eq) goto loc_8257F48C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r10,-32138
	ctx.r10.s64 = -2106195968;
	// addi r10,r10,-3664
	ctx.r10.s64 = ctx.r10.s64 + -3664;
	// mulli r9,r11,52
	ctx.r9.s64 = r11.s64 * 52;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8257f31c
	if (cr0.eq) goto loc_8257F31C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8257f314
	if (cr6.eq) goto loc_8257F314;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8257f2c0
	if (cr6.eq) goto loc_8257F2C0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,639
	ctx.r7.s64 = 639;
	// addi r6,r11,-4096
	ctx.r6.s64 = r11.s64 + -4096;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// b 0x8257f308
	goto loc_8257F308;
loc_8257F2C0:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// addi r11,r11,-4416
	r11.s64 = r11.s64 + -4416;
	// bne cr6,0x8257f2d8
	if (!cr6.eq) goto loc_8257F2D8;
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// b 0x8257f590
	goto loc_8257F590;
loc_8257F2D8:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// beq cr6,0x8257f590
	if (cr6.eq) goto loc_8257F590;
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r7,635
	ctx.r7.s64 = 635;
	// addi r6,r10,-4096
	ctx.r6.s64 = ctx.r10.s64 + -4096;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwzx r30,r9,r11
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addi r5,r10,-24612
	ctx.r5.s64 = ctx.r10.s64 + -24612;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,8972
	ctx.r4.s64 = ctx.r10.s64 + 8972;
loc_8257F308:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x8257f5b0
	goto loc_8257F5B0;
loc_8257F314:
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// b 0x8257f588
	goto loc_8257F588;
loc_8257F31C:
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(r11.s32, 28, xer);
	// beq cr6,0x8257f454
	if (cr6.eq) goto loc_8257F454;
	// cmpwi cr6,r11,29
	cr6.compare<int32_t>(r11.s32, 29, xer);
	// beq cr6,0x8257f41c
	if (cr6.eq) goto loc_8257F41C;
	// cmpwi cr6,r11,30
	cr6.compare<int32_t>(r11.s32, 30, xer);
	// beq cr6,0x8257f3e4
	if (cr6.eq) goto loc_8257F3E4;
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(r11.s32, 50, xer);
	// beq cr6,0x8257f41c
	if (cr6.eq) goto loc_8257F41C;
	// cmpwi cr6,r11,133
	cr6.compare<int32_t>(r11.s32, 133, xer);
	// ble cr6,0x8257f34c
	if (!cr6.gt) goto loc_8257F34C;
	// cmpwi cr6,r11,135
	cr6.compare<int32_t>(r11.s32, 135, xer);
	// ble cr6,0x8257f41c
	if (!cr6.gt) goto loc_8257F41C;
loc_8257F34C:
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r9,r11,-4416
	ctx.r9.s64 = r11.s64 + -4416;
	// bne 0x8257f370
	if (!cr0.eq) goto loc_8257F370;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// b 0x8257f374
	goto loc_8257F374;
loc_8257F370:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257F374:
	// lbz r11,85(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8257f390
	if (!cr0.eq) goto loc_8257F390;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// b 0x8257f394
	goto loc_8257F394;
loc_8257F390:
	// li r11,0
	r11.s64 = 0;
loc_8257F394:
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x8257f3b4
	if (!cr0.eq) goto loc_8257F3B4;
	// lbz r11,82(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// b 0x8257f3b8
	goto loc_8257F3B8;
loc_8257F3B4:
	// li r11,0
	r11.s64 = 0;
loc_8257F3B8:
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x8257f3d8
	if (!cr0.eq) goto loc_8257F3D8;
	// lbz r11,83(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// b 0x8257f3dc
	goto loc_8257F3DC;
loc_8257F3D8:
	// li r11,0
	r11.s64 = 0;
loc_8257F3DC:
	// or r30,r11,r10
	r30.u64 = r11.u64 | ctx.r10.u64;
	// b 0x8257f5b0
	goto loc_8257F5B0;
loc_8257F3E4:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// li r30,0
	r30.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-4416
	ctx.r10.s64 = ctx.r10.s64 + -4416;
loc_8257F3F8:
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r30,r9,r30
	r30.u64 = ctx.r9.u64 | r30.u64;
	// blt cr6,0x8257f3f8
	if (cr6.lt) goto loc_8257F3F8;
	// b 0x8257f5b0
	goto loc_8257F5B0;
loc_8257F41C:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// li r30,0
	r30.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-4416
	ctx.r10.s64 = ctx.r10.s64 + -4416;
loc_8257F430:
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r30,r9,r30
	r30.u64 = ctx.r9.u64 | r30.u64;
	// blt cr6,0x8257f430
	if (cr6.lt) goto loc_8257F430;
	// b 0x8257f5b0
	goto loc_8257F5B0;
loc_8257F454:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// li r30,0
	r30.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-4416
	ctx.r10.s64 = ctx.r10.s64 + -4416;
loc_8257F468:
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r30,r9,r30
	r30.u64 = ctx.r9.u64 | r30.u64;
	// blt cr6,0x8257f468
	if (cr6.lt) goto loc_8257F468;
	// b 0x8257f5b0
	goto loc_8257F5B0;
loc_8257F48C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257f59c
	if (cr0.eq) goto loc_8257F59C;
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8257f584
	if (cr6.eq) goto loc_8257F584;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8257f55c
	if (cr6.eq) goto loc_8257F55C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8257f528
	if (cr6.eq) goto loc_8257F528;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8257f4e4
	if (cr6.eq) goto loc_8257F4E4;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x8257f55c
	if (cr6.eq) goto loc_8257F55C;
loc_8257F4E4:
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r11,r11,-4416
	r11.s64 = r11.s64 + -4416;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lbz r7,83(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwzx r11,r7,r11
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x8257f57c
	goto loc_8257F57C;
loc_8257F528:
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,-4416
	r11.s64 = r11.s64 + -4416;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x8257f57c
	goto loc_8257F57C;
loc_8257F55C:
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,-4416
	r11.s64 = r11.s64 + -4416;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
loc_8257F57C:
	// or r30,r10,r11
	r30.u64 = ctx.r10.u64 | r11.u64;
	// b 0x8257f5b0
	goto loc_8257F5B0;
loc_8257F584:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_8257F588:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,-4416
	r11.s64 = r11.s64 + -4416;
loc_8257F590:
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r30,r10,r11
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x8257f5b0
	goto loc_8257F5B0;
loc_8257F59C:
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r28.u8);
	// stb r28,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r28.u8);
	// stb r28,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r28.u8);
	// stb r28,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r28.u8);
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8257F5B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8257F5BC"))) PPC_WEAK_FUNC(sub_8257F5BC);
PPC_FUNC_IMPL(__imp__sub_8257F5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F5C0"))) PPC_WEAK_FUNC(sub_8257F5C0);
PPC_FUNC_IMPL(__imp__sub_8257F5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257f6c0
	if (cr0.eq) goto loc_8257F6C0;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257f6c0
	if (cr0.eq) goto loc_8257F6C0;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// lwz r29,240(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// addi r30,r10,-4400
	r30.s64 = ctx.r10.s64 + -4400;
	// lwz r28,236(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// lwz r10,128(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 128);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8257f6c0
	if (!cr0.eq) goto loc_8257F6C0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257f6c0
	if (cr0.eq) goto loc_8257F6C0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257f6c0
	if (cr0.eq) goto loc_8257F6C0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8257F664:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r5,r11
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8257f684
	if (!cr0.eq) goto loc_8257F684;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r5,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8257f6c8
	if (cr0.eq) goto loc_8257F6C8;
loc_8257F684:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8257f6c0
	if (!cr6.eq) goto loc_8257F6C0;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// blt cr6,0x8257f664
	if (cr6.lt) goto loc_8257F664;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// bl 0x825649a0
	sub_825649A0(ctx, base);
loc_8257F6C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_8257F6C8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,112
	r11.s64 = ctx.r3.s64 + 112;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// b 0x8257f6c0
	goto loc_8257F6C0;
}

__attribute__((alias("__imp__sub_8257F6F4"))) PPC_WEAK_FUNC(sub_8257F6F4);
PPC_FUNC_IMPL(__imp__sub_8257F6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F6F8"))) PPC_WEAK_FUNC(sub_8257F6F8);
PPC_FUNC_IMPL(__imp__sub_8257F6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// bne cr6,0x8257f8f0
	if (!cr6.eq) goto loc_8257F8F0;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(r11.s32, 19, xer);
	// bne cr6,0x8257f738
	if (!cr6.eq) goto loc_8257F738;
	// li r28,1
	r28.s64 = 1;
	// li r29,2
	r29.s64 = 2;
loc_8257F738:
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(r11.s32, 19, xer);
	// bne cr6,0x8257f750
	if (!cr6.eq) goto loc_8257F750;
	// li r28,2
	r28.s64 = 2;
	// li r29,1
	r29.s64 = 1;
loc_8257F750:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x8257f8f0
	if (cr6.eq) goto loc_8257F8F0;
	// addi r11,r28,58
	r11.s64 = r28.s64 + 58;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r31
	r30.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8257f8f0
	if (!cr0.eq) goto loc_8257F8F0;
	// lwz r11,956(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 956);
	// lwz r10,2152(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2152);
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8257f788
	if (cr0.lt) goto loc_8257F788;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x8257f8f0
	if (cr6.gt) goto loc_8257F8F0;
loc_8257F788:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257f1c8
	sub_8257F1C8(ctx, base);
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8257ec58
	sub_8257EC58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwinm r8,r10,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r8,r10,24,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r8,r10,8,8,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r8,r10,24,0,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8257f8f0
	if (cr6.gt) goto loc_8257F8F0;
	// and r11,r3,r6
	r11.u64 = ctx.r3.u64 & ctx.r6.u64;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x8257f8f0
	if (!cr6.eq) goto loc_8257F8F0;
	// add r11,r28,r31
	r11.u64 = r28.u64 + r31.u64;
	// lbz r10,158(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 158);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8257f8f0
	if (!cr0.eq) goto loc_8257F8F0;
	// lbz r11,152(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 152);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8257f8f0
	if (!cr0.eq) goto loc_8257F8F0;
	// lbz r11,164(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 164);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8257f8f0
	if (!cr0.eq) goto loc_8257F8F0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r10,r11,-4272
	ctx.r10.s64 = r11.s64 + -4272;
	// addi r11,r29,58
	r11.s64 = r29.s64 + 58;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// add r11,r29,r31
	r11.u64 = r29.u64 + r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,50
	ctx.r10.s64 = r29.s64 + 50;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// stw r10,248(r31)
	PPC_STORE_U32(r31.u32 + 248, ctx.r10.u32);
	// lwzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// stw r10,240(r31)
	PPC_STORE_U32(r31.u32 + 240, ctx.r10.u32);
	// lwz r10,236(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// stw r10,236(r31)
	PPC_STORE_U32(r31.u32 + 236, ctx.r10.u32);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// stw r10,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r10.u32);
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r10.u32);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// stw r10,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r10.u32);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// stw r10,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// lbz r10,161(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 161);
	// stb r10,162(r31)
	PPC_STORE_U8(r31.u32 + 162, ctx.r10.u8);
	// lbz r10,158(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 158);
	// stb r10,161(r31)
	PPC_STORE_U8(r31.u32 + 161, ctx.r10.u8);
	// lbz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 160);
	// stb r10,160(r31)
	PPC_STORE_U8(r31.u32 + 160, ctx.r10.u8);
	// lbz r10,159(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 159);
	// stb r10,159(r31)
	PPC_STORE_U8(r31.u32 + 159, ctx.r10.u8);
	// lbz r10,155(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 155);
	// stb r10,156(r31)
	PPC_STORE_U8(r31.u32 + 156, ctx.r10.u8);
	// lbz r11,152(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 152);
	// stb r11,155(r31)
	PPC_STORE_U8(r31.u32 + 155, r11.u8);
	// lbz r11,154(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 154);
	// stb r11,154(r31)
	PPC_STORE_U8(r31.u32 + 154, r11.u8);
	// lbz r11,153(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 153);
	// stb r11,153(r31)
	PPC_STORE_U8(r31.u32 + 153, r11.u8);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// stw r11,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r11.u32);
	// lwzx r11,r7,r31
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + r31.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// lwz r11,208(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 208);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// lwz r11,204(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// lwz r11,248(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,4
	r11.s64 = 4;
	// bne cr6,0x8257f8ec
	if (!cr6.eq) goto loc_8257F8EC;
	// li r11,3
	r11.s64 = 3;
loc_8257F8EC:
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8257F8F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8257F8F8"))) PPC_WEAK_FUNC(sub_8257F8F8);
PPC_FUNC_IMPL(__imp__sub_8257F8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257ffa0
	if (cr0.eq) goto loc_8257FFA0;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// bgt cr6,0x8257fb34
	if (cr6.gt) goto loc_8257FB34;
	// beq cr6,0x8257fb5c
	if (cr6.eq) goto loc_8257FB5C;
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// blt cr6,0x8257ffa0
	if (cr6.lt) goto loc_8257FFA0;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(r11.s32, 19, xer);
	// ble cr6,0x8257f954
	if (!cr6.gt) goto loc_8257F954;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// beq cr6,0x8257fc7c
	if (cr6.eq) goto loc_8257FC7C;
	// ble cr6,0x8257ffa0
	if (!cr6.gt) goto loc_8257FFA0;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(r11.s32, 22, xer);
	// ble cr6,0x8257fb5c
	if (!cr6.gt) goto loc_8257FB5C;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// bne cr6,0x8257ffa0
	if (!cr6.eq) goto loc_8257FFA0;
loc_8257F954:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,2152(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 2152);
	// lwz r10,956(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 956);
	// subf. r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8257f978
	if (cr0.lt) goto loc_8257F978;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x8257ffa0
	if (cr6.gt) goto loc_8257FFA0;
loc_8257F978:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8257ffa0
	if (!cr6.eq) goto loc_8257FFA0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585478
	sub_82585478(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257ffa0
	if (cr0.eq) goto loc_8257FFA0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8257f9dc
	if (cr6.eq) goto loc_8257F9DC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1073
	ctx.r7.s64 = 1073;
	// addi r6,r11,-4096
	ctx.r6.s64 = r11.s64 + -4096;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-3992
	ctx.r5.s64 = r11.s64 + -3992;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257F9DC:
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x8257f9fc
	if (!cr6.eq) goto loc_8257F9FC;
	// lwz r9,240(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// lwz r8,240(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x8257fa14
	if (cr6.eq) goto loc_8257FA14;
loc_8257F9FC:
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bne cr6,0x8257ffa0
	if (!cr6.eq) goto loc_8257FFA0;
	// lwz r11,240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x8257ffa0
	if (!cr6.eq) goto loc_8257FFA0;
loc_8257FA14:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825853c8
	sub_825853C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257ffa0
	if (cr0.eq) goto loc_8257FFA0;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// lwz r10,236(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8257fe74
	if (!cr6.eq) goto loc_8257FE74;
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8257fe74
	if (!cr6.eq) goto loc_8257FE74;
	// li r29,0
	r29.s64 = 0;
loc_8257FA4C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8257fb24
	if (cr6.eq) goto loc_8257FB24;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,84(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8257FB24:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x8257fa4c
	if (cr6.lt) goto loc_8257FA4C;
	// b 0x8257ff5c
	goto loc_8257FF5C;
loc_8257FB34:
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(r11.s32, 25, xer);
	// beq cr6,0x8257f954
	if (cr6.eq) goto loc_8257F954;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(r11.s32, 26, xer);
	// beq cr6,0x8257fb5c
	if (cr6.eq) goto loc_8257FB5C;
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(r11.s32, 35, xer);
	// ble cr6,0x8257ffa0
	if (!cr6.gt) goto loc_8257FFA0;
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(r11.s32, 38, xer);
	// ble cr6,0x8257fc7c
	if (!cr6.gt) goto loc_8257FC7C;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(r11.s32, 49, xer);
	// bne cr6,0x8257ffa0
	if (!cr6.eq) goto loc_8257FFA0;
loc_8257FB5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,2152(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 2152);
	// lwz r10,956(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 956);
	// subf. r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8257fb80
	if (cr0.lt) goto loc_8257FB80;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x8257ffa0
	if (cr6.gt) goto loc_8257FFA0;
loc_8257FB80:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8257ffa0
	if (!cr6.eq) goto loc_8257FFA0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585478
	sub_82585478(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257ffa0
	if (cr0.eq) goto loc_8257FFA0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825853c8
	sub_825853C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257ffa0
	if (cr0.eq) goto loc_8257FFA0;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// lwz r10,236(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8257ffa0
	if (!cr6.eq) goto loc_8257FFA0;
	// li r29,0
	r29.s64 = 0;
loc_8257FBCC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8257fc68
	if (cr6.eq) goto loc_8257FC68;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,84(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8257FC68:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x8257fbcc
	if (cr6.lt) goto loc_8257FBCC;
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// b 0x8257ff60
	goto loc_8257FF60;
loc_8257FC7C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8257fcbc
	if (cr6.eq) goto loc_8257FCBC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1118
	ctx.r7.s64 = 1118;
	// addi r6,r11,-4096
	ctx.r6.s64 = r11.s64 + -4096;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-4016
	ctx.r5.s64 = r11.s64 + -4016;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257FCBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,2152(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 2152);
	// lwz r10,956(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 956);
	// subf. r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8257fce0
	if (cr0.lt) goto loc_8257FCE0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x8257ffa0
	if (cr6.gt) goto loc_8257FFA0;
loc_8257FCE0:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8257ffa0
	if (!cr6.eq) goto loc_8257FFA0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585478
	sub_82585478(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257ffa0
	if (cr0.eq) goto loc_8257FFA0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825853c8
	sub_825853C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257ffa0
	if (cr0.eq) goto loc_8257FFA0;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// lwz r10,236(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8257ffa0
	if (!cr6.eq) goto loc_8257FFA0;
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8257ffa0
	if (!cr6.eq) goto loc_8257FFA0;
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8257ffa0
	if (!cr6.eq) goto loc_8257FFA0;
	// li r29,0
	r29.s64 = 0;
loc_8257FD4C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8257fe60
	if (cr6.eq) goto loc_8257FE60;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,84(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8257FE60:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x8257fd4c
	if (cr6.lt) goto loc_8257FD4C;
	// lwz r10,248(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 248);
	// b 0x8257ff60
	goto loc_8257FF60;
loc_8257FE74:
	// li r29,0
	r29.s64 = 0;
loc_8257FE78:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8257ff50
	if (cr6.eq) goto loc_8257FF50;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,84(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8257FF50:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x8257fe78
	if (cr6.lt) goto loc_8257FE78;
loc_8257FF5C:
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 244);
loc_8257FF60:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// beq 0x8257ff80
	if (cr0.eq) goto loc_8257FF80;
	// addi r11,r11,58
	r11.s64 = r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// b 0x8257ffa0
	goto loc_8257FFA0;
loc_8257FF80:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r11,58
	ctx.r9.s64 = r11.s64 + 58;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r10.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
loc_8257FFA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8257FFA8"))) PPC_WEAK_FUNC(sub_8257FFA8);
PPC_FUNC_IMPL(__imp__sub_8257FFA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11504
	r11.s64 = r11.s64 + -11504;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8257ffdc
	if (cr0.eq) goto loc_8257FFDC;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8257FFDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257FFF4"))) PPC_WEAK_FUNC(sub_8257FFF4);
PPC_FUNC_IMPL(__imp__sub_8257FFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257FFF8"))) PPC_WEAK_FUNC(sub_8257FFF8);
PPC_FUNC_IMPL(__imp__sub_8257FFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// addi r4,r11,-3900
	ctx.r4.s64 = r11.s64 + -3900;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
loc_82580034:
	// lwz r11,2068(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 2068);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x8258004c
	if (!cr6.gt) goto loc_8258004C;
	// li r11,0
	r11.s64 = 0;
	// b 0x82580058
	goto loc_82580058;
loc_8258004C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// lwzx r31,r10,r30
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
loc_82580058:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82580098
	if (cr0.eq) goto loc_82580098;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8258008c
	if (cr0.eq) goto loc_8258008C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x8257ec58
	sub_8257EC58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_8258008C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x82580034
	goto loc_82580034;
loc_82580098:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,8972
	r25.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r24,r11,-3968
	r24.s64 = r11.s64 + -3968;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r23,r11,-4096
	r23.s64 = r11.s64 + -4096;
	// b 0x825801c4
	goto loc_825801C4;
loc_825800B4:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257f5c0
	sub_8257F5C0(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825800e8
	if (cr0.eq) goto loc_825800E8;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r27,r11,-1
	r27.s64 = r11.s64 + -1;
	// b 0x825800ec
	goto loc_825800EC;
loc_825800E8:
	// lwz r27,20(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_825800EC:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// blt cr6,0x82580144
	if (cr6.lt) goto loc_82580144;
	// addi r28,r31,236
	r28.s64 = r31.s64 + 236;
loc_825800FC:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257f1c8
	sub_8257F1C8(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// or r10,r11,r3
	ctx.r10.u64 = r11.u64 | ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82580134
	if (cr6.eq) goto loc_82580134;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_82580134:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(r29.s32, r27.s32, xer);
	// ble cr6,0x825800fc
	if (!cr6.gt) goto loc_825800FC;
loc_82580144:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825801c4
	if (cr0.eq) goto loc_825801C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8257ec58
	sub_8257EC58(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8257ecd0
	sub_8257ECD0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8257ed58
	sub_8257ED58(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x825801a0
	if (cr6.eq) goto loc_825801A0;
	// li r7,843
	ctx.r7.s64 = 843;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825801A0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// or r10,r11,r31
	ctx.r10.u64 = r11.u64 | r31.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825801c4
	if (cr6.eq) goto loc_825801C4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_825801C4:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825800b4
	if (!cr6.eq) goto loc_825800B4;
	// lwz r8,136(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 136);
	// b 0x82580250
	goto loc_82580250;
loc_825801D8:
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// b 0x82580240
	goto loc_82580240;
loc_825801E0:
	// lwz r11,228(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8258023c
	if (cr0.eq) goto loc_8258023C;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82580200:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8258021c
	if (!cr6.eq) goto loc_8258021C;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// b 0x82580220
	goto loc_82580220;
loc_8258021C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82580220:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stbx r9,r11,r7
	PPC_STORE_U8(r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82580200
	if (cr6.lt) goto loc_82580200;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, r11.u32);
loc_8258023C:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_82580240:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825801e0
	if (!cr6.eq) goto loc_825801E0;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
loc_82580250:
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825801d8
	if (!cr6.eq) goto loc_825801D8;
	// lwz r26,136(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 136);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825803ec
	if (cr6.eq) goto loc_825803EC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r27,r11,-4416
	r27.s64 = r11.s64 + -4416;
loc_82580274:
	// lwz r31,28(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// b 0x825803d0
	goto loc_825803D0;
loc_8258027C:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825803cc
	if (cr0.eq) goto loc_825803CC;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825803c4
	if (cr0.eq) goto loc_825803C4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r28,1
	r28.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x82580360
	if (cr6.lt) goto loc_82580360;
	// addi r30,r31,132
	r30.s64 = r31.s64 + 132;
loc_825802CC:
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// lwz r3,128(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 128);
	// bl 0x8257ec58
	sub_8257EC58(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r11,0
	r11.s64 = 0;
loc_825802E8:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// or r29,r10,r29
	r29.u64 = ctx.r10.u64 | r29.u64;
	// blt cr6,0x825802e8
	if (cr6.lt) goto loc_825802E8;
loc_82580308:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82580318
	if (cr6.eq) goto loc_82580318;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82580330
	if (!cr6.eq) goto loc_82580330;
loc_82580318:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,128(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 128);
	// bl 0x8257ec58
	sub_8257EC58(ctx, base);
	// b 0x82580308
	goto loc_82580308;
loc_82580330:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// ble cr6,0x825802cc
	if (!cr6.gt) goto loc_825802CC;
loc_82580360:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825803c4
	if (cr0.eq) goto loc_825803C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x8257ec58
	sub_8257EC58(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8257ecd0
	sub_8257ECD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8257ed58
	sub_8257ED58(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// beq cr6,0x825803b4
	if (cr6.eq) goto loc_825803B4;
	// li r7,897
	ctx.r7.s64 = 897;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825803B4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825803c4
	if (!cr6.eq) goto loc_825803C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825649a0
	sub_825649A0(ctx, base);
loc_825803C4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_825803CC:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_825803D0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8258027c
	if (!cr6.eq) goto loc_8258027C;
	// lwz r26,8(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82580274
	if (!cr6.eq) goto loc_82580274;
loc_825803EC:
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82580400"))) PPC_WEAK_FUNC(sub_82580400);
PPC_FUNC_IMPL(__imp__sub_82580400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,1112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1112);
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82580430
	if (cr0.eq) goto loc_82580430;
	// bl 0x8257f6f8
	sub_8257F6F8(ctx, base);
loc_82580430:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,1112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1112);
	// rlwinm. r11,r11,25,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8258044c
	if (cr0.eq) goto loc_8258044C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257f8f8
	sub_8257F8F8(ctx, base);
loc_8258044C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580464"))) PPC_WEAK_FUNC(sub_82580464);
PPC_FUNC_IMPL(__imp__sub_82580464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580468"))) PPC_WEAK_FUNC(sub_82580468);
PPC_FUNC_IMPL(__imp__sub_82580468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,2148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 2148);
	// lwz r11,2152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2152);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,2148(r30)
	PPC_STORE_U32(r30.u32 + 2148, ctx.r10.u32);
	// stw r11,2152(r30)
	PPC_STORE_U32(r30.u32 + 2152, r11.u32);
	// lwz r4,432(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// lwz r29,136(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// b 0x8258052c
	goto loc_8258052C;
loc_825804A8:
	// lwz r31,28(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// b 0x8258051c
	goto loc_8258051C;
loc_825804B0:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82580518
	if (cr0.eq) goto loc_82580518;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825804f4
	if (!cr0.eq) goto loc_825804F4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82580518
	if (cr0.eq) goto loc_82580518;
loc_825804F4:
	// lwz r11,2148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2148);
	// lwz r10,956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 956);
	// stw r11,892(r31)
	PPC_STORE_U32(r31.u32 + 892, r11.u32);
	// lwz r11,2152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2152);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// ble cr6,0x82580514
	if (!cr6.gt) goto loc_82580514;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
loc_82580514:
	// stw r11,956(r31)
	PPC_STORE_U32(r31.u32 + 956, r11.u32);
loc_82580518:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8258051C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825804b0
	if (!cr6.eq) goto loc_825804B0;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_8258052C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825804a8
	if (!cr6.eq) goto loc_825804A8;
	// li r26,0
	r26.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r24,1
	r24.s64 = 1;
loc_82580544:
	// lwz r11,2068(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2068);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(r24.u32, ctx.r10.u32, xer);
	// ble cr6,0x8258055c
	if (!cr6.gt) goto loc_8258055C;
	// li r11,0
	r11.s64 = 0;
	// b 0x82580568
	goto loc_82580568;
loc_8258055C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// lwzx r26,r10,r25
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + r25.u32);
loc_82580568:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82580678
	if (cr0.eq) goto loc_82580678;
	// lwz r11,228(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8258066c
	if (cr0.eq) goto loc_8258066C;
	// lwz r11,2148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2148);
	// lwz r10,956(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 956);
	// stw r11,892(r26)
	PPC_STORE_U32(r26.u32 + 892, r11.u32);
	// lwz r11,2152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2152);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// ble cr6,0x8258059c
	if (!cr6.gt) goto loc_8258059C;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
loc_8258059C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,956(r26)
	PPC_STORE_U32(r26.u32 + 956, r11.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
loc_825805B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8256d8d8
	sub_8256D8D8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r27,1
	r27.s64 = 1;
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x8258065c
	if (cr6.lt) goto loc_8258065C;
	// addi r29,r28,236
	r29.s64 = r28.s64 + 236;
loc_825805D0:
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82580648
	if (cr0.eq) goto loc_82580648;
loc_825805DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82586018
	sub_82586018(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825805f8
	if (cr0.eq) goto loc_825805F8;
	// lwz r31,236(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x825805dc
	if (!cr0.eq) goto loc_825805DC;
loc_825805F8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82580648
	if (cr6.eq) goto loc_82580648;
	// lwz r11,2152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2152);
	// lwz r10,956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 956);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// ble cr6,0x82580618
	if (!cr6.gt) goto loc_82580618;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
loc_82580618:
	// stw r11,956(r31)
	PPC_STORE_U32(r31.u32 + 956, r11.u32);
	// lwz r11,2148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2148);
	// lwz r10,892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 892);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82580648
	if (!cr0.eq) goto loc_82580648;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,892(r31)
	PPC_STORE_U32(r31.u32 + 892, r11.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82580648:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// ble cr6,0x825805d0
	if (!cr6.gt) goto loc_825805D0;
loc_8258065C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825805b0
	if (cr0.eq) goto loc_825805B0;
loc_8258066C:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// b 0x82580544
	goto loc_82580544;
loc_82580678:
	// lwz r29,136(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// b 0x82580738
	goto loc_82580738;
loc_82580688:
	// lwz r31,28(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// b 0x82580728
	goto loc_82580728;
loc_82580690:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82580724
	if (cr0.eq) goto loc_82580724;
	// lwz r11,892(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 892);
	// lwz r10,2148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 2148);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82580724
	if (!cr0.eq) goto loc_82580724;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825806f0
	if (cr0.eq) goto loc_825806F0;
	// lbz r11,2116(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825806f0
	if (!cr0.eq) goto loc_825806F0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r3,r30,184
	ctx.r3.s64 = r30.s64 + 184;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82581478
	sub_82581478(ctx, base);
loc_825806F0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,-137
	r11.s64 = r11.s64 + -137;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82580720
	if (cr0.eq) goto loc_82580720;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// b 0x82580724
	goto loc_82580724;
loc_82580720:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82580724:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82580728:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82580690
	if (!cr6.eq) goto loc_82580690;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_82580738:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82580688
	if (!cr6.eq) goto loc_82580688;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82565510
	sub_82565510(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82580778
	if (!cr0.eq) goto loc_82580778;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,154
	ctx.r7.s64 = 154;
	// addi r6,r11,-4096
	ctx.r6.s64 = r11.s64 + -4096;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-6416
	ctx.r5.s64 = r11.s64 + -6416;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82580778:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82580794
	if (cr6.eq) goto loc_82580794;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-3776
	ctx.r4.s64 = r11.s64 + -3776;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_82580794:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x825807b0
	if (cr6.eq) goto loc_825807B0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,-3840
	ctx.r4.s64 = r11.s64 + -3840;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_825807B0:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_825807C4"))) PPC_WEAK_FUNC(sub_825807C4);
PPC_FUNC_IMPL(__imp__sub_825807C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825807C8"))) PPC_WEAK_FUNC(sub_825807C8);
PPC_FUNC_IMPL(__imp__sub_825807C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-3708
	ctx.r4.s64 = r11.s64 + -3708;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwz r11,2148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 2148);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,2148(r29)
	PPC_STORE_U32(r29.u32 + 2148, r11.u32);
	// lwz r4,432(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// li r26,1
	r26.s64 = 1;
	// mr r31,r25
	r31.u64 = r25.u64;
	// mr r27,r25
	r27.u64 = r25.u64;
loc_82580824:
	// lwz r11,2068(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 2068);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// ble cr6,0x8258083c
	if (!cr6.gt) goto loc_8258083C;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82580848
	goto loc_82580848;
loc_8258083C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// lwzx r31,r10,r27
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
loc_82580848:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825809b4
	if (cr0.eq) goto loc_825809B4;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825809a8
	if (cr0.eq) goto loc_825809A8;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
loc_82580864:
	// li r28,1
	r28.s64 = 1;
loc_82580868:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825808e4
	if (cr0.eq) goto loc_825808E4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825808ac
	if (cr6.eq) goto loc_825808AC;
	// lwz r11,2148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 2148);
	// lwz r10,892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 892);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825808ac
	if (!cr0.eq) goto loc_825808AC;
	// stw r11,892(r31)
	PPC_STORE_U32(r31.u32 + 892, r11.u32);
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825808b4
	if (!cr6.eq) goto loc_825808B4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82580400
	sub_82580400(ctx, base);
loc_825808AC:
	// mr r28,r25
	r28.u64 = r25.u64;
	// b 0x82580868
	goto loc_82580868;
loc_825808B4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r31,236(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// b 0x82580868
	goto loc_82580868;
loc_825808E4:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// cntlzw r11,r10
	r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825809a8
	if (!cr0.eq) goto loc_825809A8;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82580914
	if (!cr6.lt) goto loc_82580914;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82580918
	goto loc_82580918;
loc_82580914:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82580918:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82580988
	if (cr6.eq) goto loc_82580988;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82580944
	if (!cr6.lt) goto loc_82580944;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82580948
	goto loc_82580948;
loc_82580944:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82580948:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82580988
	if (cr6.eq) goto loc_82580988;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570760
	sub_82570760(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// addi r11,r30,58
	r11.s64 = r30.s64 + 58;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	r31.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// b 0x82580864
	goto loc_82580864;
loc_82580988:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82580400
	sub_82580400(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8256d8d8
	sub_8256D8D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570760
	sub_82570760(ctx, base);
	// b 0x82580868
	goto loc_82580868;
loc_825809A8:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// b 0x82580824
	goto loc_82580824;
loc_825809B4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8257fff8
	sub_8257FFF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82580468
	sub_82580468(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_825809E4"))) PPC_WEAK_FUNC(sub_825809E4);
PPC_FUNC_IMPL(__imp__sub_825809E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825809E8"))) PPC_WEAK_FUNC(sub_825809E8);
PPC_FUNC_IMPL(__imp__sub_825809E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r4,1876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1876, ctx.r4.u32);
	// addi r9,r3,1104
	ctx.r9.s64 = ctx.r3.s64 + 1104;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// addi r10,r3,976
	ctx.r10.s64 = ctx.r3.s64 + 976;
	// addi r6,r3,896
	ctx.r6.s64 = ctx.r3.s64 + 896;
	// stb r11,1872(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1872, r11.u8);
	// li r5,19
	ctx.r5.s64 = 19;
	// stb r11,1873(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1873, r11.u8);
loc_82580A0C:
	// stw r11,-64(r10)
	PPC_STORE_U32(ctx.r10.u32 + -64, r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stbx r11,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r11.u8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r8,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r8.u32);
	// stw r11,-976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -976, r11.u32);
	// stw r8,-912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -912, ctx.r8.u32);
loc_82580A28:
	// stw r11,-976(r9)
	PPC_STORE_U32(ctx.r9.u32 + -976, r11.u32);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r5,-720(r9)
	PPC_STORE_U32(ctx.r9.u32 + -720, ctx.r5.u32);
	// stw r5,256(r9)
	PPC_STORE_U32(ctx.r9.u32 + 256, ctx.r5.u32);
	// stw r11,-464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -464, r11.u32);
	// stw r11,512(r9)
	PPC_STORE_U32(ctx.r9.u32 + 512, r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82580a28
	if (!cr0.eq) goto loc_82580A28;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r8,16
	cr6.compare<int32_t>(ctx.r8.s32, 16, xer);
	// blt cr6,0x82580a0c
	if (cr6.lt) goto loc_82580A0C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580A60"))) PPC_WEAK_FUNC(sub_82580A60);
PPC_FUNC_IMPL(__imp__sub_82580A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(r28.s32, 5, xer);
	// beq cr6,0x82580b28
	if (cr6.eq) goto loc_82580B28;
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(r28.s32, 6, xer);
	// beq cr6,0x82580b28
	if (cr6.eq) goto loc_82580B28;
	// addi r11,r30,244
	r11.s64 = r30.s64 + 244;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(r11.s32, 33, xer);
	// bne cr6,0x82580ae8
	if (!cr6.eq) goto loc_82580AE8;
	// addi r11,r30,69
	r11.s64 = r30.s64 + 69;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82580ae8
	if (cr6.eq) goto loc_82580AE8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-3400
	ctx.r6.s64 = r11.s64 + -3400;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-3536
	ctx.r5.s64 = r11.s64 + -3536;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82580AE8:
	// addi r11,r30,69
	r11.s64 = r30.s64 + 69;
	// addi r10,r30,85
	ctx.r10.s64 = r30.s64 + 85;
	// addi r8,r30,101
	ctx.r8.s64 = r30.s64 + 101;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + r31.u32, r27.u32);
	// stwx r28,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, r28.u32);
	// stwx r26,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r26.u32);
	// b 0x82580bdc
	goto loc_82580BDC;
loc_82580B28:
	// addi r11,r30,228
	r11.s64 = r30.s64 + 228;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r31
	r11.u64 = PPC_LOAD_U32(r27.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82580bdc
	if (cr6.eq) goto loc_82580BDC;
	// addi r11,r30,244
	r11.s64 = r30.s64 + 244;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r31
	r11.u64 = PPC_LOAD_U32(r28.u32 + r31.u32);
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(r11.s32, 33, xer);
	// bne cr6,0x82580b6c
	if (!cr6.eq) goto loc_82580B6C;
	// addi r11,r30,69
	r11.s64 = r30.s64 + 69;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82580b90
	if (cr6.eq) goto loc_82580B90;
loc_82580B6C:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,122
	ctx.r7.s64 = 122;
	// addi r6,r11,-3400
	ctx.r6.s64 = r11.s64 + -3400;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-3672
	ctx.r5.s64 = r11.s64 + -3672;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82580B90:
	// addi r10,r30,260
	ctx.r10.s64 = r30.s64 + 260;
	// li r11,0
	r11.s64 = 0;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r31
	ctx.r9.u64 = r30.u64 + r31.u64;
	// addi r10,r30,85
	ctx.r10.s64 = r30.s64 + 85;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r11,r27,r31
	PPC_STORE_U32(r27.u32 + r31.u32, r11.u32);
	// stb r11,896(r9)
	PPC_STORE_U8(ctx.r9.u32 + 896, r11.u8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// stwx r11,r28,r31
	PPC_STORE_U32(r28.u32 + r31.u32, r11.u32);
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + r31.u32, r30.u32);
loc_82580BC0:
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r11,-256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -256, r11.u32);
	// stw r11,256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 256, r11.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82580bc0
	if (!cr0.eq) goto loc_82580BC0;
loc_82580BDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82580BE4"))) PPC_WEAK_FUNC(sub_82580BE4);
PPC_FUNC_IMPL(__imp__sub_82580BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580BE8"))) PPC_WEAK_FUNC(sub_82580BE8);
PPC_FUNC_IMPL(__imp__sub_82580BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-3272
	ctx.r4.s64 = r11.s64 + -3272;
	// lwz r3,1876(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1876);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,-3312
	r28.s64 = r11.s64 + -3312;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r31,r30,1040
	r31.s64 = r30.s64 + 1040;
	// addi r27,r11,26496
	r27.s64 = r11.s64 + 26496;
loc_82580C20:
	// lwz r11,-128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82580c4c
	if (cr6.eq) goto loc_82580C4C;
	// lwz r11,-64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -64);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwz r3,1876(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1876);
	// lwzx r6,r11,r27
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_82580C4C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r29,16
	cr6.compare<int32_t>(r29.s32, 16, xer);
	// blt cr6,0x82580c20
	if (cr6.lt) goto loc_82580C20;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82580C64"))) PPC_WEAK_FUNC(sub_82580C64);
PPC_FUNC_IMPL(__imp__sub_82580C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580C68"))) PPC_WEAK_FUNC(sub_82580C68);
PPC_FUNC_IMPL(__imp__sub_82580C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r4,244
	r11.s64 = ctx.r4.s64 + 244;
	// addi r10,r5,244
	ctx.r10.s64 = ctx.r5.s64 + 244;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82580c90
	if (!cr6.lt) goto loc_82580C90;
loc_82580C88:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82580C90:
	// ble cr6,0x82580c9c
	if (!cr6.gt) goto loc_82580C9C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82580C9C:
	// addi r11,r4,260
	r11.s64 = ctx.r4.s64 + 260;
	// addi r10,r5,260
	ctx.r10.s64 = ctx.r5.s64 + 260;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82580c88
	if (cr6.gt) goto loc_82580C88;
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580CCC"))) PPC_WEAK_FUNC(sub_82580CCC);
PPC_FUNC_IMPL(__imp__sub_82580CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580CD0"))) PPC_WEAK_FUNC(sub_82580CD0);
PPC_FUNC_IMPL(__imp__sub_82580CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lbz r11,1873(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1873);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r29,r11,-3400
	r29.s64 = r11.s64 + -3400;
	// beq 0x82580d24
	if (cr0.eq) goto loc_82580D24;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,482
	ctx.r7.s64 = 482;
	// addi r5,r11,-3236
	ctx.r5.s64 = r11.s64 + -3236;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82580D24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r31,912
	r11.s64 = r31.s64 + 912;
loc_82580D2C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82580d70
	if (cr6.eq) goto loc_82580D70;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r3,16
	cr6.compare<int32_t>(ctx.r3.s32, 16, xer);
	// blt cr6,0x82580d2c
	if (cr6.lt) goto loc_82580D2C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r7,499
	ctx.r7.s64 = 499;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82580D68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
loc_82580D70:
	// addi r11,r3,244
	r11.s64 = ctx.r3.s64 + 244;
	// addi r10,r3,260
	ctx.r10.s64 = ctx.r3.s64 + 260;
	// addi r9,r3,228
	ctx.r9.s64 = ctx.r3.s64 + 228;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r28,33
	cr6.compare<int32_t>(r28.s32, 33, xer);
	// stwx r28,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r28.u32);
	// stwx r27,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, r27.u32);
	// stwx r26,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + r31.u32, r26.u32);
	// beq cr6,0x82580d68
	if (cr6.eq) goto loc_82580D68;
	// addi r11,r3,69
	r11.s64 = ctx.r3.s64 + 69;
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x82580d68
	goto loc_82580D68;
}

__attribute__((alias("__imp__sub_82580DC0"))) PPC_WEAK_FUNC(sub_82580DC0);
PPC_FUNC_IMPL(__imp__sub_82580DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// stb r10,896(r11)
	PPC_STORE_U8(r11.u32 + 896, ctx.r10.u8);
	// lbz r11,1872(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1872);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,8972
	r29.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r28,r11,-3400
	r28.s64 = r11.s64 + -3400;
	// beq 0x82580e24
	if (cr0.eq) goto loc_82580E24;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,512
	ctx.r7.s64 = 512;
	// addi r5,r11,-3180
	ctx.r5.s64 = r11.s64 + -3180;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82580E24:
	// lbz r11,1873(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1873);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82580e4c
	if (!cr0.eq) goto loc_82580E4C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,514
	ctx.r7.s64 = 514;
	// addi r5,r11,-3200
	ctx.r5.s64 = r11.s64 + -3200;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82580E4C:
	// addi r11,r30,228
	r11.s64 = r30.s64 + 228;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r31
	r11.u64 = PPC_LOAD_U32(r27.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82580e7c
	if (cr6.eq) goto loc_82580E7C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,515
	ctx.r7.s64 = 515;
	// addi r5,r11,-3216
	ctx.r5.s64 = r11.s64 + -3216;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82580E7C:
	// addi r11,r30,244
	r11.s64 = r30.s64 + 244;
	// stwx r24,r27,r31
	PPC_STORE_U32(r27.u32 + r31.u32, r24.u32);
	// addi r10,r30,260
	ctx.r10.s64 = r30.s64 + 260;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r26,33
	cr6.compare<int32_t>(r26.s32, 33, xer);
	// stwx r26,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r26.u32);
	// stwx r25,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, r25.u32);
	// beq cr6,0x82580ec0
	if (cr6.eq) goto loc_82580EC0;
	// addi r11,r30,69
	r11.s64 = r30.s64 + 69;
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_82580EC0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82580ECC"))) PPC_WEAK_FUNC(sub_82580ECC);
PPC_FUNC_IMPL(__imp__sub_82580ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580ED0"))) PPC_WEAK_FUNC(sub_82580ED0);
PPC_FUNC_IMPL(__imp__sub_82580ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-3152
	ctx.r4.s64 = r11.s64 + -3152;
	// lwz r3,1876(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1876);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// addi r29,r30,912
	r29.s64 = r30.s64 + 912;
	// addi r31,r30,1616
	r31.s64 = r30.s64 + 1616;
loc_82580EFC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82580f34
	if (cr0.eq) goto loc_82580F34;
	// lwz r5,64(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// cmpwi cr6,r5,18
	cr6.compare<int32_t>(ctx.r5.s32, 18, xer);
	// beq cr6,0x82580f34
	if (cr6.eq) goto loc_82580F34;
	// addi r10,r31,-512
	ctx.r10.s64 = r31.s64 + -512;
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// lwz r6,128(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 128);
	// addi r8,r31,-256
	ctx.r8.s64 = r31.s64 + -256;
	// lwz r3,1876(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1876);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8254b620
	sub_8254B620(ctx, base);
loc_82580F34:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r28,16
	cr6.compare<int32_t>(r28.s32, 16, xer);
	// blt cr6,0x82580efc
	if (cr6.lt) goto loc_82580EFC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82580F50"))) PPC_WEAK_FUNC(sub_82580F50);
PPC_FUNC_IMPL(__imp__sub_82580F50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r9,r3,1360
	ctx.r9.s64 = ctx.r3.s64 + 1360;
	// addi r8,r4,384
	ctx.r8.s64 = ctx.r4.s64 + 384;
	// addi r11,r3,976
	r11.s64 = ctx.r3.s64 + 976;
	// li r7,16
	ctx.r7.s64 = 16;
loc_82580F64:
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r5,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r5.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
loc_82580F78:
	// lwz r5,-256(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -256);
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stw r5,-256(r8)
	PPC_STORE_U32(ctx.r8.u32 + -256, ctx.r5.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// lwz r5,256(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r5,256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 256, ctx.r5.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82580f78
	if (!cr0.eq) goto loc_82580F78;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82580f64
	if (!cr0.eq) goto loc_82580F64;
	// li r11,1
	r11.s64 = 1;
	// stb r11,1872(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1872, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580FBC"))) PPC_WEAK_FUNC(sub_82580FBC);
PPC_FUNC_IMPL(__imp__sub_82580FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580FC0"))) PPC_WEAK_FUNC(sub_82580FC0);
PPC_FUNC_IMPL(__imp__sub_82580FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,1872(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1872);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8258100c
	if (!cr0.eq) goto loc_8258100C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,107
	ctx.r7.s64 = 107;
	// addi r6,r11,-3096
	ctx.r6.s64 = r11.s64 + -3096;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-3124
	ctx.r5.s64 = r11.s64 + -3124;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8258100C:
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82581050
	if (!cr6.eq) goto loc_82581050;
	// rlwinm r11,r30,4,0,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82581050
	if (!cr6.eq) goto loc_82581050;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82581050
	if (!cr6.eq) goto loc_82581050;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82581054
	if (cr6.eq) goto loc_82581054;
loc_82581050:
	// li r11,1
	r11.s64 = 1;
loc_82581054:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581070"))) PPC_WEAK_FUNC(sub_82581070);
PPC_FUNC_IMPL(__imp__sub_82581070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r28,r11,-700
	xer.ca = r11.u32 <= 4294966596;
	r28.s64 = -700 - r11.s64;
	// subfic r30,r11,-636
	xer.ca = r11.u32 <= 4294966660;
	r30.s64 = -636 - r11.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,976
	ctx.r9.s64 = r11.s64 + 976;
	// lwzx r27,r10,r11
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// subfic r29,r11,-572
	xer.ca = r11.u32 <= 4294966724;
	r29.s64 = -572 - r11.s64;
loc_8258109C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, r27.s32, xer);
	// bne cr6,0x82581184
	if (!cr6.eq) goto loc_82581184;
	// cmpwi cr6,r10,33
	cr6.compare<int32_t>(ctx.r10.s32, 33, xer);
	// beq cr6,0x825810cc
	if (cr6.eq) goto loc_825810CC;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// beq cr6,0x82581198
	if (cr6.eq) goto loc_82581198;
	// b 0x82581184
	goto loc_82581184;
loc_825810CC:
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// li r31,0
	r31.s64 = 0;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + r11.u64;
loc_825810E4:
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8258116c
	if (cr6.eq) goto loc_8258116C;
	// add r8,r28,r9
	ctx.r8.u64 = r28.u64 + ctx.r9.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8258116c
	if (cr6.eq) goto loc_8258116C;
	// addi r8,r4,24
	ctx.r8.s64 = ctx.r4.s64 + 24;
	// add r7,r30,r9
	ctx.r7.u64 = r30.u64 + ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x82581168
	if (!cr6.eq) goto loc_82581168;
	// addi r8,r4,40
	ctx.r8.s64 = ctx.r4.s64 + 40;
	// add r7,r29,r9
	ctx.r7.u64 = r29.u64 + ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x82581168
	if (!cr6.eq) goto loc_82581168;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// b 0x8258116c
	goto loc_8258116C;
loc_82581168:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8258116C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x825810e4
	if (cr6.lt) goto loc_825810E4;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bgt cr6,0x825811a0
	if (cr6.gt) goto loc_825811A0;
loc_82581184:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r3,16
	cr6.compare<int32_t>(ctx.r3.s32, 16, xer);
	// blt cr6,0x8258109c
	if (cr6.lt) goto loc_8258109C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82581198:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_825811A0:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82581198
	if (!cr6.gt) goto loc_82581198;
	// lwz r11,1876(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1876);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r10,340(r11)
	PPC_STORE_U32(r11.u32 + 340, ctx.r10.u32);
	// bl 0x826a70b0
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
}

__attribute__((alias("__imp__sub_825811C0"))) PPC_WEAK_FUNC(sub_825811C0);
PPC_FUNC_IMPL(__imp__sub_825811C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x8239bcf8
	// add r11,r5,r3
	r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lbz r11,896(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 896);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82581380
	if (!cr0.eq) goto loc_82581380;
	// add r11,r6,r3
	r11.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lbz r11,896(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 896);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82581380
	if (!cr0.eq) goto loc_82581380;
	// addi r11,r6,244
	r11.s64 = ctx.r6.s64 + 244;
	// addi r10,r5,244
	ctx.r10.s64 = ctx.r5.s64 + 244;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r6,260
	r11.s64 = ctx.r6.s64 + 260;
	// addi r7,r5,260
	ctx.r7.s64 = ctx.r5.s64 + 260;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r5,69
	ctx.r7.s64 = ctx.r5.s64 + 69;
	// addi r30,r6,69
	r30.s64 = ctx.r6.s64 + 69;
	// rlwinm r31,r7,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r28,r9,r3
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r7,r30,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r30,r8,r3
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// add r31,r31,r3
	r31.u64 = r31.u64 + ctx.r3.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// li r29,4
	r29.s64 = 4;
	// stwx r28,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, r28.u32);
	// lwzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// stwx r30,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r30.u32);
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
loc_82581244:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82581244
	if (!cr0.eq) goto loc_82581244;
	// addi r11,r5,85
	r11.s64 = ctx.r5.s64 + 85;
	// addi r9,r6,85
	ctx.r9.s64 = ctx.r6.s64 + 85;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r9,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82581280:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82581280
	if (!cr0.eq) goto loc_82581280;
	// addi r11,r5,101
	r11.s64 = ctx.r5.s64 + 101;
	// addi r9,r6,101
	ctx.r9.s64 = ctx.r6.s64 + 101;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r9,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_825812BC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x825812bc
	if (!cr0.eq) goto loc_825812BC;
	// addi r10,r5,228
	ctx.r10.s64 = ctx.r5.s64 + 228;
	// addi r11,r6,228
	r11.s64 = ctx.r6.s64 + 228;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r11,r8,r3
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r11.u32);
	// beq 0x82581320
	if (cr0.eq) goto loc_82581320;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r5,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r5.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82581320
	if (cr0.eq) goto loc_82581320;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r5,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r5.u32);
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, r11.u32);
loc_82581320:
	// lwzx r11,r8,r3
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82581348
	if (cr0.eq) goto loc_82581348;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r6,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r6.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82581348
	if (cr0.eq) goto loc_82581348;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r6,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r6.u32);
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, r11.u32);
loc_82581348:
	// lwzx r11,r9,r3
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82581364
	if (cr0.eq) goto loc_82581364;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// bne cr6,0x82581364
	if (!cr6.eq) goto loc_82581364;
	// stw r5,2076(r4)
	PPC_STORE_U32(ctx.r4.u32 + 2076, ctx.r5.u32);
loc_82581364:
	// lwzx r11,r8,r3
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82581380
	if (cr0.eq) goto loc_82581380;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// bne cr6,0x82581380
	if (!cr6.eq) goto loc_82581380;
	// stw r6,2076(r4)
	PPC_STORE_U32(ctx.r4.u32 + 2076, ctx.r6.u32);
loc_82581380:
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82581384"))) PPC_WEAK_FUNC(sub_82581384);
PPC_FUNC_IMPL(__imp__sub_82581384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82581388"))) PPC_WEAK_FUNC(sub_82581388);
PPC_FUNC_IMPL(__imp__sub_82581388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r28,33
	cr6.compare<int32_t>(r28.s32, 33, xer);
	// bne cr6,0x825813d0
	if (!cr6.eq) goto loc_825813D0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,537
	ctx.r7.s64 = 537;
	// addi r6,r11,-3400
	ctx.r6.s64 = r11.s64 + -3400;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-3008
	ctx.r5.s64 = r11.s64 + -3008;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825813D0:
	// lbz r11,1872(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 1872);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82581438
	if (cr0.eq) goto loc_82581438;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_825813E4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82580fc0
	sub_82580FC0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82581410
	if (cr0.eq) goto loc_82581410;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bne cr6,0x82581410
	if (!cr6.eq) goto loc_82581410;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// beq cr6,0x8258142c
	if (cr6.eq) goto loc_8258142C;
loc_82581410:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(r31.s32, 16, xer);
	// blt cr6,0x825813e4
	if (cr6.lt) goto loc_825813E4;
loc_82581420:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82581424:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
loc_8258142C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r31.u32);
	// b 0x82581424
	goto loc_82581424;
loc_82581438:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r29,1040
	r11.s64 = r29.s64 + 1040;
loc_82581440:
	// lwz r9,-64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -64);
	// cmpw cr6,r9,r28
	cr6.compare<int32_t>(ctx.r9.s32, r28.s32, xer);
	// bne cr6,0x82581458
	if (!cr6.eq) goto loc_82581458;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r9,r27
	cr6.compare<int32_t>(ctx.r9.s32, r27.s32, xer);
	// beq cr6,0x8258146c
	if (cr6.eq) goto loc_8258146C;
loc_82581458:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// blt cr6,0x82581440
	if (cr6.lt) goto loc_82581440;
	// b 0x82581420
	goto loc_82581420;
loc_8258146C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82581424
	goto loc_82581424;
}

__attribute__((alias("__imp__sub_82581478"))) PPC_WEAK_FUNC(sub_82581478);
PPC_FUNC_IMPL(__imp__sub_82581478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// add r11,r29,r30
	r11.u64 = r29.u64 + r30.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lbz r11,896(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 896);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82581674
	if (!cr0.eq) goto loc_82581674;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,1876(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1876);
	// mulli r9,r28,12
	ctx.r9.s64 = r28.s64 * 12;
	// addi r11,r11,26496
	r11.s64 = r11.s64 + 26496;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r10,-2948
	ctx.r4.s64 = ctx.r10.s64 + -2948;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// cmpwi cr6,r29,15
	cr6.compare<int32_t>(r29.s32, 15, xer);
	// bge cr6,0x8258153c
	if (!cr6.lt) goto loc_8258153C;
	// addi r11,r29,69
	r11.s64 = r29.s64 + 69;
	// addi r9,r29,228
	ctx.r9.s64 = r29.s64 + 228;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// subfic r8,r29,15
	xer.ca = r29.u32 <= 15;
	ctx.r8.s64 = 15 - r29.s64;
loc_825814EC:
	// lwz r6,68(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r6,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r6.u32);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r5,128(r11)
	PPC_STORE_U32(r11.u32 + 128, ctx.r5.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
loc_8258150C:
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lwz r6,272(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// lwz r5,528(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r6,256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 256, ctx.r6.u32);
	// stw r5,512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 512, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8258150c
	if (!cr0.eq) goto loc_8258150C;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// bne 0x825814ec
	if (!cr0.eq) goto loc_825814EC;
loc_8258153C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r11,r30,1600
	r11.s64 = r30.s64 + 1600;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,972(r30)
	PPC_STORE_U32(r30.u32 + 972, ctx.r10.u32);
	// stw r10,1036(r30)
	PPC_STORE_U32(r30.u32 + 1036, ctx.r10.u32);
	// stw r8,1100(r30)
	PPC_STORE_U32(r30.u32 + 1100, ctx.r8.u32);
loc_82581558:
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r10,-256(r11)
	PPC_STORE_U32(r11.u32 + -256, ctx.r10.u32);
	// stw r10,256(r11)
	PPC_STORE_U32(r11.u32 + 256, ctx.r10.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82581558
	if (!cr0.eq) goto loc_82581558;
	// lbz r11,2072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2072);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825815ac
	if (cr0.eq) goto loc_825815AC;
	// cmpwi cr6,r28,18
	cr6.compare<int32_t>(r28.s32, 18, xer);
	// beq cr6,0x825815ac
	if (cr6.eq) goto loc_825815AC;
	// lwz r4,2084(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 2084);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// stw r11,2084(r31)
	PPC_STORE_U32(r31.u32 + 2084, r11.u32);
	// bl 0x82576a00
	sub_82576A00(ctx, base);
	// lwz r11,2076(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2076);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,2076(r31)
	PPC_STORE_U32(r31.u32 + 2076, r11.u32);
	// b 0x825815e4
	goto loc_825815E4;
loc_825815AC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825815d0
	if (cr6.eq) goto loc_825815D0;
	// cmpwi cr6,r28,18
	cr6.compare<int32_t>(r28.s32, 18, xer);
	// bne cr6,0x825815d0
	if (!cr6.eq) goto loc_825815D0;
	// lwz r4,2084(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 2084);
	// stb r10,2072(r31)
	PPC_STORE_U8(r31.u32 + 2072, ctx.r10.u8);
	// stb r10,2073(r31)
	PPC_STORE_U8(r31.u32 + 2073, ctx.r10.u8);
	// stw r10,2076(r31)
	PPC_STORE_U32(r31.u32 + 2076, ctx.r10.u32);
	// b 0x825815dc
	goto loc_825815DC;
loc_825815D0:
	// lwz r11,2084(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2084);
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// stw r4,2084(r31)
	PPC_STORE_U32(r31.u32 + 2084, ctx.r4.u32);
loc_825815DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82576a00
	sub_82576A00(ctx, base);
loc_825815E4:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r31,28(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// b 0x82581650
	goto loc_82581650;
loc_825815F0:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8258164c
	if (cr0.eq) goto loc_8258164C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8258164c
	if (cr0.eq) goto loc_8258164C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8258164c
	if (cr6.eq) goto loc_8258164C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8258164c
	if (!cr6.eq) goto loc_8258164C;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// ble cr6,0x8258164c
	if (!cr6.gt) goto loc_8258164C;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8258164C:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82581650:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825815f0
	if (!cr6.eq) goto loc_825815F0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,1876(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1876);
	// addi r4,r11,-2980
	ctx.r4.s64 = r11.s64 + -2980;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82580be8
	sub_82580BE8(ctx, base);
loc_82581674:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8258167C"))) PPC_WEAK_FUNC(sub_8258167C);
PPC_FUNC_IMPL(__imp__sub_8258167C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82581680"))) PPC_WEAK_FUNC(sub_82581680);
PPC_FUNC_IMPL(__imp__sub_82581680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc4
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// li r15,0
	r15.s64 = 0;
	// lbz r11,1872(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 1872);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82581ae8
	if (cr0.eq) goto loc_82581AE8;
	// li r17,0
	r17.s64 = 0;
	// addi r9,r26,1040
	ctx.r9.s64 = r26.s64 + 1040;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,16
	r11.s64 = 16;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825816BC:
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x825816bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825816BC;
	// li r10,16
	ctx.r10.s64 = 16;
loc_825816CC:
	// lwz r11,-64(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -64);
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(r11.s32, 33, xer);
	// bne cr6,0x825816ec
	if (!cr6.eq) goto loc_825816EC;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r17
	cr6.compare<int32_t>(r11.s32, r17.s32, xer);
	// ble cr6,0x825816ec
	if (!cr6.gt) goto loc_825816EC;
	// mr r17,r11
	r17.u64 = r11.u64;
loc_825816EC:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x825816cc
	if (!cr0.eq) goto loc_825816CC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,-2628
	r29.s64 = r11.s64 + -2628;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r19,r11,8972
	r19.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r28,r11,-2648
	r28.s64 = r11.s64 + -2648;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r18,r11,-3400
	r18.s64 = r11.s64 + -3400;
loc_8258171C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82580fc0
	sub_82580FC0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825817d4
	if (cr0.eq) goto loc_825817D4;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r30,r27
	r11.u64 = PPC_LOAD_U8(r30.u32 + r27.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82581758
	if (cr0.eq) goto loc_82581758;
	// li r7,210
	ctx.r7.s64 = 210;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82581758:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82581070
	sub_82581070(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x825817d4
	if (cr0.lt) goto loc_825817D4;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825818d0
	if (!cr0.eq) goto loc_825818D0;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// beq cr6,0x825817cc
	if (cr6.eq) goto loc_825817CC;
	// addi r11,r26,896
	r11.s64 = r26.s64 + 896;
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x825817a0
	if (!cr0.eq) goto loc_825817A0;
	// lbzx r11,r11,r31
	r11.u64 = PPC_LOAD_U8(r11.u32 + r31.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825817b8
	if (cr0.eq) goto loc_825817B8;
loc_825817A0:
	// li r7,217
	ctx.r7.s64 = 217;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825817B8:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825811c0
	sub_825811C0(ctx, base);
loc_825817CC:
	// li r11,1
	r11.s64 = 1;
	// stbx r11,r30,r27
	PPC_STORE_U8(r30.u32 + r27.u32, r11.u8);
loc_825817D4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(r30.s32, 16, xer);
	// blt cr6,0x8258171c
	if (cr6.lt) goto loc_8258171C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r28,0
	r28.s64 = 0;
	// addi r23,r11,-2660
	r23.s64 = r11.s64 + -2660;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r29,r26,912
	r29.s64 = r26.s64 + 912;
	// addi r22,r11,-2676
	r22.s64 = r11.s64 + -2676;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r24,r26,128
	r24.s64 = r26.s64 + 128;
	// addi r21,r11,-2752
	r21.s64 = r11.s64 + -2752;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// subfic r25,r26,-880
	xer.ca = r26.u32 <= 4294966416;
	r25.s64 = -880 - r26.s64;
	// addi r20,r11,-2832
	r20.s64 = r11.s64 + -2832;
	// li r27,2
	r27.s64 = 2;
loc_82581814:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lbzx r31,r28,r11
	r31.u64 = PPC_LOAD_U8(r28.u32 + r11.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x82581854
	if (!cr0.eq) goto loc_82581854;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82581854
	if (cr0.eq) goto loc_82581854;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8258184c
	if (cr0.eq) goto loc_8258184C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8258184C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82581854:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82580fc0
	sub_82580FC0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82581ad0
	if (cr0.eq) goto loc_82581AD0;
	// lwz r4,-912(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -912);
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// beq cr6,0x82581878
	if (cr6.eq) goto loc_82581878;
	// mr r15,r28
	r15.u64 = r28.u64;
loc_82581878:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82581a00
	if (!cr6.eq) goto loc_82581A00;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
loc_8258188C:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x825818e8
	if (!cr6.eq) goto loc_825818E8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8258189C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stbx r27,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, r27.u8);
loc_825818A4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x8258188c
	if (cr6.lt) goto loc_8258188C;
	// clrlwi. r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82581ad0
	if (cr0.eq) goto loc_82581AD0;
	// cmpwi cr6,r4,33
	cr6.compare<int32_t>(ctx.r4.s32, 33, xer);
	// bne cr6,0x82581904
	if (!cr6.eq) goto loc_82581904;
	// mr r31,r17
	r31.u64 = r17.u64;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// b 0x82581908
	goto loc_82581908;
loc_825818D0:
	// lwz r11,1876(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 1876);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r10,340(r11)
	PPC_STORE_U32(r11.u32 + 340, ctx.r10.u32);
	// bl 0x826a70b0
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
loc_825818E8:
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// bne cr6,0x8258189c
	if (!cr6.eq) goto loc_8258189C;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r7,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r7.u8);
	// b 0x825818a4
	goto loc_825818A4;
loc_82581904:
	// lwz r31,-848(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + -848);
loc_82581908:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,172(r16)
	ctx.r3.u64 = PPC_LOAD_U32(r16.u32 + 172);
	// bl 0x825740f0
	sub_825740F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82581934
	if (cr0.eq) goto loc_82581934;
	// li r7,282
	ctx.r7.s64 = 282;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82581934:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,172(r16)
	ctx.r3.u64 = PPC_LOAD_U32(r16.u32 + 172);
	// lwz r4,-912(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -912);
	// bl 0x82574110
	sub_82574110(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x825819a0
	if (cr6.eq) goto loc_825819A0;
	// add r10,r28,r26
	ctx.r10.u64 = r28.u64 + r26.u64;
	// lbz r10,896(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 896);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82581974
	if (!cr0.eq) goto loc_82581974;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lbz r11,896(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 896);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8258198c
	if (cr0.eq) goto loc_8258198C;
loc_82581974:
	// li r7,288
	ctx.r7.s64 = 288;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8258198C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825811c0
	sub_825811C0(ctx, base);
loc_825819A0:
	// lwz r11,1876(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 1876);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r31,428(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// beq 0x825819dc
	if (cr0.eq) goto loc_825819DC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,1876(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 1876);
	// bl 0x82586af8
	sub_82586AF8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825819e0
	goto loc_825819E0;
loc_825819DC:
	// li r31,0
	r31.s64 = 0;
loc_825819E0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,168(r16)
	ctx.r3.u64 = PPC_LOAD_U32(r16.u32 + 168);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// lwz r3,96(r16)
	ctx.r3.u64 = PPC_LOAD_U32(r16.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// b 0x82581ad0
	goto loc_82581AD0;
loc_82581A00:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82581a24
	if (!cr6.eq) goto loc_82581A24;
	// li r7,297
	ctx.r7.s64 = 297;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82581A24:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r31,56(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x82581a4c
	if (!cr0.eq) goto loc_82581A4C;
	// li r7,301
	ctx.r7.s64 = 301;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82581A4C:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// li r11,0
	r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82581A58:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82581a98
	if (!cr6.eq) goto loc_82581A98;
	// add r10,r25,r29
	ctx.r10.u64 = r25.u64 + r29.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82581ab8
	if (cr6.eq) goto loc_82581AB8;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stbx r10,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// b 0x82581abc
	goto loc_82581ABC;
loc_82581A98:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82581abc
	if (!cr6.eq) goto loc_82581ABC;
	// add r10,r25,r29
	ctx.r10.u64 = r25.u64 + r29.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82581abc
	if (!cr6.eq) goto loc_82581ABC;
loc_82581AB8:
	// stbx r27,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, r27.u8);
loc_82581ABC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82581a58
	if (cr6.lt) goto loc_82581A58;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82581AD0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// cmpwi cr6,r28,16
	cr6.compare<int32_t>(r28.s32, 16, xer);
	// blt cr6,0x82581814
	if (cr6.lt) goto loc_82581814;
	// b 0x82581c24
	goto loc_82581C24;
loc_82581AE8:
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bge cr6,0x82581bac
	if (!cr6.lt) goto loc_82581BAC;
	// cmpwi cr6,r5,19
	cr6.compare<int32_t>(ctx.r5.s32, 19, xer);
	// beq cr6,0x82581b00
	if (cr6.eq) goto loc_82581B00;
	// cmpwi cr6,r5,33
	cr6.compare<int32_t>(ctx.r5.s32, 33, xer);
	// bne cr6,0x82581bac
	if (!cr6.eq) goto loc_82581BAC;
loc_82581B00:
	// li r31,0
	r31.s64 = 0;
	// addi r11,r26,1040
	r11.s64 = r26.s64 + 1040;
loc_82581B08:
	// lwz r10,-64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -64);
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// bne cr6,0x82581b28
	if (!cr6.eq) goto loc_82581B28;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x82581b28
	if (cr6.lt) goto loc_82581B28;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x82581b3c
	if (cr6.lt) goto loc_82581B3C;
loc_82581B28:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(r31.s32, 16, xer);
	// blt cr6,0x82581b08
	if (cr6.lt) goto loc_82581B08;
	// b 0x82581bac
	goto loc_82581BAC;
loc_82581B3C:
	// addi r11,r31,260
	r11.s64 = r31.s64 + 260;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// subf r30,r6,r11
	r30.s64 = r11.s64 - ctx.r6.s64;
	// add r29,r30,r26
	r29.u64 = r30.u64 + r26.u64;
	// lbz r11,896(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 896);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82581b6c
	if (!cr0.eq) goto loc_82581B6C;
	// add r11,r31,r26
	r11.u64 = r31.u64 + r26.u64;
	// lbz r11,896(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 896);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82581b90
	if (cr0.eq) goto loc_82581B90;
loc_82581B6C:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,336
	ctx.r7.s64 = 336;
	// addi r6,r11,-3400
	ctx.r6.s64 = r11.s64 + -3400;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-2892
	ctx.r5.s64 = r11.s64 + -2892;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82581B90:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825811c0
	sub_825811C0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,896(r29)
	PPC_STORE_U8(r29.u32 + 896, r11.u8);
loc_82581BAC:
	// li r31,0
	r31.s64 = 0;
	// addi r29,r26,976
	r29.s64 = r26.s64 + 976;
loc_82581BB4:
	// addi r30,r31,1
	r30.s64 = r31.s64 + 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(r30.s32, 16, xer);
	// bge cr6,0x82581bf8
	if (!cr6.lt) goto loc_82581BF8;
loc_82581BC4:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82580c68
	sub_82580C68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82581bec
	if (!cr0.lt) goto loc_82581BEC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825811c0
	sub_825811C0(ctx, base);
loc_82581BEC:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,16
	cr6.compare<int32_t>(ctx.r6.s32, 16, xer);
	// blt cr6,0x82581bc4
	if (cr6.lt) goto loc_82581BC4;
loc_82581BF8:
	// lwz r11,-64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82581c14
	if (cr6.eq) goto loc_82581C14;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// beq cr6,0x82581c14
	if (cr6.eq) goto loc_82581C14;
	// mr r15,r31
	r15.u64 = r31.u64;
loc_82581C14:
	// mr r31,r30
	r31.u64 = r30.u64;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r31,15
	cr6.compare<int32_t>(r31.s32, 15, xer);
	// blt cr6,0x82581bb4
	if (cr6.lt) goto loc_82581BB4;
loc_82581C24:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd14
	return;
}

__attribute__((alias("__imp__sub_82581C30"))) PPC_WEAK_FUNC(sub_82581C30);
PPC_FUNC_IMPL(__imp__sub_82581C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r12{};
	// cmplwi cr6,r3,61
	cr6.compare<uint32_t>(ctx.r3.u32, 61, xer);
	// bgt cr6,0x82581c90
	if (cr6.gt) {
		sub_82581C90(ctx, base);
		return;
	}
	// lis r12,-32245
	r12.s64 = -2113208320;
	// addi r12,r12,-2480
	r12.s64 = r12.s64 + -2480;
	// lbzx r0,r12,r3
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r3.u32);
	// lis r12,-32168
	r12.s64 = -2108162048;
	// addi r12,r12,7264
	r12.s64 = r12.s64 + 7264;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		// ERROR: 0x82581C70
		return;
	case 1:
		// ERROR: 0x82581C70
		return;
	case 2:
		// ERROR: 0x82581C60
		return;
	case 3:
		// ERROR: 0x82581C68
		return;
	case 4:
		// ERROR: 0x82581C68
		return;
	case 5:
		// ERROR: 0x82581C68
		return;
	case 6:
		// ERROR: 0x82581C70
		return;
	case 7:
		// ERROR: 0x82581C70
		return;
	case 8:
		// ERROR: 0x82581C60
		return;
	case 9:
		// ERROR: 0x82581C60
		return;
	case 10:
		// ERROR: 0x82581C68
		return;
	case 11:
		// ERROR: 0x82581C70
		return;
	case 12:
		// ERROR: 0x82581C70
		return;
	case 13:
		// ERROR: 0x82581C90
		return;
	case 14:
		// ERROR: 0x82581C70
		return;
	case 15:
		// ERROR: 0x82581C68
		return;
	case 16:
		// ERROR: 0x82581C70
		return;
	case 17:
		// ERROR: 0x82581C70
		return;
	case 18:
		// ERROR: 0x82581C78
		return;
	case 19:
		// ERROR: 0x82581C80
		return;
	case 20:
		// ERROR: 0x82581C80
		return;
	case 21:
		// ERROR: 0x82581C90
		return;
	case 22:
		// ERROR: 0x82581C70
		return;
	case 23:
		// ERROR: 0x82581C70
		return;
	case 24:
		// ERROR: 0x82581C68
		return;
	case 25:
		// ERROR: 0x82581C70
		return;
	case 26:
		// ERROR: 0x82581C78
		return;
	case 27:
		// ERROR: 0x82581C68
		return;
	case 28:
		// ERROR: 0x82581C70
		return;
	case 29:
		// ERROR: 0x82581C78
		return;
	case 30:
		// ERROR: 0x82581C68
		return;
	case 31:
		// ERROR: 0x82581C70
		return;
	case 32:
		// ERROR: 0x82581C78
		return;
	case 33:
		// ERROR: 0x82581C70
		return;
	case 34:
		// ERROR: 0x82581C78
		return;
	case 35:
		// ERROR: 0x82581C80
		return;
	case 36:
		// ERROR: 0x82581C70
		return;
	case 37:
		// ERROR: 0x82581C78
		return;
	case 38:
		// ERROR: 0x82581C80
		return;
	case 39:
		// ERROR: 0x82581C70
		return;
	case 40:
		// ERROR: 0x82581C70
		return;
	case 41:
		// ERROR: 0x82581C68
		return;
	case 42:
		// ERROR: 0x82581C70
		return;
	case 43:
		// ERROR: 0x82581C60
		return;
	case 44:
		// ERROR: 0x82581C70
		return;
	case 45:
		// ERROR: 0x82581C70
		return;
	case 46:
		// ERROR: 0x82581C68
		return;
	case 47:
		// ERROR: 0x82581C68
		return;
	case 48:
		// ERROR: 0x82581C70
		return;
	case 49:
		// ERROR: 0x82581C80
		return;
	case 50:
		// ERROR: 0x82581C70
		return;
	case 51:
		// ERROR: 0x82581C78
		return;
	case 52:
		// ERROR: 0x82581C80
		return;
	case 53:
		// ERROR: 0x82581C80
		return;
	case 54:
		// ERROR: 0x82581C70
		return;
	case 55:
		// ERROR: 0x82581C70
		return;
	case 56:
		// ERROR: 0x82581C70
		return;
	case 57:
		// ERROR: 0x82581C88
		return;
	case 58:
		// ERROR: 0x82581C78
		return;
	case 59:
		// ERROR: 0x82581C78
		return;
	case 60:
		// ERROR: 0x82581C78
		return;
	case 61:
		// ERROR: 0x82581C78
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82581C60"))) PPC_WEAK_FUNC(sub_82581C60);
PPC_FUNC_IMPL(__imp__sub_82581C60) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581C68"))) PPC_WEAK_FUNC(sub_82581C68);
PPC_FUNC_IMPL(__imp__sub_82581C68) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

