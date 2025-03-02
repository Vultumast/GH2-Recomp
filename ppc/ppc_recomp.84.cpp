#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822C9A5C"))) PPC_WEAK_FUNC(sub_822C9A5C);
PPC_FUNC_IMPL(__imp__sub_822C9A5C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// addi r3,r11,160
	ctx.r3.s64 = r11.s64 + 160;
	// bl 0x823260f8
	sub_823260F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C9A88"))) PPC_WEAK_FUNC(sub_822C9A88);
PPC_FUNC_IMPL(__imp__sub_822C9A88) {
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

__attribute__((alias("__imp__sub_822C9AB0"))) PPC_WEAK_FUNC(sub_822C9AB0);
PPC_FUNC_IMPL(__imp__sub_822C9AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// addi r3,r11,224
	ctx.r3.s64 = r11.s64 + 224;
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

__attribute__((alias("__imp__sub_822C9ADC"))) PPC_WEAK_FUNC(sub_822C9ADC);
PPC_FUNC_IMPL(__imp__sub_822C9ADC) {
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

__attribute__((alias("__imp__sub_822C9B04"))) PPC_WEAK_FUNC(sub_822C9B04);
PPC_FUNC_IMPL(__imp__sub_822C9B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9B08"))) PPC_WEAK_FUNC(sub_822C9B08);
PPC_FUNC_IMPL(__imp__sub_822C9B08) {
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
	// beq 0x822c9b48
	if (cr0.eq) goto loc_822C9B48;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,23976
	ctx.r3.s64 = r11.s64 + 23976;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822c9b50
	goto loc_822C9B50;
loc_822C9B48:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_822C9B50:
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_822C9B6C"))) PPC_WEAK_FUNC(sub_822C9B6C);
PPC_FUNC_IMPL(__imp__sub_822C9B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9B70"))) PPC_WEAK_FUNC(sub_822C9B70);
PPC_FUNC_IMPL(__imp__sub_822C9B70) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// b 0x822c9bc0
	goto loc_822C9BC0;
loc_822C9B8C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822c9bbc
	if (cr0.eq) goto loc_822C9BBC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822C9BBC:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822C9BC0:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x822c9b8c
	if (!cr6.eq) goto loc_822C9B8C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C9BD4"))) PPC_WEAK_FUNC(sub_822C9BD4);
PPC_FUNC_IMPL(__imp__sub_822C9BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9BD8"))) PPC_WEAK_FUNC(sub_822C9BD8);
PPC_FUNC_IMPL(__imp__sub_822C9BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C9BE8"))) PPC_WEAK_FUNC(sub_822C9BE8);
PPC_FUNC_IMPL(__imp__sub_822C9BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C9C04"))) PPC_WEAK_FUNC(sub_822C9C04);
PPC_FUNC_IMPL(__imp__sub_822C9C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9C08"))) PPC_WEAK_FUNC(sub_822C9C08);
PPC_FUNC_IMPL(__imp__sub_822C9C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c9c80
	if (cr0.eq) goto loc_822C9C80;
	// li r30,0
	r30.s64 = 0;
loc_822C9C34:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lfsx f0,r30,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beq cr6,0x822c9c60
	if (cr6.eq) goto loc_822C9C60;
	// stfsx f1,r30,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + r11.u32, temp.u32);
loc_822C9C60:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x822c9c34
	if (cr6.lt) goto loc_822C9C34;
loc_822C9C80:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c9cac
	if (cr0.eq) goto loc_822C9CAC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beq cr6,0x822c9cac
	if (cr6.eq) goto loc_822C9CAC;
	// stfs f1,32(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
loc_822C9CAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C9CB4"))) PPC_WEAK_FUNC(sub_822C9CB4);
PPC_FUNC_IMPL(__imp__sub_822C9CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9CB8"))) PPC_WEAK_FUNC(sub_822C9CB8);
PPC_FUNC_IMPL(__imp__sub_822C9CB8) {
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
	// blt cr6,0x822c9d00
	if (cr6.lt) goto loc_822C9D00;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_822C9D00:
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
	// bl 0x822c9b08
	sub_822C9B08(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x822c9d38
	if (cr0.eq) goto loc_822C9D38;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_822C9D38:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x822c9d58
	if (cr6.eq) goto loc_822C9D58;
loc_822C9D44:
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
	// bne 0x822c9d44
	if (!cr0.eq) goto loc_822C9D44;
loc_822C9D58:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x822c9d80
	if (!cr0.eq) goto loc_822C9D80;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x822c9d80
	if (cr0.eq) goto loc_822C9D80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_822C9D80:
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

__attribute__((alias("__imp__sub_822C9DB4"))) PPC_WEAK_FUNC(sub_822C9DB4);
PPC_FUNC_IMPL(__imp__sub_822C9DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9DB8"))) PPC_WEAK_FUNC(sub_822C9DB8);
PPC_FUNC_IMPL(__imp__sub_822C9DB8) {
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
	// beq cr6,0x822c9df8
	if (cr6.eq) goto loc_822C9DF8;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822c9de8
	if (cr0.eq) goto loc_822C9DE8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_822C9DE8:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x822c9e0c
	goto loc_822C9E0C;
loc_822C9DF8:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x822c9cb8
	sub_822C9CB8(ctx, base);
loc_822C9E0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C9E1C"))) PPC_WEAK_FUNC(sub_822C9E1C);
PPC_FUNC_IMPL(__imp__sub_822C9E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9E20"))) PPC_WEAK_FUNC(sub_822C9E20);
PPC_FUNC_IMPL(__imp__sub_822C9E20) {
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
	// beq cr6,0x822c9e68
	if (cr6.eq) goto loc_822C9E68;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x822c9e60
	if (cr0.eq) goto loc_822C9E60;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x822c9e64
	goto loc_822C9E64;
loc_822C9E60:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_822C9E64:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822C9E68:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C9E74"))) PPC_WEAK_FUNC(sub_822C9E74);
PPC_FUNC_IMPL(__imp__sub_822C9E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9E78"))) PPC_WEAK_FUNC(sub_822C9E78);
PPC_FUNC_IMPL(__imp__sub_822C9E78) {
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
	// lwz r16,22920(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 22920);
	// mflr r12
	// bl 0x8239bcd0
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// addi r11,r11,22864
	r11.s64 = r11.s64 + 22864;
	// addi r23,r30,8
	r23.s64 = r30.s64 + 8;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r27.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r27,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r27.u32);
	// stw r27,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r27.u32);
	// stw r27,8(r23)
	PPC_STORE_U32(r23.u32 + 8, r27.u32);
	// addi r22,r30,20
	r22.s64 = r30.s64 + 20;
	// stw r27,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r27.u32);
	// stw r27,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r27.u32);
	// stw r27,8(r22)
	PPC_STORE_U32(r22.u32 + 8, r27.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// stw r27,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r27.u32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stfs f31,32(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// addi r4,r11,21536
	ctx.r4.s64 = r11.s64 + 21536;
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// lis r21,-32127
	r21.s64 = -2105475072;
	// lis r24,-32127
	r24.s64 = -2105475072;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c9ff8
	if (cr0.eq) goto loc_822C9FF8;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c9f4c
	if (cr0.eq) goto loc_822C9F4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822de170
	sub_822DE170(ctx, base);
	// b 0x822c9f50
	goto loc_822C9F50;
loc_822C9F4C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822C9F50:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// addi r4,r11,7048
	ctx.r4.s64 = r11.s64 + 7048;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,-2968(r21)
	ctx.r5.u64 = PPC_LOAD_U32(r21.u32 + -2968);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-9608(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -9608);
	// addi r29,r11,64
	r29.s64 = r11.s64 + 64;
	// addi r28,r31,84
	r28.s64 = r31.s64 + 84;
	// addi r26,r31,88
	r26.s64 = r31.s64 + 88;
	// addi r25,r31,92
	r25.s64 = r31.s64 + 92;
	// addi r19,r31,80
	r19.s64 = r31.s64 + 80;
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// lwz r3,-9608(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -9608);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// bl 0x822de800
	sub_822DE800(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c9ff0
	if (cr0.eq) goto loc_822C9FF0;
	// bl 0x822db478
	sub_822DB478(ctx, base);
	// b 0x822c9ff4
	goto loc_822C9FF4;
loc_822C9FF0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822C9FF4:
	// stw r3,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r3.u32);
loc_822C9FF8:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822ca158
	if (!cr0.gt) goto loc_822CA158;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stfs f31,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// addi r19,r11,22848
	r19.s64 = r11.s64 + 22848;
loc_822CA018:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822b5728
	sub_822B5728(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822ca09c
	if (cr6.eq) goto loc_822CA09C;
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822ca064
	if (cr0.eq) goto loc_822CA064;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822de970
	sub_822DE970(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x822ca068
	goto loc_822CA068;
loc_822CA064:
	// mr r28,r27
	r28.u64 = r27.u64;
loc_822CA068:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// bl 0x822c69e8
	sub_822C69E8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x822ca0d0
	if (!cr6.eq) goto loc_822CA0D0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f3,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822decd0
	sub_822DECD0(ctx, base);
	// b 0x822ca0d0
	goto loc_822CA0D0;
loc_822CA09C:
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822ca0c4
	if (cr0.eq) goto loc_822CA0C4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822c9720
	sub_822C9720(ctx, base);
	// b 0x822ca0c8
	goto loc_822CA0C8;
loc_822CA0C4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822CA0C8:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
loc_822CA0D0:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r26,-2968(r21)
	r26.u64 = PPC_LOAD_U32(r21.u32 + -2968);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r25,4(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822c9db8
	sub_822C9DB8(ctx, base);
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82193c90
	sub_82193C90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-9608(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// bl 0x822b52f8
	sub_822B52F8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x822ca018
	if (cr6.lt) goto loc_822CA018;
loc_822CA158:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_822C9E80"))) PPC_WEAK_FUNC(sub_822C9E80);
PPC_FUNC_IMPL(__imp__sub_822C9E80) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd0
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// addi r11,r11,22864
	r11.s64 = r11.s64 + 22864;
	// addi r23,r30,8
	r23.s64 = r30.s64 + 8;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r27.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r27,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r27.u32);
	// stw r27,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r27.u32);
	// stw r27,8(r23)
	PPC_STORE_U32(r23.u32 + 8, r27.u32);
	// addi r22,r30,20
	r22.s64 = r30.s64 + 20;
	// stw r27,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r27.u32);
	// stw r27,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r27.u32);
	// stw r27,8(r22)
	PPC_STORE_U32(r22.u32 + 8, r27.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// stw r27,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r27.u32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stfs f31,32(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// addi r4,r11,21536
	ctx.r4.s64 = r11.s64 + 21536;
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// lis r21,-32127
	r21.s64 = -2105475072;
	// lis r24,-32127
	r24.s64 = -2105475072;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c9ff8
	if (cr0.eq) goto loc_822C9FF8;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c9f4c
	if (cr0.eq) goto loc_822C9F4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822de170
	sub_822DE170(ctx, base);
	// b 0x822c9f50
	goto loc_822C9F50;
loc_822C9F4C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822C9F50:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// addi r4,r11,7048
	ctx.r4.s64 = r11.s64 + 7048;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,-2968(r21)
	ctx.r5.u64 = PPC_LOAD_U32(r21.u32 + -2968);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-9608(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -9608);
	// addi r29,r11,64
	r29.s64 = r11.s64 + 64;
	// addi r28,r31,84
	r28.s64 = r31.s64 + 84;
	// addi r26,r31,88
	r26.s64 = r31.s64 + 88;
	// addi r25,r31,92
	r25.s64 = r31.s64 + 92;
	// addi r19,r31,80
	r19.s64 = r31.s64 + 80;
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// lwz r3,-9608(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -9608);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// bl 0x822de800
	sub_822DE800(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c9ff0
	if (cr0.eq) goto loc_822C9FF0;
	// bl 0x822db478
	sub_822DB478(ctx, base);
	// b 0x822c9ff4
	goto loc_822C9FF4;
loc_822C9FF0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822C9FF4:
	// stw r3,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r3.u32);
loc_822C9FF8:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822ca158
	if (!cr0.gt) goto loc_822CA158;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stfs f31,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// addi r19,r11,22848
	r19.s64 = r11.s64 + 22848;
loc_822CA018:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822b5728
	sub_822B5728(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822ca09c
	if (cr6.eq) goto loc_822CA09C;
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822ca064
	if (cr0.eq) goto loc_822CA064;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822de970
	sub_822DE970(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x822ca068
	goto loc_822CA068;
loc_822CA064:
	// mr r28,r27
	r28.u64 = r27.u64;
loc_822CA068:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// bl 0x822c69e8
	sub_822C69E8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x822ca0d0
	if (!cr6.eq) goto loc_822CA0D0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f3,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822decd0
	sub_822DECD0(ctx, base);
	// b 0x822ca0d0
	goto loc_822CA0D0;
loc_822CA09C:
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822ca0c4
	if (cr0.eq) goto loc_822CA0C4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822c9720
	sub_822C9720(ctx, base);
	// b 0x822ca0c8
	goto loc_822CA0C8;
loc_822CA0C4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822CA0C8:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
loc_822CA0D0:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r26,-2968(r21)
	r26.u64 = PPC_LOAD_U32(r21.u32 + -2968);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r25,4(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822c9db8
	sub_822C9DB8(ctx, base);
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82193c90
	sub_82193C90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-9608(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// bl 0x822b52f8
	sub_822B52F8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x822ca018
	if (cr6.lt) goto loc_822CA018;
loc_822CA158:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_822CA168"))) PPC_WEAK_FUNC(sub_822CA168);
PPC_FUNC_IMPL(__imp__sub_822CA168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
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

__attribute__((alias("__imp__sub_822CA194"))) PPC_WEAK_FUNC(sub_822CA194);
PPC_FUNC_IMPL(__imp__sub_822CA194) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
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

__attribute__((alias("__imp__sub_822CA1C0"))) PPC_WEAK_FUNC(sub_822CA1C0);
PPC_FUNC_IMPL(__imp__sub_822CA1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
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

__attribute__((alias("__imp__sub_822CA1E8"))) PPC_WEAK_FUNC(sub_822CA1E8);
PPC_FUNC_IMPL(__imp__sub_822CA1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
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

__attribute__((alias("__imp__sub_822CA210"))) PPC_WEAK_FUNC(sub_822CA210);
PPC_FUNC_IMPL(__imp__sub_822CA210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
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

__attribute__((alias("__imp__sub_822CA238"))) PPC_WEAK_FUNC(sub_822CA238);
PPC_FUNC_IMPL(__imp__sub_822CA238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
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

__attribute__((alias("__imp__sub_822CA260"))) PPC_WEAK_FUNC(sub_822CA260);
PPC_FUNC_IMPL(__imp__sub_822CA260) {
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
	// bl 0x822c9b70
	sub_822C9B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822c9e20
	sub_822C9E20(ctx, base);
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

__attribute__((alias("__imp__sub_822CA2B4"))) PPC_WEAK_FUNC(sub_822CA2B4);
PPC_FUNC_IMPL(__imp__sub_822CA2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CA2B8"))) PPC_WEAK_FUNC(sub_822CA2B8);
PPC_FUNC_IMPL(__imp__sub_822CA2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,23056(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23056);
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
	// addi r11,r11,22864
	r11.s64 = r11.s64 + 22864;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822ca260
	sub_822CA260(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822ca320
	if (cr0.eq) goto loc_822CA320;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822CA320:
	// li r11,0
	r11.s64 = 0;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822ca350
	if (cr0.eq) goto loc_822CA350;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822CA350:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822ca370
	if (cr0.eq) goto loc_822CA370;
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
loc_822CA370:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822CA2C0"))) PPC_WEAK_FUNC(sub_822CA2C0);
PPC_FUNC_IMPL(__imp__sub_822CA2C0) {
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
	// addi r11,r11,22864
	r11.s64 = r11.s64 + 22864;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822ca260
	sub_822CA260(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822ca320
	if (cr0.eq) goto loc_822CA320;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822CA320:
	// li r11,0
	r11.s64 = 0;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822ca350
	if (cr0.eq) goto loc_822CA350;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822CA350:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822ca370
	if (cr0.eq) goto loc_822CA370;
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
loc_822CA370:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822CA378"))) PPC_WEAK_FUNC(sub_822CA378);
PPC_FUNC_IMPL(__imp__sub_822CA378) {
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
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
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

__attribute__((alias("__imp__sub_822CA3A4"))) PPC_WEAK_FUNC(sub_822CA3A4);
PPC_FUNC_IMPL(__imp__sub_822CA3A4) {
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
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
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

__attribute__((alias("__imp__sub_822CA3D0"))) PPC_WEAK_FUNC(sub_822CA3D0);
PPC_FUNC_IMPL(__imp__sub_822CA3D0) {
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
	// bl 0x822ca2c0
	sub_822CA2C0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ca400
	if (cr0.eq) goto loc_822CA400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822CA400:
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

__attribute__((alias("__imp__sub_822CA41C"))) PPC_WEAK_FUNC(sub_822CA41C);
PPC_FUNC_IMPL(__imp__sub_822CA41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CA420"))) PPC_WEAK_FUNC(sub_822CA420);
PPC_FUNC_IMPL(__imp__sub_822CA420) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// li r29,5
	r29.s64 = 5;
	// lbz r11,820(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 820);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// beq 0x822ca4a0
	if (cr0.eq) goto loc_822CA4A0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r11,r29
	r11.u64 = r29.u64;
	// addi r9,r3,44
	ctx.r9.s64 = ctx.r3.s64 + 44;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822CA47C:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x822ca47c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_822CA47C;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823118f8
	sub_823118F8(ctx, base);
loc_822CA4A0:
	// stfs f31,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 100, temp.u32);
	// stb r31,91(r30)
	PPC_STORE_U8(r30.u32 + 91, r31.u8);
	// stb r31,92(r30)
	PPC_STORE_U8(r30.u32 + 92, r31.u8);
	// stb r31,113(r30)
	PPC_STORE_U8(r30.u32 + 113, r31.u8);
	// stw r29,824(r30)
	PPC_STORE_U32(r30.u32 + 824, r29.u32);
	// stw r29,828(r30)
	PPC_STORE_U32(r30.u32 + 828, r29.u32);
	// stb r31,115(r30)
	PPC_STORE_U8(r30.u32 + 115, r31.u8);
	// bl 0x822b20d8
	sub_822B20D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822CA4CC"))) PPC_WEAK_FUNC(sub_822CA4CC);
PPC_FUNC_IMPL(__imp__sub_822CA4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CA4D0"))) PPC_WEAK_FUNC(sub_822CA4D0);
PPC_FUNC_IMPL(__imp__sub_822CA4D0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82376c90
	sub_82376C90(ctx, base);
	// lwz r3,836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 836);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822ca50c
	if (cr0.eq) goto loc_822CA50C;
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
loc_822CA50C:
	// li r30,0
	r30.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,836(r31)
	PPC_STORE_U32(r31.u32 + 836, r30.u32);
	// beq 0x822ca534
	if (cr0.eq) goto loc_822CA534;
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
loc_822CA534:
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 816);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stb r30,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r30.u8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822ca54c
	if (cr0.eq) goto loc_822CA54C;
	// bl 0x823768e0
	sub_823768E0(ctx, base);
loc_822CA54C:
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

__attribute__((alias("__imp__sub_822CA564"))) PPC_WEAK_FUNC(sub_822CA564);
PPC_FUNC_IMPL(__imp__sub_822CA564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CA568"))) PPC_WEAK_FUNC(sub_822CA568);
PPC_FUNC_IMPL(__imp__sub_822CA568) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x822ce828
	sub_822CE828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822CA570"))) PPC_WEAK_FUNC(sub_822CA570);
PPC_FUNC_IMPL(__imp__sub_822CA570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-5056
	r31.s64 = r11.s64 + -5056;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x823118d0
	sub_823118D0(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - ctx.f1.f64));
	// stfs f0,100(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 100, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CA5CC"))) PPC_WEAK_FUNC(sub_822CA5CC);
PPC_FUNC_IMPL(__imp__sub_822CA5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CA5D0"))) PPC_WEAK_FUNC(sub_822CA5D0);
PPC_FUNC_IMPL(__imp__sub_822CA5D0) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,23156
	ctx.r4.s64 = r11.s64 + 23156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,-9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ca6c0
	if (cr0.eq) goto loc_822CA6C0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,23140
	ctx.r4.s64 = r11.s64 + 23140;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x822ca6b8
	if (!cr0.eq) goto loc_822CA6B8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,23128
	ctx.r4.s64 = r11.s64 + 23128;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822ca6c0
	if (cr0.eq) goto loc_822CA6C0;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,-9608(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// bl 0x822b3c28
	sub_822B3C28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,23616(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23616);
	// bl 0x82285e30
	sub_82285E30(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ca6c0
	if (cr0.eq) goto loc_822CA6C0;
loc_822CA6B8:
	// li r11,1
	r11.s64 = 1;
	// b 0x822ca6c4
	goto loc_822CA6C4;
loc_822CA6C0:
	// li r11,0
	r11.s64 = 0;
loc_822CA6C4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_822CA6E0"))) PPC_WEAK_FUNC(sub_822CA6E0);
PPC_FUNC_IMPL(__imp__sub_822CA6E0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,23156
	ctx.r4.s64 = r11.s64 + 23156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,-9608(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9608);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ca7a4
	if (cr0.eq) goto loc_822CA7A4;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,23140
	ctx.r4.s64 = r11.s64 + 23140;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x822ca79c
	if (!cr0.eq) goto loc_822CA79C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,23168
	ctx.r4.s64 = r11.s64 + 23168;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822ca7a4
	if (cr0.eq) goto loc_822CA7A4;
loc_822CA79C:
	// li r11,1
	r11.s64 = 1;
	// b 0x822ca7a8
	goto loc_822CA7A8;
loc_822CA7A4:
	// li r11,0
	r11.s64 = 0;
loc_822CA7A8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_822CA7C0"))) PPC_WEAK_FUNC(sub_822CA7C0);
PPC_FUNC_IMPL(__imp__sub_822CA7C0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CA7C8"))) PPC_WEAK_FUNC(sub_822CA7C8);
PPC_FUNC_IMPL(__imp__sub_822CA7C8) {
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
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82357718
	sub_82357718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82357698
	sub_82357698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
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

__attribute__((alias("__imp__sub_822CA824"))) PPC_WEAK_FUNC(sub_822CA824);
PPC_FUNC_IMPL(__imp__sub_822CA824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CA828"))) PPC_WEAK_FUNC(sub_822CA828);
PPC_FUNC_IMPL(__imp__sub_822CA828) {
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
	// beq 0x822ca868
	if (cr0.eq) goto loc_822CA868;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,24036
	ctx.r3.s64 = r11.s64 + 24036;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822ca870
	goto loc_822CA870;
loc_822CA868:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_822CA870:
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_822CA88C"))) PPC_WEAK_FUNC(sub_822CA88C);
PPC_FUNC_IMPL(__imp__sub_822CA88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CA890"))) PPC_WEAK_FUNC(sub_822CA890);
PPC_FUNC_IMPL(__imp__sub_822CA890) {
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
	// lis r28,-32127
	r28.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,-8684(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -8684);
	// lbz r10,91(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 91);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r31,r10,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x822ca8d0
	if (cr0.eq) goto loc_822CA8D0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,91(r11)
	PPC_STORE_U8(r11.u32 + 91, ctx.r10.u8);
	// bl 0x822cecc0
	sub_822CECC0(ctx, base);
loc_822CA8D0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-7564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7564);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-8688(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8688);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x822ca920
	if (cr6.eq) goto loc_822CA920;
	// lwz r11,-8684(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -8684);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// stb r10,91(r11)
	PPC_STORE_U8(r11.u32 + 91, ctx.r10.u8);
	// bl 0x822cecc0
	sub_822CECC0(ctx, base);
loc_822CA920:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822CA928"))) PPC_WEAK_FUNC(sub_822CA928);
PPC_FUNC_IMPL(__imp__sub_822CA928) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r27,120
	ctx.r3.s64 = r27.s64 + 120;
	// bl 0x822b38e8
	sub_822B38E8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,23188
	ctx.r4.s64 = r11.s64 + 23188;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x822ca9b8
	if (cr0.eq) goto loc_822CA9B8;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822ca9b8
	if (!cr6.gt) goto loc_822CA9B8;
	// li r28,8
	r28.s64 = 8;
loc_822CA988:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-8908(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -8908);
	// bl 0x822c6660
	sub_822C6660(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x822ca988
	if (cr6.lt) goto loc_822CA988;
loc_822CA9B8:
	// lbz r11,117(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 117);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822caa28
	if (!cr0.eq) goto loc_822CAA28;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27884
	ctx.r4.s64 = r11.s64 + 27884;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-26900
	ctx.r4.s64 = r11.s64 + -26900;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-26908
	ctx.r4.s64 = r11.s64 + -26908;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d80
	sub_82270D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-8908(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -8908);
	// bl 0x822c6660
	sub_822C6660(ctx, base);
loc_822CAA28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822CAA30"))) PPC_WEAK_FUNC(sub_822CAA30);
PPC_FUNC_IMPL(__imp__sub_822CAA30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stb r4,92(r31)
	PPC_STORE_U8(r31.u32 + 92, ctx.r4.u8);
	// bl 0x822ced30
	sub_822CED30(ctx, base);
	// lbz r11,92(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822caa94
	if (cr0.eq) goto loc_822CAA94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ca570
	sub_822CA570(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822ce7f0
	sub_822CE7F0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// addi r30,r11,-5056
	r30.s64 = r11.s64 + -5056;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// bl 0x82311988
	sub_82311988(ctx, base);
	// stfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
loc_822CAA94:
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

__attribute__((alias("__imp__sub_822CAAAC"))) PPC_WEAK_FUNC(sub_822CAAAC);
PPC_FUNC_IMPL(__imp__sub_822CAAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CAAB0"))) PPC_WEAK_FUNC(sub_822CAAB0);
PPC_FUNC_IMPL(__imp__sub_822CAAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,4016
	ctx.r4.s64 = r11.s64 + 4016;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,-9608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cab64
	if (cr0.eq) goto loc_822CAB64;
	// lwz r3,-9608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-9608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r3,-9608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x822cab5c
	if (cr6.lt) goto loc_822CAB5C;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_822CAB5C:
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822cab80
	goto loc_822CAB80;
loc_822CAB64:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// bl 0x822ce828
	sub_822CE828(ctx, base);
	// bl 0x822c9be8
	sub_822C9BE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822CAB80:
	// lfs f0,832(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 832);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x822cab94
	if (!cr6.lt) goto loc_822CAB94;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822cabc4
	goto loc_822CABC4;
loc_822CAB94:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfd f0,23208(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 23208);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x822cabac
	if (!cr6.lt) goto loc_822CABAC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822cabc4
	goto loc_822CABC4;
loc_822CABAC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r3,3
	ctx.r3.s64 = 3;
	// lfd f0,23200(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 23200);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x822cabc4
	if (!cr6.lt) goto loc_822CABC4;
	// li r3,2
	ctx.r3.s64 = 2;
loc_822CABC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CABE0"))) PPC_WEAK_FUNC(sub_822CABE0);
PPC_FUNC_IMPL(__imp__sub_822CABE0) {
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
	// lwz r16,23312(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23312);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-8660(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8660);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8664
	r29.s64 = ctx.r10.s64 + -8664;
	// bne 0x822cac4c
	if (!cr0.eq) goto loc_822CAC4C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8660(r30)
	PPC_STORE_U32(r30.u32 + -8660, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,23256
	ctx.r4.s64 = r11.s64 + 23256;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8660(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8660);
loc_822CAC4C:
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
	// beq 0x822cac88
	if (cr0.eq) goto loc_822CAC88;
	// clrlwi. r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cac88
	if (cr0.eq) goto loc_822CAC88;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-116
	ctx.r3.s64 = r26.s64 + -116;
loc_822CAC80:
	// bl 0x82126dc0
	sub_82126DC0(ctx, base);
	// b 0x822cae14
	goto loc_822CAE14;
loc_822CAC88:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8668
	r29.s64 = ctx.r10.s64 + -8668;
	// bne 0x822cacb4
	if (!cr0.eq) goto loc_822CACB4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8660(r30)
	PPC_STORE_U32(r30.u32 + -8660, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,23240
	ctx.r4.s64 = r11.s64 + 23240;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8660(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8660);
loc_822CACB4:
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
	// beq 0x822cacec
	if (cr0.eq) goto loc_822CACEC;
	// clrlwi. r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cacec
	if (cr0.eq) goto loc_822CACEC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-112
	ctx.r3.s64 = r26.s64 + -112;
	// b 0x822cac80
	goto loc_822CAC80;
loc_822CACEC:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8672
	r29.s64 = ctx.r10.s64 + -8672;
	// bne 0x822cad18
	if (!cr0.eq) goto loc_822CAD18;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8660(r30)
	PPC_STORE_U32(r30.u32 + -8660, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20360
	ctx.r4.s64 = r11.s64 + 20360;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8660(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8660);
loc_822CAD18:
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
	// beq 0x822cad54
	if (cr0.eq) goto loc_822CAD54;
	// clrlwi. r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cad54
	if (cr0.eq) goto loc_822CAD54;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-824
	ctx.r3.s64 = r26.s64 + -824;
loc_822CAD4C:
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x822cae14
	goto loc_822CAE14;
loc_822CAD54:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8676
	r29.s64 = ctx.r10.s64 + -8676;
	// bne 0x822cad80
	if (!cr0.eq) goto loc_822CAD80;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8660(r30)
	PPC_STORE_U32(r30.u32 + -8660, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,23228
	ctx.r4.s64 = r11.s64 + 23228;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8660(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8660);
loc_822CAD80:
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
	// beq 0x822cadb8
	if (cr0.eq) goto loc_822CADB8;
	// clrlwi. r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cadb8
	if (cr0.eq) goto loc_822CADB8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-825
	ctx.r3.s64 = r26.s64 + -825;
	// b 0x822cad4c
	goto loc_822CAD4C;
loc_822CADB8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8680
	r29.s64 = ctx.r10.s64 + -8680;
	// bne 0x822cade0
	if (!cr0.eq) goto loc_822CADE0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8660(r30)
	PPC_STORE_U32(r30.u32 + -8660, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,23216
	ctx.r4.s64 = r11.s64 + 23216;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822CADE0:
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
	// beq 0x822cae10
	if (cr0.eq) goto loc_822CAE10;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-850
	ctx.r3.s64 = r26.s64 + -850;
	// b 0x822cad4c
	goto loc_822CAD4C;
loc_822CAE10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CAE14:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822CABE8"))) PPC_WEAK_FUNC(sub_822CABE8);
PPC_FUNC_IMPL(__imp__sub_822CABE8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-8660(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8660);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8664
	r29.s64 = ctx.r10.s64 + -8664;
	// bne 0x822cac4c
	if (!cr0.eq) goto loc_822CAC4C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8660(r30)
	PPC_STORE_U32(r30.u32 + -8660, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,23256
	ctx.r4.s64 = r11.s64 + 23256;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8660(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8660);
loc_822CAC4C:
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
	// beq 0x822cac88
	if (cr0.eq) goto loc_822CAC88;
	// clrlwi. r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cac88
	if (cr0.eq) goto loc_822CAC88;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-116
	ctx.r3.s64 = r26.s64 + -116;
loc_822CAC80:
	// bl 0x82126dc0
	sub_82126DC0(ctx, base);
	// b 0x822cae14
	goto loc_822CAE14;
loc_822CAC88:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8668
	r29.s64 = ctx.r10.s64 + -8668;
	// bne 0x822cacb4
	if (!cr0.eq) goto loc_822CACB4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8660(r30)
	PPC_STORE_U32(r30.u32 + -8660, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,23240
	ctx.r4.s64 = r11.s64 + 23240;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8660(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8660);
loc_822CACB4:
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
	// beq 0x822cacec
	if (cr0.eq) goto loc_822CACEC;
	// clrlwi. r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cacec
	if (cr0.eq) goto loc_822CACEC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-112
	ctx.r3.s64 = r26.s64 + -112;
	// b 0x822cac80
	goto loc_822CAC80;
loc_822CACEC:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8672
	r29.s64 = ctx.r10.s64 + -8672;
	// bne 0x822cad18
	if (!cr0.eq) goto loc_822CAD18;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8660(r30)
	PPC_STORE_U32(r30.u32 + -8660, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20360
	ctx.r4.s64 = r11.s64 + 20360;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8660(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8660);
loc_822CAD18:
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
	// beq 0x822cad54
	if (cr0.eq) goto loc_822CAD54;
	// clrlwi. r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cad54
	if (cr0.eq) goto loc_822CAD54;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-824
	ctx.r3.s64 = r26.s64 + -824;
loc_822CAD4C:
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x822cae14
	goto loc_822CAE14;
loc_822CAD54:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8676
	r29.s64 = ctx.r10.s64 + -8676;
	// bne 0x822cad80
	if (!cr0.eq) goto loc_822CAD80;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8660(r30)
	PPC_STORE_U32(r30.u32 + -8660, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,23228
	ctx.r4.s64 = r11.s64 + 23228;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8660(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8660);
loc_822CAD80:
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
	// beq 0x822cadb8
	if (cr0.eq) goto loc_822CADB8;
	// clrlwi. r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cadb8
	if (cr0.eq) goto loc_822CADB8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-825
	ctx.r3.s64 = r26.s64 + -825;
	// b 0x822cad4c
	goto loc_822CAD4C;
loc_822CADB8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8680
	r29.s64 = ctx.r10.s64 + -8680;
	// bne 0x822cade0
	if (!cr0.eq) goto loc_822CADE0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8660(r30)
	PPC_STORE_U32(r30.u32 + -8660, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,23216
	ctx.r4.s64 = r11.s64 + 23216;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822CADE0:
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
	// beq 0x822cae10
	if (cr0.eq) goto loc_822CAE10;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-850
	ctx.r3.s64 = r26.s64 + -850;
	// b 0x822cad4c
	goto loc_822CAD4C;
loc_822CAE10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CAE14:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822CAE1C"))) PPC_WEAK_FUNC(sub_822CAE1C);
PPC_FUNC_IMPL(__imp__sub_822CAE1C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8660
	r11.s64 = r11.s64 + -8660;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8660
	ctx.r10.s64 = ctx.r10.s64 + -8660;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CAE44"))) PPC_WEAK_FUNC(sub_822CAE44);
PPC_FUNC_IMPL(__imp__sub_822CAE44) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8660
	r11.s64 = r11.s64 + -8660;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8660
	ctx.r10.s64 = ctx.r10.s64 + -8660;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CAE6C"))) PPC_WEAK_FUNC(sub_822CAE6C);
PPC_FUNC_IMPL(__imp__sub_822CAE6C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8660
	r11.s64 = r11.s64 + -8660;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8660
	ctx.r10.s64 = ctx.r10.s64 + -8660;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CAE94"))) PPC_WEAK_FUNC(sub_822CAE94);
PPC_FUNC_IMPL(__imp__sub_822CAE94) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8660
	r11.s64 = r11.s64 + -8660;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8660
	ctx.r10.s64 = ctx.r10.s64 + -8660;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CAEBC"))) PPC_WEAK_FUNC(sub_822CAEBC);
PPC_FUNC_IMPL(__imp__sub_822CAEBC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8660
	r11.s64 = r11.s64 + -8660;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8660
	ctx.r10.s64 = ctx.r10.s64 + -8660;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CAEE4"))) PPC_WEAK_FUNC(sub_822CAEE4);
PPC_FUNC_IMPL(__imp__sub_822CAEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CAEE8"))) PPC_WEAK_FUNC(sub_822CAEE8);
PPC_FUNC_IMPL(__imp__sub_822CAEE8) {
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
	// addi r31,r11,24064
	r31.s64 = r11.s64 + 24064;
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

__attribute__((alias("__imp__sub_822CAF40"))) PPC_WEAK_FUNC(sub_822CAF40);
PPC_FUNC_IMPL(__imp__sub_822CAF40) {
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
	// addi r31,r11,5092
	r31.s64 = r11.s64 + 5092;
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

__attribute__((alias("__imp__sub_822CAF98"))) PPC_WEAK_FUNC(sub_822CAF98);
PPC_FUNC_IMPL(__imp__sub_822CAF98) {
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
	// addi r31,r11,15660
	r31.s64 = r11.s64 + 15660;
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

__attribute__((alias("__imp__sub_822CAFF0"))) PPC_WEAK_FUNC(sub_822CAFF0);
PPC_FUNC_IMPL(__imp__sub_822CAFF0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,23472(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23472);
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
	// addi r3,r30,736
	ctx.r3.s64 = r30.s64 + 736;
	// bl 0x8235cd60
	sub_8235CD60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823769e8
	sub_823769E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ca928
	sub_822CA928(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822d6398
	sub_822D6398(ctx, base);
	// li r3,168
	ctx.r3.s64 = 168;
	// stfs f1,832(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 832, temp.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cb068
	if (cr0.eq) goto loc_822CB068;
	// bl 0x822e0928
	sub_822E0928(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x822cb06c
	goto loc_822CB06C;
loc_822CB068:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822CB06C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r10,836(r30)
	PPC_STORE_U32(r30.u32 + 836, ctx.r10.u32);
	// addi r4,r11,23440
	ctx.r4.s64 = r11.s64 + 23440;
	// li r11,0
	r11.s64 = 0;
	// stw r11,816(r30)
	PPC_STORE_U32(r30.u32 + 816, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82315578
	sub_82315578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822cb0e0
	if (!cr0.eq) goto loc_822CB0E0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-2968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x8228bad8
	sub_8228BAD8(ctx, base);
	// stw r3,816(r30)
	PPC_STORE_U32(r30.u32 + 816, ctx.r3.u32);
	// bl 0x82376308
	sub_82376308(ctx, base);
loc_822CB0E0:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822CAFF8"))) PPC_WEAK_FUNC(sub_822CAFF8);
PPC_FUNC_IMPL(__imp__sub_822CAFF8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r30,736
	ctx.r3.s64 = r30.s64 + 736;
	// bl 0x8235cd60
	sub_8235CD60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823769e8
	sub_823769E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ca928
	sub_822CA928(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822d6398
	sub_822D6398(ctx, base);
	// li r3,168
	ctx.r3.s64 = 168;
	// stfs f1,832(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 832, temp.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cb068
	if (cr0.eq) goto loc_822CB068;
	// bl 0x822e0928
	sub_822E0928(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x822cb06c
	goto loc_822CB06C;
loc_822CB068:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822CB06C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r10,836(r30)
	PPC_STORE_U32(r30.u32 + 836, ctx.r10.u32);
	// addi r4,r11,23440
	ctx.r4.s64 = r11.s64 + 23440;
	// li r11,0
	r11.s64 = 0;
	// stw r11,816(r30)
	PPC_STORE_U32(r30.u32 + 816, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82315578
	sub_82315578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822cb0e0
	if (!cr0.eq) goto loc_822CB0E0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-2968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x8228bad8
	sub_8228BAD8(ctx, base);
	// stw r3,816(r30)
	PPC_STORE_U32(r30.u32 + 816, ctx.r3.u32);
	// bl 0x82376308
	sub_82376308(ctx, base);
loc_822CB0E0:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822CB0E8"))) PPC_WEAK_FUNC(sub_822CB0E8);
PPC_FUNC_IMPL(__imp__sub_822CB0E8) {
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

__attribute__((alias("__imp__sub_822CB110"))) PPC_WEAK_FUNC(sub_822CB110);
PPC_FUNC_IMPL(__imp__sub_822CB110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,23560(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23560);
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,23536
	ctx.r4.s64 = r11.s64 + 23536;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-2968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x822caee8
	sub_822CAEE8(ctx, base);
	// bl 0x82693910
	sub_82693910(ctx, base);
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cb170
	if (cr0.eq) goto loc_822CB170;
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
loc_822CB170:
	// li r11,0
	r11.s64 = 0;
	// li r3,184
	ctx.r3.s64 = 184;
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cb194
	if (cr0.eq) goto loc_822CB194;
	// bl 0x822d08f0
	sub_822D08F0(ctx, base);
	// b 0x822cb198
	goto loc_822CB198;
loc_822CB194:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CB198:
	// stw r3,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_822CB118"))) PPC_WEAK_FUNC(sub_822CB118);
PPC_FUNC_IMPL(__imp__sub_822CB118) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,23536
	ctx.r4.s64 = r11.s64 + 23536;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-2968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x822caee8
	sub_822CAEE8(ctx, base);
	// bl 0x82693910
	sub_82693910(ctx, base);
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cb170
	if (cr0.eq) goto loc_822CB170;
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
loc_822CB170:
	// li r11,0
	r11.s64 = 0;
	// li r3,184
	ctx.r3.s64 = 184;
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cb194
	if (cr0.eq) goto loc_822CB194;
	// bl 0x822d08f0
	sub_822D08F0(ctx, base);
	// b 0x822cb198
	goto loc_822CB198;
loc_822CB194:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CB198:
	// stw r3,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_822CB1B4"))) PPC_WEAK_FUNC(sub_822CB1B4);
PPC_FUNC_IMPL(__imp__sub_822CB1B4) {
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

__attribute__((alias("__imp__sub_822CB1DC"))) PPC_WEAK_FUNC(sub_822CB1DC);
PPC_FUNC_IMPL(__imp__sub_822CB1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CB1E0"))) PPC_WEAK_FUNC(sub_822CB1E0);
PPC_FUNC_IMPL(__imp__sub_822CB1E0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,848(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 848);
	// lwz r10,844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cb24c
	if (cr0.eq) goto loc_822CB24C;
	// li r30,0
	r30.s64 = 0;
loc_822CB20C:
	// lwz r11,844(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
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
	// beq 0x822cb258
	if (cr0.eq) goto loc_822CB258;
	// lwz r11,848(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 848);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x822cb20c
	if (cr6.lt) goto loc_822CB20C;
loc_822CB24C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822CB250:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_822CB258:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822cb250
	goto loc_822CB250;
}

__attribute__((alias("__imp__sub_822CB260"))) PPC_WEAK_FUNC(sub_822CB260);
PPC_FUNC_IMPL(__imp__sub_822CB260) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822cebe8
	sub_822CEBE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822caa30
	sub_822CAA30(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,113(r31)
	PPC_STORE_U8(r31.u32 + 113, r11.u8);
	// stb r10,114(r31)
	PPC_STORE_U8(r31.u32 + 114, ctx.r10.u8);
	// bl 0x82196128
	sub_82196128(ctx, base);
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

__attribute__((alias("__imp__sub_822CB2B0"))) PPC_WEAK_FUNC(sub_822CB2B0);
PPC_FUNC_IMPL(__imp__sub_822CB2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x822bb480
	sub_822BB480(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,17324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fdivs f13,f31,f30
	ctx.f13.f64 = double(float(f31.f64 / f30.f64));
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x823118f8
	sub_823118F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822caa30
	sub_822CAA30(ctx, base);
	// stfs f30,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CB334"))) PPC_WEAK_FUNC(sub_822CB334);
PPC_FUNC_IMPL(__imp__sub_822CB334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CB338"))) PPC_WEAK_FUNC(sub_822CB338);
PPC_FUNC_IMPL(__imp__sub_822CB338) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,23648(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23648);
	// mflr r12
	// bl 0x8239bcf0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r3,836(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 836);
	// stb r27,16(r29)
	PPC_STORE_U8(r29.u32 + 16, r27.u8);
	// bl 0x822df500
	sub_822DF500(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,-8648(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8648);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-8656
	r30.s64 = ctx.r9.s64 + -8656;
	// bne 0x822cb3d8
	if (!cr0.eq) goto loc_822CB3D8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8648, r11.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,23608
	ctx.r4.s64 = r11.s64 + 23608;
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
	// beq 0x822cb3cc
	if (cr0.eq) goto loc_822CB3CC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CB3CC:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14240
	ctx.r3.s64 = r11.s64 + 14240;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CB3D8:
	// clrlwi r26,r27,24
	r26.u64 = r27.u32 & 0xFF;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// stw r26,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r26.u32);
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
	// beq 0x822cb40c
	if (cr0.eq) goto loc_822CB40C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CB40C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
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
	// beq 0x822cb44c
	if (cr0.eq) goto loc_822CB44C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CB44C:
	// lbz r11,113(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 113);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822cb464
	if (cr0.eq) goto loc_822CB464;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,80(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// bl 0x822cecc0
	sub_822CECC0(ctx, base);
loc_822CB464:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,-7564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7564);
	// bl 0x822e7c68
	sub_822E7C68(ctx, base);
	// lbz r11,92(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822cb490
	if (cr0.eq) goto loc_822CB490;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x822cb498
	if (!cr6.eq) goto loc_822CB498;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822ca570
	sub_822CA570(ctx, base);
loc_822CB490:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x822cb4c4
	if (cr6.eq) goto loc_822CB4C4;
loc_822CB498:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-5056
	r30.s64 = r11.s64 + -5056;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82311988
	sub_82311988(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// bl 0x823118f8
	sub_823118F8(ctx, base);
loc_822CB4C4:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822CB340"))) PPC_WEAK_FUNC(sub_822CB340);
PPC_FUNC_IMPL(__imp__sub_822CB340) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r3,836(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 836);
	// stb r27,16(r29)
	PPC_STORE_U8(r29.u32 + 16, r27.u8);
	// bl 0x822df500
	sub_822DF500(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,-8648(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8648);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-8656
	r30.s64 = ctx.r9.s64 + -8656;
	// bne 0x822cb3d8
	if (!cr0.eq) goto loc_822CB3D8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8648, r11.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,23608
	ctx.r4.s64 = r11.s64 + 23608;
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
	// beq 0x822cb3cc
	if (cr0.eq) goto loc_822CB3CC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CB3CC:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14240
	ctx.r3.s64 = r11.s64 + 14240;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CB3D8:
	// clrlwi r26,r27,24
	r26.u64 = r27.u32 & 0xFF;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// stw r26,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r26.u32);
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
	// beq 0x822cb40c
	if (cr0.eq) goto loc_822CB40C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CB40C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
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
	// beq 0x822cb44c
	if (cr0.eq) goto loc_822CB44C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CB44C:
	// lbz r11,113(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 113);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822cb464
	if (cr0.eq) goto loc_822CB464;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,80(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// bl 0x822cecc0
	sub_822CECC0(ctx, base);
loc_822CB464:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,-7564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7564);
	// bl 0x822e7c68
	sub_822E7C68(ctx, base);
	// lbz r11,92(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822cb490
	if (cr0.eq) goto loc_822CB490;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x822cb498
	if (!cr6.eq) goto loc_822CB498;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822ca570
	sub_822CA570(ctx, base);
loc_822CB490:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x822cb4c4
	if (cr6.eq) goto loc_822CB4C4;
loc_822CB498:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-5056
	r30.s64 = r11.s64 + -5056;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82311988
	sub_82311988(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// bl 0x823118f8
	sub_823118F8(ctx, base);
loc_822CB4C4:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822CB4D0"))) PPC_WEAK_FUNC(sub_822CB4D0);
PPC_FUNC_IMPL(__imp__sub_822CB4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8648
	r11.s64 = r11.s64 + -8648;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8648
	ctx.r10.s64 = ctx.r10.s64 + -8648;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CB4F8"))) PPC_WEAK_FUNC(sub_822CB4F8);
PPC_FUNC_IMPL(__imp__sub_822CB4F8) {
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

__attribute__((alias("__imp__sub_822CB520"))) PPC_WEAK_FUNC(sub_822CB520);
PPC_FUNC_IMPL(__imp__sub_822CB520) {
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

__attribute__((alias("__imp__sub_822CB548"))) PPC_WEAK_FUNC(sub_822CB548);
PPC_FUNC_IMPL(__imp__sub_822CB548) {
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
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x822b3888
	sub_822B3888(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-8112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -8112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822cb578
	if (cr6.eq) goto loc_822CB578;
	// bl 0x822d5ad8
	sub_822D5AD8(ctx, base);
loc_822CB578:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cb118
	sub_822CB118(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,23536
	ctx.r4.s64 = r11.s64 + 23536;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-2968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x822caee8
	sub_822CAEE8(ctx, base);
	// bl 0x826932d0
	sub_826932D0(ctx, base);
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

__attribute__((alias("__imp__sub_822CB5B0"))) PPC_WEAK_FUNC(sub_822CB5B0);
PPC_FUNC_IMPL(__imp__sub_822CB5B0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,23816(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23816);
	// mflr r12
	// bl 0x8239bcf0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r4,116(r27)
	PPC_STORE_U8(r27.u32 + 116, ctx.r4.u8);
	// stb r11,115(r27)
	PPC_STORE_U8(r27.u32 + 115, r11.u8);
	// beq 0x822cb720
	if (cr0.eq) goto loc_822CB720;
	// bl 0x822ca6e0
	sub_822CA6E0(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// clrlwi. r26,r3,24
	r26.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x822cb640
	if (cr0.eq) goto loc_822CB640;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// mr r30,r28
	r30.u64 = r28.u64;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822cb640
	if (!cr0.gt) goto loc_822CB640;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
loc_822CB614:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822dcd08
	sub_822DCD08(ctx, base);
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x822cb614
	if (cr6.lt) goto loc_822CB614;
loc_822CB640:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-8612
	r30.s64 = r11.s64 + -8612;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8620
	r29.s64 = ctx.r10.s64 + -8620;
	// bne 0x822cb6b0
	if (!cr0.eq) goto loc_822CB6B0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,23752
	ctx.r4.s64 = r11.s64 + 23752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cb6a4
	if (cr0.eq) goto loc_822CB6A4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CB6A4:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14368
	ctx.r3.s64 = r11.s64 + 14368;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CB6B0:
	// stw r26,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r26.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
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
	// beq 0x822cb6e0
	if (cr0.eq) goto loc_822CB6E0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CB6E0:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
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
	// beq 0x822cb848
	if (cr0.eq) goto loc_822CB848;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x822cb844
	goto loc_822CB844;
loc_822CB720:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-8612
	r30.s64 = r11.s64 + -8612;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8628
	r29.s64 = ctx.r10.s64 + -8628;
	// bne 0x822cb770
	if (!cr0.eq) goto loc_822CB770;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,23740
	ctx.r4.s64 = r11.s64 + 23740;
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
	// addi r3,r11,14336
	ctx.r3.s64 = r11.s64 + 14336;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CB770:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
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
	// beq 0x822cb7b0
	if (cr0.eq) goto loc_822CB7B0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CB7B0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822ca6e0
	sub_822CA6E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cb848
	if (cr0.eq) goto loc_822CB848;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8636
	r29.s64 = ctx.r10.s64 + -8636;
	// bne 0x822cb808
	if (!cr0.eq) goto loc_822CB808;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,23728
	ctx.r4.s64 = r11.s64 + 23728;
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
	// addi r3,r11,14304
	ctx.r3.s64 = r11.s64 + 14304;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CB808:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
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
	// beq 0x822cb848
	if (cr0.eq) goto loc_822CB848;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
loc_822CB844:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CB848:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8644
	r29.s64 = ctx.r10.s64 + -8644;
	// bne 0x822cb890
	if (!cr0.eq) goto loc_822CB890;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,23228
	ctx.r4.s64 = r11.s64 + 23228;
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
	// addi r3,r11,14272
	ctx.r3.s64 = r11.s64 + 14272;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CB890:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
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
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cb8d0
	if (cr0.eq) goto loc_822CB8D0;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CB8D0:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822CB5B8"))) PPC_WEAK_FUNC(sub_822CB5B8);
PPC_FUNC_IMPL(__imp__sub_822CB5B8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r4,116(r27)
	PPC_STORE_U8(r27.u32 + 116, ctx.r4.u8);
	// stb r11,115(r27)
	PPC_STORE_U8(r27.u32 + 115, r11.u8);
	// beq 0x822cb720
	if (cr0.eq) goto loc_822CB720;
	// bl 0x822ca6e0
	sub_822CA6E0(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// clrlwi. r26,r3,24
	r26.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x822cb640
	if (cr0.eq) goto loc_822CB640;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// mr r30,r28
	r30.u64 = r28.u64;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822cb640
	if (!cr0.gt) goto loc_822CB640;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
loc_822CB614:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822dcd08
	sub_822DCD08(ctx, base);
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x822cb614
	if (cr6.lt) goto loc_822CB614;
loc_822CB640:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-8612
	r30.s64 = r11.s64 + -8612;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8620
	r29.s64 = ctx.r10.s64 + -8620;
	// bne 0x822cb6b0
	if (!cr0.eq) goto loc_822CB6B0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,23752
	ctx.r4.s64 = r11.s64 + 23752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cb6a4
	if (cr0.eq) goto loc_822CB6A4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CB6A4:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14368
	ctx.r3.s64 = r11.s64 + 14368;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CB6B0:
	// stw r26,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r26.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
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
	// beq 0x822cb6e0
	if (cr0.eq) goto loc_822CB6E0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CB6E0:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
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
	// beq 0x822cb848
	if (cr0.eq) goto loc_822CB848;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x822cb844
	goto loc_822CB844;
loc_822CB720:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-8612
	r30.s64 = r11.s64 + -8612;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8628
	r29.s64 = ctx.r10.s64 + -8628;
	// bne 0x822cb770
	if (!cr0.eq) goto loc_822CB770;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,23740
	ctx.r4.s64 = r11.s64 + 23740;
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
	// addi r3,r11,14336
	ctx.r3.s64 = r11.s64 + 14336;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CB770:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
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
	// beq 0x822cb7b0
	if (cr0.eq) goto loc_822CB7B0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CB7B0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822ca6e0
	sub_822CA6E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cb848
	if (cr0.eq) goto loc_822CB848;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8636
	r29.s64 = ctx.r10.s64 + -8636;
	// bne 0x822cb808
	if (!cr0.eq) goto loc_822CB808;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,23728
	ctx.r4.s64 = r11.s64 + 23728;
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
	// addi r3,r11,14304
	ctx.r3.s64 = r11.s64 + 14304;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CB808:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
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
	// beq 0x822cb848
	if (cr0.eq) goto loc_822CB848;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
loc_822CB844:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CB848:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8644
	r29.s64 = ctx.r10.s64 + -8644;
	// bne 0x822cb890
	if (!cr0.eq) goto loc_822CB890;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,23228
	ctx.r4.s64 = r11.s64 + 23228;
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
	// addi r3,r11,14272
	ctx.r3.s64 = r11.s64 + 14272;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CB890:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
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
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cb8d0
	if (cr0.eq) goto loc_822CB8D0;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CB8D0:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822CB8DC"))) PPC_WEAK_FUNC(sub_822CB8DC);
PPC_FUNC_IMPL(__imp__sub_822CB8DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8612
	r11.s64 = r11.s64 + -8612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8612
	ctx.r10.s64 = ctx.r10.s64 + -8612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CB904"))) PPC_WEAK_FUNC(sub_822CB904);
PPC_FUNC_IMPL(__imp__sub_822CB904) {
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

__attribute__((alias("__imp__sub_822CB92C"))) PPC_WEAK_FUNC(sub_822CB92C);
PPC_FUNC_IMPL(__imp__sub_822CB92C) {
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

__attribute__((alias("__imp__sub_822CB954"))) PPC_WEAK_FUNC(sub_822CB954);
PPC_FUNC_IMPL(__imp__sub_822CB954) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8612
	r11.s64 = r11.s64 + -8612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8612
	ctx.r10.s64 = ctx.r10.s64 + -8612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CB97C"))) PPC_WEAK_FUNC(sub_822CB97C);
PPC_FUNC_IMPL(__imp__sub_822CB97C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8612
	r11.s64 = r11.s64 + -8612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8612
	ctx.r10.s64 = ctx.r10.s64 + -8612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CB9A4"))) PPC_WEAK_FUNC(sub_822CB9A4);
PPC_FUNC_IMPL(__imp__sub_822CB9A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8612
	r11.s64 = r11.s64 + -8612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8612
	ctx.r10.s64 = ctx.r10.s64 + -8612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CB9CC"))) PPC_WEAK_FUNC(sub_822CB9CC);
PPC_FUNC_IMPL(__imp__sub_822CB9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CB9D0"))) PPC_WEAK_FUNC(sub_822CB9D0);
PPC_FUNC_IMPL(__imp__sub_822CB9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,23976(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23976);
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
	// lbz r11,114(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 114);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822cba8c
	if (!cr0.eq) goto loc_822CBA8C;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,-8600(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8600);
	// stb r9,114(r29)
	PPC_STORE_U8(r29.u32 + 114, ctx.r9.u8);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-8608
	r30.s64 = ctx.r9.s64 + -8608;
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x822cba4c
	if (!cr0.eq) goto loc_822CBA4C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8600, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,23944
	ctx.r4.s64 = r11.s64 + 23944;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14400
	ctx.r3.s64 = r11.s64 + 14400;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CBA4C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
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
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cba8c
	if (cr0.eq) goto loc_822CBA8C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CBA8C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822CB9D8"))) PPC_WEAK_FUNC(sub_822CB9D8);
PPC_FUNC_IMPL(__imp__sub_822CB9D8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,114(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 114);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822cba8c
	if (!cr0.eq) goto loc_822CBA8C;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,-8600(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8600);
	// stb r9,114(r29)
	PPC_STORE_U8(r29.u32 + 114, ctx.r9.u8);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-8608
	r30.s64 = ctx.r9.s64 + -8608;
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x822cba4c
	if (!cr0.eq) goto loc_822CBA4C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8600, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,23944
	ctx.r4.s64 = r11.s64 + 23944;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14400
	ctx.r3.s64 = r11.s64 + 14400;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CBA4C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
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
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cba8c
	if (cr0.eq) goto loc_822CBA8C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CBA8C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822CBA94"))) PPC_WEAK_FUNC(sub_822CBA94);
PPC_FUNC_IMPL(__imp__sub_822CBA94) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8600
	r11.s64 = r11.s64 + -8600;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8600
	ctx.r10.s64 = ctx.r10.s64 + -8600;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CBABC"))) PPC_WEAK_FUNC(sub_822CBABC);
PPC_FUNC_IMPL(__imp__sub_822CBABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CBAC0"))) PPC_WEAK_FUNC(sub_822CBAC0);
PPC_FUNC_IMPL(__imp__sub_822CBAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,24064(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24064);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r9,824(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 824);
	// cmpw cr6,r9,r27
	cr6.compare<int32_t>(ctx.r9.s32, r27.s32, xer);
	// beq cr6,0x822cbbd4
	if (cr6.eq) goto loc_822CBBD4;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// stw r9,828(r29)
	PPC_STORE_U32(r29.u32 + 828, ctx.r9.u32);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// stw r27,824(r29)
	PPC_STORE_U32(r29.u32 + 824, r27.u32);
	// li r28,0
	r28.s64 = 0;
	// addi r30,r9,-8596
	r30.s64 = ctx.r9.s64 + -8596;
	// lwz r11,-8588(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8588);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x822cbb64
	if (!cr0.eq) goto loc_822CBB64;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8588, r11.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,23256
	ctx.r4.s64 = r11.s64 + 23256;
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
	// beq 0x822cbb58
	if (cr0.eq) goto loc_822CBB58;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CBB58:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14432
	ctx.r3.s64 = r11.s64 + 14432;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CBB64:
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
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
	// beq 0x822cbb94
	if (cr0.eq) goto loc_822CBB94;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CBB94:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
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
	// beq 0x822cbbd4
	if (cr0.eq) goto loc_822CBBD4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CBBD4:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822CBAC8"))) PPC_WEAK_FUNC(sub_822CBAC8);
PPC_FUNC_IMPL(__imp__sub_822CBAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r9,824(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 824);
	// cmpw cr6,r9,r27
	cr6.compare<int32_t>(ctx.r9.s32, r27.s32, xer);
	// beq cr6,0x822cbbd4
	if (cr6.eq) goto loc_822CBBD4;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// stw r9,828(r29)
	PPC_STORE_U32(r29.u32 + 828, ctx.r9.u32);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// stw r27,824(r29)
	PPC_STORE_U32(r29.u32 + 824, r27.u32);
	// li r28,0
	r28.s64 = 0;
	// addi r30,r9,-8596
	r30.s64 = ctx.r9.s64 + -8596;
	// lwz r11,-8588(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8588);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x822cbb64
	if (!cr0.eq) goto loc_822CBB64;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8588, r11.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,23256
	ctx.r4.s64 = r11.s64 + 23256;
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
	// beq 0x822cbb58
	if (cr0.eq) goto loc_822CBB58;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CBB58:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14432
	ctx.r3.s64 = r11.s64 + 14432;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CBB64:
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
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
	// beq 0x822cbb94
	if (cr0.eq) goto loc_822CBB94;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CBB94:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
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
	// beq 0x822cbbd4
	if (cr0.eq) goto loc_822CBBD4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CBBD4:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822CBBDC"))) PPC_WEAK_FUNC(sub_822CBBDC);
PPC_FUNC_IMPL(__imp__sub_822CBBDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8588
	r11.s64 = r11.s64 + -8588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8588
	ctx.r10.s64 = ctx.r10.s64 + -8588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CBC04"))) PPC_WEAK_FUNC(sub_822CBC04);
PPC_FUNC_IMPL(__imp__sub_822CBC04) {
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

__attribute__((alias("__imp__sub_822CBC2C"))) PPC_WEAK_FUNC(sub_822CBC2C);
PPC_FUNC_IMPL(__imp__sub_822CBC2C) {
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

__attribute__((alias("__imp__sub_822CBC54"))) PPC_WEAK_FUNC(sub_822CBC54);
PPC_FUNC_IMPL(__imp__sub_822CBC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CBC58"))) PPC_WEAK_FUNC(sub_822CBC58);
PPC_FUNC_IMPL(__imp__sub_822CBC58) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,24176(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24176);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,-9608(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b3c28
	sub_822B3C28(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r11,24144
	ctx.r3.s64 = r11.s64 + 24144;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8228cf68
	sub_8228CF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r30,856
	ctx.r3.s64 = r30.s64 + 856;
	// bl 0x8229f7d0
	sub_8229F7D0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
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

__attribute__((alias("__imp__sub_822CBC60"))) PPC_WEAK_FUNC(sub_822CBC60);
PPC_FUNC_IMPL(__imp__sub_822CBC60) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,-9608(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b3c28
	sub_822B3C28(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r11,24144
	ctx.r3.s64 = r11.s64 + 24144;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8228cf68
	sub_8228CF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r30,856
	ctx.r3.s64 = r30.s64 + 856;
	// bl 0x8229f7d0
	sub_8229F7D0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
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

__attribute__((alias("__imp__sub_822CBCE4"))) PPC_WEAK_FUNC(sub_822CBCE4);
PPC_FUNC_IMPL(__imp__sub_822CBCE4) {
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

__attribute__((alias("__imp__sub_822CBD0C"))) PPC_WEAK_FUNC(sub_822CBD0C);
PPC_FUNC_IMPL(__imp__sub_822CBD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CBD10"))) PPC_WEAK_FUNC(sub_822CBD10);
PPC_FUNC_IMPL(__imp__sub_822CBD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,24280(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24280);
	// mflr r12
	// bl 0x8239bcf8
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,836(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 836);
	// bl 0x822dfab0
	sub_822DFAB0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r11,-2472(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -2472);
	// lwz r6,18972(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x823262c8
	sub_823262C8(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r28,r11,-5056
	r28.s64 = r11.s64 + -5056;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82312de8
	sub_82312DE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82376eb0
	sub_82376EB0(ctx, base);
	// addi r3,r30,736
	ctx.r3.s64 = r30.s64 + 736;
	// bl 0x8235cd88
	sub_8235CD88(ctx, base);
	// lis r11,-32211
	r11.s64 = -2110980096;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r4,r11,-22384
	ctx.r4.s64 = r11.s64 + -22384;
	// addi r3,r10,18840
	ctx.r3.s64 = ctx.r10.s64 + 18840;
	// bl 0x82272430
	sub_82272430(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r3,-8688(r11)
	PPC_STORE_U32(r11.u32 + -8688, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ca420
	sub_822CA420(ctx, base);
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// bl 0x822cf020
	sub_822CF020(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,12292
	ctx.r4.s64 = r11.s64 + 12292;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r29,-9608(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cbfa4
	if (cr0.eq) goto loc_822CBFA4;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b4420
	sub_822B4420(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r4,-9288(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// bl 0x822bb3f0
	sub_822BB3F0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f29,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f29.f64 = double(temp.f32);
	// bne cr6,0x822cbe58
	if (!cr6.eq) goto loc_822CBE58;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-9288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// bl 0x822bb480
	sub_822BB480(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f2,-14520(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14520);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,24248(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24248);
	f0.f64 = double(temp.f32);
	// fmuls f31,f30,f0
	f31.f64 = double(float(f30.f64 * f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823118f8
	sub_823118F8(ctx, base);
	// stfs f30,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 96, temp.u32);
	// b 0x822cbed0
	goto loc_822CBED0;
loc_822CBE58:
	// lwz r11,-9288(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// bl 0x8235c7f8
	sub_8235C7F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-9288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// lfd f0,88(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822bb468
	sub_822BB468(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,-4904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	f0.f64 = double(temp.f32);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 * f0.f64));
	// fmuls f31,f1,f29
	f31.f64 = double(float(ctx.f1.f64 * f29.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823118f8
	sub_823118F8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * f0.f64));
	// bl 0x822cef88
	sub_822CEF88(ctx, base);
loc_822CBED0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x822cbeec
	if (!cr6.lt) goto loc_822CBEEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822caa30
	sub_822CAA30(ctx, base);
loc_822CBEEC:
	// lwa r11,84(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 84));
	// lwz r3,-9288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// lfd f0,88(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x822bb468
	sub_822BB468(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// fmuls f30,f1,f29
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64 * f29.f64));
	// lwz r11,-8576(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8576);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-8584
	r29.s64 = ctx.r9.s64 + -8584;
	// bne 0x822cbf58
	if (!cr0.eq) goto loc_822CBF58;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8576, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,24232
	ctx.r4.s64 = r11.s64 + 24232;
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
	// addi r3,r11,14048
	ctx.r3.s64 = r11.s64 + 14048;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CBF58:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cbf8c
	if (cr0.eq) goto loc_822CBF8C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82312240
	sub_82312240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822cbf90
	goto loc_822CBF90;
loc_822CBF8C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822CBF90:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fsubs f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 - f31.f64));
	// bl 0x82314420
	sub_82314420(ctx, base);
	// b 0x822cbfb4
	goto loc_822CBFB4;
loc_822CBFA4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r29,512
	ctx.r3.s64 = r29.s64 + 512;
	// lwz r4,-9288(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x822c5510
	sub_822C5510(ctx, base);
loc_822CBFB4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stb r10,112(r30)
	PPC_STORE_U8(r30.u32 + 112, ctx.r10.u8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cbff4
	if (cr0.eq) goto loc_822CBFF4;
	// bl 0x822e14a8
	sub_822E14A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x822cbff8
	goto loc_822CBFF8;
loc_822CBFF4:
	// li r11,0
	r11.s64 = 0;
loc_822CBFF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,856
	ctx.r3.s64 = r30.s64 + 856;
	// stw r11,840(r30)
	PPC_STORE_U32(r30.u32 + 840, r11.u32);
	// bl 0x8229eb48
	sub_8229EB48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822e1058
	sub_822E1058(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822CBD18"))) PPC_WEAK_FUNC(sub_822CBD18);
PPC_FUNC_IMPL(__imp__sub_822CBD18) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,836(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 836);
	// bl 0x822dfab0
	sub_822DFAB0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r11,-2472(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -2472);
	// lwz r6,18972(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x823262c8
	sub_823262C8(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r28,r11,-5056
	r28.s64 = r11.s64 + -5056;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82312de8
	sub_82312DE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82376eb0
	sub_82376EB0(ctx, base);
	// addi r3,r30,736
	ctx.r3.s64 = r30.s64 + 736;
	// bl 0x8235cd88
	sub_8235CD88(ctx, base);
	// lis r11,-32211
	r11.s64 = -2110980096;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r4,r11,-22384
	ctx.r4.s64 = r11.s64 + -22384;
	// addi r3,r10,18840
	ctx.r3.s64 = ctx.r10.s64 + 18840;
	// bl 0x82272430
	sub_82272430(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r3,-8688(r11)
	PPC_STORE_U32(r11.u32 + -8688, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ca420
	sub_822CA420(ctx, base);
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// bl 0x822cf020
	sub_822CF020(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,12292
	ctx.r4.s64 = r11.s64 + 12292;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r29,-9608(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cbfa4
	if (cr0.eq) goto loc_822CBFA4;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b4420
	sub_822B4420(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r4,-9288(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// bl 0x822bb3f0
	sub_822BB3F0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f29,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f29.f64 = double(temp.f32);
	// bne cr6,0x822cbe58
	if (!cr6.eq) goto loc_822CBE58;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-9288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// bl 0x822bb480
	sub_822BB480(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f2,-14520(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14520);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,24248(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24248);
	f0.f64 = double(temp.f32);
	// fmuls f31,f30,f0
	f31.f64 = double(float(f30.f64 * f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823118f8
	sub_823118F8(ctx, base);
	// stfs f30,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 96, temp.u32);
	// b 0x822cbed0
	goto loc_822CBED0;
loc_822CBE58:
	// lwz r11,-9288(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// bl 0x8235c7f8
	sub_8235C7F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-9288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// lfd f0,88(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822bb468
	sub_822BB468(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,-4904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	f0.f64 = double(temp.f32);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 * f0.f64));
	// fmuls f31,f1,f29
	f31.f64 = double(float(ctx.f1.f64 * f29.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823118f8
	sub_823118F8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * f0.f64));
	// bl 0x822cef88
	sub_822CEF88(ctx, base);
loc_822CBED0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x822cbeec
	if (!cr6.lt) goto loc_822CBEEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822caa30
	sub_822CAA30(ctx, base);
loc_822CBEEC:
	// lwa r11,84(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 84));
	// lwz r3,-9288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// lfd f0,88(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x822bb468
	sub_822BB468(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// fmuls f30,f1,f29
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64 * f29.f64));
	// lwz r11,-8576(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8576);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-8584
	r29.s64 = ctx.r9.s64 + -8584;
	// bne 0x822cbf58
	if (!cr0.eq) goto loc_822CBF58;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8576, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,24232
	ctx.r4.s64 = r11.s64 + 24232;
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
	// addi r3,r11,14048
	ctx.r3.s64 = r11.s64 + 14048;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CBF58:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cbf8c
	if (cr0.eq) goto loc_822CBF8C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82312240
	sub_82312240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822cbf90
	goto loc_822CBF90;
loc_822CBF8C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822CBF90:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fsubs f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 - f31.f64));
	// bl 0x82314420
	sub_82314420(ctx, base);
	// b 0x822cbfb4
	goto loc_822CBFB4;
loc_822CBFA4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r29,512
	ctx.r3.s64 = r29.s64 + 512;
	// lwz r4,-9288(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x822c5510
	sub_822C5510(ctx, base);
loc_822CBFB4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stb r10,112(r30)
	PPC_STORE_U8(r30.u32 + 112, ctx.r10.u8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cbff4
	if (cr0.eq) goto loc_822CBFF4;
	// bl 0x822e14a8
	sub_822E14A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x822cbff8
	goto loc_822CBFF8;
loc_822CBFF4:
	// li r11,0
	r11.s64 = 0;
loc_822CBFF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,856
	ctx.r3.s64 = r30.s64 + 856;
	// stw r11,840(r30)
	PPC_STORE_U32(r30.u32 + 840, r11.u32);
	// bl 0x8229eb48
	sub_8229EB48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822e1058
	sub_822E1058(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822CC024"))) PPC_WEAK_FUNC(sub_822CC024);
PPC_FUNC_IMPL(__imp__sub_822CC024) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8576
	r11.s64 = r11.s64 + -8576;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8576
	ctx.r10.s64 = ctx.r10.s64 + -8576;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CC04C"))) PPC_WEAK_FUNC(sub_822CC04C);
PPC_FUNC_IMPL(__imp__sub_822CC04C) {
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

__attribute__((alias("__imp__sub_822CC074"))) PPC_WEAK_FUNC(sub_822CC074);
PPC_FUNC_IMPL(__imp__sub_822CC074) {
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

__attribute__((alias("__imp__sub_822CC09C"))) PPC_WEAK_FUNC(sub_822CC09C);
PPC_FUNC_IMPL(__imp__sub_822CC09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CC0A0"))) PPC_WEAK_FUNC(sub_822CC0A0);
PPC_FUNC_IMPL(__imp__sub_822CC0A0) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82312de8
	sub_82312DE8(ctx, base);
	// bl 0x822b20d8
	sub_822B20D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82377078
	sub_82377078(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r3,r11,18840
	ctx.r3.s64 = r11.s64 + 18840;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,-8688(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -8688);
	// bl 0x82272430
	sub_82272430(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x822cc0f0
	if (!cr6.eq) goto loc_822CC0F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822cc100
	goto loc_822CC100;
loc_822CC0F0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_822CC100:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-2472(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -2472);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r5,18972(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x823257c0
	sub_823257C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822e1058
	sub_822E1058(ctx, base);
	// lwz r3,840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 840);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cc144
	if (cr0.eq) goto loc_822CC144;
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
loc_822CC144:
	// li r11,0
	r11.s64 = 0;
	// stw r11,840(r31)
	PPC_STORE_U32(r31.u32 + 840, r11.u32);
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

__attribute__((alias("__imp__sub_822CC160"))) PPC_WEAK_FUNC(sub_822CC160);
PPC_FUNC_IMPL(__imp__sub_822CC160) {
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
	// blt cr6,0x822cc1a8
	if (cr6.lt) goto loc_822CC1A8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_822CC1A8:
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
	// bl 0x822ca828
	sub_822CA828(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x822cc1e0
	if (cr0.eq) goto loc_822CC1E0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_822CC1E0:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x822cc200
	if (cr6.eq) goto loc_822CC200;
loc_822CC1EC:
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
	// bne 0x822cc1ec
	if (!cr0.eq) goto loc_822CC1EC;
loc_822CC200:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x822cc228
	if (!cr0.eq) goto loc_822CC228;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x822cc228
	if (cr0.eq) goto loc_822CC228;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_822CC228:
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

__attribute__((alias("__imp__sub_822CC25C"))) PPC_WEAK_FUNC(sub_822CC25C);
PPC_FUNC_IMPL(__imp__sub_822CC25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CC260"))) PPC_WEAK_FUNC(sub_822CC260);
PPC_FUNC_IMPL(__imp__sub_822CC260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,24536(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24536);
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,24444
	r11.s64 = r11.s64 + 24444;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,24380
	ctx.r10.s64 = ctx.r10.s64 + 24380;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-940(r30)
	PPC_STORE_U32(r30.u32 + -940, r11.u32);
	// lwz r11,-936(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -936);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-936(r11)
	PPC_STORE_U32(r11.u32 + -936, ctx.r10.u32);
	// lwz r11,-936(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -936);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-936
	ctx.r10.s64 = r11.s64 + -936;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-940(r11)
	PPC_STORE_U32(r11.u32 + -940, ctx.r10.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r11,0
	r11.s64 = 0;
	// addi r3,r30,-72
	ctx.r3.s64 = r30.s64 + -72;
	// stw r11,-8684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8684, r11.u32);
	// bl 0x822d7500
	sub_822D7500(ctx, base);
	// addi r3,r30,-84
	ctx.r3.s64 = r30.s64 + -84;
	// bl 0x8229f6d0
	sub_8229F6D0(ctx, base);
	// lwz r4,-96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -96);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822cc2fc
	if (cr0.eq) goto loc_822CC2FC;
	// lwz r11,-88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822CC2FC:
	// addi r3,r30,-820
	ctx.r3.s64 = r30.s64 + -820;
	// bl 0x822bab70
	sub_822BAB70(ctx, base);
	// addic. r11,r30,-940
	xer.ca = r30.u32 > 939;
	r11.s64 = r30.s64 + -940;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r30,-884
	r11.s64 = r30.s64 + -884;
	// bne 0x822cc314
	if (!cr0.eq) goto loc_822CC314;
	// li r11,0
	r11.s64 = 0;
loc_822CC314:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x823260f8
	sub_823260F8(ctx, base);
	// addi r3,r30,-880
	ctx.r3.s64 = r30.s64 + -880;
	// bl 0x82376478
	sub_82376478(ctx, base);
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

__attribute__((alias("__imp__sub_822CC268"))) PPC_WEAK_FUNC(sub_822CC268);
PPC_FUNC_IMPL(__imp__sub_822CC268) {
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
	// addi r11,r11,24444
	r11.s64 = r11.s64 + 24444;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,24380
	ctx.r10.s64 = ctx.r10.s64 + 24380;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-940(r30)
	PPC_STORE_U32(r30.u32 + -940, r11.u32);
	// lwz r11,-936(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -936);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-936(r11)
	PPC_STORE_U32(r11.u32 + -936, ctx.r10.u32);
	// lwz r11,-936(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -936);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-936
	ctx.r10.s64 = r11.s64 + -936;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-940(r11)
	PPC_STORE_U32(r11.u32 + -940, ctx.r10.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r11,0
	r11.s64 = 0;
	// addi r3,r30,-72
	ctx.r3.s64 = r30.s64 + -72;
	// stw r11,-8684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8684, r11.u32);
	// bl 0x822d7500
	sub_822D7500(ctx, base);
	// addi r3,r30,-84
	ctx.r3.s64 = r30.s64 + -84;
	// bl 0x8229f6d0
	sub_8229F6D0(ctx, base);
	// lwz r4,-96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -96);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822cc2fc
	if (cr0.eq) goto loc_822CC2FC;
	// lwz r11,-88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822CC2FC:
	// addi r3,r30,-820
	ctx.r3.s64 = r30.s64 + -820;
	// bl 0x822bab70
	sub_822BAB70(ctx, base);
	// addic. r11,r30,-940
	xer.ca = r30.u32 > 939;
	r11.s64 = r30.s64 + -940;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r30,-884
	r11.s64 = r30.s64 + -884;
	// bne 0x822cc314
	if (!cr0.eq) goto loc_822CC314;
	// li r11,0
	r11.s64 = 0;
loc_822CC314:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x823260f8
	sub_823260F8(ctx, base);
	// addi r3,r30,-880
	ctx.r3.s64 = r30.s64 + -880;
	// bl 0x82376478
	sub_82376478(ctx, base);
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

__attribute__((alias("__imp__sub_822CC33C"))) PPC_WEAK_FUNC(sub_822CC33C);
PPC_FUNC_IMPL(__imp__sub_822CC33C) {
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
	// addi r11,r11,-940
	r11.s64 = r11.s64 + -940;
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

__attribute__((alias("__imp__sub_822CC36C"))) PPC_WEAK_FUNC(sub_822CC36C);
PPC_FUNC_IMPL(__imp__sub_822CC36C) {
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
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addic. r11,r11,-940
	xer.ca = r11.u32 > 939;
	r11.s64 = r11.s64 + -940;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cc39c
	if (cr0.eq) goto loc_822CC39C;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,-940
	r11.s64 = r11.s64 + -940;
	// addi r11,r11,56
	r11.s64 = r11.s64 + 56;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x822cc3a4
	goto loc_822CC3A4;
loc_822CC39C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822CC3A4:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x823260f8
	sub_823260F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CC3C0"))) PPC_WEAK_FUNC(sub_822CC3C0);
PPC_FUNC_IMPL(__imp__sub_822CC3C0) {
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
	// addi r11,r11,-940
	r11.s64 = r11.s64 + -940;
	// addi r3,r11,120
	ctx.r3.s64 = r11.s64 + 120;
	// bl 0x822bab70
	sub_822BAB70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CC3F0"))) PPC_WEAK_FUNC(sub_822CC3F0);
PPC_FUNC_IMPL(__imp__sub_822CC3F0) {
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
	// addi r11,r11,-940
	r11.s64 = r11.s64 + -940;
	// addi r3,r11,844
	ctx.r3.s64 = r11.s64 + 844;
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

__attribute__((alias("__imp__sub_822CC420"))) PPC_WEAK_FUNC(sub_822CC420);
PPC_FUNC_IMPL(__imp__sub_822CC420) {
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
	// addi r11,r11,-940
	r11.s64 = r11.s64 + -940;
	// addi r3,r11,856
	ctx.r3.s64 = r11.s64 + 856;
	// bl 0x8229f6d0
	sub_8229F6D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CC450"))) PPC_WEAK_FUNC(sub_822CC450);
PPC_FUNC_IMPL(__imp__sub_822CC450) {
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
	// bl 0x822b2cc0
	sub_822B2CC0(ctx, base);
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

__attribute__((alias("__imp__sub_822CC480"))) PPC_WEAK_FUNC(sub_822CC480);
PPC_FUNC_IMPL(__imp__sub_822CC480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-880
	ctx.r3.s64 = ctx.r3.s64 + -880;
	// b 0x82376140
	sub_82376140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822CC490"))) PPC_WEAK_FUNC(sub_822CC490);
PPC_FUNC_IMPL(__imp__sub_822CC490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-880
	ctx.r3.s64 = ctx.r3.s64 + -880;
	// b 0x82376110
	sub_82376110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822CC4A0"))) PPC_WEAK_FUNC(sub_822CC4A0);
PPC_FUNC_IMPL(__imp__sub_822CC4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822cc968
	sub_822CC968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822CC4AC"))) PPC_WEAK_FUNC(sub_822CC4AC);
PPC_FUNC_IMPL(__imp__sub_822CC4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CC4B0"))) PPC_WEAK_FUNC(sub_822CC4B0);
PPC_FUNC_IMPL(__imp__sub_822CC4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x822cc450
	sub_822CC450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822CC4BC"))) PPC_WEAK_FUNC(sub_822CC4BC);
PPC_FUNC_IMPL(__imp__sub_822CC4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CC4C0"))) PPC_WEAK_FUNC(sub_822CC4C0);
PPC_FUNC_IMPL(__imp__sub_822CC4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-856
	ctx.r3.s64 = ctx.r3.s64 + -856;
	// b 0x82325ac8
	sub_82325AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822CC4D0"))) PPC_WEAK_FUNC(sub_822CC4D0);
PPC_FUNC_IMPL(__imp__sub_822CC4D0) {
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
	// lwz r16,24632(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24632);
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
	// lwz r11,-8568(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8568);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822cc554
	if (!cr0.eq) goto loc_822CC554;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8568, r11.u32);
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
	// bl 0x822b2cc0
	sub_822B2CC0(ctx, base);
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
	// stw r3,-8572(r27)
	PPC_STORE_U32(r27.u32 + -8572, ctx.r3.u32);
	// b 0x822cc558
	goto loc_822CC558;
loc_822CC554:
	// lwz r3,-8572(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -8572);
loc_822CC558:
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
	// beq 0x822cc594
	if (cr0.eq) goto loc_822CC594;
	// lwz r11,-936(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -936);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-936
	ctx.r3.s64 = r11.s64 + -936;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822cc610
	goto loc_822CC610;
loc_822CC594:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x822cc5f4
	if (!cr0.eq) goto loc_822CC5F4;
	// addic. r11,r30,-940
	xer.ca = r30.u32 > 939;
	r11.s64 = r30.s64 + -940;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822cc5b8
	if (!cr0.eq) goto loc_822CC5B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822cc5c8
	goto loc_822CC5C8;
loc_822CC5B8:
	// lwz r11,-936(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -936);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-936
	ctx.r3.s64 = r11.s64 + -936;
loc_822CC5C8:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-936(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -936);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-936
	ctx.r4.s64 = r11.s64 + -936;
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
loc_822CC5F4:
	// lwz r11,-936(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -936);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-936
	ctx.r3.s64 = r11.s64 + -936;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822CC610:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822CC4D8"))) PPC_WEAK_FUNC(sub_822CC4D8);
PPC_FUNC_IMPL(__imp__sub_822CC4D8) {
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
	// lwz r11,-8568(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8568);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822cc554
	if (!cr0.eq) goto loc_822CC554;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8568, r11.u32);
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
	// bl 0x822b2cc0
	sub_822B2CC0(ctx, base);
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
	// stw r3,-8572(r27)
	PPC_STORE_U32(r27.u32 + -8572, ctx.r3.u32);
	// b 0x822cc558
	goto loc_822CC558;
loc_822CC554:
	// lwz r3,-8572(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -8572);
loc_822CC558:
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
	// beq 0x822cc594
	if (cr0.eq) goto loc_822CC594;
	// lwz r11,-936(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -936);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-936
	ctx.r3.s64 = r11.s64 + -936;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822cc610
	goto loc_822CC610;
loc_822CC594:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x822cc5f4
	if (!cr0.eq) goto loc_822CC5F4;
	// addic. r11,r30,-940
	xer.ca = r30.u32 > 939;
	r11.s64 = r30.s64 + -940;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822cc5b8
	if (!cr0.eq) goto loc_822CC5B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822cc5c8
	goto loc_822CC5C8;
loc_822CC5B8:
	// lwz r11,-936(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -936);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-936
	ctx.r3.s64 = r11.s64 + -936;
loc_822CC5C8:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-936(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -936);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-936
	ctx.r4.s64 = r11.s64 + -936;
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
loc_822CC5F4:
	// lwz r11,-936(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -936);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-936
	ctx.r3.s64 = r11.s64 + -936;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822CC610:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822CC61C"))) PPC_WEAK_FUNC(sub_822CC61C);
PPC_FUNC_IMPL(__imp__sub_822CC61C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8568
	r11.s64 = r11.s64 + -8568;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8568
	ctx.r10.s64 = ctx.r10.s64 + -8568;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CC644"))) PPC_WEAK_FUNC(sub_822CC644);
PPC_FUNC_IMPL(__imp__sub_822CC644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CC648"))) PPC_WEAK_FUNC(sub_822CC648);
PPC_FUNC_IMPL(__imp__sub_822CC648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822cabe8
	sub_822CABE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822CC654"))) PPC_WEAK_FUNC(sub_822CC654);
PPC_FUNC_IMPL(__imp__sub_822CC654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CC658"))) PPC_WEAK_FUNC(sub_822CC658);
PPC_FUNC_IMPL(__imp__sub_822CC658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822cc4d8
	sub_822CC4D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822CC664"))) PPC_WEAK_FUNC(sub_822CC664);
PPC_FUNC_IMPL(__imp__sub_822CC664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CC668"))) PPC_WEAK_FUNC(sub_822CC668);
PPC_FUNC_IMPL(__imp__sub_822CC668) {
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
	// beq cr6,0x822cc6a8
	if (cr6.eq) goto loc_822CC6A8;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822cc698
	if (cr0.eq) goto loc_822CC698;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_822CC698:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x822cc6bc
	goto loc_822CC6BC;
loc_822CC6A8:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x822cc160
	sub_822CC160(ctx, base);
loc_822CC6BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CC6CC"))) PPC_WEAK_FUNC(sub_822CC6CC);
PPC_FUNC_IMPL(__imp__sub_822CC6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CC6D0"))) PPC_WEAK_FUNC(sub_822CC6D0);
PPC_FUNC_IMPL(__imp__sub_822CC6D0) {
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
	// beq cr6,0x822cc718
	if (cr6.eq) goto loc_822CC718;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x822cc710
	if (cr0.eq) goto loc_822CC710;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x822cc714
	goto loc_822CC714;
loc_822CC710:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_822CC714:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822CC718:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822CC724"))) PPC_WEAK_FUNC(sub_822CC724);
PPC_FUNC_IMPL(__imp__sub_822CC724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CC728"))) PPC_WEAK_FUNC(sub_822CC728);
PPC_FUNC_IMPL(__imp__sub_822CC728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,24736(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24736);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-32127
	r24.s64 = -2105475072;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r3,-9608(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822cc814
	if (!cr0.gt) goto loc_822CC814;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r28,r11,15600
	r28.s64 = r11.s64 + 15600;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r27,r11,6532
	r27.s64 = r11.s64 + 6532;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r26,r11,8200
	r26.s64 = r11.s64 + 8200;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r25,r11,24696
	r25.s64 = r11.s64 + 24696;
loc_822CC77C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-9608(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,60(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bl 0x8226dcb8
	sub_8226DCB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822ca7c8
	sub_822CA7C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359d00
	sub_82359D00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x822cc800
	if (cr6.eq) goto loc_822CC800;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r23,844
	ctx.r3.s64 = r23.s64 + 844;
	// bl 0x822cc668
	sub_822CC668(ctx, base);
loc_822CC800:
	// lwz r3,-9608(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -9608);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x822cc77c
	if (cr6.lt) goto loc_822CC77C;
loc_822CC814:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_822CC730"))) PPC_WEAK_FUNC(sub_822CC730);
PPC_FUNC_IMPL(__imp__sub_822CC730) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-32127
	r24.s64 = -2105475072;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r3,-9608(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822cc814
	if (!cr0.gt) goto loc_822CC814;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r28,r11,15600
	r28.s64 = r11.s64 + 15600;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r27,r11,6532
	r27.s64 = r11.s64 + 6532;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r26,r11,8200
	r26.s64 = r11.s64 + 8200;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r25,r11,24696
	r25.s64 = r11.s64 + 24696;
loc_822CC77C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-9608(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,60(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bl 0x8226dcb8
	sub_8226DCB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822ca7c8
	sub_822CA7C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359d00
	sub_82359D00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x822cc800
	if (cr6.eq) goto loc_822CC800;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r23,844
	ctx.r3.s64 = r23.s64 + 844;
	// bl 0x822cc668
	sub_822CC668(ctx, base);
loc_822CC800:
	// lwz r3,-9608(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -9608);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x822cc77c
	if (cr6.lt) goto loc_822CC77C;
loc_822CC814:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_822CC81C"))) PPC_WEAK_FUNC(sub_822CC81C);
PPC_FUNC_IMPL(__imp__sub_822CC81C) {
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

__attribute__((alias("__imp__sub_822CC844"))) PPC_WEAK_FUNC(sub_822CC844);
PPC_FUNC_IMPL(__imp__sub_822CC844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CC848"))) PPC_WEAK_FUNC(sub_822CC848);
PPC_FUNC_IMPL(__imp__sub_822CC848) {
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
	// bl 0x82376330
	sub_82376330(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cc898
	if (cr0.eq) goto loc_822CC898;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 816);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cc880
	if (cr0.eq) goto loc_822CC880;
	// bl 0x823763d8
	sub_823763D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cc898
	if (cr0.eq) goto loc_822CC898;
loc_822CC880:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-8908(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -8908);
	// bl 0x822c66f0
	sub_822C66F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x822cc89c
	if (!cr0.eq) goto loc_822CC89C;
loc_822CC898:
	// li r11,0
	r11.s64 = 0;
loc_822CC89C:
	// clrlwi. r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822cc8d8
	if (cr0.eq) goto loc_822CC8D8;
	// lwz r11,816(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 816);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822cc8d8
	if (cr6.eq) goto loc_822CC8D8;
	// lwz r11,844(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 848);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cc8d0
	if (cr0.eq) goto loc_822CC8D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cc730
	sub_822CC730(ctx, base);
loc_822CC8D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cb1e0
	sub_822CB1E0(ctx, base);
loc_822CC8D8:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cc918
	if (cr0.eq) goto loc_822CC918;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x822cc8f4
	if (!cr6.eq) goto loc_822CC8F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cb118
	sub_822CB118(ctx, base);
loc_822CC8F4:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cc910
	if (cr0.eq) goto loc_822CC910;
	// bl 0x822ceb70
	sub_822CEB70(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x822cc914
	if (!cr0.eq) goto loc_822CC914;
loc_822CC910:
	// li r11,0
	r11.s64 = 0;
loc_822CC914:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_822CC918:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cc950
	if (cr0.eq) goto loc_822CC950;
	// lwz r3,836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 836);
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822cc948
	if (!cr0.eq) goto loc_822CC948;
	// bl 0x822e0f20
	sub_822E0F20(ctx, base);
loc_822CC948:
	// lwz r3,836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 836);
	// bl 0x822df480
	sub_822DF480(ctx, base);
loc_822CC950:
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

__attribute__((alias("__imp__sub_822CC964"))) PPC_WEAK_FUNC(sub_822CC964);
PPC_FUNC_IMPL(__imp__sub_822CC964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CC968"))) PPC_WEAK_FUNC(sub_822CC968);
PPC_FUNC_IMPL(__imp__sub_822CC968) {
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
	// addi r30,r3,-940
	r30.s64 = ctx.r3.s64 + -940;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,940
	r31.s64 = r30.s64 + 940;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cc268
	sub_822CC268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cc9a0
	if (cr0.eq) goto loc_822CC9A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822CC9A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822CC9AC"))) PPC_WEAK_FUNC(sub_822CC9AC);
PPC_FUNC_IMPL(__imp__sub_822CC9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CC9B0"))) PPC_WEAK_FUNC(sub_822CC9B0);
PPC_FUNC_IMPL(__imp__sub_822CC9B0) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r27,844
	r31.s64 = r27.s64 + 844;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cca38
	if (cr0.eq) goto loc_822CCA38;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r29,0
	r29.s64 = 0;
	// addi r26,r11,24800
	r26.s64 = r11.s64 + 24800;
loc_822CC9E8:
	// lwz r11,816(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 816);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822caf40
	sub_822CAF40(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x821d60f8
	sub_821D60F8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x822cc9e8
	if (cr6.lt) goto loc_822CC9E8;
loc_822CCA38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822cc6d0
	sub_822CC6D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82376dd8
	sub_82376DD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822CCA58"))) PPC_WEAK_FUNC(sub_822CCA58);
PPC_FUNC_IMPL(__imp__sub_822CCA58) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,25000(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25000);
	// mflr r12
	// bl 0x8239bcf0
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// lbz r11,88(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 88);
	// stb r26,112(r30)
	PPC_STORE_U8(r30.u32 + 112, r26.u8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822cce70
	if (!cr0.eq) goto loc_822CCE70;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24896
	ctx.r4.s64 = r11.s64 + 24896;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r30,120
	ctx.r3.s64 = r30.s64 + 120;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822cce70
	if (!cr0.eq) goto loc_822CCE70;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24876
	ctx.r4.s64 = r11.s64 + 24876;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x822ca5d0
	sub_822CA5D0(ctx, base);
	// lbz r11,90(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 90);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822ccb24
	if (cr0.eq) goto loc_822CCB24;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = f29.f64;
	// b 0x822ccbb0
	goto loc_822CCBB0;
loc_822CCB24:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,24868
	ctx.r4.s64 = r11.s64 + 24868;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-2968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x822caf98
	sub_822CAF98(ctx, base);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// std r26,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r26.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccb74
	if (cr0.eq) goto loc_822CCB74;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,2372
	ctx.r4.s64 = r11.s64 + 2372;
	// b 0x822ccb7c
	goto loc_822CCB7C;
loc_822CCB74:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,2388
	ctx.r4.s64 = r11.s64 + 2388;
loc_822CCB7C:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r3,r28,596
	ctx.r3.s64 = r28.s64 + 596;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822685f8
	sub_822685F8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,240(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	f0.f64 = double(temp.f32);
	// lfs f13,24864(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24864);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f0,f13
	f31.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x821e74b8
	sub_821E74B8(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82266d30
	sub_82266D30(ctx, base);
loc_822CCBB0:
	// clrlwi. r27,r29,24
	r27.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x822ccc04
	if (cr0.eq) goto loc_822CCC04;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822ccc04
	if (!cr0.gt) goto loc_822CCC04;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
loc_822CCBD8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x822dcd08
	sub_822DCD08(ctx, base);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x822ccbd8
	if (cr6.lt) goto loc_822CCBD8;
loc_822CCC04:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822cb2b0
	sub_822CB2B0(ctx, base);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r11,-8524(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -8524);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8532
	r29.s64 = ctx.r10.s64 + -8532;
	// bne 0x822ccc5c
	if (!cr0.eq) goto loc_822CCC5C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8524(r28)
	PPC_STORE_U32(r28.u32 + -8524, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24280
	ctx.r4.s64 = r11.s64 + 24280;
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
	// addi r3,r11,14144
	ctx.r3.s64 = r11.s64 + 14144;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CCC5C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
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
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccc9c
	if (cr0.eq) goto loc_822CCC9C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CCC9C:
	// lwz r11,-8524(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -8524);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8540
	r29.s64 = ctx.r10.s64 + -8540;
	// bne 0x822ccd24
	if (!cr0.eq) goto loc_822CCD24;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8524(r28)
	PPC_STORE_U32(r28.u32 + -8524, r11.u32);
	// stw r26,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r26.u32);
	// stw r26,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r26.u32);
	// stw r26,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r26.u32);
	// stw r26,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r26.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24848
	ctx.r4.s64 = r11.s64 + 24848;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r6,r31,104
	ctx.r6.s64 = r31.s64 + 104;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8213deb8
	sub_8213DEB8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccd04
	if (cr0.eq) goto loc_822CCD04;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CCD04:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccd18
	if (cr0.eq) goto loc_822CCD18;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CCD18:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14112
	ctx.r3.s64 = r11.s64 + 14112;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CCD24:
	// lbz r11,90(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 90);
	// stw r26,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r26.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccd58
	if (cr0.eq) goto loc_822CCD58;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CCD58:
	// stw r27,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r27.u32);
	// stw r26,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r26.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccd88
	if (cr0.eq) goto loc_822CCD88;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CCD88:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
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
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccdc8
	if (cr0.eq) goto loc_822CCDC8;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CCDC8:
	// lwz r11,-8524(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -8524);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8548
	r29.s64 = ctx.r10.s64 + -8548;
	// bne 0x822cce10
	if (!cr0.eq) goto loc_822CCE10;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8524(r28)
	PPC_STORE_U32(r28.u32 + -8524, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24832
	ctx.r4.s64 = r11.s64 + 24832;
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
	// addi r3,r11,14080
	ctx.r3.s64 = r11.s64 + 14080;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CCE10:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cce44
	if (cr0.eq) goto loc_822CCE44;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82312240
	sub_82312240(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x822cce48
	goto loc_822CCE48;
loc_822CCE44:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_822CCE48:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r28,r11,-5056
	r28.s64 = r11.s64 + -5056;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fsubs f1,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f29.f64 - ctx.f1.f64));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82314420
	sub_82314420(ctx, base);
	// b 0x822ccf84
	goto loc_822CCF84;
loc_822CCE70:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-8524(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8524);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-8556
	r27.s64 = ctx.r10.s64 + -8556;
	// bne 0x822ccec0
	if (!cr0.eq) goto loc_822CCEC0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8524(r29)
	PPC_STORE_U32(r29.u32 + -8524, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24280
	ctx.r4.s64 = r11.s64 + 24280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14208
	ctx.r3.s64 = r11.s64 + 14208;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// lwz r11,-8524(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8524);
loc_822CCEC0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8564
	r28.s64 = ctx.r10.s64 + -8564;
	// bne 0x822ccf04
	if (!cr0.eq) goto loc_822CCF04;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8524(r29)
	PPC_STORE_U32(r29.u32 + -8524, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24820
	ctx.r4.s64 = r11.s64 + 24820;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14176
	ctx.r3.s64 = r11.s64 + 14176;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CCF04:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
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
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccf44
	if (cr0.eq) goto loc_822CCF44;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CCF44:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
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
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccf84
	if (cr0.eq) goto loc_822CCF84;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CCF84:
	// lbz r11,89(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 89);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822ccfa4
	if (cr0.eq) goto loc_822CCFA4;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,91(r30)
	PPC_STORE_U8(r30.u32 + 91, r11.u8);
	// bl 0x822cecc0
	sub_822CECC0(ctx, base);
loc_822CCFA4:
	// stb r26,90(r30)
	PPC_STORE_U8(r30.u32 + 90, r26.u8);
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822CCA60"))) PPC_WEAK_FUNC(sub_822CCA60);
PPC_FUNC_IMPL(__imp__sub_822CCA60) {
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// lbz r11,88(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 88);
	// stb r26,112(r30)
	PPC_STORE_U8(r30.u32 + 112, r26.u8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822cce70
	if (!cr0.eq) goto loc_822CCE70;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24896
	ctx.r4.s64 = r11.s64 + 24896;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r30,120
	ctx.r3.s64 = r30.s64 + 120;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822cce70
	if (!cr0.eq) goto loc_822CCE70;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24876
	ctx.r4.s64 = r11.s64 + 24876;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x822ca5d0
	sub_822CA5D0(ctx, base);
	// lbz r11,90(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 90);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822ccb24
	if (cr0.eq) goto loc_822CCB24;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = f29.f64;
	// b 0x822ccbb0
	goto loc_822CCBB0;
loc_822CCB24:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,24868
	ctx.r4.s64 = r11.s64 + 24868;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-2968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x822caf98
	sub_822CAF98(ctx, base);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// std r26,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r26.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccb74
	if (cr0.eq) goto loc_822CCB74;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,2372
	ctx.r4.s64 = r11.s64 + 2372;
	// b 0x822ccb7c
	goto loc_822CCB7C;
loc_822CCB74:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,2388
	ctx.r4.s64 = r11.s64 + 2388;
loc_822CCB7C:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r3,r28,596
	ctx.r3.s64 = r28.s64 + 596;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822685f8
	sub_822685F8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,240(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	f0.f64 = double(temp.f32);
	// lfs f13,24864(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24864);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f0,f13
	f31.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x821e74b8
	sub_821E74B8(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82266d30
	sub_82266D30(ctx, base);
loc_822CCBB0:
	// clrlwi. r27,r29,24
	r27.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x822ccc04
	if (cr0.eq) goto loc_822CCC04;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822ccc04
	if (!cr0.gt) goto loc_822CCC04;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
loc_822CCBD8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x822dcd08
	sub_822DCD08(ctx, base);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x822ccbd8
	if (cr6.lt) goto loc_822CCBD8;
loc_822CCC04:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822cb2b0
	sub_822CB2B0(ctx, base);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r11,-8524(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -8524);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8532
	r29.s64 = ctx.r10.s64 + -8532;
	// bne 0x822ccc5c
	if (!cr0.eq) goto loc_822CCC5C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8524(r28)
	PPC_STORE_U32(r28.u32 + -8524, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24280
	ctx.r4.s64 = r11.s64 + 24280;
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
	// addi r3,r11,14144
	ctx.r3.s64 = r11.s64 + 14144;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CCC5C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
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
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccc9c
	if (cr0.eq) goto loc_822CCC9C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CCC9C:
	// lwz r11,-8524(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -8524);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8540
	r29.s64 = ctx.r10.s64 + -8540;
	// bne 0x822ccd24
	if (!cr0.eq) goto loc_822CCD24;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8524(r28)
	PPC_STORE_U32(r28.u32 + -8524, r11.u32);
	// stw r26,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r26.u32);
	// stw r26,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r26.u32);
	// stw r26,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r26.u32);
	// stw r26,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r26.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24848
	ctx.r4.s64 = r11.s64 + 24848;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r6,r31,104
	ctx.r6.s64 = r31.s64 + 104;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8213deb8
	sub_8213DEB8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccd04
	if (cr0.eq) goto loc_822CCD04;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CCD04:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccd18
	if (cr0.eq) goto loc_822CCD18;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CCD18:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14112
	ctx.r3.s64 = r11.s64 + 14112;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CCD24:
	// lbz r11,90(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 90);
	// stw r26,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r26.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccd58
	if (cr0.eq) goto loc_822CCD58;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CCD58:
	// stw r27,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r27.u32);
	// stw r26,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r26.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccd88
	if (cr0.eq) goto loc_822CCD88;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CCD88:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
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
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccdc8
	if (cr0.eq) goto loc_822CCDC8;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CCDC8:
	// lwz r11,-8524(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -8524);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8548
	r29.s64 = ctx.r10.s64 + -8548;
	// bne 0x822cce10
	if (!cr0.eq) goto loc_822CCE10;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8524(r28)
	PPC_STORE_U32(r28.u32 + -8524, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24832
	ctx.r4.s64 = r11.s64 + 24832;
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
	// addi r3,r11,14080
	ctx.r3.s64 = r11.s64 + 14080;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CCE10:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cce44
	if (cr0.eq) goto loc_822CCE44;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82312240
	sub_82312240(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x822cce48
	goto loc_822CCE48;
loc_822CCE44:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_822CCE48:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r28,r11,-5056
	r28.s64 = r11.s64 + -5056;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fsubs f1,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f29.f64 - ctx.f1.f64));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82314420
	sub_82314420(ctx, base);
	// b 0x822ccf84
	goto loc_822CCF84;
loc_822CCE70:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-8524(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8524);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-8556
	r27.s64 = ctx.r10.s64 + -8556;
	// bne 0x822ccec0
	if (!cr0.eq) goto loc_822CCEC0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8524(r29)
	PPC_STORE_U32(r29.u32 + -8524, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24280
	ctx.r4.s64 = r11.s64 + 24280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14208
	ctx.r3.s64 = r11.s64 + 14208;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// lwz r11,-8524(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8524);
loc_822CCEC0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8564
	r28.s64 = ctx.r10.s64 + -8564;
	// bne 0x822ccf04
	if (!cr0.eq) goto loc_822CCF04;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8524(r29)
	PPC_STORE_U32(r29.u32 + -8524, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24820
	ctx.r4.s64 = r11.s64 + 24820;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14176
	ctx.r3.s64 = r11.s64 + 14176;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822CCF04:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
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
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccf44
	if (cr0.eq) goto loc_822CCF44;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CCF44:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
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
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ccf84
	if (cr0.eq) goto loc_822CCF84;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822CCF84:
	// lbz r11,89(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 89);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822ccfa4
	if (cr0.eq) goto loc_822CCFA4;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,91(r30)
	PPC_STORE_U8(r30.u32 + 91, r11.u8);
	// bl 0x822cecc0
	sub_822CECC0(ctx, base);
loc_822CCFA4:
	// stb r26,90(r30)
	PPC_STORE_U8(r30.u32 + 90, r26.u8);
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822CCFBC"))) PPC_WEAK_FUNC(sub_822CCFBC);
PPC_FUNC_IMPL(__imp__sub_822CCFBC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822671c8
	sub_822671C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CCFE4"))) PPC_WEAK_FUNC(sub_822CCFE4);
PPC_FUNC_IMPL(__imp__sub_822CCFE4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8524
	r11.s64 = r11.s64 + -8524;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8524
	ctx.r10.s64 = ctx.r10.s64 + -8524;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CD00C"))) PPC_WEAK_FUNC(sub_822CD00C);
PPC_FUNC_IMPL(__imp__sub_822CD00C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8524
	r11.s64 = r11.s64 + -8524;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8524
	ctx.r10.s64 = ctx.r10.s64 + -8524;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CD034"))) PPC_WEAK_FUNC(sub_822CD034);
PPC_FUNC_IMPL(__imp__sub_822CD034) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
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

__attribute__((alias("__imp__sub_822CD05C"))) PPC_WEAK_FUNC(sub_822CD05C);
PPC_FUNC_IMPL(__imp__sub_822CD05C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
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

__attribute__((alias("__imp__sub_822CD084"))) PPC_WEAK_FUNC(sub_822CD084);
PPC_FUNC_IMPL(__imp__sub_822CD084) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_822CD0AC"))) PPC_WEAK_FUNC(sub_822CD0AC);
PPC_FUNC_IMPL(__imp__sub_822CD0AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
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

__attribute__((alias("__imp__sub_822CD0D4"))) PPC_WEAK_FUNC(sub_822CD0D4);
PPC_FUNC_IMPL(__imp__sub_822CD0D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8524
	r11.s64 = r11.s64 + -8524;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8524
	ctx.r10.s64 = ctx.r10.s64 + -8524;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CD0FC"))) PPC_WEAK_FUNC(sub_822CD0FC);
PPC_FUNC_IMPL(__imp__sub_822CD0FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
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

__attribute__((alias("__imp__sub_822CD124"))) PPC_WEAK_FUNC(sub_822CD124);
PPC_FUNC_IMPL(__imp__sub_822CD124) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8524
	r11.s64 = r11.s64 + -8524;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8524
	ctx.r10.s64 = ctx.r10.s64 + -8524;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CD14C"))) PPC_WEAK_FUNC(sub_822CD14C);
PPC_FUNC_IMPL(__imp__sub_822CD14C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8524
	r11.s64 = r11.s64 + -8524;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8524
	ctx.r10.s64 = ctx.r10.s64 + -8524;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CD174"))) PPC_WEAK_FUNC(sub_822CD174);
PPC_FUNC_IMPL(__imp__sub_822CD174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CD178"))) PPC_WEAK_FUNC(sub_822CD178);
PPC_FUNC_IMPL(__imp__sub_822CD178) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,25704(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25704);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8440
	r28.s64 = ctx.r10.s64 + -8440;
	// bne 0x822cd1e8
	if (!cr0.eq) goto loc_822CD1E8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25496
	ctx.r4.s64 = r11.s64 + 25496;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD1E8:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd230
	if (cr0.eq) goto loc_822CD230;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r3,-860(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -860);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// stb r4,-849(r25)
	PPC_STORE_U8(r25.u32 + -849, ctx.r4.u8);
	// bl 0x822cecc0
	sub_822CECC0(ctx, base);
loc_822CD228:
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// b 0x822cdad8
	goto loc_822CDAD8;
loc_822CD230:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8444
	r28.s64 = ctx.r10.s64 + -8444;
	// bne 0x822cd25c
	if (!cr0.eq) goto loc_822CD25C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25484
	ctx.r4.s64 = r11.s64 + 25484;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD25C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd288
	if (cr0.eq) goto loc_822CD288;
	// lbz r11,-849(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + -849);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x822cdae0
	goto loc_822CDAE0;
loc_822CD288:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8448
	r28.s64 = ctx.r10.s64 + -8448;
	// bne 0x822cd2b4
	if (!cr0.eq) goto loc_822CD2B4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25480
	ctx.r4.s64 = r11.s64 + 25480;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD2B4:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd2f4
	if (cr0.eq) goto loc_822CD2F4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
loc_822CD2E8:
	// fmuls f0,f1,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// b 0x822cdadc
	goto loc_822CDADC;
loc_822CD2F4:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8452
	r28.s64 = ctx.r10.s64 + -8452;
	// bne 0x822cd320
	if (!cr0.eq) goto loc_822CD320;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25464
	ctx.r4.s64 = r11.s64 + 25464;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD320:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd364
	if (cr0.eq) goto loc_822CD364;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r25,-940
	ctx.r3.s64 = r25.s64 + -940;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x822caa30
	sub_822CAA30(ctx, base);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD364:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8456
	r28.s64 = ctx.r10.s64 + -8456;
	// bne 0x822cd390
	if (!cr0.eq) goto loc_822CD390;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25452
	ctx.r4.s64 = r11.s64 + 25452;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD390:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd3cc
	if (cr0.eq) goto loc_822CD3CC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82318050
	sub_82318050(ctx, base);
	// addi r3,r25,-940
	ctx.r3.s64 = r25.s64 + -940;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x822cb548
	sub_822CB548(ctx, base);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD3CC:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8460
	r28.s64 = ctx.r10.s64 + -8460;
	// bne 0x822cd3f8
	if (!cr0.eq) goto loc_822CD3F8;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25444
	ctx.r4.s64 = r11.s64 + 25444;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD3F8:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd434
	if (cr0.eq) goto loc_822CD434;
	// addi r3,r25,-940
	ctx.r3.s64 = r25.s64 + -940;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822CD424:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x822cdadc
	goto loc_822CDADC;
loc_822CD434:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8464
	r28.s64 = ctx.r10.s64 + -8464;
	// bne 0x822cd460
	if (!cr0.eq) goto loc_822CD460;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25432
	ctx.r4.s64 = r11.s64 + 25432;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD460:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd490
	if (cr0.eq) goto loc_822CD490;
	// addi r30,r25,-940
	r30.s64 = r25.s64 + -940;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ca420
	sub_822CA420(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,112(r30)
	PPC_STORE_U8(r30.u32 + 112, r11.u8);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD490:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8468
	r28.s64 = ctx.r10.s64 + -8468;
	// bne 0x822cd4bc
	if (!cr0.eq) goto loc_822CD4BC;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25416
	ctx.r4.s64 = r11.s64 + 25416;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD4BC:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd4ec
	if (cr0.eq) goto loc_822CD4EC;
	// addi r30,r25,-940
	r30.s64 = r25.s64 + -940;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ca420
	sub_822CA420(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cca60
	sub_822CCA60(ctx, base);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD4EC:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8472
	r28.s64 = ctx.r10.s64 + -8472;
	// bne 0x822cd518
	if (!cr0.eq) goto loc_822CD518;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25400
	ctx.r4.s64 = r11.s64 + 25400;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD518:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd54c
	if (cr0.eq) goto loc_822CD54C;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,-8908(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8908);
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x822cdae0
	goto loc_822CDAE0;
loc_822CD54C:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8476
	r28.s64 = ctx.r10.s64 + -8476;
	// bne 0x822cd578
	if (!cr0.eq) goto loc_822CD578;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25384
	ctx.r4.s64 = r11.s64 + 25384;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD578:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd5c0
	if (cr0.eq) goto loc_822CD5C0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// stb r11,-828(r25)
	PPC_STORE_U8(r25.u32 + -828, r11.u8);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_822CD5B8:
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// b 0x822cdadc
	goto loc_822CDADC;
loc_822CD5C0:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8480
	r28.s64 = ctx.r10.s64 + -8480;
	// bne 0x822cd5ec
	if (!cr0.eq) goto loc_822CD5EC;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25368
	ctx.r4.s64 = r11.s64 + 25368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD5EC:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd628
	if (cr0.eq) goto loc_822CD628;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,-852(r25)
	PPC_STORE_U8(r25.u32 + -852, r11.u8);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD628:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8484
	r28.s64 = ctx.r10.s64 + -8484;
	// bne 0x822cd654
	if (!cr0.eq) goto loc_822CD654;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25348
	ctx.r4.s64 = r11.s64 + 25348;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD654:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd690
	if (cr0.eq) goto loc_822CD690;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,-851(r25)
	PPC_STORE_U8(r25.u32 + -851, r11.u8);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD690:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8488
	r28.s64 = ctx.r10.s64 + -8488;
	// bne 0x822cd6bc
	if (!cr0.eq) goto loc_822CD6BC;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25328
	ctx.r4.s64 = r11.s64 + 25328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD6BC:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd6e8
	if (cr0.eq) goto loc_822CD6E8;
	// lbz r11,-823(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + -823);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x822cdae0
	goto loc_822CDAE0;
loc_822CD6E8:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8492
	r28.s64 = ctx.r10.s64 + -8492;
	// bne 0x822cd714
	if (!cr0.eq) goto loc_822CD714;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25304
	ctx.r4.s64 = r11.s64 + 25304;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD714:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd750
	if (cr0.eq) goto loc_822CD750;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,-823(r25)
	PPC_STORE_U8(r25.u32 + -823, r11.u8);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD750:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8496
	r28.s64 = ctx.r10.s64 + -8496;
	// bne 0x822cd77c
	if (!cr0.eq) goto loc_822CD77C;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25292
	ctx.r4.s64 = r11.s64 + 25292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD77C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd7cc
	if (cr0.eq) goto loc_822CD7CC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// addi r11,r25,-940
	r11.s64 = r25.s64 + -940;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// lwz r11,24(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD7CC:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8500
	r28.s64 = ctx.r10.s64 + -8500;
	// bne 0x822cd7f8
	if (!cr0.eq) goto loc_822CD7F8;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25272
	ctx.r4.s64 = r11.s64 + 25272;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD7F8:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd81c
	if (cr0.eq) goto loc_822CD81C;
	// addi r3,r25,-940
	ctx.r3.s64 = r25.s64 + -940;
	// bl 0x822cb9d8
	sub_822CB9D8(ctx, base);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD81C:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8504
	r28.s64 = ctx.r10.s64 + -8504;
	// bne 0x822cd848
	if (!cr0.eq) goto loc_822CD848;
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25260
	ctx.r4.s64 = r11.s64 + 25260;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD848:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd888
	if (cr0.eq) goto loc_822CD888;
	// lwz r3,-860(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -860);
	// bl 0x822ce828
	sub_822CE828(ctx, base);
	// bl 0x822c9be8
	sub_822C9BE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x822cd5b8
	goto loc_822CD5B8;
loc_822CD888:
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8508
	r28.s64 = ctx.r10.s64 + -8508;
	// bne 0x822cd8b4
	if (!cr0.eq) goto loc_822CD8B4;
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25248
	ctx.r4.s64 = r11.s64 + 25248;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD8B4:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd8f8
	if (cr0.eq) goto loc_822CD8F8;
	// lwz r3,-860(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -860);
	// bl 0x822ce828
	sub_822CE828(ctx, base);
	// bl 0x822c9be8
	sub_822C9BE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822dce20
	sub_822DCE20(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r11,5
	r11.s64 = 5;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x822cdadc
	goto loc_822CDADC;
loc_822CD8F8:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8512
	r28.s64 = ctx.r10.s64 + -8512;
	// bne 0x822cd924
	if (!cr0.eq) goto loc_822CD924;
	// oris r11,r11,4
	r11.u64 = r11.u64 | 262144;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25228
	ctx.r4.s64 = r11.s64 + 25228;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD924:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd95c
	if (cr0.eq) goto loc_822CD95C;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x82391830
	sub_82391830(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// b 0x822cd2e8
	goto loc_822CD2E8;
loc_822CD95C:
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8516
	r28.s64 = ctx.r10.s64 + -8516;
	// bne 0x822cd988
	if (!cr0.eq) goto loc_822CD988;
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25208
	ctx.r4.s64 = r11.s64 + 25208;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD988:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd9ac
	if (cr0.eq) goto loc_822CD9AC;
	// addi r3,r25,-940
	ctx.r3.s64 = r25.s64 + -940;
	// bl 0x822cbc60
	sub_822CBC60(ctx, base);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD9AC:
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8520
	r28.s64 = ctx.r10.s64 + -8520;
	// bne 0x822cd9d4
	if (!cr0.eq) goto loc_822CD9D4;
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25192
	ctx.r4.s64 = r11.s64 + 25192;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822CD9D4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cd9f8
	if (cr0.eq) goto loc_822CD9F8;
	// addi r3,r25,-940
	ctx.r3.s64 = r25.s64 + -940;
	// bl 0x822ca5d0
	sub_822CA5D0(ctx, base);
	// b 0x822cd424
	goto loc_822CD424;
loc_822CD9F8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r25,-880
	ctx.r4.s64 = r25.s64 + -880;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82377300
	sub_82377300(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822cda3c
	if (cr6.eq) goto loc_822CDA3C;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cdadc
	if (cr0.eq) goto loc_822CDADC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_822CDA34:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822cdadc
	goto loc_822CDADC;
loc_822CDA3C:
	// addic. r11,r25,-820
	xer.ca = r25.u32 > 819;
	r11.s64 = r25.s64 + -820;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cda90
	if (cr0.eq) goto loc_822CDA90;
	// addi r4,r25,-820
	ctx.r4.s64 = r25.s64 + -820;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822cda90
	if (cr6.eq) goto loc_822CDA90;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cdadc
	if (cr0.eq) goto loc_822CDADC;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x822cda34
	goto loc_822CDA34;
loc_822CDA90:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r25,-856
	ctx.r4.s64 = r25.s64 + -856;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x823267b8
	sub_823267B8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822cdad0
	if (cr6.eq) goto loc_822CDAD0;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cdadc
	if (cr0.eq) goto loc_822CDADC;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x822cda34
	goto loc_822CDA34;
loc_822CDAD0:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822CDAD8:
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
loc_822CDADC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822CDAE0:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822CD180"))) PPC_WEAK_FUNC(sub_822CD180);
PPC_FUNC_IMPL(__imp__sub_822CD180) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8440
	r28.s64 = ctx.r10.s64 + -8440;
	// bne 0x822cd1e8
	if (!cr0.eq) goto loc_822CD1E8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25496
	ctx.r4.s64 = r11.s64 + 25496;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD1E8:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd230
	if (cr0.eq) goto loc_822CD230;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r3,-860(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -860);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// stb r4,-849(r25)
	PPC_STORE_U8(r25.u32 + -849, ctx.r4.u8);
	// bl 0x822cecc0
	sub_822CECC0(ctx, base);
loc_822CD228:
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// b 0x822cdad8
	goto loc_822CDAD8;
loc_822CD230:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8444
	r28.s64 = ctx.r10.s64 + -8444;
	// bne 0x822cd25c
	if (!cr0.eq) goto loc_822CD25C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25484
	ctx.r4.s64 = r11.s64 + 25484;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD25C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd288
	if (cr0.eq) goto loc_822CD288;
	// lbz r11,-849(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + -849);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x822cdae0
	goto loc_822CDAE0;
loc_822CD288:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8448
	r28.s64 = ctx.r10.s64 + -8448;
	// bne 0x822cd2b4
	if (!cr0.eq) goto loc_822CD2B4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25480
	ctx.r4.s64 = r11.s64 + 25480;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD2B4:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd2f4
	if (cr0.eq) goto loc_822CD2F4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
loc_822CD2E8:
	// fmuls f0,f1,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// b 0x822cdadc
	goto loc_822CDADC;
loc_822CD2F4:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8452
	r28.s64 = ctx.r10.s64 + -8452;
	// bne 0x822cd320
	if (!cr0.eq) goto loc_822CD320;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25464
	ctx.r4.s64 = r11.s64 + 25464;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD320:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd364
	if (cr0.eq) goto loc_822CD364;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r25,-940
	ctx.r3.s64 = r25.s64 + -940;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x822caa30
	sub_822CAA30(ctx, base);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD364:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8456
	r28.s64 = ctx.r10.s64 + -8456;
	// bne 0x822cd390
	if (!cr0.eq) goto loc_822CD390;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25452
	ctx.r4.s64 = r11.s64 + 25452;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD390:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd3cc
	if (cr0.eq) goto loc_822CD3CC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82318050
	sub_82318050(ctx, base);
	// addi r3,r25,-940
	ctx.r3.s64 = r25.s64 + -940;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x822cb548
	sub_822CB548(ctx, base);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD3CC:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8460
	r28.s64 = ctx.r10.s64 + -8460;
	// bne 0x822cd3f8
	if (!cr0.eq) goto loc_822CD3F8;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25444
	ctx.r4.s64 = r11.s64 + 25444;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD3F8:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd434
	if (cr0.eq) goto loc_822CD434;
	// addi r3,r25,-940
	ctx.r3.s64 = r25.s64 + -940;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822CD424:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x822cdadc
	goto loc_822CDADC;
loc_822CD434:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8464
	r28.s64 = ctx.r10.s64 + -8464;
	// bne 0x822cd460
	if (!cr0.eq) goto loc_822CD460;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25432
	ctx.r4.s64 = r11.s64 + 25432;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD460:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd490
	if (cr0.eq) goto loc_822CD490;
	// addi r30,r25,-940
	r30.s64 = r25.s64 + -940;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ca420
	sub_822CA420(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,112(r30)
	PPC_STORE_U8(r30.u32 + 112, r11.u8);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD490:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8468
	r28.s64 = ctx.r10.s64 + -8468;
	// bne 0x822cd4bc
	if (!cr0.eq) goto loc_822CD4BC;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25416
	ctx.r4.s64 = r11.s64 + 25416;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD4BC:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd4ec
	if (cr0.eq) goto loc_822CD4EC;
	// addi r30,r25,-940
	r30.s64 = r25.s64 + -940;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ca420
	sub_822CA420(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cca60
	sub_822CCA60(ctx, base);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD4EC:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8472
	r28.s64 = ctx.r10.s64 + -8472;
	// bne 0x822cd518
	if (!cr0.eq) goto loc_822CD518;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25400
	ctx.r4.s64 = r11.s64 + 25400;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD518:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd54c
	if (cr0.eq) goto loc_822CD54C;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,-8908(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8908);
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x822cdae0
	goto loc_822CDAE0;
loc_822CD54C:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8476
	r28.s64 = ctx.r10.s64 + -8476;
	// bne 0x822cd578
	if (!cr0.eq) goto loc_822CD578;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25384
	ctx.r4.s64 = r11.s64 + 25384;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD578:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd5c0
	if (cr0.eq) goto loc_822CD5C0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// stb r11,-828(r25)
	PPC_STORE_U8(r25.u32 + -828, r11.u8);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_822CD5B8:
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// b 0x822cdadc
	goto loc_822CDADC;
loc_822CD5C0:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8480
	r28.s64 = ctx.r10.s64 + -8480;
	// bne 0x822cd5ec
	if (!cr0.eq) goto loc_822CD5EC;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25368
	ctx.r4.s64 = r11.s64 + 25368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD5EC:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd628
	if (cr0.eq) goto loc_822CD628;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,-852(r25)
	PPC_STORE_U8(r25.u32 + -852, r11.u8);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD628:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8484
	r28.s64 = ctx.r10.s64 + -8484;
	// bne 0x822cd654
	if (!cr0.eq) goto loc_822CD654;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25348
	ctx.r4.s64 = r11.s64 + 25348;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD654:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd690
	if (cr0.eq) goto loc_822CD690;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,-851(r25)
	PPC_STORE_U8(r25.u32 + -851, r11.u8);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD690:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8488
	r28.s64 = ctx.r10.s64 + -8488;
	// bne 0x822cd6bc
	if (!cr0.eq) goto loc_822CD6BC;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25328
	ctx.r4.s64 = r11.s64 + 25328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD6BC:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd6e8
	if (cr0.eq) goto loc_822CD6E8;
	// lbz r11,-823(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + -823);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x822cdae0
	goto loc_822CDAE0;
loc_822CD6E8:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8492
	r28.s64 = ctx.r10.s64 + -8492;
	// bne 0x822cd714
	if (!cr0.eq) goto loc_822CD714;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25304
	ctx.r4.s64 = r11.s64 + 25304;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD714:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd750
	if (cr0.eq) goto loc_822CD750;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,-823(r25)
	PPC_STORE_U8(r25.u32 + -823, r11.u8);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD750:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8496
	r28.s64 = ctx.r10.s64 + -8496;
	// bne 0x822cd77c
	if (!cr0.eq) goto loc_822CD77C;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25292
	ctx.r4.s64 = r11.s64 + 25292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD77C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd7cc
	if (cr0.eq) goto loc_822CD7CC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// addi r11,r25,-940
	r11.s64 = r25.s64 + -940;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// lwz r11,24(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD7CC:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8500
	r28.s64 = ctx.r10.s64 + -8500;
	// bne 0x822cd7f8
	if (!cr0.eq) goto loc_822CD7F8;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25272
	ctx.r4.s64 = r11.s64 + 25272;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD7F8:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd81c
	if (cr0.eq) goto loc_822CD81C;
	// addi r3,r25,-940
	ctx.r3.s64 = r25.s64 + -940;
	// bl 0x822cb9d8
	sub_822CB9D8(ctx, base);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD81C:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8504
	r28.s64 = ctx.r10.s64 + -8504;
	// bne 0x822cd848
	if (!cr0.eq) goto loc_822CD848;
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25260
	ctx.r4.s64 = r11.s64 + 25260;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD848:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd888
	if (cr0.eq) goto loc_822CD888;
	// lwz r3,-860(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -860);
	// bl 0x822ce828
	sub_822CE828(ctx, base);
	// bl 0x822c9be8
	sub_822C9BE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x822cd5b8
	goto loc_822CD5B8;
loc_822CD888:
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8508
	r28.s64 = ctx.r10.s64 + -8508;
	// bne 0x822cd8b4
	if (!cr0.eq) goto loc_822CD8B4;
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25248
	ctx.r4.s64 = r11.s64 + 25248;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD8B4:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd8f8
	if (cr0.eq) goto loc_822CD8F8;
	// lwz r3,-860(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -860);
	// bl 0x822ce828
	sub_822CE828(ctx, base);
	// bl 0x822c9be8
	sub_822C9BE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822dce20
	sub_822DCE20(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r11,5
	r11.s64 = 5;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x822cdadc
	goto loc_822CDADC;
loc_822CD8F8:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8512
	r28.s64 = ctx.r10.s64 + -8512;
	// bne 0x822cd924
	if (!cr0.eq) goto loc_822CD924;
	// oris r11,r11,4
	r11.u64 = r11.u64 | 262144;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25228
	ctx.r4.s64 = r11.s64 + 25228;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD924:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd95c
	if (cr0.eq) goto loc_822CD95C;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x82391830
	sub_82391830(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// b 0x822cd2e8
	goto loc_822CD2E8;
loc_822CD95C:
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8516
	r28.s64 = ctx.r10.s64 + -8516;
	// bne 0x822cd988
	if (!cr0.eq) goto loc_822CD988;
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25208
	ctx.r4.s64 = r11.s64 + 25208;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8436);
loc_822CD988:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822cd9ac
	if (cr0.eq) goto loc_822CD9AC;
	// addi r3,r25,-940
	ctx.r3.s64 = r25.s64 + -940;
	// bl 0x822cbc60
	sub_822CBC60(ctx, base);
	// b 0x822cd228
	goto loc_822CD228;
loc_822CD9AC:
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8520
	r28.s64 = ctx.r10.s64 + -8520;
	// bne 0x822cd9d4
	if (!cr0.eq) goto loc_822CD9D4;
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,-8436(r30)
	PPC_STORE_U32(r30.u32 + -8436, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25192
	ctx.r4.s64 = r11.s64 + 25192;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822CD9D4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cd9f8
	if (cr0.eq) goto loc_822CD9F8;
	// addi r3,r25,-940
	ctx.r3.s64 = r25.s64 + -940;
	// bl 0x822ca5d0
	sub_822CA5D0(ctx, base);
	// b 0x822cd424
	goto loc_822CD424;
loc_822CD9F8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r25,-880
	ctx.r4.s64 = r25.s64 + -880;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82377300
	sub_82377300(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822cda3c
	if (cr6.eq) goto loc_822CDA3C;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cdadc
	if (cr0.eq) goto loc_822CDADC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_822CDA34:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822cdadc
	goto loc_822CDADC;
loc_822CDA3C:
	// addic. r11,r25,-820
	xer.ca = r25.u32 > 819;
	r11.s64 = r25.s64 + -820;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cda90
	if (cr0.eq) goto loc_822CDA90;
	// addi r4,r25,-820
	ctx.r4.s64 = r25.s64 + -820;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822cda90
	if (cr6.eq) goto loc_822CDA90;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cdadc
	if (cr0.eq) goto loc_822CDADC;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x822cda34
	goto loc_822CDA34;
loc_822CDA90:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r25,-856
	ctx.r4.s64 = r25.s64 + -856;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x823267b8
	sub_823267B8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822cdad0
	if (cr6.eq) goto loc_822CDAD0;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cdadc
	if (cr0.eq) goto loc_822CDADC;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x822cda34
	goto loc_822CDA34;
loc_822CDAD0:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822CDAD8:
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
loc_822CDADC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822CDAE0:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822CDAE8"))) PPC_WEAK_FUNC(sub_822CDAE8);
PPC_FUNC_IMPL(__imp__sub_822CDAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDB10"))) PPC_WEAK_FUNC(sub_822CDB10);
PPC_FUNC_IMPL(__imp__sub_822CDB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDB38"))) PPC_WEAK_FUNC(sub_822CDB38);
PPC_FUNC_IMPL(__imp__sub_822CDB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDB60"))) PPC_WEAK_FUNC(sub_822CDB60);
PPC_FUNC_IMPL(__imp__sub_822CDB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDB88"))) PPC_WEAK_FUNC(sub_822CDB88);
PPC_FUNC_IMPL(__imp__sub_822CDB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDBB0"))) PPC_WEAK_FUNC(sub_822CDBB0);
PPC_FUNC_IMPL(__imp__sub_822CDBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDBD8"))) PPC_WEAK_FUNC(sub_822CDBD8);
PPC_FUNC_IMPL(__imp__sub_822CDBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDC00"))) PPC_WEAK_FUNC(sub_822CDC00);
PPC_FUNC_IMPL(__imp__sub_822CDC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDC28"))) PPC_WEAK_FUNC(sub_822CDC28);
PPC_FUNC_IMPL(__imp__sub_822CDC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDC50"))) PPC_WEAK_FUNC(sub_822CDC50);
PPC_FUNC_IMPL(__imp__sub_822CDC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDC78"))) PPC_WEAK_FUNC(sub_822CDC78);
PPC_FUNC_IMPL(__imp__sub_822CDC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDCA0"))) PPC_WEAK_FUNC(sub_822CDCA0);
PPC_FUNC_IMPL(__imp__sub_822CDCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDCC8"))) PPC_WEAK_FUNC(sub_822CDCC8);
PPC_FUNC_IMPL(__imp__sub_822CDCC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDCF0"))) PPC_WEAK_FUNC(sub_822CDCF0);
PPC_FUNC_IMPL(__imp__sub_822CDCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDD18"))) PPC_WEAK_FUNC(sub_822CDD18);
PPC_FUNC_IMPL(__imp__sub_822CDD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDD40"))) PPC_WEAK_FUNC(sub_822CDD40);
PPC_FUNC_IMPL(__imp__sub_822CDD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,17,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDD68"))) PPC_WEAK_FUNC(sub_822CDD68);
PPC_FUNC_IMPL(__imp__sub_822CDD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,16,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDD90"))) PPC_WEAK_FUNC(sub_822CDD90);
PPC_FUNC_IMPL(__imp__sub_822CDD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,15,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDDB8"))) PPC_WEAK_FUNC(sub_822CDDB8);
PPC_FUNC_IMPL(__imp__sub_822CDDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,14,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDDE0"))) PPC_WEAK_FUNC(sub_822CDDE0);
PPC_FUNC_IMPL(__imp__sub_822CDDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,13,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDE08"))) PPC_WEAK_FUNC(sub_822CDE08);
PPC_FUNC_IMPL(__imp__sub_822CDE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8436
	r11.s64 = r11.s64 + -8436;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,12,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8436
	ctx.r10.s64 = ctx.r10.s64 + -8436;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CDE30"))) PPC_WEAK_FUNC(sub_822CDE30);
PPC_FUNC_IMPL(__imp__sub_822CDE30) {
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

__attribute__((alias("__imp__sub_822CDE58"))) PPC_WEAK_FUNC(sub_822CDE58);
PPC_FUNC_IMPL(__imp__sub_822CDE58) {
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

__attribute__((alias("__imp__sub_822CDE80"))) PPC_WEAK_FUNC(sub_822CDE80);
PPC_FUNC_IMPL(__imp__sub_822CDE80) {
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
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_822CDEA8"))) PPC_WEAK_FUNC(sub_822CDEA8);
PPC_FUNC_IMPL(__imp__sub_822CDEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x822cd180
	sub_822CD180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822CDEB4"))) PPC_WEAK_FUNC(sub_822CDEB4);
PPC_FUNC_IMPL(__imp__sub_822CDEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CDEB8"))) PPC_WEAK_FUNC(sub_822CDEB8);
PPC_FUNC_IMPL(__imp__sub_822CDEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8239d5e8
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82377210
	sub_82377210(ctx, base);
	// lbz r11,112(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822cdf00
	if (cr0.eq) goto loc_822CDF00;
	// bl 0x822cca60
	sub_822CCA60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822caab0
	sub_822CAAB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cbac8
	sub_822CBAC8(ctx, base);
	// b 0x822ce050
	goto loc_822CE050;
loc_822CDF00:
	// bl 0x822caab0
	sub_822CAAB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cbac8
	sub_822CBAC8(ctx, base);
	// lbz r11,92(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 92);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r29,r3,44
	r29.s64 = ctx.r3.s64 + 44;
	// addi r30,r11,-5056
	r30.s64 = r11.s64 + -5056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f28,-4904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4904);
	f28.f64 = double(temp.f32);
	// lfs f29,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f29.f64 = double(temp.f32);
	// beq 0x822cdf70
	if (cr0.eq) goto loc_822CDF70;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823118d0
	sub_823118D0(ctx, base);
	// lfs f13,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f31,f1,f13
	f31.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// lfs f12,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f10,108(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,17324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fsubs f13,f31,f12
	ctx.f13.f64 = double(float(f31.f64 - ctx.f12.f64));
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fmadds f30,f13,f0,f10
	f30.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f10.f64));
	// b 0x822cdf80
	goto loc_822CDF80;
loc_822CDF70:
	// bl 0x822cfa70
	sub_822CFA70(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f30,f0,f28
	f30.f64 = double(float(f0.f64 * f28.f64));
	// fmuls f31,f1,f29
	f31.f64 = double(float(ctx.f1.f64 * f29.f64));
loc_822CDF80:
	// lbz r11,113(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 113);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822cdfb8
	if (!cr0.eq) goto loc_822CDFB8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,26112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26112);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x822cdfb8
	if (!cr6.gt) goto loc_822CDFB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cb260
	sub_822CB260(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822cfa70
	sub_822CFA70(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f30,f0,f28
	f30.f64 = double(float(f0.f64 * f28.f64));
	// fmuls f31,f1,f29
	f31.f64 = double(float(ctx.f1.f64 * f29.f64));
loc_822CDFB8:
	// lbz r11,820(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 820);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822ce024
	if (cr0.eq) goto loc_822CE024;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// bge cr6,0x822cdfd8
	if (!cr6.lt) goto loc_822CDFD8;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
loc_822CDFD8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82311988
	sub_82311988(ctx, base);
	// fcmpu cr6,f30,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, ctx.f1.f64);
	// bge cr6,0x822cdfec
	if (!cr6.lt) goto loc_822CDFEC;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
loc_822CDFEC:
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823118f8
	sub_823118F8(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r30,44
	ctx.r10.s64 = r30.s64 + 44;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_822CE010:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822ce010
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_822CE010;
loc_822CE024:
	// lbz r11,92(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822ce048
	if (cr0.eq) goto loc_822CE048;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-2472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2472);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f0,6376(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6376);
	f0.f64 = double(temp.f32);
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 * f0.f64));
	// bl 0x8232fc08
	sub_8232FC08(ctx, base);
loc_822CE048:
	// lwz r3,836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 836);
	// bl 0x822df048
	sub_822DF048(ctx, base);
loc_822CE050:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8239d634
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822CE060"))) PPC_WEAK_FUNC(sub_822CE060);
PPC_FUNC_IMPL(__imp__sub_822CE060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,26224(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26224);
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
	// li r29,0
	r29.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x822ce0b8
	if (cr6.eq) goto loc_822CE0B8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,26156
	r11.s64 = r11.s64 + 26156;
	// addi r10,r10,26148
	ctx.r10.s64 = ctx.r10.s64 + 26148;
	// addi r3,r30,940
	ctx.r3.s64 = r30.s64 + 940;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
loc_822CE0B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// bl 0x821bb3f0
	sub_821BB3F0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24444
	r11.s64 = r11.s64 + 24444;
	// addi r10,r10,24380
	ctx.r10.s64 = ctx.r10.s64 + 24380;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r9,26140
	ctx.r4.s64 = ctx.r9.s64 + 26140;
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
	// addi r10,r11,-936
	ctx.r10.s64 = r11.s64 + -936;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r3,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r3.u32);
	// addi r28,r30,120
	r28.s64 = r30.s64 + 120;
	// stb r29,88(r30)
	PPC_STORE_U8(r30.u32 + 88, r29.u8);
	// stb r29,89(r30)
	PPC_STORE_U8(r30.u32 + 89, r29.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r29,90(r30)
	PPC_STORE_U8(r30.u32 + 90, r29.u8);
	// stb r29,91(r30)
	PPC_STORE_U8(r30.u32 + 91, r29.u8);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stb r29,92(r30)
	PPC_STORE_U8(r30.u32 + 92, r29.u8);
	// stfs f0,96(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 96, temp.u32);
	// stb r29,112(r30)
	PPC_STORE_U8(r30.u32 + 112, r29.u8);
	// stfs f0,100(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 100, temp.u32);
	// stb r29,114(r30)
	PPC_STORE_U8(r30.u32 + 114, r29.u8);
	// stfs f0,104(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 104, temp.u32);
	// stb r29,115(r30)
	PPC_STORE_U8(r30.u32 + 115, r29.u8);
	// stfs f0,108(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 108, temp.u32);
	// stb r29,117(r30)
	PPC_STORE_U8(r30.u32 + 117, r29.u8);
	// bl 0x822bb048
	sub_822BB048(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,26124
	ctx.r4.s64 = r11.s64 + 26124;
	// addi r3,r30,736
	ctx.r3.s64 = r30.s64 + 736;
	// bl 0x8235cd08
	sub_8235CD08(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stb r27,820(r30)
	PPC_STORE_U8(r30.u32 + 820, r27.u8);
	// stw r29,836(r30)
	PPC_STORE_U32(r30.u32 + 836, r29.u32);
	// stw r29,840(r30)
	PPC_STORE_U32(r30.u32 + 840, r29.u32);
	// stw r11,824(r30)
	PPC_STORE_U32(r30.u32 + 824, r11.u32);
	// stw r11,828(r30)
	PPC_STORE_U32(r30.u32 + 828, r11.u32);
	// addi r11,r30,844
	r11.s64 = r30.s64 + 844;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r29,860(r30)
	PPC_STORE_U32(r30.u32 + 860, r29.u32);
	// addi r11,r11,-11500
	r11.s64 = r11.s64 + -11500;
	// stw r29,864(r30)
	PPC_STORE_U32(r30.u32 + 864, r29.u32);
	// stw r11,856(r30)
	PPC_STORE_U32(r30.u32 + 856, r11.u32);
	// addi r3,r30,868
	ctx.r3.s64 = r30.s64 + 868;
	// bl 0x822d6ee0
	sub_822D6EE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r30,-8684(r11)
	PPC_STORE_U32(r11.u32 + -8684, r30.u32);
	// bl 0x822ca420
	sub_822CA420(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,26116
	ctx.r4.s64 = r11.s64 + 26116;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,-2968(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822CE068"))) PPC_WEAK_FUNC(sub_822CE068);
PPC_FUNC_IMPL(__imp__sub_822CE068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x822ce0b8
	if (cr6.eq) goto loc_822CE0B8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,26156
	r11.s64 = r11.s64 + 26156;
	// addi r10,r10,26148
	ctx.r10.s64 = ctx.r10.s64 + 26148;
	// addi r3,r30,940
	ctx.r3.s64 = r30.s64 + 940;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
loc_822CE0B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// bl 0x821bb3f0
	sub_821BB3F0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24444
	r11.s64 = r11.s64 + 24444;
	// addi r10,r10,24380
	ctx.r10.s64 = ctx.r10.s64 + 24380;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r9,26140
	ctx.r4.s64 = ctx.r9.s64 + 26140;
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
	// addi r10,r11,-936
	ctx.r10.s64 = r11.s64 + -936;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r3,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r3.u32);
	// addi r28,r30,120
	r28.s64 = r30.s64 + 120;
	// stb r29,88(r30)
	PPC_STORE_U8(r30.u32 + 88, r29.u8);
	// stb r29,89(r30)
	PPC_STORE_U8(r30.u32 + 89, r29.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r29,90(r30)
	PPC_STORE_U8(r30.u32 + 90, r29.u8);
	// stb r29,91(r30)
	PPC_STORE_U8(r30.u32 + 91, r29.u8);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stb r29,92(r30)
	PPC_STORE_U8(r30.u32 + 92, r29.u8);
	// stfs f0,96(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 96, temp.u32);
	// stb r29,112(r30)
	PPC_STORE_U8(r30.u32 + 112, r29.u8);
	// stfs f0,100(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 100, temp.u32);
	// stb r29,114(r30)
	PPC_STORE_U8(r30.u32 + 114, r29.u8);
	// stfs f0,104(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 104, temp.u32);
	// stb r29,115(r30)
	PPC_STORE_U8(r30.u32 + 115, r29.u8);
	// stfs f0,108(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 108, temp.u32);
	// stb r29,117(r30)
	PPC_STORE_U8(r30.u32 + 117, r29.u8);
	// bl 0x822bb048
	sub_822BB048(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,26124
	ctx.r4.s64 = r11.s64 + 26124;
	// addi r3,r30,736
	ctx.r3.s64 = r30.s64 + 736;
	// bl 0x8235cd08
	sub_8235CD08(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stb r27,820(r30)
	PPC_STORE_U8(r30.u32 + 820, r27.u8);
	// stw r29,836(r30)
	PPC_STORE_U32(r30.u32 + 836, r29.u32);
	// stw r29,840(r30)
	PPC_STORE_U32(r30.u32 + 840, r29.u32);
	// stw r11,824(r30)
	PPC_STORE_U32(r30.u32 + 824, r11.u32);
	// stw r11,828(r30)
	PPC_STORE_U32(r30.u32 + 828, r11.u32);
	// addi r11,r30,844
	r11.s64 = r30.s64 + 844;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r29,860(r30)
	PPC_STORE_U32(r30.u32 + 860, r29.u32);
	// addi r11,r11,-11500
	r11.s64 = r11.s64 + -11500;
	// stw r29,864(r30)
	PPC_STORE_U32(r30.u32 + 864, r29.u32);
	// stw r11,856(r30)
	PPC_STORE_U32(r30.u32 + 856, r11.u32);
	// addi r3,r30,868
	ctx.r3.s64 = r30.s64 + 868;
	// bl 0x822d6ee0
	sub_822D6EE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r30,-8684(r11)
	PPC_STORE_U32(r11.u32 + -8684, r30.u32);
	// bl 0x822ca420
	sub_822CA420(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,26116
	ctx.r4.s64 = r11.s64 + 26116;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,-2968(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822CE204"))) PPC_WEAK_FUNC(sub_822CE204);
PPC_FUNC_IMPL(__imp__sub_822CE204) {
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
	// beq 0x822ce238
	if (cr0.eq) goto loc_822CE238;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,940
	ctx.r3.s64 = r11.s64 + 940;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_822CE238:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CE248"))) PPC_WEAK_FUNC(sub_822CE248);
PPC_FUNC_IMPL(__imp__sub_822CE248) {
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

__attribute__((alias("__imp__sub_822CE274"))) PPC_WEAK_FUNC(sub_822CE274);
PPC_FUNC_IMPL(__imp__sub_822CE274) {
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
	// addi r3,r11,84
	ctx.r3.s64 = r11.s64 + 84;
	// bl 0x823260f8
	sub_823260F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CE2A0"))) PPC_WEAK_FUNC(sub_822CE2A0);
PPC_FUNC_IMPL(__imp__sub_822CE2A0) {
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
	// addi r3,r11,120
	ctx.r3.s64 = r11.s64 + 120;
	// bl 0x822bab70
	sub_822BAB70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CE2CC"))) PPC_WEAK_FUNC(sub_822CE2CC);
PPC_FUNC_IMPL(__imp__sub_822CE2CC) {
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
	// addi r3,r11,844
	ctx.r3.s64 = r11.s64 + 844;
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

__attribute__((alias("__imp__sub_822CE2F8"))) PPC_WEAK_FUNC(sub_822CE2F8);
PPC_FUNC_IMPL(__imp__sub_822CE2F8) {
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
	// addi r3,r11,856
	ctx.r3.s64 = r11.s64 + 856;
	// bl 0x8229f6d0
	sub_8229F6D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CE324"))) PPC_WEAK_FUNC(sub_822CE324);
PPC_FUNC_IMPL(__imp__sub_822CE324) {
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
	// addi r3,r11,868
	ctx.r3.s64 = r11.s64 + 868;
	// bl 0x822d7500
	sub_822D7500(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CE350"))) PPC_WEAK_FUNC(sub_822CE350);
PPC_FUNC_IMPL(__imp__sub_822CE350) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x822bb350
	sub_822BB350(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x822d6640
	sub_822D6640(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822CE3A4"))) PPC_WEAK_FUNC(sub_822CE3A4);
PPC_FUNC_IMPL(__imp__sub_822CE3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CE3A8"))) PPC_WEAK_FUNC(sub_822CE3A8);
PPC_FUNC_IMPL(__imp__sub_822CE3A8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x822bb350
	sub_822BB350(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x822d6528
	sub_822D6528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822CE3FC"))) PPC_WEAK_FUNC(sub_822CE3FC);
PPC_FUNC_IMPL(__imp__sub_822CE3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CE400"))) PPC_WEAK_FUNC(sub_822CE400);
PPC_FUNC_IMPL(__imp__sub_822CE400) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r4,r11,-392
	ctx.r4.s64 = r11.s64 + -392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,-400
	r31.s64 = r11.s64 + -400;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r30,r11,-416
	r30.s64 = r11.s64 + -416;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r29,r11,-424
	r29.s64 = r11.s64 + -424;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270de0
	sub_82270DE0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-9608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lwz r4,604(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 604);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x822ce5b0
	if (cr0.eq) goto loc_822CE5B0;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,26320
	ctx.r4.s64 = r11.s64 + 26320;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270de0
	sub_82270DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
loc_822CE50C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r3,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
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
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(r31.s32, 16, xer);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r29
	PPC_STORE_U32(r29.u32, f0.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// blt cr6,0x822ce50c
	if (cr6.lt) goto loc_822CE50C;
	// cmpwi cr6,r25,5
	cr6.compare<int32_t>(r25.s32, 5, xer);
	// bne cr6,0x822ce598
	if (!cr6.eq) goto loc_822CE598;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_822CE590:
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// b 0x822ce5c8
	goto loc_822CE5C8;
loc_822CE598:
	// cmpwi cr6,r25,4
	cr6.compare<int32_t>(r25.s32, 4, xer);
	// bne cr6,0x822ce5a8
	if (!cr6.eq) goto loc_822CE5A8;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x822ce590
	goto loc_822CE590;
loc_822CE5A8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x822ce5c8
	goto loc_822CE5C8;
loc_822CE5B0:
	// cmpwi cr6,r25,5
	cr6.compare<int32_t>(r25.s32, 5, xer);
	// bne cr6,0x822ce5c4
	if (!cr6.eq) goto loc_822CE5C4;
	// lis r3,30
	ctx.r3.s64 = 1966080;
	// ori r3,r3,33920
	ctx.r3.u64 = ctx.r3.u64 | 33920;
	// b 0x822ce5c8
	goto loc_822CE5C8;
loc_822CE5C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CE5C8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822CE5D4"))) PPC_WEAK_FUNC(sub_822CE5D4);
PPC_FUNC_IMPL(__imp__sub_822CE5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CE5D8"))) PPC_WEAK_FUNC(sub_822CE5D8);
PPC_FUNC_IMPL(__imp__sub_822CE5D8) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r4,r11,-392
	ctx.r4.s64 = r11.s64 + -392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,-400
	r31.s64 = r11.s64 + -400;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r30,r11,-416
	r30.s64 = r11.s64 + -416;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r29,r11,-424
	r29.s64 = r11.s64 + -424;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270de0
	sub_82270DE0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-9608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lwz r4,604(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 604);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x822ce784
	if (cr0.eq) goto loc_822CE784;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,26320
	ctx.r4.s64 = r11.s64 + 26320;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270de0
	sub_82270DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
loc_822CE6E4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r3,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
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
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(r31.s32, 16, xer);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r29
	PPC_STORE_U32(r29.u32, f0.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// blt cr6,0x822ce6e4
	if (cr6.lt) goto loc_822CE6E4;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bge cr6,0x822ce784
	if (!cr6.lt) goto loc_822CE784;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x822ce77c
	if (cr6.lt) goto loc_822CE77C;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x822ce788
	goto loc_822CE788;
loc_822CE77C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x822ce788
	goto loc_822CE788;
loc_822CE784:
	// li r3,5
	ctx.r3.s64 = 5;
loc_822CE788:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822CE794"))) PPC_WEAK_FUNC(sub_822CE794);
PPC_FUNC_IMPL(__imp__sub_822CE794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CE798"))) PPC_WEAK_FUNC(sub_822CE798);
PPC_FUNC_IMPL(__imp__sub_822CE798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,26336
	r11.s64 = r11.s64 + 26336;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CE7A8"))) PPC_WEAK_FUNC(sub_822CE7A8);
PPC_FUNC_IMPL(__imp__sub_822CE7A8) {
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
	// addi r11,r11,26336
	r11.s64 = r11.s64 + 26336;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x822ce7d4
	if (cr0.eq) goto loc_822CE7D4;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822CE7D4:
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

__attribute__((alias("__imp__sub_822CE7EC"))) PPC_WEAK_FUNC(sub_822CE7EC);
PPC_FUNC_IMPL(__imp__sub_822CE7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CE7F0"))) PPC_WEAK_FUNC(sub_822CE7F0);
PPC_FUNC_IMPL(__imp__sub_822CE7F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822bb480
	sub_822BB480(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CE828"))) PPC_WEAK_FUNC(sub_822CE828);
PPC_FUNC_IMPL(__imp__sub_822CE828) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CE830"))) PPC_WEAK_FUNC(sub_822CE830);
PPC_FUNC_IMPL(__imp__sub_822CE830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32127
	r31.s64 = -2105475072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,12292
	ctx.r4.s64 = r11.s64 + 12292;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-9608(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ce8dc
	if (cr0.eq) goto loc_822CE8DC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26368
	ctx.r4.s64 = r11.s64 + 26368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-9608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822ce8dc
	if (cr0.eq) goto loc_822CE8DC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26356
	ctx.r4.s64 = r11.s64 + 26356;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x822ce8dc
	if (!cr0.eq) goto loc_822CE8DC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f31,-14040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14040);
	f31.f64 = double(temp.f32);
loc_822CE8DC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8368
	ctx.r4.s64 = r11.s64 + 8368;
	// lwz r11,-9608(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ce908
	if (cr0.eq) goto loc_822CE908;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_822CE908:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x82334728
	sub_82334728(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CE934"))) PPC_WEAK_FUNC(sub_822CE934);
PPC_FUNC_IMPL(__imp__sub_822CE934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CE938"))) PPC_WEAK_FUNC(sub_822CE938);
PPC_FUNC_IMPL(__imp__sub_822CE938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,8368
	ctx.r4.s64 = r11.s64 + 8368;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-9608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ce984
	if (cr0.eq) goto loc_822CE984;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_822CE984:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x82334718
	sub_82334718(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CE9AC"))) PPC_WEAK_FUNC(sub_822CE9AC);
PPC_FUNC_IMPL(__imp__sub_822CE9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CE9B0"))) PPC_WEAK_FUNC(sub_822CE9B0);
PPC_FUNC_IMPL(__imp__sub_822CE9B0) {
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
	// beq 0x822ce9f0
	if (cr0.eq) goto loc_822CE9F0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,24156
	ctx.r3.s64 = r11.s64 + 24156;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822ce9f8
	goto loc_822CE9F8;
loc_822CE9F0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_822CE9F8:
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_822CEA14"))) PPC_WEAK_FUNC(sub_822CEA14);
PPC_FUNC_IMPL(__imp__sub_822CEA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CEA18"))) PPC_WEAK_FUNC(sub_822CEA18);
PPC_FUNC_IMPL(__imp__sub_822CEA18) {
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-9608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// bl 0x822b4db8
	sub_822B4DB8(ctx, base);
	// lwz r11,-9608(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// bl 0x822bc818
	sub_822BC818(ctx, base);
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,-9608(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// bl 0x823384b0
	sub_823384B0(ctx, base);
	// lwz r3,-9608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// li r30,0
	r30.s64 = 0;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822ceaa4
	if (!cr0.gt) goto loc_822CEAA4;
loc_822CEA7C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,-9608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x822c9618
	sub_822C9618(ctx, base);
	// lwz r3,-9608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x822cea7c
	if (cr6.lt) goto loc_822CEA7C;
loc_822CEAA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822CEAAC"))) PPC_WEAK_FUNC(sub_822CEAAC);
PPC_FUNC_IMPL(__imp__sub_822CEAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CEAB0"))) PPC_WEAK_FUNC(sub_822CEAB0);
PPC_FUNC_IMPL(__imp__sub_822CEAB0) {
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
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-9836(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9836);
	// bl 0x822b0ec8
	sub_822B0EC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ce830
	sub_822CE830(ctx, base);
	// lwz r3,-9836(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9836);
	// bl 0x822b0ee8
	sub_822B0EE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ce938
	sub_822CE938(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x82335148
	sub_82335148(ctx, base);
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

__attribute__((alias("__imp__sub_822CEB14"))) PPC_WEAK_FUNC(sub_822CEB14);
PPC_FUNC_IMPL(__imp__sub_822CEB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CEB18"))) PPC_WEAK_FUNC(sub_822CEB18);
PPC_FUNC_IMPL(__imp__sub_822CEB18) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// b 0x822ceb58
	goto loc_822CEB58;
loc_822CEB34:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822ceb54
	if (cr0.eq) goto loc_822CEB54;
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
loc_822CEB54:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822CEB58:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x822ceb34
	if (!cr6.eq) goto loc_822CEB34;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822CEB6C"))) PPC_WEAK_FUNC(sub_822CEB6C);
PPC_FUNC_IMPL(__imp__sub_822CEB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CEB70"))) PPC_WEAK_FUNC(sub_822CEB70);
PPC_FUNC_IMPL(__imp__sub_822CEB70) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cebd0
	if (cr0.eq) goto loc_822CEBD0;
	// li r30,0
	r30.s64 = 0;
loc_822CEB9C:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x822e1f18
	sub_822E1F18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cebdc
	if (cr0.eq) goto loc_822CEBDC;
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x822ceb9c
	if (cr6.lt) goto loc_822CEB9C;
loc_822CEBD0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822CEBD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_822CEBDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822cebd4
	goto loc_822CEBD4;
}

__attribute__((alias("__imp__sub_822CEBE4"))) PPC_WEAK_FUNC(sub_822CEBE4);
PPC_FUNC_IMPL(__imp__sub_822CEBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CEBE8"))) PPC_WEAK_FUNC(sub_822CEBE8);
PPC_FUNC_IMPL(__imp__sub_822CEBE8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// addi r31,r28,132
	r31.s64 = r28.s64 + 132;
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cec48
	if (cr0.eq) goto loc_822CEC48;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_822CEC1C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x822e21d0
	sub_822E21D0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x822cec1c
	if (cr6.lt) goto loc_822CEC1C;
loc_822CEC48:
	// stb r27,128(r28)
	PPC_STORE_U8(r28.u32 + 128, r27.u8);
	// stw r27,176(r28)
	PPC_STORE_U32(r28.u32 + 176, r27.u32);
	// stw r27,180(r28)
	PPC_STORE_U32(r28.u32 + 180, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822CEC5C"))) PPC_WEAK_FUNC(sub_822CEC5C);
PPC_FUNC_IMPL(__imp__sub_822CEC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CEC60"))) PPC_WEAK_FUNC(sub_822CEC60);
PPC_FUNC_IMPL(__imp__sub_822CEC60) {
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
	// addi r31,r3,132
	r31.s64 = ctx.r3.s64 + 132;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cecb8
	if (cr0.eq) goto loc_822CECB8;
	// li r29,0
	r29.s64 = 0;
loc_822CEC8C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x822e1f20
	sub_822E1F20(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x822cec8c
	if (cr6.lt) goto loc_822CEC8C;
loc_822CECB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822CECC0"))) PPC_WEAK_FUNC(sub_822CECC0);
PPC_FUNC_IMPL(__imp__sub_822CECC0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r31,r27,132
	r31.s64 = r27.s64 + 132;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ced24
	if (cr0.eq) goto loc_822CED24;
	// li r29,0
	r29.s64 = 0;
loc_822CECF4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x822e1f30
	sub_822E1F30(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x822cecf4
	if (cr6.lt) goto loc_822CECF4;
loc_822CED24:
	// stb r28,128(r27)
	PPC_STORE_U8(r27.u32 + 128, r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822CED30"))) PPC_WEAK_FUNC(sub_822CED30);
PPC_FUNC_IMPL(__imp__sub_822CED30) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r31,r27,132
	r31.s64 = r27.s64 + 132;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ced94
	if (cr0.eq) goto loc_822CED94;
	// li r29,0
	r29.s64 = 0;
loc_822CED64:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x822e1fb8
	sub_822E1FB8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x822ced64
	if (cr6.lt) goto loc_822CED64;
loc_822CED94:
	// stb r28,129(r27)
	PPC_STORE_U8(r27.u32 + 129, r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822CEDA0"))) PPC_WEAK_FUNC(sub_822CEDA0);
PPC_FUNC_IMPL(__imp__sub_822CEDA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// addi r31,r3,132
	r31.s64 = ctx.r3.s64 + 132;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cee04
	if (cr0.eq) goto loc_822CEE04;
	// li r29,0
	r29.s64 = 0;
loc_822CEDD4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x822e1fd0
	sub_822E1FD0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x822cedd4
	if (cr6.lt) goto loc_822CEDD4;
loc_822CEE04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822CEE10"))) PPC_WEAK_FUNC(sub_822CEE10);
PPC_FUNC_IMPL(__imp__sub_822CEE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x822ceda0
	sub_822CEDA0(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// stfs f31,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822e1df8
	sub_822E1DF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822CEE5C"))) PPC_WEAK_FUNC(sub_822CEE5C);
PPC_FUNC_IMPL(__imp__sub_822CEE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CEE60"))) PPC_WEAK_FUNC(sub_822CEE60);
PPC_FUNC_IMPL(__imp__sub_822CEE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,26368
	ctx.r4.s64 = r11.s64 + 26368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r31,-32127
	r31.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,-9608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,2840
	ctx.r4.s64 = r11.s64 + 2840;
	// lwz r11,-9608(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r31,604(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 604);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,26416
	ctx.r4.s64 = r11.s64 + 26416;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x822cef44
	if (!cr0.eq) goto loc_822CEF44;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,26400
	ctx.r4.s64 = r11.s64 + 26400;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,26384
	ctx.r4.s64 = r11.s64 + 26384;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-26908
	ctx.r4.s64 = r11.s64 + -26908;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d80
	sub_82270D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822CEF44:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r28,3,0,28
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,-26880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26880);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x822cee10
	sub_822CEE10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822ceab0
	sub_822CEAB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822CEF88"))) PPC_WEAK_FUNC(sub_822CEF88);
PPC_FUNC_IMPL(__imp__sub_822CEF88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cefb4
	if (cr0.eq) goto loc_822CEFB4;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// bl 0x82338598
	sub_82338598(ctx, base);
loc_822CEFB4:
	// addi r31,r31,132
	r31.s64 = r31.s64 + 132;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cf008
	if (cr0.eq) goto loc_822CF008;
	// li r29,0
	r29.s64 = 0;
loc_822CEFD4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x822e2018
	sub_822E2018(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x822cefd4
	if (cr6.lt) goto loc_822CEFD4;
loc_822CF008:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822CF014"))) PPC_WEAK_FUNC(sub_822CF014);
PPC_FUNC_IMPL(__imp__sub_822CF014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822CF018"))) PPC_WEAK_FUNC(sub_822CF018);
PPC_FUNC_IMPL(__imp__sub_822CF018) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,26440(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26440);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822ceab0
	sub_822CEAB0(ctx, base);
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// bl 0x823386a8
	sub_823386A8(ctx, base);
	// lwz r3,144(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cf060
	if (cr0.eq) goto loc_822CF060;
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
loc_822CF060:
	// li r25,0
	r25.s64 = 0;
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r25,144(r29)
	PPC_STORE_U32(r29.u32 + 144, r25.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// beq 0x822cf08c
	if (cr0.eq) goto loc_822CF08C;
	// lwz r4,-9608(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822c9e80
	sub_822C9E80(ctx, base);
	// b 0x822cf090
	goto loc_822CF090;
loc_822CF08C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_822CF090:
	// stw r3,144(r29)
	PPC_STORE_U32(r29.u32 + 144, ctx.r3.u32);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// mr r30,r25
	r30.u64 = r25.u64;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822cf0d0
	if (!cr0.gt) goto loc_822CF0D0;
loc_822CF0A8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x822c9618
	sub_822C9618(ctx, base);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x822cf0a8
	if (cr6.lt) goto loc_822CF0A8;
loc_822CF0D0:
	// addi r30,r29,132
	r30.s64 = r29.s64 + 132;
	// mr r28,r25
	r28.u64 = r25.u64;
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
	// beq 0x822cf12c
	if (cr0.eq) goto loc_822CF12C;
	// mr r27,r25
	r27.u64 = r25.u64;
loc_822CF0F0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r26,0(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,144(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// bl 0x822c9bd8
	sub_822C9BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// bl 0x822e3f50
	sub_822E3F50(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x822cf0f0
	if (cr6.lt) goto loc_822CF0F0;
loc_822CF12C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r25,116(r29)
	PPC_STORE_U32(r29.u32 + 116, r25.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822ceda0
	sub_822CEDA0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,172(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 172);
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822CF020"))) PPC_WEAK_FUNC(sub_822CF020);
PPC_FUNC_IMPL(__imp__sub_822CF020) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822ceab0
	sub_822CEAB0(ctx, base);
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// bl 0x823386a8
	sub_823386A8(ctx, base);
	// lwz r3,144(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822cf060
	if (cr0.eq) goto loc_822CF060;
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
loc_822CF060:
	// li r25,0
	r25.s64 = 0;
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r25,144(r29)
	PPC_STORE_U32(r29.u32 + 144, r25.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// beq 0x822cf08c
	if (cr0.eq) goto loc_822CF08C;
	// lwz r4,-9608(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822c9e80
	sub_822C9E80(ctx, base);
	// b 0x822cf090
	goto loc_822CF090;
loc_822CF08C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_822CF090:
	// stw r3,144(r29)
	PPC_STORE_U32(r29.u32 + 144, ctx.r3.u32);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// mr r30,r25
	r30.u64 = r25.u64;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822cf0d0
	if (!cr0.gt) goto loc_822CF0D0;
loc_822CF0A8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x822c9618
	sub_822C9618(ctx, base);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x822cf0a8
	if (cr6.lt) goto loc_822CF0A8;
loc_822CF0D0:
	// addi r30,r29,132
	r30.s64 = r29.s64 + 132;
	// mr r28,r25
	r28.u64 = r25.u64;
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
	// beq 0x822cf12c
	if (cr0.eq) goto loc_822CF12C;
	// mr r27,r25
	r27.u64 = r25.u64;
loc_822CF0F0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r26,0(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,144(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// bl 0x822c9bd8
	sub_822C9BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// bl 0x822e3f50
	sub_822E3F50(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x822cf0f0
	if (cr6.lt) goto loc_822CF0F0;
loc_822CF12C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r25,116(r29)
	PPC_STORE_U32(r29.u32 + 116, r25.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822ceda0
	sub_822CEDA0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,172(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 172);
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822CF158"))) PPC_WEAK_FUNC(sub_822CF158);
PPC_FUNC_IMPL(__imp__sub_822CF158) {
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

__attribute__((alias("__imp__sub_822CF180"))) PPC_WEAK_FUNC(sub_822CF180);
PPC_FUNC_IMPL(__imp__sub_822CF180) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x822cf1c0
	if (!cr6.gt) goto loc_822CF1C0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// stw r3,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r3.u32);
loc_822CF1C0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r30,r31,148
	r30.s64 = r31.s64 + 148;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r28,r11,1
	r28.u64 = r11.u64 ^ 1;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cf208
	if (cr0.eq) goto loc_822CF208;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822e1f28
	sub_822E1F28(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// bl 0x82391830
	sub_82391830(ctx, base);
	// stfs f1,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// b 0x822cf258
	goto loc_822CF258;
loc_822CF208:
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cef88
	sub_822CEF88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ceb70
	sub_822CEB70(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822cf258
	if (!cr0.eq) goto loc_822CF258;
	// lis r29,-32127
	r29.s64 = -2105475072;
loc_822CF22C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cec60
	sub_822CEC60(ctx, base);
	// lwz r3,-7564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -7564);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ceb70
	sub_822CEB70(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cf22c
	if (cr0.eq) goto loc_822CF22C;
loc_822CF258:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82183060
	sub_82183060(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822CF278"))) PPC_WEAK_FUNC(sub_822CF278);
PPC_FUNC_IMPL(__imp__sub_822CF278) {
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
	// addi r31,r3,132
	r31.s64 = ctx.r3.s64 + 132;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cf2d8
	if (cr0.eq) goto loc_822CF2D8;
	// li r29,0
	r29.s64 = 0;
loc_822CF2A8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x822e20d8
	sub_822E20D8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x822cf2a8
	if (cr6.lt) goto loc_822CF2A8;
loc_822CF2D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822CF2E0"))) PPC_WEAK_FUNC(sub_822CF2E0);
PPC_FUNC_IMPL(__imp__sub_822CF2E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// addi r31,r3,132
	r31.s64 = ctx.r3.s64 + 132;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cf344
	if (cr0.eq) goto loc_822CF344;
	// li r29,0
	r29.s64 = 0;
loc_822CF314:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x822e20d0
	sub_822E20D0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x822cf314
	if (cr6.lt) goto loc_822CF314;
loc_822CF344:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822CF350"))) PPC_WEAK_FUNC(sub_822CF350);
PPC_FUNC_IMPL(__imp__sub_822CF350) {
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
	// lwz r16,26720(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26720);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8392
	r29.s64 = ctx.r10.s64 + -8392;
	// bne 0x822cf3c0
	if (!cr0.eq) goto loc_822CF3C0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,24280
	ctx.r4.s64 = r11.s64 + 24280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF3C0:
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
	// beq 0x822cf3e8
	if (cr0.eq) goto loc_822CF3E8;
	// addi r3,r25,-4
	ctx.r3.s64 = r25.s64 + -4;
	// bl 0x822cebe8
	sub_822CEBE8(ctx, base);
loc_822CF3E0:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x822cf84c
	goto loc_822CF84C;
loc_822CF3E8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8396
	r29.s64 = ctx.r10.s64 + -8396;
	// bne 0x822cf414
	if (!cr0.eq) goto loc_822CF414;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-15292
	ctx.r4.s64 = r11.s64 + -15292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF414:
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
	// beq 0x822cf44c
	if (cr0.eq) goto loc_822CF44C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,120(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 120);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x82334710
	sub_82334710(ctx, base);
	// b 0x822cf3e0
	goto loc_822CF3E0;
loc_822CF44C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8400
	r29.s64 = ctx.r10.s64 + -8400;
	// bne 0x822cf478
	if (!cr0.eq) goto loc_822CF478;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26596
	ctx.r4.s64 = r11.s64 + 26596;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF478:
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
	// beq 0x822cf4ac
	if (cr0.eq) goto loc_822CF4AC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r25,-4
	ctx.r3.s64 = r25.s64 + -4;
	// bl 0x822ceda0
	sub_822CEDA0(ctx, base);
	// b 0x822cf3e0
	goto loc_822CF3E0;
loc_822CF4AC:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8404
	r29.s64 = ctx.r10.s64 + -8404;
	// bne 0x822cf4d8
	if (!cr0.eq) goto loc_822CF4D8;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25292
	ctx.r4.s64 = r11.s64 + 25292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF4D8:
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
	// beq 0x822cf51c
	if (cr0.eq) goto loc_822CF51C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r25,-4
	ctx.r3.s64 = r25.s64 + -4;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x822cecc0
	sub_822CECC0(ctx, base);
	// b 0x822cf3e0
	goto loc_822CF3E0;
loc_822CF51C:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8408
	r29.s64 = ctx.r10.s64 + -8408;
	// bne 0x822cf548
	if (!cr0.eq) goto loc_822CF548;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26588
	ctx.r4.s64 = r11.s64 + 26588;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF548:
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
	// beq 0x822cf574
	if (cr0.eq) goto loc_822CF574;
	// lbz r11,124(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 124);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822cf854
	goto loc_822CF854;
loc_822CF574:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8412
	r29.s64 = ctx.r10.s64 + -8412;
	// bne 0x822cf5a0
	if (!cr0.eq) goto loc_822CF5A0;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26576
	ctx.r4.s64 = r11.s64 + 26576;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF5A0:
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
	// beq 0x822cf5fc
	if (cr0.eq) goto loc_822CF5FC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r25,-4
	ctx.r4.s64 = r25.s64 + -4;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822cf180
	sub_822CF180(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822cf5f8
	if (cr6.eq) goto loc_822CF5F8;
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
	// beq 0x822cf850
	if (cr0.eq) goto loc_822CF850;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_822CF5F0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822cf850
	goto loc_822CF850;
loc_822CF5F8:
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF5FC:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8416
	r29.s64 = ctx.r10.s64 + -8416;
	// bne 0x822cf628
	if (!cr0.eq) goto loc_822CF628;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26560
	ctx.r4.s64 = r11.s64 + 26560;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF628:
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
	// beq 0x822cf654
	if (cr0.eq) goto loc_822CF654;
	// lbz r11,152(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 152);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822cf854
	goto loc_822CF854;
loc_822CF654:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8420
	r29.s64 = ctx.r10.s64 + -8420;
	// bne 0x822cf680
	if (!cr0.eq) goto loc_822CF680;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26552
	ctx.r4.s64 = r11.s64 + 26552;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF680:
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
	// beq 0x822cf6b8
	if (cr0.eq) goto loc_822CF6B8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r25,-4
	ctx.r3.s64 = r25.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822cef88
	sub_822CEF88(ctx, base);
	// b 0x822cf3e0
	goto loc_822CF3E0;
loc_822CF6B8:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8424
	r29.s64 = ctx.r10.s64 + -8424;
	// bne 0x822cf6e4
	if (!cr0.eq) goto loc_822CF6E4;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26544
	ctx.r4.s64 = r11.s64 + 26544;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF6E4:
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
	// beq 0x822cf748
	if (cr0.eq) goto loc_822CF748;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,128(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 128);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822cf728
	if (!cr0.eq) goto loc_822CF728;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x822cf738
	goto loc_822CF738;
loc_822CF728:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_822CF738:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// b 0x822cf850
	goto loc_822CF850;
loc_822CF748:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8428
	r29.s64 = ctx.r10.s64 + -8428;
	// bne 0x822cf774
	if (!cr0.eq) goto loc_822CF774;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26528
	ctx.r4.s64 = r11.s64 + 26528;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF774:
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
	// beq 0x822cf7b8
	if (cr0.eq) goto loc_822CF7B8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,60
	ctx.r3.s64 = r25.s64 + 60;
	// bl 0x822bb350
	sub_822BB350(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822cf850
	goto loc_822CF850;
loc_822CF7B8:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8432
	r29.s64 = ctx.r10.s64 + -8432;
	// bne 0x822cf7e0
	if (!cr0.eq) goto loc_822CF7E0;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26504
	ctx.r4.s64 = r11.s64 + 26504;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822CF7E0:
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
	// beq 0x822cf804
	if (cr0.eq) goto loc_822CF804;
	// addi r3,r25,-4
	ctx.r3.s64 = r25.s64 + -4;
	// bl 0x822cee60
	sub_822CEE60(ctx, base);
	// b 0x822cf3e0
	goto loc_822CF3E0;
loc_822CF804:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822cf844
	if (cr6.eq) goto loc_822CF844;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cf850
	if (cr0.eq) goto loc_822CF850;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822cf5f0
	goto loc_822CF5F0;
loc_822CF844:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822CF84C:
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
loc_822CF850:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822CF854:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822CF358"))) PPC_WEAK_FUNC(sub_822CF358);
PPC_FUNC_IMPL(__imp__sub_822CF358) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8392
	r29.s64 = ctx.r10.s64 + -8392;
	// bne 0x822cf3c0
	if (!cr0.eq) goto loc_822CF3C0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,24280
	ctx.r4.s64 = r11.s64 + 24280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF3C0:
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
	// beq 0x822cf3e8
	if (cr0.eq) goto loc_822CF3E8;
	// addi r3,r25,-4
	ctx.r3.s64 = r25.s64 + -4;
	// bl 0x822cebe8
	sub_822CEBE8(ctx, base);
loc_822CF3E0:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x822cf84c
	goto loc_822CF84C;
loc_822CF3E8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8396
	r29.s64 = ctx.r10.s64 + -8396;
	// bne 0x822cf414
	if (!cr0.eq) goto loc_822CF414;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-15292
	ctx.r4.s64 = r11.s64 + -15292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF414:
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
	// beq 0x822cf44c
	if (cr0.eq) goto loc_822CF44C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,120(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 120);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x82334710
	sub_82334710(ctx, base);
	// b 0x822cf3e0
	goto loc_822CF3E0;
loc_822CF44C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8400
	r29.s64 = ctx.r10.s64 + -8400;
	// bne 0x822cf478
	if (!cr0.eq) goto loc_822CF478;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26596
	ctx.r4.s64 = r11.s64 + 26596;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF478:
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
	// beq 0x822cf4ac
	if (cr0.eq) goto loc_822CF4AC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r25,-4
	ctx.r3.s64 = r25.s64 + -4;
	// bl 0x822ceda0
	sub_822CEDA0(ctx, base);
	// b 0x822cf3e0
	goto loc_822CF3E0;
loc_822CF4AC:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8404
	r29.s64 = ctx.r10.s64 + -8404;
	// bne 0x822cf4d8
	if (!cr0.eq) goto loc_822CF4D8;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25292
	ctx.r4.s64 = r11.s64 + 25292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF4D8:
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
	// beq 0x822cf51c
	if (cr0.eq) goto loc_822CF51C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r25,-4
	ctx.r3.s64 = r25.s64 + -4;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x822cecc0
	sub_822CECC0(ctx, base);
	// b 0x822cf3e0
	goto loc_822CF3E0;
loc_822CF51C:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8408
	r29.s64 = ctx.r10.s64 + -8408;
	// bne 0x822cf548
	if (!cr0.eq) goto loc_822CF548;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26588
	ctx.r4.s64 = r11.s64 + 26588;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF548:
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
	// beq 0x822cf574
	if (cr0.eq) goto loc_822CF574;
	// lbz r11,124(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 124);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822cf854
	goto loc_822CF854;
loc_822CF574:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8412
	r29.s64 = ctx.r10.s64 + -8412;
	// bne 0x822cf5a0
	if (!cr0.eq) goto loc_822CF5A0;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26576
	ctx.r4.s64 = r11.s64 + 26576;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF5A0:
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
	// beq 0x822cf5fc
	if (cr0.eq) goto loc_822CF5FC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r25,-4
	ctx.r4.s64 = r25.s64 + -4;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822cf180
	sub_822CF180(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822cf5f8
	if (cr6.eq) goto loc_822CF5F8;
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
	// beq 0x822cf850
	if (cr0.eq) goto loc_822CF850;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_822CF5F0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822cf850
	goto loc_822CF850;
loc_822CF5F8:
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF5FC:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8416
	r29.s64 = ctx.r10.s64 + -8416;
	// bne 0x822cf628
	if (!cr0.eq) goto loc_822CF628;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26560
	ctx.r4.s64 = r11.s64 + 26560;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF628:
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
	// beq 0x822cf654
	if (cr0.eq) goto loc_822CF654;
	// lbz r11,152(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 152);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822cf854
	goto loc_822CF854;
loc_822CF654:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8420
	r29.s64 = ctx.r10.s64 + -8420;
	// bne 0x822cf680
	if (!cr0.eq) goto loc_822CF680;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26552
	ctx.r4.s64 = r11.s64 + 26552;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF680:
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
	// beq 0x822cf6b8
	if (cr0.eq) goto loc_822CF6B8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r25,-4
	ctx.r3.s64 = r25.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822cef88
	sub_822CEF88(ctx, base);
	// b 0x822cf3e0
	goto loc_822CF3E0;
loc_822CF6B8:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8424
	r29.s64 = ctx.r10.s64 + -8424;
	// bne 0x822cf6e4
	if (!cr0.eq) goto loc_822CF6E4;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26544
	ctx.r4.s64 = r11.s64 + 26544;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF6E4:
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
	// beq 0x822cf748
	if (cr0.eq) goto loc_822CF748;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,128(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 128);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822cf728
	if (!cr0.eq) goto loc_822CF728;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x822cf738
	goto loc_822CF738;
loc_822CF728:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_822CF738:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// b 0x822cf850
	goto loc_822CF850;
loc_822CF748:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8428
	r29.s64 = ctx.r10.s64 + -8428;
	// bne 0x822cf774
	if (!cr0.eq) goto loc_822CF774;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26528
	ctx.r4.s64 = r11.s64 + 26528;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8388);
loc_822CF774:
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
	// beq 0x822cf7b8
	if (cr0.eq) goto loc_822CF7B8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,60
	ctx.r3.s64 = r25.s64 + 60;
	// bl 0x822bb350
	sub_822BB350(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822cf850
	goto loc_822CF850;
loc_822CF7B8:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8432
	r29.s64 = ctx.r10.s64 + -8432;
	// bne 0x822cf7e0
	if (!cr0.eq) goto loc_822CF7E0;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-8388(r30)
	PPC_STORE_U32(r30.u32 + -8388, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,26504
	ctx.r4.s64 = r11.s64 + 26504;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822CF7E0:
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
	// beq 0x822cf804
	if (cr0.eq) goto loc_822CF804;
	// addi r3,r25,-4
	ctx.r3.s64 = r25.s64 + -4;
	// bl 0x822cee60
	sub_822CEE60(ctx, base);
	// b 0x822cf3e0
	goto loc_822CF3E0;
loc_822CF804:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822cf844
	if (cr6.eq) goto loc_822CF844;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822cf850
	if (cr0.eq) goto loc_822CF850;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822cf5f0
	goto loc_822CF5F0;
loc_822CF844:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822CF84C:
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
loc_822CF850:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822CF854:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822CF85C"))) PPC_WEAK_FUNC(sub_822CF85C);
PPC_FUNC_IMPL(__imp__sub_822CF85C) {
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
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
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

__attribute__((alias("__imp__sub_822CF884"))) PPC_WEAK_FUNC(sub_822CF884);
PPC_FUNC_IMPL(__imp__sub_822CF884) {
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
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
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

__attribute__((alias("__imp__sub_822CF8AC"))) PPC_WEAK_FUNC(sub_822CF8AC);
PPC_FUNC_IMPL(__imp__sub_822CF8AC) {
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
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
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

__attribute__((alias("__imp__sub_822CF8D4"))) PPC_WEAK_FUNC(sub_822CF8D4);
PPC_FUNC_IMPL(__imp__sub_822CF8D4) {
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
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
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

__attribute__((alias("__imp__sub_822CF8FC"))) PPC_WEAK_FUNC(sub_822CF8FC);
PPC_FUNC_IMPL(__imp__sub_822CF8FC) {
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
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
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

__attribute__((alias("__imp__sub_822CF924"))) PPC_WEAK_FUNC(sub_822CF924);
PPC_FUNC_IMPL(__imp__sub_822CF924) {
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
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
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

__attribute__((alias("__imp__sub_822CF94C"))) PPC_WEAK_FUNC(sub_822CF94C);
PPC_FUNC_IMPL(__imp__sub_822CF94C) {
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

