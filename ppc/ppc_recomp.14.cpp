#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8215C780"))) PPC_WEAK_FUNC(sub_8215C780);
PPC_FUNC_IMPL(__imp__sub_8215C780) {
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
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
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

__attribute__((alias("__imp__sub_8215C7AC"))) PPC_WEAK_FUNC(sub_8215C7AC);
PPC_FUNC_IMPL(__imp__sub_8215C7AC) {
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
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
	// bl 0x8215c018
	sub_8215C018(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C7D8"))) PPC_WEAK_FUNC(sub_8215C7D8);
PPC_FUNC_IMPL(__imp__sub_8215C7D8) {
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
	// addi r3,r11,92
	ctx.r3.s64 = r11.s64 + 92;
	// bl 0x82159808
	sub_82159808(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C804"))) PPC_WEAK_FUNC(sub_8215C804);
PPC_FUNC_IMPL(__imp__sub_8215C804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215C808"))) PPC_WEAK_FUNC(sub_8215C808);
PPC_FUNC_IMPL(__imp__sub_8215C808) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplw cr6,r26,r31
	cr6.compare<uint32_t>(r26.u32, r31.u32, xer);
	// beq cr6,0x8215c93c
	if (cr6.eq) goto loc_8215C93C;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r30,72
	r30.s64 = 72;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r25,r9,r30
	r25.s32 = ctx.r9.s32 / r30.s32;
	// divw r10,r10,r30
	ctx.r10.s32 = ctx.r10.s32 / r30.s32;
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// ble cr6,0x8215c878
	if (!cr6.gt) goto loc_8215C878;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215c2d8
	sub_8215C2D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215bd78
	sub_8215BD78(ctx, base);
	// mulli r11,r25,72
	r11.s64 = r25.s64 * 72;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8215c92c
	goto loc_8215C92C;
loc_8215C878:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r30
	ctx.r10.s32 = ctx.r10.s32 / r30.s32;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, xer);
	// blt cr6,0x8215c8cc
	if (cr6.lt) goto loc_8215C8CC;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r11
	r28.u64 = r11.u64;
	// subf r11,r29,r6
	r11.s64 = ctx.r6.s64 - r29.s64;
	// divw. r30,r11,r30
	r30.s32 = r11.s32 / r30.s32;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x8215c8bc
	if (!cr0.gt) goto loc_8215C8BC;
loc_8215C8A0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215a470
	sub_8215A470(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,72
	r29.s64 = r29.s64 + 72;
	// addi r28,r28,72
	r28.s64 = r28.s64 + 72;
	// bgt 0x8215c8a0
	if (cr0.gt) goto loc_8215C8A0;
loc_8215C8BC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8215bd28
	sub_8215BD28(ctx, base);
	// b 0x8215c92c
	goto loc_8215C92C;
loc_8215C8CC:
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mulli r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 * 72;
	// mr r27,r11
	r27.u64 = r11.u64;
	// subf r11,r28,r10
	r11.s64 = ctx.r10.s64 - r28.s64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// divw. r29,r11,r30
	r29.s32 = r11.s32 / r30.s32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x8215c904
	if (!cr0.gt) goto loc_8215C904;
loc_8215C8E8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215a470
	sub_8215A470(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,72
	r28.s64 = r28.s64 + 72;
	// addi r27,r27,72
	r27.s64 = r27.s64 + 72;
	// bgt 0x8215c8e8
	if (cr0.gt) goto loc_8215C8E8;
loc_8215C904:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// subf r11,r11,r5
	r11.s64 = ctx.r5.s64 - r11.s64;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// divw r11,r11,r30
	r11.s32 = r11.s32 / r30.s32;
	// mulli r11,r11,72
	r11.s64 = r11.s64 * 72;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8215bde8
	sub_8215BDE8(ctx, base);
loc_8215C92C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r25,72
	r11.s64 = r25.s64 * 72;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8215C93C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8215C948"))) PPC_WEAK_FUNC(sub_8215C948);
PPC_FUNC_IMPL(__imp__sub_8215C948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-13124(0)
	r16.u64 = PPC_LOAD_U32(-13124);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,72
	ctx.r10.s64 = 72;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r27.u32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x8215c9a8
	if (cr6.lt) goto loc_8215C9A8;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_8215C9A8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r25,r30,8
	r25.s64 = r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r24.u32);
	// bl 0x82158058
	sub_82158058(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215bf80
	sub_8215BF80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x8215ca10
	if (!cr6.eq) goto loc_8215CA10;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215a938
	sub_8215A938(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,72
	r29.s64 = r29.s64 + 72;
	// b 0x8215ca28
	goto loc_8215CA28;
loc_8215CA10:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215bee8
	sub_8215BEE8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8215CA28:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215ca50
	if (!cr0.eq) goto loc_8215CA50;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215bf80
	sub_8215BF80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8215CA50:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215be78
	sub_8215BE78(ctx, base);
	// mulli r11,r24,72
	r11.s64 = r24.s64 * 72;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8215C950"))) PPC_WEAK_FUNC(sub_8215C950);
PPC_FUNC_IMPL(__imp__sub_8215C950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,72
	ctx.r10.s64 = 72;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r27.u32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x8215c9a8
	if (cr6.lt) goto loc_8215C9A8;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_8215C9A8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r25,r30,8
	r25.s64 = r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r24.u32);
	// bl 0x82158058
	sub_82158058(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215bf80
	sub_8215BF80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x8215ca10
	if (!cr6.eq) goto loc_8215CA10;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215a938
	sub_8215A938(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,72
	r29.s64 = r29.s64 + 72;
	// b 0x8215ca28
	goto loc_8215CA28;
loc_8215CA10:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215bee8
	sub_8215BEE8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8215CA28:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215ca50
	if (!cr0.eq) goto loc_8215CA50;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215bf80
	sub_8215BF80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8215CA50:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215be78
	sub_8215BE78(ctx, base);
	// mulli r11,r24,72
	r11.s64 = r24.s64 * 72;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8215CA74"))) PPC_WEAK_FUNC(sub_8215CA74);
PPC_FUNC_IMPL(__imp__sub_8215CA74) {
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
	// lwz r16,-13124(0)
	r16.u64 = PPC_LOAD_U32(-13124);
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215bd28
	sub_8215BD28(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r3,r11,72
	ctx.r3.s64 = r11.s64 * 72;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
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
	// bl 0x8215c628
	sub_8215C628(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215cae8
	if (cr0.eq) goto loc_8215CAE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_8215CAE8:
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

__attribute__((alias("__imp__sub_8215CA7C"))) PPC_WEAK_FUNC(sub_8215CA7C);
PPC_FUNC_IMPL(__imp__sub_8215CA7C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
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
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215bd28
	sub_8215BD28(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r3,r11,72
	ctx.r3.s64 = r11.s64 * 72;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_8215CAB8"))) PPC_WEAK_FUNC(sub_8215CAB8);
PPC_FUNC_IMPL(__imp__sub_8215CAB8) {
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
	// bl 0x8215c628
	sub_8215C628(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215cae8
	if (cr0.eq) goto loc_8215CAE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_8215CAE8:
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

__attribute__((alias("__imp__sub_8215CB04"))) PPC_WEAK_FUNC(sub_8215CB04);
PPC_FUNC_IMPL(__imp__sub_8215CB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215CB08"))) PPC_WEAK_FUNC(sub_8215CB08);
PPC_FUNC_IMPL(__imp__sub_8215CB08) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,3060
	ctx.r6.s64 = r11.s64 + 3060;
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
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8215cb70
	if (cr0.eq) goto loc_8215CB70;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r4,r31,72
	ctx.r4.s64 = r31.s64 + 72;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x8215c808
	sub_8215C808(ctx, base);
loc_8215CB70:
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

__attribute__((alias("__imp__sub_8215CB88"))) PPC_WEAK_FUNC(sub_8215CB88);
PPC_FUNC_IMPL(__imp__sub_8215CB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8215cbdc
	if (cr6.eq) goto loc_8215CBDC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,72
	ctx.r8.s64 = 72;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x8215cbc8
	if (cr6.lt) goto loc_8215CBC8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x8215c130
	sub_8215C130(ctx, base);
	// b 0x8215cbdc
	goto loc_8215CBDC;
loc_8215CBC8:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8215c950
	sub_8215C950(ctx, base);
loc_8215CBDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CBEC"))) PPC_WEAK_FUNC(sub_8215CBEC);
PPC_FUNC_IMPL(__imp__sub_8215CBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215CBF0"))) PPC_WEAK_FUNC(sub_8215CBF0);
PPC_FUNC_IMPL(__imp__sub_8215CBF0) {
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
	// lwz r16,-13032(0)
	r16.u64 = PPC_LOAD_U32(-13032);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x8215cc70
	if (!cr6.eq) goto loc_8215CC70;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r9,72
	ctx.r9.s64 = 72;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// stw r8,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215cc68
	if (cr0.eq) goto loc_8215CC68;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215CC68:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215cd40
	goto loc_8215CD40;
loc_8215CC70:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mulli r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 * 72;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + r11.u64;
	// lha r9,8(r30)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// blt cr6,0x8215cd28
	if (cr6.lt) goto loc_8215CD28;
	// andi. r11,r26,19
	r11.u64 = r26.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215cd28
	if (!cr0.eq) goto loc_8215CD28;
	// cmpwi cr6,r26,8
	cr6.compare<int32_t>(r26.s32, 8, xer);
	// bne cr6,0x8215ccc8
	if (!cr6.eq) goto loc_8215CCC8;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215bcb8
	sub_8215BCB8(ctx, base);
	// b 0x8215cc68
	goto loc_8215CC68;
loc_8215CCC8:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// bne cr6,0x8215cd20
	if (!cr6.eq) goto loc_8215CD20;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8215a500
	sub_8215A500(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8215ada0
	sub_8215ADA0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215cd18
	if (cr0.eq) goto loc_8215CD18;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215cb88
	sub_8215CB88(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8215a6b8
	sub_8215A6B8(ctx, base);
	// b 0x8215cc68
	goto loc_8215CC68;
loc_8215CD18:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8215a6b8
	sub_8215A6B8(ctx, base);
loc_8215CD20:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215cd40
	goto loc_8215CD40;
loc_8215CD28:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215ada0
	sub_8215ADA0(ctx, base);
loc_8215CD40:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8215CBF8"))) PPC_WEAK_FUNC(sub_8215CBF8);
PPC_FUNC_IMPL(__imp__sub_8215CBF8) {
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
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x8215cc70
	if (!cr6.eq) goto loc_8215CC70;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r9,72
	ctx.r9.s64 = 72;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// stw r8,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215cc68
	if (cr0.eq) goto loc_8215CC68;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215CC68:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215cd40
	goto loc_8215CD40;
loc_8215CC70:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mulli r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 * 72;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + r11.u64;
	// lha r9,8(r30)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// blt cr6,0x8215cd28
	if (cr6.lt) goto loc_8215CD28;
	// andi. r11,r26,19
	r11.u64 = r26.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215cd28
	if (!cr0.eq) goto loc_8215CD28;
	// cmpwi cr6,r26,8
	cr6.compare<int32_t>(r26.s32, 8, xer);
	// bne cr6,0x8215ccc8
	if (!cr6.eq) goto loc_8215CCC8;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215bcb8
	sub_8215BCB8(ctx, base);
	// b 0x8215cc68
	goto loc_8215CC68;
loc_8215CCC8:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// bne cr6,0x8215cd20
	if (!cr6.eq) goto loc_8215CD20;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8215a500
	sub_8215A500(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8215ada0
	sub_8215ADA0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215cd18
	if (cr0.eq) goto loc_8215CD18;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215cb88
	sub_8215CB88(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8215a6b8
	sub_8215A6B8(ctx, base);
	// b 0x8215cc68
	goto loc_8215CC68;
loc_8215CD18:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8215a6b8
	sub_8215A6B8(ctx, base);
loc_8215CD20:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215cd40
	goto loc_8215CD40;
loc_8215CD28:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215ada0
	sub_8215ADA0(ctx, base);
loc_8215CD40:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8215CD48"))) PPC_WEAK_FUNC(sub_8215CD48);
PPC_FUNC_IMPL(__imp__sub_8215CD48) {
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

__attribute__((alias("__imp__sub_8215CD70"))) PPC_WEAK_FUNC(sub_8215CD70);
PPC_FUNC_IMPL(__imp__sub_8215CD70) {
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
	// bl 0x8215a6b8
	sub_8215A6B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CD98"))) PPC_WEAK_FUNC(sub_8215CD98);
PPC_FUNC_IMPL(__imp__sub_8215CD98) {
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
	// lwz r16,-12888(0)
	r16.u64 = PPC_LOAD_U32(-12888);
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,8780(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8780);
	// stw r27,8656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8656, r27.u32);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8776
	r29.s64 = ctx.r10.s64 + 8776;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8215ce0c
	if (!cr0.eq) goto loc_8215CE0C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8780(r30)
	PPC_STORE_U32(r30.u32 + 8780, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-12928
	ctx.r4.s64 = r11.s64 + -12928;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8780(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8780);
loc_8215CE0C:
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
	// beq 0x8215ce40
	if (cr0.eq) goto loc_8215CE40;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,52
	ctx.r3.s64 = r27.s64 + 52;
	// bl 0x82326b38
	sub_82326B38(ctx, base);
	// b 0x8215cf04
	goto loc_8215CF04;
loc_8215CE40:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8772
	r29.s64 = ctx.r10.s64 + 8772;
	// bne 0x8215ce6c
	if (!cr0.eq) goto loc_8215CE6C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,8780(r30)
	PPC_STORE_U32(r30.u32 + 8780, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-12940
	ctx.r4.s64 = r11.s64 + -12940;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8780(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8780);
loc_8215CE6C:
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
	// beq 0x8215cea0
	if (cr0.eq) goto loc_8215CEA0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,72
	ctx.r3.s64 = r27.s64 + 72;
	// bl 0x8215cbf8
	sub_8215CBF8(ctx, base);
	// b 0x8215cf04
	goto loc_8215CF04;
loc_8215CEA0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8768
	r29.s64 = ctx.r10.s64 + 8768;
	// bne 0x8215cec8
	if (!cr0.eq) goto loc_8215CEC8;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,8780(r30)
	PPC_STORE_U32(r30.u32 + 8780, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-12952
	ctx.r4.s64 = r11.s64 + -12952;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8215CEC8:
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
	// beq 0x8215cf00
	if (cr0.eq) goto loc_8215CF00;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// addi r3,r11,8652
	ctx.r3.s64 = r11.s64 + 8652;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x8215cf04
	goto loc_8215CF04;
loc_8215CF00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215CF04:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8215CDA0"))) PPC_WEAK_FUNC(sub_8215CDA0);
PPC_FUNC_IMPL(__imp__sub_8215CDA0) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,8780(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8780);
	// stw r27,8656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8656, r27.u32);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8776
	r29.s64 = ctx.r10.s64 + 8776;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8215ce0c
	if (!cr0.eq) goto loc_8215CE0C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8780(r30)
	PPC_STORE_U32(r30.u32 + 8780, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-12928
	ctx.r4.s64 = r11.s64 + -12928;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8780(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8780);
loc_8215CE0C:
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
	// beq 0x8215ce40
	if (cr0.eq) goto loc_8215CE40;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,52
	ctx.r3.s64 = r27.s64 + 52;
	// bl 0x82326b38
	sub_82326B38(ctx, base);
	// b 0x8215cf04
	goto loc_8215CF04;
loc_8215CE40:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8772
	r29.s64 = ctx.r10.s64 + 8772;
	// bne 0x8215ce6c
	if (!cr0.eq) goto loc_8215CE6C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,8780(r30)
	PPC_STORE_U32(r30.u32 + 8780, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-12940
	ctx.r4.s64 = r11.s64 + -12940;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8780(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8780);
loc_8215CE6C:
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
	// beq 0x8215cea0
	if (cr0.eq) goto loc_8215CEA0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,72
	ctx.r3.s64 = r27.s64 + 72;
	// bl 0x8215cbf8
	sub_8215CBF8(ctx, base);
	// b 0x8215cf04
	goto loc_8215CF04;
loc_8215CEA0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8768
	r29.s64 = ctx.r10.s64 + 8768;
	// bne 0x8215cec8
	if (!cr0.eq) goto loc_8215CEC8;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,8780(r30)
	PPC_STORE_U32(r30.u32 + 8780, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-12952
	ctx.r4.s64 = r11.s64 + -12952;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8215CEC8:
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
	// beq 0x8215cf00
	if (cr0.eq) goto loc_8215CF00;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// addi r3,r11,8652
	ctx.r3.s64 = r11.s64 + 8652;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x8215cf04
	goto loc_8215CF04;
loc_8215CF00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215CF04:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8215CF0C"))) PPC_WEAK_FUNC(sub_8215CF0C);
PPC_FUNC_IMPL(__imp__sub_8215CF0C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8780
	r11.s64 = r11.s64 + 8780;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8780
	ctx.r10.s64 = ctx.r10.s64 + 8780;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CF34"))) PPC_WEAK_FUNC(sub_8215CF34);
PPC_FUNC_IMPL(__imp__sub_8215CF34) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8780
	r11.s64 = r11.s64 + 8780;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8780
	ctx.r10.s64 = ctx.r10.s64 + 8780;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CF5C"))) PPC_WEAK_FUNC(sub_8215CF5C);
PPC_FUNC_IMPL(__imp__sub_8215CF5C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8780
	r11.s64 = r11.s64 + 8780;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8780
	ctx.r10.s64 = ctx.r10.s64 + 8780;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CF84"))) PPC_WEAK_FUNC(sub_8215CF84);
PPC_FUNC_IMPL(__imp__sub_8215CF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215CF88"))) PPC_WEAK_FUNC(sub_8215CF88);
PPC_FUNC_IMPL(__imp__sub_8215CF88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,72
	ctx.r8.s64 = 72;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r7,r8
	ctx.r7.s32 = ctx.r7.s32 / ctx.r8.s32;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x8215cfd8
	if (!cr6.lt) goto loc_8215CFD8;
	// mulli r11,r11,72
	r11.s64 = r11.s64 * 72;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x8215cfec
	if (cr6.eq) goto loc_8215CFEC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x8215c0c0
	sub_8215C0C0(ctx, base);
	// b 0x8215cfec
	goto loc_8215CFEC;
loc_8215CFD8:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x8215cb88
	sub_8215CB88(ctx, base);
loc_8215CFEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CFFC"))) PPC_WEAK_FUNC(sub_8215CFFC);
PPC_FUNC_IMPL(__imp__sub_8215CFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215D000"))) PPC_WEAK_FUNC(sub_8215D000);
PPC_FUNC_IMPL(__imp__sub_8215D000) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-12744(0)
	r16.u64 = PPC_LOAD_U32(-12744);
	// mflr r12
	// bl 0x8239bcc4
	// addi r31,r1,-352
	r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x8215d280
	if (cr6.eq) goto loc_8215D280;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r15,-32136
	r15.s64 = -2106064896;
	// lwz r11,8788(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8788);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8215d068
	if (!cr0.eq) goto loc_8215D068;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8788(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8788, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-12780
	ctx.r4.s64 = r11.s64 + -12780;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,8784(r15)
	PPC_STORE_U32(r15.u32 + 8784, ctx.r4.u32);
	// b 0x8215d06c
	goto loc_8215D06C;
loc_8215D068:
	// lwz r4,8784(r15)
	ctx.r4.u64 = PPC_LOAD_U32(r15.u32 + 8784);
loc_8215D06C:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// li r19,0
	r19.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8215d08c
	if (!cr0.eq) goto loc_8215D08C;
	// mr r11,r19
	r11.u64 = r19.u64;
	// b 0x8215d09c
	goto loc_8215D09C;
loc_8215D08C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8215D09C:
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r3,8784(r15)
	ctx.r3.u64 = PPC_LOAD_U32(r15.u32 + 8784);
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215d0c8
	if (cr0.eq) goto loc_8215D0C8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215D0C8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-12792
	ctx.r4.s64 = r11.s64 + -12792;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,2996
	ctx.r4.s64 = r11.s64 + 2996;
	// stw r10,84(r17)
	PPC_STORE_U32(r17.u32 + 84, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8215a500
	sub_8215A500(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// addi r22,r17,72
	r22.s64 = r17.s64 + 72;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8215cf88
	sub_8215CF88(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8215a6b8
	sub_8215A6B8(ctx, base);
	// li r18,1
	r18.s64 = 1;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8215d258
	if (!cr6.gt) goto loc_8215D258;
	// li r20,8
	r20.s64 = 8;
	// li r21,72
	r21.s64 = 72;
	// li r24,12
	r24.s64 = 12;
loc_8215D160:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r11,r21,r11
	r11.u64 = r21.u64 + r11.u64;
	// add r3,r20,r10
	ctx.r3.u64 = r20.u64 + ctx.r10.u64;
	// addi r29,r11,-72
	r29.s64 = r11.s64 + -72;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// addi r11,r31,104
	r11.s64 = r31.s64 + 104;
	// addi r30,r29,40
	r30.s64 = r29.s64 + 40;
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// std r19,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r19.u64);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r19,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r19.u32);
	// subf r9,r10,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r10.s64;
	// divw r9,r9,r24
	ctx.r9.s32 = ctx.r9.s32 / r24.s32;
	// lha r11,8(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8215d1c4
	if (!cr6.lt) goto loc_8215D1C4;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8218b408
	sub_8218B408(ctx, base);
	// b 0x8215d1dc
	goto loc_8215D1DC;
loc_8215D1C4:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r6,r31,104
	ctx.r6.s64 = r31.s64 + 104;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r24
	ctx.r10.s32 = ctx.r10.s32 / r24.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x8215abf0
	sub_8215ABF0(ctx, base);
loc_8215D1DC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r25,r19
	r25.u64 = r19.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r24
	r11.s32 = r11.s32 / r24.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215d240
	if (cr0.eq) goto loc_8215D240;
	// mr r26,r19
	r26.u64 = r19.u64;
	// mr r27,r19
	r27.u64 = r19.u64;
loc_8215D1FC:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r23,r27,r11
	r23.u64 = r27.u64 + r11.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r10,r26
	r11.u64 = ctx.r10.u64 + r26.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// stw r3,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r24
	r11.s32 = r11.s32 / r24.s32;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x8215d1fc
	if (cr6.lt) goto loc_8215D1FC;
loc_8215D240:
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r21,r21,72
	r21.s64 = r21.s64 + 72;
	// addi r20,r20,8
	r20.s64 = r20.s64 + 8;
	// cmpw cr6,r18,r11
	cr6.compare<int32_t>(r18.s32, r11.s32, xer);
	// blt cr6,0x8215d160
	if (cr6.lt) goto loc_8215D160;
loc_8215D258:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8215b3c0
	sub_8215B3C0(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,8784(r15)
	ctx.r3.u64 = PPC_LOAD_U32(r15.u32 + 8784);
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215d280
	if (cr0.eq) goto loc_8215D280;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215D280:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x823151e0
	sub_823151E0(ctx, base);
	// addi r1,r31,352
	ctx.r1.s64 = r31.s64 + 352;
	// b 0x8239bd14
	return;
}

__attribute__((alias("__imp__sub_8215D008"))) PPC_WEAK_FUNC(sub_8215D008);
PPC_FUNC_IMPL(__imp__sub_8215D008) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r1,-352
	r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x8215d280
	if (cr6.eq) goto loc_8215D280;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r15,-32136
	r15.s64 = -2106064896;
	// lwz r11,8788(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8788);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8215d068
	if (!cr0.eq) goto loc_8215D068;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8788(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8788, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-12780
	ctx.r4.s64 = r11.s64 + -12780;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,8784(r15)
	PPC_STORE_U32(r15.u32 + 8784, ctx.r4.u32);
	// b 0x8215d06c
	goto loc_8215D06C;
loc_8215D068:
	// lwz r4,8784(r15)
	ctx.r4.u64 = PPC_LOAD_U32(r15.u32 + 8784);
loc_8215D06C:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// li r19,0
	r19.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8215d08c
	if (!cr0.eq) goto loc_8215D08C;
	// mr r11,r19
	r11.u64 = r19.u64;
	// b 0x8215d09c
	goto loc_8215D09C;
loc_8215D08C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8215D09C:
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r3,8784(r15)
	ctx.r3.u64 = PPC_LOAD_U32(r15.u32 + 8784);
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215d0c8
	if (cr0.eq) goto loc_8215D0C8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215D0C8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-12792
	ctx.r4.s64 = r11.s64 + -12792;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,2996
	ctx.r4.s64 = r11.s64 + 2996;
	// stw r10,84(r17)
	PPC_STORE_U32(r17.u32 + 84, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8215a500
	sub_8215A500(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// addi r22,r17,72
	r22.s64 = r17.s64 + 72;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8215cf88
	sub_8215CF88(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8215a6b8
	sub_8215A6B8(ctx, base);
	// li r18,1
	r18.s64 = 1;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8215d258
	if (!cr6.gt) goto loc_8215D258;
	// li r20,8
	r20.s64 = 8;
	// li r21,72
	r21.s64 = 72;
	// li r24,12
	r24.s64 = 12;
loc_8215D160:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r11,r21,r11
	r11.u64 = r21.u64 + r11.u64;
	// add r3,r20,r10
	ctx.r3.u64 = r20.u64 + ctx.r10.u64;
	// addi r29,r11,-72
	r29.s64 = r11.s64 + -72;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// addi r11,r31,104
	r11.s64 = r31.s64 + 104;
	// addi r30,r29,40
	r30.s64 = r29.s64 + 40;
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// std r19,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r19.u64);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r19,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r19.u32);
	// subf r9,r10,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r10.s64;
	// divw r9,r9,r24
	ctx.r9.s32 = ctx.r9.s32 / r24.s32;
	// lha r11,8(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8215d1c4
	if (!cr6.lt) goto loc_8215D1C4;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8218b408
	sub_8218B408(ctx, base);
	// b 0x8215d1dc
	goto loc_8215D1DC;
loc_8215D1C4:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r6,r31,104
	ctx.r6.s64 = r31.s64 + 104;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r24
	ctx.r10.s32 = ctx.r10.s32 / r24.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x8215abf0
	sub_8215ABF0(ctx, base);
loc_8215D1DC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r25,r19
	r25.u64 = r19.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r24
	r11.s32 = r11.s32 / r24.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215d240
	if (cr0.eq) goto loc_8215D240;
	// mr r26,r19
	r26.u64 = r19.u64;
	// mr r27,r19
	r27.u64 = r19.u64;
loc_8215D1FC:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r23,r27,r11
	r23.u64 = r27.u64 + r11.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r10,r26
	r11.u64 = ctx.r10.u64 + r26.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// stw r3,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r24
	r11.s32 = r11.s32 / r24.s32;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x8215d1fc
	if (cr6.lt) goto loc_8215D1FC;
loc_8215D240:
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r21,r21,72
	r21.s64 = r21.s64 + 72;
	// addi r20,r20,8
	r20.s64 = r20.s64 + 8;
	// cmpw cr6,r18,r11
	cr6.compare<int32_t>(r18.s32, r11.s32, xer);
	// blt cr6,0x8215d160
	if (cr6.lt) goto loc_8215D160;
loc_8215D258:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8215b3c0
	sub_8215B3C0(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,8784(r15)
	ctx.r3.u64 = PPC_LOAD_U32(r15.u32 + 8784);
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215d280
	if (cr0.eq) goto loc_8215D280;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215D280:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x823151e0
	sub_823151E0(ctx, base);
	// addi r1,r31,352
	ctx.r1.s64 = r31.s64 + 352;
	// b 0x8239bd14
	return;
}

__attribute__((alias("__imp__sub_8215D294"))) PPC_WEAK_FUNC(sub_8215D294);
PPC_FUNC_IMPL(__imp__sub_8215D294) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8788
	r11.s64 = r11.s64 + 8788;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8788
	ctx.r10.s64 = ctx.r10.s64 + 8788;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D2BC"))) PPC_WEAK_FUNC(sub_8215D2BC);
PPC_FUNC_IMPL(__imp__sub_8215D2BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
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

__attribute__((alias("__imp__sub_8215D2E4"))) PPC_WEAK_FUNC(sub_8215D2E4);
PPC_FUNC_IMPL(__imp__sub_8215D2E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
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

__attribute__((alias("__imp__sub_8215D30C"))) PPC_WEAK_FUNC(sub_8215D30C);
PPC_FUNC_IMPL(__imp__sub_8215D30C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8215a6b8
	sub_8215A6B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D334"))) PPC_WEAK_FUNC(sub_8215D334);
PPC_FUNC_IMPL(__imp__sub_8215D334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215D338"))) PPC_WEAK_FUNC(sub_8215D338);
PPC_FUNC_IMPL(__imp__sub_8215D338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lha r11,6(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 6));
	// lha r8,0(r3)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 0));
	// lha r10,4(r3)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 4));
	// lha r9,2(r3)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 2));
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r11.u64);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// std r10,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r10.u64);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r11.u64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f13,-24(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f10,f0
	ctx.f10.f64 = double(float(f0.f64));
	// lfs f0,-12640(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12640);
	f0.f64 = double(temp.f32);
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f13,12(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmuls f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmuls f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * f0.f64));
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f0,f7,f0
	f0.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D3B8"))) PPC_WEAK_FUNC(sub_8215D3B8);
PPC_FUNC_IMPL(__imp__sub_8215D3B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f31,-12632(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12632);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f30,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f30.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmadds f0,f0,f31,f30
	f0.f64 = double(float(f0.f64 * f31.f64 + f30.f64));
	// lfs f29,-12636(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12636);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x8215d410
	if (!cr6.gt) goto loc_8215D410;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x8215d41c
	goto loc_8215D41C;
loc_8215D410:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f29.f64);
	// bge cr6,0x8215d41c
	if (!cr6.lt) goto loc_8215D41C;
	// fmr f0,f29
	f0.f64 = f29.f64;
loc_8215D41C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// bl 0x8239da30
	sub_8239DA30(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f30
	f0.f64 = double(float(f0.f64 * f31.f64 + f30.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x8215d450
	if (!cr6.gt) goto loc_8215D450;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x8215d45c
	goto loc_8215D45C;
loc_8215D450:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f29.f64);
	// bge cr6,0x8215d45c
	if (!cr6.lt) goto loc_8215D45C;
	// fmr f0,f29
	f0.f64 = f29.f64;
loc_8215D45C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// bl 0x8239da30
	sub_8239DA30(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f30
	f0.f64 = double(float(f0.f64 * f31.f64 + f30.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x8215d490
	if (!cr6.gt) goto loc_8215D490;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x8215d49c
	goto loc_8215D49C;
loc_8215D490:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f29.f64);
	// bge cr6,0x8215d49c
	if (!cr6.lt) goto loc_8215D49C;
	// fmr f0,f29
	f0.f64 = f29.f64;
loc_8215D49C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// bl 0x8239da30
	sub_8239DA30(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,4(r30)
	PPC_STORE_U16(r30.u32 + 4, r11.u16);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f30
	f0.f64 = double(float(f0.f64 * f31.f64 + f30.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x8215d4d0
	if (!cr6.gt) goto loc_8215D4D0;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x8215d4dc
	goto loc_8215D4DC;
loc_8215D4D0:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f29.f64);
	// bge cr6,0x8215d4dc
	if (!cr6.lt) goto loc_8215D4DC;
	// fmr f0,f29
	f0.f64 = f29.f64;
loc_8215D4DC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// bl 0x8239da30
	sub_8239DA30(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,6(r30)
	PPC_STORE_U16(r30.u32 + 6, r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-48(r1)
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D51C"))) PPC_WEAK_FUNC(sub_8215D51C);
PPC_FUNC_IMPL(__imp__sub_8215D51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215D520"))) PPC_WEAK_FUNC(sub_8215D520);
PPC_FUNC_IMPL(__imp__sub_8215D520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8215d5b0
	goto loc_8215D5B0;
loc_8215D528:
	// cmpwi cr6,r10,46
	cr6.compare<int32_t>(ctx.r10.s32, 46, xer);
	// bne cr6,0x8215d5ac
	if (!cr6.eq) goto loc_8215D5AC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// beq cr6,0x8215d594
	if (cr6.eq) goto loc_8215D594;
	// cmpwi cr6,r10,112
	cr6.compare<int32_t>(ctx.r10.s32, 112, xer);
	// beq cr6,0x8215d5cc
	if (cr6.eq) goto loc_8215D5CC;
	// cmpwi cr6,r10,113
	cr6.compare<int32_t>(ctx.r10.s32, 113, xer);
	// beq cr6,0x8215d5c4
	if (cr6.eq) goto loc_8215D5C4;
	// cmpwi cr6,r10,114
	cr6.compare<int32_t>(ctx.r10.s32, 114, xer);
	// beq cr6,0x8215d56c
	if (cr6.eq) goto loc_8215D56C;
	// cmpwi cr6,r10,115
	cr6.compare<int32_t>(ctx.r10.s32, 115, xer);
	// bne cr6,0x8215d5ac
	if (!cr6.eq) goto loc_8215D5AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8215D56C:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,120
	cr6.compare<int32_t>(ctx.r10.s32, 120, xer);
	// blt cr6,0x8215d5ac
	if (cr6.lt) goto loc_8215D5AC;
	// cmpwi cr6,r10,122
	cr6.compare<int32_t>(ctx.r10.s32, 122, xer);
	// bgt cr6,0x8215d5ac
	if (cr6.gt) goto loc_8215D5AC;
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// addi r3,r11,-117
	ctx.r3.s64 = r11.s64 + -117;
	// blr 
	return;
loc_8215D594:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,120
	cr6.compare<int32_t>(ctx.r10.s32, 120, xer);
	// blt cr6,0x8215d5ac
	if (cr6.lt) goto loc_8215D5AC;
	// cmpwi cr6,r10,122
	cr6.compare<int32_t>(ctx.r10.s32, 122, xer);
	// ble cr6,0x8215d5d4
	if (!cr6.gt) goto loc_8215D5D4;
loc_8215D5AC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_8215D5B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8215d528
	if (!cr0.eq) goto loc_8215D528;
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_8215D5C4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8215D5CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8215D5D4:
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// addi r3,r11,-114
	ctx.r3.s64 = r11.s64 + -114;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D5E4"))) PPC_WEAK_FUNC(sub_8215D5E4);
PPC_FUNC_IMPL(__imp__sub_8215D5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215D5E8"))) PPC_WEAK_FUNC(sub_8215D5E8);
PPC_FUNC_IMPL(__imp__sub_8215D5E8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
loc_8215D60C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x8215d60c
	if (!cr0.eq) goto loc_8215D60C;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,5688
	r11.s64 = r11.s64 + 5688;
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r31,r10,r11
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x8239d9f0
	sub_8239D9F0(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
loc_8215D640:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x8215d640
	if (!cr0.eq) goto loc_8215D640;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

__attribute__((alias("__imp__sub_8215D680"))) PPC_WEAK_FUNC(sub_8215D680);
PPC_FUNC_IMPL(__imp__sub_8215D680) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,104(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// b 0x8239cd50
	sub_8239CD50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215D690"))) PPC_WEAK_FUNC(sub_8215D690);
PPC_FUNC_IMPL(__imp__sub_8215D690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r11,r3,108
	r11.s64 = ctx.r3.s64 + 108;
	// li r10,10
	ctx.r10.s64 = 10;
loc_8215D698:
	// lwz r9,-44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -44);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x8215d698
	if (!cr0.eq) goto loc_8215D698;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D6B4"))) PPC_WEAK_FUNC(sub_8215D6B4);
PPC_FUNC_IMPL(__imp__sub_8215D6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215D6B8"))) PPC_WEAK_FUNC(sub_8215D6B8);
PPC_FUNC_IMPL(__imp__sub_8215D6B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
loc_8215D6C0:
	// addi r10,r11,7
	ctx.r10.s64 = r11.s64 + 7;
	// addi r9,r11,6
	ctx.r9.s64 = r11.s64 + 6;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// blt cr6,0x8215d70c
	if (cr6.lt) goto loc_8215D70C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq cr6,0x8215d700
	if (cr6.eq) goto loc_8215D700;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x8215d710
	goto loc_8215D710;
loc_8215D700:
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// b 0x8215d710
	goto loc_8215D710;
loc_8215D70C:
	// li r10,16
	ctx.r10.s64 = 16;
loc_8215D710:
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,17
	ctx.r7.s64 = r11.s64 + 17;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// blt cr6,0x8215d6c0
	if (cr6.lt) goto loc_8215D6C0;
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D750"))) PPC_WEAK_FUNC(sub_8215D750);
PPC_FUNC_IMPL(__imp__sub_8215D750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// b 0x8215d6b8
	sub_8215D6B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215D764"))) PPC_WEAK_FUNC(sub_8215D764);
PPC_FUNC_IMPL(__imp__sub_8215D764) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D768"))) PPC_WEAK_FUNC(sub_8215D768);
PPC_FUNC_IMPL(__imp__sub_8215D768) {
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
	// addi r30,r31,108
	r30.s64 = r31.s64 + 108;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-25288
	ctx.r4.s64 = r11.s64 + -25288;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r10,10
	ctx.r10.s64 = 10;
loc_8215D7A8:
	// lwz r9,-44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -44);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x8215d7a8
	if (!cr0.eq) goto loc_8215D7A8;
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

__attribute__((alias("__imp__sub_8215D7D8"))) PPC_WEAK_FUNC(sub_8215D7D8);
PPC_FUNC_IMPL(__imp__sub_8215D7D8) {
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
	// beq 0x8215d818
	if (cr0.eq) goto loc_8215D818;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,5728
	ctx.r3.s64 = r11.s64 + 5728;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8215d820
	goto loc_8215D820;
loc_8215D818:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8215D820:
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
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

__attribute__((alias("__imp__sub_8215D83C"))) PPC_WEAK_FUNC(sub_8215D83C);
PPC_FUNC_IMPL(__imp__sub_8215D83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215D840"))) PPC_WEAK_FUNC(sub_8215D840);
PPC_FUNC_IMPL(__imp__sub_8215D840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82357718
	sub_82357718(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82357598
	sub_82357598(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D888"))) PPC_WEAK_FUNC(sub_8215D888);
PPC_FUNC_IMPL(__imp__sub_8215D888) {
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
	// beq 0x8215d8c8
	if (cr0.eq) goto loc_8215D8C8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,5788
	ctx.r3.s64 = r11.s64 + 5788;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8215d8d0
	goto loc_8215D8D0;
loc_8215D8C8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8215D8D0:
	// rlwinm r3,r31,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
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

__attribute__((alias("__imp__sub_8215D8EC"))) PPC_WEAK_FUNC(sub_8215D8EC);
PPC_FUNC_IMPL(__imp__sub_8215D8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215D8F0"))) PPC_WEAK_FUNC(sub_8215D8F0);
PPC_FUNC_IMPL(__imp__sub_8215D8F0) {
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
	// lwz r16,-12544(0)
	r16.u64 = PPC_LOAD_U32(-12544);
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x8215d950
	if (!cr6.eq) goto loc_8215D950;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
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
	// beq 0x8215d96c
	if (cr0.eq) goto loc_8215D96C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8215d96c
	goto loc_8215D96C;
loc_8215D950:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8215D96C:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8215D8F8"))) PPC_WEAK_FUNC(sub_8215D8F8);
PPC_FUNC_IMPL(__imp__sub_8215D8F8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x8215d950
	if (!cr6.eq) goto loc_8215D950;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
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
	// beq 0x8215d96c
	if (cr0.eq) goto loc_8215D96C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8215d96c
	goto loc_8215D96C;
loc_8215D950:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8215D96C:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8215D988"))) PPC_WEAK_FUNC(sub_8215D988);
PPC_FUNC_IMPL(__imp__sub_8215D988) {
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

__attribute__((alias("__imp__sub_8215D9B0"))) PPC_WEAK_FUNC(sub_8215D9B0);
PPC_FUNC_IMPL(__imp__sub_8215D9B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215da04
	if (cr0.eq) goto loc_8215DA04;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f0,2552(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	f0.f64 = double(temp.f32);
loc_8215D9D8:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8215da0c
	if (cr6.lt) goto loc_8215DA0C;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8215d9d8
	if (cr6.lt) goto loc_8215D9D8;
loc_8215DA04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8215DA0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DA14"))) PPC_WEAK_FUNC(sub_8215DA14);
PPC_FUNC_IMPL(__imp__sub_8215DA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215DA18"))) PPC_WEAK_FUNC(sub_8215DA18);
PPC_FUNC_IMPL(__imp__sub_8215DA18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8215DA38:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stfs f1,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8215da38
	if (cr6.lt) goto loc_8215DA38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DA68"))) PPC_WEAK_FUNC(sub_8215DA68);
PPC_FUNC_IMPL(__imp__sub_8215DA68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8215d520
	sub_8215D520(ctx, base);
	// addi r11,r3,7
	r11.s64 = ctx.r3.s64 + 7;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// blt cr6,0x8215dabc
	if (cr6.lt) goto loc_8215DABC;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq cr6,0x8215dab0
	if (cr6.eq) goto loc_8215DAB0;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// b 0x8215dac0
	goto loc_8215DAC0;
loc_8215DAB0:
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// b 0x8215dac0
	goto loc_8215DAC0;
loc_8215DABC:
	// li r8,16
	ctx.r8.s64 = 16;
loc_8215DAC0:
	// addi r11,r3,6
	r11.s64 = ctx.r3.s64 + 6;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x8215db14
	if (!cr6.lt) goto loc_8215DB14;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8215DAEC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8215db18
	if (!cr0.eq) goto loc_8215DB18;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x8215daec
	if (cr6.lt) goto loc_8215DAEC;
loc_8215DB14:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8215DB18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DB28"))) PPC_WEAK_FUNC(sub_8215DB28);
PPC_FUNC_IMPL(__imp__sub_8215DB28) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8215d520
	sub_8215D520(ctx, base);
	// addi r11,r3,7
	r11.s64 = ctx.r3.s64 + 7;
	// addi r10,r3,6
	ctx.r10.s64 = ctx.r3.s64 + 6;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// bge cr6,0x8215db90
	if (!cr6.lt) goto loc_8215DB90;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r11,r3,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_8215DB6C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8215db94
	if (!cr0.eq) goto loc_8215DB94;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// blt cr6,0x8215db6c
	if (cr6.lt) goto loc_8215DB6C;
loc_8215DB90:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8215DB94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DBA4"))) PPC_WEAK_FUNC(sub_8215DBA4);
PPC_FUNC_IMPL(__imp__sub_8215DBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215DBA8"))) PPC_WEAK_FUNC(sub_8215DBA8);
PPC_FUNC_IMPL(__imp__sub_8215DBA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x8215da68
	sub_8215DA68(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8215dbcc
	if (!cr6.eq) goto loc_8215DBCC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215dbd4
	goto loc_8215DBD4;
loc_8215DBCC:
	// lwz r11,108(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 108);
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
loc_8215DBD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DBE4"))) PPC_WEAK_FUNC(sub_8215DBE4);
PPC_FUNC_IMPL(__imp__sub_8215DBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215DBE8"))) PPC_WEAK_FUNC(sub_8215DBE8);
PPC_FUNC_IMPL(__imp__sub_8215DBE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215df1c
	if (!cr0.eq) goto loc_8215DF1C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r11
	r31.u64 = r11.u64;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x8215dd78
	if (!cr6.eq) goto loc_8215DD78;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8215dc88
	if (!cr6.gt) goto loc_8215DC88;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,108(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// b 0x8215dc80
	goto loc_8215DC80;
loc_8215DC40:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8215dc4c
	goto loc_8215DC4C;
loc_8215DC48:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_8215DC4C:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// subf r6,r6,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r6.s64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x8215dc48
	if (!cr0.eq) goto loc_8215DC48;
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_8215DC80:
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x8215dc40
	if (!cr6.eq) goto loc_8215DC40;
loc_8215DC88:
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8215dd04
	if (!cr6.gt) goto loc_8215DD04;
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,116(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x8215dcfc
	goto loc_8215DCFC;
loc_8215DCB8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8215dcc4
	goto loc_8215DCC4;
loc_8215DCC0:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_8215DCC4:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// subf r6,r6,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r6.s64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x8215dcc0
	if (!cr0.eq) goto loc_8215DCC0;
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_8215DCFC:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x8215dcb8
	if (!cr6.eq) goto loc_8215DCB8;
loc_8215DD04:
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8215df1c
	if (!cr6.gt) goto loc_8215DF1C;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x8215dd6c
	goto loc_8215DD6C;
loc_8215DD34:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8215dd40
	goto loc_8215DD40;
loc_8215DD3C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8215DD40:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// subf r6,r6,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r6.s64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x8215dd3c
	if (!cr0.eq) goto loc_8215DD3C;
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8215DD6C:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x8215dd34
	if (!cr6.eq) goto loc_8215DD34;
	// b 0x8215df1c
	goto loc_8215DF1C;
loc_8215DD78:
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8215ddfc
	if (!cr6.gt) goto loc_8215DDFC;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,108(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// b 0x8215ddf4
	goto loc_8215DDF4;
loc_8215DD94:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8215dda0
	goto loc_8215DDA0;
loc_8215DD9C:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_8215DDA0:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne 0x8215dd9c
	if (!cr0.eq) goto loc_8215DD9C;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_8215DDF4:
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x8215dd94
	if (!cr6.eq) goto loc_8215DD94;
loc_8215DDFC:
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8215dea4
	if (!cr6.gt) goto loc_8215DEA4;
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,116(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x8215de9c
	goto loc_8215DE9C;
loc_8215DE2C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8215de38
	goto loc_8215DE38;
loc_8215DE34:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_8215DE38:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne 0x8215de34
	if (!cr0.eq) goto loc_8215DE34;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// addi r6,r10,12
	ctx.r6.s64 = ctx.r10.s64 + 12;
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8215DE9C:
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x8215de2c
	if (!cr6.eq) goto loc_8215DE2C;
loc_8215DEA4:
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8215df1c
	if (!cr6.gt) goto loc_8215DF1C;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x8215df14
	goto loc_8215DF14;
loc_8215DED4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8215dee0
	goto loc_8215DEE0;
loc_8215DEDC:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8215DEE0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// subf r6,r6,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r6.s64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x8215dedc
	if (!cr0.eq) goto loc_8215DEDC;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,0(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8215DF14:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x8215ded4
	if (!cr6.eq) goto loc_8215DED4;
loc_8215DF1C:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DF24"))) PPC_WEAK_FUNC(sub_8215DF24);
PPC_FUNC_IMPL(__imp__sub_8215DF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215DF28"))) PPC_WEAK_FUNC(sub_8215DF28);
PPC_FUNC_IMPL(__imp__sub_8215DF28) {
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
	// mflr r12
	// bl 0x8239bcfc
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215e3b8
	if (!cr0.eq) goto loc_8215E3B8;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8215e008
	if (!cr6.gt) goto loc_8215E008;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r8,108(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,108(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// b 0x8215e000
	goto loc_8215E000;
loc_8215DF78:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8215df88
	goto loc_8215DF88;
loc_8215DF80:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_8215DF88:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r6,r6,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r6.s64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x8215df80
	if (!cr0.eq) goto loc_8215DF80;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// fmadds f0,f1,f0,f13
	f0.f64 = double(float(ctx.f1.f64 * f0.f64 + ctx.f13.f64));
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,0(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_8215E000:
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8215df78
	if (!cr6.eq) goto loc_8215DF78;
loc_8215E008:
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8215e288
	if (!cr6.gt) goto loc_8215E288;
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// fabs f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 + r30.u64;
	// lwz r10,116(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// lwz r7,116(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8215e194
	if (cr6.eq) goto loc_8215E194;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// lfs f0,-12640(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12640);
	f0.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmuls f5,f1,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 * f0.f64));
	// beq cr6,0x8215e288
	if (cr6.eq) goto loc_8215E288;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f4,2480(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2480);
	ctx.f4.f64 = double(temp.f32);
loc_8215E068:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8215e078
	goto loc_8215E078;
loc_8215E070:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_8215E078:
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r5,r5,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r5.s64;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne 0x8215e070
	if (!cr0.eq) goto loc_8215E070;
	// lha r8,0(r7)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r7.u32 + 0));
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lha r5,2(r7)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ctx.r7.u32 + 2));
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// lha r31,4(r7)
	r31.s64 = int16_t(PPC_LOAD_U16(ctx.r7.u32 + 4));
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lha r29,6(r7)
	r29.s64 = int16_t(PPC_LOAD_U16(ctx.r7.u32 + 6));
	// std r8,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r8.u64);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// std r5,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r5.u64);
	// std r31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r31.u64);
	// std r8,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r8.u64);
	// lfd f11,-64(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f10,-56(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfd f8,-48(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfd f7,-40(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f3,f10
	ctx.f3.f64 = double(float(ctx.f10.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// fmuls f10,f9,f6
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f9,f3,f6
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmadds f3,f0,f10,f3
	ctx.f3.f64 = double(float(f0.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fmadds f3,f12,f8,f3
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f3,f11,f7,f3
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fcmpu cr6,f3,f4
	cr6.compare(ctx.f3.f64, ctx.f4.f64);
	// bge cr6,0x8215e144
	if (!cr6.lt) goto loc_8215E144;
	// fsubs f0,f0,f10
	f0.f64 = double(float(f0.f64 - ctx.f10.f64));
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f0,f12,f8
	f0.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fsubs f13,f11,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// b 0x8215e164
	goto loc_8215E164;
loc_8215E144:
	// fadds f0,f0,f10
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 + ctx.f10.f64));
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f0,f13,f9
	f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fadds f0,f12,f8
	f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fadds f0,f11,f7
	f0.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f0,12(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
loc_8215E164:
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// bne cr6,0x8215e068
	if (!cr6.eq) goto loc_8215E068;
	// b 0x8215e288
	goto loc_8215E288;
loc_8215E194:
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// beq cr6,0x8215e288
	if (cr6.eq) goto loc_8215E288;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f5,2480(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2480);
	ctx.f5.f64 = double(temp.f32);
loc_8215E1A4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8215e1b4
	goto loc_8215E1B4;
loc_8215E1AC:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_8215E1B4:
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r5,r5,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r5.s64;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne 0x8215e1ac
	if (!cr0.eq) goto loc_8215E1AC;
	// lfs f12,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f10,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f9,f12
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f4,f0,f13,f4
	ctx.f4.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f4,f8,f11,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmadds f4,f7,f10,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fcmpu cr6,f4,f5
	cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// bge cr6,0x8215e23c
	if (!cr6.lt) goto loc_8215E23C;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsubs f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f0,f8,f11
	f0.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fsubs f13,f7,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// b 0x8215e25c
	goto loc_8215E25C;
loc_8215E23C:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f0,f9,f12
	f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fadds f0,f8,f11
	f0.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fadds f0,f7,f10
	f0.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f0,12(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
loc_8215E25C:
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// bne cr6,0x8215e1a4
	if (!cr6.eq) goto loc_8215E1A4;
loc_8215E288:
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8215e3b8
	if (!cr6.gt) goto loc_8215E3B8;
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lwz r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// lwz r6,120(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + r30.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// beq cr6,0x8215e3b0
	if (cr6.eq) goto loc_8215E3B0;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,-12488(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12488);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// b 0x8215e344
	goto loc_8215E344;
loc_8215E2D4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8215e2e4
	goto loc_8215E2E4;
loc_8215E2DC:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8215E2E4:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r5,r5,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r5.s64;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne 0x8215e2dc
	if (!cr0.eq) goto loc_8215E2DC;
	// lha r5,0(r6)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ctx.r6.u32 + 0));
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// std r5,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r5.u64);
	// lfd f12,-40(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// fmadds f13,f13,f1,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_8215E344:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x8215e2d4
	if (!cr6.eq) goto loc_8215E2D4;
	// b 0x8215e3b8
	goto loc_8215E3B8;
loc_8215E350:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8215e360
	goto loc_8215E360;
loc_8215E358:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8215E360:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r5,r5,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r5.s64;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne 0x8215e358
	if (!cr0.eq) goto loc_8215E358;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,0(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_8215E3B0:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x8215e350
	if (!cr6.eq) goto loc_8215E350;
loc_8215E3B8:
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8215E3BC"))) PPC_WEAK_FUNC(sub_8215E3BC);
PPC_FUNC_IMPL(__imp__sub_8215E3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215E3C0"))) PPC_WEAK_FUNC(sub_8215E3C0);
PPC_FUNC_IMPL(__imp__sub_8215E3C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215e694
	if (!cr0.eq) goto loc_8215E694;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r30,r11
	r30.u64 = r11.u64;
	// lfs f6,2552(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	ctx.f6.f64 = double(temp.f32);
	// ble cr6,0x8215e4b8
	if (!cr6.gt) goto loc_8215E4B8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,108(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,108(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// b 0x8215e4b0
	goto loc_8215E4B0;
loc_8215E418:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8215e424
	goto loc_8215E424;
loc_8215E420:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_8215E424:
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// subf r6,r6,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r6.s64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x8215e420
	if (!cr0.eq) goto loc_8215E420;
	// addi r5,r11,4
	ctx.r5.s64 = r11.s64 + 4;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f0,f6,f0
	f0.f64 = double(float(ctx.f6.f64 - f0.f64));
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f10,f0,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f13.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fmadds f0,f13,f0,f11
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f11.f64));
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8215E4B0:
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8215e418
	if (!cr6.eq) goto loc_8215E418;
loc_8215E4B8:
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8215e5f4
	if (!cr6.gt) goto loc_8215E5F4;
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r6,r10,r30
	ctx.r6.u64 = ctx.r10.u64 + r30.u64;
	// lwz r8,116(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,116(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// beq cr6,0x8215e5f4
	if (cr6.eq) goto loc_8215E5F4;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f5,2480(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2480);
	ctx.f5.f64 = double(temp.f32);
loc_8215E4F8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8215e508
	goto loc_8215E508;
loc_8215E500:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_8215E508:
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r5,r5,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r5.s64;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne 0x8215e500
	if (!cr0.eq) goto loc_8215E500;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// fsubs f0,f6,f0
	f0.f64 = double(float(ctx.f6.f64 - f0.f64));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64));
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(f0.f64 * ctx.f11.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f0,f0,f10
	f0.f64 = double(float(f0.f64 * ctx.f10.f64));
	// stfs f0,12(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lfs f8,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmadds f4,f0,f9,f4
	ctx.f4.f64 = double(float(f0.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f4,f12,f7,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f4,f13,f10,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fcmpu cr6,f4,f5
	cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// bge cr6,0x8215e5bc
	if (!cr6.lt) goto loc_8215E5BC;
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsubs f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f0,f0,f9
	f0.f64 = double(float(f0.f64 - ctx.f9.f64));
	// b 0x8215e5d4
	goto loc_8215E5D4;
loc_8215E5BC:
	// fadds f13,f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f13,f12,f7
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fadds f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fadds f0,f0,f9
	f0.f64 = double(float(f0.f64 + ctx.f9.f64));
loc_8215E5D4:
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x8215e4f8
	if (!cr6.eq) goto loc_8215E4F8;
loc_8215E5F4:
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8215e694
	if (!cr6.gt) goto loc_8215E694;
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,120(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + r30.u64;
	// lwz r10,120(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// b 0x8215e68c
	goto loc_8215E68C;
loc_8215E628:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8215e634
	goto loc_8215E634;
loc_8215E630:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_8215E634:
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// subf r5,r5,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r5.s64;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne 0x8215e630
	if (!cr0.eq) goto loc_8215E630;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f12,f13
	f0.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_8215E68C:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x8215e628
	if (!cr6.eq) goto loc_8215E628;
loc_8215E694:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215E6A0"))) PPC_WEAK_FUNC(sub_8215E6A0);
PPC_FUNC_IMPL(__imp__sub_8215E6A0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215ea48
	if (!cr0.eq) goto loc_8215EA48;
	// lwz r30,12(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// mr r24,r30
	r24.u64 = r30.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8215e774
	if (!cr6.gt) goto loc_8215E774;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r10,108(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 108);
	// add r6,r11,r30
	ctx.r6.u64 = r11.u64 + r30.u64;
	// lwz r11,108(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 108);
	// b 0x8215e76c
	goto loc_8215E76C;
loc_8215E6FC:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8215e708
	goto loc_8215E708;
loc_8215E704:
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_8215E708:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne 0x8215e704
	if (!cr0.eq) goto loc_8215E704;
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,0(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_8215E76C:
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, xer);
	// bne cr6,0x8215e6fc
	if (!cr6.eq) goto loc_8215E6FC;
loc_8215E774:
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8215e948
	if (!cr6.gt) goto loc_8215E948;
	// lwz r8,32(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r31,116(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 116);
	// add r25,r9,r24
	r25.u64 = ctx.r9.u64 + r24.u64;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x8215e884
	if (cr6.eq) goto loc_8215E884;
	// lwz r26,116(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 116);
	// b 0x8215e878
	goto loc_8215E878;
loc_8215E7B4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8215e7c4
	goto loc_8215E7C4;
loc_8215E7BC:
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
loc_8215E7C4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8215e7bc
	if (!cr0.eq) goto loc_8215E7BC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215d338
	sub_8215D338(ctx, base);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f0,f7
	ctx.f6.f64 = double(float(f0.f64 * ctx.f7.f64));
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f0,f8
	ctx.f5.f64 = double(float(f0.f64 * ctx.f8.f64));
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f0,f10
	ctx.f4.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fmuls f3,f12,f7
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// fmsubs f6,f13,f10,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f6.f64));
	// fmadds f3,f11,f10,f3
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fmadds f10,f12,f10,f5
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f5,f11,f9,f4
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fnmsubs f6,f12,f9,f6
	ctx.f6.f64 = double(float(-(ctx.f12.f64 * ctx.f9.f64 - ctx.f6.f64)));
	// fmadds f4,f13,f8,f3
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f10,f13,f9,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f5,f13,f7,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fnmsubs f13,f11,f8,f6
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f8.f64 - ctx.f6.f64)));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// fnmsubs f0,f0,f9,f4
	f0.f64 = double(float(-(f0.f64 * ctx.f9.f64 - ctx.f4.f64)));
	// stfs f0,0(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fnmsubs f11,f11,f7,f10
	ctx.f11.f64 = double(float(-(ctx.f11.f64 * ctx.f7.f64 - ctx.f10.f64)));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fnmsubs f12,f12,f8,f5
	ctx.f12.f64 = double(float(-(ctx.f12.f64 * ctx.f8.f64 - ctx.f5.f64)));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
loc_8215E878:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// bne cr6,0x8215e7b4
	if (!cr6.eq) goto loc_8215E7B4;
	// b 0x8215e948
	goto loc_8215E948;
loc_8215E884:
	// lwz r11,116(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 116);
	// b 0x8215e940
	goto loc_8215E940;
loc_8215E88C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8215e898
	goto loc_8215E898;
loc_8215E894:
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
loc_8215E898:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x8215e894
	if (!cr0.eq) goto loc_8215E894;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r31,8
	ctx.r8.s64 = r31.s64 + 8;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// fmuls f4,f12,f9
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmsubs f6,f9,f0,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 * f0.f64 - ctx.f6.f64));
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmadds f4,f11,f10,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f5,f8,f13,f5
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fnmsubs f6,f8,f12,f6
	ctx.f6.f64 = double(float(-(ctx.f8.f64 * ctx.f12.f64 - ctx.f6.f64)));
	// fmadds f3,f7,f12,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f4,f8,f0,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * f0.f64 + ctx.f4.f64));
	// fmadds f5,f7,f0,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 * f0.f64 + ctx.f5.f64));
	// fnmsubs f9,f7,f11,f6
	ctx.f9.f64 = double(float(-(ctx.f7.f64 * ctx.f11.f64 - ctx.f6.f64)));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmadds f6,f10,f0,f3
	ctx.f6.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f3.f64));
	// fnmsubs f13,f7,f13,f4
	ctx.f13.f64 = double(float(-(ctx.f7.f64 * ctx.f13.f64 - ctx.f4.f64)));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fnmsubs f0,f12,f10,f5
	f0.f64 = double(float(-(ctx.f12.f64 * ctx.f10.f64 - ctx.f5.f64)));
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fnmsubs f12,f11,f8,f6
	ctx.f12.f64 = double(float(-(ctx.f11.f64 * ctx.f8.f64 - ctx.f6.f64)));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
loc_8215E940:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// bne cr6,0x8215e88c
	if (!cr6.eq) goto loc_8215E88C;
loc_8215E948:
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8215ea48
	if (!cr6.gt) goto loc_8215EA48;
	// lwz r10,36(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,120(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + r24.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,120(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x8215ea40
	if (cr6.eq) goto loc_8215EA40;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x8215ea48
	if (cr6.eq) goto loc_8215EA48;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,-12488(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12488);
	f0.f64 = double(temp.f32);
loc_8215E994:
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8215e9a0
	goto loc_8215E9A0;
loc_8215E99C:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8215E9A0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// subf r6,r6,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r6.s64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x8215e99c
	if (!cr0.eq) goto loc_8215E99C;
	// lha r7,0(r9)
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 0));
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne cr6,0x8215e994
	if (!cr6.eq) goto loc_8215E994;
	// b 0x8215ea48
	goto loc_8215EA48;
loc_8215E9F8:
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8215ea04
	goto loc_8215EA04;
loc_8215EA00:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8215EA04:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// subf r6,r6,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r6.s64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x8215ea00
	if (!cr0.eq) goto loc_8215EA00;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8215EA40:
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// bne cr6,0x8215e9f8
	if (!cr6.eq) goto loc_8215E9F8;
loc_8215EA48:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8215EA50"))) PPC_WEAK_FUNC(sub_8215EA50);
PPC_FUNC_IMPL(__imp__sub_8215EA50) {
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
	// lwz r16,-12448(0)
	r16.u64 = PPC_LOAD_U32(-12448);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r23,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r23.u32);
	// addi r11,r5,6
	r11.s64 = ctx.r5.s64 + 6;
	// addi r10,r6,7
	ctx.r10.s64 = ctx.r6.s64 + 7;
	// li r28,0
	r28.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// lwzx r30,r9,r27
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + r27.u32);
	// lwzx r26,r10,r27
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8215eac8
	if (cr0.eq) goto loc_8215EAC8;
	// subf r11,r30,r26
	r11.s64 = r26.s64 - r30.s64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x8215eacc
	goto loc_8215EACC;
loc_8215EAC8:
	// mr r25,r28
	r25.u64 = r28.u64;
loc_8215EACC:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r24,5
	r24.s64 = 5;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r24,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r24.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215eb00
	if (cr0.eq) goto loc_8215EB00;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215EB00:
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// bge cr6,0x8215eb58
	if (!cr6.lt) goto loc_8215EB58;
	// rlwinm r29,r30,3,0,28
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r30,r30,r26
	r30.s64 = r26.s64 - r30.s64;
loc_8215EB10:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// stw r24,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r24.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215eb48
	if (cr0.eq) goto loc_8215EB48;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215EB48:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bne 0x8215eb10
	if (!cr0.eq) goto loc_8215EB10;
loc_8215EB58:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8215EA58"))) PPC_WEAK_FUNC(sub_8215EA58);
PPC_FUNC_IMPL(__imp__sub_8215EA58) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r23,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r23.u32);
	// addi r11,r5,6
	r11.s64 = ctx.r5.s64 + 6;
	// addi r10,r6,7
	ctx.r10.s64 = ctx.r6.s64 + 7;
	// li r28,0
	r28.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// lwzx r30,r9,r27
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + r27.u32);
	// lwzx r26,r10,r27
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8215eac8
	if (cr0.eq) goto loc_8215EAC8;
	// subf r11,r30,r26
	r11.s64 = r26.s64 - r30.s64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x8215eacc
	goto loc_8215EACC;
loc_8215EAC8:
	// mr r25,r28
	r25.u64 = r28.u64;
loc_8215EACC:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r24,5
	r24.s64 = 5;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r24,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r24.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215eb00
	if (cr0.eq) goto loc_8215EB00;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215EB00:
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// bge cr6,0x8215eb58
	if (!cr6.lt) goto loc_8215EB58;
	// rlwinm r29,r30,3,0,28
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r30,r30,r26
	r30.s64 = r26.s64 - r30.s64;
loc_8215EB10:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// stw r24,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r24.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215eb48
	if (cr0.eq) goto loc_8215EB48;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215EB48:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bne 0x8215eb10
	if (!cr0.eq) goto loc_8215EB10;
loc_8215EB58:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8215EB84"))) PPC_WEAK_FUNC(sub_8215EB84);
PPC_FUNC_IMPL(__imp__sub_8215EB84) {
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
	// bl 0x821206f0
	sub_821206F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215EBAC"))) PPC_WEAK_FUNC(sub_8215EBAC);
PPC_FUNC_IMPL(__imp__sub_8215EBAC) {
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

__attribute__((alias("__imp__sub_8215EBD4"))) PPC_WEAK_FUNC(sub_8215EBD4);
PPC_FUNC_IMPL(__imp__sub_8215EBD4) {
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

__attribute__((alias("__imp__sub_8215EBFC"))) PPC_WEAK_FUNC(sub_8215EBFC);
PPC_FUNC_IMPL(__imp__sub_8215EBFC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215ec2c
	if (cr0.eq) goto loc_8215EC2C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82120868
	sub_82120868(ctx, base);
loc_8215EC2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215EC3C"))) PPC_WEAK_FUNC(sub_8215EC3C);
PPC_FUNC_IMPL(__imp__sub_8215EC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215EC40"))) PPC_WEAK_FUNC(sub_8215EC40);
PPC_FUNC_IMPL(__imp__sub_8215EC40) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-12336(0)
	r16.u64 = PPC_LOAD_U32(-12336);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x8215ec80
	if (!cr6.eq) goto loc_8215EC80;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215ed64
	goto loc_8215ED64;
loc_8215EC80:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// addi r27,r29,1
	r27.s64 = r29.s64 + 1;
	// lwz r11,8800(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8800);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8796
	r29.s64 = ctx.r10.s64 + 8796;
	// bne 0x8215ecd0
	if (!cr0.eq) goto loc_8215ECD0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8800(r30)
	PPC_STORE_U32(r30.u32 + 8800, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = r11.s64 + 18664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8800(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8800);
loc_8215ECD0:
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
	// beq 0x8215ed04
	if (cr0.eq) goto loc_8215ED04;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215d8f8
	sub_8215D8F8(ctx, base);
	// b 0x8215ed64
	goto loc_8215ED64;
loc_8215ED04:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8792
	r29.s64 = ctx.r10.s64 + 8792;
	// bne 0x8215ed2c
	if (!cr0.eq) goto loc_8215ED2C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,8800(r30)
	PPC_STORE_U32(r30.u32 + 8800, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-12360
	ctx.r4.s64 = r11.s64 + -12360;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8215ED2C:
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
	// beq 0x8215ed60
	if (cr0.eq) goto loc_8215ED60;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,4
	ctx.r3.s64 = r26.s64 + 4;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x8215ed64
	goto loc_8215ED64;
loc_8215ED60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215ED64:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8215EC48"))) PPC_WEAK_FUNC(sub_8215EC48);
PPC_FUNC_IMPL(__imp__sub_8215EC48) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x8215ec80
	if (!cr6.eq) goto loc_8215EC80;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215ed64
	goto loc_8215ED64;
loc_8215EC80:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// addi r27,r29,1
	r27.s64 = r29.s64 + 1;
	// lwz r11,8800(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8800);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8796
	r29.s64 = ctx.r10.s64 + 8796;
	// bne 0x8215ecd0
	if (!cr0.eq) goto loc_8215ECD0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8800(r30)
	PPC_STORE_U32(r30.u32 + 8800, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = r11.s64 + 18664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8800(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8800);
loc_8215ECD0:
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
	// beq 0x8215ed04
	if (cr0.eq) goto loc_8215ED04;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215d8f8
	sub_8215D8F8(ctx, base);
	// b 0x8215ed64
	goto loc_8215ED64;
loc_8215ED04:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8792
	r29.s64 = ctx.r10.s64 + 8792;
	// bne 0x8215ed2c
	if (!cr0.eq) goto loc_8215ED2C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,8800(r30)
	PPC_STORE_U32(r30.u32 + 8800, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-12360
	ctx.r4.s64 = r11.s64 + -12360;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8215ED2C:
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
	// beq 0x8215ed60
	if (cr0.eq) goto loc_8215ED60;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,4
	ctx.r3.s64 = r26.s64 + 4;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x8215ed64
	goto loc_8215ED64;
loc_8215ED60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215ED64:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8215ED6C"))) PPC_WEAK_FUNC(sub_8215ED6C);
PPC_FUNC_IMPL(__imp__sub_8215ED6C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8800
	r11.s64 = r11.s64 + 8800;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8800
	ctx.r10.s64 = ctx.r10.s64 + 8800;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215ED94"))) PPC_WEAK_FUNC(sub_8215ED94);
PPC_FUNC_IMPL(__imp__sub_8215ED94) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8800
	r11.s64 = r11.s64 + 8800;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8800
	ctx.r10.s64 = ctx.r10.s64 + 8800;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215EDBC"))) PPC_WEAK_FUNC(sub_8215EDBC);
PPC_FUNC_IMPL(__imp__sub_8215EDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215EDC0"))) PPC_WEAK_FUNC(sub_8215EDC0);
PPC_FUNC_IMPL(__imp__sub_8215EDC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// bl 0x8215d7d8
	sub_8215D7D8(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215edf8
	if (cr0.eq) goto loc_8215EDF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
loc_8215EDF8:
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

__attribute__((alias("__imp__sub_8215EE0C"))) PPC_WEAK_FUNC(sub_8215EE0C);
PPC_FUNC_IMPL(__imp__sub_8215EE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215EE10"))) PPC_WEAK_FUNC(sub_8215EE10);
PPC_FUNC_IMPL(__imp__sub_8215EE10) {
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
	// bl 0x8215edc0
	sub_8215EDC0(ctx, base);
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

__attribute__((alias("__imp__sub_8215EE74"))) PPC_WEAK_FUNC(sub_8215EE74);
PPC_FUNC_IMPL(__imp__sub_8215EE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215EE78"))) PPC_WEAK_FUNC(sub_8215EE78);
PPC_FUNC_IMPL(__imp__sub_8215EE78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r11,r4,8
	r11.s64 = ctx.r4.s64 + 8;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8215eebc
	if (cr6.eq) goto loc_8215EEBC;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8215eebc
	if (!cr0.gt) goto loc_8215EEBC;
loc_8215EE9C:
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bgt 0x8215ee9c
	if (cr0.gt) goto loc_8215EE9C;
loc_8215EEBC:
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215EED0"))) PPC_WEAK_FUNC(sub_8215EED0);
PPC_FUNC_IMPL(__imp__sub_8215EED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8215EED8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8215eef0
	if (cr6.eq) goto loc_8215EEF0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_8215EEF0:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne 0x8215eed8
	if (!cr0.eq) goto loc_8215EED8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215EF00"))) PPC_WEAK_FUNC(sub_8215EF00);
PPC_FUNC_IMPL(__imp__sub_8215EF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8215ef28
	goto loc_8215EF28;
loc_8215EF08:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8215ef20
	if (cr6.eq) goto loc_8215EF20;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
loc_8215EF20:
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
loc_8215EF28:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x8215ef08
	if (!cr6.eq) goto loc_8215EF08;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215EF38"))) PPC_WEAK_FUNC(sub_8215EF38);
PPC_FUNC_IMPL(__imp__sub_8215EF38) {
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
	// addi r31,r3,12
	r31.s64 = ctx.r3.s64 + 12;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215efa4
	if (cr0.eq) goto loc_8215EFA4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// li r30,0
	r30.s64 = 0;
loc_8215EF6C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r6,r30,r11
	ctx.r6.u64 = r30.u64 + r11.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8215ee10
	sub_8215EE10(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8215ef6c
	if (cr6.lt) goto loc_8215EF6C;
loc_8215EFA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8215EFAC"))) PPC_WEAK_FUNC(sub_8215EFAC);
PPC_FUNC_IMPL(__imp__sub_8215EFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215EFB0"))) PPC_WEAK_FUNC(sub_8215EFB0);
PPC_FUNC_IMPL(__imp__sub_8215EFB0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// blt cr6,0x8215efe8
	if (cr6.lt) goto loc_8215EFE8;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8215efec
	if (cr6.lt) goto loc_8215EFEC;
loc_8215EFE8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8215EFEC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8215f02c
	if (cr0.eq) goto loc_8215F02C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// bl 0x8215efb0
	sub_8215EFB0(ctx, base);
	// b 0x8215f124
	goto loc_8215F124;
loc_8215F02C:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r10,r29,r31
	ctx.r10.s64 = r31.s64 - r29.s64;
	// srawi r28,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r28.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// ble cr6,0x8215f0c4
	if (!cr6.gt) goto loc_8215F0C4;
	// rlwinm r27,r11,3,0,28
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// subf r28,r27,r31
	r28.s64 = r31.s64 - r27.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215ef00
	sub_8215EF00(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// subf r11,r29,r28
	r11.s64 = r28.s64 - r29.s64;
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8215f094
	if (!cr0.gt) goto loc_8215F094;
loc_8215F074:
	// addi r28,r28,-8
	r28.s64 = r28.s64 + -8;
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bgt 0x8215f074
	if (cr0.gt) goto loc_8215F074;
loc_8215F094:
	// add r10,r27,r29
	ctx.r10.u64 = r27.u64 + r29.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x8215f124
	if (cr6.eq) goto loc_8215F124;
loc_8215F0A4:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8215f0a4
	if (!cr6.eq) goto loc_8215F0A4;
	// b 0x8215f124
	goto loc_8215F124;
loc_8215F0C4:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// subf r4,r28,r11
	ctx.r4.s64 = r11.s64 - r28.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215eed0
	sub_8215EED0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// bl 0x8215ef00
	sub_8215EF00(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r29
	r11.u64 = r29.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8215f124
	if (cr6.eq) goto loc_8215F124;
loc_8215F108:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8215f108
	if (!cr6.eq) goto loc_8215F108;
loc_8215F124:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8215F12C"))) PPC_WEAK_FUNC(sub_8215F12C);
PPC_FUNC_IMPL(__imp__sub_8215F12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F130"))) PPC_WEAK_FUNC(sub_8215F130);
PPC_FUNC_IMPL(__imp__sub_8215F130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r16,-12204(0)
	r16.u64 = PPC_LOAD_U32(-12204);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r29.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r31,228
	ctx.r10.s64 = r31.s64 + 228;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x8215f18c
	if (cr6.lt) goto loc_8215F18C;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_8215F18C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// bl 0x8215d888
	sub_8215D888(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215ef00
	sub_8215EF00(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x8215f1f0
	if (!cr6.eq) goto loc_8215F1F0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8215f1e8
	if (cr6.eq) goto loc_8215F1E8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_8215F1E8:
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// b 0x8215f208
	goto loc_8215F208;
loc_8215F1F0:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215eed0
	sub_8215EED0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8215F208:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215f22c
	if (!cr0.eq) goto loc_8215F22C;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215ef00
	sub_8215EF00(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8215F22C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r31,84
	ctx.r8.s64 = r31.s64 + 84;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r9,r31,88
	ctx.r9.s64 = r31.s64 + 88;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// rlwinm r11,r7,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x8215f274
	goto loc_8215F274;
loc_8215F254:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8215F274:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215f254
	if (!cr0.eq) goto loc_8215F254;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// rlwinm r11,r25,3,0,28
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8215F138"))) PPC_WEAK_FUNC(sub_8215F138);
PPC_FUNC_IMPL(__imp__sub_8215F138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r29.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r31,228
	ctx.r10.s64 = r31.s64 + 228;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x8215f18c
	if (cr6.lt) goto loc_8215F18C;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_8215F18C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// bl 0x8215d888
	sub_8215D888(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215ef00
	sub_8215EF00(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x8215f1f0
	if (!cr6.eq) goto loc_8215F1F0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8215f1e8
	if (cr6.eq) goto loc_8215F1E8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_8215F1E8:
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// b 0x8215f208
	goto loc_8215F208;
loc_8215F1F0:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215eed0
	sub_8215EED0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8215F208:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215f22c
	if (!cr0.eq) goto loc_8215F22C;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215ef00
	sub_8215EF00(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8215F22C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r31,84
	ctx.r8.s64 = r31.s64 + 84;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r9,r31,88
	ctx.r9.s64 = r31.s64 + 88;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// rlwinm r11,r7,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x8215f274
	goto loc_8215F274;
loc_8215F254:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8215F274:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215f254
	if (!cr0.eq) goto loc_8215F254;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// rlwinm r11,r25,3,0,28
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8215F2B4"))) PPC_WEAK_FUNC(sub_8215F2B4);
PPC_FUNC_IMPL(__imp__sub_8215F2B4) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-12204(0)
	r16.u64 = PPC_LOAD_U32(-12204);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-12060
	r11.s64 = r11.s64 + -12060;
	// addi r10,r10,-12124
	ctx.r10.s64 = ctx.r10.s64 + -12124;
	// stw r11,-152(r3)
	PPC_STORE_U32(ctx.r3.u32 + -152, r11.u32);
	// lwz r11,-148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,-148(r11)
	PPC_STORE_U32(r11.u32 + -148, ctx.r10.u32);
	// lwz r11,-148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-148
	ctx.r10.s64 = r11.s64 + -148;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,-152(r11)
	PPC_STORE_U32(r11.u32 + -152, ctx.r10.u32);
	// lwz r4,-140(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + -140);
	// lwz r11,-136(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -136);
	// b 0x8215f330
	goto loc_8215F330;
loc_8215F32C:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8215F330:
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
	// bne 0x8215f32c
	if (!cr0.eq) goto loc_8215F32C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,-132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -132);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215F2BC"))) PPC_WEAK_FUNC(sub_8215F2BC);
PPC_FUNC_IMPL(__imp__sub_8215F2BC) {
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
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_8215F2E8"))) PPC_WEAK_FUNC(sub_8215F2E8);
PPC_FUNC_IMPL(__imp__sub_8215F2E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-12060
	r11.s64 = r11.s64 + -12060;
	// addi r10,r10,-12124
	ctx.r10.s64 = ctx.r10.s64 + -12124;
	// stw r11,-152(r3)
	PPC_STORE_U32(ctx.r3.u32 + -152, r11.u32);
	// lwz r11,-148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,-148(r11)
	PPC_STORE_U32(r11.u32 + -148, ctx.r10.u32);
	// lwz r11,-148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-148
	ctx.r10.s64 = r11.s64 + -148;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,-152(r11)
	PPC_STORE_U32(r11.u32 + -152, ctx.r10.u32);
	// lwz r4,-140(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + -140);
	// lwz r11,-136(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -136);
	// b 0x8215f330
	goto loc_8215F330;
loc_8215F32C:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8215F330:
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
	// bne 0x8215f32c
	if (!cr0.eq) goto loc_8215F32C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,-132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -132);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215F364"))) PPC_WEAK_FUNC(sub_8215F364);
PPC_FUNC_IMPL(__imp__sub_8215F364) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F368"))) PPC_WEAK_FUNC(sub_8215F368);
PPC_FUNC_IMPL(__imp__sub_8215F368) {
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
	// bl 0x8214cf18
	sub_8214CF18(ctx, base);
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

__attribute__((alias("__imp__sub_8215F398"))) PPC_WEAK_FUNC(sub_8215F398);
PPC_FUNC_IMPL(__imp__sub_8215F398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8215f780
	sub_8215F780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215F3A4"))) PPC_WEAK_FUNC(sub_8215F3A4);
PPC_FUNC_IMPL(__imp__sub_8215F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F3A8"))) PPC_WEAK_FUNC(sub_8215F3A8);
PPC_FUNC_IMPL(__imp__sub_8215F3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8215f368
	sub_8215F368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215F3B4"))) PPC_WEAK_FUNC(sub_8215F3B4);
PPC_FUNC_IMPL(__imp__sub_8215F3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F3B8"))) PPC_WEAK_FUNC(sub_8215F3B8);
PPC_FUNC_IMPL(__imp__sub_8215F3B8) {
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
	// lwz r16,-12048(0)
	r16.u64 = PPC_LOAD_U32(-12048);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32136
	r27.s64 = -2106064896;
	// lwz r11,8808(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8808);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8215f43c
	if (!cr0.eq) goto loc_8215F43C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8808, r11.u32);
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
	// bl 0x8214cf18
	sub_8214CF18(ctx, base);
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
	// stw r3,8804(r27)
	PPC_STORE_U32(r27.u32 + 8804, ctx.r3.u32);
	// b 0x8215f440
	goto loc_8215F440;
loc_8215F43C:
	// lwz r3,8804(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8804);
loc_8215F440:
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
	// beq 0x8215f47c
	if (cr0.eq) goto loc_8215F47C;
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8215f4f8
	goto loc_8215F4F8;
loc_8215F47C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8215f4dc
	if (!cr0.eq) goto loc_8215F4DC;
	// addic. r11,r30,-152
	xer.ca = r30.u32 > 151;
	r11.s64 = r30.s64 + -152;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215f4a0
	if (!cr0.eq) goto loc_8215F4A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215f4b0
	goto loc_8215F4B0;
loc_8215F4A0:
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
loc_8215F4B0:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-148
	ctx.r4.s64 = r11.s64 + -148;
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
loc_8215F4DC:
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8215F4F8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8215F3C0"))) PPC_WEAK_FUNC(sub_8215F3C0);
PPC_FUNC_IMPL(__imp__sub_8215F3C0) {
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32136
	r27.s64 = -2106064896;
	// lwz r11,8808(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8808);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8215f43c
	if (!cr0.eq) goto loc_8215F43C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8808, r11.u32);
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
	// bl 0x8214cf18
	sub_8214CF18(ctx, base);
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
	// stw r3,8804(r27)
	PPC_STORE_U32(r27.u32 + 8804, ctx.r3.u32);
	// b 0x8215f440
	goto loc_8215F440;
loc_8215F43C:
	// lwz r3,8804(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8804);
loc_8215F440:
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
	// beq 0x8215f47c
	if (cr0.eq) goto loc_8215F47C;
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8215f4f8
	goto loc_8215F4F8;
loc_8215F47C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8215f4dc
	if (!cr0.eq) goto loc_8215F4DC;
	// addic. r11,r30,-152
	xer.ca = r30.u32 > 151;
	r11.s64 = r30.s64 + -152;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215f4a0
	if (!cr0.eq) goto loc_8215F4A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215f4b0
	goto loc_8215F4B0;
loc_8215F4A0:
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
loc_8215F4B0:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-148
	ctx.r4.s64 = r11.s64 + -148;
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
loc_8215F4DC:
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8215F4F8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8215F504"))) PPC_WEAK_FUNC(sub_8215F504);
PPC_FUNC_IMPL(__imp__sub_8215F504) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8808
	r11.s64 = r11.s64 + 8808;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8808
	ctx.r10.s64 = ctx.r10.s64 + 8808;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F52C"))) PPC_WEAK_FUNC(sub_8215F52C);
PPC_FUNC_IMPL(__imp__sub_8215F52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F530"))) PPC_WEAK_FUNC(sub_8215F530);
PPC_FUNC_IMPL(__imp__sub_8215F530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8215f3c0
	sub_8215F3C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215F53C"))) PPC_WEAK_FUNC(sub_8215F53C);
PPC_FUNC_IMPL(__imp__sub_8215F53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F540"))) PPC_WEAK_FUNC(sub_8215F540);
PPC_FUNC_IMPL(__imp__sub_8215F540) {
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
	// addi r31,r3,152
	r31.s64 = ctx.r3.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f2e8
	sub_8215F2E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
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

__attribute__((alias("__imp__sub_8215F578"))) PPC_WEAK_FUNC(sub_8215F578);
PPC_FUNC_IMPL(__imp__sub_8215F578) {
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
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq cr6,0x8215f5b4
	if (cr6.eq) goto loc_8215F5B4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// addi r11,r11,-11984
	r11.s64 = r11.s64 + -11984;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
loc_8215F5B4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-12060
	r11.s64 = r11.s64 + -12060;
	// addi r9,r10,-12124
	ctx.r9.s64 = ctx.r10.s64 + -12124;
	// addi r10,r31,64
	ctx.r10.s64 = r31.s64 + 64;
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r11,-148
	ctx.r9.s64 = r11.s64 + -148;
	// stwx r9,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r9.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
loc_8215F604:
	// stw r30,-40(r10)
	PPC_STORE_U32(ctx.r10.u32 + -40, r30.u32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// stw r30,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8215f604
	if (!cr0.eq) goto loc_8215F604;
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

__attribute__((alias("__imp__sub_8215F638"))) PPC_WEAK_FUNC(sub_8215F638);
PPC_FUNC_IMPL(__imp__sub_8215F638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r8,r3,12
	ctx.r8.s64 = ctx.r3.s64 + 12;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8215f680
	if (cr6.eq) goto loc_8215F680;
	// subf r9,r11,r11
	ctx.r9.s64 = r11.s64 - r11.s64;
	// srawi. r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x8215f67c
	if (!cr0.gt) goto loc_8215F67C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_8215F65C:
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bgt 0x8215f65c
	if (cr0.gt) goto loc_8215F65C;
loc_8215F67C:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_8215F680:
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8215F68C:
	// stw r9,-40(r11)
	PPC_STORE_U32(r11.u32 + -40, ctx.r9.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x8215f68c
	if (!cr0.eq) goto loc_8215F68C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8215F6B8"))) PPC_WEAK_FUNC(sub_8215F6B8);
PPC_FUNC_IMPL(__imp__sub_8215F6B8) {
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
	// lwz r16,-11896(0)
	r16.u64 = PPC_LOAD_U32(-11896);
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-11908
	r11.s64 = r11.s64 + -11908;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-11972
	ctx.r10.s64 = ctx.r10.s64 + -11972;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-152(r30)
	PPC_STORE_U32(r30.u32 + -152, r11.u32);
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-148(r11)
	PPC_STORE_U32(r11.u32 + -148, ctx.r10.u32);
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-148
	ctx.r10.s64 = r11.s64 + -148;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-152(r11)
	PPC_STORE_U32(r11.u32 + -152, ctx.r10.u32);
	// lwz r3,-44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -44);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f2e8
	sub_8215F2E8(ctx, base);
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

__attribute__((alias("__imp__sub_8215F6C0"))) PPC_WEAK_FUNC(sub_8215F6C0);
PPC_FUNC_IMPL(__imp__sub_8215F6C0) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-11908
	r11.s64 = r11.s64 + -11908;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-11972
	ctx.r10.s64 = ctx.r10.s64 + -11972;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-152(r30)
	PPC_STORE_U32(r30.u32 + -152, r11.u32);
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-148(r11)
	PPC_STORE_U32(r11.u32 + -148, ctx.r10.u32);
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-148
	ctx.r10.s64 = r11.s64 + -148;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-152(r11)
	PPC_STORE_U32(r11.u32 + -152, ctx.r10.u32);
	// lwz r3,-44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -44);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f2e8
	sub_8215F2E8(ctx, base);
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

__attribute__((alias("__imp__sub_8215F740"))) PPC_WEAK_FUNC(sub_8215F740);
PPC_FUNC_IMPL(__imp__sub_8215F740) {
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
	// addi r11,r11,-152
	r11.s64 = r11.s64 + -152;
	// addi r3,r11,152
	ctx.r3.s64 = r11.s64 + 152;
	// bl 0x8215f2e8
	sub_8215F2E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F770"))) PPC_WEAK_FUNC(sub_8215F770);
PPC_FUNC_IMPL(__imp__sub_8215F770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8215f860
	sub_8215F860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215F77C"))) PPC_WEAK_FUNC(sub_8215F77C);
PPC_FUNC_IMPL(__imp__sub_8215F77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F780"))) PPC_WEAK_FUNC(sub_8215F780);
PPC_FUNC_IMPL(__imp__sub_8215F780) {
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
	// addi r30,r3,-152
	r30.s64 = ctx.r3.s64 + -152;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,152
	r31.s64 = r30.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f2e8
	sub_8215F2E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215f7b8
	if (cr0.eq) goto loc_8215F7B8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8215F7B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8215F7C4"))) PPC_WEAK_FUNC(sub_8215F7C4);
PPC_FUNC_IMPL(__imp__sub_8215F7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F7C8"))) PPC_WEAK_FUNC(sub_8215F7C8);
PPC_FUNC_IMPL(__imp__sub_8215F7C8) {
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
	// addi r31,r3,152
	r31.s64 = ctx.r3.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f6c0
	sub_8215F6C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
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

__attribute__((alias("__imp__sub_8215F800"))) PPC_WEAK_FUNC(sub_8215F800);
PPC_FUNC_IMPL(__imp__sub_8215F800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8215f850
	if (cr6.eq) goto loc_8215F850;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x8215f83c
	if (cr6.lt) goto loc_8215F83C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x8215efb0
	sub_8215EFB0(ctx, base);
	// b 0x8215f850
	goto loc_8215F850;
loc_8215F83C:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8215f138
	sub_8215F138(ctx, base);
loc_8215F850:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F860"))) PPC_WEAK_FUNC(sub_8215F860);
PPC_FUNC_IMPL(__imp__sub_8215F860) {
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
	// addi r30,r3,-152
	r30.s64 = ctx.r3.s64 + -152;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,152
	r31.s64 = r30.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f6c0
	sub_8215F6C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215f898
	if (cr0.eq) goto loc_8215F898;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8215F898:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8215F8A4"))) PPC_WEAK_FUNC(sub_8215F8A4);
PPC_FUNC_IMPL(__imp__sub_8215F8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F8A8"))) PPC_WEAK_FUNC(sub_8215F8A8);
PPC_FUNC_IMPL(__imp__sub_8215F8A8) {
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
	// lwz r16,-11832(0)
	r16.u64 = PPC_LOAD_U32(-11832);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x8215f924
	if (!cr6.eq) goto loc_8215F924;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// stw r9,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215f91c
	if (cr0.eq) goto loc_8215F91C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215F91C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215f9ec
	goto loc_8215F9EC;
loc_8215F924:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r6,r29,1
	ctx.r6.s64 = r29.s64 + 1;
	// rlwinm r11,r3,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// lha r9,8(r30)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// blt cr6,0x8215f9d8
	if (cr6.lt) goto loc_8215F9D8;
	// andi. r11,r26,19
	r11.u64 = r26.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215f9d8
	if (!cr0.eq) goto loc_8215F9D8;
	// cmpwi cr6,r26,8
	cr6.compare<int32_t>(r26.s32, 8, xer);
	// bne cr6,0x8215f97c
	if (!cr6.eq) goto loc_8215F97C;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215ee78
	sub_8215EE78(ctx, base);
	// b 0x8215f91c
	goto loc_8215F91C;
loc_8215F97C:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// bne cr6,0x8215f9d0
	if (!cr6.eq) goto loc_8215F9D0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x8215ec48
	sub_8215EC48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215f9d0
	if (cr0.eq) goto loc_8215F9D0;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f800
	sub_8215F800(ctx, base);
	// b 0x8215f91c
	goto loc_8215F91C;
loc_8215F9D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215f9ec
	goto loc_8215F9EC;
loc_8215F9D8:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215ec48
	sub_8215EC48(ctx, base);
loc_8215F9EC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8215F8B0"))) PPC_WEAK_FUNC(sub_8215F8B0);
PPC_FUNC_IMPL(__imp__sub_8215F8B0) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x8215f924
	if (!cr6.eq) goto loc_8215F924;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// stw r9,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215f91c
	if (cr0.eq) goto loc_8215F91C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215F91C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215f9ec
	goto loc_8215F9EC;
loc_8215F924:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r6,r29,1
	ctx.r6.s64 = r29.s64 + 1;
	// rlwinm r11,r3,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// lha r9,8(r30)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// blt cr6,0x8215f9d8
	if (cr6.lt) goto loc_8215F9D8;
	// andi. r11,r26,19
	r11.u64 = r26.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215f9d8
	if (!cr0.eq) goto loc_8215F9D8;
	// cmpwi cr6,r26,8
	cr6.compare<int32_t>(r26.s32, 8, xer);
	// bne cr6,0x8215f97c
	if (!cr6.eq) goto loc_8215F97C;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215ee78
	sub_8215EE78(ctx, base);
	// b 0x8215f91c
	goto loc_8215F91C;
loc_8215F97C:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// bne cr6,0x8215f9d0
	if (!cr6.eq) goto loc_8215F9D0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x8215ec48
	sub_8215EC48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215f9d0
	if (cr0.eq) goto loc_8215F9D0;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f800
	sub_8215F800(ctx, base);
	// b 0x8215f91c
	goto loc_8215F91C;
loc_8215F9D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215f9ec
	goto loc_8215F9EC;
loc_8215F9D8:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215ec48
	sub_8215EC48(ctx, base);
loc_8215F9EC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8215F9F4"))) PPC_WEAK_FUNC(sub_8215F9F4);
PPC_FUNC_IMPL(__imp__sub_8215F9F4) {
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

__attribute__((alias("__imp__sub_8215FA1C"))) PPC_WEAK_FUNC(sub_8215FA1C);
PPC_FUNC_IMPL(__imp__sub_8215FA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215FA20"))) PPC_WEAK_FUNC(sub_8215FA20);
PPC_FUNC_IMPL(__imp__sub_8215FA20) {
	PPC_FUNC_PROLOGUE();
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8215d520
	sub_8215D520(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r30,6
	r11.s64 = r30.s64 + 6;
	// addi r10,r30,7
	ctx.r10.s64 = r30.s64 + 7;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bge cr6,0x8215fad0
	if (!cr6.lt) goto loc_8215FAD0;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8215FA78:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8215fb70
	if (!cr0.eq) goto loc_8215FB70;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_8215FA94:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r5,r5,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r5.s64;
	// beq 0x8215fab8
	if (cr0.eq) goto loc_8215FAB8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8215fa94
	if (cr6.eq) goto loc_8215FA94;
loc_8215FAB8:
	// cmpwi r5,0
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x8215fad0
	if (!cr0.lt) goto loc_8215FAD0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// blt cr6,0x8215fa78
	if (cr6.lt) goto loc_8215FA78;
loc_8215FAD0:
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8215f800
	sub_8215F800(ctx, base);
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// blt cr6,0x8215fb18
	if (cr6.lt) goto loc_8215FB18;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq cr6,0x8215fb0c
	if (cr6.eq) goto loc_8215FB0C;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// b 0x8215fb1c
	goto loc_8215FB1C;
loc_8215FB0C:
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r7,r11,16
	ctx.r7.s64 = r11.s64 + 16;
	// b 0x8215fb1c
	goto loc_8215FB1C;
loc_8215FB18:
	// li r7,16
	ctx.r7.s64 = 16;
loc_8215FB1C:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bge cr6,0x8215fb60
	if (!cr6.lt) goto loc_8215FB60;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// subfic r10,r11,10
	xer.ca = r11.u32 <= 10;
	ctx.r10.s64 = 10 - r11.s64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
loc_8215FB38:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r11,-40
	ctx.r9.s64 = r11.s64 + -40;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne 0x8215fb38
	if (!cr0.eq) goto loc_8215FB38;
loc_8215FB60:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
loc_8215FB70:
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

__attribute__((alias("__imp__sub_8215FB88"))) PPC_WEAK_FUNC(sub_8215FB88);
PPC_FUNC_IMPL(__imp__sub_8215FB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8215fbb0
	goto loc_8215FBB0;
loc_8215FBA4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215fa20
	sub_8215FA20(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8215FBB0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8215fba4
	if (!cr6.eq) goto loc_8215FBA4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8215FBD8"))) PPC_WEAK_FUNC(sub_8215FBD8);
PPC_FUNC_IMPL(__imp__sub_8215FBD8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8215fc00
	goto loc_8215FC00;
loc_8215FBF4:
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bl 0x8215fa20
	sub_8215FA20(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8215FC00:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8215fbf4
	if (!cr0.eq) goto loc_8215FBF4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8215FC34"))) PPC_WEAK_FUNC(sub_8215FC34);
PPC_FUNC_IMPL(__imp__sub_8215FC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215FC38"))) PPC_WEAK_FUNC(sub_8215FC38);
PPC_FUNC_IMPL(__imp__sub_8215FC38) {
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
	// lwz r16,-11752(0)
	r16.u64 = PPC_LOAD_U32(-11752);
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,8816(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8816);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r29,r9,8812
	r29.s64 = ctx.r9.s64 + 8812;
	// bne 0x8215fca0
	if (!cr0.eq) goto loc_8215FCA0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8816, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-11768
	ctx.r4.s64 = r11.s64 + -11768;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8215FCA0:
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
	// beq 0x8215fcd4
	if (cr0.eq) goto loc_8215FCD4;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-140
	ctx.r3.s64 = r28.s64 + -140;
	// bl 0x8215f8b0
	sub_8215F8B0(ctx, base);
	// b 0x8215fcd8
	goto loc_8215FCD8;
loc_8215FCD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215FCD8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8215FC40"))) PPC_WEAK_FUNC(sub_8215FC40);
PPC_FUNC_IMPL(__imp__sub_8215FC40) {
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,8816(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8816);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r29,r9,8812
	r29.s64 = ctx.r9.s64 + 8812;
	// bne 0x8215fca0
	if (!cr0.eq) goto loc_8215FCA0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8816, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-11768
	ctx.r4.s64 = r11.s64 + -11768;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8215FCA0:
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
	// beq 0x8215fcd4
	if (cr0.eq) goto loc_8215FCD4;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-140
	ctx.r3.s64 = r28.s64 + -140;
	// bl 0x8215f8b0
	sub_8215F8B0(ctx, base);
	// b 0x8215fcd8
	goto loc_8215FCD8;
loc_8215FCD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215FCD8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8215FCE0"))) PPC_WEAK_FUNC(sub_8215FCE0);
PPC_FUNC_IMPL(__imp__sub_8215FCE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8816
	r11.s64 = r11.s64 + 8816;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8816
	ctx.r10.s64 = ctx.r10.s64 + 8816;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215FD08"))) PPC_WEAK_FUNC(sub_8215FD08);
PPC_FUNC_IMPL(__imp__sub_8215FD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8215fc40
	sub_8215FC40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215FD14"))) PPC_WEAK_FUNC(sub_8215FD14);
PPC_FUNC_IMPL(__imp__sub_8215FD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215FD18"))) PPC_WEAK_FUNC(sub_8215FD18);
PPC_FUNC_IMPL(__imp__sub_8215FD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3
	r11.s64 = 3;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-196
	ctx.r3.s64 = r11.s64 + -196;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// addi r29,r30,-16
	r29.s64 = r30.s64 + -16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821afb80
	sub_821AFB80(ctx, base);
	// lbz r11,-20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + -20);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// lbz r11,-19(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + -19);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,-12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -8);
	f0.f64 = double(temp.f32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8215FDEC"))) PPC_WEAK_FUNC(sub_8215FDEC);
PPC_FUNC_IMPL(__imp__sub_8215FDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215FDF0"))) PPC_WEAK_FUNC(sub_8215FDF0);
PPC_FUNC_IMPL(__imp__sub_8215FDF0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r11,8820
	r29.s64 = r11.s64 + 8820;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,-196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -196);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-196
	ctx.r3.s64 = r11.s64 + -196;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// addi r28,r31,-16
	r28.s64 = r31.s64 + -16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = r31.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8215fe68
	if (!cr6.gt) goto loc_8215FE68;
	// addi r4,r31,-19
	ctx.r4.s64 = r31.s64 + -19;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
loc_8215FE68:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r27,r31,-12
	r27.s64 = r31.s64 + -12;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x8215febc
	if (!cr6.lt) goto loc_8215FEBC;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r9,-19(r31)
	PPC_STORE_U8(r31.u32 + -19, ctx.r9.u8);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8215FEBC:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x8215fed4
	if (!cr6.lt) goto loc_8215FED4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,-8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -8, temp.u32);
	// b 0x8215fee4
	goto loc_8215FEE4;
loc_8215FED4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-8
	ctx.r4.s64 = r31.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_8215FEE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8215FEEC"))) PPC_WEAK_FUNC(sub_8215FEEC);
PPC_FUNC_IMPL(__imp__sub_8215FEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215FEF0"))) PPC_WEAK_FUNC(sub_8215FEF0);
PPC_FUNC_IMPL(__imp__sub_8215FEF0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,-196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -196);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-196
	ctx.r3.s64 = r11.s64 + -196;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// addi r28,r31,-16
	r28.s64 = r31.s64 + -16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821b0908
	sub_821B0908(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,5856
	ctx.r6.s64 = r11.s64 + 5856;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8215ff80
	if (cr0.eq) goto loc_8215FF80;
	// lbz r11,180(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 180);
	// stb r11,-20(r31)
	PPC_STORE_U8(r31.u32 + -20, r11.u8);
	// lbz r11,181(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 181);
	// stb r11,-19(r31)
	PPC_STORE_U8(r31.u32 + -19, r11.u8);
	// lwz r11,184(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,188(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// stw r11,-12(r31)
	PPC_STORE_U32(r31.u32 + -12, r11.u32);
	// lfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	f0.f64 = double(temp.f32);
	// stfs f0,-8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -8, temp.u32);
loc_8215FF80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8215FF88"))) PPC_WEAK_FUNC(sub_8215FF88);
PPC_FUNC_IMPL(__imp__sub_8215FF88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,-11576(0)
	r16.u64 = PPC_LOAD_U32(-11576);
	// mflr r12
	// bl 0x8239bcfc
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82160008
	if (cr6.eq) goto loc_82160008;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-11600
	r11.s64 = r11.s64 + -11600;
	// addi r10,r10,-11608
	ctx.r10.s64 = ctx.r10.s64 + -11608;
	// addi r3,r30,200
	ctx.r3.s64 = r30.s64 + 200;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,248(r30)
	PPC_STORE_U32(r30.u32 + 248, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,244
	r11.s64 = r30.s64 + 244;
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
loc_82160008:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-11612
	r11.s64 = r11.s64 + -11612;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r9,r9,-11620
	ctx.r9.s64 = ctx.r9.s64 + -11620;
	// lfs f0,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r10,r10,-11684
	ctx.r10.s64 = ctx.r10.s64 + -11684;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-196
	ctx.r10.s64 = r11.s64 + -196;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-240
	ctx.r10.s64 = r11.s64 + -240;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stfs f0,192(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 192, temp.u32);
	// stb r29,180(r30)
	PPC_STORE_U8(r30.u32 + 180, r29.u8);
	// stb r29,181(r30)
	PPC_STORE_U8(r30.u32 + 181, r29.u8);
	// stw r8,184(r30)
	PPC_STORE_U32(r30.u32 + 184, ctx.r8.u32);
	// stw r8,188(r30)
	PPC_STORE_U32(r30.u32 + 188, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8215FF90"))) PPC_WEAK_FUNC(sub_8215FF90);
PPC_FUNC_IMPL(__imp__sub_8215FF90) {
	PPC_FUNC_PROLOGUE();
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82160008
	if (cr6.eq) goto loc_82160008;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-11600
	r11.s64 = r11.s64 + -11600;
	// addi r10,r10,-11608
	ctx.r10.s64 = ctx.r10.s64 + -11608;
	// addi r3,r30,200
	ctx.r3.s64 = r30.s64 + 200;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,248(r30)
	PPC_STORE_U32(r30.u32 + 248, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,244
	r11.s64 = r30.s64 + 244;
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
loc_82160008:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-11612
	r11.s64 = r11.s64 + -11612;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r9,r9,-11620
	ctx.r9.s64 = ctx.r9.s64 + -11620;
	// lfs f0,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r10,r10,-11684
	ctx.r10.s64 = ctx.r10.s64 + -11684;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-196
	ctx.r10.s64 = r11.s64 + -196;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-240
	ctx.r10.s64 = r11.s64 + -240;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stfs f0,192(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 192, temp.u32);
	// stb r29,180(r30)
	PPC_STORE_U8(r30.u32 + 180, r29.u8);
	// stb r29,181(r30)
	PPC_STORE_U8(r30.u32 + 181, r29.u8);
	// stw r8,184(r30)
	PPC_STORE_U32(r30.u32 + 184, ctx.r8.u32);
	// stw r8,188(r30)
	PPC_STORE_U32(r30.u32 + 188, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216009C"))) PPC_WEAK_FUNC(sub_8216009C);
PPC_FUNC_IMPL(__imp__sub_8216009C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821600d0
	if (cr0.eq) goto loc_821600D0;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,200
	ctx.r3.s64 = r11.s64 + 200;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_821600D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821600E0"))) PPC_WEAK_FUNC(sub_821600E0);
PPC_FUNC_IMPL(__imp__sub_821600E0) {
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
	// bl 0x8214d038
	sub_8214D038(ctx, base);
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

__attribute__((alias("__imp__sub_82160110"))) PPC_WEAK_FUNC(sub_82160110);
PPC_FUNC_IMPL(__imp__sub_82160110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x821b0888
	sub_821B0888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82160120"))) PPC_WEAK_FUNC(sub_82160120);
PPC_FUNC_IMPL(__imp__sub_82160120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x821afb18
	sub_821AFB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82160130"))) PPC_WEAK_FUNC(sub_82160130);
PPC_FUNC_IMPL(__imp__sub_82160130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8215fdf0
	sub_8215FDF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216013C"))) PPC_WEAK_FUNC(sub_8216013C);
PPC_FUNC_IMPL(__imp__sub_8216013C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160140"))) PPC_WEAK_FUNC(sub_82160140);
PPC_FUNC_IMPL(__imp__sub_82160140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8215fd18
	sub_8215FD18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216014C"))) PPC_WEAK_FUNC(sub_8216014C);
PPC_FUNC_IMPL(__imp__sub_8216014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160150"))) PPC_WEAK_FUNC(sub_82160150);
PPC_FUNC_IMPL(__imp__sub_82160150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82160748
	sub_82160748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216015C"))) PPC_WEAK_FUNC(sub_8216015C);
PPC_FUNC_IMPL(__imp__sub_8216015C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160160"))) PPC_WEAK_FUNC(sub_82160160);
PPC_FUNC_IMPL(__imp__sub_82160160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8215fef0
	sub_8215FEF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216016C"))) PPC_WEAK_FUNC(sub_8216016C);
PPC_FUNC_IMPL(__imp__sub_8216016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160170"))) PPC_WEAK_FUNC(sub_82160170);
PPC_FUNC_IMPL(__imp__sub_82160170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x821600e0
	sub_821600E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216017C"))) PPC_WEAK_FUNC(sub_8216017C);
PPC_FUNC_IMPL(__imp__sub_8216017C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160180"))) PPC_WEAK_FUNC(sub_82160180);
PPC_FUNC_IMPL(__imp__sub_82160180) {
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
	// lwz r16,-11520(0)
	r16.u64 = PPC_LOAD_U32(-11520);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32136
	r27.s64 = -2106064896;
	// lwz r11,8828(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8828);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82160204
	if (!cr0.eq) goto loc_82160204;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8828, r11.u32);
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
	// bl 0x8214d038
	sub_8214D038(ctx, base);
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
	// stw r3,8824(r27)
	PPC_STORE_U32(r27.u32 + 8824, ctx.r3.u32);
	// b 0x82160208
	goto loc_82160208;
loc_82160204:
	// lwz r3,8824(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8824);
loc_82160208:
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
	// beq 0x82160244
	if (cr0.eq) goto loc_82160244;
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-196
	ctx.r3.s64 = r11.s64 + -196;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x821602c0
	goto loc_821602C0;
loc_82160244:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x821602a4
	if (!cr0.eq) goto loc_821602A4;
	// addic. r11,r30,-200
	xer.ca = r30.u32 > 199;
	r11.s64 = r30.s64 + -200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82160268
	if (!cr0.eq) goto loc_82160268;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82160278
	goto loc_82160278;
loc_82160268:
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-196
	ctx.r3.s64 = r11.s64 + -196;
loc_82160278:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-196
	ctx.r4.s64 = r11.s64 + -196;
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
loc_821602A4:
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-196
	ctx.r3.s64 = r11.s64 + -196;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_821602C0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82160188"))) PPC_WEAK_FUNC(sub_82160188);
PPC_FUNC_IMPL(__imp__sub_82160188) {
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32136
	r27.s64 = -2106064896;
	// lwz r11,8828(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8828);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82160204
	if (!cr0.eq) goto loc_82160204;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8828, r11.u32);
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
	// bl 0x8214d038
	sub_8214D038(ctx, base);
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
	// stw r3,8824(r27)
	PPC_STORE_U32(r27.u32 + 8824, ctx.r3.u32);
	// b 0x82160208
	goto loc_82160208;
loc_82160204:
	// lwz r3,8824(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8824);
loc_82160208:
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
	// beq 0x82160244
	if (cr0.eq) goto loc_82160244;
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-196
	ctx.r3.s64 = r11.s64 + -196;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x821602c0
	goto loc_821602C0;
loc_82160244:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x821602a4
	if (!cr0.eq) goto loc_821602A4;
	// addic. r11,r30,-200
	xer.ca = r30.u32 > 199;
	r11.s64 = r30.s64 + -200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82160268
	if (!cr0.eq) goto loc_82160268;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82160278
	goto loc_82160278;
loc_82160268:
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-196
	ctx.r3.s64 = r11.s64 + -196;
loc_82160278:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-196
	ctx.r4.s64 = r11.s64 + -196;
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
loc_821602A4:
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-196
	ctx.r3.s64 = r11.s64 + -196;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_821602C0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821602CC"))) PPC_WEAK_FUNC(sub_821602CC);
PPC_FUNC_IMPL(__imp__sub_821602CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8828
	r11.s64 = r11.s64 + 8828;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8828
	ctx.r10.s64 = ctx.r10.s64 + 8828;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821602F4"))) PPC_WEAK_FUNC(sub_821602F4);
PPC_FUNC_IMPL(__imp__sub_821602F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821602F8"))) PPC_WEAK_FUNC(sub_821602F8);
PPC_FUNC_IMPL(__imp__sub_821602F8) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-11440(0)
	r16.u64 = PPC_LOAD_U32(-11440);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-16
	ctx.r4.s64 = r29.s64 + -16;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82160378
	if (cr6.eq) goto loc_82160378;
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
	// beq 0x821603d0
	if (cr0.eq) goto loc_821603D0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82160370:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821603d0
	goto loc_821603D0;
loc_82160378:
	// lwz r11,-196(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -196);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,-196
	ctx.r4.s64 = r11.s64 + -196;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821603c4
	if (cr6.eq) goto loc_821603C4;
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
	// beq 0x821603d0
	if (cr0.eq) goto loc_821603D0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82160370
	goto loc_82160370;
loc_821603C4:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_821603D0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82160300"))) PPC_WEAK_FUNC(sub_82160300);
PPC_FUNC_IMPL(__imp__sub_82160300) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-16
	ctx.r4.s64 = r29.s64 + -16;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82160378
	if (cr6.eq) goto loc_82160378;
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
	// beq 0x821603d0
	if (cr0.eq) goto loc_821603D0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82160370:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821603d0
	goto loc_821603D0;
loc_82160378:
	// lwz r11,-196(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -196);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,-196
	ctx.r4.s64 = r11.s64 + -196;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821603c4
	if (cr6.eq) goto loc_821603C4;
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
	// beq 0x821603d0
	if (cr0.eq) goto loc_821603D0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82160370
	goto loc_82160370;
loc_821603C4:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_821603D0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821603DC"))) PPC_WEAK_FUNC(sub_821603DC);
PPC_FUNC_IMPL(__imp__sub_821603DC) {
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

__attribute__((alias("__imp__sub_82160404"))) PPC_WEAK_FUNC(sub_82160404);
PPC_FUNC_IMPL(__imp__sub_82160404) {
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

__attribute__((alias("__imp__sub_8216042C"))) PPC_WEAK_FUNC(sub_8216042C);
PPC_FUNC_IMPL(__imp__sub_8216042C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160430"))) PPC_WEAK_FUNC(sub_82160430);
PPC_FUNC_IMPL(__imp__sub_82160430) {
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
	// lwz r16,-11280(0)
	r16.u64 = PPC_LOAD_U32(-11280);
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,8852(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8852);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8848
	r29.s64 = ctx.r10.s64 + 8848;
	// bne 0x8216049c
	if (!cr0.eq) goto loc_8216049C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8852(r30)
	PPC_STORE_U32(r30.u32 + 8852, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-11332
	ctx.r4.s64 = r11.s64 + -11332;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8852(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8852);
loc_8216049C:
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
	// beq 0x821604d0
	if (cr0.eq) goto loc_821604D0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-20
	ctx.r3.s64 = r27.s64 + -20;
loc_821604C8:
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x82160648
	goto loc_82160648;
loc_821604D0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8844
	r29.s64 = ctx.r10.s64 + 8844;
	// bne 0x821604fc
	if (!cr0.eq) goto loc_821604FC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,8852(r30)
	PPC_STORE_U32(r30.u32 + 8852, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-12620
	ctx.r4.s64 = r11.s64 + -12620;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8852(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8852);
loc_821604FC:
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
	// beq 0x8216052c
	if (cr0.eq) goto loc_8216052C;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-19
	ctx.r3.s64 = r27.s64 + -19;
	// b 0x821604c8
	goto loc_821604C8;
loc_8216052C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8840
	r29.s64 = ctx.r10.s64 + 8840;
	// bne 0x82160558
	if (!cr0.eq) goto loc_82160558;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,8852(r30)
	PPC_STORE_U32(r30.u32 + 8852, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-11344
	ctx.r4.s64 = r11.s64 + -11344;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8852(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8852);
loc_82160558:
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
	// beq 0x8216058c
	if (cr0.eq) goto loc_8216058C;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-16
	ctx.r3.s64 = r27.s64 + -16;
loc_82160584:
	// bl 0x82126dc0
	sub_82126DC0(ctx, base);
	// b 0x82160648
	goto loc_82160648;
loc_8216058C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8836
	r29.s64 = ctx.r10.s64 + 8836;
	// bne 0x821605b8
	if (!cr0.eq) goto loc_821605B8;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,8852(r30)
	PPC_STORE_U32(r30.u32 + 8852, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-11360
	ctx.r4.s64 = r11.s64 + -11360;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8852(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8852);
loc_821605B8:
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
	// beq 0x821605e8
	if (cr0.eq) goto loc_821605E8;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-12
	ctx.r3.s64 = r27.s64 + -12;
	// b 0x82160584
	goto loc_82160584;
loc_821605E8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8832
	r29.s64 = ctx.r10.s64 + 8832;
	// bne 0x82160610
	if (!cr0.eq) goto loc_82160610;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,8852(r30)
	PPC_STORE_U32(r30.u32 + 8852, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-12360
	ctx.r4.s64 = r11.s64 + -12360;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82160610:
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
	// beq 0x82160644
	if (cr0.eq) goto loc_82160644;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-8
	ctx.r3.s64 = r27.s64 + -8;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x82160648
	goto loc_82160648;
loc_82160644:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82160648:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82160438"))) PPC_WEAK_FUNC(sub_82160438);
PPC_FUNC_IMPL(__imp__sub_82160438) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,8852(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8852);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8848
	r29.s64 = ctx.r10.s64 + 8848;
	// bne 0x8216049c
	if (!cr0.eq) goto loc_8216049C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8852(r30)
	PPC_STORE_U32(r30.u32 + 8852, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-11332
	ctx.r4.s64 = r11.s64 + -11332;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8852(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8852);
loc_8216049C:
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
	// beq 0x821604d0
	if (cr0.eq) goto loc_821604D0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-20
	ctx.r3.s64 = r27.s64 + -20;
loc_821604C8:
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x82160648
	goto loc_82160648;
loc_821604D0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8844
	r29.s64 = ctx.r10.s64 + 8844;
	// bne 0x821604fc
	if (!cr0.eq) goto loc_821604FC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,8852(r30)
	PPC_STORE_U32(r30.u32 + 8852, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-12620
	ctx.r4.s64 = r11.s64 + -12620;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8852(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8852);
loc_821604FC:
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
	// beq 0x8216052c
	if (cr0.eq) goto loc_8216052C;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-19
	ctx.r3.s64 = r27.s64 + -19;
	// b 0x821604c8
	goto loc_821604C8;
loc_8216052C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8840
	r29.s64 = ctx.r10.s64 + 8840;
	// bne 0x82160558
	if (!cr0.eq) goto loc_82160558;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,8852(r30)
	PPC_STORE_U32(r30.u32 + 8852, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-11344
	ctx.r4.s64 = r11.s64 + -11344;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8852(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8852);
loc_82160558:
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
	// beq 0x8216058c
	if (cr0.eq) goto loc_8216058C;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-16
	ctx.r3.s64 = r27.s64 + -16;
loc_82160584:
	// bl 0x82126dc0
	sub_82126DC0(ctx, base);
	// b 0x82160648
	goto loc_82160648;
loc_8216058C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8836
	r29.s64 = ctx.r10.s64 + 8836;
	// bne 0x821605b8
	if (!cr0.eq) goto loc_821605B8;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,8852(r30)
	PPC_STORE_U32(r30.u32 + 8852, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-11360
	ctx.r4.s64 = r11.s64 + -11360;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8852(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8852);
loc_821605B8:
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
	// beq 0x821605e8
	if (cr0.eq) goto loc_821605E8;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-12
	ctx.r3.s64 = r27.s64 + -12;
	// b 0x82160584
	goto loc_82160584;
loc_821605E8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8832
	r29.s64 = ctx.r10.s64 + 8832;
	// bne 0x82160610
	if (!cr0.eq) goto loc_82160610;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,8852(r30)
	PPC_STORE_U32(r30.u32 + 8852, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-12360
	ctx.r4.s64 = r11.s64 + -12360;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82160610:
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
	// beq 0x82160644
	if (cr0.eq) goto loc_82160644;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-8
	ctx.r3.s64 = r27.s64 + -8;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x82160648
	goto loc_82160648;
loc_82160644:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82160648:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82160650"))) PPC_WEAK_FUNC(sub_82160650);
PPC_FUNC_IMPL(__imp__sub_82160650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8852
	r11.s64 = r11.s64 + 8852;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8852
	ctx.r10.s64 = ctx.r10.s64 + 8852;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160678"))) PPC_WEAK_FUNC(sub_82160678);
PPC_FUNC_IMPL(__imp__sub_82160678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8852
	r11.s64 = r11.s64 + 8852;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8852
	ctx.r10.s64 = ctx.r10.s64 + 8852;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821606A0"))) PPC_WEAK_FUNC(sub_821606A0);
PPC_FUNC_IMPL(__imp__sub_821606A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8852
	r11.s64 = r11.s64 + 8852;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8852
	ctx.r10.s64 = ctx.r10.s64 + 8852;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821606C8"))) PPC_WEAK_FUNC(sub_821606C8);
PPC_FUNC_IMPL(__imp__sub_821606C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8852
	r11.s64 = r11.s64 + 8852;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8852
	ctx.r10.s64 = ctx.r10.s64 + 8852;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821606F0"))) PPC_WEAK_FUNC(sub_821606F0);
PPC_FUNC_IMPL(__imp__sub_821606F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8852
	r11.s64 = r11.s64 + 8852;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8852
	ctx.r10.s64 = ctx.r10.s64 + 8852;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160718"))) PPC_WEAK_FUNC(sub_82160718);
PPC_FUNC_IMPL(__imp__sub_82160718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82160438
	sub_82160438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82160724"))) PPC_WEAK_FUNC(sub_82160724);
PPC_FUNC_IMPL(__imp__sub_82160724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160728"))) PPC_WEAK_FUNC(sub_82160728);
PPC_FUNC_IMPL(__imp__sub_82160728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82160188
	sub_82160188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82160734"))) PPC_WEAK_FUNC(sub_82160734);
PPC_FUNC_IMPL(__imp__sub_82160734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160738"))) PPC_WEAK_FUNC(sub_82160738);
PPC_FUNC_IMPL(__imp__sub_82160738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82160300
	sub_82160300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82160744"))) PPC_WEAK_FUNC(sub_82160744);
PPC_FUNC_IMPL(__imp__sub_82160744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160748"))) PPC_WEAK_FUNC(sub_82160748);
PPC_FUNC_IMPL(__imp__sub_82160748) {
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
	// addi r31,r3,-200
	r31.s64 = ctx.r3.s64 + -200;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82160784
	if (cr0.eq) goto loc_82160784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_82160784:
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

__attribute__((alias("__imp__sub_821607A0"))) PPC_WEAK_FUNC(sub_821607A0);
PPC_FUNC_IMPL(__imp__sub_821607A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,180(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 180);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216080c
	if (cr0.eq) goto loc_8216080C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x8215d5e8
	sub_8215D5E8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 192);
	f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bl 0x8215ee10
	sub_8215EE10(ctx, base);
loc_8216080C:
	// lbz r11,181(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 181);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216085c
	if (cr0.eq) goto loc_8216085C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x8215d5e8
	sub_8215D5E8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 192);
	f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bl 0x8215ee10
	sub_8215EE10(ctx, base);
loc_8216085C:
	// lwz r5,184(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// cmpwi cr6,r5,9
	cr6.compare<int32_t>(ctx.r5.s32, 9, xer);
	// beq cr6,0x821608a8
	if (cr6.eq) goto loc_821608A8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x8215d5e8
	sub_8215D5E8(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 192);
	f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bl 0x8215ee10
	sub_8215EE10(ctx, base);
loc_821608A8:
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r5,9
	cr6.compare<int32_t>(ctx.r5.s32, 9, xer);
	// beq cr6,0x821608f4
	if (cr6.eq) goto loc_821608F4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x8215d5e8
	sub_8215D5E8(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 192);
	f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bl 0x8215ee10
	sub_8215EE10(ctx, base);
loc_821608F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8216090C"))) PPC_WEAK_FUNC(sub_8216090C);
PPC_FUNC_IMPL(__imp__sub_8216090C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160910"))) PPC_WEAK_FUNC(sub_82160910);
PPC_FUNC_IMPL(__imp__sub_82160910) {
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
	// lwz r16,-11048(0)
	r16.u64 = PPC_LOAD_U32(-11048);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,8860(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8860);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,8856
	r30.s64 = ctx.r9.s64 + 8856;
	// bne 0x8216095c
	if (!cr0.eq) goto loc_8216095C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8860, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-11068
	ctx.r4.s64 = r11.s64 + -11068;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8216095C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82160918"))) PPC_WEAK_FUNC(sub_82160918);
PPC_FUNC_IMPL(__imp__sub_82160918) {
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,8860(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8860);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,8856
	r30.s64 = ctx.r9.s64 + 8856;
	// bne 0x8216095c
	if (!cr0.eq) goto loc_8216095C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8860, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-11068
	ctx.r4.s64 = r11.s64 + -11068;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8216095C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82160970"))) PPC_WEAK_FUNC(sub_82160970);
PPC_FUNC_IMPL(__imp__sub_82160970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8860
	r11.s64 = r11.s64 + 8860;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8860
	ctx.r10.s64 = ctx.r10.s64 + 8860;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160998"))) PPC_WEAK_FUNC(sub_82160998);
PPC_FUNC_IMPL(__imp__sub_82160998) {
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
	// bl 0x82160918
	sub_82160918(ctx, base);
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

__attribute__((alias("__imp__sub_821609C8"))) PPC_WEAK_FUNC(sub_821609C8);
PPC_FUNC_IMPL(__imp__sub_821609C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,-10896(0)
	r16.u64 = PPC_LOAD_U32(-10896);
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq cr6,0x82160a10
	if (cr6.eq) goto loc_82160A10;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// addi r11,r11,-10912
	r11.s64 = r11.s64 + -10912;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
loc_82160A10:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-11084
	r11.s64 = r11.s64 + -11084;
	// addi r10,r10,-11148
	ctx.r10.s64 = ctx.r10.s64 + -11148;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r9,r9,-10932
	ctx.r9.s64 = ctx.r9.s64 + -10932;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r8,r8,-10996
	ctx.r8.s64 = ctx.r8.s64 + -10996;
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
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_821609D0"))) PPC_WEAK_FUNC(sub_821609D0);
PPC_FUNC_IMPL(__imp__sub_821609D0) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq cr6,0x82160a10
	if (cr6.eq) goto loc_82160A10;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// addi r11,r11,-10912
	r11.s64 = r11.s64 + -10912;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
loc_82160A10:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-11084
	r11.s64 = r11.s64 + -11084;
	// addi r10,r10,-11148
	ctx.r10.s64 = ctx.r10.s64 + -11148;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r9,r9,-10932
	ctx.r9.s64 = ctx.r9.s64 + -10932;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r8,r8,-10996
	ctx.r8.s64 = ctx.r8.s64 + -10996;
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
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82160A74"))) PPC_WEAK_FUNC(sub_82160A74);
PPC_FUNC_IMPL(__imp__sub_82160A74) {
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
	// beq 0x82160aa8
	if (cr0.eq) goto loc_82160AA8;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_82160AA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160AB8"))) PPC_WEAK_FUNC(sub_82160AB8);
PPC_FUNC_IMPL(__imp__sub_82160AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215d680
	sub_8215D680(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8215da18
	sub_8215DA18(ctx, base);
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

__attribute__((alias("__imp__sub_82160AF8"))) PPC_WEAK_FUNC(sub_82160AF8);
PPC_FUNC_IMPL(__imp__sub_82160AF8) {
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
	// lwz r16,-10832(0)
	r16.u64 = PPC_LOAD_U32(-10832);
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-10856
	r11.s64 = r11.s64 + -10856;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82160b50
	if (cr0.eq) goto loc_82160B50;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_82160B50:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8268
	r11.s64 = r11.s64 + 8268;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82160B00"))) PPC_WEAK_FUNC(sub_82160B00);
PPC_FUNC_IMPL(__imp__sub_82160B00) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-10856
	r11.s64 = r11.s64 + -10856;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82160b50
	if (cr0.eq) goto loc_82160B50;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_82160B50:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8268
	r11.s64 = r11.s64 + 8268;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82160B74"))) PPC_WEAK_FUNC(sub_82160B74);
PPC_FUNC_IMPL(__imp__sub_82160B74) {
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
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82126688
	sub_82126688(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160B9C"))) PPC_WEAK_FUNC(sub_82160B9C);
PPC_FUNC_IMPL(__imp__sub_82160B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160BA0"))) PPC_WEAK_FUNC(sub_82160BA0);
PPC_FUNC_IMPL(__imp__sub_82160BA0) {
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
	// bl 0x82160b00
	sub_82160B00(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82160bd0
	if (cr0.eq) goto loc_82160BD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82160BD0:
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

__attribute__((alias("__imp__sub_82160BEC"))) PPC_WEAK_FUNC(sub_82160BEC);
PPC_FUNC_IMPL(__imp__sub_82160BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160BF0"))) PPC_WEAK_FUNC(sub_82160BF0);
PPC_FUNC_IMPL(__imp__sub_82160BF0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82160c5c
	if (cr6.eq) goto loc_82160C5C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82160c38
	if (cr6.eq) goto loc_82160C38;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_82160C38:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq cr6,0x82160c5c
	if (cr6.eq) goto loc_82160C5C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82160C5C:
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

__attribute__((alias("__imp__sub_82160C74"))) PPC_WEAK_FUNC(sub_82160C74);
PPC_FUNC_IMPL(__imp__sub_82160C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160C78"))) PPC_WEAK_FUNC(sub_82160C78);
PPC_FUNC_IMPL(__imp__sub_82160C78) {
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
	// addi r31,r11,5240
	r31.s64 = r11.s64 + 5240;
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

__attribute__((alias("__imp__sub_82160CCC"))) PPC_WEAK_FUNC(sub_82160CCC);
PPC_FUNC_IMPL(__imp__sub_82160CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160CD0"))) PPC_WEAK_FUNC(sub_82160CD0);
PPC_FUNC_IMPL(__imp__sub_82160CD0) {
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
	// lwz r16,-10776(0)
	r16.u64 = PPC_LOAD_U32(-10776);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32136
	r27.s64 = -2106064896;
	// lwz r11,8868(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8868);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82160d54
	if (!cr0.eq) goto loc_82160D54;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8868, r11.u32);
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
	// bl 0x82160918
	sub_82160918(ctx, base);
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
	// stw r3,8864(r27)
	PPC_STORE_U32(r27.u32 + 8864, ctx.r3.u32);
	// b 0x82160d58
	goto loc_82160D58;
loc_82160D54:
	// lwz r3,8864(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8864);
loc_82160D58:
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
	// beq 0x82160d94
	if (cr0.eq) goto loc_82160D94;
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82160e10
	goto loc_82160E10;
loc_82160D94:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82160df4
	if (!cr0.eq) goto loc_82160DF4;
	// addic. r11,r30,-8
	xer.ca = r30.u32 > 7;
	r11.s64 = r30.s64 + -8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82160db8
	if (!cr0.eq) goto loc_82160DB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82160dc8
	goto loc_82160DC8;
loc_82160DB8:
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
loc_82160DC8:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
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
loc_82160DF4:
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82160E10:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82160CD8"))) PPC_WEAK_FUNC(sub_82160CD8);
PPC_FUNC_IMPL(__imp__sub_82160CD8) {
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32136
	r27.s64 = -2106064896;
	// lwz r11,8868(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8868);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82160d54
	if (!cr0.eq) goto loc_82160D54;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8868, r11.u32);
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
	// bl 0x82160918
	sub_82160918(ctx, base);
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
	// stw r3,8864(r27)
	PPC_STORE_U32(r27.u32 + 8864, ctx.r3.u32);
	// b 0x82160d58
	goto loc_82160D58;
loc_82160D54:
	// lwz r3,8864(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8864);
loc_82160D58:
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
	// beq 0x82160d94
	if (cr0.eq) goto loc_82160D94;
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82160e10
	goto loc_82160E10;
loc_82160D94:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82160df4
	if (!cr0.eq) goto loc_82160DF4;
	// addic. r11,r30,-8
	xer.ca = r30.u32 > 7;
	r11.s64 = r30.s64 + -8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82160db8
	if (!cr0.eq) goto loc_82160DB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82160dc8
	goto loc_82160DC8;
loc_82160DB8:
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
loc_82160DC8:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
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
loc_82160DF4:
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82160E10:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82160E1C"))) PPC_WEAK_FUNC(sub_82160E1C);
PPC_FUNC_IMPL(__imp__sub_82160E1C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8868
	r11.s64 = r11.s64 + 8868;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8868
	ctx.r10.s64 = ctx.r10.s64 + 8868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160E44"))) PPC_WEAK_FUNC(sub_82160E44);
PPC_FUNC_IMPL(__imp__sub_82160E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160E48"))) PPC_WEAK_FUNC(sub_82160E48);
PPC_FUNC_IMPL(__imp__sub_82160E48) {
	PPC_FUNC_PROLOGUE();
	// b 0x82160b00
	sub_82160B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82160E4C"))) PPC_WEAK_FUNC(sub_82160E4C);
PPC_FUNC_IMPL(__imp__sub_82160E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160E50"))) PPC_WEAK_FUNC(sub_82160E50);
PPC_FUNC_IMPL(__imp__sub_82160E50) {
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
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82160e80
	if (cr0.eq) goto loc_82160E80;
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82160E80:
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
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

__attribute__((alias("__imp__sub_82160E9C"))) PPC_WEAK_FUNC(sub_82160E9C);
PPC_FUNC_IMPL(__imp__sub_82160E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160EA0"))) PPC_WEAK_FUNC(sub_82160EA0);
PPC_FUNC_IMPL(__imp__sub_82160EA0) {
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
	// lwz r16,-10608(0)
	r16.u64 = PPC_LOAD_U32(-10608);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-10636
	r11.s64 = r11.s64 + -10636;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r30,-164
	r29.s64 = r30.s64 + -164;
	// addi r10,r10,-10644
	ctx.r10.s64 = ctx.r10.s64 + -10644;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,-172(r30)
	PPC_STORE_U32(r30.u32 + -172, r11.u32);
	// lwz r11,-168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -168);
	// addi r9,r9,-10708
	ctx.r9.s64 = ctx.r9.s64 + -10708;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-168(r11)
	PPC_STORE_U32(r11.u32 + -168, ctx.r9.u32);
	// lwz r11,-168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -168);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-168
	ctx.r10.s64 = r11.s64 + -168;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-172(r11)
	PPC_STORE_U32(r11.u32 + -172, ctx.r10.u32);
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// bl 0x82160b00
	sub_82160B00(ctx, base);
	// addic. r11,r30,-172
	xer.ca = r30.u32 > 171;
	r11.s64 = r30.s64 + -172;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82160f1c
	if (!cr0.eq) goto loc_82160F1C;
	// li r29,0
	r29.s64 = 0;
loc_82160F1C:
	// addi r3,r29,152
	ctx.r3.s64 = r29.s64 + 152;
	// bl 0x8215f6c0
	sub_8215F6C0(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82160EA8"))) PPC_WEAK_FUNC(sub_82160EA8);
PPC_FUNC_IMPL(__imp__sub_82160EA8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-10636
	r11.s64 = r11.s64 + -10636;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r30,-164
	r29.s64 = r30.s64 + -164;
	// addi r10,r10,-10644
	ctx.r10.s64 = ctx.r10.s64 + -10644;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,-172(r30)
	PPC_STORE_U32(r30.u32 + -172, r11.u32);
	// lwz r11,-168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -168);
	// addi r9,r9,-10708
	ctx.r9.s64 = ctx.r9.s64 + -10708;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-168(r11)
	PPC_STORE_U32(r11.u32 + -168, ctx.r9.u32);
	// lwz r11,-168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -168);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-168
	ctx.r10.s64 = r11.s64 + -168;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-172(r11)
	PPC_STORE_U32(r11.u32 + -172, ctx.r10.u32);
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// bl 0x82160b00
	sub_82160B00(ctx, base);
	// addic. r11,r30,-172
	xer.ca = r30.u32 > 171;
	r11.s64 = r30.s64 + -172;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82160f1c
	if (!cr0.eq) goto loc_82160F1C;
	// li r29,0
	r29.s64 = 0;
loc_82160F1C:
	// addi r3,r29,152
	ctx.r3.s64 = r29.s64 + 152;
	// bl 0x8215f6c0
	sub_8215F6C0(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82160F2C"))) PPC_WEAK_FUNC(sub_82160F2C);
PPC_FUNC_IMPL(__imp__sub_82160F2C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
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
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-172
	xer.ca = r11.u32 > 171;
	r11.s64 = r11.s64 + -172;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82160f5c
	if (cr0.eq) goto loc_82160F5C;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,-172
	r11.s64 = r11.s64 + -172;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x82160f64
	goto loc_82160F64;
loc_82160F5C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82160F64:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r11,152
	ctx.r3.s64 = r11.s64 + 152;
	// bl 0x8215f6c0
	sub_8215F6C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160F80"))) PPC_WEAK_FUNC(sub_82160F80);
PPC_FUNC_IMPL(__imp__sub_82160F80) {
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
	// bl 0x8214d0c0
	sub_8214D0C0(ctx, base);
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

__attribute__((alias("__imp__sub_82160FB0"))) PPC_WEAK_FUNC(sub_82160FB0);
PPC_FUNC_IMPL(__imp__sub_82160FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82160f80
	sub_82160F80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82160FBC"))) PPC_WEAK_FUNC(sub_82160FBC);
PPC_FUNC_IMPL(__imp__sub_82160FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160FC0"))) PPC_WEAK_FUNC(sub_82160FC0);
PPC_FUNC_IMPL(__imp__sub_82160FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82161958
	sub_82161958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82160FCC"))) PPC_WEAK_FUNC(sub_82160FCC);
PPC_FUNC_IMPL(__imp__sub_82160FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160FD0"))) PPC_WEAK_FUNC(sub_82160FD0);
PPC_FUNC_IMPL(__imp__sub_82160FD0) {
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
	// lwz r16,-10536(0)
	r16.u64 = PPC_LOAD_U32(-10536);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32136
	r27.s64 = -2106064896;
	// lwz r11,8876(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8876);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82161054
	if (!cr0.eq) goto loc_82161054;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8876, r11.u32);
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
	// bl 0x8214d0c0
	sub_8214D0C0(ctx, base);
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
	// stw r3,8872(r27)
	PPC_STORE_U32(r27.u32 + 8872, ctx.r3.u32);
	// b 0x82161058
	goto loc_82161058;
loc_82161054:
	// lwz r3,8872(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8872);
loc_82161058:
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
	// beq 0x82161094
	if (cr0.eq) goto loc_82161094;
	// lwz r11,-168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -168);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-168
	ctx.r3.s64 = r11.s64 + -168;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82161110
	goto loc_82161110;
loc_82161094:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x821610f4
	if (!cr0.eq) goto loc_821610F4;
	// addic. r11,r30,-172
	xer.ca = r30.u32 > 171;
	r11.s64 = r30.s64 + -172;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821610b8
	if (!cr0.eq) goto loc_821610B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821610c8
	goto loc_821610C8;
loc_821610B8:
	// lwz r11,-168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -168);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-168
	ctx.r3.s64 = r11.s64 + -168;
loc_821610C8:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -168);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-168
	ctx.r4.s64 = r11.s64 + -168;
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
loc_821610F4:
	// lwz r11,-168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -168);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-168
	ctx.r3.s64 = r11.s64 + -168;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82161110:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82160FD8"))) PPC_WEAK_FUNC(sub_82160FD8);
PPC_FUNC_IMPL(__imp__sub_82160FD8) {
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32136
	r27.s64 = -2106064896;
	// lwz r11,8876(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8876);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82161054
	if (!cr0.eq) goto loc_82161054;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8876, r11.u32);
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
	// bl 0x8214d0c0
	sub_8214D0C0(ctx, base);
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
	// stw r3,8872(r27)
	PPC_STORE_U32(r27.u32 + 8872, ctx.r3.u32);
	// b 0x82161058
	goto loc_82161058;
loc_82161054:
	// lwz r3,8872(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8872);
loc_82161058:
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
	// beq 0x82161094
	if (cr0.eq) goto loc_82161094;
	// lwz r11,-168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -168);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-168
	ctx.r3.s64 = r11.s64 + -168;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82161110
	goto loc_82161110;
loc_82161094:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x821610f4
	if (!cr0.eq) goto loc_821610F4;
	// addic. r11,r30,-172
	xer.ca = r30.u32 > 171;
	r11.s64 = r30.s64 + -172;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821610b8
	if (!cr0.eq) goto loc_821610B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821610c8
	goto loc_821610C8;
loc_821610B8:
	// lwz r11,-168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -168);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-168
	ctx.r3.s64 = r11.s64 + -168;
loc_821610C8:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -168);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-168
	ctx.r4.s64 = r11.s64 + -168;
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
loc_821610F4:
	// lwz r11,-168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -168);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-168
	ctx.r3.s64 = r11.s64 + -168;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82161110:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8216111C"))) PPC_WEAK_FUNC(sub_8216111C);
PPC_FUNC_IMPL(__imp__sub_8216111C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8876
	r11.s64 = r11.s64 + 8876;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8876
	ctx.r10.s64 = ctx.r10.s64 + 8876;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82161144"))) PPC_WEAK_FUNC(sub_82161144);
PPC_FUNC_IMPL(__imp__sub_82161144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82161148"))) PPC_WEAK_FUNC(sub_82161148);
PPC_FUNC_IMPL(__imp__sub_82161148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821611a0
	if (!cr0.eq) goto loc_821611A0;
	// lwz r4,164(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x821611a0
	if (cr0.eq) goto loc_821611A0;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215e3c0
	sub_8215E3C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215d680
	sub_8215D680(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8215da18
	sub_8215DA18(ctx, base);
loc_821611A0:
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

__attribute__((alias("__imp__sub_821611B4"))) PPC_WEAK_FUNC(sub_821611B4);
PPC_FUNC_IMPL(__imp__sub_821611B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821611B8"))) PPC_WEAK_FUNC(sub_821611B8);
PPC_FUNC_IMPL(__imp__sub_821611B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// bl 0x8215d768
	sub_8215D768(ctx, base);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821611e4
	if (cr0.eq) goto loc_821611E4;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// bl 0x8215fb88
	sub_8215FB88(ctx, base);
loc_821611E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215d680
	sub_8215D680(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8215da18
	sub_8215DA18(ctx, base);
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

__attribute__((alias("__imp__sub_82161210"))) PPC_WEAK_FUNC(sub_82161210);
PPC_FUNC_IMPL(__imp__sub_82161210) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-10456(0)
	r16.u64 = PPC_LOAD_U32(-10456);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-164
	ctx.r4.s64 = r29.s64 + -164;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b3e18
	sub_821B3E18(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82161290
	if (cr6.eq) goto loc_82161290;
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
	// beq 0x821612e8
	if (cr0.eq) goto loc_821612E8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82161288:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821612e8
	goto loc_821612E8;
loc_82161290:
	// lwz r11,-168(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -168);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,-168
	ctx.r4.s64 = r11.s64 + -168;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821612dc
	if (cr6.eq) goto loc_821612DC;
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
	// beq 0x821612e8
	if (cr0.eq) goto loc_821612E8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82161288
	goto loc_82161288;
loc_821612DC:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_821612E8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82161218"))) PPC_WEAK_FUNC(sub_82161218);
PPC_FUNC_IMPL(__imp__sub_82161218) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-164
	ctx.r4.s64 = r29.s64 + -164;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b3e18
	sub_821B3E18(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82161290
	if (cr6.eq) goto loc_82161290;
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
	// beq 0x821612e8
	if (cr0.eq) goto loc_821612E8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82161288:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821612e8
	goto loc_821612E8;
loc_82161290:
	// lwz r11,-168(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -168);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,-168
	ctx.r4.s64 = r11.s64 + -168;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821612dc
	if (cr6.eq) goto loc_821612DC;
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
	// beq 0x821612e8
	if (cr0.eq) goto loc_821612E8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82161288
	goto loc_82161288;
loc_821612DC:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_821612E8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821612F4"))) PPC_WEAK_FUNC(sub_821612F4);
PPC_FUNC_IMPL(__imp__sub_821612F4) {
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

__attribute__((alias("__imp__sub_8216131C"))) PPC_WEAK_FUNC(sub_8216131C);
PPC_FUNC_IMPL(__imp__sub_8216131C) {
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

__attribute__((alias("__imp__sub_82161344"))) PPC_WEAK_FUNC(sub_82161344);
PPC_FUNC_IMPL(__imp__sub_82161344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82161348"))) PPC_WEAK_FUNC(sub_82161348);
PPC_FUNC_IMPL(__imp__sub_82161348) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82161380
	if (cr6.eq) goto loc_82161380;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82161380:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x821613b0
	if (!cr6.eq) goto loc_821613B0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,5240
	ctx.r6.s64 = r11.s64 + 5240;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160bf0
	sub_82160BF0(ctx, base);
loc_821613B0:
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

__attribute__((alias("__imp__sub_821613C4"))) PPC_WEAK_FUNC(sub_821613C4);
PPC_FUNC_IMPL(__imp__sub_821613C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821613C8"))) PPC_WEAK_FUNC(sub_821613C8);
PPC_FUNC_IMPL(__imp__sub_821613C8) {
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
	// bl 0x82160b00
	sub_82160B00(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821613f8
	if (cr0.eq) goto loc_821613F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_821613F8:
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

__attribute__((alias("__imp__sub_82161414"))) PPC_WEAK_FUNC(sub_82161414);
PPC_FUNC_IMPL(__imp__sub_82161414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82161418"))) PPC_WEAK_FUNC(sub_82161418);
PPC_FUNC_IMPL(__imp__sub_82161418) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216144c
	if (cr0.eq) goto loc_8216144C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// b 0x82161454
	goto loc_82161454;
loc_8216144C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
loc_82161454:
	// bl 0x823594a8
	sub_823594A8(ctx, base);
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

__attribute__((alias("__imp__sub_82161470"))) PPC_WEAK_FUNC(sub_82161470);
PPC_FUNC_IMPL(__imp__sub_82161470) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821614e0
	if (cr0.eq) goto loc_821614E0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821614e0
	if (cr0.eq) goto loc_821614E0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,5240
	r31.s64 = r11.s64 + 5240;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821614e4
	goto loc_821614E4;
loc_821614E0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821614E4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82160bf0
	sub_82160BF0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821614F8"))) PPC_WEAK_FUNC(sub_821614F8);
PPC_FUNC_IMPL(__imp__sub_821614F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82160fd8
	sub_82160FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82161504"))) PPC_WEAK_FUNC(sub_82161504);
PPC_FUNC_IMPL(__imp__sub_82161504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82161508"))) PPC_WEAK_FUNC(sub_82161508);
PPC_FUNC_IMPL(__imp__sub_82161508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82161218
	sub_82161218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82161514"))) PPC_WEAK_FUNC(sub_82161514);
PPC_FUNC_IMPL(__imp__sub_82161514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82161518"))) PPC_WEAK_FUNC(sub_82161518);
PPC_FUNC_IMPL(__imp__sub_82161518) {
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
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82161548
	if (cr0.eq) goto loc_82161548;
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82161548:
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
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

__attribute__((alias("__imp__sub_82161564"))) PPC_WEAK_FUNC(sub_82161564);
PPC_FUNC_IMPL(__imp__sub_82161564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82161568"))) PPC_WEAK_FUNC(sub_82161568);
PPC_FUNC_IMPL(__imp__sub_82161568) {
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
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x821615a4
	if (cr6.eq) goto loc_821615A4;
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x82160bf0
	sub_82160BF0(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821615a4
	if (cr0.eq) goto loc_821615A4;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// bl 0x8215fb88
	sub_8215FB88(ctx, base);
loc_821615A4:
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

__attribute__((alias("__imp__sub_821615B8"))) PPC_WEAK_FUNC(sub_821615B8);
PPC_FUNC_IMPL(__imp__sub_821615B8) {
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
	// li r11,1
	r11.s64 = 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,-168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -168);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-168
	ctx.r3.s64 = r11.s64 + -168;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = r31.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82161418
	sub_82161418(ctx, base);
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

__attribute__((alias("__imp__sub_82161628"))) PPC_WEAK_FUNC(sub_82161628);
PPC_FUNC_IMPL(__imp__sub_82161628) {
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
	// lwz r16,-10344(0)
	r16.u64 = PPC_LOAD_U32(-10344);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,8880
	ctx.r4.s64 = r11.s64 + 8880;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,-168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -168);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-168
	ctx.r3.s64 = r11.s64 + -168;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// addic. r11,r30,-172
	xer.ca = r30.u32 > 171;
	r11.s64 = r30.s64 + -172;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82161684
	if (!cr0.eq) goto loc_82161684;
	// li r11,0
	r11.s64 = 0;
	// b 0x82161694
	goto loc_82161694;
loc_82161684:
	// lwz r11,-168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -168);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-168
	r11.s64 = r11.s64 + -168;
loc_82161694:
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-10372
	r11.s64 = r11.s64 + -10372;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82161470
	sub_82161470(ctx, base);
	// addi r3,r30,-172
	ctx.r3.s64 = r30.s64 + -172;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82161568
	sub_82161568(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82160b00
	sub_82160B00(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82161630"))) PPC_WEAK_FUNC(sub_82161630);
PPC_FUNC_IMPL(__imp__sub_82161630) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,8880
	ctx.r4.s64 = r11.s64 + 8880;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,-168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -168);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-168
	ctx.r3.s64 = r11.s64 + -168;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// addic. r11,r30,-172
	xer.ca = r30.u32 > 171;
	r11.s64 = r30.s64 + -172;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82161684
	if (!cr0.eq) goto loc_82161684;
	// li r11,0
	r11.s64 = 0;
	// b 0x82161694
	goto loc_82161694;
loc_82161684:
	// lwz r11,-168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -168);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-168
	r11.s64 = r11.s64 + -168;
loc_82161694:
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-10372
	r11.s64 = r11.s64 + -10372;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82161470
	sub_82161470(ctx, base);
	// addi r3,r30,-172
	ctx.r3.s64 = r30.s64 + -172;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82161568
	sub_82161568(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82160b00
	sub_82160B00(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821616D4"))) PPC_WEAK_FUNC(sub_821616D4);
PPC_FUNC_IMPL(__imp__sub_821616D4) {
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
	// bl 0x82126688
	sub_82126688(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821616FC"))) PPC_WEAK_FUNC(sub_821616FC);
PPC_FUNC_IMPL(__imp__sub_821616FC) {
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
	// bl 0x82160e48
	sub_82160E48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82161724"))) PPC_WEAK_FUNC(sub_82161724);
PPC_FUNC_IMPL(__imp__sub_82161724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82161728"))) PPC_WEAK_FUNC(sub_82161728);
PPC_FUNC_IMPL(__imp__sub_82161728) {
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
	// lwz r11,-168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -168);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-168
	ctx.r3.s64 = r11.s64 + -168;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,5924
	ctx.r6.s64 = r11.s64 + 5924;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216178c
	if (cr0.eq) goto loc_8216178C;
	// addi r3,r31,-172
	ctx.r3.s64 = r31.s64 + -172;
	// lwz r4,164(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// bl 0x82161568
	sub_82161568(ctx, base);
loc_8216178C:
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

__attribute__((alias("__imp__sub_821617A4"))) PPC_WEAK_FUNC(sub_821617A4);
PPC_FUNC_IMPL(__imp__sub_821617A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821617A8"))) PPC_WEAK_FUNC(sub_821617A8);
PPC_FUNC_IMPL(__imp__sub_821617A8) {
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
	// lwz r16,-10256(0)
	r16.u64 = PPC_LOAD_U32(-10256);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,8888(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8888);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r29,r9,8884
	r29.s64 = ctx.r9.s64 + 8884;
	// bne 0x82161810
	if (!cr0.eq) goto loc_82161810;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8888, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-10280
	ctx.r4.s64 = r11.s64 + -10280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82161810:
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
	// beq 0x8216189c
	if (cr0.eq) goto loc_8216189C;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// bne cr6,0x8216184c
	if (!cr6.eq) goto loc_8216184C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82160c78
	sub_82160C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,-172
	ctx.r3.s64 = r28.s64 + -172;
	// bl 0x82161568
	sub_82161568(ctx, base);
	// b 0x82161894
	goto loc_82161894;
loc_8216184C:
	// lwz r11,-8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82161868
	if (cr0.eq) goto loc_82161868;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82161868:
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82161894
	if (cr0.eq) goto loc_82161894;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82161894:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821618c0
	goto loc_821618C0;
loc_8216189C:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r28,-12
	ctx.r3.s64 = r28.s64 + -12;
	// bl 0x8215fc40
	sub_8215FC40(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_821618C0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821617B0"))) PPC_WEAK_FUNC(sub_821617B0);
PPC_FUNC_IMPL(__imp__sub_821617B0) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,8888(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8888);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r29,r9,8884
	r29.s64 = ctx.r9.s64 + 8884;
	// bne 0x82161810
	if (!cr0.eq) goto loc_82161810;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8888, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-10280
	ctx.r4.s64 = r11.s64 + -10280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82161810:
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
	// beq 0x8216189c
	if (cr0.eq) goto loc_8216189C;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// bne cr6,0x8216184c
	if (!cr6.eq) goto loc_8216184C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82160c78
	sub_82160C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,-172
	ctx.r3.s64 = r28.s64 + -172;
	// bl 0x82161568
	sub_82161568(ctx, base);
	// b 0x82161894
	goto loc_82161894;
loc_8216184C:
	// lwz r11,-8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82161868
	if (cr0.eq) goto loc_82161868;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82161868:
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82161894
	if (cr0.eq) goto loc_82161894;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82161894:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821618c0
	goto loc_821618C0;
loc_8216189C:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r28,-12
	ctx.r3.s64 = r28.s64 + -12;
	// bl 0x8215fc40
	sub_8215FC40(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_821618C0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821618C8"))) PPC_WEAK_FUNC(sub_821618C8);
PPC_FUNC_IMPL(__imp__sub_821618C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8888
	r11.s64 = r11.s64 + 8888;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8888
	ctx.r10.s64 = ctx.r10.s64 + 8888;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821618F0"))) PPC_WEAK_FUNC(sub_821618F0);
PPC_FUNC_IMPL(__imp__sub_821618F0) {
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

__attribute__((alias("__imp__sub_82161918"))) PPC_WEAK_FUNC(sub_82161918);
PPC_FUNC_IMPL(__imp__sub_82161918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821615b8
	sub_821615B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82161924"))) PPC_WEAK_FUNC(sub_82161924);
PPC_FUNC_IMPL(__imp__sub_82161924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82161928"))) PPC_WEAK_FUNC(sub_82161928);
PPC_FUNC_IMPL(__imp__sub_82161928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821617b0
	sub_821617B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82161934"))) PPC_WEAK_FUNC(sub_82161934);
PPC_FUNC_IMPL(__imp__sub_82161934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

