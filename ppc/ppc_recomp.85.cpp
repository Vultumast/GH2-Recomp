#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822CF974"))) PPC_WEAK_FUNC(sub_822CF974);
PPC_FUNC_IMPL(__imp__sub_822CF974) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8388
	r11.s64 = r11.s64 + -8388;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8388
	ctx.r10.s64 = ctx.r10.s64 + -8388;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CF99C"))) PPC_WEAK_FUNC(sub_822CF99C);
PPC_FUNC_IMPL(__imp__sub_822CF99C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8388
	r11.s64 = r11.s64 + -8388;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8388
	ctx.r10.s64 = ctx.r10.s64 + -8388;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CF9C4"))) PPC_WEAK_FUNC(sub_822CF9C4);
PPC_FUNC_IMPL(__imp__sub_822CF9C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8388
	r11.s64 = r11.s64 + -8388;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8388
	ctx.r10.s64 = ctx.r10.s64 + -8388;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CF9EC"))) PPC_WEAK_FUNC(sub_822CF9EC);
PPC_FUNC_IMPL(__imp__sub_822CF9EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8388
	r11.s64 = r11.s64 + -8388;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8388
	ctx.r10.s64 = ctx.r10.s64 + -8388;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CFA14"))) PPC_WEAK_FUNC(sub_822CFA14);
PPC_FUNC_IMPL(__imp__sub_822CFA14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8388
	r11.s64 = r11.s64 + -8388;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8388
	ctx.r10.s64 = ctx.r10.s64 + -8388;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CFA3C"))) PPC_WEAK_FUNC(sub_822CFA3C);
PPC_FUNC_IMPL(__imp__sub_822CFA3C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CFA64"))) PPC_WEAK_FUNC(sub_822CFA64);
PPC_FUNC_IMPL(__imp__sub_822CFA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CFA68"))) PPC_WEAK_FUNC(sub_822CFA68);
PPC_FUNC_IMPL(__imp__sub_822CFA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,27008(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27008);
	// mflr r12
	// bl 0x8239bcec
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,128(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 128);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822cfaa4
	if (cr0.eq) goto loc_822CFAA4;
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822e1f28
	sub_822E1F28(ctx, base);
	// b 0x822cfd00
	goto loc_822CFD00;
loc_822CFAA4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822cec60
	sub_822CEC60(ctx, base);
	// lbz r11,164(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 164);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822cfacc
	if (cr0.eq) goto loc_822CFACC;
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822e1f28
	sub_822E1F28(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// b 0x822cfae4
	goto loc_822CFAE4;
loc_822CFACC:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * f0.f64));
loc_822CFAE4:
	// lbz r11,129(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 129);
	// li r25,0
	r25.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822cfb74
	if (!cr0.eq) goto loc_822CFB74;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822ceb70
	sub_822CEB70(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cfb74
	if (cr0.eq) goto loc_822CFB74;
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82338a48
	sub_82338A48(ctx, base);
	// addi r30,r29,132
	r30.s64 = r29.s64 + 132;
	// mr r27,r25
	r27.u64 = r25.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cfb68
	if (cr0.eq) goto loc_822CFB68;
	// addi r26,r29,44
	r26.s64 = r29.s64 + 44;
	// mr r28,r25
	r28.u64 = r25.u64;
loc_822CFB34:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x822e2510
	sub_822E2510(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x822cfb34
	if (cr6.lt) goto loc_822CFB34;
loc_822CFB68:
	// lwz r3,144(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822c9c08
	sub_822C9C08(ctx, base);
loc_822CFB74:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-9288(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82331698
	sub_82331698(ctx, base);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 176);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r8,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x822cfbe0
	if (!cr6.lt) goto loc_822CFBE0;
loc_822CFBA8:
	// lwz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 176);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x822cfbe0
	if (cr6.gt) goto loc_822CFBE0;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r10,176(r29)
	PPC_STORE_U32(r29.u32 + 176, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,176(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 176);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r9,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x822cfba8
	if (cr6.lt) goto loc_822CFBA8;
loc_822CFBE0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 176);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x822cfcfc
	if (!cr6.lt) goto loc_822CFCFC;
	// rlwinm r11,r9,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 180);
	// lbz r28,14(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + 14);
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// beq cr6,0x822cfcfc
	if (cr6.eq) goto loc_822CFCFC;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-8376(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8376);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-8384
	r30.s64 = ctx.r9.s64 + -8384;
	// bne 0x822cfc80
	if (!cr0.eq) goto loc_822CFC80;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8376, r11.u32);
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,26960
	ctx.r4.s64 = r11.s64 + 26960;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cfc74
	if (cr0.eq) goto loc_822CFC74;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CFC74:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14464
	ctx.r3.s64 = r11.s64 + 14464;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CFC80:
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// stw r25,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r25.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cfcb0
	if (cr0.eq) goto loc_822CFCB0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CFCB0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r11,-8684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cfcf8
	if (cr0.eq) goto loc_822CFCF8;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CFCF8:
	// stw r28,180(r29)
	PPC_STORE_U32(r29.u32 + 180, r28.u32);
loc_822CFCFC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_822CFD00:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822CFA70"))) PPC_WEAK_FUNC(sub_822CFA70);
PPC_FUNC_IMPL(__imp__sub_822CFA70) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,128(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 128);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822cfaa4
	if (cr0.eq) goto loc_822CFAA4;
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822e1f28
	sub_822E1F28(ctx, base);
	// b 0x822cfd00
	goto loc_822CFD00;
loc_822CFAA4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822cec60
	sub_822CEC60(ctx, base);
	// lbz r11,164(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 164);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822cfacc
	if (cr0.eq) goto loc_822CFACC;
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822e1f28
	sub_822E1F28(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// b 0x822cfae4
	goto loc_822CFAE4;
loc_822CFACC:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * f0.f64));
loc_822CFAE4:
	// lbz r11,129(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 129);
	// li r25,0
	r25.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822cfb74
	if (!cr0.eq) goto loc_822CFB74;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822ceb70
	sub_822CEB70(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cfb74
	if (cr0.eq) goto loc_822CFB74;
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82338a48
	sub_82338A48(ctx, base);
	// addi r30,r29,132
	r30.s64 = r29.s64 + 132;
	// mr r27,r25
	r27.u64 = r25.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cfb68
	if (cr0.eq) goto loc_822CFB68;
	// addi r26,r29,44
	r26.s64 = r29.s64 + 44;
	// mr r28,r25
	r28.u64 = r25.u64;
loc_822CFB34:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x822e2510
	sub_822E2510(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x822cfb34
	if (cr6.lt) goto loc_822CFB34;
loc_822CFB68:
	// lwz r3,144(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822c9c08
	sub_822C9C08(ctx, base);
loc_822CFB74:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-9288(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82331698
	sub_82331698(ctx, base);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 176);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r8,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x822cfbe0
	if (!cr6.lt) goto loc_822CFBE0;
loc_822CFBA8:
	// lwz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 176);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x822cfbe0
	if (cr6.gt) goto loc_822CFBE0;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r10,176(r29)
	PPC_STORE_U32(r29.u32 + 176, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,176(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 176);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r9,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x822cfba8
	if (cr6.lt) goto loc_822CFBA8;
loc_822CFBE0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 176);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x822cfcfc
	if (!cr6.lt) goto loc_822CFCFC;
	// rlwinm r11,r9,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 180);
	// lbz r28,14(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + 14);
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// beq cr6,0x822cfcfc
	if (cr6.eq) goto loc_822CFCFC;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-8376(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8376);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-8384
	r30.s64 = ctx.r9.s64 + -8384;
	// bne 0x822cfc80
	if (!cr0.eq) goto loc_822CFC80;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8376, r11.u32);
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,26960
	ctx.r4.s64 = r11.s64 + 26960;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cfc74
	if (cr0.eq) goto loc_822CFC74;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CFC74:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14464
	ctx.r3.s64 = r11.s64 + 14464;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CFC80:
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// stw r25,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r25.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cfcb0
	if (cr0.eq) goto loc_822CFCB0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CFCB0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r11,-8684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cfcf8
	if (cr0.eq) goto loc_822CFCF8;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CFCF8:
	// stw r28,180(r29)
	PPC_STORE_U32(r29.u32 + 180, r28.u32);
loc_822CFCFC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_822CFD00:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822CFD0C"))) PPC_WEAK_FUNC(sub_822CFD0C);
PPC_FUNC_IMPL(__imp__sub_822CFD0C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8376
	r11.s64 = r11.s64 + -8376;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8376
	ctx.r10.s64 = ctx.r10.s64 + -8376;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CFD34"))) PPC_WEAK_FUNC(sub_822CFD34);
PPC_FUNC_IMPL(__imp__sub_822CFD34) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CFD5C"))) PPC_WEAK_FUNC(sub_822CFD5C);
PPC_FUNC_IMPL(__imp__sub_822CFD5C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CFD84"))) PPC_WEAK_FUNC(sub_822CFD84);
PPC_FUNC_IMPL(__imp__sub_822CFD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CFD88"))) PPC_WEAK_FUNC(sub_822CFD88);
PPC_FUNC_IMPL(__imp__sub_822CFD88) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,27248(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27248);
	// mflr r12
	// bl 0x8239bcc8
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// lwz r11,-2472(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -2472);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// std r9,120(r31)
	PPC_STORE_U64(r31.u32 + 120, ctx.r9.u64);
	// lfd f13,120(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	f0.f64 = double(temp.f32);
	// lwz r11,-8336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8336);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r17,24(r10)
	r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-27476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27476);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r20,r10,-8340
	r20.s64 = ctx.r10.s64 + -8340;
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// fmadds f31,f12,f0,f13
	f31.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// bne 0x822cfe18
	if (!cr0.eq) goto loc_822CFE18;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8336(r30)
	PPC_STORE_U32(r30.u32 + -8336, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r4,r11,27164
	ctx.r4.s64 = r11.s64 + 27164;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8336);
loc_822CFE18:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r16,r10,-8344
	r16.s64 = ctx.r10.s64 + -8344;
	// bne 0x822cfe44
	if (!cr0.eq) goto loc_822CFE44;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8336(r30)
	PPC_STORE_U32(r30.u32 + -8336, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// addi r4,r11,27156
	ctx.r4.s64 = r11.s64 + 27156;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8336);
loc_822CFE44:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r19,r10,-8348
	r19.s64 = ctx.r10.s64 + -8348;
	// bne 0x822cfe70
	if (!cr0.eq) goto loc_822CFE70;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8336(r30)
	PPC_STORE_U32(r30.u32 + -8336, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r4,r11,27148
	ctx.r4.s64 = r11.s64 + 27148;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8336);
loc_822CFE70:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r21,r10,-8352
	r21.s64 = ctx.r10.s64 + -8352;
	// bne 0x822cfe98
	if (!cr0.eq) goto loc_822CFE98;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8336(r30)
	PPC_STORE_U32(r30.u32 + -8336, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r4,r11,27136
	ctx.r4.s64 = r11.s64 + 27136;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822CFE98:
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r9,4(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// lwz r11,116(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 116);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x822d0168
	if (!cr6.lt) goto loc_822D0168;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r26,-32127
	r26.s64 = -2105475072;
	// addi r25,r11,27120
	r25.s64 = r11.s64 + 27120;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r24,-32127
	r24.s64 = -2105475072;
	// addi r28,r11,-8360
	r28.s64 = r11.s64 + -8360;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r23,r11,27108
	r23.s64 = r11.s64 + 27108;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r27,r11,-8372
	r27.s64 = r11.s64 + -8372;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r22,r11,27088
	r22.s64 = r11.s64 + 27088;
loc_822CFEE4:
	// lwz r10,116(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 116);
	// lwz r11,4(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x822d0168
	if (cr6.gt) goto loc_822D0168;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,8
	r29.s64 = r11.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d0054
	if (!cr0.eq) goto loc_822D0054;
	// lwz r11,0(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d0054
	if (!cr0.eq) goto loc_822D0054;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d0054
	if (!cr0.eq) goto loc_822D0054;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d0140
	if (cr0.eq) goto loc_822D0140;
	// lwz r11,-8336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8336);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822cffa0
	if (!cr0.eq) goto loc_822CFFA0;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-8336(r30)
	PPC_STORE_U32(r30.u32 + -8336, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82256270
	sub_82256270(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14560
	ctx.r3.s64 = r11.s64 + 14560;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CFFA0:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82256aa0
	sub_82256AA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d0010
	if (cr0.eq) goto loc_822D0010;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D0010:
	// lwz r11,-8684(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -8684);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d0140
	if (cr0.eq) goto loc_822D0140;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x822d013c
	goto loc_822D013C;
loc_822D0054:
	// lwz r11,-8336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8336);
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822d0088
	if (!cr0.eq) goto loc_822D0088;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8336(r30)
	PPC_STORE_U32(r30.u32 + -8336, r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// stw r3,-8364(r24)
	PPC_STORE_U32(r24.u32 + -8364, ctx.r3.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x822d008c
	goto loc_822D008C;
loc_822D0088:
	// lwz r3,-8364(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -8364);
loc_822D008C:
	// li r11,5
	r11.s64 = 5;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d00b4
	if (cr0.eq) goto loc_822D00B4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D00B4:
	// lwz r11,-8336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8336);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822d00e0
	if (!cr0.eq) goto loc_822D00E0;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-8336(r30)
	PPC_STORE_U32(r30.u32 + -8336, r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82256270
	sub_82256270(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14592
	ctx.r3.s64 = r11.s64 + 14592;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822D00E0:
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82256aa0
	sub_82256AA0(ctx, base);
	// lwz r11,-8684(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -8684);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d0140
	if (cr0.eq) goto loc_822D0140;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
loc_822D013C:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D0140:
	// lwz r11,116(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 116);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,116(r18)
	PPC_STORE_U32(r18.u32 + 116, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r9,4(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x822cfee4
	if (cr6.lt) goto loc_822CFEE4;
loc_822D0168:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_822CFD90"))) PPC_WEAK_FUNC(sub_822CFD90);
PPC_FUNC_IMPL(__imp__sub_822CFD90) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc8
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// lwz r11,-2472(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -2472);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// std r9,120(r31)
	PPC_STORE_U64(r31.u32 + 120, ctx.r9.u64);
	// lfd f13,120(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	f0.f64 = double(temp.f32);
	// lwz r11,-8336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8336);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r17,24(r10)
	r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-27476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27476);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r20,r10,-8340
	r20.s64 = ctx.r10.s64 + -8340;
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// fmadds f31,f12,f0,f13
	f31.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// bne 0x822cfe18
	if (!cr0.eq) goto loc_822CFE18;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8336(r30)
	PPC_STORE_U32(r30.u32 + -8336, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r4,r11,27164
	ctx.r4.s64 = r11.s64 + 27164;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8336);
loc_822CFE18:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r16,r10,-8344
	r16.s64 = ctx.r10.s64 + -8344;
	// bne 0x822cfe44
	if (!cr0.eq) goto loc_822CFE44;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8336(r30)
	PPC_STORE_U32(r30.u32 + -8336, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// addi r4,r11,27156
	ctx.r4.s64 = r11.s64 + 27156;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8336);
loc_822CFE44:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r19,r10,-8348
	r19.s64 = ctx.r10.s64 + -8348;
	// bne 0x822cfe70
	if (!cr0.eq) goto loc_822CFE70;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8336(r30)
	PPC_STORE_U32(r30.u32 + -8336, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r4,r11,27148
	ctx.r4.s64 = r11.s64 + 27148;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8336);
loc_822CFE70:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r21,r10,-8352
	r21.s64 = ctx.r10.s64 + -8352;
	// bne 0x822cfe98
	if (!cr0.eq) goto loc_822CFE98;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8336(r30)
	PPC_STORE_U32(r30.u32 + -8336, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r4,r11,27136
	ctx.r4.s64 = r11.s64 + 27136;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822CFE98:
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r9,4(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// lwz r11,116(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 116);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x822d0168
	if (!cr6.lt) goto loc_822D0168;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r26,-32127
	r26.s64 = -2105475072;
	// addi r25,r11,27120
	r25.s64 = r11.s64 + 27120;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r24,-32127
	r24.s64 = -2105475072;
	// addi r28,r11,-8360
	r28.s64 = r11.s64 + -8360;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r23,r11,27108
	r23.s64 = r11.s64 + 27108;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r27,r11,-8372
	r27.s64 = r11.s64 + -8372;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r22,r11,27088
	r22.s64 = r11.s64 + 27088;
loc_822CFEE4:
	// lwz r10,116(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 116);
	// lwz r11,4(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x822d0168
	if (cr6.gt) goto loc_822D0168;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,8
	r29.s64 = r11.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d0054
	if (!cr0.eq) goto loc_822D0054;
	// lwz r11,0(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d0054
	if (!cr0.eq) goto loc_822D0054;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d0054
	if (!cr0.eq) goto loc_822D0054;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d0140
	if (cr0.eq) goto loc_822D0140;
	// lwz r11,-8336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8336);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822cffa0
	if (!cr0.eq) goto loc_822CFFA0;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-8336(r30)
	PPC_STORE_U32(r30.u32 + -8336, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82256270
	sub_82256270(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14560
	ctx.r3.s64 = r11.s64 + 14560;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CFFA0:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82256aa0
	sub_82256AA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d0010
	if (cr0.eq) goto loc_822D0010;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D0010:
	// lwz r11,-8684(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -8684);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d0140
	if (cr0.eq) goto loc_822D0140;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x822d013c
	goto loc_822D013C;
loc_822D0054:
	// lwz r11,-8336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8336);
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822d0088
	if (!cr0.eq) goto loc_822D0088;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8336(r30)
	PPC_STORE_U32(r30.u32 + -8336, r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// stw r3,-8364(r24)
	PPC_STORE_U32(r24.u32 + -8364, ctx.r3.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x822d008c
	goto loc_822D008C;
loc_822D0088:
	// lwz r3,-8364(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -8364);
loc_822D008C:
	// li r11,5
	r11.s64 = 5;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d00b4
	if (cr0.eq) goto loc_822D00B4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D00B4:
	// lwz r11,-8336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8336);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822d00e0
	if (!cr0.eq) goto loc_822D00E0;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-8336(r30)
	PPC_STORE_U32(r30.u32 + -8336, r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82256270
	sub_82256270(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14592
	ctx.r3.s64 = r11.s64 + 14592;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822D00E0:
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82256aa0
	sub_82256AA0(ctx, base);
	// lwz r11,-8684(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -8684);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d0140
	if (cr0.eq) goto loc_822D0140;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
loc_822D013C:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D0140:
	// lwz r11,116(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 116);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,116(r18)
	PPC_STORE_U32(r18.u32 + 116, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r9,4(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x822cfee4
	if (cr6.lt) goto loc_822CFEE4;
loc_822D0168:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_822D0174"))) PPC_WEAK_FUNC(sub_822D0174);
PPC_FUNC_IMPL(__imp__sub_822D0174) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8336
	r11.s64 = r11.s64 + -8336;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8336
	ctx.r10.s64 = ctx.r10.s64 + -8336;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D019C"))) PPC_WEAK_FUNC(sub_822D019C);
PPC_FUNC_IMPL(__imp__sub_822D019C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8336
	r11.s64 = r11.s64 + -8336;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8336
	ctx.r10.s64 = ctx.r10.s64 + -8336;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D01C4"))) PPC_WEAK_FUNC(sub_822D01C4);
PPC_FUNC_IMPL(__imp__sub_822D01C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8336
	r11.s64 = r11.s64 + -8336;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8336
	ctx.r10.s64 = ctx.r10.s64 + -8336;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D01EC"))) PPC_WEAK_FUNC(sub_822D01EC);
PPC_FUNC_IMPL(__imp__sub_822D01EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8336
	r11.s64 = r11.s64 + -8336;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8336
	ctx.r10.s64 = ctx.r10.s64 + -8336;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0214"))) PPC_WEAK_FUNC(sub_822D0214);
PPC_FUNC_IMPL(__imp__sub_822D0214) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8336
	r11.s64 = r11.s64 + -8336;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8336
	ctx.r10.s64 = ctx.r10.s64 + -8336;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D023C"))) PPC_WEAK_FUNC(sub_822D023C);
PPC_FUNC_IMPL(__imp__sub_822D023C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-272
	r31.s64 = r12.s64 + -272;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0264"))) PPC_WEAK_FUNC(sub_822D0264);
PPC_FUNC_IMPL(__imp__sub_822D0264) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8336
	r11.s64 = r11.s64 + -8336;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8336
	ctx.r10.s64 = ctx.r10.s64 + -8336;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D028C"))) PPC_WEAK_FUNC(sub_822D028C);
PPC_FUNC_IMPL(__imp__sub_822D028C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-272
	r31.s64 = r12.s64 + -272;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D02B4"))) PPC_WEAK_FUNC(sub_822D02B4);
PPC_FUNC_IMPL(__imp__sub_822D02B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8336
	r11.s64 = r11.s64 + -8336;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8336
	ctx.r10.s64 = ctx.r10.s64 + -8336;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D02DC"))) PPC_WEAK_FUNC(sub_822D02DC);
PPC_FUNC_IMPL(__imp__sub_822D02DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D02E0"))) PPC_WEAK_FUNC(sub_822D02E0);
PPC_FUNC_IMPL(__imp__sub_822D02E0) {
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
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r28.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// blt cr6,0x822d0328
	if (cr6.lt) goto loc_822D0328;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_822D0328:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r27,r31,8
	r27.s64 = r31.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x822ce9b0
	sub_822CE9B0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x822d0360
	if (cr0.eq) goto loc_822D0360;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_822D0360:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x822d0380
	if (cr6.eq) goto loc_822D0380;
loc_822D036C:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x822d036c
	if (!cr0.eq) goto loc_822D036C;
loc_822D0380:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x822d03a8
	if (!cr0.eq) goto loc_822D03A8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x822d03a8
	if (cr0.eq) goto loc_822D03A8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_822D03A8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_822D03DC"))) PPC_WEAK_FUNC(sub_822D03DC);
PPC_FUNC_IMPL(__imp__sub_822D03DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D03E0"))) PPC_WEAK_FUNC(sub_822D03E0);
PPC_FUNC_IMPL(__imp__sub_822D03E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,27512(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27512);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// lis r25,-32127
	r25.s64 = -2105475072;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,52(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 52);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x822d05a0
	if (cr6.eq) goto loc_822D05A0;
	// lwz r11,-8304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8304);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r10,27440
	r28.s64 = ctx.r10.s64 + 27440;
	// bne 0x822d0458
	if (!cr0.eq) goto loc_822D0458;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8304(r30)
	PPC_STORE_U32(r30.u32 + -8304, r11.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// stw r3,-8308(r29)
	PPC_STORE_U32(r29.u32 + -8308, ctx.r3.u32);
	// b 0x822d045c
	goto loc_822D045C;
loc_822D0458:
	// lwz r3,-8308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -8308);
loc_822D045C:
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// li r10,480
	ctx.r10.s64 = 480;
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d049c
	if (cr0.eq) goto loc_822D049C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D049C:
	// lwz r11,-8304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8304);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822d04d4
	if (!cr0.eq) goto loc_822D04D4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8304(r30)
	PPC_STORE_U32(r30.u32 + -8304, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,27428
	ctx.r4.s64 = r11.s64 + 27428;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// stw r3,-8312(r29)
	PPC_STORE_U32(r29.u32 + -8312, ctx.r3.u32);
	// b 0x822d04d8
	goto loc_822D04D8;
loc_822D04D4:
	// lwz r3,-8312(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -8312);
loc_822D04D8:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822d04ec
	if (!cr0.eq) goto loc_822D04EC;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x822d04f4
	goto loc_822D04F4;
loc_822D04EC:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_822D04F4:
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r26,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r26.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d0518
	if (cr0.eq) goto loc_822D0518;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D0518:
	// lwz r11,-8304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8304);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8320
	r29.s64 = ctx.r10.s64 + -8320;
	// bne 0x822d055c
	if (!cr0.eq) goto loc_822D055C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8304(r30)
	PPC_STORE_U32(r30.u32 + -8304, r11.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14528
	ctx.r3.s64 = r11.s64 + 14528;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822D055C:
	// lwz r11,-8684(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -8684);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d05a0
	if (cr0.eq) goto loc_822D05A0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D05A0:
	// lwz r11,48(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 48);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x822d06a0
	if (cr6.eq) goto loc_822D06A0;
	// lwz r11,-8304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8304);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822d05e8
	if (!cr0.eq) goto loc_822D05E8;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8304(r30)
	PPC_STORE_U32(r30.u32 + -8304, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,27420
	ctx.r4.s64 = r11.s64 + 27420;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// stw r3,-8324(r29)
	PPC_STORE_U32(r29.u32 + -8324, ctx.r3.u32);
	// b 0x822d05ec
	goto loc_822D05EC;
loc_822D05E8:
	// lwz r3,-8324(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -8324);
loc_822D05EC:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r26,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r26.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d0614
	if (cr0.eq) goto loc_822D0614;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D0614:
	// lwz r11,-8304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8304);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8332
	r29.s64 = ctx.r10.s64 + -8332;
	// bne 0x822d065c
	if (!cr0.eq) goto loc_822D065C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8304(r30)
	PPC_STORE_U32(r30.u32 + -8304, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,27408
	ctx.r4.s64 = r11.s64 + 27408;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14496
	ctx.r3.s64 = r11.s64 + 14496;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822D065C:
	// lwz r11,-8684(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -8684);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d06a0
	if (cr0.eq) goto loc_822D06A0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D06A0:
	// addi r10,r24,44
	ctx.r10.s64 = r24.s64 + 44;
	// mr r11,r27
	r11.u64 = r27.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_822D06B0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822d06b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_822D06B0;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822cfd90
	sub_822CFD90(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822D03E8"))) PPC_WEAK_FUNC(sub_822D03E8);
PPC_FUNC_IMPL(__imp__sub_822D03E8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// lis r25,-32127
	r25.s64 = -2105475072;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,52(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 52);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x822d05a0
	if (cr6.eq) goto loc_822D05A0;
	// lwz r11,-8304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8304);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r10,27440
	r28.s64 = ctx.r10.s64 + 27440;
	// bne 0x822d0458
	if (!cr0.eq) goto loc_822D0458;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8304(r30)
	PPC_STORE_U32(r30.u32 + -8304, r11.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// stw r3,-8308(r29)
	PPC_STORE_U32(r29.u32 + -8308, ctx.r3.u32);
	// b 0x822d045c
	goto loc_822D045C;
loc_822D0458:
	// lwz r3,-8308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -8308);
loc_822D045C:
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// li r10,480
	ctx.r10.s64 = 480;
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d049c
	if (cr0.eq) goto loc_822D049C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D049C:
	// lwz r11,-8304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8304);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822d04d4
	if (!cr0.eq) goto loc_822D04D4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8304(r30)
	PPC_STORE_U32(r30.u32 + -8304, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,27428
	ctx.r4.s64 = r11.s64 + 27428;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// stw r3,-8312(r29)
	PPC_STORE_U32(r29.u32 + -8312, ctx.r3.u32);
	// b 0x822d04d8
	goto loc_822D04D8;
loc_822D04D4:
	// lwz r3,-8312(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -8312);
loc_822D04D8:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822d04ec
	if (!cr0.eq) goto loc_822D04EC;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x822d04f4
	goto loc_822D04F4;
loc_822D04EC:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_822D04F4:
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r26,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r26.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d0518
	if (cr0.eq) goto loc_822D0518;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D0518:
	// lwz r11,-8304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8304);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8320
	r29.s64 = ctx.r10.s64 + -8320;
	// bne 0x822d055c
	if (!cr0.eq) goto loc_822D055C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8304(r30)
	PPC_STORE_U32(r30.u32 + -8304, r11.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14528
	ctx.r3.s64 = r11.s64 + 14528;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822D055C:
	// lwz r11,-8684(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -8684);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d05a0
	if (cr0.eq) goto loc_822D05A0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D05A0:
	// lwz r11,48(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 48);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x822d06a0
	if (cr6.eq) goto loc_822D06A0;
	// lwz r11,-8304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8304);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822d05e8
	if (!cr0.eq) goto loc_822D05E8;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8304(r30)
	PPC_STORE_U32(r30.u32 + -8304, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,27420
	ctx.r4.s64 = r11.s64 + 27420;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// stw r3,-8324(r29)
	PPC_STORE_U32(r29.u32 + -8324, ctx.r3.u32);
	// b 0x822d05ec
	goto loc_822D05EC;
loc_822D05E8:
	// lwz r3,-8324(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -8324);
loc_822D05EC:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r26,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r26.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d0614
	if (cr0.eq) goto loc_822D0614;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D0614:
	// lwz r11,-8304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8304);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8332
	r29.s64 = ctx.r10.s64 + -8332;
	// bne 0x822d065c
	if (!cr0.eq) goto loc_822D065C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8304(r30)
	PPC_STORE_U32(r30.u32 + -8304, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,27408
	ctx.r4.s64 = r11.s64 + 27408;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14496
	ctx.r3.s64 = r11.s64 + 14496;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822D065C:
	// lwz r11,-8684(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -8684);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d06a0
	if (cr0.eq) goto loc_822D06A0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D06A0:
	// addi r10,r24,44
	ctx.r10.s64 = r24.s64 + 44;
	// mr r11,r27
	r11.u64 = r27.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_822D06B0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822d06b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_822D06B0;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822cfd90
	sub_822CFD90(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822D06E8"))) PPC_WEAK_FUNC(sub_822D06E8);
PPC_FUNC_IMPL(__imp__sub_822D06E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8304
	r11.s64 = r11.s64 + -8304;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0710"))) PPC_WEAK_FUNC(sub_822D0710);
PPC_FUNC_IMPL(__imp__sub_822D0710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0738"))) PPC_WEAK_FUNC(sub_822D0738);
PPC_FUNC_IMPL(__imp__sub_822D0738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8304
	r11.s64 = r11.s64 + -8304;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0760"))) PPC_WEAK_FUNC(sub_822D0760);
PPC_FUNC_IMPL(__imp__sub_822D0760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0788"))) PPC_WEAK_FUNC(sub_822D0788);
PPC_FUNC_IMPL(__imp__sub_822D0788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8304
	r11.s64 = r11.s64 + -8304;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D07B0"))) PPC_WEAK_FUNC(sub_822D07B0);
PPC_FUNC_IMPL(__imp__sub_822D07B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8304
	r11.s64 = r11.s64 + -8304;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D07D8"))) PPC_WEAK_FUNC(sub_822D07D8);
PPC_FUNC_IMPL(__imp__sub_822D07D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0800"))) PPC_WEAK_FUNC(sub_822D0800);
PPC_FUNC_IMPL(__imp__sub_822D0800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8304
	r11.s64 = r11.s64 + -8304;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0828"))) PPC_WEAK_FUNC(sub_822D0828);
PPC_FUNC_IMPL(__imp__sub_822D0828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x822d0868
	if (cr6.eq) goto loc_822D0868;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d0858
	if (cr0.eq) goto loc_822D0858;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_822D0858:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x822d087c
	goto loc_822D087C;
loc_822D0868:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x822d02e0
	sub_822D02E0(ctx, base);
loc_822D087C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D088C"))) PPC_WEAK_FUNC(sub_822D088C);
PPC_FUNC_IMPL(__imp__sub_822D088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0890"))) PPC_WEAK_FUNC(sub_822D0890);
PPC_FUNC_IMPL(__imp__sub_822D0890) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x822d08d8
	if (cr6.eq) goto loc_822D08D8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x822d08d0
	if (cr0.eq) goto loc_822D08D0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x822d08d4
	goto loc_822D08D4;
loc_822D08D0:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_822D08D4:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822D08D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D08E4"))) PPC_WEAK_FUNC(sub_822D08E4);
PPC_FUNC_IMPL(__imp__sub_822D08E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D08E8"))) PPC_WEAK_FUNC(sub_822D08E8);
PPC_FUNC_IMPL(__imp__sub_822D08E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,27888(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27888);
	// mflr r12
	// bl 0x8239bcdc
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,26336
	r11.s64 = r11.s64 + 26336;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r27,r30,4
	r27.s64 = r30.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,27796
	r11.s64 = r11.s64 + 27796;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r26,r30,64
	r26.s64 = r30.s64 + 64;
	// addi r10,r10,27732
	ctx.r10.s64 = ctx.r10.s64 + 27732;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822bce10
	sub_822BCE10(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r29,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r29.u32);
	// addi r24,r11,27716
	r24.s64 = r11.s64 + 27716;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r23,1
	r23.s64 = 1;
	// addi r25,r30,132
	r25.s64 = r30.s64 + 132;
	// stw r3,120(r30)
	PPC_STORE_U32(r30.u32 + 120, ctx.r3.u32);
	// stb r29,129(r30)
	PPC_STORE_U8(r30.u32 + 129, r29.u8);
	// stb r23,128(r30)
	PPC_STORE_U8(r30.u32 + 128, r23.u8);
	// stw r29,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r29.u32);
	// stw r29,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r29.u32);
	// stw r29,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r29.u32);
	// addi r3,r30,148
	ctx.r3.s64 = r30.s64 + 148;
	// bl 0x822e4878
	sub_822E4878(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r21,-32127
	r21.s64 = -2105475072;
	// stb r23,164(r30)
	PPC_STORE_U8(r30.u32 + 164, r23.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stfs f0,168(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 168, temp.u32);
	// lwz r5,-2968(r21)
	ctx.r5.u64 = PPC_LOAD_U32(r21.u32 + -2968);
	// stw r26,-9288(r11)
	PPC_STORE_U32(r11.u32 + -9288, r26.u32);
	// bl 0x82315150
	sub_82315150(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d0a08
	if (cr0.eq) goto loc_822D0A08;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// bl 0x82338c78
	sub_82338C78(ctx, base);
	// b 0x822d0a0c
	goto loc_822D0A0C;
loc_822D0A08:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822D0A0C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r3,124(r30)
	PPC_STORE_U32(r30.u32 + 124, ctx.r3.u32);
	// bl 0x823390b0
	sub_823390B0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,27708
	ctx.r4.s64 = r11.s64 + 27708;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,27696
	ctx.r4.s64 = r11.s64 + 27696;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x82338518
	sub_82338518(ctx, base);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x82699e60
	sub_82699E60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ceab0
	sub_822CEAB0(ctx, base);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b57c0
	sub_822B57C0(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d0aa8
	if (cr0.eq) goto loc_822D0AA8;
	// lwz r4,-9608(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822c9e80
	sub_822C9E80(ctx, base);
	// b 0x822d0aac
	goto loc_822D0AAC;
loc_822D0AA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822D0AAC:
	// stw r3,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// mr r26,r29
	r26.u64 = r29.u64;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822d0b94
	if (!cr0.gt) goto loc_822D0B94;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r22,r11,27676
	r22.s64 = r11.s64 + 27676;
loc_822D0ACC:
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
	// beq 0x822d0b10
	if (cr0.eq) goto loc_822D0B10;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// bl 0x822c9bd8
	sub_822C9BD8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,120(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,124(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x822e44b0
	sub_822E44B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x822d0b14
	goto loc_822D0B14;
loc_822D0B10:
	// mr r27,r29
	r27.u64 = r29.u64;
loc_822D0B14:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r24,-2968(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + -2968);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r23,4(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,44(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 44);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822d0828
	sub_822D0828(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// bl 0x822b5400
	sub_822B5400(ctx, base);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r26,r3
	cr6.compare<int32_t>(r26.s32, ctx.r3.s32, xer);
	// blt cr6,0x822d0acc
	if (cr6.lt) goto loc_822D0ACC;
loc_822D0B94:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cea18
	sub_822CEA18(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-9836(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9836);
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822cf2e0
	sub_822CF2E0(ctx, base);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// mr r27,r29
	r27.u64 = r29.u64;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822d0c08
	if (!cr0.gt) goto loc_822D0C08;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_822D0BC8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r24,0(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5728
	sub_822B5728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r26,r24
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r24.u32);
	// bl 0x822e2078
	sub_822E2078(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// bl 0x822e3d88
	sub_822E3D88(ctx, base);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r27,r3
	cr6.compare<int32_t>(r27.s32, ctx.r3.s32, xer);
	// blt cr6,0x822d0bc8
	if (cr6.lt) goto loc_822D0BC8;
loc_822D0C08:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,12292
	ctx.r4.s64 = r11.s64 + 12292;
	// lwz r11,-9608(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// lwz r28,24(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823347b8
	sub_823347B8(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d0c54
	if (cr0.eq) goto loc_822D0C54;
	// bl 0x822f8008
	sub_822F8008(ctx, base);
	// b 0x822d0c58
	goto loc_822D0C58;
loc_822D0C54:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822D0C58:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r3,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// addi r4,r11,27664
	ctx.r4.s64 = r11.s64 + 27664;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,-2968(r21)
	ctx.r5.u64 = PPC_LOAD_U32(r21.u32 + -2968);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// lwz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x822f7f78
	sub_822F7F78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_822D08F0"))) PPC_WEAK_FUNC(sub_822D08F0);
PPC_FUNC_IMPL(__imp__sub_822D08F0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcdc
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,26336
	r11.s64 = r11.s64 + 26336;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r27,r30,4
	r27.s64 = r30.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,27796
	r11.s64 = r11.s64 + 27796;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r26,r30,64
	r26.s64 = r30.s64 + 64;
	// addi r10,r10,27732
	ctx.r10.s64 = ctx.r10.s64 + 27732;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822bce10
	sub_822BCE10(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r29,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r29.u32);
	// addi r24,r11,27716
	r24.s64 = r11.s64 + 27716;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r23,1
	r23.s64 = 1;
	// addi r25,r30,132
	r25.s64 = r30.s64 + 132;
	// stw r3,120(r30)
	PPC_STORE_U32(r30.u32 + 120, ctx.r3.u32);
	// stb r29,129(r30)
	PPC_STORE_U8(r30.u32 + 129, r29.u8);
	// stb r23,128(r30)
	PPC_STORE_U8(r30.u32 + 128, r23.u8);
	// stw r29,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r29.u32);
	// stw r29,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r29.u32);
	// stw r29,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r29.u32);
	// addi r3,r30,148
	ctx.r3.s64 = r30.s64 + 148;
	// bl 0x822e4878
	sub_822E4878(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r21,-32127
	r21.s64 = -2105475072;
	// stb r23,164(r30)
	PPC_STORE_U8(r30.u32 + 164, r23.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stfs f0,168(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 168, temp.u32);
	// lwz r5,-2968(r21)
	ctx.r5.u64 = PPC_LOAD_U32(r21.u32 + -2968);
	// stw r26,-9288(r11)
	PPC_STORE_U32(r11.u32 + -9288, r26.u32);
	// bl 0x82315150
	sub_82315150(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d0a08
	if (cr0.eq) goto loc_822D0A08;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// bl 0x82338c78
	sub_82338C78(ctx, base);
	// b 0x822d0a0c
	goto loc_822D0A0C;
loc_822D0A08:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822D0A0C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r3,124(r30)
	PPC_STORE_U32(r30.u32 + 124, ctx.r3.u32);
	// bl 0x823390b0
	sub_823390B0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,27708
	ctx.r4.s64 = r11.s64 + 27708;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,27696
	ctx.r4.s64 = r11.s64 + 27696;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x82338518
	sub_82338518(ctx, base);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x82699e60
	sub_82699E60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ceab0
	sub_822CEAB0(ctx, base);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b57c0
	sub_822B57C0(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d0aa8
	if (cr0.eq) goto loc_822D0AA8;
	// lwz r4,-9608(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822c9e80
	sub_822C9E80(ctx, base);
	// b 0x822d0aac
	goto loc_822D0AAC;
loc_822D0AA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822D0AAC:
	// stw r3,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// mr r26,r29
	r26.u64 = r29.u64;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822d0b94
	if (!cr0.gt) goto loc_822D0B94;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r22,r11,27676
	r22.s64 = r11.s64 + 27676;
loc_822D0ACC:
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
	// beq 0x822d0b10
	if (cr0.eq) goto loc_822D0B10;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// bl 0x822c9bd8
	sub_822C9BD8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,120(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,124(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x822e44b0
	sub_822E44B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x822d0b14
	goto loc_822D0B14;
loc_822D0B10:
	// mr r27,r29
	r27.u64 = r29.u64;
loc_822D0B14:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r24,-2968(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + -2968);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r23,4(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,44(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 44);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822d0828
	sub_822D0828(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// bl 0x822b5400
	sub_822B5400(ctx, base);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r26,r3
	cr6.compare<int32_t>(r26.s32, ctx.r3.s32, xer);
	// blt cr6,0x822d0acc
	if (cr6.lt) goto loc_822D0ACC;
loc_822D0B94:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cea18
	sub_822CEA18(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-9836(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9836);
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822cf2e0
	sub_822CF2E0(ctx, base);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// mr r27,r29
	r27.u64 = r29.u64;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822d0c08
	if (!cr0.gt) goto loc_822D0C08;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_822D0BC8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r24,0(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5728
	sub_822B5728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r26,r24
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r24.u32);
	// bl 0x822e2078
	sub_822E2078(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// bl 0x822e3d88
	sub_822E3D88(ctx, base);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r27,r3
	cr6.compare<int32_t>(r27.s32, ctx.r3.s32, xer);
	// blt cr6,0x822d0bc8
	if (cr6.lt) goto loc_822D0BC8;
loc_822D0C08:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,12292
	ctx.r4.s64 = r11.s64 + 12292;
	// lwz r11,-9608(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// lwz r28,24(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823347b8
	sub_823347B8(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d0c54
	if (cr0.eq) goto loc_822D0C54;
	// bl 0x822f8008
	sub_822F8008(ctx, base);
	// b 0x822d0c58
	goto loc_822D0C58;
loc_822D0C54:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822D0C58:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r3,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// addi r4,r11,27664
	ctx.r4.s64 = r11.s64 + 27664;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,-2968(r21)
	ctx.r5.u64 = PPC_LOAD_U32(r21.u32 + -2968);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// lwz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x822f7f78
	sub_822F7F78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_822D0C9C"))) PPC_WEAK_FUNC(sub_822D0C9C);
PPC_FUNC_IMPL(__imp__sub_822D0C9C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x822ce798
	sub_822CE798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0CC4"))) PPC_WEAK_FUNC(sub_822D0CC4);
PPC_FUNC_IMPL(__imp__sub_822D0CC4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0CF0"))) PPC_WEAK_FUNC(sub_822D0CF0);
PPC_FUNC_IMPL(__imp__sub_822D0CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// bl 0x822bcfd8
	sub_822BCFD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0D1C"))) PPC_WEAK_FUNC(sub_822D0D1C);
PPC_FUNC_IMPL(__imp__sub_822D0D1C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r11,132
	ctx.r3.s64 = r11.s64 + 132;
	// bl 0x8269a918
	sub_8269A918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0D48"))) PPC_WEAK_FUNC(sub_822D0D48);
PPC_FUNC_IMPL(__imp__sub_822D0D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r11,148
	ctx.r3.s64 = r11.s64 + 148;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0D74"))) PPC_WEAK_FUNC(sub_822D0D74);
PPC_FUNC_IMPL(__imp__sub_822D0D74) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0D9C"))) PPC_WEAK_FUNC(sub_822D0D9C);
PPC_FUNC_IMPL(__imp__sub_822D0D9C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0DC4"))) PPC_WEAK_FUNC(sub_822D0DC4);
PPC_FUNC_IMPL(__imp__sub_822D0DC4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0DEC"))) PPC_WEAK_FUNC(sub_822D0DEC);
PPC_FUNC_IMPL(__imp__sub_822D0DEC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0E14"))) PPC_WEAK_FUNC(sub_822D0E14);
PPC_FUNC_IMPL(__imp__sub_822D0E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0E18"))) PPC_WEAK_FUNC(sub_822D0E18);
PPC_FUNC_IMPL(__imp__sub_822D0E18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x822d1080
	sub_822D1080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D0E20"))) PPC_WEAK_FUNC(sub_822D0E20);
PPC_FUNC_IMPL(__imp__sub_822D0E20) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x822ceb18
	sub_822CEB18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822d0890
	sub_822D0890(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0E74"))) PPC_WEAK_FUNC(sub_822D0E74);
PPC_FUNC_IMPL(__imp__sub_822D0E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0E78"))) PPC_WEAK_FUNC(sub_822D0E78);
PPC_FUNC_IMPL(__imp__sub_822D0E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,28080(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28080);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r27,r30,4
	r27.s64 = r30.s64 + 4;
	// addi r11,r11,27796
	r11.s64 = r11.s64 + 27796;
	// addi r10,r10,27732
	ctx.r10.s64 = ctx.r10.s64 + 27732;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// li r28,0
	r28.s64 = 0;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r11,r28
	r11.u64 = r28.u64;
	// stw r11,-9288(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9288, r11.u32);
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d0ee4
	if (cr0.eq) goto loc_822D0EE4;
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
loc_822D0EE4:
	// addi r29,r30,132
	r29.s64 = r30.s64 + 132;
	// stw r28,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d0e20
	sub_822D0E20(ctx, base);
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d0f14
	if (cr0.eq) goto loc_822D0F14;
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
loc_822D0F14:
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// stw r28,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d0f38
	if (cr0.eq) goto loc_822D0F38;
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
loc_822D0F38:
	// stw r28,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r28.u32);
	// addi r3,r30,148
	ctx.r3.s64 = r30.s64 + 148;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822d0f64
	if (cr0.eq) goto loc_822D0F64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822D0F64:
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x822bcfd8
	sub_822BCFD8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,26336
	r11.s64 = r11.s64 + 26336;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822D0E80"))) PPC_WEAK_FUNC(sub_822D0E80);
PPC_FUNC_IMPL(__imp__sub_822D0E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r27,r30,4
	r27.s64 = r30.s64 + 4;
	// addi r11,r11,27796
	r11.s64 = r11.s64 + 27796;
	// addi r10,r10,27732
	ctx.r10.s64 = ctx.r10.s64 + 27732;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// li r28,0
	r28.s64 = 0;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r11,r28
	r11.u64 = r28.u64;
	// stw r11,-9288(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9288, r11.u32);
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d0ee4
	if (cr0.eq) goto loc_822D0EE4;
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
loc_822D0EE4:
	// addi r29,r30,132
	r29.s64 = r30.s64 + 132;
	// stw r28,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d0e20
	sub_822D0E20(ctx, base);
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d0f14
	if (cr0.eq) goto loc_822D0F14;
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
loc_822D0F14:
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// stw r28,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d0f38
	if (cr0.eq) goto loc_822D0F38;
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
loc_822D0F38:
	// stw r28,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r28.u32);
	// addi r3,r30,148
	ctx.r3.s64 = r30.s64 + 148;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822d0f64
	if (cr0.eq) goto loc_822D0F64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822D0F64:
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x822bcfd8
	sub_822BCFD8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,26336
	r11.s64 = r11.s64 + 26336;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822D0F88"))) PPC_WEAK_FUNC(sub_822D0F88);
PPC_FUNC_IMPL(__imp__sub_822D0F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x822ce798
	sub_822CE798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0FB0"))) PPC_WEAK_FUNC(sub_822D0FB0);
PPC_FUNC_IMPL(__imp__sub_822D0FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d0fdc
	if (cr6.eq) goto loc_822D0FDC;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x822d0fe4
	goto loc_822D0FE4;
loc_822D0FDC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822D0FE4:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82317760
	sub_82317760(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0FFC"))) PPC_WEAK_FUNC(sub_822D0FFC);
PPC_FUNC_IMPL(__imp__sub_822D0FFC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// bl 0x822bcfd8
	sub_822BCFD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1028"))) PPC_WEAK_FUNC(sub_822D1028);
PPC_FUNC_IMPL(__imp__sub_822D1028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,132
	ctx.r3.s64 = r11.s64 + 132;
	// bl 0x8269a918
	sub_8269A918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1054"))) PPC_WEAK_FUNC(sub_822D1054);
PPC_FUNC_IMPL(__imp__sub_822D1054) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,148
	ctx.r3.s64 = r11.s64 + 148;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1080"))) PPC_WEAK_FUNC(sub_822D1080);
PPC_FUNC_IMPL(__imp__sub_822D1080) {
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
	// bl 0x822d0e80
	sub_822D0E80(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d10b0
	if (cr0.eq) goto loc_822D10B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822D10B0:
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

__attribute__((alias("__imp__sub_822D10CC"))) PPC_WEAK_FUNC(sub_822D10CC);
PPC_FUNC_IMPL(__imp__sub_822D10CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D10D0"))) PPC_WEAK_FUNC(sub_822D10D0);
PPC_FUNC_IMPL(__imp__sub_822D10D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,28184
	r11.s64 = r11.s64 + 28184;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D10E0"))) PPC_WEAK_FUNC(sub_822D10E0);
PPC_FUNC_IMPL(__imp__sub_822D10E0) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,28184
	r11.s64 = r11.s64 + 28184;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x822d110c
	if (cr0.eq) goto loc_822D110C;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822D110C:
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

__attribute__((alias("__imp__sub_822D1124"))) PPC_WEAK_FUNC(sub_822D1124);
PPC_FUNC_IMPL(__imp__sub_822D1124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1128"))) PPC_WEAK_FUNC(sub_822D1128);
PPC_FUNC_IMPL(__imp__sub_822D1128) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 540);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d1160
	if (cr0.eq) goto loc_822D1160;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x822d1158
	if (!cr6.eq) goto loc_822D1158;
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 472);
	// bl 0x8216a520
	sub_8216A520(ctx, base);
loc_822D1158:
	// li r11,0
	r11.s64 = 0;
	// stw r11,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r11.u32);
loc_822D1160:
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

__attribute__((alias("__imp__sub_822D1174"))) PPC_WEAK_FUNC(sub_822D1174);
PPC_FUNC_IMPL(__imp__sub_822D1174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1178"))) PPC_WEAK_FUNC(sub_822D1178);
PPC_FUNC_IMPL(__imp__sub_822D1178) {
	PPC_FUNC_PROLOGUE();
	// stb r4,545(r3)
	PPC_STORE_U8(ctx.r3.u32 + 545, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1180"))) PPC_WEAK_FUNC(sub_822D1180);
PPC_FUNC_IMPL(__imp__sub_822D1180) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lwz r3,472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// bl 0x8216a588
	sub_8216A588(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x822d11b0
	if (cr6.gt) goto loc_822D11B0;
	// li r11,0
	r11.s64 = 0;
loc_822D11B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D11C4"))) PPC_WEAK_FUNC(sub_822D11C4);
PPC_FUNC_IMPL(__imp__sub_822D11C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D11C8"))) PPC_WEAK_FUNC(sub_822D11C8);
PPC_FUNC_IMPL(__imp__sub_822D11C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,28216(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28216);
	// mflr r12
	// bl 0x8239bcfc
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82311988
	sub_82311988(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f0,560(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 560);
	f0.f64 = double(temp.f32);
	// li r3,40
	ctx.r3.s64 = 40;
	// fadds f30,f0,f31
	f30.f64 = double(float(f0.f64 + f31.f64));
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d1240
	if (cr0.eq) goto loc_822D1240;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f3,28160(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28160);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822e4898
	sub_822E4898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d1244
	goto loc_822D1244;
loc_822D1240:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D1244:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,596
	ctx.r3.s64 = r30.s64 + 596;
	// bl 0x82198348
	sub_82198348(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D11D0"))) PPC_WEAK_FUNC(sub_822D11D0);
PPC_FUNC_IMPL(__imp__sub_822D11D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82311988
	sub_82311988(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f0,560(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 560);
	f0.f64 = double(temp.f32);
	// li r3,40
	ctx.r3.s64 = 40;
	// fadds f30,f0,f31
	f30.f64 = double(float(f0.f64 + f31.f64));
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d1240
	if (cr0.eq) goto loc_822D1240;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f3,28160(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28160);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822e4898
	sub_822E4898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d1244
	goto loc_822D1244;
loc_822D1240:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D1244:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,596
	ctx.r3.s64 = r30.s64 + 596;
	// bl 0x82198348
	sub_82198348(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D1260"))) PPC_WEAK_FUNC(sub_822D1260);
PPC_FUNC_IMPL(__imp__sub_822D1260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1288"))) PPC_WEAK_FUNC(sub_822D1288);
PPC_FUNC_IMPL(__imp__sub_822D1288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r10,-5056
	ctx.r3.s64 = ctx.r10.s64 + -5056;
	// lwz r11,-8684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// lwz r11,824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 824);
	// addi r11,r11,142
	r11.s64 = r11.s64 + 142;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lfs f0,588(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 588);
	f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 - f0.f64));
	// lfsx f13,r30,r31
	temp.u32 = PPC_LOAD_U32(r30.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - f0.f64));
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

__attribute__((alias("__imp__sub_822D12E8"))) PPC_WEAK_FUNC(sub_822D12E8);
PPC_FUNC_IMPL(__imp__sub_822D12E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f1,588(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r29.u32 + 588, temp.u32);
	// li r28,0
	r28.s64 = 0;
	// addi r30,r29,568
	r30.s64 = r29.s64 + 568;
	// lfs f30,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	f30.f64 = double(temp.f32);
loc_822D1320:
	// lwz r11,564(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 564);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bne cr6,0x822d1388
	if (!cr6.eq) goto loc_822D1388;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// b 0x822d1390
	goto loc_822D1390;
loc_822D1388:
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// stfs f30,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
loc_822D1390:
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpwi cr6,r28,40
	cr6.compare<int32_t>(r28.s32, 40, xer);
	// blt cr6,0x822d1320
	if (cr6.lt) goto loc_822D1320;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D13B0"))) PPC_WEAK_FUNC(sub_822D13B0);
PPC_FUNC_IMPL(__imp__sub_822D13B0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// lwz r3,472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// bl 0x8216a588
	sub_8216A588(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x822d13e0
	if (cr6.gt) goto loc_822D13E0;
	// li r11,0
	r11.s64 = 0;
loc_822D13E0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D13F4"))) PPC_WEAK_FUNC(sub_822D13F4);
PPC_FUNC_IMPL(__imp__sub_822D13F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D13F8"))) PPC_WEAK_FUNC(sub_822D13F8);
PPC_FUNC_IMPL(__imp__sub_822D13F8) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r11,-1439(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1439);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d1438
	if (cr0.eq) goto loc_822D1438;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,24248
	ctx.r3.s64 = r11.s64 + 24248;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d1440
	goto loc_822D1440;
loc_822D1438:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_822D1440:
	// mulli r3,r31,12
	ctx.r3.s64 = r31.s64 * 12;
	// bl 0x82354ff8
	sub_82354FF8(ctx, base);
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

__attribute__((alias("__imp__sub_822D145C"))) PPC_WEAK_FUNC(sub_822D145C);
PPC_FUNC_IMPL(__imp__sub_822D145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1460"))) PPC_WEAK_FUNC(sub_822D1460);
PPC_FUNC_IMPL(__imp__sub_822D1460) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r31,r11,23920
	r31.s64 = r11.s64 + 23920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// bl 0x82318130
	sub_82318130(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
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

__attribute__((alias("__imp__sub_822D14B4"))) PPC_WEAK_FUNC(sub_822D14B4);
PPC_FUNC_IMPL(__imp__sub_822D14B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D14B8"))) PPC_WEAK_FUNC(sub_822D14B8);
PPC_FUNC_IMPL(__imp__sub_822D14B8) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 516);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x822c6dc0
	sub_822C6DC0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d14f4
	if (cr0.eq) goto loc_822D14F4;
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// b 0x822d14f8
	goto loc_822D14F8;
loc_822D14F4:
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 520);
loc_822D14F8:
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

__attribute__((alias("__imp__sub_822D150C"))) PPC_WEAK_FUNC(sub_822D150C);
PPC_FUNC_IMPL(__imp__sub_822D150C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1510"))) PPC_WEAK_FUNC(sub_822D1510);
PPC_FUNC_IMPL(__imp__sub_822D1510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,28328(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28328);
	// mflr r12
	// bl 0x8239bcf4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-8292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8292);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-8296
	r27.s64 = ctx.r10.s64 + -8296;
	// bne 0x822d1568
	if (!cr0.eq) goto loc_822D1568;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8292(r30)
	PPC_STORE_U32(r30.u32 + -8292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,28300
	ctx.r4.s64 = r11.s64 + 28300;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8292);
loc_822D1568:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8300
	r28.s64 = ctx.r10.s64 + -8300;
	// bne 0x822d1590
	if (!cr0.eq) goto loc_822D1590;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8292(r30)
	PPC_STORE_U32(r30.u32 + -8292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28288
	ctx.r4.s64 = r11.s64 + 28288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822D1590:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,28280
	ctx.r4.s64 = r11.s64 + 28280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d1460
	sub_822D1460(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// bl 0x823391f8
	sub_823391F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x822d1634
	goto loc_822D1634;
loc_822D15DC:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x822d1640
	if (!cr6.lt) goto loc_822D1640;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d1654
	if (!cr0.eq) goto loc_822D1654;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d1654
	if (!cr0.eq) goto loc_822D1654;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
loc_822D1634:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x822d15dc
	if (!cr6.eq) goto loc_822D15DC;
loc_822D1640:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f1,-20976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
loc_822D1648:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
loc_822D1654:
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822d1648
	goto loc_822D1648;
}

__attribute__((alias("__imp__sub_822D1518"))) PPC_WEAK_FUNC(sub_822D1518);
PPC_FUNC_IMPL(__imp__sub_822D1518) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-8292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8292);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-8296
	r27.s64 = ctx.r10.s64 + -8296;
	// bne 0x822d1568
	if (!cr0.eq) goto loc_822D1568;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8292(r30)
	PPC_STORE_U32(r30.u32 + -8292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,28300
	ctx.r4.s64 = r11.s64 + 28300;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8292);
loc_822D1568:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8300
	r28.s64 = ctx.r10.s64 + -8300;
	// bne 0x822d1590
	if (!cr0.eq) goto loc_822D1590;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8292(r30)
	PPC_STORE_U32(r30.u32 + -8292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28288
	ctx.r4.s64 = r11.s64 + 28288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822D1590:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,28280
	ctx.r4.s64 = r11.s64 + 28280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d1460
	sub_822D1460(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// bl 0x823391f8
	sub_823391F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x822d1634
	goto loc_822D1634;
loc_822D15DC:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x822d1640
	if (!cr6.lt) goto loc_822D1640;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d1654
	if (!cr0.eq) goto loc_822D1654;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d1654
	if (!cr0.eq) goto loc_822D1654;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
loc_822D1634:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x822d15dc
	if (!cr6.eq) goto loc_822D15DC;
loc_822D1640:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f1,-20976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
loc_822D1648:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
loc_822D1654:
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822d1648
	goto loc_822D1648;
}

__attribute__((alias("__imp__sub_822D165C"))) PPC_WEAK_FUNC(sub_822D165C);
PPC_FUNC_IMPL(__imp__sub_822D165C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8292
	r11.s64 = r11.s64 + -8292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8292
	ctx.r10.s64 = ctx.r10.s64 + -8292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1684"))) PPC_WEAK_FUNC(sub_822D1684);
PPC_FUNC_IMPL(__imp__sub_822D1684) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8292
	r11.s64 = r11.s64 + -8292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8292
	ctx.r10.s64 = ctx.r10.s64 + -8292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D16AC"))) PPC_WEAK_FUNC(sub_822D16AC);
PPC_FUNC_IMPL(__imp__sub_822D16AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D16B0"))) PPC_WEAK_FUNC(sub_822D16B0);
PPC_FUNC_IMPL(__imp__sub_822D16B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,28528(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28528);
	// mflr r12
	// bl 0x8239bcd4
	// addi r12,r1,-112
	r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8239d5e0
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,-8276(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8276);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r19,r10,-8280
	r19.s64 = ctx.r10.s64 + -8280;
	// bne 0x822d1708
	if (!cr0.eq) goto loc_822D1708;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8276(r29)
	PPC_STORE_U32(r29.u32 + -8276, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r4,r11,28480
	ctx.r4.s64 = r11.s64 + 28480;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8276(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8276);
loc_822D1708:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r20,r10,-8284
	r20.s64 = ctx.r10.s64 + -8284;
	// bne 0x822d1734
	if (!cr0.eq) goto loc_822D1734;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8276(r29)
	PPC_STORE_U32(r29.u32 + -8276, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r4,r11,28468
	ctx.r4.s64 = r11.s64 + 28468;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8276(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8276);
loc_822D1734:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-8288
	r27.s64 = ctx.r10.s64 + -8288;
	// bne 0x822d175c
	if (!cr0.eq) goto loc_822D175C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8276(r29)
	PPC_STORE_U32(r29.u32 + -8276, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,28456
	ctx.r4.s64 = r11.s64 + 28456;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822D175C:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x821954f8
	sub_821954F8(ctx, base);
	// li r21,0
	r21.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lis r25,-32127
	r25.s64 = -2105475072;
	// beq 0x822d1794
	if (cr0.eq) goto loc_822D1794;
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b37d8
	sub_822B37D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d1794
	if (!cr0.eq) goto loc_822D1794;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x822d1798
	if (!cr6.eq) goto loc_822D1798;
loc_822D1794:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_822D1798:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,28444
	ctx.r4.s64 = r11.s64 + 28444;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stb r10,592(r30)
	PPC_STORE_U8(r30.u32 + 592, ctx.r10.u8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,564(r30)
	PPC_STORE_U32(r30.u32 + 564, r11.u32);
	// bl 0x822d12e8
	sub_822D12E8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,28440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28440);
	f0.f64 = double(temp.f32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stfs f0,588(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 588, temp.u32);
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x82278d30
	sub_82278D30(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// addi r26,r11,28160
	r26.s64 = r11.s64 + 28160;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,28280
	ctx.r4.s64 = r11.s64 + 28280;
	// std r10,96(r31)
	PPC_STORE_U64(r31.u32 + 96, ctx.r10.u64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,556(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 556, temp.u32);
	// lfd f0,96(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	f0.f64 = double(temp.f32);
	// fmuls f26,f13,f0
	f26.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d1460
	sub_822D1460(ctx, base);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x822d18ac
	goto loc_822D18AC;
loc_822D1874:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d18bc
	if (!cr0.eq) goto loc_822D18BC;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
loc_822D18AC:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x822d1874
	if (!cr6.eq) goto loc_822D1874;
	// b 0x822d18c4
	goto loc_822D18C4;
loc_822D18BC:
	// lfs f0,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,556(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 556, temp.u32);
loc_822D18C4:
	// addi r22,r30,596
	r22.s64 = r30.s64 + 596;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82198430
	sub_82198430(ctx, base);
	// lbz r11,592(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 592);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r23,r11,28184
	r23.s64 = r11.s64 + 28184;
	// beq 0x822d1b5c
	if (cr0.eq) goto loc_822D1B5C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,28424
	ctx.r4.s64 = r11.s64 + 28424;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8218a8f0
	sub_8218A8F0(ctx, base);
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lfs f0,556(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 556);
	f0.f64 = double(temp.f32);
	// li r4,64
	ctx.r4.s64 = 64;
	// lfs f12,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// li r3,64
	ctx.r3.s64 = 64;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64));
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// fmuls f31,f0,f13
	f31.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x82195618
	sub_82195618(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,64
	ctx.r3.s64 = 64;
	// fmadds f0,f1,f0,f31
	f0.f64 = double(float(ctx.f1.f64 * f0.f64 + f31.f64));
	// stfs f0,560(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 560, temp.u32);
	// bl 0x82195618
	sub_82195618(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// fmadds f29,f1,f0,f31
	f29.f64 = double(float(ctx.f1.f64 * f0.f64 + f31.f64));
	// li r25,2048
	r25.s64 = 2048;
	// bl 0x822b5858
	sub_822B5858(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d199c
	if (cr0.eq) goto loc_822D199C;
	// li r25,4096
	r25.s64 = 4096;
	// b 0x822d19b4
	goto loc_822D19B4;
loc_822D199C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-8684(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// bl 0x822ca6e0
	sub_822CA6E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d19b4
	if (cr0.eq) goto loc_822D19B4;
	// li r25,1024
	r25.s64 = 1024;
loc_822D19B4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82195618
	sub_82195618(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// li r3,128
	ctx.r3.s64 = 128;
	// fmadds f28,f1,f0,f31
	f28.f64 = double(float(ctx.f1.f64 * f0.f64 + f31.f64));
	// bl 0x821954f8
	sub_821954F8(ctx, base);
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x822d1b10
	if (cr6.eq) goto loc_822D1B10;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f27,-27448(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27448);
	f27.f64 = double(temp.f32);
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
loc_822D19F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d1ac8
	if (cr0.eq) goto loc_822D1AC8;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x822d1a8c
	if (cr6.eq) goto loc_822D1A8C;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d1a68
	if (cr0.eq) goto loc_822D1A68;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f3,12(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fsubs f1,f0,f29
	ctx.f1.f64 = double(float(f0.f64 - f29.f64));
	// bl 0x822e4898
	sub_822E4898(ctx, base);
	// b 0x822d1a6c
	goto loc_822D1A6C;
loc_822D1A68:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_822D1A6C:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// bge cr6,0x822d1b00
	if (!cr6.lt) goto loc_822D1B00;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82151d08
	sub_82151D08(ctx, base);
	// b 0x822d1b00
	goto loc_822D1B00;
loc_822D1A8C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d1afc
	if (cr0.eq) goto loc_822D1AFC;
	// li r11,-2
	r11.s64 = -2;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r21,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r21.u8);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// b 0x822d1b00
	goto loc_822D1B00;
loc_822D1AC8:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d1b00
	if (cr0.eq) goto loc_822D1B00;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f0,16(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,8(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 8, temp.u32);
	// bl 0x82198348
	sub_82198348(ctx, base);
loc_822D1AFC:
	// mr r27,r21
	r27.u64 = r21.u64;
loc_822D1B00:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x822d19f8
	if (!cr6.eq) goto loc_822D19F8;
loc_822D1B10:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f28.f64, f31.f64);
	// ble cr6,0x822d1b5c
	if (!cr6.gt) goto loc_822D1B5C;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d1b4c
	if (cr0.eq) goto loc_822D1B4C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lfs f3,16(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// fsubs f1,f26,f28
	ctx.f1.f64 = double(float(f26.f64 - f28.f64));
	// bl 0x822e4898
	sub_822E4898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d1b50
	goto loc_822D1B50;
loc_822D1B4C:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_822D1B50:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82198348
	sub_82198348(ctx, base);
loc_822D1B5C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d1ba0
	if (cr0.eq) goto loc_822D1BA0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f26,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r21,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r21.u8);
	// lfs f0,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	f0.f64 = double(temp.f32);
	// fadds f13,f26,f0
	ctx.f13.f64 = double(float(f26.f64 + f0.f64));
	// lfs f0,16(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x822d1ba4
	goto loc_822D1BA4;
loc_822D1BA0:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_822D1BA4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82198348
	sub_82198348(ctx, base);
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// addi r12,r1,-112
	r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8239d62c
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_822D16B8"))) PPC_WEAK_FUNC(sub_822D16B8);
PPC_FUNC_IMPL(__imp__sub_822D16B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd4
	// addi r12,r1,-112
	r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8239d5e0
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,-8276(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8276);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r19,r10,-8280
	r19.s64 = ctx.r10.s64 + -8280;
	// bne 0x822d1708
	if (!cr0.eq) goto loc_822D1708;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8276(r29)
	PPC_STORE_U32(r29.u32 + -8276, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r4,r11,28480
	ctx.r4.s64 = r11.s64 + 28480;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8276(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8276);
loc_822D1708:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r20,r10,-8284
	r20.s64 = ctx.r10.s64 + -8284;
	// bne 0x822d1734
	if (!cr0.eq) goto loc_822D1734;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8276(r29)
	PPC_STORE_U32(r29.u32 + -8276, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r4,r11,28468
	ctx.r4.s64 = r11.s64 + 28468;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8276(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8276);
loc_822D1734:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-8288
	r27.s64 = ctx.r10.s64 + -8288;
	// bne 0x822d175c
	if (!cr0.eq) goto loc_822D175C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8276(r29)
	PPC_STORE_U32(r29.u32 + -8276, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,28456
	ctx.r4.s64 = r11.s64 + 28456;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822D175C:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x821954f8
	sub_821954F8(ctx, base);
	// li r21,0
	r21.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lis r25,-32127
	r25.s64 = -2105475072;
	// beq 0x822d1794
	if (cr0.eq) goto loc_822D1794;
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b37d8
	sub_822B37D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d1794
	if (!cr0.eq) goto loc_822D1794;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x822d1798
	if (!cr6.eq) goto loc_822D1798;
loc_822D1794:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_822D1798:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,28444
	ctx.r4.s64 = r11.s64 + 28444;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stb r10,592(r30)
	PPC_STORE_U8(r30.u32 + 592, ctx.r10.u8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,564(r30)
	PPC_STORE_U32(r30.u32 + 564, r11.u32);
	// bl 0x822d12e8
	sub_822D12E8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,28440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28440);
	f0.f64 = double(temp.f32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stfs f0,588(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 588, temp.u32);
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x82278d30
	sub_82278D30(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// addi r26,r11,28160
	r26.s64 = r11.s64 + 28160;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,28280
	ctx.r4.s64 = r11.s64 + 28280;
	// std r10,96(r31)
	PPC_STORE_U64(r31.u32 + 96, ctx.r10.u64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,556(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 556, temp.u32);
	// lfd f0,96(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	f0.f64 = double(temp.f32);
	// fmuls f26,f13,f0
	f26.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d1460
	sub_822D1460(ctx, base);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x822d18ac
	goto loc_822D18AC;
loc_822D1874:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d18bc
	if (!cr0.eq) goto loc_822D18BC;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
loc_822D18AC:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x822d1874
	if (!cr6.eq) goto loc_822D1874;
	// b 0x822d18c4
	goto loc_822D18C4;
loc_822D18BC:
	// lfs f0,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,556(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 556, temp.u32);
loc_822D18C4:
	// addi r22,r30,596
	r22.s64 = r30.s64 + 596;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82198430
	sub_82198430(ctx, base);
	// lbz r11,592(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 592);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r23,r11,28184
	r23.s64 = r11.s64 + 28184;
	// beq 0x822d1b5c
	if (cr0.eq) goto loc_822D1B5C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,28424
	ctx.r4.s64 = r11.s64 + 28424;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8218a8f0
	sub_8218A8F0(ctx, base);
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lfs f0,556(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 556);
	f0.f64 = double(temp.f32);
	// li r4,64
	ctx.r4.s64 = 64;
	// lfs f12,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// li r3,64
	ctx.r3.s64 = 64;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64));
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// fmuls f31,f0,f13
	f31.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x82195618
	sub_82195618(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,64
	ctx.r3.s64 = 64;
	// fmadds f0,f1,f0,f31
	f0.f64 = double(float(ctx.f1.f64 * f0.f64 + f31.f64));
	// stfs f0,560(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 560, temp.u32);
	// bl 0x82195618
	sub_82195618(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// fmadds f29,f1,f0,f31
	f29.f64 = double(float(ctx.f1.f64 * f0.f64 + f31.f64));
	// li r25,2048
	r25.s64 = 2048;
	// bl 0x822b5858
	sub_822B5858(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d199c
	if (cr0.eq) goto loc_822D199C;
	// li r25,4096
	r25.s64 = 4096;
	// b 0x822d19b4
	goto loc_822D19B4;
loc_822D199C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-8684(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// bl 0x822ca6e0
	sub_822CA6E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d19b4
	if (cr0.eq) goto loc_822D19B4;
	// li r25,1024
	r25.s64 = 1024;
loc_822D19B4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82195618
	sub_82195618(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// li r3,128
	ctx.r3.s64 = 128;
	// fmadds f28,f1,f0,f31
	f28.f64 = double(float(ctx.f1.f64 * f0.f64 + f31.f64));
	// bl 0x821954f8
	sub_821954F8(ctx, base);
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x822d1b10
	if (cr6.eq) goto loc_822D1B10;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f27,-27448(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27448);
	f27.f64 = double(temp.f32);
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
loc_822D19F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d1ac8
	if (cr0.eq) goto loc_822D1AC8;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x822d1a8c
	if (cr6.eq) goto loc_822D1A8C;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d1a68
	if (cr0.eq) goto loc_822D1A68;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f3,12(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fsubs f1,f0,f29
	ctx.f1.f64 = double(float(f0.f64 - f29.f64));
	// bl 0x822e4898
	sub_822E4898(ctx, base);
	// b 0x822d1a6c
	goto loc_822D1A6C;
loc_822D1A68:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_822D1A6C:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// bge cr6,0x822d1b00
	if (!cr6.lt) goto loc_822D1B00;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82151d08
	sub_82151D08(ctx, base);
	// b 0x822d1b00
	goto loc_822D1B00;
loc_822D1A8C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d1afc
	if (cr0.eq) goto loc_822D1AFC;
	// li r11,-2
	r11.s64 = -2;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r21,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r21.u8);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// b 0x822d1b00
	goto loc_822D1B00;
loc_822D1AC8:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d1b00
	if (cr0.eq) goto loc_822D1B00;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f0,16(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,8(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 8, temp.u32);
	// bl 0x82198348
	sub_82198348(ctx, base);
loc_822D1AFC:
	// mr r27,r21
	r27.u64 = r21.u64;
loc_822D1B00:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x822d19f8
	if (!cr6.eq) goto loc_822D19F8;
loc_822D1B10:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f28.f64, f31.f64);
	// ble cr6,0x822d1b5c
	if (!cr6.gt) goto loc_822D1B5C;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d1b4c
	if (cr0.eq) goto loc_822D1B4C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lfs f3,16(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// fsubs f1,f26,f28
	ctx.f1.f64 = double(float(f26.f64 - f28.f64));
	// bl 0x822e4898
	sub_822E4898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d1b50
	goto loc_822D1B50;
loc_822D1B4C:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_822D1B50:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82198348
	sub_82198348(ctx, base);
loc_822D1B5C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d1ba0
	if (cr0.eq) goto loc_822D1BA0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f26,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r21,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r21.u8);
	// lfs f0,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	f0.f64 = double(temp.f32);
	// fadds f13,f26,f0
	ctx.f13.f64 = double(float(f26.f64 + f0.f64));
	// lfs f0,16(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x822d1ba4
	goto loc_822D1BA4;
loc_822D1BA0:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_822D1BA4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82198348
	sub_82198348(ctx, base);
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// addi r12,r1,-112
	r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8239d62c
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_822D1BC0"))) PPC_WEAK_FUNC(sub_822D1BC0);
PPC_FUNC_IMPL(__imp__sub_822D1BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8276
	r11.s64 = r11.s64 + -8276;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8276
	ctx.r10.s64 = ctx.r10.s64 + -8276;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1BE8"))) PPC_WEAK_FUNC(sub_822D1BE8);
PPC_FUNC_IMPL(__imp__sub_822D1BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8276
	r11.s64 = r11.s64 + -8276;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8276
	ctx.r10.s64 = ctx.r10.s64 + -8276;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1C10"))) PPC_WEAK_FUNC(sub_822D1C10);
PPC_FUNC_IMPL(__imp__sub_822D1C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8276
	r11.s64 = r11.s64 + -8276;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8276
	ctx.r10.s64 = ctx.r10.s64 + -8276;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1C38"))) PPC_WEAK_FUNC(sub_822D1C38);
PPC_FUNC_IMPL(__imp__sub_822D1C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-272
	r31.s64 = r12.s64 + -272;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1C60"))) PPC_WEAK_FUNC(sub_822D1C60);
PPC_FUNC_IMPL(__imp__sub_822D1C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-272
	r31.s64 = r12.s64 + -272;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1C88"))) PPC_WEAK_FUNC(sub_822D1C88);
PPC_FUNC_IMPL(__imp__sub_822D1C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x822d1cbc
	if (!cr6.lt) goto loc_822D1CBC;
	// fmr f30,f0
	f30.f64 = f0.f64;
loc_822D1CBC:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm. r11,r11,0,22,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d1d18
	if (cr0.eq) goto loc_822D1D18;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311988
	sub_82311988(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lfs f0,6376(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6376);
	f0.f64 = double(temp.f32);
	// lwz r3,-9288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -9288);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * f0.f64));
	// bl 0x822bb468
	sub_822BB468(ctx, base);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fdivs f0,f30,f0
	f0.f64 = double(float(f30.f64 / f0.f64));
	// lwz r3,-9288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -9288);
	// lfs f13,17324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f1
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f1.f64));
	// bl 0x822bb450
	sub_822BB450(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-4904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	f0.f64 = double(temp.f32);
	// fmsubs f30,f1,f0,f31
	f30.f64 = double(float(ctx.f1.f64 * f0.f64 - f31.f64));
loc_822D1D18:
	// lfs f0,556(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 556);
	f0.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(f0.f64 * f30.f64));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D1D30"))) PPC_WEAK_FUNC(sub_822D1D30);
PPC_FUNC_IMPL(__imp__sub_822D1D30) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822d1d7c
	if (cr0.eq) goto loc_822D1D7C;
	// lwz r10,516(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// and. r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 & ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822d1d7c
	if (!cr0.eq) goto loc_822D1D7C;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_822D1D7C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,544(r30)
	PPC_STORE_U8(r30.u32 + 544, r11.u8);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D1D94"))) PPC_WEAK_FUNC(sub_822D1D94);
PPC_FUNC_IMPL(__imp__sub_822D1D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1D98"))) PPC_WEAK_FUNC(sub_822D1D98);
PPC_FUNC_IMPL(__imp__sub_822D1D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,28680(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28680);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-8268(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8268);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-8272
	r29.s64 = ctx.r9.s64 + -8272;
	// bne 0x822d1e00
	if (!cr0.eq) goto loc_822D1E00;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8268, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,28656
	ctx.r4.s64 = r11.s64 + 28656;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822D1E00:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d1e34
	if (cr0.eq) goto loc_822D1E34;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-204
	ctx.r3.s64 = r28.s64 + -204;
	// bl 0x82126dc0
	sub_82126DC0(ctx, base);
	// b 0x822d1e58
	goto loc_822D1E58;
loc_822D1E34:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r28,-200
	ctx.r3.s64 = r28.s64 + -200;
	// bl 0x821260b0
	sub_821260B0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_822D1E58:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D1DA0"))) PPC_WEAK_FUNC(sub_822D1DA0);
PPC_FUNC_IMPL(__imp__sub_822D1DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-8268(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8268);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-8272
	r29.s64 = ctx.r9.s64 + -8272;
	// bne 0x822d1e00
	if (!cr0.eq) goto loc_822D1E00;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8268, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,28656
	ctx.r4.s64 = r11.s64 + 28656;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822D1E00:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d1e34
	if (cr0.eq) goto loc_822D1E34;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-204
	ctx.r3.s64 = r28.s64 + -204;
	// bl 0x82126dc0
	sub_82126DC0(ctx, base);
	// b 0x822d1e58
	goto loc_822D1E58;
loc_822D1E34:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r28,-200
	ctx.r3.s64 = r28.s64 + -200;
	// bl 0x821260b0
	sub_821260B0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_822D1E58:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D1E60"))) PPC_WEAK_FUNC(sub_822D1E60);
PPC_FUNC_IMPL(__imp__sub_822D1E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8268
	r11.s64 = r11.s64 + -8268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8268
	ctx.r10.s64 = ctx.r10.s64 + -8268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1E88"))) PPC_WEAK_FUNC(sub_822D1E88);
PPC_FUNC_IMPL(__imp__sub_822D1E88) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822d13f8
	sub_822D13F8(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d1eb8
	if (cr0.eq) goto loc_822D1EB8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_822D1EB8:
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

__attribute__((alias("__imp__sub_822D1ECC"))) PPC_WEAK_FUNC(sub_822D1ECC);
PPC_FUNC_IMPL(__imp__sub_822D1ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1ED0"))) PPC_WEAK_FUNC(sub_822D1ED0);
PPC_FUNC_IMPL(__imp__sub_822D1ED0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,1640
	r31.s64 = r11.s64 + 1640;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
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

__attribute__((alias("__imp__sub_822D1F28"))) PPC_WEAK_FUNC(sub_822D1F28);
PPC_FUNC_IMPL(__imp__sub_822D1F28) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r31,0(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82355020
	sub_82355020(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
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

__attribute__((alias("__imp__sub_822D1F7C"))) PPC_WEAK_FUNC(sub_822D1F7C);
PPC_FUNC_IMPL(__imp__sub_822D1F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1F80"))) PPC_WEAK_FUNC(sub_822D1F80);
PPC_FUNC_IMPL(__imp__sub_822D1F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,617(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 617);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d1fec
	if (cr0.eq) goto loc_822D1FEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82150968
	sub_82150968(ctx, base);
	// lwz r29,216(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x822d1fec
	if (cr0.eq) goto loc_822D1FEC;
	// addi r30,r31,180
	r30.s64 = r31.s64 + 180;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_822D1FEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82150968
	sub_82150968(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// bl 0x82150070
	sub_82150070(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,520(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 520);
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 472);
	// lfs f2,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f31,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8216ada8
	sub_8216ADA8(ctx, base);
	// stfs f31,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 620, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D2034"))) PPC_WEAK_FUNC(sub_822D2034);
PPC_FUNC_IMPL(__imp__sub_822D2034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2038"))) PPC_WEAK_FUNC(sub_822D2038);
PPC_FUNC_IMPL(__imp__sub_822D2038) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r31,548
	r29.s64 = r31.s64 + 548;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x822d2078
	goto loc_822D2078;
loc_822D205C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_822D2078:
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822d205c
	if (!cr0.eq) goto loc_822D205C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 620);
	f0.f64 = double(temp.f32);
	// lfs f30,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// beq cr6,0x822d20d0
	if (cr6.eq) goto loc_822D20D0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 620);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x822d20c8
	if (!cr6.lt) goto loc_822D20C8;
	// addi r3,r31,360
	ctx.r3.s64 = r31.s64 + 360;
	// bl 0x8214fcb0
	sub_8214FCB0(ctx, base);
	// b 0x822d22c4
	goto loc_822D22C4;
loc_822D20C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1f80
	sub_822D1F80(ctx, base);
loc_822D20D0:
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 472);
	// bl 0x8216a470
	sub_8216A470(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// beq 0x822d2128
	if (cr0.eq) goto loc_822D2128;
	// lwz r11,540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 540);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x822d2128
	if (cr6.eq) goto loc_822D2128;
	// li r5,516
	ctx.r5.s64 = 516;
	// lwz r4,696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 472);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8216ada8
	sub_8216ADA8(ctx, base);
	// lwz r11,540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 540);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r11,692(r31)
	PPC_STORE_U32(r31.u32 + 692, r11.u32);
	// bne cr6,0x822d2128
	if (!cr6.eq) goto loc_822D2128;
	// li r11,2
	r11.s64 = 2;
	// stw r11,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r11.u32);
loc_822D2128:
	// addi r3,r31,360
	ctx.r3.s64 = r31.s64 + 360;
	// bl 0x8214fcb0
	sub_8214FCB0(ctx, base);
	// lis r25,-32127
	r25.s64 = -2105475072;
	// lwz r3,-8684(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -8684);
	// bl 0x822ca6e0
	sub_822CA6E0(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d2158
	if (!cr0.eq) goto loc_822D2158;
	// lwz r3,-9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// bl 0x822b5858
	sub_822B5858(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d2168
	if (cr0.eq) goto loc_822D2168;
loc_822D2158:
	// lbz r11,617(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 617);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne 0x822d216c
	if (!cr0.eq) goto loc_822D216C;
loc_822D2168:
	// li r11,1
	r11.s64 = 1;
loc_822D216C:
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 472);
	// clrlwi r26,r11,24
	r26.u64 = r11.u32 & 0xFF;
	// bl 0x8216a690
	sub_8216A690(ctx, base);
	// lwz r11,540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 540);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x822d2290
	if (!cr6.eq) goto loc_822D2290;
	// lwz r11,36(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// lwz r10,692(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 692);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x822d2290
	if (!cr6.eq) goto loc_822D2290;
	// lfs f0,24(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 24);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x822d2290
	if (!cr6.gt) goto loc_822D2290;
	// li r11,3
	r11.s64 = 3;
	// clrlwi. r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r11.u32);
	// beq 0x822d21cc
	if (cr0.eq) goto loc_822D21CC;
	// lwz r11,516(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 516);
	// lwz r3,-9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// subfic r4,r11,1
	xer.ca = r11.u32 <= 1;
	ctx.r4.s64 = 1 - r11.s64;
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x822d1128
	sub_822D1128(ctx, base);
loc_822D21CC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,28748
	ctx.r3.s64 = r11.s64 + 28748;
	// bl 0x82192dd8
	sub_82192DD8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,16408
	r11.s64 = r11.s64 + 16408;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82192dd8
	sub_82192DD8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// addi r30,r11,48
	r30.s64 = r11.s64 + 48;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	f0.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-1472(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1472);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// blt cr6,0x822d2274
	if (cr6.lt) goto loc_822D2274;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f13,f12,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// lfs f0,28744(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28744);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x822d2290
	if (!cr6.gt) goto loc_822D2290;
loc_822D2274:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,624(r31)
	PPC_STORE_U32(r31.u32 + 624, r29.u32);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,628
	ctx.r3.s64 = r31.s64 + 628;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_822D2290:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d22c4
	if (cr0.eq) goto loc_822D22C4;
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 472);
	// bl 0x8216a470
	sub_8216A470(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d22c4
	if (cr0.eq) goto loc_822D22C4;
	// lwz r11,36(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// lfs f0,16(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x822d22c4
	if (cr6.lt) goto loc_822D22C4;
	// lwz r3,-8684(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -8684);
	// bl 0x822cb9d8
	sub_822CB9D8(ctx, base);
loc_822D22C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822D22D4"))) PPC_WEAK_FUNC(sub_822D22D4);
PPC_FUNC_IMPL(__imp__sub_822D22D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D22D8"))) PPC_WEAK_FUNC(sub_822D22D8);
PPC_FUNC_IMPL(__imp__sub_822D22D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,28784(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28784);
	// mflr r12
	// bl 0x8239bcfc
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// stb r11,616(r30)
	PPC_STORE_U8(r30.u32 + 616, r11.u8);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// stw r3,520(r30)
	PPC_STORE_U32(r30.u32 + 520, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,6220
	r11.s64 = r11.s64 + 6220;
loc_822D2334:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq 0x822d2358
	if (cr0.eq) goto loc_822D2358;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x822d2334
	if (cr6.eq) goto loc_822D2334;
loc_822D2358:
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,617(r30)
	PPC_STORE_U8(r30.u32 + 617, r11.u8);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b37d8
	sub_822B37D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d23a4
	if (!cr0.eq) goto loc_822D23A4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-8684(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// bl 0x822ca6e0
	sub_822CA6E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d239c
	if (cr0.eq) goto loc_822D239C;
	// lbz r11,617(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 617);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822d23a4
	if (!cr0.eq) goto loc_822D23A4;
loc_822D239C:
	// li r11,0
	r11.s64 = 0;
	// b 0x822d23a8
	goto loc_822D23A8;
loc_822D23A4:
	// li r11,1
	r11.s64 = 1;
loc_822D23A8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stw r11,540(r30)
	PPC_STORE_U32(r30.u32 + 540, r11.u32);
	// bne cr6,0x822d2400
	if (!cr6.eq) goto loc_822D2400;
	// lbz r11,617(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 617);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d23cc
	if (cr0.eq) goto loc_822D23CC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r29,r11,6192
	r29.s64 = r11.s64 + 6192;
	// b 0x822d23d4
	goto loc_822D23D4;
loc_822D23CC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r29,r11,6180
	r29.s64 = r11.s64 + 6180;
loc_822D23D4:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// stw r3,696(r30)
	PPC_STORE_U32(r30.u32 + 696, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// b 0x822d2408
	goto loc_822D2408;
loc_822D2400:
	// li r11,0
	r11.s64 = 0;
	// stw r11,696(r30)
	PPC_STORE_U32(r30.u32 + 696, r11.u32);
loc_822D2408:
	// lbz r11,617(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 617);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d2420
	if (cr0.eq) goto loc_822D2420;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f31,22980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 22980);
	f31.f64 = double(temp.f32);
	// b 0x822d2428
	goto loc_822D2428;
loc_822D2420:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_822D2428:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// stfs f0,620(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 620, temp.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D22E0"))) PPC_WEAK_FUNC(sub_822D22E0);
PPC_FUNC_IMPL(__imp__sub_822D22E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// stb r11,616(r30)
	PPC_STORE_U8(r30.u32 + 616, r11.u8);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// stw r3,520(r30)
	PPC_STORE_U32(r30.u32 + 520, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,6220
	r11.s64 = r11.s64 + 6220;
loc_822D2334:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq 0x822d2358
	if (cr0.eq) goto loc_822D2358;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x822d2334
	if (cr6.eq) goto loc_822D2334;
loc_822D2358:
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,617(r30)
	PPC_STORE_U8(r30.u32 + 617, r11.u8);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b37d8
	sub_822B37D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d23a4
	if (!cr0.eq) goto loc_822D23A4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-8684(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// bl 0x822ca6e0
	sub_822CA6E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d239c
	if (cr0.eq) goto loc_822D239C;
	// lbz r11,617(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 617);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822d23a4
	if (!cr0.eq) goto loc_822D23A4;
loc_822D239C:
	// li r11,0
	r11.s64 = 0;
	// b 0x822d23a8
	goto loc_822D23A8;
loc_822D23A4:
	// li r11,1
	r11.s64 = 1;
loc_822D23A8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stw r11,540(r30)
	PPC_STORE_U32(r30.u32 + 540, r11.u32);
	// bne cr6,0x822d2400
	if (!cr6.eq) goto loc_822D2400;
	// lbz r11,617(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 617);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d23cc
	if (cr0.eq) goto loc_822D23CC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r29,r11,6192
	r29.s64 = r11.s64 + 6192;
	// b 0x822d23d4
	goto loc_822D23D4;
loc_822D23CC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r29,r11,6180
	r29.s64 = r11.s64 + 6180;
loc_822D23D4:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// stw r3,696(r30)
	PPC_STORE_U32(r30.u32 + 696, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// b 0x822d2408
	goto loc_822D2408;
loc_822D2400:
	// li r11,0
	r11.s64 = 0;
	// stw r11,696(r30)
	PPC_STORE_U32(r30.u32 + 696, r11.u32);
loc_822D2408:
	// lbz r11,617(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 617);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d2420
	if (cr0.eq) goto loc_822D2420;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f31,22980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 22980);
	f31.f64 = double(temp.f32);
	// b 0x822d2428
	goto loc_822D2428;
loc_822D2420:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_822D2428:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// stfs f0,620(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 620, temp.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D2448"))) PPC_WEAK_FUNC(sub_822D2448);
PPC_FUNC_IMPL(__imp__sub_822D2448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2470"))) PPC_WEAK_FUNC(sub_822D2470);
PPC_FUNC_IMPL(__imp__sub_822D2470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2498"))) PPC_WEAK_FUNC(sub_822D2498);
PPC_FUNC_IMPL(__imp__sub_822D2498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,28872(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28872);
	// mflr r12
	// bl 0x8239bcfc
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// stw r3,520(r30)
	PPC_STORE_U32(r30.u32 + 520, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822d2568
	if (!cr0.eq) goto loc_822D2568;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// li r29,1
	r29.s64 = 1;
	// bl 0x8216a588
	sub_8216A588(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x822d252c
	if (!cr6.gt) goto loc_822D252C;
	// li r29,4
	r29.s64 = 4;
	// b 0x822d2540
	goto loc_822D2540;
loc_822D252C:
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// bl 0x8216a6c0
	sub_8216A6C0(ctx, base);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm. r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d2568
	if (!cr0.eq) goto loc_822D2568;
loc_822D2540:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f31,-20976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	f31.f64 = double(temp.f32);
	// bl 0x822d14b8
	sub_822D14B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x8216ada8
	sub_8216ADA8(ctx, base);
loc_822D2568:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D24A0"))) PPC_WEAK_FUNC(sub_822D24A0);
PPC_FUNC_IMPL(__imp__sub_822D24A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// stw r3,520(r30)
	PPC_STORE_U32(r30.u32 + 520, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822d2568
	if (!cr0.eq) goto loc_822D2568;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// li r29,1
	r29.s64 = 1;
	// bl 0x8216a588
	sub_8216A588(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x822d252c
	if (!cr6.gt) goto loc_822D252C;
	// li r29,4
	r29.s64 = 4;
	// b 0x822d2540
	goto loc_822D2540;
loc_822D252C:
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// bl 0x8216a6c0
	sub_8216A6C0(ctx, base);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm. r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d2568
	if (!cr0.eq) goto loc_822D2568;
loc_822D2540:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f31,-20976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	f31.f64 = double(temp.f32);
	// bl 0x822d14b8
	sub_822D14B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x8216ada8
	sub_8216ADA8(ctx, base);
loc_822D2568:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D2578"))) PPC_WEAK_FUNC(sub_822D2578);
PPC_FUNC_IMPL(__imp__sub_822D2578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D25A0"))) PPC_WEAK_FUNC(sub_822D25A0);
PPC_FUNC_IMPL(__imp__sub_822D25A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,28952(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28952);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// bl 0x8216a588
	sub_8216A588(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x822d2644
	if (!cr6.eq) goto loc_822D2644;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,6168
	ctx.r4.s64 = r11.s64 + 6168;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d2634
	if (cr0.eq) goto loc_822D2634;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f1,28160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e4af8
	sub_822E4AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d2638
	goto loc_822D2638;
loc_822D2634:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D2638:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,596
	ctx.r3.s64 = r30.s64 + 596;
	// bl 0x82198348
	sub_82198348(ctx, base);
loc_822D2644:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D25A8"))) PPC_WEAK_FUNC(sub_822D25A8);
PPC_FUNC_IMPL(__imp__sub_822D25A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// bl 0x8216a588
	sub_8216A588(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x822d2644
	if (!cr6.eq) goto loc_822D2644;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,6168
	ctx.r4.s64 = r11.s64 + 6168;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d2634
	if (cr0.eq) goto loc_822D2634;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f1,28160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e4af8
	sub_822E4AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d2638
	goto loc_822D2638;
loc_822D2634:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D2638:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,596
	ctx.r3.s64 = r30.s64 + 596;
	// bl 0x82198348
	sub_82198348(ctx, base);
loc_822D2644:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D264C"))) PPC_WEAK_FUNC(sub_822D264C);
PPC_FUNC_IMPL(__imp__sub_822D264C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2674"))) PPC_WEAK_FUNC(sub_822D2674);
PPC_FUNC_IMPL(__imp__sub_822D2674) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D269C"))) PPC_WEAK_FUNC(sub_822D269C);
PPC_FUNC_IMPL(__imp__sub_822D269C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D26A0"))) PPC_WEAK_FUNC(sub_822D26A0);
PPC_FUNC_IMPL(__imp__sub_822D26A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,29040(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29040);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,520(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_822D26DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d2700
	if (cr0.eq) goto loc_822D2700;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x822d26dc
	if (cr6.eq) goto loc_822D26DC;
loc_822D2700:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x822d2734
	if (!cr0.eq) goto loc_822D2734;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,6212
	ctx.r4.s64 = r11.s64 + 6212;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// stw r3,520(r30)
	PPC_STORE_U32(r30.u32 + 520, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
loc_822D2734:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
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

__attribute__((alias("__imp__sub_822D26A8"))) PPC_WEAK_FUNC(sub_822D26A8);
PPC_FUNC_IMPL(__imp__sub_822D26A8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,520(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_822D26DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d2700
	if (cr0.eq) goto loc_822D2700;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x822d26dc
	if (cr6.eq) goto loc_822D26DC;
loc_822D2700:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x822d2734
	if (!cr0.eq) goto loc_822D2734;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,6212
	ctx.r4.s64 = r11.s64 + 6212;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// stw r3,520(r30)
	PPC_STORE_U32(r30.u32 + 520, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
loc_822D2734:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
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

__attribute__((alias("__imp__sub_822D274C"))) PPC_WEAK_FUNC(sub_822D274C);
PPC_FUNC_IMPL(__imp__sub_822D274C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2774"))) PPC_WEAK_FUNC(sub_822D2774);
PPC_FUNC_IMPL(__imp__sub_822D2774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2778"))) PPC_WEAK_FUNC(sub_822D2778);
PPC_FUNC_IMPL(__imp__sub_822D2778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,29104(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29104);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,476(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 476);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d27b4
	if (cr0.eq) goto loc_822D27B4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x822d27b8
	if (!cr6.eq) goto loc_822D27B8;
loc_822D27B4:
	// li r11,0
	r11.s64 = 0;
loc_822D27B8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d28b4
	if (!cr0.eq) goto loc_822D28B4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d1180
	sub_822D1180(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d28b4
	if (!cr0.eq) goto loc_822D28B4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b37d8
	sub_822B37D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d2854
	if (!cr0.eq) goto loc_822D2854;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,6248
	ctx.r10.s64 = r11.s64 + 6248;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_822D27F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d2814
	if (cr0.eq) goto loc_822D2814;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x822d27f0
	if (cr6.eq) goto loc_822D27F0;
loc_822D2814:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x822d28b4
	if (cr0.eq) goto loc_822D28B4;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,6236
	ctx.r10.s64 = r11.s64 + 6236;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_822D2828:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d284c
	if (cr0.eq) goto loc_822D284C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x822d2828
	if (cr6.eq) goto loc_822D2828;
loc_822D284C:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x822d28b4
	if (cr0.eq) goto loc_822D28B4;
loc_822D2854:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,472(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 472);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r11,12
	r11.s64 = 12;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d28b4
	if (cr0.eq) goto loc_822D28B4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,472(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 472);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f2,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f1,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8216ada8
	sub_8216ADA8(ctx, base);
loc_822D28B4:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D2780"))) PPC_WEAK_FUNC(sub_822D2780);
PPC_FUNC_IMPL(__imp__sub_822D2780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,476(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 476);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d27b4
	if (cr0.eq) goto loc_822D27B4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x822d27b8
	if (!cr6.eq) goto loc_822D27B8;
loc_822D27B4:
	// li r11,0
	r11.s64 = 0;
loc_822D27B8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d28b4
	if (!cr0.eq) goto loc_822D28B4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d1180
	sub_822D1180(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d28b4
	if (!cr0.eq) goto loc_822D28B4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b37d8
	sub_822B37D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d2854
	if (!cr0.eq) goto loc_822D2854;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,6248
	ctx.r10.s64 = r11.s64 + 6248;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_822D27F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d2814
	if (cr0.eq) goto loc_822D2814;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x822d27f0
	if (cr6.eq) goto loc_822D27F0;
loc_822D2814:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x822d28b4
	if (cr0.eq) goto loc_822D28B4;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,6236
	ctx.r10.s64 = r11.s64 + 6236;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_822D2828:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d284c
	if (cr0.eq) goto loc_822D284C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x822d2828
	if (cr6.eq) goto loc_822D2828;
loc_822D284C:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x822d28b4
	if (cr0.eq) goto loc_822D28B4;
loc_822D2854:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,472(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 472);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r11,12
	r11.s64 = 12;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d28b4
	if (cr0.eq) goto loc_822D28B4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,472(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 472);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f2,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f1,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8216ada8
	sub_8216ADA8(ctx, base);
loc_822D28B4:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D28BC"))) PPC_WEAK_FUNC(sub_822D28BC);
PPC_FUNC_IMPL(__imp__sub_822D28BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D28E4"))) PPC_WEAK_FUNC(sub_822D28E4);
PPC_FUNC_IMPL(__imp__sub_822D28E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D28E8"))) PPC_WEAK_FUNC(sub_822D28E8);
PPC_FUNC_IMPL(__imp__sub_822D28E8) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r28,0
	r28.s64 = 0;
	// addi r4,r11,7008
	ctx.r4.s64 = r11.s64 + 7008;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x822d1ed0
	sub_822D1ED0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x822d2958
	if (!cr0.eq) goto loc_822D2958;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,29172
	ctx.r4.s64 = r11.s64 + 29172;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x822d1ed0
	sub_822D1ED0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d2a28
	if (cr0.eq) goto loc_822D2A28;
loc_822D2958:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,180
	r30.s64 = r31.s64 + 180;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f31,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f31.f64 = double(temp.f32);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lfs f13,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 - ctx.f13.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(f0.f64)));
	// lfs f0,29168(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29168);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x822d2a28
	if (cr6.gt) goto loc_822D2A28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82195548
	sub_82195548(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x822d2a28
	if (cr0.eq) goto loc_822D2A28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82151d08
	sub_82151D08(ctx, base);
loc_822D2A28:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D2A40"))) PPC_WEAK_FUNC(sub_822D2A40);
PPC_FUNC_IMPL(__imp__sub_822D2A40) {
	PPC_FUNC_PROLOGUE();
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x822d1e88
	sub_822D1E88(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_822D2AA4"))) PPC_WEAK_FUNC(sub_822D2AA4);
PPC_FUNC_IMPL(__imp__sub_822D2AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2AA8"))) PPC_WEAK_FUNC(sub_822D2AA8);
PPC_FUNC_IMPL(__imp__sub_822D2AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x822d2ad8
	goto loc_822D2AD8;
loc_822D2AC8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822D2AD8:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x822d2ac8
	if (!cr6.eq) goto loc_822D2AC8;
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
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

__attribute__((alias("__imp__sub_822D2B00"))) PPC_WEAK_FUNC(sub_822D2B00);
PPC_FUNC_IMPL(__imp__sub_822D2B00) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r31
	r11.s64 = r31.s64 - ctx.r10.s64;
	// b 0x822d2b6c
	goto loc_822D2B6C;
loc_822D2B20:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d2b40
	if (cr0.eq) goto loc_822D2B40;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_822D2B40:
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d2b64
	if (cr0.eq) goto loc_822D2B64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822d1f28
	sub_822D1F28(ctx, base);
loc_822D2B64:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_822D2B6C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822d2b20
	if (!cr0.eq) goto loc_822D2B20;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D2B88"))) PPC_WEAK_FUNC(sub_822D2B88);
PPC_FUNC_IMPL(__imp__sub_822D2B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,29216(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29216);
	// mflr r12
	// bl 0x8239bce8
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d2f7c
	if (cr6.eq) goto loc_822D2F7C;
	// lbz r11,256(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 256);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d2bd0
	if (cr0.eq) goto loc_822D2BD0;
	// addi r3,r30,-360
	ctx.r3.s64 = r30.s64 + -360;
	// bl 0x822d2038
	sub_822D2038(ctx, base);
	// b 0x822d2f68
	goto loc_822D2F68;
loc_822D2BD0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r24,r30,236
	r24.s64 = r30.s64 + 236;
	// addi r27,r11,-5056
	r27.s64 = r11.s64 + -5056;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82311988
	sub_82311988(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82197fb0
	sub_82197FB0(ctx, base);
	// lbz r11,232(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 232);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// beq 0x822d2c7c
	if (cr0.eq) goto loc_822D2C7C;
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d2c7c
	if (!cr0.eq) goto loc_822D2C7C;
	// addi r29,r30,-360
	r29.s64 = r30.s64 + -360;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d1288
	sub_822D1288(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f30.f64);
	// bge cr6,0x822d2c7c
	if (!cr6.lt) goto loc_822D2C7C;
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,6212
	ctx.r10.s64 = ctx.r10.s64 + 6212;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_822D2C44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d2c68
	if (cr0.eq) goto loc_822D2C68;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x822d2c44
	if (cr6.eq) goto loc_822D2C44;
loc_822D2C68:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x822d2c7c
	if (!cr0.eq) goto loc_822D2C7C;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d11d0
	sub_822D11D0(ctx, base);
loc_822D2C7C:
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d2c98
	if (cr0.eq) goto loc_822D2C98;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x822d2c9c
	if (!cr6.eq) goto loc_822D2C9C;
loc_822D2C98:
	// li r11,0
	r11.s64 = 0;
loc_822D2C9C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d2efc
	if (!cr0.eq) goto loc_822D2EFC;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// bl 0x8216a470
	sub_8216A470(ctx, base);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r25,r11,28160
	r25.s64 = r11.s64 + 28160;
	// bne 0x822d2d14
	if (!cr0.eq) goto loc_822D2D14;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// lfs f0,16(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 16);
	f0.f64 = double(temp.f32);
	// lwz r29,52(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// blt cr6,0x822d2d14
	if (cr6.lt) goto loc_822D2D14;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82311998
	sub_82311998(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// bge cr6,0x822d2d14
	if (!cr6.lt) goto loc_822D2D14;
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwinm. r11,r11,0,15,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d2d14
	if (cr0.eq) goto loc_822D2D14;
	// lwz r11,-8684(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -8684);
	// lwz r11,824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 824);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x822d2d14
	if (cr6.gt) goto loc_822D2D14;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// bl 0x8216a520
	sub_8216A520(ctx, base);
loc_822D2D14:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// bl 0x8216a470
	sub_8216A470(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d2efc
	if (cr0.eq) goto loc_822D2EFC;
	// addi r27,r30,-360
	r27.s64 = r30.s64 + -360;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d14b8
	sub_822D14B8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,28300
	ctx.r10.s64 = r11.s64 + 28300;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_822D2D4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d2d70
	if (cr0.eq) goto loc_822D2D70;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x822d2d4c
	if (cr6.eq) goto loc_822D2D4C;
loc_822D2D70:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x822d2d98
	if (!cr0.eq) goto loc_822D2D98;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// bl 0x8216a690
	sub_8216A690(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// andi. r11,r11,62976
	r11.u64 = r11.u64 & 62976;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi cr6,r11,512
	cr6.compare<int32_t>(r11.s32, 512, xer);
	// bne cr6,0x822d2d98
	if (!cr6.eq) goto loc_822D2D98;
	// li r5,516
	ctx.r5.s64 = 516;
	// b 0x822d2ee4
	goto loc_822D2EE4;
loc_822D2D98:
	// lwz r11,-8684(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -8684);
	// lwz r4,164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// lwz r11,824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 824);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8226dd10
	sub_8226DD10(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x822d2ed0
	if (!cr6.lt) goto loc_822D2ED0;
	// addi r3,r30,-180
	ctx.r3.s64 = r30.s64 + -180;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82195548
	sub_82195548(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x822d2ed0
	if (cr0.eq) goto loc_822D2ED0;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-8260(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8260);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-8264
	r29.s64 = ctx.r9.s64 + -8264;
	// bne 0x822d2e14
	if (!cr0.eq) goto loc_822D2E14;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8260(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8260, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29184
	ctx.r4.s64 = r11.s64 + 29184;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822D2E14:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82315578
	sub_82315578(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d2ed0
	if (cr0.eq) goto loc_822D2ED0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r29,172(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822a2920
	sub_822A2920(ctx, base);
	// subf r11,r3,r29
	r11.s64 = r29.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d2ed0
	if (!cr0.eq) goto loc_822D2ED0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// bl 0x8216a588
	sub_8216A588(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f30.f64);
	// bne cr6,0x822d2ed0
	if (!cr6.eq) goto loc_822D2ED0;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d2ec0
	if (cr0.eq) goto loc_822D2EC0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e4c80
	sub_822E4C80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d2ec4
	goto loc_822D2EC4;
loc_822D2EC0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D2EC4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82198348
	sub_82198348(ctx, base);
loc_822D2ED0:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// bl 0x8216a470
	sub_8216A470(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d2efc
	if (cr0.eq) goto loc_822D2EFC;
	// li r5,4
	ctx.r5.s64 = 4;
loc_822D2EE4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// lfs f1,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8216ada8
	sub_8216ADA8(ctx, base);
loc_822D2EFC:
	// lbz r11,184(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 184);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d2f18
	if (cr0.eq) goto loc_822D2F18;
	// lbz r11,185(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 185);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x822d2f1c
	if (!cr0.eq) goto loc_822D2F1C;
loc_822D2F18:
	// li r11,0
	r11.s64 = 0;
loc_822D2F1C:
	// addi r28,r30,188
	r28.s64 = r30.s64 + 188;
	// clrlwi r27,r11,24
	r27.u64 = r11.u32 & 0xFF;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x822d2f48
	goto loc_822D2F48;
loc_822D2F2C:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_822D2F48:
	// subf r11,r29,r28
	r11.s64 = r28.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822d2f2c
	if (!cr0.eq) goto loc_822D2F2C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8214fcb0
	sub_8214FCB0(ctx, base);
loc_822D2F68:
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d2f7c
	if (cr0.eq) goto loc_822D2F7C;
	// addi r4,r30,268
	ctx.r4.s64 = r30.s64 + 268;
	// bl 0x821af870
	sub_821AF870(ctx, base);
loc_822D2F7C:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822D2B90"))) PPC_WEAK_FUNC(sub_822D2B90);
PPC_FUNC_IMPL(__imp__sub_822D2B90) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d2f7c
	if (cr6.eq) goto loc_822D2F7C;
	// lbz r11,256(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 256);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d2bd0
	if (cr0.eq) goto loc_822D2BD0;
	// addi r3,r30,-360
	ctx.r3.s64 = r30.s64 + -360;
	// bl 0x822d2038
	sub_822D2038(ctx, base);
	// b 0x822d2f68
	goto loc_822D2F68;
loc_822D2BD0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r24,r30,236
	r24.s64 = r30.s64 + 236;
	// addi r27,r11,-5056
	r27.s64 = r11.s64 + -5056;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82311988
	sub_82311988(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82197fb0
	sub_82197FB0(ctx, base);
	// lbz r11,232(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 232);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// beq 0x822d2c7c
	if (cr0.eq) goto loc_822D2C7C;
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d2c7c
	if (!cr0.eq) goto loc_822D2C7C;
	// addi r29,r30,-360
	r29.s64 = r30.s64 + -360;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d1288
	sub_822D1288(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f30.f64);
	// bge cr6,0x822d2c7c
	if (!cr6.lt) goto loc_822D2C7C;
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,6212
	ctx.r10.s64 = ctx.r10.s64 + 6212;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_822D2C44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d2c68
	if (cr0.eq) goto loc_822D2C68;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x822d2c44
	if (cr6.eq) goto loc_822D2C44;
loc_822D2C68:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x822d2c7c
	if (!cr0.eq) goto loc_822D2C7C;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d11d0
	sub_822D11D0(ctx, base);
loc_822D2C7C:
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d2c98
	if (cr0.eq) goto loc_822D2C98;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x822d2c9c
	if (!cr6.eq) goto loc_822D2C9C;
loc_822D2C98:
	// li r11,0
	r11.s64 = 0;
loc_822D2C9C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d2efc
	if (!cr0.eq) goto loc_822D2EFC;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// bl 0x8216a470
	sub_8216A470(ctx, base);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r25,r11,28160
	r25.s64 = r11.s64 + 28160;
	// bne 0x822d2d14
	if (!cr0.eq) goto loc_822D2D14;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// lfs f0,16(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 16);
	f0.f64 = double(temp.f32);
	// lwz r29,52(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// blt cr6,0x822d2d14
	if (cr6.lt) goto loc_822D2D14;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82311998
	sub_82311998(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// bge cr6,0x822d2d14
	if (!cr6.lt) goto loc_822D2D14;
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwinm. r11,r11,0,15,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d2d14
	if (cr0.eq) goto loc_822D2D14;
	// lwz r11,-8684(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -8684);
	// lwz r11,824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 824);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x822d2d14
	if (cr6.gt) goto loc_822D2D14;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// bl 0x8216a520
	sub_8216A520(ctx, base);
loc_822D2D14:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// bl 0x8216a470
	sub_8216A470(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d2efc
	if (cr0.eq) goto loc_822D2EFC;
	// addi r27,r30,-360
	r27.s64 = r30.s64 + -360;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d14b8
	sub_822D14B8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,28300
	ctx.r10.s64 = r11.s64 + 28300;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_822D2D4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822d2d70
	if (cr0.eq) goto loc_822D2D70;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x822d2d4c
	if (cr6.eq) goto loc_822D2D4C;
loc_822D2D70:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x822d2d98
	if (!cr0.eq) goto loc_822D2D98;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// bl 0x8216a690
	sub_8216A690(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// andi. r11,r11,62976
	r11.u64 = r11.u64 & 62976;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi cr6,r11,512
	cr6.compare<int32_t>(r11.s32, 512, xer);
	// bne cr6,0x822d2d98
	if (!cr6.eq) goto loc_822D2D98;
	// li r5,516
	ctx.r5.s64 = 516;
	// b 0x822d2ee4
	goto loc_822D2EE4;
loc_822D2D98:
	// lwz r11,-8684(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -8684);
	// lwz r4,164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// lwz r11,824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 824);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8226dd10
	sub_8226DD10(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x822d2ed0
	if (!cr6.lt) goto loc_822D2ED0;
	// addi r3,r30,-180
	ctx.r3.s64 = r30.s64 + -180;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82195548
	sub_82195548(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x822d2ed0
	if (cr0.eq) goto loc_822D2ED0;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-8260(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8260);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-8264
	r29.s64 = ctx.r9.s64 + -8264;
	// bne 0x822d2e14
	if (!cr0.eq) goto loc_822D2E14;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8260(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8260, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29184
	ctx.r4.s64 = r11.s64 + 29184;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822D2E14:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82315578
	sub_82315578(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d2ed0
	if (cr0.eq) goto loc_822D2ED0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r29,172(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822a2920
	sub_822A2920(ctx, base);
	// subf r11,r3,r29
	r11.s64 = r29.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d2ed0
	if (!cr0.eq) goto loc_822D2ED0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// bl 0x8216a588
	sub_8216A588(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f30.f64);
	// bne cr6,0x822d2ed0
	if (!cr6.eq) goto loc_822D2ED0;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d2ec0
	if (cr0.eq) goto loc_822D2EC0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e4c80
	sub_822E4C80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d2ec4
	goto loc_822D2EC4;
loc_822D2EC0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D2EC4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82198348
	sub_82198348(ctx, base);
loc_822D2ED0:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// bl 0x8216a470
	sub_8216A470(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d2efc
	if (cr0.eq) goto loc_822D2EFC;
	// li r5,4
	ctx.r5.s64 = 4;
loc_822D2EE4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// lfs f1,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8216ada8
	sub_8216ADA8(ctx, base);
loc_822D2EFC:
	// lbz r11,184(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 184);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d2f18
	if (cr0.eq) goto loc_822D2F18;
	// lbz r11,185(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 185);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x822d2f1c
	if (!cr0.eq) goto loc_822D2F1C;
loc_822D2F18:
	// li r11,0
	r11.s64 = 0;
loc_822D2F1C:
	// addi r28,r30,188
	r28.s64 = r30.s64 + 188;
	// clrlwi r27,r11,24
	r27.u64 = r11.u32 & 0xFF;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x822d2f48
	goto loc_822D2F48;
loc_822D2F2C:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_822D2F48:
	// subf r11,r29,r28
	r11.s64 = r28.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822d2f2c
	if (!cr0.eq) goto loc_822D2F2C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8214fcb0
	sub_8214FCB0(ctx, base);
loc_822D2F68:
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d2f7c
	if (cr0.eq) goto loc_822D2F7C;
	// addi r4,r30,268
	ctx.r4.s64 = r30.s64 + 268;
	// bl 0x821af870
	sub_821AF870(ctx, base);
loc_822D2F7C:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822D2F8C"))) PPC_WEAK_FUNC(sub_822D2F8C);
PPC_FUNC_IMPL(__imp__sub_822D2F8C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8260
	r11.s64 = r11.s64 + -8260;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8260
	ctx.r10.s64 = ctx.r10.s64 + -8260;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2FB4"))) PPC_WEAK_FUNC(sub_822D2FB4);
PPC_FUNC_IMPL(__imp__sub_822D2FB4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2FDC"))) PPC_WEAK_FUNC(sub_822D2FDC);
PPC_FUNC_IMPL(__imp__sub_822D2FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2FE0"))) PPC_WEAK_FUNC(sub_822D2FE0);
PPC_FUNC_IMPL(__imp__sub_822D2FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,29648(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29648);
	// mflr r12
	// bl 0x8239bce8
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8192
	r29.s64 = ctx.r10.s64 + -8192;
	// bne 0x822d3054
	if (!cr0.eq) goto loc_822D3054;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3612
	ctx.r4.s64 = r11.s64 + -3612;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3054:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d3084
	if (cr0.eq) goto loc_822D3084;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// addi r4,r11,6212
	ctx.r4.s64 = r11.s64 + 6212;
loc_822D3078:
	// bl 0x822d24a0
	sub_822D24A0(ctx, base);
loc_822D307C:
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x822d3708
	goto loc_822D3708;
loc_822D3084:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r10,28300
	r28.s64 = ctx.r10.s64 + 28300;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8196
	r29.s64 = ctx.r10.s64 + -8196;
	// bne 0x822d30b4
	if (!cr0.eq) goto loc_822D30B4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D30B4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d30d8
	if (cr0.eq) goto loc_822D30D8;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x822d3078
	goto loc_822D3078;
loc_822D30D8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8200
	r29.s64 = ctx.r10.s64 + -8200;
	// bne 0x822d3104
	if (!cr0.eq) goto loc_822D3104;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29476
	ctx.r4.s64 = r11.s64 + 29476;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3104:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d312c
	if (cr0.eq) goto loc_822D312C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// addi r4,r11,6204
	ctx.r4.s64 = r11.s64 + 6204;
	// b 0x822d3078
	goto loc_822D3078;
loc_822D312C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8204
	r29.s64 = ctx.r10.s64 + -8204;
	// bne 0x822d3158
	if (!cr0.eq) goto loc_822D3158;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29464
	ctx.r4.s64 = r11.s64 + 29464;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3158:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d3184
	if (cr0.eq) goto loc_822D3184;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// addi r4,r11,6204
	ctx.r4.s64 = r11.s64 + 6204;
loc_822D317C:
	// bl 0x822d26a8
	sub_822D26A8(ctx, base);
	// b 0x822d307c
	goto loc_822D307C;
loc_822D3184:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8208
	r29.s64 = ctx.r10.s64 + -8208;
	// bne 0x822d31b0
	if (!cr0.eq) goto loc_822D31B0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29452
	ctx.r4.s64 = r11.s64 + 29452;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D31B0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d31d8
	if (cr0.eq) goto loc_822D31D8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// addi r4,r11,27148
	ctx.r4.s64 = r11.s64 + 27148;
	// b 0x822d3078
	goto loc_822D3078;
loc_822D31D8:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8212
	r29.s64 = ctx.r10.s64 + -8212;
	// bne 0x822d3204
	if (!cr0.eq) goto loc_822D3204;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29436
	ctx.r4.s64 = r11.s64 + 29436;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3204:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d322c
	if (cr0.eq) goto loc_822D322C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// addi r4,r11,27148
	ctx.r4.s64 = r11.s64 + 27148;
	// b 0x822d317c
	goto loc_822D317C;
loc_822D322C:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8216
	r29.s64 = ctx.r10.s64 + -8216;
	// bne 0x822d3258
	if (!cr0.eq) goto loc_822D3258;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,28288
	ctx.r4.s64 = r11.s64 + 28288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3258:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d3284
	if (cr0.eq) goto loc_822D3284;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// addi r4,r11,29424
	ctx.r4.s64 = r11.s64 + 29424;
loc_822D327C:
	// bl 0x822d2780
	sub_822D2780(ctx, base);
	// b 0x822d307c
	goto loc_822D307C;
loc_822D3284:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r10,6236
	r28.s64 = ctx.r10.s64 + 6236;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8220
	r29.s64 = ctx.r10.s64 + -8220;
	// bne 0x822d32b4
	if (!cr0.eq) goto loc_822D32B4;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D32B4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d32d8
	if (cr0.eq) goto loc_822D32D8;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x822d327c
	goto loc_822D327C;
loc_822D32D8:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r10,6248
	r28.s64 = ctx.r10.s64 + 6248;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8224
	r29.s64 = ctx.r10.s64 + -8224;
	// bne 0x822d3308
	if (!cr0.eq) goto loc_822D3308;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3308:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d332c
	if (cr0.eq) goto loc_822D332C;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x822d327c
	goto loc_822D327C;
loc_822D332C:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8228
	r29.s64 = ctx.r10.s64 + -8228;
	// bne 0x822d3358
	if (!cr0.eq) goto loc_822D3358;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29408
	ctx.r4.s64 = r11.s64 + 29408;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3358:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d3390
	if (cr0.eq) goto loc_822D3390;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// bl 0x822d22e0
	sub_822D22E0(ctx, base);
	// b 0x822d307c
	goto loc_822D307C;
loc_822D3390:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8232
	r29.s64 = ctx.r10.s64 + -8232;
	// bne 0x822d33bc
	if (!cr0.eq) goto loc_822D33BC;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29392
	ctx.r4.s64 = r11.s64 + 29392;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D33BC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d3418
	if (cr0.eq) goto loc_822D3418;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r25,-720
	ctx.r4.s64 = r25.s64 + -720;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822d28e8
	sub_822D28E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822d3414
	if (cr6.eq) goto loc_822D3414;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d370c
	if (cr0.eq) goto loc_822D370C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_822D340C:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822d370c
	goto loc_822D370C;
loc_822D3414:
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3418:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8236
	r29.s64 = ctx.r10.s64 + -8236;
	// bne 0x822d3444
	if (!cr0.eq) goto loc_822D3444;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26960
	ctx.r4.s64 = r11.s64 + 26960;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3444:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d349c
	if (cr0.eq) goto loc_822D349C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r25,-720
	ctx.r4.s64 = r25.s64 + -720;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822d1d30
	sub_822D1D30(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822d3498
	if (cr6.eq) goto loc_822D3498;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d370c
	if (cr0.eq) goto loc_822D370C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822d340c
	goto loc_822D340C;
loc_822D3498:
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D349C:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8240
	r29.s64 = ctx.r10.s64 + -8240;
	// bne 0x822d34c8
	if (!cr0.eq) goto loc_822D34C8;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29372
	ctx.r4.s64 = r11.s64 + 29372;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D34C8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d350c
	if (cr0.eq) goto loc_822D350C;
	// lwz r3,-244(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -244);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d34fc
	if (cr0.eq) goto loc_822D34FC;
	// bl 0x8218a568
	sub_8218A568(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x822d3500
	if (!cr0.eq) goto loc_822D3500;
loc_822D34FC:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_822D3500:
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x822d370c
	goto loc_822D370C;
loc_822D350C:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8244
	r29.s64 = ctx.r10.s64 + -8244;
	// bne 0x822d3538
	if (!cr0.eq) goto loc_822D3538;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29352
	ctx.r4.s64 = r11.s64 + 29352;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3538:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d3588
	if (cr0.eq) goto loc_822D3588;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lwz r3,-248(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -248);
	// bl 0x8216a588
	sub_8216A588(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x822d34fc
	if (!cr6.gt) goto loc_822D34FC;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// lwz r3,-248(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -248);
	// bl 0x8216a588
	sub_8216A588(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x822d3500
	if (!cr6.gt) goto loc_822D3500;
	// b 0x822d34fc
	goto loc_822D34FC;
loc_822D3588:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8248
	r29.s64 = ctx.r10.s64 + -8248;
	// bne 0x822d35b4
	if (!cr0.eq) goto loc_822D35B4;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29328
	ctx.r4.s64 = r11.s64 + 29328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D35B4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d35e4
	if (cr0.eq) goto loc_822D35E4;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// bl 0x822d13b0
	sub_822D13B0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// b 0x822d370c
	goto loc_822D370C;
loc_822D35E4:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8252
	r29.s64 = ctx.r10.s64 + -8252;
	// bne 0x822d3610
	if (!cr0.eq) goto loc_822D3610;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29312
	ctx.r4.s64 = r11.s64 + 29312;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3610:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d363c
	if (cr0.eq) goto loc_822D363C;
	// stw r26,-200(r25)
	PPC_STORE_U32(r25.u32 + -200, r26.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x822d3710
	goto loc_822D3710;
loc_822D363C:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8256
	r29.s64 = ctx.r10.s64 + -8256;
	// bne 0x822d3664
	if (!cr0.eq) goto loc_822D3664;
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,13528
	ctx.r4.s64 = r11.s64 + 13528;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822D3664:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d36c0
	if (cr0.eq) goto loc_822D36C0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,-204(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + -204);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r11,176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822d36a0
	if (!cr0.eq) goto loc_822D36A0;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x822d36b0
	goto loc_822D36B0;
loc_822D36A0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_822D36B0:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// b 0x822d370c
	goto loc_822D370C;
loc_822D36C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r25,-200
	ctx.r4.s64 = r25.s64 + -200;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82126568
	sub_82126568(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822d3700
	if (cr6.eq) goto loc_822D3700;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d370c
	if (cr0.eq) goto loc_822D370C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x822d340c
	goto loc_822D340C;
loc_822D3700:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_822D3708:
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
loc_822D370C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822D3710:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822D2FE8"))) PPC_WEAK_FUNC(sub_822D2FE8);
PPC_FUNC_IMPL(__imp__sub_822D2FE8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8192
	r29.s64 = ctx.r10.s64 + -8192;
	// bne 0x822d3054
	if (!cr0.eq) goto loc_822D3054;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3612
	ctx.r4.s64 = r11.s64 + -3612;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3054:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d3084
	if (cr0.eq) goto loc_822D3084;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// addi r4,r11,6212
	ctx.r4.s64 = r11.s64 + 6212;
loc_822D3078:
	// bl 0x822d24a0
	sub_822D24A0(ctx, base);
loc_822D307C:
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x822d3708
	goto loc_822D3708;
loc_822D3084:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r10,28300
	r28.s64 = ctx.r10.s64 + 28300;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8196
	r29.s64 = ctx.r10.s64 + -8196;
	// bne 0x822d30b4
	if (!cr0.eq) goto loc_822D30B4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D30B4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d30d8
	if (cr0.eq) goto loc_822D30D8;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x822d3078
	goto loc_822D3078;
loc_822D30D8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8200
	r29.s64 = ctx.r10.s64 + -8200;
	// bne 0x822d3104
	if (!cr0.eq) goto loc_822D3104;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29476
	ctx.r4.s64 = r11.s64 + 29476;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3104:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d312c
	if (cr0.eq) goto loc_822D312C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// addi r4,r11,6204
	ctx.r4.s64 = r11.s64 + 6204;
	// b 0x822d3078
	goto loc_822D3078;
loc_822D312C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8204
	r29.s64 = ctx.r10.s64 + -8204;
	// bne 0x822d3158
	if (!cr0.eq) goto loc_822D3158;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29464
	ctx.r4.s64 = r11.s64 + 29464;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3158:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d3184
	if (cr0.eq) goto loc_822D3184;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// addi r4,r11,6204
	ctx.r4.s64 = r11.s64 + 6204;
loc_822D317C:
	// bl 0x822d26a8
	sub_822D26A8(ctx, base);
	// b 0x822d307c
	goto loc_822D307C;
loc_822D3184:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8208
	r29.s64 = ctx.r10.s64 + -8208;
	// bne 0x822d31b0
	if (!cr0.eq) goto loc_822D31B0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29452
	ctx.r4.s64 = r11.s64 + 29452;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D31B0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d31d8
	if (cr0.eq) goto loc_822D31D8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// addi r4,r11,27148
	ctx.r4.s64 = r11.s64 + 27148;
	// b 0x822d3078
	goto loc_822D3078;
loc_822D31D8:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8212
	r29.s64 = ctx.r10.s64 + -8212;
	// bne 0x822d3204
	if (!cr0.eq) goto loc_822D3204;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29436
	ctx.r4.s64 = r11.s64 + 29436;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3204:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d322c
	if (cr0.eq) goto loc_822D322C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// addi r4,r11,27148
	ctx.r4.s64 = r11.s64 + 27148;
	// b 0x822d317c
	goto loc_822D317C;
loc_822D322C:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8216
	r29.s64 = ctx.r10.s64 + -8216;
	// bne 0x822d3258
	if (!cr0.eq) goto loc_822D3258;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,28288
	ctx.r4.s64 = r11.s64 + 28288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3258:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d3284
	if (cr0.eq) goto loc_822D3284;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// addi r4,r11,29424
	ctx.r4.s64 = r11.s64 + 29424;
loc_822D327C:
	// bl 0x822d2780
	sub_822D2780(ctx, base);
	// b 0x822d307c
	goto loc_822D307C;
loc_822D3284:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r10,6236
	r28.s64 = ctx.r10.s64 + 6236;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8220
	r29.s64 = ctx.r10.s64 + -8220;
	// bne 0x822d32b4
	if (!cr0.eq) goto loc_822D32B4;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D32B4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d32d8
	if (cr0.eq) goto loc_822D32D8;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x822d327c
	goto loc_822D327C;
loc_822D32D8:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r10,6248
	r28.s64 = ctx.r10.s64 + 6248;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8224
	r29.s64 = ctx.r10.s64 + -8224;
	// bne 0x822d3308
	if (!cr0.eq) goto loc_822D3308;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3308:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d332c
	if (cr0.eq) goto loc_822D332C;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x822d327c
	goto loc_822D327C;
loc_822D332C:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8228
	r29.s64 = ctx.r10.s64 + -8228;
	// bne 0x822d3358
	if (!cr0.eq) goto loc_822D3358;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29408
	ctx.r4.s64 = r11.s64 + 29408;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3358:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d3390
	if (cr0.eq) goto loc_822D3390;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// bl 0x822d22e0
	sub_822D22E0(ctx, base);
	// b 0x822d307c
	goto loc_822D307C;
loc_822D3390:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8232
	r29.s64 = ctx.r10.s64 + -8232;
	// bne 0x822d33bc
	if (!cr0.eq) goto loc_822D33BC;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29392
	ctx.r4.s64 = r11.s64 + 29392;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D33BC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d3418
	if (cr0.eq) goto loc_822D3418;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r25,-720
	ctx.r4.s64 = r25.s64 + -720;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822d28e8
	sub_822D28E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822d3414
	if (cr6.eq) goto loc_822D3414;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d370c
	if (cr0.eq) goto loc_822D370C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_822D340C:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822d370c
	goto loc_822D370C;
loc_822D3414:
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3418:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8236
	r29.s64 = ctx.r10.s64 + -8236;
	// bne 0x822d3444
	if (!cr0.eq) goto loc_822D3444;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26960
	ctx.r4.s64 = r11.s64 + 26960;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3444:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d349c
	if (cr0.eq) goto loc_822D349C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r25,-720
	ctx.r4.s64 = r25.s64 + -720;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822d1d30
	sub_822D1D30(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822d3498
	if (cr6.eq) goto loc_822D3498;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d370c
	if (cr0.eq) goto loc_822D370C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822d340c
	goto loc_822D340C;
loc_822D3498:
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D349C:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8240
	r29.s64 = ctx.r10.s64 + -8240;
	// bne 0x822d34c8
	if (!cr0.eq) goto loc_822D34C8;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29372
	ctx.r4.s64 = r11.s64 + 29372;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D34C8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d350c
	if (cr0.eq) goto loc_822D350C;
	// lwz r3,-244(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -244);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d34fc
	if (cr0.eq) goto loc_822D34FC;
	// bl 0x8218a568
	sub_8218A568(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x822d3500
	if (!cr0.eq) goto loc_822D3500;
loc_822D34FC:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_822D3500:
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x822d370c
	goto loc_822D370C;
loc_822D350C:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8244
	r29.s64 = ctx.r10.s64 + -8244;
	// bne 0x822d3538
	if (!cr0.eq) goto loc_822D3538;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29352
	ctx.r4.s64 = r11.s64 + 29352;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3538:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d3588
	if (cr0.eq) goto loc_822D3588;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lwz r3,-248(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -248);
	// bl 0x8216a588
	sub_8216A588(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x822d34fc
	if (!cr6.gt) goto loc_822D34FC;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// lwz r3,-248(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -248);
	// bl 0x8216a588
	sub_8216A588(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x822d3500
	if (!cr6.gt) goto loc_822D3500;
	// b 0x822d34fc
	goto loc_822D34FC;
loc_822D3588:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8248
	r29.s64 = ctx.r10.s64 + -8248;
	// bne 0x822d35b4
	if (!cr0.eq) goto loc_822D35B4;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29328
	ctx.r4.s64 = r11.s64 + 29328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D35B4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d35e4
	if (cr0.eq) goto loc_822D35E4;
	// addi r3,r25,-720
	ctx.r3.s64 = r25.s64 + -720;
	// bl 0x822d13b0
	sub_822D13B0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// b 0x822d370c
	goto loc_822D370C;
loc_822D35E4:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8252
	r29.s64 = ctx.r10.s64 + -8252;
	// bne 0x822d3610
	if (!cr0.eq) goto loc_822D3610;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29312
	ctx.r4.s64 = r11.s64 + 29312;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8188);
loc_822D3610:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d363c
	if (cr0.eq) goto loc_822D363C;
	// stw r26,-200(r25)
	PPC_STORE_U32(r25.u32 + -200, r26.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x822d3710
	goto loc_822D3710;
loc_822D363C:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8256
	r29.s64 = ctx.r10.s64 + -8256;
	// bne 0x822d3664
	if (!cr0.eq) goto loc_822D3664;
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// stw r11,-8188(r30)
	PPC_STORE_U32(r30.u32 + -8188, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,13528
	ctx.r4.s64 = r11.s64 + 13528;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822D3664:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d36c0
	if (cr0.eq) goto loc_822D36C0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,-204(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + -204);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r11,176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822d36a0
	if (!cr0.eq) goto loc_822D36A0;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x822d36b0
	goto loc_822D36B0;
loc_822D36A0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_822D36B0:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// b 0x822d370c
	goto loc_822D370C;
loc_822D36C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r25,-200
	ctx.r4.s64 = r25.s64 + -200;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82126568
	sub_82126568(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822d3700
	if (cr6.eq) goto loc_822D3700;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d370c
	if (cr0.eq) goto loc_822D370C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x822d340c
	goto loc_822D340C;
loc_822D3700:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_822D3708:
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
loc_822D370C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822D3710:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822D371C"))) PPC_WEAK_FUNC(sub_822D371C);
PPC_FUNC_IMPL(__imp__sub_822D371C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3744"))) PPC_WEAK_FUNC(sub_822D3744);
PPC_FUNC_IMPL(__imp__sub_822D3744) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D376C"))) PPC_WEAK_FUNC(sub_822D376C);
PPC_FUNC_IMPL(__imp__sub_822D376C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3794"))) PPC_WEAK_FUNC(sub_822D3794);
PPC_FUNC_IMPL(__imp__sub_822D3794) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D37BC"))) PPC_WEAK_FUNC(sub_822D37BC);
PPC_FUNC_IMPL(__imp__sub_822D37BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D37E4"))) PPC_WEAK_FUNC(sub_822D37E4);
PPC_FUNC_IMPL(__imp__sub_822D37E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D380C"))) PPC_WEAK_FUNC(sub_822D380C);
PPC_FUNC_IMPL(__imp__sub_822D380C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3834"))) PPC_WEAK_FUNC(sub_822D3834);
PPC_FUNC_IMPL(__imp__sub_822D3834) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D385C"))) PPC_WEAK_FUNC(sub_822D385C);
PPC_FUNC_IMPL(__imp__sub_822D385C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3884"))) PPC_WEAK_FUNC(sub_822D3884);
PPC_FUNC_IMPL(__imp__sub_822D3884) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D38AC"))) PPC_WEAK_FUNC(sub_822D38AC);
PPC_FUNC_IMPL(__imp__sub_822D38AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D38D4"))) PPC_WEAK_FUNC(sub_822D38D4);
PPC_FUNC_IMPL(__imp__sub_822D38D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D38FC"))) PPC_WEAK_FUNC(sub_822D38FC);
PPC_FUNC_IMPL(__imp__sub_822D38FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3924"))) PPC_WEAK_FUNC(sub_822D3924);
PPC_FUNC_IMPL(__imp__sub_822D3924) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D394C"))) PPC_WEAK_FUNC(sub_822D394C);
PPC_FUNC_IMPL(__imp__sub_822D394C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3974"))) PPC_WEAK_FUNC(sub_822D3974);
PPC_FUNC_IMPL(__imp__sub_822D3974) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D399C"))) PPC_WEAK_FUNC(sub_822D399C);
PPC_FUNC_IMPL(__imp__sub_822D399C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D39C4"))) PPC_WEAK_FUNC(sub_822D39C4);
PPC_FUNC_IMPL(__imp__sub_822D39C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,17,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D39EC"))) PPC_WEAK_FUNC(sub_822D39EC);
PPC_FUNC_IMPL(__imp__sub_822D39EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8188
	r11.s64 = r11.s64 + -8188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,16,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3A14"))) PPC_WEAK_FUNC(sub_822D3A14);
PPC_FUNC_IMPL(__imp__sub_822D3A14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3A3C"))) PPC_WEAK_FUNC(sub_822D3A3C);
PPC_FUNC_IMPL(__imp__sub_822D3A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3A40"))) PPC_WEAK_FUNC(sub_822D3A40);
PPC_FUNC_IMPL(__imp__sub_822D3A40) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8214fe10
	sub_8214FE10(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,7360
	ctx.r6.s64 = r11.s64 + 7360;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d3aa4
	if (cr0.eq) goto loc_822D3AA4;
	// addi r4,r30,548
	ctx.r4.s64 = r30.s64 + 548;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x822d2a40
	sub_822D2A40(ctx, base);
loc_822D3AA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_822D3ABC"))) PPC_WEAK_FUNC(sub_822D3ABC);
PPC_FUNC_IMPL(__imp__sub_822D3ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3AC0"))) PPC_WEAK_FUNC(sub_822D3AC0);
PPC_FUNC_IMPL(__imp__sub_822D3AC0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8214fef0
	sub_8214FEF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,548
	ctx.r3.s64 = r31.s64 + 548;
	// bl 0x822d2b00
	sub_822D2B00(ctx, base);
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

__attribute__((alias("__imp__sub_822D3B04"))) PPC_WEAK_FUNC(sub_822D3B04);
PPC_FUNC_IMPL(__imp__sub_822D3B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3B08"))) PPC_WEAK_FUNC(sub_822D3B08);
PPC_FUNC_IMPL(__imp__sub_822D3B08) {
	PPC_FUNC_PROLOGUE();
	// b 0x822d2aa8
	sub_822D2AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D3B0C"))) PPC_WEAK_FUNC(sub_822D3B0C);
PPC_FUNC_IMPL(__imp__sub_822D3B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3B10"))) PPC_WEAK_FUNC(sub_822D3B10);
PPC_FUNC_IMPL(__imp__sub_822D3B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,30080(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 30080);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82153050
	sub_82153050(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r4,112(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 112);
	// li r11,0
	r11.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lfs f0,-20976(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20976);
	f0.f64 = double(temp.f32);
	// stfs f0,260(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 260, temp.u32);
	// stb r11,256(r29)
	PPC_STORE_U8(r29.u32 + 256, r11.u8);
	// stb r27,257(r29)
	PPC_STORE_U8(r29.u32 + 257, r27.u8);
	// stw r11,264(r29)
	PPC_STORE_U32(r29.u32 + 264, r11.u32);
	// stw r11,332(r29)
	PPC_STORE_U32(r29.u32 + 332, r11.u32);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r11,-8180(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8180);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822d3bb0
	if (!cr0.eq) goto loc_822D3BB0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8180(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8180, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,5936
	ctx.r4.s64 = r11.s64 + 5936;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,-8184(r28)
	PPC_STORE_U32(r28.u32 + -8184, ctx.r4.u32);
	// b 0x822d3bb4
	goto loc_822D3BB4;
loc_822D3BB0:
	// lwz r4,-8184(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + -8184);
loc_822D3BB4:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x822d3be8
	if (!cr6.eq) goto loc_822D3BE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d3c2c
	if (cr0.eq) goto loc_822D3C2C;
loc_822D3BE8:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,156(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 156);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822bd590
	sub_822BD590(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822bd548
	sub_822BD548(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r29,-360
	ctx.r3.s64 = r29.s64 + -360;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822b21d0
	sub_822B21D0(ctx, base);
loc_822D3C2C:
	// addi r3,r29,-360
	ctx.r3.s64 = r29.s64 + -360;
	// bl 0x822d16b8
	sub_822D16B8(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r4,112(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 112);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,28300
	ctx.r4.s64 = r11.s64 + 28300;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// stw r3,160(r29)
	PPC_STORE_U32(r29.u32 + 160, ctx.r3.u32);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r4,112(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 112);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,30052
	ctx.r4.s64 = r11.s64 + 30052;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// stw r3,252(r29)
	PPC_STORE_U32(r29.u32 + 252, ctx.r3.u32);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// addi r9,r29,168
	ctx.r9.s64 = r29.s64 + 168;
	// stb r27,185(r29)
	PPC_STORE_U8(r29.u32 + 185, r27.u8);
	// stb r27,184(r29)
	PPC_STORE_U8(r29.u32 + 184, r27.u8);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x822d3cd0
	if (cr6.eq) goto loc_822D3CD0;
	// subf r8,r11,r11
	ctx.r8.s64 = r11.s64 - r11.s64;
	// srawi. r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x822d3ccc
	if (!cr0.gt) goto loc_822D3CCC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_822D3CB8:
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bgt 0x822d3cb8
	if (cr0.gt) goto loc_822D3CB8;
loc_822D3CCC:
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_822D3CD0:
	// lwz r10,-356(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -356);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,30036
	ctx.r4.s64 = r11.s64 + 30036;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r28,-352(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + -352);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,30024
	ctx.r4.s64 = r11.s64 + 30024;
	// stw r10,164(r29)
	PPC_STORE_U32(r29.u32 + 164, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,30008
	ctx.r4.s64 = r11.s64 + 30008;
	// stw r10,344(r29)
	PPC_STORE_U32(r29.u32 + 344, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6296
	ctx.r4.s64 = r11.s64 + 6296;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,348(r29)
	PPC_STORE_U32(r29.u32 + 348, ctx.r10.u32);
	// lis r29,3
	r29.s64 = 196608;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6280
	ctx.r4.s64 = r11.s64 + 6280;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6264
	ctx.r4.s64 = r11.s64 + 6264;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,6168
	r28.s64 = r11.s64 + 6168;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lis r29,2
	r29.s64 = 131072;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,29424
	ctx.r4.s64 = r11.s64 + 29424;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6236
	ctx.r4.s64 = r11.s64 + 6236;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6248
	ctx.r4.s64 = r11.s64 + 6248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6348
	ctx.r4.s64 = r11.s64 + 6348;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lis r29,4
	r29.s64 = 262144;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6220
	ctx.r4.s64 = r11.s64 + 6220;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6312
	ctx.r4.s64 = r11.s64 + 6312;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lis r30,8
	r30.s64 = 524288;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D3B18"))) PPC_WEAK_FUNC(sub_822D3B18);
PPC_FUNC_IMPL(__imp__sub_822D3B18) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82153050
	sub_82153050(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r4,112(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 112);
	// li r11,0
	r11.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lfs f0,-20976(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20976);
	f0.f64 = double(temp.f32);
	// stfs f0,260(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 260, temp.u32);
	// stb r11,256(r29)
	PPC_STORE_U8(r29.u32 + 256, r11.u8);
	// stb r27,257(r29)
	PPC_STORE_U8(r29.u32 + 257, r27.u8);
	// stw r11,264(r29)
	PPC_STORE_U32(r29.u32 + 264, r11.u32);
	// stw r11,332(r29)
	PPC_STORE_U32(r29.u32 + 332, r11.u32);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r11,-8180(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8180);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822d3bb0
	if (!cr0.eq) goto loc_822D3BB0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8180(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8180, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,5936
	ctx.r4.s64 = r11.s64 + 5936;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,-8184(r28)
	PPC_STORE_U32(r28.u32 + -8184, ctx.r4.u32);
	// b 0x822d3bb4
	goto loc_822D3BB4;
loc_822D3BB0:
	// lwz r4,-8184(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + -8184);
loc_822D3BB4:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x822d3be8
	if (!cr6.eq) goto loc_822D3BE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d3c2c
	if (cr0.eq) goto loc_822D3C2C;
loc_822D3BE8:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,156(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 156);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822bd590
	sub_822BD590(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822bd548
	sub_822BD548(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r29,-360
	ctx.r3.s64 = r29.s64 + -360;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822b21d0
	sub_822B21D0(ctx, base);
loc_822D3C2C:
	// addi r3,r29,-360
	ctx.r3.s64 = r29.s64 + -360;
	// bl 0x822d16b8
	sub_822D16B8(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r4,112(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 112);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,28300
	ctx.r4.s64 = r11.s64 + 28300;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// stw r3,160(r29)
	PPC_STORE_U32(r29.u32 + 160, ctx.r3.u32);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r4,112(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 112);
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,30052
	ctx.r4.s64 = r11.s64 + 30052;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// stw r3,252(r29)
	PPC_STORE_U32(r29.u32 + 252, ctx.r3.u32);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// addi r9,r29,168
	ctx.r9.s64 = r29.s64 + 168;
	// stb r27,185(r29)
	PPC_STORE_U8(r29.u32 + 185, r27.u8);
	// stb r27,184(r29)
	PPC_STORE_U8(r29.u32 + 184, r27.u8);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x822d3cd0
	if (cr6.eq) goto loc_822D3CD0;
	// subf r8,r11,r11
	ctx.r8.s64 = r11.s64 - r11.s64;
	// srawi. r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x822d3ccc
	if (!cr0.gt) goto loc_822D3CCC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_822D3CB8:
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bgt 0x822d3cb8
	if (cr0.gt) goto loc_822D3CB8;
loc_822D3CCC:
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_822D3CD0:
	// lwz r10,-356(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -356);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,30036
	ctx.r4.s64 = r11.s64 + 30036;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r28,-352(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + -352);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,30024
	ctx.r4.s64 = r11.s64 + 30024;
	// stw r10,164(r29)
	PPC_STORE_U32(r29.u32 + 164, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,30008
	ctx.r4.s64 = r11.s64 + 30008;
	// stw r10,344(r29)
	PPC_STORE_U32(r29.u32 + 344, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6296
	ctx.r4.s64 = r11.s64 + 6296;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,348(r29)
	PPC_STORE_U32(r29.u32 + 348, ctx.r10.u32);
	// lis r29,3
	r29.s64 = 196608;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6280
	ctx.r4.s64 = r11.s64 + 6280;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6264
	ctx.r4.s64 = r11.s64 + 6264;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,6168
	r28.s64 = r11.s64 + 6168;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lis r29,2
	r29.s64 = 131072;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,29424
	ctx.r4.s64 = r11.s64 + 29424;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6236
	ctx.r4.s64 = r11.s64 + 6236;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6248
	ctx.r4.s64 = r11.s64 + 6248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6348
	ctx.r4.s64 = r11.s64 + 6348;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lis r29,4
	r29.s64 = 262144;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6220
	ctx.r4.s64 = r11.s64 + 6220;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6312
	ctx.r4.s64 = r11.s64 + 6312;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lis r30,8
	r30.s64 = 524288;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82175c58
	sub_82175C58(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D3E98"))) PPC_WEAK_FUNC(sub_822D3E98);
PPC_FUNC_IMPL(__imp__sub_822D3E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8180
	r11.s64 = r11.s64 + -8180;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8180
	ctx.r10.s64 = ctx.r10.s64 + -8180;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3EC0"))) PPC_WEAK_FUNC(sub_822D3EC0);
PPC_FUNC_IMPL(__imp__sub_822D3EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3EE8"))) PPC_WEAK_FUNC(sub_822D3EE8);
PPC_FUNC_IMPL(__imp__sub_822D3EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D3F10"))) PPC_WEAK_FUNC(sub_822D3F10);
PPC_FUNC_IMPL(__imp__sub_822D3F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,30496(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 30496);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x822d3fcc
	if (cr6.eq) goto loc_822D3FCC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r11,r11,30448
	r11.s64 = r11.s64 + 30448;
	// addi r10,r10,30436
	ctx.r10.s64 = ctx.r10.s64 + 30436;
	// addi r9,r9,30428
	ctx.r9.s64 = ctx.r9.s64 + 30428;
	// addi r8,r8,30416
	ctx.r8.s64 = ctx.r8.s64 + 30416;
	// addi r7,r7,30408
	ctx.r7.s64 = ctx.r7.s64 + 30408;
	// addi r6,r6,30400
	ctx.r6.s64 = ctx.r6.s64 + 30400;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r5,r5,30392
	ctx.r5.s64 = ctx.r5.s64 + 30392;
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// addi r3,r30,720
	ctx.r3.s64 = r30.s64 + 720;
	// stw r9,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r9.u32);
	// stw r8,184(r30)
	PPC_STORE_U32(r30.u32 + 184, ctx.r8.u32);
	// stw r7,364(r30)
	PPC_STORE_U32(r30.u32 + 364, ctx.r7.u32);
	// stw r6,368(r30)
	PPC_STORE_U32(r30.u32 + 368, ctx.r6.u32);
	// stw r5,768(r30)
	PPC_STORE_U32(r30.u32 + 768, ctx.r5.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,764
	r11.s64 = r30.s64 + 764;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,5260
	ctx.r10.s64 = ctx.r10.s64 + 5260;
	// stw r8,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r8.u32);
	// addi r9,r9,5196
	ctx.r9.s64 = ctx.r9.s64 + 5196;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_822D3FCC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82126110
	sub_82126110(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r9,r9,30360
	ctx.r9.s64 = ctx.r9.s64 + 30360;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r11,r11,30320
	r11.s64 = r11.s64 + 30320;
	// stw r9,164(r30)
	PPC_STORE_U32(r30.u32 + 164, ctx.r9.u32);
	// addi r10,r10,30280
	ctx.r10.s64 = ctx.r10.s64 + 30280;
	// addi r8,r8,30272
	ctx.r8.s64 = ctx.r8.s64 + 30272;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r7,r7,30252
	ctx.r7.s64 = ctx.r7.s64 + 30252;
	// addi r28,r30,528
	r28.s64 = r30.s64 + 528;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r10,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r10.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r8,180(r30)
	PPC_STORE_U32(r30.u32 + 180, ctx.r8.u32);
	// addi r11,r11,30188
	r11.s64 = r11.s64 + 30188;
	// stw r7,360(r30)
	PPC_STORE_U32(r30.u32 + 360, ctx.r7.u32);
	// addi r10,r10,30180
	ctx.r10.s64 = ctx.r10.s64 + 30180;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-716
	ctx.r10.s64 = r11.s64 + -716;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-760
	ctx.r10.s64 = r11.s64 + -760;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,516(r30)
	PPC_STORE_U32(r30.u32 + 516, r29.u32);
	// stw r29,520(r30)
	PPC_STORE_U32(r30.u32 + 520, r29.u32);
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// stw r29,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r29.u32);
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// addi r11,r30,548
	r11.s64 = r30.s64 + 548;
	// stw r29,540(r30)
	PPC_STORE_U32(r30.u32 + 540, r29.u32);
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r29.u64);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r30,596
	ctx.r3.s64 = r30.s64 + 596;
	// stb r29,592(r30)
	PPC_STORE_U8(r30.u32 + 592, r29.u8);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,588(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 588, temp.u32);
	// bl 0x82198440
	sub_82198440(ctx, base);
	// stw r29,624(r30)
	PPC_STORE_U32(r30.u32 + 624, r29.u32);
	// stb r29,700(r30)
	PPC_STORE_U8(r30.u32 + 700, r29.u8);
	// stw r29,712(r30)
	PPC_STORE_U32(r30.u32 + 712, r29.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x822d40f8
	if (cr6.eq) goto loc_822D40F8;
	// subf r9,r11,r11
	ctx.r9.s64 = r11.s64 - r11.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x822d40f4
	if (!cr0.gt) goto loc_822D40F4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_822D40E0:
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bgt 0x822d40e0
	if (cr0.gt) goto loc_822D40E0;
loc_822D40F4:
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
loc_822D40F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D3F18"))) PPC_WEAK_FUNC(sub_822D3F18);
PPC_FUNC_IMPL(__imp__sub_822D3F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x822d3fcc
	if (cr6.eq) goto loc_822D3FCC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r11,r11,30448
	r11.s64 = r11.s64 + 30448;
	// addi r10,r10,30436
	ctx.r10.s64 = ctx.r10.s64 + 30436;
	// addi r9,r9,30428
	ctx.r9.s64 = ctx.r9.s64 + 30428;
	// addi r8,r8,30416
	ctx.r8.s64 = ctx.r8.s64 + 30416;
	// addi r7,r7,30408
	ctx.r7.s64 = ctx.r7.s64 + 30408;
	// addi r6,r6,30400
	ctx.r6.s64 = ctx.r6.s64 + 30400;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r5,r5,30392
	ctx.r5.s64 = ctx.r5.s64 + 30392;
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// addi r3,r30,720
	ctx.r3.s64 = r30.s64 + 720;
	// stw r9,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r9.u32);
	// stw r8,184(r30)
	PPC_STORE_U32(r30.u32 + 184, ctx.r8.u32);
	// stw r7,364(r30)
	PPC_STORE_U32(r30.u32 + 364, ctx.r7.u32);
	// stw r6,368(r30)
	PPC_STORE_U32(r30.u32 + 368, ctx.r6.u32);
	// stw r5,768(r30)
	PPC_STORE_U32(r30.u32 + 768, ctx.r5.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,764
	r11.s64 = r30.s64 + 764;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,5260
	ctx.r10.s64 = ctx.r10.s64 + 5260;
	// stw r8,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r8.u32);
	// addi r9,r9,5196
	ctx.r9.s64 = ctx.r9.s64 + 5196;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_822D3FCC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82126110
	sub_82126110(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r9,r9,30360
	ctx.r9.s64 = ctx.r9.s64 + 30360;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r11,r11,30320
	r11.s64 = r11.s64 + 30320;
	// stw r9,164(r30)
	PPC_STORE_U32(r30.u32 + 164, ctx.r9.u32);
	// addi r10,r10,30280
	ctx.r10.s64 = ctx.r10.s64 + 30280;
	// addi r8,r8,30272
	ctx.r8.s64 = ctx.r8.s64 + 30272;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r7,r7,30252
	ctx.r7.s64 = ctx.r7.s64 + 30252;
	// addi r28,r30,528
	r28.s64 = r30.s64 + 528;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r10,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r10.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r8,180(r30)
	PPC_STORE_U32(r30.u32 + 180, ctx.r8.u32);
	// addi r11,r11,30188
	r11.s64 = r11.s64 + 30188;
	// stw r7,360(r30)
	PPC_STORE_U32(r30.u32 + 360, ctx.r7.u32);
	// addi r10,r10,30180
	ctx.r10.s64 = ctx.r10.s64 + 30180;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-716
	ctx.r10.s64 = r11.s64 + -716;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-760
	ctx.r10.s64 = r11.s64 + -760;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,516(r30)
	PPC_STORE_U32(r30.u32 + 516, r29.u32);
	// stw r29,520(r30)
	PPC_STORE_U32(r30.u32 + 520, r29.u32);
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// stw r29,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r29.u32);
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// addi r11,r30,548
	r11.s64 = r30.s64 + 548;
	// stw r29,540(r30)
	PPC_STORE_U32(r30.u32 + 540, r29.u32);
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r29.u64);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r30,596
	ctx.r3.s64 = r30.s64 + 596;
	// stb r29,592(r30)
	PPC_STORE_U8(r30.u32 + 592, r29.u8);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,588(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 588, temp.u32);
	// bl 0x82198440
	sub_82198440(ctx, base);
	// stw r29,624(r30)
	PPC_STORE_U32(r30.u32 + 624, r29.u32);
	// stb r29,700(r30)
	PPC_STORE_U8(r30.u32 + 700, r29.u8);
	// stw r29,712(r30)
	PPC_STORE_U32(r30.u32 + 712, r29.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x822d40f8
	if (cr6.eq) goto loc_822D40F8;
	// subf r9,r11,r11
	ctx.r9.s64 = r11.s64 - r11.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x822d40f4
	if (!cr0.gt) goto loc_822D40F4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_822D40E0:
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bgt 0x822d40e0
	if (cr0.gt) goto loc_822D40E0;
loc_822D40F4:
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
loc_822D40F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D4104"))) PPC_WEAK_FUNC(sub_822D4104);
PPC_FUNC_IMPL(__imp__sub_822D4104) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d4138
	if (cr0.eq) goto loc_822D4138;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,720
	ctx.r3.s64 = r11.s64 + 720;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_822D4138:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4148"))) PPC_WEAK_FUNC(sub_822D4148);
PPC_FUNC_IMPL(__imp__sub_822D4148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,520
	ctx.r3.s64 = r11.s64 + 520;
	// bl 0x82126370
	sub_82126370(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4174"))) PPC_WEAK_FUNC(sub_822D4174);
PPC_FUNC_IMPL(__imp__sub_822D4174) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,528
	ctx.r3.s64 = r11.s64 + 528;
	// bl 0x82286230
	sub_82286230(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D41A0"))) PPC_WEAK_FUNC(sub_822D41A0);
PPC_FUNC_IMPL(__imp__sub_822D41A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,548
	ctx.r3.s64 = r11.s64 + 548;
	// bl 0x822d3b08
	sub_822D3B08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D41CC"))) PPC_WEAK_FUNC(sub_822D41CC);
PPC_FUNC_IMPL(__imp__sub_822D41CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D41D0"))) PPC_WEAK_FUNC(sub_822D41D0);
PPC_FUNC_IMPL(__imp__sub_822D41D0) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x822b2b90
	sub_822B2B90(ctx, base);
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

__attribute__((alias("__imp__sub_822D4200"))) PPC_WEAK_FUNC(sub_822D4200);
PPC_FUNC_IMPL(__imp__sub_822D4200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x821260a0
	sub_821260A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4210"))) PPC_WEAK_FUNC(sub_822D4210);
PPC_FUNC_IMPL(__imp__sub_822D4210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822d4608
	sub_822D4608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D421C"))) PPC_WEAK_FUNC(sub_822D421C);
PPC_FUNC_IMPL(__imp__sub_822D421C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4220"))) PPC_WEAK_FUNC(sub_822D4220);
PPC_FUNC_IMPL(__imp__sub_822D4220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82125ff0
	sub_82125FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4230"))) PPC_WEAK_FUNC(sub_822D4230);
PPC_FUNC_IMPL(__imp__sub_822D4230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-588
	ctx.r3.s64 = ctx.r3.s64 + -588;
	// b 0x821262c8
	sub_821262C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4240"))) PPC_WEAK_FUNC(sub_822D4240);
PPC_FUNC_IMPL(__imp__sub_822D4240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82126048
	sub_82126048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4250"))) PPC_WEAK_FUNC(sub_822D4250);
PPC_FUNC_IMPL(__imp__sub_822D4250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82151f30
	sub_82151F30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4260"))) PPC_WEAK_FUNC(sub_822D4260);
PPC_FUNC_IMPL(__imp__sub_822D4260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-280
	ctx.r3.s64 = ctx.r3.s64 + -280;
	// b 0x821262f8
	sub_821262F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4270"))) PPC_WEAK_FUNC(sub_822D4270);
PPC_FUNC_IMPL(__imp__sub_822D4270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-280
	ctx.r3.s64 = ctx.r3.s64 + -280;
	// b 0x821b83b0
	sub_821B83B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4280"))) PPC_WEAK_FUNC(sub_822D4280);
PPC_FUNC_IMPL(__imp__sub_822D4280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x822d41d0
	sub_822D41D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D428C"))) PPC_WEAK_FUNC(sub_822D428C);
PPC_FUNC_IMPL(__imp__sub_822D428C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4290"))) PPC_WEAK_FUNC(sub_822D4290);
PPC_FUNC_IMPL(__imp__sub_822D4290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x821260a8
	sub_821260A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D42A0"))) PPC_WEAK_FUNC(sub_822D42A0);
PPC_FUNC_IMPL(__imp__sub_822D42A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,30568(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 30568);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32127
	r27.s64 = -2105475072;
	// lwz r11,-8172(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8172);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822d4324
	if (!cr0.eq) goto loc_822D4324;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8172(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8172, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = r11.s64 + 2988;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822b2b90
	sub_822B2B90(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d80
	sub_82270D80(ctx, base);
	// stw r3,-8176(r27)
	PPC_STORE_U32(r27.u32 + -8176, ctx.r3.u32);
	// b 0x822d4328
	goto loc_822D4328;
loc_822D4324:
	// lwz r3,-8176(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -8176);
loc_822D4328:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d4364
	if (cr0.eq) goto loc_822D4364;
	// lwz r11,-716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -716);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-716
	ctx.r3.s64 = r11.s64 + -716;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822d43e0
	goto loc_822D43E0;
loc_822D4364:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x822d43c4
	if (!cr0.eq) goto loc_822D43C4;
	// addic. r11,r30,-720
	xer.ca = r30.u32 > 719;
	r11.s64 = r30.s64 + -720;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d4388
	if (!cr0.eq) goto loc_822D4388;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4398
	goto loc_822D4398;
loc_822D4388:
	// lwz r11,-716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -716);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-716
	ctx.r3.s64 = r11.s64 + -716;
loc_822D4398:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -716);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-716
	ctx.r4.s64 = r11.s64 + -716;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D43C4:
	// lwz r11,-716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -716);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-716
	ctx.r3.s64 = r11.s64 + -716;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822D43E0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D42A8"))) PPC_WEAK_FUNC(sub_822D42A8);
PPC_FUNC_IMPL(__imp__sub_822D42A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32127
	r27.s64 = -2105475072;
	// lwz r11,-8172(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8172);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822d4324
	if (!cr0.eq) goto loc_822D4324;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8172(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8172, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = r11.s64 + 2988;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822b2b90
	sub_822B2B90(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d80
	sub_82270D80(ctx, base);
	// stw r3,-8176(r27)
	PPC_STORE_U32(r27.u32 + -8176, ctx.r3.u32);
	// b 0x822d4328
	goto loc_822D4328;
loc_822D4324:
	// lwz r3,-8176(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -8176);
loc_822D4328:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d4364
	if (cr0.eq) goto loc_822D4364;
	// lwz r11,-716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -716);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-716
	ctx.r3.s64 = r11.s64 + -716;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822d43e0
	goto loc_822D43E0;
loc_822D4364:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x822d43c4
	if (!cr0.eq) goto loc_822D43C4;
	// addic. r11,r30,-720
	xer.ca = r30.u32 > 719;
	r11.s64 = r30.s64 + -720;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d4388
	if (!cr0.eq) goto loc_822D4388;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4398
	goto loc_822D4398;
loc_822D4388:
	// lwz r11,-716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -716);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-716
	ctx.r3.s64 = r11.s64 + -716;
loc_822D4398:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -716);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-716
	ctx.r4.s64 = r11.s64 + -716;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D43C4:
	// lwz r11,-716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -716);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-716
	ctx.r3.s64 = r11.s64 + -716;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822D43E0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D43EC"))) PPC_WEAK_FUNC(sub_822D43EC);
PPC_FUNC_IMPL(__imp__sub_822D43EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8172
	r11.s64 = r11.s64 + -8172;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8172
	ctx.r10.s64 = ctx.r10.s64 + -8172;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4414"))) PPC_WEAK_FUNC(sub_822D4414);
PPC_FUNC_IMPL(__imp__sub_822D4414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4418"))) PPC_WEAK_FUNC(sub_822D4418);
PPC_FUNC_IMPL(__imp__sub_822D4418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822d42a8
	sub_822D42A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4424"))) PPC_WEAK_FUNC(sub_822D4424);
PPC_FUNC_IMPL(__imp__sub_822D4424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4428"))) PPC_WEAK_FUNC(sub_822D4428);
PPC_FUNC_IMPL(__imp__sub_822D4428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822d1da0
	sub_822D1DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4434"))) PPC_WEAK_FUNC(sub_822D4434);
PPC_FUNC_IMPL(__imp__sub_822D4434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4438"))) PPC_WEAK_FUNC(sub_822D4438);
PPC_FUNC_IMPL(__imp__sub_822D4438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x822d2fe8
	sub_822D2FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4444"))) PPC_WEAK_FUNC(sub_822D4444);
PPC_FUNC_IMPL(__imp__sub_822D4444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4448"))) PPC_WEAK_FUNC(sub_822D4448);
PPC_FUNC_IMPL(__imp__sub_822D4448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,30656(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 30656);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r9,30360
	ctx.r9.s64 = ctx.r9.s64 + 30360;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// addi r11,r11,30320
	r11.s64 = r11.s64 + 30320;
	// stw r9,-556(r30)
	PPC_STORE_U32(r30.u32 + -556, ctx.r9.u32);
	// addi r10,r10,30280
	ctx.r10.s64 = ctx.r10.s64 + 30280;
	// lwz r9,-716(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + -716);
	// addi r8,r8,30272
	ctx.r8.s64 = ctx.r8.s64 + 30272;
	// addi r7,r7,30252
	ctx.r7.s64 = ctx.r7.s64 + 30252;
	// stw r11,-720(r30)
	PPC_STORE_U32(r30.u32 + -720, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r10,-592(r30)
	PPC_STORE_U32(r30.u32 + -592, ctx.r10.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r8,-540(r30)
	PPC_STORE_U32(r30.u32 + -540, ctx.r8.u32);
	// addi r11,r11,30188
	r11.s64 = r11.s64 + 30188;
	// stw r7,-360(r30)
	PPC_STORE_U32(r30.u32 + -360, ctx.r7.u32);
	// addi r10,r10,30180
	ctx.r10.s64 = ctx.r10.s64 + 30180;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stw r11,-716(r9)
	PPC_STORE_U32(ctx.r9.u32 + -716, r11.u32);
	// lwz r11,-716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -716);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-716(r11)
	PPC_STORE_U32(r11.u32 + -716, ctx.r10.u32);
	// lwz r11,-716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -716);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-716
	ctx.r10.s64 = r11.s64 + -716;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-720(r11)
	PPC_STORE_U32(r11.u32 + -720, ctx.r10.u32);
	// lwz r11,-716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -716);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-760
	ctx.r10.s64 = r11.s64 + -760;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-720(r11)
	PPC_STORE_U32(r11.u32 + -720, ctx.r10.u32);
	// addi r3,r30,-124
	ctx.r3.s64 = r30.s64 + -124;
	// bl 0x821984c0
	sub_821984C0(ctx, base);
	// addi r3,r30,-172
	ctx.r3.s64 = r30.s64 + -172;
	// bl 0x822d2aa8
	sub_822D2AA8(ctx, base);
	// lwz r4,-192(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// lwz r11,-188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -188);
	// b 0x822d4524
	goto loc_822D4524;
loc_822D4520:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_822D4524:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822d4520
	if (!cr0.eq) goto loc_822D4520;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822d4558
	if (cr6.eq) goto loc_822D4558;
	// lwz r11,-184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -184);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822D4558:
	// addi r3,r30,-200
	ctx.r3.s64 = r30.s64 + -200;
	// bl 0x82155a38
	sub_82155A38(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_822D4450"))) PPC_WEAK_FUNC(sub_822D4450);
PPC_FUNC_IMPL(__imp__sub_822D4450) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r9,30360
	ctx.r9.s64 = ctx.r9.s64 + 30360;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// addi r11,r11,30320
	r11.s64 = r11.s64 + 30320;
	// stw r9,-556(r30)
	PPC_STORE_U32(r30.u32 + -556, ctx.r9.u32);
	// addi r10,r10,30280
	ctx.r10.s64 = ctx.r10.s64 + 30280;
	// lwz r9,-716(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + -716);
	// addi r8,r8,30272
	ctx.r8.s64 = ctx.r8.s64 + 30272;
	// addi r7,r7,30252
	ctx.r7.s64 = ctx.r7.s64 + 30252;
	// stw r11,-720(r30)
	PPC_STORE_U32(r30.u32 + -720, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r10,-592(r30)
	PPC_STORE_U32(r30.u32 + -592, ctx.r10.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r8,-540(r30)
	PPC_STORE_U32(r30.u32 + -540, ctx.r8.u32);
	// addi r11,r11,30188
	r11.s64 = r11.s64 + 30188;
	// stw r7,-360(r30)
	PPC_STORE_U32(r30.u32 + -360, ctx.r7.u32);
	// addi r10,r10,30180
	ctx.r10.s64 = ctx.r10.s64 + 30180;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stw r11,-716(r9)
	PPC_STORE_U32(ctx.r9.u32 + -716, r11.u32);
	// lwz r11,-716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -716);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-716(r11)
	PPC_STORE_U32(r11.u32 + -716, ctx.r10.u32);
	// lwz r11,-716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -716);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-716
	ctx.r10.s64 = r11.s64 + -716;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-720(r11)
	PPC_STORE_U32(r11.u32 + -720, ctx.r10.u32);
	// lwz r11,-716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -716);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-760
	ctx.r10.s64 = r11.s64 + -760;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-720(r11)
	PPC_STORE_U32(r11.u32 + -720, ctx.r10.u32);
	// addi r3,r30,-124
	ctx.r3.s64 = r30.s64 + -124;
	// bl 0x821984c0
	sub_821984C0(ctx, base);
	// addi r3,r30,-172
	ctx.r3.s64 = r30.s64 + -172;
	// bl 0x822d2aa8
	sub_822D2AA8(ctx, base);
	// lwz r4,-192(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// lwz r11,-188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -188);
	// b 0x822d4524
	goto loc_822D4524;
loc_822D4520:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_822D4524:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822d4520
	if (!cr0.eq) goto loc_822D4520;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822d4558
	if (cr6.eq) goto loc_822D4558;
	// lwz r11,-184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -184);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822D4558:
	// addi r3,r30,-200
	ctx.r3.s64 = r30.s64 + -200;
	// bl 0x82155a38
	sub_82155A38(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_822D4578"))) PPC_WEAK_FUNC(sub_822D4578);
PPC_FUNC_IMPL(__imp__sub_822D4578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,-720
	r11.s64 = r11.s64 + -720;
	// addi r3,r11,520
	ctx.r3.s64 = r11.s64 + 520;
	// bl 0x82126370
	sub_82126370(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D45A8"))) PPC_WEAK_FUNC(sub_822D45A8);
PPC_FUNC_IMPL(__imp__sub_822D45A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,-720
	r11.s64 = r11.s64 + -720;
	// addi r3,r11,528
	ctx.r3.s64 = r11.s64 + 528;
	// bl 0x82286230
	sub_82286230(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D45D8"))) PPC_WEAK_FUNC(sub_822D45D8);
PPC_FUNC_IMPL(__imp__sub_822D45D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,-720
	r11.s64 = r11.s64 + -720;
	// addi r3,r11,548
	ctx.r3.s64 = r11.s64 + 548;
	// bl 0x822d3b08
	sub_822D3B08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4608"))) PPC_WEAK_FUNC(sub_822D4608);
PPC_FUNC_IMPL(__imp__sub_822D4608) {
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
	// addi r30,r3,-720
	r30.s64 = ctx.r3.s64 + -720;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,720
	r31.s64 = r30.s64 + 720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4450
	sub_822D4450(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d4640
	if (cr0.eq) goto loc_822D4640;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_822D4640:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D464C"))) PPC_WEAK_FUNC(sub_822D464C);
PPC_FUNC_IMPL(__imp__sub_822D464C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4650"))) PPC_WEAK_FUNC(sub_822D4650);
PPC_FUNC_IMPL(__imp__sub_822D4650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,30896(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 30896);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq cr6,0x822d46a4
	if (cr6.eq) goto loc_822D46A4;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// addi r11,r11,30864
	r11.s64 = r11.s64 + 30864;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822D46A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,30812
	r11.s64 = r11.s64 + 30812;
	// addi r10,r10,30748
	ctx.r10.s64 = ctx.r10.s64 + 30748;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-60
	ctx.r10.s64 = r11.s64 + -60;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d4704
	if (cr0.eq) goto loc_822D4704;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82279dd0
	sub_82279DD0(ctx, base);
	// b 0x822d4708
	goto loc_822D4708;
loc_822D4704:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D4708:
	// stw r3,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_822D4658"))) PPC_WEAK_FUNC(sub_822D4658);
PPC_FUNC_IMPL(__imp__sub_822D4658) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq cr6,0x822d46a4
	if (cr6.eq) goto loc_822D46A4;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// addi r11,r11,30864
	r11.s64 = r11.s64 + 30864;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822D46A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,30812
	r11.s64 = r11.s64 + 30812;
	// addi r10,r10,30748
	ctx.r10.s64 = ctx.r10.s64 + 30748;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-60
	ctx.r10.s64 = r11.s64 + -60;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d4704
	if (cr0.eq) goto loc_822D4704;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82279dd0
	sub_82279DD0(ctx, base);
	// b 0x822d4708
	goto loc_822D4708;
loc_822D4704:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D4708:
	// stw r3,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_822D4728"))) PPC_WEAK_FUNC(sub_822D4728);
PPC_FUNC_IMPL(__imp__sub_822D4728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d475c
	if (cr0.eq) goto loc_822D475C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_822D475C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D476C"))) PPC_WEAK_FUNC(sub_822D476C);
PPC_FUNC_IMPL(__imp__sub_822D476C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
	// bl 0x82376478
	sub_82376478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4798"))) PPC_WEAK_FUNC(sub_822D4798);
PPC_FUNC_IMPL(__imp__sub_822D4798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D47C0"))) PPC_WEAK_FUNC(sub_822D47C0);
PPC_FUNC_IMPL(__imp__sub_822D47C0) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x822b2a70
	sub_822B2A70(ctx, base);
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

__attribute__((alias("__imp__sub_822D47F0"))) PPC_WEAK_FUNC(sub_822D47F0);
PPC_FUNC_IMPL(__imp__sub_822D47F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82376330
	sub_82376330(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d4820
	if (cr0.eq) goto loc_822D4820;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r3,r11,24812
	ctx.r3.s64 = r11.s64 + 24812;
	// bl 0x822af2c8
	sub_822AF2C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x822d4824
	if (!cr0.eq) goto loc_822D4824;
loc_822D4820:
	// li r11,0
	r11.s64 = 0;
loc_822D4824:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4838"))) PPC_WEAK_FUNC(sub_822D4838);
PPC_FUNC_IMPL(__imp__sub_822D4838) {
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
	// bl 0x82376560
	sub_82376560(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d486c
	if (!cr0.eq) goto loc_822D486C;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x82279328
	sub_82279328(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne 0x822d4870
	if (!cr0.eq) goto loc_822D4870;
loc_822D486C:
	// li r11,1
	r11.s64 = 1;
loc_822D4870:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_822D4888"))) PPC_WEAK_FUNC(sub_822D4888);
PPC_FUNC_IMPL(__imp__sub_822D4888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82376140
	sub_82376140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4898"))) PPC_WEAK_FUNC(sub_822D4898);
PPC_FUNC_IMPL(__imp__sub_822D4898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82376110
	sub_82376110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D48A8"))) PPC_WEAK_FUNC(sub_822D48A8);
PPC_FUNC_IMPL(__imp__sub_822D48A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822d4f18
	sub_822D4F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D48B4"))) PPC_WEAK_FUNC(sub_822D48B4);
PPC_FUNC_IMPL(__imp__sub_822D48B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D48B8"))) PPC_WEAK_FUNC(sub_822D48B8);
PPC_FUNC_IMPL(__imp__sub_822D48B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x822d47c0
	sub_822D47C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D48C4"))) PPC_WEAK_FUNC(sub_822D48C4);
PPC_FUNC_IMPL(__imp__sub_822D48C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D48C8"))) PPC_WEAK_FUNC(sub_822D48C8);
PPC_FUNC_IMPL(__imp__sub_822D48C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,30968(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 30968);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32127
	r27.s64 = -2105475072;
	// lwz r11,-8164(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8164);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822d494c
	if (!cr0.eq) goto loc_822D494C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8164(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8164, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = r11.s64 + 2988;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822b2a70
	sub_822B2A70(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d80
	sub_82270D80(ctx, base);
	// stw r3,-8168(r27)
	PPC_STORE_U32(r27.u32 + -8168, ctx.r3.u32);
	// b 0x822d4950
	goto loc_822D4950;
loc_822D494C:
	// lwz r3,-8168(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -8168);
loc_822D4950:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d498c
	if (cr0.eq) goto loc_822D498C;
	// lwz r11,-60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -60);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = r11.s64 + -60;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822d4a08
	goto loc_822D4A08;
loc_822D498C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x822d49ec
	if (!cr0.eq) goto loc_822D49EC;
	// addic. r11,r30,-64
	xer.ca = r30.u32 > 63;
	r11.s64 = r30.s64 + -64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d49b0
	if (!cr0.eq) goto loc_822D49B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d49c0
	goto loc_822D49C0;
loc_822D49B0:
	// lwz r11,-60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -60);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = r11.s64 + -60;
loc_822D49C0:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -60);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-60
	ctx.r4.s64 = r11.s64 + -60;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D49EC:
	// lwz r11,-60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -60);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = r11.s64 + -60;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822D4A08:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D48D0"))) PPC_WEAK_FUNC(sub_822D48D0);
PPC_FUNC_IMPL(__imp__sub_822D48D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32127
	r27.s64 = -2105475072;
	// lwz r11,-8164(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8164);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822d494c
	if (!cr0.eq) goto loc_822D494C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8164(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8164, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = r11.s64 + 2988;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822b2a70
	sub_822B2A70(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d80
	sub_82270D80(ctx, base);
	// stw r3,-8168(r27)
	PPC_STORE_U32(r27.u32 + -8168, ctx.r3.u32);
	// b 0x822d4950
	goto loc_822D4950;
loc_822D494C:
	// lwz r3,-8168(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -8168);
loc_822D4950:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d498c
	if (cr0.eq) goto loc_822D498C;
	// lwz r11,-60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -60);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = r11.s64 + -60;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822d4a08
	goto loc_822D4A08;
loc_822D498C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x822d49ec
	if (!cr0.eq) goto loc_822D49EC;
	// addic. r11,r30,-64
	xer.ca = r30.u32 > 63;
	r11.s64 = r30.s64 + -64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d49b0
	if (!cr0.eq) goto loc_822D49B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d49c0
	goto loc_822D49C0;
loc_822D49B0:
	// lwz r11,-60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -60);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = r11.s64 + -60;
loc_822D49C0:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -60);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-60
	ctx.r4.s64 = r11.s64 + -60;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D49EC:
	// lwz r11,-60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -60);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = r11.s64 + -60;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822D4A08:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D4A14"))) PPC_WEAK_FUNC(sub_822D4A14);
PPC_FUNC_IMPL(__imp__sub_822D4A14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8164
	r11.s64 = r11.s64 + -8164;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8164
	ctx.r10.s64 = ctx.r10.s64 + -8164;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4A3C"))) PPC_WEAK_FUNC(sub_822D4A3C);
PPC_FUNC_IMPL(__imp__sub_822D4A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4A40"))) PPC_WEAK_FUNC(sub_822D4A40);
PPC_FUNC_IMPL(__imp__sub_822D4A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,31040(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 31040);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,30812
	r11.s64 = r11.s64 + 30812;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,30748
	ctx.r10.s64 = ctx.r10.s64 + 30748;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-64(r30)
	PPC_STORE_U32(r30.u32 + -64, r11.u32);
	// lwz r11,-60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -60);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-60(r11)
	PPC_STORE_U32(r11.u32 + -60, ctx.r10.u32);
	// lwz r11,-60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -60);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-60
	ctx.r10.s64 = r11.s64 + -60;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-64(r11)
	PPC_STORE_U32(r11.u32 + -64, ctx.r10.u32);
	// lwz r29,-8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x822d4ab4
	if (cr0.eq) goto loc_822D4AB4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822795f0
	sub_822795F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822D4AB4:
	// addi r3,r30,-4
	ctx.r3.s64 = r30.s64 + -4;
	// bl 0x82376478
	sub_82376478(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D4A48"))) PPC_WEAK_FUNC(sub_822D4A48);
PPC_FUNC_IMPL(__imp__sub_822D4A48) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,30812
	r11.s64 = r11.s64 + 30812;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,30748
	ctx.r10.s64 = ctx.r10.s64 + 30748;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-64(r30)
	PPC_STORE_U32(r30.u32 + -64, r11.u32);
	// lwz r11,-60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -60);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-60(r11)
	PPC_STORE_U32(r11.u32 + -60, ctx.r10.u32);
	// lwz r11,-60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -60);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-60
	ctx.r10.s64 = r11.s64 + -60;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-64(r11)
	PPC_STORE_U32(r11.u32 + -64, ctx.r10.u32);
	// lwz r29,-8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x822d4ab4
	if (cr0.eq) goto loc_822D4AB4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822795f0
	sub_822795F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822D4AB4:
	// addi r3,r30,-4
	ctx.r3.s64 = r30.s64 + -4;
	// bl 0x82376478
	sub_82376478(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D4AC4"))) PPC_WEAK_FUNC(sub_822D4AC4);
PPC_FUNC_IMPL(__imp__sub_822D4AC4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,-64
	r11.s64 = r11.s64 + -64;
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
	// bl 0x82376478
	sub_82376478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4AF4"))) PPC_WEAK_FUNC(sub_822D4AF4);
PPC_FUNC_IMPL(__imp__sub_822D4AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4AF8"))) PPC_WEAK_FUNC(sub_822D4AF8);
PPC_FUNC_IMPL(__imp__sub_822D4AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,31176(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 31176);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x822792c8
	sub_822792C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d4b2c
	if (cr0.eq) goto loc_822D4B2C;
	// bl 0x822ae088
	sub_822AE088(ctx, base);
	// bl 0x822ae2f8
	sub_822AE2F8(ctx, base);
loc_822D4B2C:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82279ca0
	sub_82279CA0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-308
	ctx.r4.s64 = r11.s64 + -308;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// bl 0x822b38e8
	sub_822B38E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d4c94
	if (cr0.eq) goto loc_822D4C94;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x822796c8
	sub_822796C8(ctx, base);
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// bl 0x822b4db8
	sub_822B4DB8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = r11.s64 + 18664;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,31136
	ctx.r3.s64 = r11.s64 + 31136;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82279b58
	sub_82279B58(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,31128
	ctx.r3.s64 = r11.s64 + 31128;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82279b58
	sub_82279B58(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,31120
	ctx.r3.s64 = r11.s64 + 31120;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82279b58
	sub_82279B58(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,31104
	ctx.r3.s64 = r11.s64 + 31104;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82279b58
	sub_82279B58(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82279ac8
	sub_82279AC8(ctx, base);
loc_822D4C94:
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D4B00"))) PPC_WEAK_FUNC(sub_822D4B00);
PPC_FUNC_IMPL(__imp__sub_822D4B00) {
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
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x822792c8
	sub_822792C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d4b2c
	if (cr0.eq) goto loc_822D4B2C;
	// bl 0x822ae088
	sub_822AE088(ctx, base);
	// bl 0x822ae2f8
	sub_822AE2F8(ctx, base);
loc_822D4B2C:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82279ca0
	sub_82279CA0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-308
	ctx.r4.s64 = r11.s64 + -308;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// bl 0x822b38e8
	sub_822B38E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d4c94
	if (cr0.eq) goto loc_822D4C94;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x822796c8
	sub_822796C8(ctx, base);
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// bl 0x822b4db8
	sub_822B4DB8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = r11.s64 + 18664;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,31136
	ctx.r3.s64 = r11.s64 + 31136;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82279b58
	sub_82279B58(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,31128
	ctx.r3.s64 = r11.s64 + 31128;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82279b58
	sub_82279B58(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,31120
	ctx.r3.s64 = r11.s64 + 31120;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82279b58
	sub_82279B58(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,31104
	ctx.r3.s64 = r11.s64 + 31104;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82279b58
	sub_82279B58(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82279ac8
	sub_82279AC8(ctx, base);
loc_822D4C94:
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D4C9C"))) PPC_WEAK_FUNC(sub_822D4C9C);
PPC_FUNC_IMPL(__imp__sub_822D4C9C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8235d458
	sub_8235D458(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4CC4"))) PPC_WEAK_FUNC(sub_822D4CC4);
PPC_FUNC_IMPL(__imp__sub_822D4CC4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8235d458
	sub_8235D458(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4CEC"))) PPC_WEAK_FUNC(sub_822D4CEC);
PPC_FUNC_IMPL(__imp__sub_822D4CEC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8235d458
	sub_8235D458(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4D14"))) PPC_WEAK_FUNC(sub_822D4D14);
PPC_FUNC_IMPL(__imp__sub_822D4D14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8235d458
	sub_8235D458(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4D3C"))) PPC_WEAK_FUNC(sub_822D4D3C);
PPC_FUNC_IMPL(__imp__sub_822D4D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4D40"))) PPC_WEAK_FUNC(sub_822D4D40);
PPC_FUNC_IMPL(__imp__sub_822D4D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,31336(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 31336);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-8152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8152);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8156
	r29.s64 = ctx.r10.s64 + -8156;
	// bne 0x822d4db0
	if (!cr0.eq) goto loc_822D4DB0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8152(r30)
	PPC_STORE_U32(r30.u32 + -8152, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31300
	ctx.r4.s64 = r11.s64 + 31300;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8152);
loc_822D4DB0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d4dd8
	if (cr0.eq) goto loc_822D4DD8;
	// addi r3,r25,-64
	ctx.r3.s64 = r25.s64 + -64;
	// bl 0x822d4b00
	sub_822D4B00(ctx, base);
loc_822D4DD0:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x822d4e70
	goto loc_822D4E70;
loc_822D4DD8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8160
	r29.s64 = ctx.r10.s64 + -8160;
	// bne 0x822d4e00
	if (!cr0.eq) goto loc_822D4E00;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8152(r30)
	PPC_STORE_U32(r30.u32 + -8152, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31288
	ctx.r4.s64 = r11.s64 + 31288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822D4E00:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d4e24
	if (cr0.eq) goto loc_822D4E24;
	// lwz r3,-8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -8);
	// bl 0x82279ca0
	sub_82279CA0(ctx, base);
	// b 0x822d4dd0
	goto loc_822D4DD0;
loc_822D4E24:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r25,-4
	ctx.r4.s64 = r25.s64 + -4;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82377300
	sub_82377300(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822d4e68
	if (cr6.eq) goto loc_822D4E68;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d4e74
	if (cr0.eq) goto loc_822D4E74;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822d4e74
	goto loc_822D4E74;
loc_822D4E68:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822D4E70:
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
loc_822D4E74:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822D4D48"))) PPC_WEAK_FUNC(sub_822D4D48);
PPC_FUNC_IMPL(__imp__sub_822D4D48) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-8152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8152);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8156
	r29.s64 = ctx.r10.s64 + -8156;
	// bne 0x822d4db0
	if (!cr0.eq) goto loc_822D4DB0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8152(r30)
	PPC_STORE_U32(r30.u32 + -8152, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31300
	ctx.r4.s64 = r11.s64 + 31300;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8152);
loc_822D4DB0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d4dd8
	if (cr0.eq) goto loc_822D4DD8;
	// addi r3,r25,-64
	ctx.r3.s64 = r25.s64 + -64;
	// bl 0x822d4b00
	sub_822D4B00(ctx, base);
loc_822D4DD0:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x822d4e70
	goto loc_822D4E70;
loc_822D4DD8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8160
	r29.s64 = ctx.r10.s64 + -8160;
	// bne 0x822d4e00
	if (!cr0.eq) goto loc_822D4E00;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8152(r30)
	PPC_STORE_U32(r30.u32 + -8152, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31288
	ctx.r4.s64 = r11.s64 + 31288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822D4E00:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d4e24
	if (cr0.eq) goto loc_822D4E24;
	// lwz r3,-8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -8);
	// bl 0x82279ca0
	sub_82279CA0(ctx, base);
	// b 0x822d4dd0
	goto loc_822D4DD0;
loc_822D4E24:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r25,-4
	ctx.r4.s64 = r25.s64 + -4;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82377300
	sub_82377300(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822d4e68
	if (cr6.eq) goto loc_822D4E68;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d4e74
	if (cr0.eq) goto loc_822D4E74;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822d4e74
	goto loc_822D4E74;
loc_822D4E68:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822D4E70:
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
loc_822D4E74:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822D4E80"))) PPC_WEAK_FUNC(sub_822D4E80);
PPC_FUNC_IMPL(__imp__sub_822D4E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8152
	r11.s64 = r11.s64 + -8152;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8152
	ctx.r10.s64 = ctx.r10.s64 + -8152;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4EA8"))) PPC_WEAK_FUNC(sub_822D4EA8);
PPC_FUNC_IMPL(__imp__sub_822D4EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8152
	r11.s64 = r11.s64 + -8152;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8152
	ctx.r10.s64 = ctx.r10.s64 + -8152;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4ED0"))) PPC_WEAK_FUNC(sub_822D4ED0);
PPC_FUNC_IMPL(__imp__sub_822D4ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D4EF8"))) PPC_WEAK_FUNC(sub_822D4EF8);
PPC_FUNC_IMPL(__imp__sub_822D4EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822d48d0
	sub_822D48D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4F04"))) PPC_WEAK_FUNC(sub_822D4F04);
PPC_FUNC_IMPL(__imp__sub_822D4F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4F08"))) PPC_WEAK_FUNC(sub_822D4F08);
PPC_FUNC_IMPL(__imp__sub_822D4F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x822d4d48
	sub_822D4D48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D4F14"))) PPC_WEAK_FUNC(sub_822D4F14);
PPC_FUNC_IMPL(__imp__sub_822D4F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4F18"))) PPC_WEAK_FUNC(sub_822D4F18);
PPC_FUNC_IMPL(__imp__sub_822D4F18) {
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
	// addi r30,r3,-64
	r30.s64 = ctx.r3.s64 + -64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,64
	r31.s64 = r30.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4a48
	sub_822D4A48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d4f50
	if (cr0.eq) goto loc_822D4F50;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822D4F50:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D4F5C"))) PPC_WEAK_FUNC(sub_822D4F5C);
PPC_FUNC_IMPL(__imp__sub_822D4F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D4F60"))) PPC_WEAK_FUNC(sub_822D4F60);
PPC_FUNC_IMPL(__imp__sub_822D4F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,31568(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 31568);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x822d4fac
	if (cr6.eq) goto loc_822D4FAC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// addi r11,r11,31552
	r11.s64 = r11.s64 + 31552;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
loc_822D4FAC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,31500
	r11.s64 = r11.s64 + 31500;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r10,r10,31436
	ctx.r10.s64 = ctx.r10.s64 + 31436;
	// lfs f13,2552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-92
	ctx.r10.s64 = r11.s64 + -92;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stb r29,56(r30)
	PPC_STORE_U8(r30.u32 + 56, r29.u8);
	// stfs f0,68(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// stfs f0,72(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 72, temp.u32);
	// stfs f0,76(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
	// stfs f13,80(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// stb r29,88(r30)
	PPC_STORE_U8(r30.u32 + 88, r29.u8);
	// stb r28,89(r30)
	PPC_STORE_U8(r30.u32 + 89, r28.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D4F68"))) PPC_WEAK_FUNC(sub_822D4F68);
PPC_FUNC_IMPL(__imp__sub_822D4F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x822d4fac
	if (cr6.eq) goto loc_822D4FAC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// addi r11,r11,31552
	r11.s64 = r11.s64 + 31552;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
loc_822D4FAC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,31500
	r11.s64 = r11.s64 + 31500;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r10,r10,31436
	ctx.r10.s64 = ctx.r10.s64 + 31436;
	// lfs f13,2552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-92
	ctx.r10.s64 = r11.s64 + -92;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stb r29,56(r30)
	PPC_STORE_U8(r30.u32 + 56, r29.u8);
	// stfs f0,68(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// stfs f0,72(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 72, temp.u32);
	// stfs f0,76(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
	// stfs f13,80(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// stb r29,88(r30)
	PPC_STORE_U8(r30.u32 + 88, r29.u8);
	// stb r28,89(r30)
	PPC_STORE_U8(r30.u32 + 89, r28.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

