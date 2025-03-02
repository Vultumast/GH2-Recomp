#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821570D8"))) PPC_WEAK_FUNC(sub_821570D8);
PPC_FUNC_IMPL(__imp__sub_821570D8) {
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
	// bl 0x82156240
	sub_82156240(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82157118"))) PPC_WEAK_FUNC(sub_82157118);
PPC_FUNC_IMPL(__imp__sub_82157118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-16640
	ctx.r4.s64 = r11.s64 + -16640;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8215714c
	if (cr0.eq) goto loc_8215714C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82154100
	sub_82154100(ctx, base);
loc_8215714C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821baf10
	sub_821BAF10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82154f78
	sub_82154F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82151e80
	sub_82151E80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82156b78
	sub_82156B78(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82157194"))) PPC_WEAK_FUNC(sub_82157194);
PPC_FUNC_IMPL(__imp__sub_82157194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157198"))) PPC_WEAK_FUNC(sub_82157198);
PPC_FUNC_IMPL(__imp__sub_82157198) {
	PPC_FUNC_PROLOGUE();
	// b 0x82156df8
	sub_82156DF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215719C"))) PPC_WEAK_FUNC(sub_8215719C);
PPC_FUNC_IMPL(__imp__sub_8215719C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821571A0"))) PPC_WEAK_FUNC(sub_821571A0);
PPC_FUNC_IMPL(__imp__sub_821571A0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x821571e4
	if (cr6.eq) goto loc_821571E4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r4.s64 = r11.s32 >> 4;
	// bl 0x82156ea0
	sub_82156EA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821551d8
	sub_821551D8(ctx, base);
loc_821571E4:
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

__attribute__((alias("__imp__sub_821571FC"))) PPC_WEAK_FUNC(sub_821571FC);
PPC_FUNC_IMPL(__imp__sub_821571FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157200"))) PPC_WEAK_FUNC(sub_82157200);
PPC_FUNC_IMPL(__imp__sub_82157200) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,-80
	ctx.r3.s64 = r31.s64 + -80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x821b9da0
	sub_821B9DA0(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1640
	ctx.r6.s64 = r11.s64 + 1640;
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
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x821572a4
	if (cr0.eq) goto loc_821572A4;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// beq cr6,0x821572a4
	if (cr6.eq) goto loc_821572A4;
	// addi r4,r30,436
	ctx.r4.s64 = r30.s64 + 436;
	// addi r3,r31,-84
	ctx.r3.s64 = r31.s64 + -84;
	// bl 0x821571a0
	sub_821571A0(ctx, base);
	// lwz r11,452(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 452);
	// addi r3,r31,-60
	ctx.r3.s64 = r31.s64 + -60;
	// stw r11,-68(r31)
	PPC_STORE_U32(r31.u32 + -68, r11.u32);
	// lwz r11,456(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 456);
	// stw r11,-64(r31)
	PPC_STORE_U32(r31.u32 + -64, r11.u32);
	// lwz r4,468(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 468);
	// bl 0x82131148
	sub_82131148(ctx, base);
	// lwz r11,472(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 472);
	// addi r3,r31,-36
	ctx.r3.s64 = r31.s64 + -36;
	// stw r11,-48(r31)
	PPC_STORE_U32(r31.u32 + -48, r11.u32);
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// stw r11,-44(r31)
	PPC_STORE_U32(r31.u32 + -44, r11.u32);
	// lbz r11,480(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 480);
	// stb r11,-40(r31)
	PPC_STORE_U8(r31.u32 + -40, r11.u8);
	// lwz r4,492(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 492);
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// addi r3,r31,-520
	ctx.r3.s64 = r31.s64 + -520;
	// bl 0x82151e80
	sub_82151E80(ctx, base);
loc_821572A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821572AC"))) PPC_WEAK_FUNC(sub_821572AC);
PPC_FUNC_IMPL(__imp__sub_821572AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821572B0"))) PPC_WEAK_FUNC(sub_821572B0);
PPC_FUNC_IMPL(__imp__sub_821572B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82157200
	sub_82157200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821572BC"))) PPC_WEAK_FUNC(sub_821572BC);
PPC_FUNC_IMPL(__imp__sub_821572BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821572C0"))) PPC_WEAK_FUNC(sub_821572C0);
PPC_FUNC_IMPL(__imp__sub_821572C0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// srawi. r30,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r30.s64 = r11.s32 >> 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x82157304
	if (!cr0.gt) goto loc_82157304;
	// subf r27,r29,r5
	r27.s64 = ctx.r5.s64 - r29.s64;
loc_821572EC:
	// add r4,r27,r31
	ctx.r4.u64 = r27.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821571a0
	sub_821571A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bgt 0x821572ec
	if (cr0.gt) goto loc_821572EC;
loc_82157304:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x82156240
	sub_82156240(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82157320"))) PPC_WEAK_FUNC(sub_82157320);
PPC_FUNC_IMPL(__imp__sub_82157320) {
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
	// lwz r16,-16608(0)
	r16.u64 = PPC_LOAD_U32(-16608);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x82157364
	if (cr6.lt) goto loc_82157364;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82157368
	if (cr6.lt) goto loc_82157368;
loc_82157364:
	// li r11,0
	r11.s64 = 0;
loc_82157368:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821573b4
	if (cr0.eq) goto loc_821573B4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82154900
	sub_82154900(ctx, base);
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x82157328
	sub_82157328(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82154998
	sub_82154998(ctx, base);
	// b 0x82157498
	goto loc_82157498;
loc_821573B4:
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// srawi r27,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r27.s64 = r11.s32 >> 4;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// ble cr6,0x82157444
	if (!cr6.gt) goto loc_82157444;
	// rlwinm r26,r26,4,0,27
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// subf r27,r26,r30
	r27.s64 = r30.s64 - r26.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82156330
	sub_82156330(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// subf r11,r28,r27
	r11.s64 = r27.s64 - r28.s64;
	// srawi. r29,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r29.s64 = r11.s32 >> 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x82157418
	if (!cr0.gt) goto loc_82157418;
	// subf r27,r30,r27
	r27.s64 = r27.s64 - r30.s64;
loc_82157400:
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821571a0
	sub_821571A0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bgt 0x82157400
	if (cr0.gt) goto loc_82157400;
loc_82157418:
	// add r29,r26,r28
	r29.u64 = r26.u64 + r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x82157498
	if (cr6.eq) goto loc_82157498;
loc_82157428:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821571a0
	sub_821571A0(ctx, base);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82157428
	if (!cr6.eq) goto loc_82157428;
	// b 0x82157498
	goto loc_82157498;
loc_82157444:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// subf r4,r27,r26
	ctx.r4.s64 = r26.s64 - r27.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82156298
	sub_82156298(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r5,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r5.u32);
	// bl 0x82156330
	sub_82156330(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r27,4,0,27
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x82157490
	goto loc_82157490;
loc_82157480:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821571a0
	sub_821571A0(ctx, base);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
loc_82157490:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x82157480
	if (!cr6.eq) goto loc_82157480;
loc_82157498:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82157328"))) PPC_WEAK_FUNC(sub_82157328);
PPC_FUNC_IMPL(__imp__sub_82157328) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x82157364
	if (cr6.lt) goto loc_82157364;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82157368
	if (cr6.lt) goto loc_82157368;
loc_82157364:
	// li r11,0
	r11.s64 = 0;
loc_82157368:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821573b4
	if (cr0.eq) goto loc_821573B4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82154900
	sub_82154900(ctx, base);
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x82157328
	sub_82157328(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82154998
	sub_82154998(ctx, base);
	// b 0x82157498
	goto loc_82157498;
loc_821573B4:
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// srawi r27,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r27.s64 = r11.s32 >> 4;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// ble cr6,0x82157444
	if (!cr6.gt) goto loc_82157444;
	// rlwinm r26,r26,4,0,27
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// subf r27,r26,r30
	r27.s64 = r30.s64 - r26.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82156330
	sub_82156330(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// subf r11,r28,r27
	r11.s64 = r27.s64 - r28.s64;
	// srawi. r29,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r29.s64 = r11.s32 >> 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x82157418
	if (!cr0.gt) goto loc_82157418;
	// subf r27,r30,r27
	r27.s64 = r27.s64 - r30.s64;
loc_82157400:
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821571a0
	sub_821571A0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bgt 0x82157400
	if (cr0.gt) goto loc_82157400;
loc_82157418:
	// add r29,r26,r28
	r29.u64 = r26.u64 + r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x82157498
	if (cr6.eq) goto loc_82157498;
loc_82157428:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821571a0
	sub_821571A0(ctx, base);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82157428
	if (!cr6.eq) goto loc_82157428;
	// b 0x82157498
	goto loc_82157498;
loc_82157444:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// subf r4,r27,r26
	ctx.r4.s64 = r26.s64 - r27.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82156298
	sub_82156298(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r5,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r5.u32);
	// bl 0x82156330
	sub_82156330(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r27,4,0,27
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x82157490
	goto loc_82157490;
loc_82157480:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821571a0
	sub_821571A0(ctx, base);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
loc_82157490:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x82157480
	if (!cr6.eq) goto loc_82157480;
loc_82157498:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821574A0"))) PPC_WEAK_FUNC(sub_821574A0);
PPC_FUNC_IMPL(__imp__sub_821574A0) {
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
	// bl 0x82154ea0
	sub_82154EA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821574C8"))) PPC_WEAK_FUNC(sub_821574C8);
PPC_FUNC_IMPL(__imp__sub_821574C8) {
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
	// beq cr6,0x82157518
	if (cr6.eq) goto loc_82157518;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x82157504
	if (cr6.lt) goto loc_82157504;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82157328
	sub_82157328(ctx, base);
	// b 0x82157518
	goto loc_82157518;
loc_82157504:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x82156fb0
	sub_82156FB0(ctx, base);
loc_82157518:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157528"))) PPC_WEAK_FUNC(sub_82157528);
PPC_FUNC_IMPL(__imp__sub_82157528) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r8,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82157574
	if (!cr6.lt) goto loc_82157574;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x82157588
	if (cr6.eq) goto loc_82157588;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x821572c0
	sub_821572C0(ctx, base);
	// b 0x82157588
	goto loc_82157588;
loc_82157574:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x821574c8
	sub_821574C8(ctx, base);
loc_82157588:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157598"))) PPC_WEAK_FUNC(sub_82157598);
PPC_FUNC_IMPL(__imp__sub_82157598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-16520(0)
	r16.u64 = PPC_LOAD_U32(-16520);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// bl 0x82157528
	sub_82157528(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82154998
	sub_82154998(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821575A0"))) PPC_WEAK_FUNC(sub_821575A0);
PPC_FUNC_IMPL(__imp__sub_821575A0) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// bl 0x82157528
	sub_82157528(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82154998
	sub_82154998(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821575F0"))) PPC_WEAK_FUNC(sub_821575F0);
PPC_FUNC_IMPL(__imp__sub_821575F0) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82154ea0
	sub_82154EA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157618"))) PPC_WEAK_FUNC(sub_82157618);
PPC_FUNC_IMPL(__imp__sub_82157618) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821575a0
	sub_821575A0(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82157658
	goto loc_82157658;
loc_8215764C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82156f50
	sub_82156F50(ctx, base);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
loc_82157658:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8215764c
	if (!cr6.eq) goto loc_8215764C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82157670"))) PPC_WEAK_FUNC(sub_82157670);
PPC_FUNC_IMPL(__imp__sub_82157670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-16416(0)
	r16.u64 = PPC_LOAD_U32(-16416);
	// mflr r12
	// bl 0x8239bcd4
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// bl 0x82128448
	sub_82128448(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r20,0
	r20.s64 = 0;
	// addi r19,r11,8536
	r19.s64 = r11.s64 + 8536;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// stw r3,0(r19)
	PPC_STORE_U32(r19.u32 + 0, ctx.r3.u32);
	// ble cr6,0x82157848
	if (!cr6.gt) goto loc_82157848;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// bl 0x821ba4c8
	sub_821BA4C8(ctx, base);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x821576f0
	if (cr6.lt) goto loc_821576F0;
	// addi r11,r28,-520
	r11.s64 = r28.s64 + -520;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
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
	// bne 0x821579ec
	if (!cr0.eq) goto loc_821579EC;
loc_821576F0:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bge cr6,0x8215777c
	if (!cr6.lt) goto loc_8215777C;
	// addic. r11,r28,-520
	xer.ca = r28.u32 > 519;
	r11.s64 = r28.s64 + -520;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215770c
	if (!cr0.eq) goto loc_8215770C;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x8215771c
	goto loc_8215771C;
loc_8215770C:
	// lwz r11,-516(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -516);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r11,r11,-516
	r11.s64 = r11.s64 + -516;
loc_8215771C:
	// stw r20,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r20.u32);
	// stw r20,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r20.u32);
	// stw r20,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r20.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82157618
	sub_82157618(ctx, base);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r3,r28,-84
	ctx.r3.s64 = r28.s64 + -84;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// rlwinm. r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82157758
	if (cr0.eq) goto loc_82157758;
	// bl 0x821571a0
	sub_821571A0(ctx, base);
	// b 0x82157770
	goto loc_82157770;
loc_82157758:
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82157770
	if (cr6.eq) goto loc_82157770;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// bl 0x82154a38
	sub_82154A38(ctx, base);
loc_82157770:
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82156df8
	sub_82156DF8(ctx, base);
	// b 0x82157788
	goto loc_82157788;
loc_8215777C:
	// addi r4,r28,-84
	ctx.r4.s64 = r28.s64 + -84;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82156f50
	sub_82156F50(ctx, base);
loc_82157788:
	// addi r4,r28,-60
	ctx.r4.s64 = r28.s64 + -60;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82131680
	sub_82131680(ctx, base);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x821577b0
	if (!cr6.gt) goto loc_821577B0;
	// addi r4,r28,-40
	ctx.r4.s64 = r28.s64 + -40;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x821577b4
	goto loc_821577B4;
loc_821577B0:
	// stb r20,-40(r28)
	PPC_STORE_U8(r28.u32 + -40, r20.u8);
loc_821577B4:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// addic. r11,r28,-520
	xer.ca = r28.u32 > 519;
	r11.s64 = r28.s64 + -520;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82157818
	if (!cr6.gt) goto loc_82157818;
	// bne 0x821577d0
	if (!cr0.eq) goto loc_821577D0;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x821577e0
	goto loc_821577E0;
loc_821577D0:
	// lwz r11,-516(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -516);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r11,r11,-516
	r11.s64 = r11.s64 + -516;
loc_821577E0:
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r20,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r20.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-20968
	r11.s64 = r11.s64 + -20968;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// addi r3,r28,-36
	ctx.r3.s64 = r28.s64 + -36;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// b 0x8215782c
	goto loc_8215782C;
loc_82157818:
	// addi r4,r28,-340
	ctx.r4.s64 = r28.s64 + -340;
	// bne 0x82157824
	if (!cr0.eq) goto loc_82157824;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_82157824:
	// addi r3,r28,-36
	ctx.r3.s64 = r28.s64 + -36;
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
loc_8215782C:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// ble cr6,0x821579ec
	if (!cr6.gt) goto loc_821579EC;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,-8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -8);
	// bl 0x8219b7e0
	sub_8219B7E0(ctx, base);
	// b 0x821579ec
	goto loc_821579EC;
loc_82157848:
	// bl 0x82128448
	sub_82128448(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r28,-388
	ctx.r3.s64 = r28.s64 + -388;
	// bl 0x8231ff08
	sub_8231FF08(ctx, base);
	// cmpwi cr6,r22,4
	cr6.compare<int32_t>(r22.s32, 4, xer);
	// ble cr6,0x82157870
	if (!cr6.gt) goto loc_82157870;
	// addi r4,r28,-96
	ctx.r4.s64 = r28.s64 + -96;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82150fa0
	sub_82150FA0(ctx, base);
loc_82157870:
	// cmpwi cr6,r22,3
	cr6.compare<int32_t>(r22.s32, 3, xer);
	// ble cr6,0x821579bc
	if (!cr6.gt) goto loc_821579BC;
	// cmpwi cr6,r22,6
	cr6.compare<int32_t>(r22.s32, 6, xer);
	// addi r11,r28,-520
	r11.s64 = r28.s64 + -520;
	// blt cr6,0x82157888
	if (cr6.lt) goto loc_82157888;
	// mr r11,r20
	r11.u64 = r20.u64;
loc_82157888:
	// stw r11,12(r19)
	PPC_STORE_U32(r19.u32 + 12, r11.u32);
	// addic. r11,r28,-520
	xer.ca = r28.u32 > 519;
	r11.s64 = r28.s64 + -520;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215789c
	if (!cr0.eq) goto loc_8215789C;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x821578ac
	goto loc_821578AC;
loc_8215789C:
	// lwz r11,-516(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -516);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r11,r11,-516
	r11.s64 = r11.s64 + -516;
loc_821578AC:
	// stw r20,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r20.u32);
	// stw r20,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r20.u32);
	// stw r20,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r20.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82157618
	sub_82157618(ctx, base);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r29,r28,-84
	r29.s64 = r28.s64 + -84;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// rlwinm. r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821578ec
	if (cr0.eq) goto loc_821578EC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821571a0
	sub_821571A0(ctx, base);
	// b 0x82157908
	goto loc_82157908;
loc_821578EC:
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82157908
	if (cr6.eq) goto loc_82157908;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82154a38
	sub_82154A38(ctx, base);
loc_82157908:
	// lwz r11,12(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821579a8
	if (cr6.eq) goto loc_821579A8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r27,r20
	r27.u64 = r20.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821579a8
	if (cr0.eq) goto loc_821579A8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r23,r28,-520
	r23.s64 = r28.s64 + -520;
	// mr r26,r20
	r26.u64 = r20.u64;
	// addi r24,r11,-16464
	r24.s64 = r11.s64 + -16464;
loc_8215793C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// add r11,r26,r11
	r11.u64 = r26.u64 + r11.u64;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r25,4(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x8215793c
	if (cr6.lt) goto loc_8215793C;
loc_821579A8:
	// mr r11,r20
	r11.u64 = r20.u64;
	// stw r11,12(r19)
	PPC_STORE_U32(r19.u32 + 12, r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82156df8
	sub_82156DF8(ctx, base);
	// b 0x821579d8
	goto loc_821579D8;
loc_821579BC:
	// addi r3,r28,-84
	ctx.r3.s64 = r28.s64 + -84;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x821579d8
	if (cr6.eq) goto loc_821579D8;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// bl 0x82154a38
	sub_82154A38(ctx, base);
loc_821579D8:
	// cmpwi cr6,r22,6
	cr6.compare<int32_t>(r22.s32, 6, xer);
	// ble cr6,0x821579ec
	if (!cr6.gt) goto loc_821579EC;
	// addi r4,r28,-60
	ctx.r4.s64 = r28.s64 + -60;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82131680
	sub_82131680(ctx, base);
loc_821579EC:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bge cr6,0x82157a5c
	if (!cr6.lt) goto loc_82157A5C;
	// addi r11,r28,-84
	r11.s64 = r28.s64 + -84;
	// lfs f13,-364(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -364);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi. r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82157a5c
	if (cr0.eq) goto loc_82157A5C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
loc_82157A28:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82157a28
	if (cr6.lt) goto loc_82157A28;
loc_82157A5C:
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_82157678"))) PPC_WEAK_FUNC(sub_82157678);
PPC_FUNC_IMPL(__imp__sub_82157678) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd4
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// bl 0x82128448
	sub_82128448(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r20,0
	r20.s64 = 0;
	// addi r19,r11,8536
	r19.s64 = r11.s64 + 8536;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// stw r3,0(r19)
	PPC_STORE_U32(r19.u32 + 0, ctx.r3.u32);
	// ble cr6,0x82157848
	if (!cr6.gt) goto loc_82157848;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// bl 0x821ba4c8
	sub_821BA4C8(ctx, base);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x821576f0
	if (cr6.lt) goto loc_821576F0;
	// addi r11,r28,-520
	r11.s64 = r28.s64 + -520;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
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
	// bne 0x821579ec
	if (!cr0.eq) goto loc_821579EC;
loc_821576F0:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bge cr6,0x8215777c
	if (!cr6.lt) goto loc_8215777C;
	// addic. r11,r28,-520
	xer.ca = r28.u32 > 519;
	r11.s64 = r28.s64 + -520;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215770c
	if (!cr0.eq) goto loc_8215770C;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x8215771c
	goto loc_8215771C;
loc_8215770C:
	// lwz r11,-516(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -516);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r11,r11,-516
	r11.s64 = r11.s64 + -516;
loc_8215771C:
	// stw r20,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r20.u32);
	// stw r20,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r20.u32);
	// stw r20,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r20.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82157618
	sub_82157618(ctx, base);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r3,r28,-84
	ctx.r3.s64 = r28.s64 + -84;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// rlwinm. r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82157758
	if (cr0.eq) goto loc_82157758;
	// bl 0x821571a0
	sub_821571A0(ctx, base);
	// b 0x82157770
	goto loc_82157770;
loc_82157758:
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82157770
	if (cr6.eq) goto loc_82157770;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// bl 0x82154a38
	sub_82154A38(ctx, base);
loc_82157770:
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82156df8
	sub_82156DF8(ctx, base);
	// b 0x82157788
	goto loc_82157788;
loc_8215777C:
	// addi r4,r28,-84
	ctx.r4.s64 = r28.s64 + -84;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82156f50
	sub_82156F50(ctx, base);
loc_82157788:
	// addi r4,r28,-60
	ctx.r4.s64 = r28.s64 + -60;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82131680
	sub_82131680(ctx, base);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x821577b0
	if (!cr6.gt) goto loc_821577B0;
	// addi r4,r28,-40
	ctx.r4.s64 = r28.s64 + -40;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x821577b4
	goto loc_821577B4;
loc_821577B0:
	// stb r20,-40(r28)
	PPC_STORE_U8(r28.u32 + -40, r20.u8);
loc_821577B4:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// addic. r11,r28,-520
	xer.ca = r28.u32 > 519;
	r11.s64 = r28.s64 + -520;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82157818
	if (!cr6.gt) goto loc_82157818;
	// bne 0x821577d0
	if (!cr0.eq) goto loc_821577D0;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x821577e0
	goto loc_821577E0;
loc_821577D0:
	// lwz r11,-516(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -516);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r11,r11,-516
	r11.s64 = r11.s64 + -516;
loc_821577E0:
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r20,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r20.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-20968
	r11.s64 = r11.s64 + -20968;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// addi r3,r28,-36
	ctx.r3.s64 = r28.s64 + -36;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// b 0x8215782c
	goto loc_8215782C;
loc_82157818:
	// addi r4,r28,-340
	ctx.r4.s64 = r28.s64 + -340;
	// bne 0x82157824
	if (!cr0.eq) goto loc_82157824;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_82157824:
	// addi r3,r28,-36
	ctx.r3.s64 = r28.s64 + -36;
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
loc_8215782C:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// ble cr6,0x821579ec
	if (!cr6.gt) goto loc_821579EC;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,-8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -8);
	// bl 0x8219b7e0
	sub_8219B7E0(ctx, base);
	// b 0x821579ec
	goto loc_821579EC;
loc_82157848:
	// bl 0x82128448
	sub_82128448(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r28,-388
	ctx.r3.s64 = r28.s64 + -388;
	// bl 0x8231ff08
	sub_8231FF08(ctx, base);
	// cmpwi cr6,r22,4
	cr6.compare<int32_t>(r22.s32, 4, xer);
	// ble cr6,0x82157870
	if (!cr6.gt) goto loc_82157870;
	// addi r4,r28,-96
	ctx.r4.s64 = r28.s64 + -96;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82150fa0
	sub_82150FA0(ctx, base);
loc_82157870:
	// cmpwi cr6,r22,3
	cr6.compare<int32_t>(r22.s32, 3, xer);
	// ble cr6,0x821579bc
	if (!cr6.gt) goto loc_821579BC;
	// cmpwi cr6,r22,6
	cr6.compare<int32_t>(r22.s32, 6, xer);
	// addi r11,r28,-520
	r11.s64 = r28.s64 + -520;
	// blt cr6,0x82157888
	if (cr6.lt) goto loc_82157888;
	// mr r11,r20
	r11.u64 = r20.u64;
loc_82157888:
	// stw r11,12(r19)
	PPC_STORE_U32(r19.u32 + 12, r11.u32);
	// addic. r11,r28,-520
	xer.ca = r28.u32 > 519;
	r11.s64 = r28.s64 + -520;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215789c
	if (!cr0.eq) goto loc_8215789C;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x821578ac
	goto loc_821578AC;
loc_8215789C:
	// lwz r11,-516(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -516);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r11,r11,-516
	r11.s64 = r11.s64 + -516;
loc_821578AC:
	// stw r20,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r20.u32);
	// stw r20,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r20.u32);
	// stw r20,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r20.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82157618
	sub_82157618(ctx, base);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r29,r28,-84
	r29.s64 = r28.s64 + -84;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// rlwinm. r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821578ec
	if (cr0.eq) goto loc_821578EC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821571a0
	sub_821571A0(ctx, base);
	// b 0x82157908
	goto loc_82157908;
loc_821578EC:
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82157908
	if (cr6.eq) goto loc_82157908;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82154a38
	sub_82154A38(ctx, base);
loc_82157908:
	// lwz r11,12(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821579a8
	if (cr6.eq) goto loc_821579A8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r27,r20
	r27.u64 = r20.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821579a8
	if (cr0.eq) goto loc_821579A8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r23,r28,-520
	r23.s64 = r28.s64 + -520;
	// mr r26,r20
	r26.u64 = r20.u64;
	// addi r24,r11,-16464
	r24.s64 = r11.s64 + -16464;
loc_8215793C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// add r11,r26,r11
	r11.u64 = r26.u64 + r11.u64;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r25,4(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x8215793c
	if (cr6.lt) goto loc_8215793C;
loc_821579A8:
	// mr r11,r20
	r11.u64 = r20.u64;
	// stw r11,12(r19)
	PPC_STORE_U32(r19.u32 + 12, r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82156df8
	sub_82156DF8(ctx, base);
	// b 0x821579d8
	goto loc_821579D8;
loc_821579BC:
	// addi r3,r28,-84
	ctx.r3.s64 = r28.s64 + -84;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x821579d8
	if (cr6.eq) goto loc_821579D8;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// bl 0x82154a38
	sub_82154A38(ctx, base);
loc_821579D8:
	// cmpwi cr6,r22,6
	cr6.compare<int32_t>(r22.s32, 6, xer);
	// ble cr6,0x821579ec
	if (!cr6.gt) goto loc_821579EC;
	// addi r4,r28,-60
	ctx.r4.s64 = r28.s64 + -60;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82131680
	sub_82131680(ctx, base);
loc_821579EC:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bge cr6,0x82157a5c
	if (!cr6.lt) goto loc_82157A5C;
	// addi r11,r28,-84
	r11.s64 = r28.s64 + -84;
	// lfs f13,-364(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -364);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi. r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82157a5c
	if (cr0.eq) goto loc_82157A5C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
loc_82157A28:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82157a28
	if (cr6.lt) goto loc_82157A28;
loc_82157A5C:
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_82157A64"))) PPC_WEAK_FUNC(sub_82157A64);
PPC_FUNC_IMPL(__imp__sub_82157A64) {
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
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82157198
	sub_82157198(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157A8C"))) PPC_WEAK_FUNC(sub_82157A8C);
PPC_FUNC_IMPL(__imp__sub_82157A8C) {
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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

__attribute__((alias("__imp__sub_82157AB4"))) PPC_WEAK_FUNC(sub_82157AB4);
PPC_FUNC_IMPL(__imp__sub_82157AB4) {
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82150810
	sub_82150810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157ADC"))) PPC_WEAK_FUNC(sub_82157ADC);
PPC_FUNC_IMPL(__imp__sub_82157ADC) {
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
	// bl 0x82157198
	sub_82157198(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157B04"))) PPC_WEAK_FUNC(sub_82157B04);
PPC_FUNC_IMPL(__imp__sub_82157B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157B08"))) PPC_WEAK_FUNC(sub_82157B08);
PPC_FUNC_IMPL(__imp__sub_82157B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82157678
	sub_82157678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157B14"))) PPC_WEAK_FUNC(sub_82157B14);
PPC_FUNC_IMPL(__imp__sub_82157B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157B18"))) PPC_WEAK_FUNC(sub_82157B18);
PPC_FUNC_IMPL(__imp__sub_82157B18) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,-16312(0)
	r16.u64 = PPC_LOAD_U32(-16312);
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r11,-2060
	r29.s64 = r11.s64 + -2060;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// bl 0x82275c18
	sub_82275C18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82353920
	sub_82353920(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82157B20"))) PPC_WEAK_FUNC(sub_82157B20);
PPC_FUNC_IMPL(__imp__sub_82157B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r11,-2060
	r29.s64 = r11.s64 + -2060;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// bl 0x82275c18
	sub_82275C18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82353920
	sub_82353920(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82157B80"))) PPC_WEAK_FUNC(sub_82157B80);
PPC_FUNC_IMPL(__imp__sub_82157B80) {
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
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
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

__attribute__((alias("__imp__sub_82157BA8"))) PPC_WEAK_FUNC(sub_82157BA8);
PPC_FUNC_IMPL(__imp__sub_82157BA8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,160
	ctx.r3.s64 = 160;
	// b 0x823567c0
	sub_823567C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157BB4"))) PPC_WEAK_FUNC(sub_82157BB4);
PPC_FUNC_IMPL(__imp__sub_82157BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157BB8"))) PPC_WEAK_FUNC(sub_82157BB8);
PPC_FUNC_IMPL(__imp__sub_82157BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-16248
	r11.s64 = r11.s64 + -16248;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157BC8"))) PPC_WEAK_FUNC(sub_82157BC8);
PPC_FUNC_IMPL(__imp__sub_82157BC8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-16248
	r11.s64 = r11.s64 + -16248;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82157bf4
	if (cr0.eq) goto loc_82157BF4;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82157BF4:
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

__attribute__((alias("__imp__sub_82157C0C"))) PPC_WEAK_FUNC(sub_82157C0C);
PPC_FUNC_IMPL(__imp__sub_82157C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157C10"))) PPC_WEAK_FUNC(sub_82157C10);
PPC_FUNC_IMPL(__imp__sub_82157C10) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-16232
	r11.s64 = r11.s64 + -16232;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82157c3c
	if (cr0.eq) goto loc_82157C3C;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82157C3C:
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

__attribute__((alias("__imp__sub_82157C54"))) PPC_WEAK_FUNC(sub_82157C54);
PPC_FUNC_IMPL(__imp__sub_82157C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157C58"))) PPC_WEAK_FUNC(sub_82157C58);
PPC_FUNC_IMPL(__imp__sub_82157C58) {
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
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
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

__attribute__((alias("__imp__sub_82157C90"))) PPC_WEAK_FUNC(sub_82157C90);
PPC_FUNC_IMPL(__imp__sub_82157C90) {
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
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
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

__attribute__((alias("__imp__sub_82157CC8"))) PPC_WEAK_FUNC(sub_82157CC8);
PPC_FUNC_IMPL(__imp__sub_82157CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82157D24"))) PPC_WEAK_FUNC(sub_82157D24);
PPC_FUNC_IMPL(__imp__sub_82157D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157D28"))) PPC_WEAK_FUNC(sub_82157D28);
PPC_FUNC_IMPL(__imp__sub_82157D28) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82157d54
	if (cr0.eq) goto loc_82157D54;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82157D54:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82157d8c
	if (!cr6.eq) goto loc_82157D8C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82157d80
	if (cr6.eq) goto loc_82157D80;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// b 0x82157d84
	goto loc_82157D84;
loc_82157D80:
	// stw r31,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r31.u32);
loc_82157D84:
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// b 0x82157dc8
	goto loc_82157DC8;
loc_82157D8C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82157db4
	if (!cr6.eq) goto loc_82157DB4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// b 0x82157dc8
	goto loc_82157DC8;
loc_82157DB4:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
loc_82157DC8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82157DDC"))) PPC_WEAK_FUNC(sub_82157DDC);
PPC_FUNC_IMPL(__imp__sub_82157DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157DE0"))) PPC_WEAK_FUNC(sub_82157DE0);
PPC_FUNC_IMPL(__imp__sub_82157DE0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82157e10
	if (cr0.eq) goto loc_82157E10;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_82157E10:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82157e4c
	if (!cr6.eq) goto loc_82157E4C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82157e3c
	if (cr0.eq) goto loc_82157E3C;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82157e40
	goto loc_82157E40;
loc_82157E3C:
	// li r11,0
	r11.s64 = 0;
loc_82157E40:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x82157e9c
	goto loc_82157E9C;
loc_82157E4C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82157e80
	if (!cr6.eq) goto loc_82157E80;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82157e9c
	goto loc_82157E9C;
loc_82157E80:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_82157E9C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_82157EC0"))) PPC_WEAK_FUNC(sub_82157EC0);
PPC_FUNC_IMPL(__imp__sub_82157EC0) {
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
	// beq 0x82157f00
	if (cr0.eq) goto loc_82157F00;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,5504
	ctx.r3.s64 = r11.s64 + 5504;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82157f08
	goto loc_82157F08;
loc_82157F00:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82157F08:
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

__attribute__((alias("__imp__sub_82157F24"))) PPC_WEAK_FUNC(sub_82157F24);
PPC_FUNC_IMPL(__imp__sub_82157F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157F28"))) PPC_WEAK_FUNC(sub_82157F28);
PPC_FUNC_IMPL(__imp__sub_82157F28) {
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
	// bl 0x82357518
	sub_82357518(ctx, base);
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

__attribute__((alias("__imp__sub_82157F84"))) PPC_WEAK_FUNC(sub_82157F84);
PPC_FUNC_IMPL(__imp__sub_82157F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157F88"))) PPC_WEAK_FUNC(sub_82157F88);
PPC_FUNC_IMPL(__imp__sub_82157F88) {
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
	// beq 0x82157fc8
	if (cr0.eq) goto loc_82157FC8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,5572
	ctx.r3.s64 = r11.s64 + 5572;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82157fd0
	goto loc_82157FD0;
loc_82157FC8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82157FD0:
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

__attribute__((alias("__imp__sub_82157FEC"))) PPC_WEAK_FUNC(sub_82157FEC);
PPC_FUNC_IMPL(__imp__sub_82157FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157FF0"))) PPC_WEAK_FUNC(sub_82157FF0);
PPC_FUNC_IMPL(__imp__sub_82157FF0) {
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
	// beq 0x82158030
	if (cr0.eq) goto loc_82158030;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,5612
	ctx.r3.s64 = r11.s64 + 5612;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82158038
	goto loc_82158038;
loc_82158030:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82158038:
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

__attribute__((alias("__imp__sub_82158054"))) PPC_WEAK_FUNC(sub_82158054);
PPC_FUNC_IMPL(__imp__sub_82158054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158058"))) PPC_WEAK_FUNC(sub_82158058);
PPC_FUNC_IMPL(__imp__sub_82158058) {
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
	// beq 0x82158098
	if (cr0.eq) goto loc_82158098;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,5648
	ctx.r3.s64 = r11.s64 + 5648;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821580a0
	goto loc_821580A0;
loc_82158098:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_821580A0:
	// mulli r3,r31,72
	ctx.r3.s64 = r31.s64 * 72;
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

__attribute__((alias("__imp__sub_821580BC"))) PPC_WEAK_FUNC(sub_821580BC);
PPC_FUNC_IMPL(__imp__sub_821580BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821580C0"))) PPC_WEAK_FUNC(sub_821580C0);
PPC_FUNC_IMPL(__imp__sub_821580C0) {
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
	// lwz r16,-16200(0)
	r16.u64 = PPC_LOAD_U32(-16200);
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-2060
	ctx.r3.s64 = r11.s64 + -2060;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
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

__attribute__((alias("__imp__sub_821580C8"))) PPC_WEAK_FUNC(sub_821580C8);
PPC_FUNC_IMPL(__imp__sub_821580C8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-2060
	ctx.r3.s64 = r11.s64 + -2060;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
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

__attribute__((alias("__imp__sub_82158118"))) PPC_WEAK_FUNC(sub_82158118);
PPC_FUNC_IMPL(__imp__sub_82158118) {
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

__attribute__((alias("__imp__sub_82158140"))) PPC_WEAK_FUNC(sub_82158140);
PPC_FUNC_IMPL(__imp__sub_82158140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r11,1
	r11.s64 = 1;
	// stb r11,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r11.u8);
	// b 0x82158184
	goto loc_82158184;
loc_82158160:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82158184
	if (cr0.eq) goto loc_82158184;
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
loc_82158184:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82158160
	if (cr0.eq) goto loc_82158160;
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

__attribute__((alias("__imp__sub_821581A8"))) PPC_WEAK_FUNC(sub_821581A8);
PPC_FUNC_IMPL(__imp__sub_821581A8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8215821c
	if (cr0.eq) goto loc_8215821C;
	// li r29,0
	r29.s64 = 0;
loc_821581D8:
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bgt cr6,0x821581ec
	if (cr6.gt) goto loc_821581EC;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_821581EC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215aa18
	sub_8215AA18(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x821581d8
	if (cr6.lt) goto loc_821581D8;
loc_8215821C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82158224"))) PPC_WEAK_FUNC(sub_82158224);
PPC_FUNC_IMPL(__imp__sub_82158224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158228"))) PPC_WEAK_FUNC(sub_82158228);
PPC_FUNC_IMPL(__imp__sub_82158228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r11,r31,92
	r11.s64 = r31.s64 + 92;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82158290
	if (cr0.eq) goto loc_82158290;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8215827c
	if (cr0.eq) goto loc_8215827C;
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
	// beq 0x82158290
	if (cr0.eq) goto loc_82158290;
loc_8215827C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82158290:
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

__attribute__((alias("__imp__sub_821582A4"))) PPC_WEAK_FUNC(sub_821582A4);
PPC_FUNC_IMPL(__imp__sub_821582A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821582A8"))) PPC_WEAK_FUNC(sub_821582A8);
PPC_FUNC_IMPL(__imp__sub_821582A8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r5,r11,-20992
	ctx.r5.s64 = r11.s64 + -20992;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// bl 0x82157d28
	sub_82157D28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82158300"))) PPC_WEAK_FUNC(sub_82158300);
PPC_FUNC_IMPL(__imp__sub_82158300) {
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
	// b 0x8215833c
	goto loc_8215833C;
loc_8215831C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82157de0
	sub_82157DE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_8215833C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8215831c
	if (!cr6.eq) goto loc_8215831C;
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

__attribute__((alias("__imp__sub_82158360"))) PPC_WEAK_FUNC(sub_82158360);
PPC_FUNC_IMPL(__imp__sub_82158360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,72
	ctx.r10.s64 = 72;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,72
	ctx.r3.s64 = r11.s64 * 72;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82158384"))) PPC_WEAK_FUNC(sub_82158384);
PPC_FUNC_IMPL(__imp__sub_82158384) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82158388"))) PPC_WEAK_FUNC(sub_82158388);
PPC_FUNC_IMPL(__imp__sub_82158388) {
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
	// bl 0x82157ec0
	sub_82157EC0(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821583c0
	if (cr0.eq) goto loc_821583C0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_821583C0:
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

__attribute__((alias("__imp__sub_821583D4"))) PPC_WEAK_FUNC(sub_821583D4);
PPC_FUNC_IMPL(__imp__sub_821583D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821583D8"))) PPC_WEAK_FUNC(sub_821583D8);
PPC_FUNC_IMPL(__imp__sub_821583D8) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82158408
	if (!cr6.eq) goto loc_82158408;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// b 0x82158488
	goto loc_82158488;
loc_82158408:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r28,12
	r28.s64 = 12;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r29,0
	r29.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r28
	r11.s32 = r11.s32 / r28.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82158484
	if (cr0.eq) goto loc_82158484;
	// li r30,0
	r30.s64 = 0;
loc_82158428:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82158490
	if (!cr0.eq) goto loc_82158490;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r28
	r11.s32 = r11.s32 / r28.s32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82158428
	if (cr6.lt) goto loc_82158428;
loc_82158484:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82158488:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
loc_82158490:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82158488
	goto loc_82158488;
}

__attribute__((alias("__imp__sub_82158498"))) PPC_WEAK_FUNC(sub_82158498);
PPC_FUNC_IMPL(__imp__sub_82158498) {
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
	// lwz r16,-16128(0)
	r16.u64 = PPC_LOAD_U32(-16128);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8664(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8664);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,8660
	r30.s64 = ctx.r9.s64 + 8660;
	// bne 0x821584ec
	if (!cr0.eq) goto loc_821584EC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8664, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-16144
	ctx.r4.s64 = r11.s64 + -16144;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821584EC:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x82158510
	if (cr6.lt) goto loc_82158510;
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// mulli r10,r29,12
	ctx.r10.s64 = r29.s64 * 12;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
loc_82158510:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821584A0"))) PPC_WEAK_FUNC(sub_821584A0);
PPC_FUNC_IMPL(__imp__sub_821584A0) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8664(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8664);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,8660
	r30.s64 = ctx.r9.s64 + 8660;
	// bne 0x821584ec
	if (!cr0.eq) goto loc_821584EC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8664, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-16144
	ctx.r4.s64 = r11.s64 + -16144;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821584EC:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x82158510
	if (cr6.lt) goto loc_82158510;
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// mulli r10,r29,12
	ctx.r10.s64 = r29.s64 * 12;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
loc_82158510:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82158524"))) PPC_WEAK_FUNC(sub_82158524);
PPC_FUNC_IMPL(__imp__sub_82158524) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8664
	r11.s64 = r11.s64 + 8664;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8664
	ctx.r10.s64 = ctx.r10.s64 + 8664;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215854C"))) PPC_WEAK_FUNC(sub_8215854C);
PPC_FUNC_IMPL(__imp__sub_8215854C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158550"))) PPC_WEAK_FUNC(sub_82158550);
PPC_FUNC_IMPL(__imp__sub_82158550) {
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
	// lwz r16,-16040(0)
	r16.u64 = PPC_LOAD_U32(-16040);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r25,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r25.u32);
	// li r26,0
	r26.s64 = 0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821585bc
	if (cr0.eq) goto loc_821585BC;
	// lwz r10,44(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// li r11,12
	r11.s64 = 12;
	// lwz r9,40(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r4,r10,r11
	ctx.r4.s32 = ctx.r10.s32 / r11.s32;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821585c0
	goto loc_821585C0;
loc_821585BC:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_821585C0:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82158634
	if (!cr0.gt) goto loc_82158634;
	// mr r28,r26
	r28.u64 = r26.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_821585D4:
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215861c
	if (cr0.eq) goto loc_8215861C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215861C:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x821585d4
	if (cr6.lt) goto loc_821585D4;
loc_82158634:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82158558"))) PPC_WEAK_FUNC(sub_82158558);
PPC_FUNC_IMPL(__imp__sub_82158558) {
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
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r25,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r25.u32);
	// li r26,0
	r26.s64 = 0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821585bc
	if (cr0.eq) goto loc_821585BC;
	// lwz r10,44(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// li r11,12
	r11.s64 = 12;
	// lwz r9,40(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r4,r10,r11
	ctx.r4.s32 = ctx.r10.s32 / r11.s32;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821585c0
	goto loc_821585C0;
loc_821585BC:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_821585C0:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82158634
	if (!cr0.gt) goto loc_82158634;
	// mr r28,r26
	r28.u64 = r26.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_821585D4:
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215861c
	if (cr0.eq) goto loc_8215861C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215861C:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x821585d4
	if (cr6.lt) goto loc_821585D4;
loc_82158634:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82158660"))) PPC_WEAK_FUNC(sub_82158660);
PPC_FUNC_IMPL(__imp__sub_82158660) {
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

__attribute__((alias("__imp__sub_82158688"))) PPC_WEAK_FUNC(sub_82158688);
PPC_FUNC_IMPL(__imp__sub_82158688) {
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

__attribute__((alias("__imp__sub_821586B0"))) PPC_WEAK_FUNC(sub_821586B0);
PPC_FUNC_IMPL(__imp__sub_821586B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821586e0
	if (cr0.eq) goto loc_821586E0;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x82120868
	sub_82120868(ctx, base);
loc_821586E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821586F0"))) PPC_WEAK_FUNC(sub_821586F0);
PPC_FUNC_IMPL(__imp__sub_821586F0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,72
	r27.s64 = 72;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82158770
	if (cr0.eq) goto loc_82158770;
	// li r30,0
	r30.s64 = 0;
loc_82158724:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// subf r11,r11,r28
	r11.s64 = r28.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215877c
	if (!cr0.eq) goto loc_8215877C;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,72
	r30.s64 = r30.s64 + 72;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82158724
	if (cr6.lt) goto loc_82158724;
loc_82158770:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82158774:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
loc_8215877C:
	// mulli r11,r29,72
	r11.s64 = r29.s64 * 72;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82158774
	goto loc_82158774;
}

__attribute__((alias("__imp__sub_82158788"))) PPC_WEAK_FUNC(sub_82158788);
PPC_FUNC_IMPL(__imp__sub_82158788) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r24,12(r26)
	r24.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// cmpwi r24,0
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// blt 0x8215889c
	if (cr0.lt) goto loc_8215889C;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// li r25,0
	r25.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8215889c
	if (!cr0.gt) goto loc_8215889C;
	// li r27,0
	r27.s64 = 0;
loc_821587BC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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
	// bne 0x82158888
	if (!cr0.eq) goto loc_82158888;
	// lhz r11,8(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x821588a8
	if (cr6.eq) goto loc_821588A8;
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// mulli r10,r24,12
	ctx.r10.s64 = r24.s64 * 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82158888
	if (!cr6.gt) goto loc_82158888;
	// li r29,8
	r29.s64 = 8;
loc_82158848:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821588a8
	if (!cr0.eq) goto loc_821588A8;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82158848
	if (cr6.lt) goto loc_82158848;
loc_82158888:
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x821587bc
	if (cr6.lt) goto loc_821587BC;
loc_8215889C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821588A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd38
	return;
loc_821588A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821588a0
	goto loc_821588A0;
}

__attribute__((alias("__imp__sub_821588B0"))) PPC_WEAK_FUNC(sub_821588B0);
PPC_FUNC_IMPL(__imp__sub_821588B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82158900
	if (cr6.lt) goto loc_82158900;
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mulli r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x821588d8
	if (!cr6.gt) goto loc_821588D8;
loc_821588D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821588D8:
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x821588ec
	if (!cr0.eq) goto loc_821588EC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x821588d0
	if (cr6.gt) goto loc_821588D0;
loc_821588EC:
	// lwz r11,88(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82158900
	if (cr0.eq) goto loc_82158900;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82158900:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82158908"))) PPC_WEAK_FUNC(sub_82158908);
PPC_FUNC_IMPL(__imp__sub_82158908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r8,72
	ctx.r8.s64 = 72;
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// divw. r11,r11,r8
	r11.s32 = r11.s32 / ctx.r8.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82158978
	if (cr0.eq) goto loc_82158978;
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r9,r7,60
	ctx.r9.s64 = ctx.r7.s64 + 60;
loc_8215892C:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82158944
	goto loc_82158944;
loc_82158934:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// beq cr6,0x8215894c
	if (cr6.eq) goto loc_8215894C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_82158944:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82158934
	if (!cr0.eq) goto loc_82158934;
loc_8215894C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82158980
	if (cr0.eq) goto loc_82158980;
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,72(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// divw r11,r11,r8
	r11.s32 = r11.s32 / ctx.r8.s32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x8215892c
	if (cr6.lt) goto loc_8215892C;
loc_82158978:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82158980:
	// mulli r11,r10,72
	r11.s64 = ctx.r10.s64 * 72;
	// add r3,r11,r7
	ctx.r3.u64 = r11.u64 + ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215898C"))) PPC_WEAK_FUNC(sub_8215898C);
PPC_FUNC_IMPL(__imp__sub_8215898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158990"))) PPC_WEAK_FUNC(sub_82158990);
PPC_FUNC_IMPL(__imp__sub_82158990) {
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
	// addi r31,r3,72
	r31.s64 = ctx.r3.s64 + 72;
	// li r28,72
	r28.s64 = 72;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r28
	r11.s32 = r11.s32 / r28.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821589ec
	if (cr0.eq) goto loc_821589EC;
	// li r29,0
	r29.s64 = 0;
loc_821589C0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x82158140
	sub_82158140(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,72
	r29.s64 = r29.s64 + 72;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r28
	r11.s32 = r11.s32 / r28.s32;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x821589c0
	if (cr6.lt) goto loc_821589C0;
loc_821589EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821589F4"))) PPC_WEAK_FUNC(sub_821589F4);
PPC_FUNC_IMPL(__imp__sub_821589F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821589F8"))) PPC_WEAK_FUNC(sub_821589F8);
PPC_FUNC_IMPL(__imp__sub_821589F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// bl 0x8239bce0
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	r11.s64 = 2;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823594a8
	sub_823594A8(ctx, base);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// li r23,72
	r23.s64 = 72;
	// li r5,2
	ctx.r5.s64 = 2;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// li r22,0
	r22.s64 = 0;
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82158b98
	if (cr0.eq) goto loc_82158B98;
	// li r24,0
	r24.s64 = 0;
	// li r25,12
	r25.s64 = 12;
loc_82158A98:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r29,r11,r24
	r29.u64 = r11.u64 + r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
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
	// addi r4,r29,20
	ctx.r4.s64 = r29.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359578
	sub_82359578(ctx, base);
	// addi r29,r29,40
	r29.s64 = r29.s64 + 40;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r25
	r11.s32 = r11.s32 / r25.s32;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r25
	r11.s32 = r11.s32 / r25.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82158b78
	if (cr0.eq) goto loc_82158B78;
	// li r27,0
	r27.s64 = 0;
loc_82158B20:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r26,r27,r11
	r26.u64 = r27.u64 + r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
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
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r25
	r11.s32 = r11.s32 / r25.s32;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82158b20
	if (cr6.lt) goto loc_82158B20;
loc_82158B78:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// addi r24,r24,72
	r24.s64 = r24.s64 + 72;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// blt cr6,0x82158a98
	if (cr6.lt) goto loc_82158A98;
loc_82158B98:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82158BA0"))) PPC_WEAK_FUNC(sub_82158BA0);
PPC_FUNC_IMPL(__imp__sub_82158BA0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82158bdc
	if (!cr6.eq) goto loc_82158BDC;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82158c5c
	goto loc_82158C5C;
loc_82158BDC:
	// lwz r31,8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82158c5c
	if (cr0.eq) goto loc_82158C5C;
loc_82158BE8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x82158c50
	if (!cr6.eq) goto loc_82158C50;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82158c2c
	if (!cr6.eq) goto loc_82158C2C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82158c2c
	if (!cr6.eq) goto loc_82158C2C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82157de0
	sub_82157DE0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
	// mr r31,r28
	r31.u64 = r28.u64;
	// b 0x82158c54
	goto loc_82158C54;
loc_82158C2C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// beq cr6,0x82158c50
	if (cr6.eq) goto loc_82158C50;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82158C50:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_82158C54:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82158be8
	if (!cr6.eq) goto loc_82158BE8;
loc_82158C5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82158C64"))) PPC_WEAK_FUNC(sub_82158C64);
PPC_FUNC_IMPL(__imp__sub_82158C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158C68"))) PPC_WEAK_FUNC(sub_82158C68);
PPC_FUNC_IMPL(__imp__sub_82158C68) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// beq cr6,0x82158d38
	if (cr6.eq) goto loc_82158D38;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x82158cc4
	if (!cr6.gt) goto loc_82158CC4;
loc_82158C94:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82157de0
	sub_82157DE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82158c94
	if (cr6.gt) goto loc_82158C94;
loc_82158CC4:
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x82158d08
	goto loc_82158D08;
loc_82158CD0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82158ce8
	if (cr0.eq) goto loc_82158CE8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_82158CE8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// beq cr6,0x82158d00
	if (cr6.eq) goto loc_82158D00;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82158D00:
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_82158D08:
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x82158cd0
	if (!cr0.eq) goto loc_82158CD0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82158d38
	if (cr6.eq) goto loc_82158D38;
loc_82158D18:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821582a8
	sub_821582A8(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x82158d18
	if (!cr0.eq) goto loc_82158D18;
loc_82158D38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82158D40"))) PPC_WEAK_FUNC(sub_82158D40);
PPC_FUNC_IMPL(__imp__sub_82158D40) {
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
	// lwz r16,-15952(0)
	r16.u64 = PPC_LOAD_U32(-15952);
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
	// addi r11,r11,-16220
	r11.s64 = r11.s64 + -16220;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82158300
	sub_82158300(ctx, base);
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

__attribute__((alias("__imp__sub_82158D48"))) PPC_WEAK_FUNC(sub_82158D48);
PPC_FUNC_IMPL(__imp__sub_82158D48) {
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
	// addi r11,r11,-16220
	r11.s64 = r11.s64 + -16220;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82158300
	sub_82158300(ctx, base);
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

__attribute__((alias("__imp__sub_82158D9C"))) PPC_WEAK_FUNC(sub_82158D9C);
PPC_FUNC_IMPL(__imp__sub_82158D9C) {
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

__attribute__((alias("__imp__sub_82158DC4"))) PPC_WEAK_FUNC(sub_82158DC4);
PPC_FUNC_IMPL(__imp__sub_82158DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158DC8"))) PPC_WEAK_FUNC(sub_82158DC8);
PPC_FUNC_IMPL(__imp__sub_82158DC8) {
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
	// li r3,16
	ctx.r3.s64 = 16;
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

__attribute__((alias("__imp__sub_82158E1C"))) PPC_WEAK_FUNC(sub_82158E1C);
PPC_FUNC_IMPL(__imp__sub_82158E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158E20"))) PPC_WEAK_FUNC(sub_82158E20);
PPC_FUNC_IMPL(__imp__sub_82158E20) {
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
	// bl 0x82158d48
	sub_82158D48(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82158e50
	if (cr0.eq) goto loc_82158E50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82158E50:
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

__attribute__((alias("__imp__sub_82158E6C"))) PPC_WEAK_FUNC(sub_82158E6C);
PPC_FUNC_IMPL(__imp__sub_82158E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158E70"))) PPC_WEAK_FUNC(sub_82158E70);
PPC_FUNC_IMPL(__imp__sub_82158E70) {
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
	// bl 0x82158388
	sub_82158388(ctx, base);
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

__attribute__((alias("__imp__sub_82158ED4"))) PPC_WEAK_FUNC(sub_82158ED4);
PPC_FUNC_IMPL(__imp__sub_82158ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158ED8"))) PPC_WEAK_FUNC(sub_82158ED8);
PPC_FUNC_IMPL(__imp__sub_82158ED8) {
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
	// b 0x82158f08
	goto loc_82158F08;
loc_82158EF8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82158F08:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82158ef8
	if (!cr6.eq) goto loc_82158EF8;
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

__attribute__((alias("__imp__sub_82158F30"))) PPC_WEAK_FUNC(sub_82158F30);
PPC_FUNC_IMPL(__imp__sub_82158F30) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lwz r30,24(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82322c68
	sub_82322C68(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82158f68
	if (!cr0.eq) goto loc_82158F68;
	// li r11,0
	r11.s64 = 0;
	// b 0x82158f78
	goto loc_82158F78;
loc_82158F68:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82158F78:
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x821591e8
	if (!cr6.eq) goto loc_821591E8;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,-16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -16);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,1640
	r31.s64 = r11.s64 + 1640;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r30,r11,1688
	r30.s64 = r11.s64 + 1688;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82322c68
	sub_82322C68(ctx, base);
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r31,r27,436
	r31.s64 = r27.s64 + 436;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8215904c
	if (!cr0.eq) goto loc_8215904C;
	// lwz r9,440(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 440);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// lwz r8,436(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 436);
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// xor r11,r10,r11
	r11.u64 = ctx.r10.u64 ^ r11.u64;
	// rlwinm. r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215904c
	if (cr0.eq) goto loc_8215904C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82159020
	if (cr6.eq) goto loc_82159020;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82159020:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82159030
	if (!cr6.eq) goto loc_82159030;
	// li r30,0
	r30.s64 = 0;
	// b 0x82159040
	goto loc_82159040;
loc_82159030:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
loc_82159040:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
loc_8215904C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,440(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 440);
	// lwz r8,436(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 436);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt cr6,0x82159084
	if (cr6.lt) goto loc_82159084;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82159084:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x821590c8
	if (!cr0.gt) goto loc_821590C8;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_82159098:
	// lwz r11,436(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 436);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821590bc
	if (cr0.eq) goto loc_821590BC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x821dc9e8
	sub_821DC9E8(ctx, base);
loc_821590BC:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x82159098
	if (!cr0.eq) goto loc_82159098;
loc_821590C8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82159138
	if (cr0.eq) goto loc_82159138;
	// li r30,0
	r30.s64 = 0;
loc_821590E4:
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82159118
	if (cr0.eq) goto loc_82159118;
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
loc_82159118:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x821590e4
	if (cr6.lt) goto loc_821590E4;
loc_82159138:
	// lwz r3,468(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 468);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82159188
	if (cr0.eq) goto loc_82159188;
	// lwz r4,468(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 468);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82159188
	if (cr0.eq) goto loc_82159188;
	// bl 0x821dc9e8
	sub_821DC9E8(ctx, base);
	// lwz r11,468(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 468);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821591d4
	if (cr0.eq) goto loc_821591D4;
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
	// b 0x821591d4
	goto loc_821591D4;
loc_82159188:
	// lwz r31,468(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 468);
	// cmpwi r31,0
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x821591d4
	if (cr0.eq) goto loc_821591D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82153c60
	sub_82153C60(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82153c60
	sub_82153C60(ctx, base);
loc_821591D4:
	// addi r4,r27,368
	ctx.r4.s64 = r27.s64 + 368;
	// addi r3,r28,368
	ctx.r3.s64 = r28.s64 + 368;
	// bl 0x82326488
	sub_82326488(ctx, base);
loc_821591E0:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8215933c
	goto loc_8215933C;
loc_821591E8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82159264
	if (cr6.eq) goto loc_82159264;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r31,r11,-21088
	r31.s64 = r11.s64 + -21088;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a1828
	sub_823A1828(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82159264
	if (!cr0.eq) goto loc_82159264;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1232
	ctx.r6.s64 = r11.s64 + 1232;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821591e0
	if (cr0.eq) goto loc_821591E0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x823a1828
	sub_823A1828(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x821591e0
	if (!cr0.eq) goto loc_821591E0;
	// b 0x8215933c
	goto loc_8215933C;
loc_82159264:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,2720
	r31.s64 = r11.s64 + 2720;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r28,r11,920
	r28.s64 = r11.s64 + 920;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x821592bc
	if (cr0.eq) goto loc_821592BC;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dc9e8
	sub_821DC9E8(ctx, base);
	// b 0x821591e0
	goto loc_821591E0;
loc_821592BC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x821592e0
	if (!cr6.eq) goto loc_821592E0;
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bl 0x821582a8
	sub_821582A8(ctx, base);
loc_821592E0:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,5092
	ctx.r6.s64 = r11.s64 + 5092;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82159338
	if (cr0.eq) goto loc_82159338;
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82159338
	if (!cr0.eq) goto loc_82159338;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// addi r3,r29,-44
	ctx.r3.s64 = r29.s64 + -44;
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// b 0x821591e0
	goto loc_821591E0;
loc_82159338:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215933C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82159344"))) PPC_WEAK_FUNC(sub_82159344);
PPC_FUNC_IMPL(__imp__sub_82159344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159348"))) PPC_WEAK_FUNC(sub_82159348);
PPC_FUNC_IMPL(__imp__sub_82159348) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82158dc8
	sub_82158DC8(ctx, base);
	// addi r3,r31,-40
	ctx.r3.s64 = r31.s64 + -40;
	// bl 0x82158228
	sub_82158228(ctx, base);
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

__attribute__((alias("__imp__sub_82159390"))) PPC_WEAK_FUNC(sub_82159390);
PPC_FUNC_IMPL(__imp__sub_82159390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,8652(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 8652);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82159480
	if (!cr0.eq) goto loc_82159480;
	// lwz r11,-12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x8235aa30
	sub_8235AA30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82322c68
	sub_82322C68(ctx, base);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bl 0x8235aa30
	sub_8235AA30(ctx, base);
	// lwz r10,-12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r29,20(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r28,r11,200
	r28.s64 = r11.s64 + 200;
	// bl 0x82322c68
	sub_82322C68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8231e980
	sub_8231E980(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r11,1264
	r29.s64 = r11.s64 + 1264;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,1688
	r28.s64 = r11.s64 + 1688;
	// bl 0x82322c68
	sub_82322C68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82159454
	if (cr0.eq) goto loc_82159454;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82159454:
	// addic. r11,r31,-40
	xer.ca = r31.u32 > 39;
	r11.s64 = r31.s64 + -40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// bne 0x82159464
	if (!cr0.eq) goto loc_82159464;
	// li r28,0
	r28.s64 = 0;
loc_82159464:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,-12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// bl 0x82322c68
	sub_82322C68(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8231cf68
	sub_8231CF68(ctx, base);
loc_82159480:
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82158dc8
	sub_82158DC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82322c68
	sub_82322C68(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821594cc
	if (cr0.eq) goto loc_821594CC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
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
loc_821594CC:
	// addi r3,r31,-40
	ctx.r3.s64 = r31.s64 + -40;
	// bl 0x82158228
	sub_82158228(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821594DC"))) PPC_WEAK_FUNC(sub_821594DC);
PPC_FUNC_IMPL(__imp__sub_821594DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821594E0"))) PPC_WEAK_FUNC(sub_821594E0);
PPC_FUNC_IMPL(__imp__sub_821594E0) {
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
	// blt cr6,0x82159528
	if (cr6.lt) goto loc_82159528;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82159528:
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
	// bl 0x82157f88
	sub_82157F88(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82159560
	if (cr0.eq) goto loc_82159560;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_82159560:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82159580
	if (cr6.eq) goto loc_82159580;
loc_8215956C:
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
	// bne 0x8215956c
	if (!cr0.eq) goto loc_8215956C;
loc_82159580:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x821595a8
	if (!cr0.eq) goto loc_821595A8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x821595a8
	if (cr0.eq) goto loc_821595A8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_821595A8:
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

__attribute__((alias("__imp__sub_821595DC"))) PPC_WEAK_FUNC(sub_821595DC);
PPC_FUNC_IMPL(__imp__sub_821595DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821595E0"))) PPC_WEAK_FUNC(sub_821595E0);
PPC_FUNC_IMPL(__imp__sub_821595E0) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-15856(0)
	r16.u64 = PPC_LOAD_U32(-15856);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// beq cr6,0x8215976c
	if (cr6.eq) goto loc_8215976C;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8215976c
	if (cr6.eq) goto loc_8215976C;
	// lwz r4,36(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215963c
	if (cr0.eq) goto loc_8215963C;
	// lwz r4,68(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 68);
loc_8215963C:
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82157b20
	sub_82157B20(ctx, base);
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r11,-15904
	ctx.r3.s64 = r11.s64 + -15904;
	// bl 0x82157f28
	sub_82157F28(ctx, base);
	// addi r29,r28,92
	r29.s64 = r28.s64 + 92;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x82159688
	goto loc_82159688;
loc_82159678:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// beq cr6,0x821596a4
	if (cr6.eq) goto loc_821596A4;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82159688:
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
	// bne 0x82159678
	if (!cr0.eq) goto loc_82159678;
	// b 0x821596d8
	goto loc_821596D8;
loc_821596A4:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821596c4
	if (cr0.eq) goto loc_821596C4;
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
loc_821596C4:
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82158dc8
	sub_82158DC8(ctx, base);
loc_821596D8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r5,r11,-16264
	ctx.r5.s64 = r11.s64 + -16264;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// beq 0x8215972c
	if (cr0.eq) goto loc_8215972C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r28,40
	ctx.r6.s64 = r28.s64 + 40;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82325368
	sub_82325368(ctx, base);
	// b 0x82159730
	goto loc_82159730;
loc_8215972C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82159730:
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// clrlwi. r11,r25,31
	r11.u64 = r25.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82159744
	if (cr0.eq) goto loc_82159744;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82159744:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r26,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r26.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82158e70
	sub_82158E70(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821580c8
	sub_821580C8(ctx, base);
loc_8215976C:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821595E8"))) PPC_WEAK_FUNC(sub_821595E8);
PPC_FUNC_IMPL(__imp__sub_821595E8) {
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
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// beq cr6,0x8215976c
	if (cr6.eq) goto loc_8215976C;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8215976c
	if (cr6.eq) goto loc_8215976C;
	// lwz r4,36(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215963c
	if (cr0.eq) goto loc_8215963C;
	// lwz r4,68(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 68);
loc_8215963C:
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82157b20
	sub_82157B20(ctx, base);
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r11,-15904
	ctx.r3.s64 = r11.s64 + -15904;
	// bl 0x82157f28
	sub_82157F28(ctx, base);
	// addi r29,r28,92
	r29.s64 = r28.s64 + 92;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x82159688
	goto loc_82159688;
loc_82159678:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// beq cr6,0x821596a4
	if (cr6.eq) goto loc_821596A4;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82159688:
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
	// bne 0x82159678
	if (!cr0.eq) goto loc_82159678;
	// b 0x821596d8
	goto loc_821596D8;
loc_821596A4:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821596c4
	if (cr0.eq) goto loc_821596C4;
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
loc_821596C4:
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82158dc8
	sub_82158DC8(ctx, base);
loc_821596D8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r5,r11,-16264
	ctx.r5.s64 = r11.s64 + -16264;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// beq 0x8215972c
	if (cr0.eq) goto loc_8215972C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r28,40
	ctx.r6.s64 = r28.s64 + 40;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82325368
	sub_82325368(ctx, base);
	// b 0x82159730
	goto loc_82159730;
loc_8215972C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82159730:
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// clrlwi. r11,r25,31
	r11.u64 = r25.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82159744
	if (cr0.eq) goto loc_82159744;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82159744:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r26,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r26.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82158e70
	sub_82158E70(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821580c8
	sub_821580C8(ctx, base);
loc_8215976C:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82159774"))) PPC_WEAK_FUNC(sub_82159774);
PPC_FUNC_IMPL(__imp__sub_82159774) {
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
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821580c8
	sub_821580C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215979C"))) PPC_WEAK_FUNC(sub_8215979C);
PPC_FUNC_IMPL(__imp__sub_8215979C) {
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
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82157ba8
	sub_82157BA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821597C4"))) PPC_WEAK_FUNC(sub_821597C4);
PPC_FUNC_IMPL(__imp__sub_821597C4) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821597f4
	if (cr0.eq) goto loc_821597F4;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8235d458
	sub_8235D458(ctx, base);
loc_821597F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82159804"))) PPC_WEAK_FUNC(sub_82159804);
PPC_FUNC_IMPL(__imp__sub_82159804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159808"))) PPC_WEAK_FUNC(sub_82159808);
PPC_FUNC_IMPL(__imp__sub_82159808) {
	PPC_FUNC_PROLOGUE();
	// b 0x82158ed8
	sub_82158ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215980C"))) PPC_WEAK_FUNC(sub_8215980C);
PPC_FUNC_IMPL(__imp__sub_8215980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159810"))) PPC_WEAK_FUNC(sub_82159810);
PPC_FUNC_IMPL(__imp__sub_82159810) {
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
	// beq cr6,0x82159850
	if (cr6.eq) goto loc_82159850;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82159840
	if (cr0.eq) goto loc_82159840;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82159840:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82159864
	goto loc_82159864;
loc_82159850:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x821594e0
	sub_821594E0(ctx, base);
loc_82159864:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82159874"))) PPC_WEAK_FUNC(sub_82159874);
PPC_FUNC_IMPL(__imp__sub_82159874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159878"))) PPC_WEAK_FUNC(sub_82159878);
PPC_FUNC_IMPL(__imp__sub_82159878) {
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
	// blt cr6,0x821598b0
	if (cr6.lt) goto loc_821598B0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x821598b4
	if (cr6.lt) goto loc_821598B4;
loc_821598B0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821598B4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821598fc
	if (cr0.eq) goto loc_821598FC;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lwz r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x82159878
	sub_82159878(ctx, base);
	// b 0x82159a10
	goto loc_82159A10;
loc_821598FC:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r25,12
	r25.s64 = 12;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r10,r29,r31
	ctx.r10.s64 = r31.s64 - r29.s64;
	// divw r28,r10,r25
	r28.s32 = ctx.r10.s32 / r25.s32;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// ble cr6,0x821599a8
	if (!cr6.gt) goto loc_821599A8;
	// mulli r27,r11,12
	r27.s64 = r11.s64 * 12;
	// subf r28,r27,r31
	r28.s64 = r31.s64 - r27.s64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82686ac8
	sub_82686AC8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// subf r11,r29,r28
	r11.s64 = r28.s64 - r29.s64;
	// divw. r11,r11,r25
	r11.s32 = r11.s32 / r25.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82159970
	if (!cr0.gt) goto loc_82159970;
loc_82159948:
	// addi r28,r28,-12
	r28.s64 = r28.s64 + -12;
	// addi r31,r31,-12
	r31.s64 = r31.s64 + -12;
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
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bgt 0x82159948
	if (cr0.gt) goto loc_82159948;
loc_82159970:
	// add r10,r27,r29
	ctx.r10.u64 = r27.u64 + r29.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x82159a10
	if (cr6.eq) goto loc_82159A10;
loc_82159980:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82159980
	if (!cr6.eq) goto loc_82159980;
	// b 0x82159a10
	goto loc_82159A10;
loc_821599A8:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// subf r4,r28,r11
	ctx.r4.s64 = r11.s64 - r28.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dc550
	sub_822DC550(ctx, base);
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
	// bl 0x82686ac8
	sub_82686AC8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r11,r28,12
	r11.s64 = r28.s64 * 12;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82159a10
	if (cr6.eq) goto loc_82159A10;
loc_821599EC:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x821599ec
	if (!cr6.eq) goto loc_821599EC;
loc_82159A10:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82159A18"))) PPC_WEAK_FUNC(sub_82159A18);
PPC_FUNC_IMPL(__imp__sub_82159A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
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
	// lwz r16,-15716(0)
	r16.u64 = PPC_LOAD_U32(-15716);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82157ff0
	sub_82157FF0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82686ac8
	sub_82686AC8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82159A20"))) PPC_WEAK_FUNC(sub_82159A20);
PPC_FUNC_IMPL(__imp__sub_82159A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
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
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82157ff0
	sub_82157FF0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82686ac8
	sub_82686AC8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82159A7C"))) PPC_WEAK_FUNC(sub_82159A7C);
PPC_FUNC_IMPL(__imp__sub_82159A7C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-15716(0)
	r16.u64 = PPC_LOAD_U32(-15716);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// mflr r12
	// bl 0x8239bcdc
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// li r22,0
	r22.s64 = 0;
	// lha r11,8(r26)
	r11.s64 = int16_t(PPC_LOAD_U16(r26.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82159c14
	if (!cr0.gt) goto loc_82159C14;
	// li r25,0
	r25.s64 = 0;
	// li r24,12
	r24.s64 = 12;
loc_82159AE4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821586f0
	sub_821586F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82159b84
	if (!cr6.eq) goto loc_82159B84;
	// addi r11,r28,40
	r11.s64 = r28.s64 + 40;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw. r9,r9,r24
	ctx.r9.s32 = ctx.r9.s32 / r24.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82159bd4
	if (cr0.eq) goto loc_82159BD4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82159B4C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + r27.u64;
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r8,r8,r24
	ctx.r8.s32 = ctx.r8.s32 / r24.s32;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82159b4c
	if (cr6.lt) goto loc_82159B4C;
	// b 0x82159bd4
	goto loc_82159BD4;
loc_82159B84:
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82159bd4
	if (!cr6.gt) goto loc_82159BD4;
	// li r29,8
	r29.s64 = 8;
loc_82159B94:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x821583d8
	sub_821583D8(ctx, base);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// mulli r11,r3,12
	r11.s64 = ctx.r3.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r10,r27,r10
	ctx.r10.u64 = r27.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82159b94
	if (cr6.lt) goto loc_82159B94;
loc_82159BD4:
	// lwz r31,4(r21)
	r31.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82239570
	sub_82239570(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// bne cr6,0x82159c00
	if (!cr6.eq) goto loc_82159C00;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82159810
	sub_82159810(ctx, base);
loc_82159C00:
	// lha r11,8(r26)
	r11.s64 = int16_t(PPC_LOAD_U16(r26.u32 + 8));
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// blt cr6,0x82159ae4
	if (cr6.lt) goto loc_82159AE4;
loc_82159C14:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_82159A84"))) PPC_WEAK_FUNC(sub_82159A84);
PPC_FUNC_IMPL(__imp__sub_82159A84) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82159AB0"))) PPC_WEAK_FUNC(sub_82159AB0);
PPC_FUNC_IMPL(__imp__sub_82159AB0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// li r22,0
	r22.s64 = 0;
	// lha r11,8(r26)
	r11.s64 = int16_t(PPC_LOAD_U16(r26.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82159c14
	if (!cr0.gt) goto loc_82159C14;
	// li r25,0
	r25.s64 = 0;
	// li r24,12
	r24.s64 = 12;
loc_82159AE4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821586f0
	sub_821586F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82159b84
	if (!cr6.eq) goto loc_82159B84;
	// addi r11,r28,40
	r11.s64 = r28.s64 + 40;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw. r9,r9,r24
	ctx.r9.s32 = ctx.r9.s32 / r24.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82159bd4
	if (cr0.eq) goto loc_82159BD4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82159B4C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + r27.u64;
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r8,r8,r24
	ctx.r8.s32 = ctx.r8.s32 / r24.s32;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82159b4c
	if (cr6.lt) goto loc_82159B4C;
	// b 0x82159bd4
	goto loc_82159BD4;
loc_82159B84:
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82159bd4
	if (!cr6.gt) goto loc_82159BD4;
	// li r29,8
	r29.s64 = 8;
loc_82159B94:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x821583d8
	sub_821583D8(ctx, base);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// mulli r11,r3,12
	r11.s64 = ctx.r3.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r10,r27,r10
	ctx.r10.u64 = r27.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82159b94
	if (cr6.lt) goto loc_82159B94;
loc_82159BD4:
	// lwz r31,4(r21)
	r31.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82239570
	sub_82239570(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// bne cr6,0x82159c00
	if (!cr6.eq) goto loc_82159C00;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82159810
	sub_82159810(ctx, base);
loc_82159C00:
	// lha r11,8(r26)
	r11.s64 = int16_t(PPC_LOAD_U16(r26.u32 + 8));
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// blt cr6,0x82159ae4
	if (cr6.lt) goto loc_82159AE4;
loc_82159C14:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_82159C1C"))) PPC_WEAK_FUNC(sub_82159C1C);
PPC_FUNC_IMPL(__imp__sub_82159C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159C20"))) PPC_WEAK_FUNC(sub_82159C20);
PPC_FUNC_IMPL(__imp__sub_82159C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82159d00
	if (cr6.eq) goto loc_82159D00;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// li r25,1
	r25.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82159d00
	if (!cr6.gt) goto loc_82159D00;
	// li r28,8
	r28.s64 = 8;
loc_82159C58:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821586f0
	sub_821586F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bge cr6,0x82159ca8
	if (!cr6.lt) goto loc_82159CA8;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// b 0x82159cc0
	goto loc_82159CC0;
loc_82159CA8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x821583d8
	sub_821583D8(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r3.u32);
loc_82159CC0:
	// lwz r31,4(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82239570
	sub_82239570(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// bne cr6,0x82159cec
	if (!cr6.eq) goto loc_82159CEC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82159810
	sub_82159810(ctx, base);
loc_82159CEC:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82159c58
	if (cr6.lt) goto loc_82159C58;
loc_82159D00:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82159D08"))) PPC_WEAK_FUNC(sub_82159D08);
PPC_FUNC_IMPL(__imp__sub_82159D08) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82159e74
	if (cr6.eq) goto loc_82159E74;
	// lha r11,8(r27)
	r11.s64 = int16_t(PPC_LOAD_U16(r27.u32 + 8));
	// li r22,1
	r22.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82159e74
	if (!cr6.gt) goto loc_82159E74;
	// li r24,8
	r24.s64 = 8;
	// li r25,12
	r25.s64 = 12;
loc_82159D44:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r24
	ctx.r3.u64 = r11.u64 + r24.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821586f0
	sub_821586F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82159de4
	if (!cr6.eq) goto loc_82159DE4;
	// addi r11,r28,40
	r11.s64 = r28.s64 + 40;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw. r9,r9,r25
	ctx.r9.s32 = ctx.r9.s32 / r25.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82159e34
	if (cr0.eq) goto loc_82159E34;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82159DAC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 + r26.u64;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r8,r8,r25
	ctx.r8.s32 = ctx.r8.s32 / r25.s32;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82159dac
	if (cr6.lt) goto loc_82159DAC;
	// b 0x82159e34
	goto loc_82159E34;
loc_82159DE4:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82159e34
	if (!cr6.gt) goto loc_82159E34;
	// li r30,8
	r30.s64 = 8;
loc_82159DF4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x821583d8
	sub_821583D8(ctx, base);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// mulli r11,r3,12
	r11.s64 = ctx.r3.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82159df4
	if (cr6.lt) goto loc_82159DF4;
loc_82159E34:
	// lwz r31,4(r21)
	r31.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82239570
	sub_82239570(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// bne cr6,0x82159e60
	if (!cr6.eq) goto loc_82159E60;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82159810
	sub_82159810(ctx, base);
loc_82159E60:
	// lha r11,8(r27)
	r11.s64 = int16_t(PPC_LOAD_U16(r27.u32 + 8));
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r24,r24,8
	r24.s64 = r24.s64 + 8;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// blt cr6,0x82159d44
	if (cr6.lt) goto loc_82159D44;
loc_82159E74:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_82159E7C"))) PPC_WEAK_FUNC(sub_82159E7C);
PPC_FUNC_IMPL(__imp__sub_82159E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159E80"))) PPC_WEAK_FUNC(sub_82159E80);
PPC_FUNC_IMPL(__imp__sub_82159E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lwz r16,-15648(0)
	r16.u64 = PPC_LOAD_U32(-15648);
	// mflr r12
	// bl 0x8239bce0
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lwz r11,8672(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8672);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r24,r9,8668
	r24.s64 = ctx.r9.s64 + 8668;
	// bne 0x82159ed0
	if (!cr0.eq) goto loc_82159ED0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8672, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-15664
	ctx.r4.s64 = r11.s64 + -15664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82159ED0:
	// lwz r11,76(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// li r23,72
	r23.s64 = 72;
	// lwz r10,72(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// li r25,0
	r25.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82159f80
	if (cr0.eq) goto loc_82159F80;
	// li r26,0
	r26.s64 = 0;
loc_82159EF0:
	// lwz r11,72(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// add r30,r11,r26
	r30.u64 = r11.u64 + r26.u64;
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82159f60
	if (cr0.eq) goto loc_82159F60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82158140
	sub_82158140(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r10,17(r30)
	PPC_STORE_U8(r30.u32 + 17, ctx.r10.u8);
	// blt 0x82159f60
	if (cr0.lt) goto loc_82159F60;
	// lwz r29,40(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mulli r28,r11,12
	r28.s64 = r11.s64 * 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82159f60
	if (!cr0.eq) goto loc_82159F60;
	// lwzx r5,r29,r28
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821595e8
	sub_821595E8(ctx, base);
loc_82159F60:
	// lwz r11,76(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r10,72(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// addi r26,r26,72
	r26.s64 = r26.s64 + 72;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x82159ef0
	if (cr6.lt) goto loc_82159EF0;
loc_82159F80:
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82159fc4
	if (!cr0.eq) goto loc_82159FC4;
	// addi r30,r27,92
	r30.s64 = r27.s64 + 92;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82159fc4
	if (!cr0.eq) goto loc_82159FC4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r29,r11,15600
	r29.s64 = r11.s64 + 15600;
loc_82159FA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a1c0
	sub_8235A1C0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82159fa8
	if (cr0.eq) goto loc_82159FA8;
loc_82159FC4:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82159E88"))) PPC_WEAK_FUNC(sub_82159E88);
PPC_FUNC_IMPL(__imp__sub_82159E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// bl 0x8239bce0
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lwz r11,8672(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8672);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r24,r9,8668
	r24.s64 = ctx.r9.s64 + 8668;
	// bne 0x82159ed0
	if (!cr0.eq) goto loc_82159ED0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8672, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-15664
	ctx.r4.s64 = r11.s64 + -15664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82159ED0:
	// lwz r11,76(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// li r23,72
	r23.s64 = 72;
	// lwz r10,72(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// li r25,0
	r25.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82159f80
	if (cr0.eq) goto loc_82159F80;
	// li r26,0
	r26.s64 = 0;
loc_82159EF0:
	// lwz r11,72(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// add r30,r11,r26
	r30.u64 = r11.u64 + r26.u64;
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82159f60
	if (cr0.eq) goto loc_82159F60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82158140
	sub_82158140(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r10,17(r30)
	PPC_STORE_U8(r30.u32 + 17, ctx.r10.u8);
	// blt 0x82159f60
	if (cr0.lt) goto loc_82159F60;
	// lwz r29,40(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mulli r28,r11,12
	r28.s64 = r11.s64 * 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82159f60
	if (!cr0.eq) goto loc_82159F60;
	// lwzx r5,r29,r28
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821595e8
	sub_821595E8(ctx, base);
loc_82159F60:
	// lwz r11,76(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r10,72(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// addi r26,r26,72
	r26.s64 = r26.s64 + 72;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x82159ef0
	if (cr6.lt) goto loc_82159EF0;
loc_82159F80:
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82159fc4
	if (!cr0.eq) goto loc_82159FC4;
	// addi r30,r27,92
	r30.s64 = r27.s64 + 92;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82159fc4
	if (!cr0.eq) goto loc_82159FC4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r29,r11,15600
	r29.s64 = r11.s64 + 15600;
loc_82159FA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a1c0
	sub_8235A1C0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82159fa8
	if (cr0.eq) goto loc_82159FA8;
loc_82159FC4:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82159FCC"))) PPC_WEAK_FUNC(sub_82159FCC);
PPC_FUNC_IMPL(__imp__sub_82159FCC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8672
	r11.s64 = r11.s64 + 8672;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8672
	ctx.r10.s64 = ctx.r10.s64 + 8672;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82159FF4"))) PPC_WEAK_FUNC(sub_82159FF4);
PPC_FUNC_IMPL(__imp__sub_82159FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159FF8"))) PPC_WEAK_FUNC(sub_82159FF8);
PPC_FUNC_IMPL(__imp__sub_82159FF8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lhz r11,8(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bne cr6,0x8215a034
	if (!cr6.eq) goto loc_8215A034;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// b 0x8215a038
	goto loc_8215A038;
loc_8215A034:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215A038:
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x82159e88
	sub_82159E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8215A060"))) PPC_WEAK_FUNC(sub_8215A060);
PPC_FUNC_IMPL(__imp__sub_8215A060) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8215a130
	if (cr0.eq) goto loc_8215A130;
	// lha r11,8(r4)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 8));
	// li r25,1
	r25.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8215a130
	if (!cr6.gt) goto loc_8215A130;
	// li r28,8
	r28.s64 = 8;
loc_8215A09C:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82158788
	sub_82158788(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bne 0x8215a100
	if (!cr0.eq) goto loc_8215A100;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82158788
	sub_82158788(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215a118
	if (cr0.eq) goto loc_8215A118;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8215A100:
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82159ab0
	sub_82159AB0(ctx, base);
loc_8215A118:
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// lha r11,8(r4)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 8));
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x8215a09c
	if (cr6.lt) goto loc_8215A09C;
loc_8215A130:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8215A138"))) PPC_WEAK_FUNC(sub_8215A138);
PPC_FUNC_IMPL(__imp__sub_8215A138) {
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
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, xer);
	// beq cr6,0x8215a29c
	if (cr6.eq) goto loc_8215A29C;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r30,12
	r30.s64 = 12;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r28,r9,r30
	r28.s32 = ctx.r9.s32 / r30.s32;
	// divw r10,r10,r30
	ctx.r10.s32 = ctx.r10.s32 / r30.s32;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// ble cr6,0x8215a1d8
	if (!cr6.gt) goto loc_8215A1D8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82159a20
	sub_82159A20(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8215a198
	goto loc_8215A198;
loc_8215A194:
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
loc_8215A198:
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
	// bne 0x8215a194
	if (!cr0.eq) goto loc_8215A194;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r30
	r11.s32 = r11.s32 / r30.s32;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mulli r11,r28,12
	r11.s64 = r28.s64 * 12;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8215a28c
	goto loc_8215A28C;
loc_8215A1D8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r9,r10,r30
	ctx.r9.s32 = ctx.r10.s32 / r30.s32;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// blt cr6,0x8215a224
	if (cr6.lt) goto loc_8215A224;
	// subf r10,r5,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r5.s64;
	// divw. r10,r10,r30
	ctx.r10.s32 = ctx.r10.s32 / r30.s32;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x8215a28c
	if (!cr0.gt) goto loc_8215A28C;
loc_8215A1F8:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bgt 0x8215a1f8
	if (cr0.gt) goto loc_8215A1F8;
	// b 0x8215a28c
	goto loc_8215A28C;
loc_8215A224:
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// divw. r9,r9,r30
	ctx.r9.s32 = ctx.r9.s32 / r30.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x8215a264
	if (!cr0.gt) goto loc_8215A264;
loc_8215A23C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bgt 0x8215a23c
	if (cr0.gt) goto loc_8215A23C;
loc_8215A264:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r11,r5
	r11.s64 = ctx.r5.s64 - r11.s64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// divw r11,r11,r30
	r11.s32 = r11.s32 / r30.s32;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82686ac8
	sub_82686AC8(ctx, base);
loc_8215A28C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r28,12
	r11.s64 = r28.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8215A29C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8215A2A8"))) PPC_WEAK_FUNC(sub_8215A2A8);
PPC_FUNC_IMPL(__imp__sub_8215A2A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r16,-15532(0)
	r16.u64 = PPC_LOAD_U32(-15532);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r23,12
	r23.s64 = 12;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r29.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r31,228
	ctx.r10.s64 = r31.s64 + 228;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x8215a308
	if (cr6.lt) goto loc_8215A308;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_8215A308:
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
	// bl 0x82157ff0
	sub_82157FF0(ctx, base);
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
	// bl 0x82686ac8
	sub_82686AC8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x8215a374
	if (!cr6.eq) goto loc_8215A374;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8215a36c
	if (cr6.eq) goto loc_8215A36C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_8215A36C:
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// b 0x8215a38c
	goto loc_8215A38C;
loc_8215A374:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822dc550
	sub_822DC550(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8215A38C:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215a3b0
	if (!cr0.eq) goto loc_8215A3B0;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82686ac8
	sub_82686AC8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8215A3B0:
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
	// b 0x8215a3f8
	goto loc_8215A3F8;
loc_8215A3D8:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
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
loc_8215A3F8:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215a3d8
	if (!cr0.eq) goto loc_8215A3D8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mulli r11,r25,12
	r11.s64 = r25.s64 * 12;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8215A2B0"))) PPC_WEAK_FUNC(sub_8215A2B0);
PPC_FUNC_IMPL(__imp__sub_8215A2B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r23,12
	r23.s64 = 12;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r29.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r31,228
	ctx.r10.s64 = r31.s64 + 228;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x8215a308
	if (cr6.lt) goto loc_8215A308;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_8215A308:
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
	// bl 0x82157ff0
	sub_82157FF0(ctx, base);
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
	// bl 0x82686ac8
	sub_82686AC8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x8215a374
	if (!cr6.eq) goto loc_8215A374;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8215a36c
	if (cr6.eq) goto loc_8215A36C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_8215A36C:
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// b 0x8215a38c
	goto loc_8215A38C;
loc_8215A374:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822dc550
	sub_822DC550(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8215A38C:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215a3b0
	if (!cr0.eq) goto loc_8215A3B0;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82686ac8
	sub_82686AC8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8215A3B0:
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
	// b 0x8215a3f8
	goto loc_8215A3F8;
loc_8215A3D8:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
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
loc_8215A3F8:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215a3d8
	if (!cr0.eq) goto loc_8215A3D8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mulli r11,r25,12
	r11.s64 = r25.s64 * 12;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8215A438"))) PPC_WEAK_FUNC(sub_8215A438);
PPC_FUNC_IMPL(__imp__sub_8215A438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-15532(0)
	r16.u64 = PPC_LOAD_U32(-15532);
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
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A440"))) PPC_WEAK_FUNC(sub_8215A440);
PPC_FUNC_IMPL(__imp__sub_8215A440) {
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
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_8215A470"))) PPC_WEAK_FUNC(sub_8215A470);
PPC_FUNC_IMPL(__imp__sub_8215A470) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// stb r11,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r11.u8);
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r4,r30,40
	ctx.r4.s64 = r30.s64 + 40;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x8215a138
	sub_8215A138(ctx, base);
	// addi r4,r30,52
	ctx.r4.s64 = r30.s64 + 52;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x82158c68
	sub_82158C68(ctx, base);
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

__attribute__((alias("__imp__sub_8215A4FC"))) PPC_WEAK_FUNC(sub_8215A4FC);
PPC_FUNC_IMPL(__imp__sub_8215A4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A500"))) PPC_WEAK_FUNC(sub_8215A500);
PPC_FUNC_IMPL(__imp__sub_8215A500) {
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
	// li r11,1
	r11.s64 = 1;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stb r11,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r11.u8);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-16220
	ctx.r10.s64 = r11.s64 + -16220;
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
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

__attribute__((alias("__imp__sub_8215A568"))) PPC_WEAK_FUNC(sub_8215A568);
PPC_FUNC_IMPL(__imp__sub_8215A568) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,-15432(0)
	r16.u64 = PPC_LOAD_U32(-15432);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r27,r30,20
	r27.s64 = r30.s64 + 20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r30,52
	r28.s64 = r30.s64 + 52;
	// addi r10,r10,-16220
	ctx.r10.s64 = ctx.r10.s64 + -16220;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// stw r11,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r29,40
	ctx.r4.s64 = r29.s64 + 40;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lbz r11,17(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 17);
	// stb r11,17(r30)
	PPC_STORE_U8(r30.u32 + 17, r11.u8);
	// lbz r11,16(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// stb r11,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r11.u8);
	// bl 0x8215a138
	sub_8215A138(ctx, base);
	// addi r4,r29,52
	ctx.r4.s64 = r29.s64 + 52;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82158c68
	sub_82158C68(ctx, base);
	// addi r4,r29,20
	ctx.r4.s64 = r29.s64 + 20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8215A570"))) PPC_WEAK_FUNC(sub_8215A570);
PPC_FUNC_IMPL(__imp__sub_8215A570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r27,r30,20
	r27.s64 = r30.s64 + 20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r30,52
	r28.s64 = r30.s64 + 52;
	// addi r10,r10,-16220
	ctx.r10.s64 = ctx.r10.s64 + -16220;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// stw r11,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r29,40
	ctx.r4.s64 = r29.s64 + 40;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lbz r11,17(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 17);
	// stb r11,17(r30)
	PPC_STORE_U8(r30.u32 + 17, r11.u8);
	// lbz r11,16(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// stb r11,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r11.u8);
	// bl 0x8215a138
	sub_8215A138(ctx, base);
	// addi r4,r29,52
	ctx.r4.s64 = r29.s64 + 52;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82158c68
	sub_82158C68(ctx, base);
	// addi r4,r29,20
	ctx.r4.s64 = r29.s64 + 20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8215A628"))) PPC_WEAK_FUNC(sub_8215A628);
PPC_FUNC_IMPL(__imp__sub_8215A628) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A654"))) PPC_WEAK_FUNC(sub_8215A654);
PPC_FUNC_IMPL(__imp__sub_8215A654) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x82686ff8
	sub_82686FF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A680"))) PPC_WEAK_FUNC(sub_8215A680);
PPC_FUNC_IMPL(__imp__sub_8215A680) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x82158d48
	sub_82158D48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A6AC"))) PPC_WEAK_FUNC(sub_8215A6AC);
PPC_FUNC_IMPL(__imp__sub_8215A6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A6B0"))) PPC_WEAK_FUNC(sub_8215A6B0);
PPC_FUNC_IMPL(__imp__sub_8215A6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-15360(0)
	r16.u64 = PPC_LOAD_U32(-15360);
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x82158d48
	sub_82158D48(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x82686ff8
	sub_82686FF8(ctx, base);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
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

__attribute__((alias("__imp__sub_8215A6B8"))) PPC_WEAK_FUNC(sub_8215A6B8);
PPC_FUNC_IMPL(__imp__sub_8215A6B8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x82158d48
	sub_82158D48(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x82686ff8
	sub_82686FF8(ctx, base);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
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

__attribute__((alias("__imp__sub_8215A708"))) PPC_WEAK_FUNC(sub_8215A708);
PPC_FUNC_IMPL(__imp__sub_8215A708) {
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
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A734"))) PPC_WEAK_FUNC(sub_8215A734);
PPC_FUNC_IMPL(__imp__sub_8215A734) {
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
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x82686ff8
	sub_82686FF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A760"))) PPC_WEAK_FUNC(sub_8215A760);
PPC_FUNC_IMPL(__imp__sub_8215A760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lwz r16,-15248(0)
	r16.u64 = PPC_LOAD_U32(-15248);
	// mflr r12
	// bl 0x8239bce0
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,12(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8215a8ac
	if (cr6.eq) goto loc_8215A8AC;
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r10,40(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 40);
	// mulli r9,r11,12
	ctx.r9.s64 = r11.s64 * 12;
	// lwz r11,8688(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8688);
	// lwzx r28,r9,r10
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r23,r10,8684
	r23.s64 = ctx.r10.s64 + 8684;
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8215a7d4
	if (!cr0.eq) goto loc_8215A7D4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8688(r30)
	PPC_STORE_U32(r30.u32 + 8688, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,-15280
	ctx.r4.s64 = r11.s64 + -15280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8688(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8688);
loc_8215A7D4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r24,r10,8680
	r24.s64 = ctx.r10.s64 + 8680;
	// bne 0x8215a800
	if (!cr0.eq) goto loc_8215A800;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,8688(r30)
	PPC_STORE_U32(r30.u32 + 8688, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-15288
	ctx.r4.s64 = r11.s64 + -15288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8688(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8688);
loc_8215A800:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8676
	r29.s64 = ctx.r10.s64 + 8676;
	// bne 0x8215a828
	if (!cr0.eq) goto loc_8215A828;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,8688(r30)
	PPC_STORE_U32(r30.u32 + 8688, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-15296
	ctx.r4.s64 = r11.s64 + -15296;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8215A828:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x82159d08
	sub_82159D08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// neg r30,r26
	r30.s64 = -r26.s64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x82159d08
	sub_82159D08(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215a060
	sub_8215A060(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x82159c20
	sub_82159C20(ctx, base);
loc_8215A8AC:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8215A768"))) PPC_WEAK_FUNC(sub_8215A768);
PPC_FUNC_IMPL(__imp__sub_8215A768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// bl 0x8239bce0
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,12(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8215a8ac
	if (cr6.eq) goto loc_8215A8AC;
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r10,40(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 40);
	// mulli r9,r11,12
	ctx.r9.s64 = r11.s64 * 12;
	// lwz r11,8688(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8688);
	// lwzx r28,r9,r10
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r23,r10,8684
	r23.s64 = ctx.r10.s64 + 8684;
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8215a7d4
	if (!cr0.eq) goto loc_8215A7D4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8688(r30)
	PPC_STORE_U32(r30.u32 + 8688, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,-15280
	ctx.r4.s64 = r11.s64 + -15280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8688(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8688);
loc_8215A7D4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r24,r10,8680
	r24.s64 = ctx.r10.s64 + 8680;
	// bne 0x8215a800
	if (!cr0.eq) goto loc_8215A800;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,8688(r30)
	PPC_STORE_U32(r30.u32 + 8688, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-15288
	ctx.r4.s64 = r11.s64 + -15288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8688(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8688);
loc_8215A800:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8676
	r29.s64 = ctx.r10.s64 + 8676;
	// bne 0x8215a828
	if (!cr0.eq) goto loc_8215A828;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,8688(r30)
	PPC_STORE_U32(r30.u32 + 8688, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-15296
	ctx.r4.s64 = r11.s64 + -15296;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8215A828:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x82159d08
	sub_82159D08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// neg r30,r26
	r30.s64 = -r26.s64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x82159d08
	sub_82159D08(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215a060
	sub_8215A060(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x82159c20
	sub_82159C20(ctx, base);
loc_8215A8AC:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8215A8B4"))) PPC_WEAK_FUNC(sub_8215A8B4);
PPC_FUNC_IMPL(__imp__sub_8215A8B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8688
	r11.s64 = r11.s64 + 8688;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8688
	ctx.r10.s64 = ctx.r10.s64 + 8688;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A8DC"))) PPC_WEAK_FUNC(sub_8215A8DC);
PPC_FUNC_IMPL(__imp__sub_8215A8DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8688
	r11.s64 = r11.s64 + 8688;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8688
	ctx.r10.s64 = ctx.r10.s64 + 8688;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A904"))) PPC_WEAK_FUNC(sub_8215A904);
PPC_FUNC_IMPL(__imp__sub_8215A904) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8688
	r11.s64 = r11.s64 + 8688;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8688
	ctx.r10.s64 = ctx.r10.s64 + 8688;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A92C"))) PPC_WEAK_FUNC(sub_8215A92C);
PPC_FUNC_IMPL(__imp__sub_8215A92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A930"))) PPC_WEAK_FUNC(sub_8215A930);
PPC_FUNC_IMPL(__imp__sub_8215A930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-15160(0)
	r16.u64 = PPC_LOAD_U32(-15160);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8215a960
	if (cr6.eq) goto loc_8215A960;
	// bl 0x8215a570
	sub_8215A570(ctx, base);
loc_8215A960:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A938"))) PPC_WEAK_FUNC(sub_8215A938);
PPC_FUNC_IMPL(__imp__sub_8215A938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8215a960
	if (cr6.eq) goto loc_8215A960;
	// bl 0x8215a570
	sub_8215A570(ctx, base);
loc_8215A960:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A974"))) PPC_WEAK_FUNC(sub_8215A974);
PPC_FUNC_IMPL(__imp__sub_8215A974) {
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
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_8215A9A0"))) PPC_WEAK_FUNC(sub_8215A9A0);
PPC_FUNC_IMPL(__imp__sub_8215A9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-15104(0)
	r16.u64 = PPC_LOAD_U32(-15104);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8215a9d0
	if (cr6.eq) goto loc_8215A9D0;
	// bl 0x8215a570
	sub_8215A570(ctx, base);
loc_8215A9D0:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A9A8"))) PPC_WEAK_FUNC(sub_8215A9A8);
PPC_FUNC_IMPL(__imp__sub_8215A9A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8215a9d0
	if (cr6.eq) goto loc_8215A9D0;
	// bl 0x8215a570
	sub_8215A570(ctx, base);
loc_8215A9D0:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A9E4"))) PPC_WEAK_FUNC(sub_8215A9E4);
PPC_FUNC_IMPL(__imp__sub_8215A9E4) {
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
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_8215AA10"))) PPC_WEAK_FUNC(sub_8215AA10);
PPC_FUNC_IMPL(__imp__sub_8215AA10) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-15048(0)
	r16.u64 = PPC_LOAD_U32(-15048);
	// mflr r12
	// bl 0x8239bcdc
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r23,1
	r23.s64 = 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// mr r21,r23
	r21.u64 = r23.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8215aa54
	if (cr0.eq) goto loc_8215AA54;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215abbc
	goto loc_8215ABBC;
loc_8215AA54:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// mr r24,r23
	r24.u64 = r23.u64;
	// bgt cr6,0x8215aa64
	if (cr6.gt) goto loc_8215AA64;
	// li r24,-1
	r24.s64 = -1;
loc_8215AA64:
	// mr r22,r29
	r22.u64 = r29.u64;
	// stb r23,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r23.u8);
	// li r26,0
	r26.s64 = 0;
loc_8215AA70:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821588b0
	sub_821588B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215aafc
	if (!cr0.eq) goto loc_8215AAFC;
	// addi r27,r30,40
	r27.s64 = r30.s64 + 40;
loc_8215AA90:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r8,r29,r24
	ctx.r8.u64 = r29.u64 + r24.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r9,r8,r11
	ctx.r9.s32 = ctx.r8.s32 / r11.s32;
	// andc r10,r11,r10
	ctx.r10.u64 = r11.u64 & ~ctx.r10.u64;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// twllei r11,0
	// subf. r5,r9,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// twlgei r10,-1
	// bge 0x8215aad0
	if (!cr0.lt) goto loc_8215AAD0;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + r11.u64;
loc_8215AAD0:
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r22
	cr6.compare<int32_t>(ctx.r5.s32, r22.s32, xer);
	// beq cr6,0x8215aaf8
	if (cr6.eq) goto loc_8215AAF8;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821588b0
	sub_821588B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215aa90
	if (cr0.eq) goto loc_8215AA90;
	// b 0x8215aafc
	goto loc_8215AAFC;
loc_8215AAF8:
	// li r29,-1
	r29.s64 = -1;
loc_8215AAFC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// beq cr6,0x8215abb4
	if (cr6.eq) goto loc_8215ABB4;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215a768
	sub_8215A768(ctx, base);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r23,17(r30)
	PPC_STORE_U8(r30.u32 + 17, r23.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215a768
	sub_8215A768(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821581a8
	sub_821581A8(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821588b0
	sub_821588B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215ab94
	if (!cr0.eq) goto loc_8215AB94;
	// mr r21,r26
	r21.u64 = r26.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8215aa70
	if (cr6.eq) goto loc_8215AA70;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x8215aa70
	goto loc_8215AA70;
loc_8215AB94:
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8215abb4
	if (cr6.eq) goto loc_8215ABB4;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8215ABB4:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stb r26,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r26.u8);
loc_8215ABBC:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_8215AA18"))) PPC_WEAK_FUNC(sub_8215AA18);
PPC_FUNC_IMPL(__imp__sub_8215AA18) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r23,1
	r23.s64 = 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// mr r21,r23
	r21.u64 = r23.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8215aa54
	if (cr0.eq) goto loc_8215AA54;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215abbc
	goto loc_8215ABBC;
loc_8215AA54:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// mr r24,r23
	r24.u64 = r23.u64;
	// bgt cr6,0x8215aa64
	if (cr6.gt) goto loc_8215AA64;
	// li r24,-1
	r24.s64 = -1;
loc_8215AA64:
	// mr r22,r29
	r22.u64 = r29.u64;
	// stb r23,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r23.u8);
	// li r26,0
	r26.s64 = 0;
loc_8215AA70:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821588b0
	sub_821588B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215aafc
	if (!cr0.eq) goto loc_8215AAFC;
	// addi r27,r30,40
	r27.s64 = r30.s64 + 40;
loc_8215AA90:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r8,r29,r24
	ctx.r8.u64 = r29.u64 + r24.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r9,r8,r11
	ctx.r9.s32 = ctx.r8.s32 / r11.s32;
	// andc r10,r11,r10
	ctx.r10.u64 = r11.u64 & ~ctx.r10.u64;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// twllei r11,0
	// subf. r5,r9,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// twlgei r10,-1
	// bge 0x8215aad0
	if (!cr0.lt) goto loc_8215AAD0;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + r11.u64;
loc_8215AAD0:
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r22
	cr6.compare<int32_t>(ctx.r5.s32, r22.s32, xer);
	// beq cr6,0x8215aaf8
	if (cr6.eq) goto loc_8215AAF8;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821588b0
	sub_821588B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215aa90
	if (cr0.eq) goto loc_8215AA90;
	// b 0x8215aafc
	goto loc_8215AAFC;
loc_8215AAF8:
	// li r29,-1
	r29.s64 = -1;
loc_8215AAFC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// beq cr6,0x8215abb4
	if (cr6.eq) goto loc_8215ABB4;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215a768
	sub_8215A768(ctx, base);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r23,17(r30)
	PPC_STORE_U8(r30.u32 + 17, r23.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215a768
	sub_8215A768(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821581a8
	sub_821581A8(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821588b0
	sub_821588B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8215ab94
	if (!cr0.eq) goto loc_8215AB94;
	// mr r21,r26
	r21.u64 = r26.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8215aa70
	if (cr6.eq) goto loc_8215AA70;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x8215aa70
	goto loc_8215AA70;
loc_8215AB94:
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8215abb4
	if (cr6.eq) goto loc_8215ABB4;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8215ABB4:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stb r26,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r26.u8);
loc_8215ABBC:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_8215ABC4"))) PPC_WEAK_FUNC(sub_8215ABC4);
PPC_FUNC_IMPL(__imp__sub_8215ABC4) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
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

__attribute__((alias("__imp__sub_8215ABEC"))) PPC_WEAK_FUNC(sub_8215ABEC);
PPC_FUNC_IMPL(__imp__sub_8215ABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215ABF0"))) PPC_WEAK_FUNC(sub_8215ABF0);
PPC_FUNC_IMPL(__imp__sub_8215ABF0) {
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
	// beq cr6,0x8215ac44
	if (cr6.eq) goto loc_8215AC44;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,12
	ctx.r8.s64 = 12;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x8215ac30
	if (cr6.lt) goto loc_8215AC30;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82159878
	sub_82159878(ctx, base);
	// b 0x8215ac44
	goto loc_8215AC44;
loc_8215AC30:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8215a2b0
	sub_8215A2B0(ctx, base);
loc_8215AC44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215AC54"))) PPC_WEAK_FUNC(sub_8215AC54);
PPC_FUNC_IMPL(__imp__sub_8215AC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215AC58"))) PPC_WEAK_FUNC(sub_8215AC58);
PPC_FUNC_IMPL(__imp__sub_8215AC58) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rotlwi r11,r5,1
	r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// divw r10,r5,r11
	ctx.r10.s32 = ctx.r5.s32 / r11.s32;
	// andc r9,r11,r9
	ctx.r9.u64 = r11.u64 & ~ctx.r9.u64;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// twllei r11,0
	// subf. r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// twlgei r9,-1
	// bge 0x8215aca8
	if (!cr0.lt) goto loc_8215ACA8;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + r11.u64;
loc_8215ACA8:
	// li r11,-1
	r11.s64 = -1;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x8215aa18
	sub_8215AA18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215acd8
	if (cr0.eq) goto loc_8215ACD8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8215acd8
	if (cr6.eq) goto loc_8215ACD8;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8215ACD8:
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

__attribute__((alias("__imp__sub_8215ACEC"))) PPC_WEAK_FUNC(sub_8215ACEC);
PPC_FUNC_IMPL(__imp__sub_8215ACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215ACF0"))) PPC_WEAK_FUNC(sub_8215ACF0);
PPC_FUNC_IMPL(__imp__sub_8215ACF0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,-14976(0)
	r16.u64 = PPC_LOAD_U32(-14976);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x821586f0
	sub_821586F0(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// bl 0x821583d8
	sub_821583D8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215ad50
	if (cr0.eq) goto loc_8215AD50;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215AD50:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215ac58
	sub_8215AC58(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8215ACF8"))) PPC_WEAK_FUNC(sub_8215ACF8);
PPC_FUNC_IMPL(__imp__sub_8215ACF8) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x821586f0
	sub_821586F0(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// bl 0x821583d8
	sub_821583D8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215ad50
	if (cr0.eq) goto loc_8215AD50;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215AD50:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215ac58
	sub_8215AC58(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8215AD6C"))) PPC_WEAK_FUNC(sub_8215AD6C);
PPC_FUNC_IMPL(__imp__sub_8215AD6C) {
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

__attribute__((alias("__imp__sub_8215AD94"))) PPC_WEAK_FUNC(sub_8215AD94);
PPC_FUNC_IMPL(__imp__sub_8215AD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215AD98"))) PPC_WEAK_FUNC(sub_8215AD98);
PPC_FUNC_IMPL(__imp__sub_8215AD98) {
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
	// lwz r16,-14760(0)
	r16.u64 = PPC_LOAD_U32(-14760);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x8215add8
	if (!cr6.eq) goto loc_8215ADD8;
loc_8215ADD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215b168
	goto loc_8215B168;
loc_8215ADD8:
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
	// addi r26,r29,1
	r26.s64 = r29.s64 + 1;
	// lwz r11,8716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8716);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8712
	r29.s64 = ctx.r10.s64 + 8712;
	// bne 0x8215ae28
	if (!cr0.eq) goto loc_8215AE28;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8716(r30)
	PPC_STORE_U32(r30.u32 + 8716, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = r11.s64 + 18664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8716);
loc_8215AE28:
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
	// beq 0x8215ae8c
	if (cr0.eq) goto loc_8215AE8C;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// beq cr6,0x8215add0
	if (cr6.eq) goto loc_8215ADD0;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215add0
	if (cr0.eq) goto loc_8215ADD0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_8215AE84:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8215add0
	goto loc_8215ADD0;
loc_8215AE8C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8708
	r29.s64 = ctx.r10.s64 + 8708;
	// bne 0x8215aeb8
	if (!cr0.eq) goto loc_8215AEB8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,8716(r30)
	PPC_STORE_U32(r30.u32 + 8716, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14872
	ctx.r4.s64 = r11.s64 + -14872;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8716);
loc_8215AEB8:
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
	// beq 0x8215af80
	if (cr0.eq) goto loc_8215AF80;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// bne cr6,0x8215af40
	if (!cr6.eq) goto loc_8215AF40;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821583d8
	sub_821583D8(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,8656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8656);
	// bl 0x8215ac58
	sub_8215AC58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8656);
	// bl 0x82159e88
	sub_82159E88(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215add0
	if (cr0.eq) goto loc_8215ADD0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8215ae84
	goto loc_8215AE84;
loc_8215AF40:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821584a0
	sub_821584A0(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215add0
	if (cr0.eq) goto loc_8215ADD0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8215ae84
	goto loc_8215AE84;
loc_8215AF80:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8704
	r29.s64 = ctx.r10.s64 + 8704;
	// bne 0x8215afac
	if (!cr0.eq) goto loc_8215AFAC;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,8716(r30)
	PPC_STORE_U32(r30.u32 + 8716, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14888
	ctx.r4.s64 = r11.s64 + -14888;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8716);
loc_8215AFAC:
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
	// beq 0x8215b00c
	if (cr0.eq) goto loc_8215B00C;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// beq cr6,0x8215add0
	if (cr6.eq) goto loc_8215ADD0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821584a0
	sub_821584A0(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215add0
	if (cr0.eq) goto loc_8215ADD0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x8215ae84
	goto loc_8215AE84;
loc_8215B00C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8700
	r29.s64 = ctx.r10.s64 + 8700;
	// bne 0x8215b038
	if (!cr0.eq) goto loc_8215B038;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,8716(r30)
	PPC_STORE_U32(r30.u32 + 8716, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14904
	ctx.r4.s64 = r11.s64 + -14904;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8716);
loc_8215B038:
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
	// beq 0x8215b098
	if (cr0.eq) goto loc_8215B098;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// beq cr6,0x8215add0
	if (cr6.eq) goto loc_8215ADD0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821584a0
	sub_821584A0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215add0
	if (cr0.eq) goto loc_8215ADD0;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x8215ae84
	goto loc_8215AE84;
loc_8215B098:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8696
	r29.s64 = ctx.r10.s64 + 8696;
	// bne 0x8215b0c4
	if (!cr0.eq) goto loc_8215B0C4;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,8716(r30)
	PPC_STORE_U32(r30.u32 + 8716, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14912
	ctx.r4.s64 = r11.s64 + -14912;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8716);
loc_8215B0C4:
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
	// beq 0x8215b0f8
	if (cr0.eq) goto loc_8215B0F8;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,20
	ctx.r3.s64 = r27.s64 + 20;
	// bl 0x82326a90
	sub_82326A90(ctx, base);
	// b 0x8215b168
	goto loc_8215B168;
loc_8215B0F8:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8692
	r29.s64 = ctx.r10.s64 + 8692;
	// bne 0x8215b120
	if (!cr0.eq) goto loc_8215B120;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,8716(r30)
	PPC_STORE_U32(r30.u32 + 8716, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,21136
	ctx.r4.s64 = r11.s64 + 21136;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8215B120:
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
	// beq 0x8215b164
	if (cr0.eq) goto loc_8215B164;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x82158558
	sub_82158558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215add0
	if (cr0.eq) goto loc_8215ADD0;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x8215ae84
	goto loc_8215AE84;
loc_8215B164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215B168:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8215ADA0"))) PPC_WEAK_FUNC(sub_8215ADA0);
PPC_FUNC_IMPL(__imp__sub_8215ADA0) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x8215add8
	if (!cr6.eq) goto loc_8215ADD8;
loc_8215ADD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215b168
	goto loc_8215B168;
loc_8215ADD8:
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
	// addi r26,r29,1
	r26.s64 = r29.s64 + 1;
	// lwz r11,8716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8716);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8712
	r29.s64 = ctx.r10.s64 + 8712;
	// bne 0x8215ae28
	if (!cr0.eq) goto loc_8215AE28;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8716(r30)
	PPC_STORE_U32(r30.u32 + 8716, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = r11.s64 + 18664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8716);
loc_8215AE28:
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
	// beq 0x8215ae8c
	if (cr0.eq) goto loc_8215AE8C;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// beq cr6,0x8215add0
	if (cr6.eq) goto loc_8215ADD0;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215add0
	if (cr0.eq) goto loc_8215ADD0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_8215AE84:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8215add0
	goto loc_8215ADD0;
loc_8215AE8C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8708
	r29.s64 = ctx.r10.s64 + 8708;
	// bne 0x8215aeb8
	if (!cr0.eq) goto loc_8215AEB8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,8716(r30)
	PPC_STORE_U32(r30.u32 + 8716, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14872
	ctx.r4.s64 = r11.s64 + -14872;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8716);
loc_8215AEB8:
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
	// beq 0x8215af80
	if (cr0.eq) goto loc_8215AF80;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// bne cr6,0x8215af40
	if (!cr6.eq) goto loc_8215AF40;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821583d8
	sub_821583D8(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,8656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8656);
	// bl 0x8215ac58
	sub_8215AC58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8656);
	// bl 0x82159e88
	sub_82159E88(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215add0
	if (cr0.eq) goto loc_8215ADD0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8215ae84
	goto loc_8215AE84;
loc_8215AF40:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821584a0
	sub_821584A0(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215add0
	if (cr0.eq) goto loc_8215ADD0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8215ae84
	goto loc_8215AE84;
loc_8215AF80:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8704
	r29.s64 = ctx.r10.s64 + 8704;
	// bne 0x8215afac
	if (!cr0.eq) goto loc_8215AFAC;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,8716(r30)
	PPC_STORE_U32(r30.u32 + 8716, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14888
	ctx.r4.s64 = r11.s64 + -14888;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8716);
loc_8215AFAC:
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
	// beq 0x8215b00c
	if (cr0.eq) goto loc_8215B00C;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// beq cr6,0x8215add0
	if (cr6.eq) goto loc_8215ADD0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821584a0
	sub_821584A0(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215add0
	if (cr0.eq) goto loc_8215ADD0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x8215ae84
	goto loc_8215AE84;
loc_8215B00C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8700
	r29.s64 = ctx.r10.s64 + 8700;
	// bne 0x8215b038
	if (!cr0.eq) goto loc_8215B038;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,8716(r30)
	PPC_STORE_U32(r30.u32 + 8716, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14904
	ctx.r4.s64 = r11.s64 + -14904;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8716);
loc_8215B038:
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
	// beq 0x8215b098
	if (cr0.eq) goto loc_8215B098;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// beq cr6,0x8215add0
	if (cr6.eq) goto loc_8215ADD0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821584a0
	sub_821584A0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215add0
	if (cr0.eq) goto loc_8215ADD0;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x8215ae84
	goto loc_8215AE84;
loc_8215B098:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8696
	r29.s64 = ctx.r10.s64 + 8696;
	// bne 0x8215b0c4
	if (!cr0.eq) goto loc_8215B0C4;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,8716(r30)
	PPC_STORE_U32(r30.u32 + 8716, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14912
	ctx.r4.s64 = r11.s64 + -14912;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8716(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8716);
loc_8215B0C4:
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
	// beq 0x8215b0f8
	if (cr0.eq) goto loc_8215B0F8;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,20
	ctx.r3.s64 = r27.s64 + 20;
	// bl 0x82326a90
	sub_82326A90(ctx, base);
	// b 0x8215b168
	goto loc_8215B168;
loc_8215B0F8:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8692
	r29.s64 = ctx.r10.s64 + 8692;
	// bne 0x8215b120
	if (!cr0.eq) goto loc_8215B120;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,8716(r30)
	PPC_STORE_U32(r30.u32 + 8716, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,21136
	ctx.r4.s64 = r11.s64 + 21136;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8215B120:
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
	// beq 0x8215b164
	if (cr0.eq) goto loc_8215B164;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x82158558
	sub_82158558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215add0
	if (cr0.eq) goto loc_8215ADD0;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x8215ae84
	goto loc_8215AE84;
loc_8215B164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215B168:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8215B170"))) PPC_WEAK_FUNC(sub_8215B170);
PPC_FUNC_IMPL(__imp__sub_8215B170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8716
	r11.s64 = r11.s64 + 8716;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8716
	ctx.r10.s64 = ctx.r10.s64 + 8716;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B198"))) PPC_WEAK_FUNC(sub_8215B198);
PPC_FUNC_IMPL(__imp__sub_8215B198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
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

__attribute__((alias("__imp__sub_8215B1C0"))) PPC_WEAK_FUNC(sub_8215B1C0);
PPC_FUNC_IMPL(__imp__sub_8215B1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8716
	r11.s64 = r11.s64 + 8716;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8716
	ctx.r10.s64 = ctx.r10.s64 + 8716;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B1E8"))) PPC_WEAK_FUNC(sub_8215B1E8);
PPC_FUNC_IMPL(__imp__sub_8215B1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
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

__attribute__((alias("__imp__sub_8215B210"))) PPC_WEAK_FUNC(sub_8215B210);
PPC_FUNC_IMPL(__imp__sub_8215B210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
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

__attribute__((alias("__imp__sub_8215B238"))) PPC_WEAK_FUNC(sub_8215B238);
PPC_FUNC_IMPL(__imp__sub_8215B238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8716
	r11.s64 = r11.s64 + 8716;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8716
	ctx.r10.s64 = ctx.r10.s64 + 8716;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B260"))) PPC_WEAK_FUNC(sub_8215B260);
PPC_FUNC_IMPL(__imp__sub_8215B260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
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

__attribute__((alias("__imp__sub_8215B288"))) PPC_WEAK_FUNC(sub_8215B288);
PPC_FUNC_IMPL(__imp__sub_8215B288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8716
	r11.s64 = r11.s64 + 8716;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8716
	ctx.r10.s64 = ctx.r10.s64 + 8716;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B2B0"))) PPC_WEAK_FUNC(sub_8215B2B0);
PPC_FUNC_IMPL(__imp__sub_8215B2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
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

__attribute__((alias("__imp__sub_8215B2D8"))) PPC_WEAK_FUNC(sub_8215B2D8);
PPC_FUNC_IMPL(__imp__sub_8215B2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8716
	r11.s64 = r11.s64 + 8716;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8716
	ctx.r10.s64 = ctx.r10.s64 + 8716;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B300"))) PPC_WEAK_FUNC(sub_8215B300);
PPC_FUNC_IMPL(__imp__sub_8215B300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8716
	r11.s64 = r11.s64 + 8716;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8716
	ctx.r10.s64 = ctx.r10.s64 + 8716;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B328"))) PPC_WEAK_FUNC(sub_8215B328);
PPC_FUNC_IMPL(__imp__sub_8215B328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
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

__attribute__((alias("__imp__sub_8215B350"))) PPC_WEAK_FUNC(sub_8215B350);
PPC_FUNC_IMPL(__imp__sub_8215B350) {
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
	// b 0x8215b388
	goto loc_8215B388;
loc_8215B370:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-72
	ctx.r3.s64 = r11.s64 + -72;
	// bl 0x8215a6b8
	sub_8215A6B8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-72
	r11.s64 = r11.s64 + -72;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8215B388:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// bne 0x8215b370
	if (!cr0.eq) goto loc_8215B370;
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

__attribute__((alias("__imp__sub_8215B3C0"))) PPC_WEAK_FUNC(sub_8215B3C0);
PPC_FUNC_IMPL(__imp__sub_8215B3C0) {
	PPC_FUNC_PROLOGUE();
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
	// li r19,72
	r19.s64 = 72;
	// addi r30,r18,72
	r30.s64 = r18.s64 + 72;
	// li r25,0
	r25.s64 = 0;
	// mr r20,r25
	r20.u64 = r25.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r19
	r11.s32 = r11.s32 / r19.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215b4c0
	if (cr0.eq) goto loc_8215B4C0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r24,r25
	r24.u64 = r25.u64;
	// addi r21,r11,-14520
	r21.s64 = r11.s64 + -14520;
	// li r26,-1
	r26.s64 = -1;
	// li r22,1
	r22.s64 = 1;
	// li r23,12
	r23.s64 = 12;
loc_8215B40C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r27,r25
	r27.u64 = r25.u64;
	// add r31,r24,r11
	r31.u64 = r24.u64 + r11.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// stb r25,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r25.u8);
	// stw r26,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r26.u32);
	// stb r22,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r22.u8);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215b4a0
	if (cr0.eq) goto loc_8215B4A0;
	// mr r28,r25
	r28.u64 = r25.u64;
loc_8215B444:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// add r29,r11,r28
	r29.u64 = r11.u64 + r28.u64;
	// stw r25,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r25.u32);
	// stw r25,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r25.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8215b480
	if (cr0.eq) goto loc_8215B480;
	// stw r22,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r22.u32);
loc_8215B480:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x8215b444
	if (cr6.lt) goto loc_8215B444;
loc_8215B4A0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r24,r24,72
	r24.s64 = r24.s64 + 72;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r19
	r11.s32 = r11.s32 / r19.s32;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// blt cr6,0x8215b40c
	if (cr6.lt) goto loc_8215B40C;
loc_8215B4C0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r31,r25
	r31.u64 = r25.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r19
	r11.s32 = r11.s32 / r19.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215b514
	if (cr0.eq) goto loc_8215B514;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_8215B4DC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r29,r11
	ctx.r4.u64 = r29.u64 + r11.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8215ac58
	sub_8215AC58(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,72
	r29.s64 = r29.s64 + 72;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r19
	r11.s32 = r11.s32 / r19.s32;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8215b4dc
	if (cr6.lt) goto loc_8215B4DC;
loc_8215B514:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_8215B51C"))) PPC_WEAK_FUNC(sub_8215B51C);
PPC_FUNC_IMPL(__imp__sub_8215B51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215B520"))) PPC_WEAK_FUNC(sub_8215B520);
PPC_FUNC_IMPL(__imp__sub_8215B520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-14488(0)
	r16.u64 = PPC_LOAD_U32(-14488);
	// mflr r12
	// bl 0x8239bcd4
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// addi r4,r25,52
	ctx.r4.s64 = r25.s64 + 52;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82132d78
	sub_82132D78(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,82
	ctx.r4.s64 = r31.s64 + 82;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r10,76(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// lwz r9,72(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// li r20,72
	r20.s64 = 72;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r20
	ctx.r10.s32 = ctx.r10.s32 / r20.s32;
	// lha r11,82(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 82));
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8215b758
	if (!cr6.eq) goto loc_8215B758;
	// lwz r11,76(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r24,0
	r24.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r21,r24
	r21.u64 = r24.u64;
	// divw. r11,r11,r20
	r11.s32 = r11.s32 / r20.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215b768
	if (cr0.eq) goto loc_8215B768;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r22,r24
	r22.u64 = r24.u64;
	// addi r19,r11,9120
	r19.s64 = r11.s64 + 9120;
	// li r23,12
	r23.s64 = 12;
loc_8215B5C4:
	// lwz r11,72(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r30,r22,r11
	r30.u64 = r22.u64 + r11.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r10,17(r30)
	PPC_STORE_U8(r30.u32 + 17, ctx.r10.u8);
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8215b628
	if (!cr6.gt) goto loc_8215B628;
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
	// b 0x8215b634
	goto loc_8215B634;
loc_8215B628:
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82353618
	sub_82353618(ctx, base);
loc_8215B634:
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r24,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r24.u8);
	// addi r4,r31,82
	ctx.r4.s64 = r31.s64 + 82;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r23
	ctx.r10.s32 = ctx.r10.s32 / r23.s32;
	// lha r11,82(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 82));
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8215b758
	if (cr6.gt) goto loc_8215B758;
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8215b6e8
	if (!cr6.gt) goto loc_8215B6E8;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_8215B678:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// add r27,r28,r11
	r27.u64 = r28.u64 + r11.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x8215b69c
	if (!cr6.lt) goto loc_8215B69C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,81
	ctx.r4.s64 = r31.s64 + 81;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
loc_8215B69C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
	// lha r11,82(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 82));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8215b678
	if (cr6.lt) goto loc_8215B678;
loc_8215B6E8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8215b734
	if (!cr6.lt) goto loc_8215B734;
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
loc_8215B704:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r24,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r24.u32);
	// stw r24,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r24.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r23
	ctx.r10.s32 = ctx.r10.s32 / r23.s32;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x8215b704
	if (cr6.lt) goto loc_8215B704;
loc_8215B734:
	// lwz r11,76(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// lwz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// addi r22,r22,72
	r22.s64 = r22.s64 + 72;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r20
	r11.s32 = r11.s32 / r20.s32;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// blt cr6,0x8215b5c4
	if (cr6.lt) goto loc_8215B5C4;
	// b 0x8215b768
	goto loc_8215B768;
loc_8215B758:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8215b3c0
	sub_8215B3C0(ctx, base);
loc_8215B768:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,8728(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8728);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,8720
	r30.s64 = ctx.r9.s64 + 8720;
	// bne 0x8215b7b4
	if (!cr0.eq) goto loc_8215B7B4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8728, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,-14512
	ctx.r4.s64 = r11.s64 + -14512;
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
	// addi r3,r11,11672
	ctx.r3.s64 = r11.s64 + 11672;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_8215B7B4:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215b7e8
	if (cr0.eq) goto loc_8215B7E8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215B7E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82159e88
	sub_82159E88(ctx, base);
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_8215B528"))) PPC_WEAK_FUNC(sub_8215B528);
PPC_FUNC_IMPL(__imp__sub_8215B528) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// addi r4,r25,52
	ctx.r4.s64 = r25.s64 + 52;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82132d78
	sub_82132D78(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,82
	ctx.r4.s64 = r31.s64 + 82;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r10,76(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// lwz r9,72(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// li r20,72
	r20.s64 = 72;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r20
	ctx.r10.s32 = ctx.r10.s32 / r20.s32;
	// lha r11,82(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 82));
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8215b758
	if (!cr6.eq) goto loc_8215B758;
	// lwz r11,76(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r24,0
	r24.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r21,r24
	r21.u64 = r24.u64;
	// divw. r11,r11,r20
	r11.s32 = r11.s32 / r20.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215b768
	if (cr0.eq) goto loc_8215B768;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r22,r24
	r22.u64 = r24.u64;
	// addi r19,r11,9120
	r19.s64 = r11.s64 + 9120;
	// li r23,12
	r23.s64 = 12;
loc_8215B5C4:
	// lwz r11,72(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r30,r22,r11
	r30.u64 = r22.u64 + r11.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r10,17(r30)
	PPC_STORE_U8(r30.u32 + 17, ctx.r10.u8);
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8215b628
	if (!cr6.gt) goto loc_8215B628;
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
	// b 0x8215b634
	goto loc_8215B634;
loc_8215B628:
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82353618
	sub_82353618(ctx, base);
loc_8215B634:
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r24,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r24.u8);
	// addi r4,r31,82
	ctx.r4.s64 = r31.s64 + 82;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r23
	ctx.r10.s32 = ctx.r10.s32 / r23.s32;
	// lha r11,82(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 82));
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8215b758
	if (cr6.gt) goto loc_8215B758;
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8215b6e8
	if (!cr6.gt) goto loc_8215B6E8;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_8215B678:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// add r27,r28,r11
	r27.u64 = r28.u64 + r11.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x8215b69c
	if (!cr6.lt) goto loc_8215B69C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,81
	ctx.r4.s64 = r31.s64 + 81;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
loc_8215B69C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
	// lha r11,82(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 82));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8215b678
	if (cr6.lt) goto loc_8215B678;
loc_8215B6E8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8215b734
	if (!cr6.lt) goto loc_8215B734;
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
loc_8215B704:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r24,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r24.u32);
	// stw r24,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r24.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r23
	ctx.r10.s32 = ctx.r10.s32 / r23.s32;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x8215b704
	if (cr6.lt) goto loc_8215B704;
loc_8215B734:
	// lwz r11,76(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// lwz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// addi r22,r22,72
	r22.s64 = r22.s64 + 72;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r20
	r11.s32 = r11.s32 / r20.s32;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// blt cr6,0x8215b5c4
	if (cr6.lt) goto loc_8215B5C4;
	// b 0x8215b768
	goto loc_8215B768;
loc_8215B758:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8215b3c0
	sub_8215B3C0(ctx, base);
loc_8215B768:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,8728(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8728);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,8720
	r30.s64 = ctx.r9.s64 + 8720;
	// bne 0x8215b7b4
	if (!cr0.eq) goto loc_8215B7B4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8728, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,-14512
	ctx.r4.s64 = r11.s64 + -14512;
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
	// addi r3,r11,11672
	ctx.r3.s64 = r11.s64 + 11672;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_8215B7B4:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215b7e8
	if (cr0.eq) goto loc_8215B7E8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8215B7E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82159e88
	sub_82159E88(ctx, base);
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_8215B7FC"))) PPC_WEAK_FUNC(sub_8215B7FC);
PPC_FUNC_IMPL(__imp__sub_8215B7FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8728
	r11.s64 = r11.s64 + 8728;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8728
	ctx.r10.s64 = ctx.r10.s64 + 8728;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B824"))) PPC_WEAK_FUNC(sub_8215B824);
PPC_FUNC_IMPL(__imp__sub_8215B824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215B828"))) PPC_WEAK_FUNC(sub_8215B828);
PPC_FUNC_IMPL(__imp__sub_8215B828) {
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
	// lwz r16,-14296(0)
	r16.u64 = PPC_LOAD_U32(-14296);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// stw r26,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,8756(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8756);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8752
	r29.s64 = ctx.r10.s64 + 8752;
	// bne 0x8215b898
	if (!cr0.eq) goto loc_8215B898;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8756(r30)
	PPC_STORE_U32(r30.u32 + 8756, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14376
	ctx.r4.s64 = r11.s64 + -14376;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8756(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8756);
loc_8215B898:
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
	// beq 0x8215b8e8
	if (cr0.eq) goto loc_8215B8E8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x821586f0
	sub_821586F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8215bb6c
	goto loc_8215BB6C;
loc_8215B8E8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8748
	r29.s64 = ctx.r10.s64 + 8748;
	// bne 0x8215b914
	if (!cr0.eq) goto loc_8215B914;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,8756(r30)
	PPC_STORE_U32(r30.u32 + 8756, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14388
	ctx.r4.s64 = r11.s64 + -14388;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8756(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8756);
loc_8215B914:
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
	// beq 0x8215b970
	if (cr0.eq) goto loc_8215B970;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x821586f0
	sub_821586F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x821584a0
	sub_821584A0(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// li r11,5
	r11.s64 = 5;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x8215bb68
	goto loc_8215BB68;
loc_8215B970:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8744
	r29.s64 = ctx.r10.s64 + 8744;
	// bne 0x8215b99c
	if (!cr0.eq) goto loc_8215B99C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,8756(r30)
	PPC_STORE_U32(r30.u32 + 8756, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14396
	ctx.r4.s64 = r11.s64 + -14396;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8756(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8756);
loc_8215B99C:
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
	// beq 0x8215b9fc
	if (cr0.eq) goto loc_8215B9FC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,24
	ctx.r4.s64 = r11.s64 + 24;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x8215acf8
	sub_8215ACF8(ctx, base);
loc_8215B9F0:
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x8215bb6c
	goto loc_8215BB6C;
loc_8215B9FC:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8740
	r29.s64 = ctx.r10.s64 + 8740;
	// bne 0x8215ba28
	if (!cr0.eq) goto loc_8215BA28;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,8756(r30)
	PPC_STORE_U32(r30.u32 + 8756, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14408
	ctx.r4.s64 = r11.s64 + -14408;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8756(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8756);
loc_8215BA28:
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
	// beq 0x8215ba84
	if (cr0.eq) goto loc_8215BA84;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82159ff8
	sub_82159FF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8215ba80
	if (cr6.eq) goto loc_8215BA80;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215bb6c
	if (cr0.eq) goto loc_8215BB6C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
loc_8215BA78:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8215bb6c
	goto loc_8215BB6C;
loc_8215BA80:
	// lwz r11,8756(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8756);
loc_8215BA84:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8736
	r29.s64 = ctx.r10.s64 + 8736;
	// bne 0x8215bab0
	if (!cr0.eq) goto loc_8215BAB0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,8756(r30)
	PPC_STORE_U32(r30.u32 + 8756, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14416
	ctx.r4.s64 = r11.s64 + -14416;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8756(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8756);
loc_8215BAB0:
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
	// beq 0x8215bad4
	if (cr0.eq) goto loc_8215BAD4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82158990
	sub_82158990(ctx, base);
	// b 0x8215b9f0
	goto loc_8215B9F0;
loc_8215BAD4:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8732
	r29.s64 = ctx.r10.s64 + 8732;
	// bne 0x8215bafc
	if (!cr0.eq) goto loc_8215BAFC;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,8756(r30)
	PPC_STORE_U32(r30.u32 + 8756, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14424
	ctx.r4.s64 = r11.s64 + -14424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8215BAFC:
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
	// beq 0x8215bb20
	if (cr0.eq) goto loc_8215BB20;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8215b3c0
	sub_8215B3C0(ctx, base);
	// b 0x8215b9f0
	goto loc_8215B9F0;
loc_8215BB20:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8215bb60
	if (cr6.eq) goto loc_8215BB60;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215bb6c
	if (cr0.eq) goto loc_8215BB6C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8215ba78
	goto loc_8215BA78;
loc_8215BB60:
	// li r11,6
	r11.s64 = 6;
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
loc_8215BB68:
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_8215BB6C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8215B830"))) PPC_WEAK_FUNC(sub_8215B830);
PPC_FUNC_IMPL(__imp__sub_8215B830) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// stw r26,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,8756(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8756);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8752
	r29.s64 = ctx.r10.s64 + 8752;
	// bne 0x8215b898
	if (!cr0.eq) goto loc_8215B898;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8756(r30)
	PPC_STORE_U32(r30.u32 + 8756, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14376
	ctx.r4.s64 = r11.s64 + -14376;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8756(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8756);
loc_8215B898:
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
	// beq 0x8215b8e8
	if (cr0.eq) goto loc_8215B8E8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x821586f0
	sub_821586F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8215bb6c
	goto loc_8215BB6C;
loc_8215B8E8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8748
	r29.s64 = ctx.r10.s64 + 8748;
	// bne 0x8215b914
	if (!cr0.eq) goto loc_8215B914;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,8756(r30)
	PPC_STORE_U32(r30.u32 + 8756, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14388
	ctx.r4.s64 = r11.s64 + -14388;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8756(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8756);
loc_8215B914:
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
	// beq 0x8215b970
	if (cr0.eq) goto loc_8215B970;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x821586f0
	sub_821586F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x821584a0
	sub_821584A0(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// li r11,5
	r11.s64 = 5;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x8215bb68
	goto loc_8215BB68;
loc_8215B970:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8744
	r29.s64 = ctx.r10.s64 + 8744;
	// bne 0x8215b99c
	if (!cr0.eq) goto loc_8215B99C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,8756(r30)
	PPC_STORE_U32(r30.u32 + 8756, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14396
	ctx.r4.s64 = r11.s64 + -14396;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8756(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8756);
loc_8215B99C:
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
	// beq 0x8215b9fc
	if (cr0.eq) goto loc_8215B9FC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,24
	ctx.r4.s64 = r11.s64 + 24;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x8215acf8
	sub_8215ACF8(ctx, base);
loc_8215B9F0:
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x8215bb6c
	goto loc_8215BB6C;
loc_8215B9FC:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8740
	r29.s64 = ctx.r10.s64 + 8740;
	// bne 0x8215ba28
	if (!cr0.eq) goto loc_8215BA28;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,8756(r30)
	PPC_STORE_U32(r30.u32 + 8756, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14408
	ctx.r4.s64 = r11.s64 + -14408;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8756(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8756);
loc_8215BA28:
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
	// beq 0x8215ba84
	if (cr0.eq) goto loc_8215BA84;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82159ff8
	sub_82159FF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8215ba80
	if (cr6.eq) goto loc_8215BA80;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215bb6c
	if (cr0.eq) goto loc_8215BB6C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
loc_8215BA78:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8215bb6c
	goto loc_8215BB6C;
loc_8215BA80:
	// lwz r11,8756(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8756);
loc_8215BA84:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8736
	r29.s64 = ctx.r10.s64 + 8736;
	// bne 0x8215bab0
	if (!cr0.eq) goto loc_8215BAB0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,8756(r30)
	PPC_STORE_U32(r30.u32 + 8756, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14416
	ctx.r4.s64 = r11.s64 + -14416;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,8756(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8756);
loc_8215BAB0:
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
	// beq 0x8215bad4
	if (cr0.eq) goto loc_8215BAD4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82158990
	sub_82158990(ctx, base);
	// b 0x8215b9f0
	goto loc_8215B9F0;
loc_8215BAD4:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,8732
	r29.s64 = ctx.r10.s64 + 8732;
	// bne 0x8215bafc
	if (!cr0.eq) goto loc_8215BAFC;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,8756(r30)
	PPC_STORE_U32(r30.u32 + 8756, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14424
	ctx.r4.s64 = r11.s64 + -14424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8215BAFC:
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
	// beq 0x8215bb20
	if (cr0.eq) goto loc_8215BB20;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8215b3c0
	sub_8215B3C0(ctx, base);
	// b 0x8215b9f0
	goto loc_8215B9F0;
loc_8215BB20:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8215bb60
	if (cr6.eq) goto loc_8215BB60;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215bb6c
	if (cr0.eq) goto loc_8215BB6C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8215ba78
	goto loc_8215BA78;
loc_8215BB60:
	// li r11,6
	r11.s64 = 6;
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
loc_8215BB68:
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_8215BB6C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8215BB78"))) PPC_WEAK_FUNC(sub_8215BB78);
PPC_FUNC_IMPL(__imp__sub_8215BB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8756
	r11.s64 = r11.s64 + 8756;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8756
	ctx.r10.s64 = ctx.r10.s64 + 8756;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BBA0"))) PPC_WEAK_FUNC(sub_8215BBA0);
PPC_FUNC_IMPL(__imp__sub_8215BBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8756
	r11.s64 = r11.s64 + 8756;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8756
	ctx.r10.s64 = ctx.r10.s64 + 8756;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BBC8"))) PPC_WEAK_FUNC(sub_8215BBC8);
PPC_FUNC_IMPL(__imp__sub_8215BBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8756
	r11.s64 = r11.s64 + 8756;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8756
	ctx.r10.s64 = ctx.r10.s64 + 8756;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BBF0"))) PPC_WEAK_FUNC(sub_8215BBF0);
PPC_FUNC_IMPL(__imp__sub_8215BBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8756
	r11.s64 = r11.s64 + 8756;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8756
	ctx.r10.s64 = ctx.r10.s64 + 8756;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BC18"))) PPC_WEAK_FUNC(sub_8215BC18);
PPC_FUNC_IMPL(__imp__sub_8215BC18) {
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

__attribute__((alias("__imp__sub_8215BC40"))) PPC_WEAK_FUNC(sub_8215BC40);
PPC_FUNC_IMPL(__imp__sub_8215BC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8756
	r11.s64 = r11.s64 + 8756;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8756
	ctx.r10.s64 = ctx.r10.s64 + 8756;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BC68"))) PPC_WEAK_FUNC(sub_8215BC68);
PPC_FUNC_IMPL(__imp__sub_8215BC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8756
	r11.s64 = r11.s64 + 8756;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8756
	ctx.r10.s64 = ctx.r10.s64 + 8756;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BC90"))) PPC_WEAK_FUNC(sub_8215BC90);
PPC_FUNC_IMPL(__imp__sub_8215BC90) {
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

__attribute__((alias("__imp__sub_8215BCB8"))) PPC_WEAK_FUNC(sub_8215BCB8);
PPC_FUNC_IMPL(__imp__sub_8215BCB8) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r30,72
	r11.s64 = r30.s64 + 72;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8215bd08
	if (cr6.eq) goto loc_8215BD08;
	// li r9,72
	ctx.r9.s64 = 72;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// divw. r31,r11,r9
	r31.s32 = r11.s32 / ctx.r9.s32;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// ble 0x8215bd08
	if (!cr0.gt) goto loc_8215BD08;
loc_8215BCF0:
	// addi r29,r3,72
	r29.s64 = ctx.r3.s64 + 72;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215a470
	sub_8215A470(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bgt 0x8215bcf0
	if (cr0.gt) goto loc_8215BCF0;
loc_8215BD08:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r11,-72
	ctx.r3.s64 = r11.s64 + -72;
	// stw r3,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// bl 0x8215a6b8
	sub_8215A6B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8215BD24"))) PPC_WEAK_FUNC(sub_8215BD24);
PPC_FUNC_IMPL(__imp__sub_8215BD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215BD28"))) PPC_WEAK_FUNC(sub_8215BD28);
PPC_FUNC_IMPL(__imp__sub_8215BD28) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x8215bd60
	if (cr6.eq) goto loc_8215BD60;
loc_8215BD4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215a6b8
	sub_8215A6B8(ctx, base);
	// addi r31,r31,72
	r31.s64 = r31.s64 + 72;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8215bd4c
	if (!cr6.eq) goto loc_8215BD4C;
loc_8215BD60:
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

__attribute__((alias("__imp__sub_8215BD78"))) PPC_WEAK_FUNC(sub_8215BD78);
PPC_FUNC_IMPL(__imp__sub_8215BD78) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8215b350
	sub_8215B350(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,72
	r11.s64 = 72;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// mulli r3,r11,72
	ctx.r3.s64 = r11.s64 * 72;
	// bl 0x82355020
	sub_82355020(ctx, base);
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

__attribute__((alias("__imp__sub_8215BDDC"))) PPC_WEAK_FUNC(sub_8215BDDC);
PPC_FUNC_IMPL(__imp__sub_8215BDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215BDE0"))) PPC_WEAK_FUNC(sub_8215BDE0);
PPC_FUNC_IMPL(__imp__sub_8215BDE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r16,-14068(0)
	r16.u64 = PPC_LOAD_U32(-14068);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
loc_8215BE14:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x8215be3c
	if (cr6.eq) goto loc_8215BE3C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215a9a8
	sub_8215A9A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,72
	r29.s64 = r29.s64 + 72;
	// addi r30,r30,72
	r30.s64 = r30.s64 + 72;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x8215be14
	goto loc_8215BE14;
loc_8215BE3C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8215BDE8"))) PPC_WEAK_FUNC(sub_8215BDE8);
PPC_FUNC_IMPL(__imp__sub_8215BDE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
loc_8215BE14:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x8215be3c
	if (cr6.eq) goto loc_8215BE3C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215a9a8
	sub_8215A9A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,72
	r29.s64 = r29.s64 + 72;
	// addi r30,r30,72
	r30.s64 = r30.s64 + 72;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x8215be14
	goto loc_8215BE14;
loc_8215BE3C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8215BE48"))) PPC_WEAK_FUNC(sub_8215BE48);
PPC_FUNC_IMPL(__imp__sub_8215BE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-14068(0)
	r16.u64 = PPC_LOAD_U32(-14068);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x8215bd28
	sub_8215BD28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8215b350
	sub_8215B350(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,72
	r11.s64 = 72;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// mulli r3,r11,72
	ctx.r3.s64 = r11.s64 * 72;
	// bl 0x82355020
	sub_82355020(ctx, base);
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

__attribute__((alias("__imp__sub_8215BE50"))) PPC_WEAK_FUNC(sub_8215BE50);
PPC_FUNC_IMPL(__imp__sub_8215BE50) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x8215bd28
	sub_8215BD28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_8215BE78"))) PPC_WEAK_FUNC(sub_8215BE78);
PPC_FUNC_IMPL(__imp__sub_8215BE78) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8215b350
	sub_8215B350(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,72
	r11.s64 = 72;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// mulli r3,r11,72
	ctx.r3.s64 = r11.s64 * 72;
	// bl 0x82355020
	sub_82355020(ctx, base);
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

__attribute__((alias("__imp__sub_8215BEDC"))) PPC_WEAK_FUNC(sub_8215BEDC);
PPC_FUNC_IMPL(__imp__sub_8215BEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215BEE0"))) PPC_WEAK_FUNC(sub_8215BEE0);
PPC_FUNC_IMPL(__imp__sub_8215BEE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r16,-13964(0)
	r16.u64 = PPC_LOAD_U32(-13964);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_8215BF14:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8215bf3c
	if (cr6.eq) goto loc_8215BF3C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215a9a8
	sub_8215A9A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,72
	r30.s64 = r30.s64 + 72;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x8215bf14
	goto loc_8215BF14;
loc_8215BF3C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8215BEE8"))) PPC_WEAK_FUNC(sub_8215BEE8);
PPC_FUNC_IMPL(__imp__sub_8215BEE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_8215BF14:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8215bf3c
	if (cr6.eq) goto loc_8215BF3C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215a9a8
	sub_8215A9A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,72
	r30.s64 = r30.s64 + 72;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x8215bf14
	goto loc_8215BF14;
loc_8215BF3C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8215BF48"))) PPC_WEAK_FUNC(sub_8215BF48);
PPC_FUNC_IMPL(__imp__sub_8215BF48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r12{};
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
	// lwz r16,-13964(0)
	r16.u64 = PPC_LOAD_U32(-13964);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x8215bd28
	sub_8215BD28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-13860(0)
	r16.u64 = PPC_LOAD_U32(-13860);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
loc_8215BFAC:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x8215bfd4
	if (cr6.eq) goto loc_8215BFD4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215a9a8
	sub_8215A9A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,72
	r29.s64 = r29.s64 + 72;
	// addi r30,r30,72
	r30.s64 = r30.s64 + 72;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x8215bfac
	goto loc_8215BFAC;
loc_8215BFD4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8215BF50"))) PPC_WEAK_FUNC(sub_8215BF50);
PPC_FUNC_IMPL(__imp__sub_8215BF50) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x8215bd28
	sub_8215BD28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_8215BF80"))) PPC_WEAK_FUNC(sub_8215BF80);
PPC_FUNC_IMPL(__imp__sub_8215BF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
loc_8215BFAC:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x8215bfd4
	if (cr6.eq) goto loc_8215BFD4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215a9a8
	sub_8215A9A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,72
	r29.s64 = r29.s64 + 72;
	// addi r30,r30,72
	r30.s64 = r30.s64 + 72;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x8215bfac
	goto loc_8215BFAC;
loc_8215BFD4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8215BFE0"))) PPC_WEAK_FUNC(sub_8215BFE0);
PPC_FUNC_IMPL(__imp__sub_8215BFE0) {
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
	// lwz r16,-13860(0)
	r16.u64 = PPC_LOAD_U32(-13860);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x8215bd28
	sub_8215BD28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-13800(0)
	r16.u64 = PPC_LOAD_U32(-13800);
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// bl 0x8215b350
	sub_8215B350(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8215c07c
	if (cr0.eq) goto loc_8215C07C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,72
	ctx.r10.s64 = 72;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,72
	ctx.r3.s64 = r11.s64 * 72;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8215C07C:
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

__attribute__((alias("__imp__sub_8215BFE8"))) PPC_WEAK_FUNC(sub_8215BFE8);
PPC_FUNC_IMPL(__imp__sub_8215BFE8) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x8215bd28
	sub_8215BD28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_8215C018"))) PPC_WEAK_FUNC(sub_8215C018);
PPC_FUNC_IMPL(__imp__sub_8215C018) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// bl 0x8215b350
	sub_8215B350(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8215c07c
	if (cr0.eq) goto loc_8215C07C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,72
	ctx.r10.s64 = 72;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,72
	ctx.r3.s64 = r11.s64 * 72;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8215C07C:
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

__attribute__((alias("__imp__sub_8215C094"))) PPC_WEAK_FUNC(sub_8215C094);
PPC_FUNC_IMPL(__imp__sub_8215C094) {
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
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x82158360
	sub_82158360(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C0BC"))) PPC_WEAK_FUNC(sub_8215C0BC);
PPC_FUNC_IMPL(__imp__sub_8215C0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215C0C0"))) PPC_WEAK_FUNC(sub_8215C0C0);
PPC_FUNC_IMPL(__imp__sub_8215C0C0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r11,72
	r11.s64 = 72;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// divw. r30,r10,r11
	r30.s32 = ctx.r10.s32 / r11.s32;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x8215c108
	if (!cr0.gt) goto loc_8215C108;
	// subf r27,r29,r5
	r27.s64 = ctx.r5.s64 - r29.s64;
loc_8215C0F0:
	// add r4,r27,r31
	ctx.r4.u64 = r27.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215a470
	sub_8215A470(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,72
	r31.s64 = r31.s64 + 72;
	// bgt 0x8215c0f0
	if (cr0.gt) goto loc_8215C0F0;
loc_8215C108:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x8215bd28
	sub_8215BD28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8215C124"))) PPC_WEAK_FUNC(sub_8215C124);
PPC_FUNC_IMPL(__imp__sub_8215C124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215C128"))) PPC_WEAK_FUNC(sub_8215C128);
PPC_FUNC_IMPL(__imp__sub_8215C128) {
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
	// lwz r16,-13736(0)
	r16.u64 = PPC_LOAD_U32(-13736);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x8215c16c
	if (cr6.lt) goto loc_8215C16C;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x8215c170
	if (cr6.lt) goto loc_8215C170;
loc_8215C16C:
	// li r11,0
	r11.s64 = 0;
loc_8215C170:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215c1b4
	if (cr0.eq) goto loc_8215C1B4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8215a570
	sub_8215A570(ctx, base);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x8215c130
	sub_8215C130(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8215a6b8
	sub_8215A6B8(ctx, base);
	// b 0x8215c29c
	goto loc_8215C29C;
loc_8215C1B4:
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r25,72
	r25.s64 = 72;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// divw r27,r11,r25
	r27.s32 = r11.s32 / r25.s32;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// ble cr6,0x8215c248
	if (!cr6.gt) goto loc_8215C248;
	// mulli r26,r26,72
	r26.s64 = r26.s64 * 72;
	// subf r27,r26,r30
	r27.s64 = r30.s64 - r26.s64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215bf80
	sub_8215BF80(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// subf r11,r28,r27
	r11.s64 = r27.s64 - r28.s64;
	// divw. r29,r11,r25
	r29.s32 = r11.s32 / r25.s32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x8215c21c
	if (!cr0.gt) goto loc_8215C21C;
	// subf r27,r30,r27
	r27.s64 = r27.s64 - r30.s64;
loc_8215C204:
	// addi r30,r30,-72
	r30.s64 = r30.s64 + -72;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215a470
	sub_8215A470(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bgt 0x8215c204
	if (cr0.gt) goto loc_8215C204;
loc_8215C21C:
	// add r29,r26,r28
	r29.u64 = r26.u64 + r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x8215c29c
	if (cr6.eq) goto loc_8215C29C;
loc_8215C22C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215a470
	sub_8215A470(ctx, base);
	// addi r30,r30,72
	r30.s64 = r30.s64 + 72;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x8215c22c
	if (!cr6.eq) goto loc_8215C22C;
	// b 0x8215c29c
	goto loc_8215C29C;
loc_8215C248:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// subf r4,r27,r26
	ctx.r4.s64 = r26.s64 - r27.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215bee8
	sub_8215BEE8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r5,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r5.u32);
	// bl 0x8215bf80
	sub_8215BF80(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r27,72
	r11.s64 = r27.s64 * 72;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x8215c294
	goto loc_8215C294;
loc_8215C284:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215a470
	sub_8215A470(ctx, base);
	// addi r28,r28,72
	r28.s64 = r28.s64 + 72;
loc_8215C294:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x8215c284
	if (!cr6.eq) goto loc_8215C284;
loc_8215C29C:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8215C130"))) PPC_WEAK_FUNC(sub_8215C130);
PPC_FUNC_IMPL(__imp__sub_8215C130) {
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
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x8215c16c
	if (cr6.lt) goto loc_8215C16C;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x8215c170
	if (cr6.lt) goto loc_8215C170;
loc_8215C16C:
	// li r11,0
	r11.s64 = 0;
loc_8215C170:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215c1b4
	if (cr0.eq) goto loc_8215C1B4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8215a570
	sub_8215A570(ctx, base);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x8215c130
	sub_8215C130(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8215a6b8
	sub_8215A6B8(ctx, base);
	// b 0x8215c29c
	goto loc_8215C29C;
loc_8215C1B4:
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r25,72
	r25.s64 = 72;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// divw r27,r11,r25
	r27.s32 = r11.s32 / r25.s32;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// ble cr6,0x8215c248
	if (!cr6.gt) goto loc_8215C248;
	// mulli r26,r26,72
	r26.s64 = r26.s64 * 72;
	// subf r27,r26,r30
	r27.s64 = r30.s64 - r26.s64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215bf80
	sub_8215BF80(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// subf r11,r28,r27
	r11.s64 = r27.s64 - r28.s64;
	// divw. r29,r11,r25
	r29.s32 = r11.s32 / r25.s32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x8215c21c
	if (!cr0.gt) goto loc_8215C21C;
	// subf r27,r30,r27
	r27.s64 = r27.s64 - r30.s64;
loc_8215C204:
	// addi r30,r30,-72
	r30.s64 = r30.s64 + -72;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215a470
	sub_8215A470(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bgt 0x8215c204
	if (cr0.gt) goto loc_8215C204;
loc_8215C21C:
	// add r29,r26,r28
	r29.u64 = r26.u64 + r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x8215c29c
	if (cr6.eq) goto loc_8215C29C;
loc_8215C22C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215a470
	sub_8215A470(ctx, base);
	// addi r30,r30,72
	r30.s64 = r30.s64 + 72;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x8215c22c
	if (!cr6.eq) goto loc_8215C22C;
	// b 0x8215c29c
	goto loc_8215C29C;
loc_8215C248:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// subf r4,r27,r26
	ctx.r4.s64 = r26.s64 - r27.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215bee8
	sub_8215BEE8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r5,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r5.u32);
	// bl 0x8215bf80
	sub_8215BF80(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r27,72
	r11.s64 = r27.s64 * 72;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x8215c294
	goto loc_8215C294;
loc_8215C284:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215a470
	sub_8215A470(ctx, base);
	// addi r28,r28,72
	r28.s64 = r28.s64 + 72;
loc_8215C294:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x8215c284
	if (!cr6.eq) goto loc_8215C284;
loc_8215C29C:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8215C2A4"))) PPC_WEAK_FUNC(sub_8215C2A4);
PPC_FUNC_IMPL(__imp__sub_8215C2A4) {
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

__attribute__((alias("__imp__sub_8215C2CC"))) PPC_WEAK_FUNC(sub_8215C2CC);
PPC_FUNC_IMPL(__imp__sub_8215C2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215C2D0"))) PPC_WEAK_FUNC(sub_8215C2D0);
PPC_FUNC_IMPL(__imp__sub_8215C2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
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
	// lwz r16,-13604(0)
	r16.u64 = PPC_LOAD_U32(-13604);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82158058
	sub_82158058(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215bde8
	sub_8215BDE8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8215C2D8"))) PPC_WEAK_FUNC(sub_8215C2D8);
PPC_FUNC_IMPL(__imp__sub_8215C2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
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
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82158058
	sub_82158058(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215bde8
	sub_8215BDE8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8215C334"))) PPC_WEAK_FUNC(sub_8215C334);
PPC_FUNC_IMPL(__imp__sub_8215C334) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lwz r16,-13604(0)
	r16.u64 = PPC_LOAD_U32(-13604);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-13432(0)
	r16.u64 = PPC_LOAD_U32(-13432);
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-16248
	r11.s64 = r11.s64 + -16248;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,-16232
	r11.s64 = r11.s64 + -16232;
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-13516
	r11.s64 = r11.s64 + -13516;
	// addi r10,r10,-13536
	ctx.r10.s64 = ctx.r10.s64 + -13536;
	// addi r9,r9,-13548
	ctx.r9.s64 = ctx.r9.s64 + -13548;
	// addi r28,r30,52
	r28.s64 = r30.s64 + 52;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r9,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r9.u32);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r30,72
	ctx.r10.s64 = r30.s64 + 72;
	// addi r8,r8,2488
	ctx.r8.s64 = ctx.r8.s64 + 2488;
	// addi r11,r30,92
	r11.s64 = r30.s64 + 92;
	// std r29,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r29.u64);
	// ld r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// stw r8,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r8.u32);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8215C33C"))) PPC_WEAK_FUNC(sub_8215C33C);
PPC_FUNC_IMPL(__imp__sub_8215C33C) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_8215C370"))) PPC_WEAK_FUNC(sub_8215C370);
PPC_FUNC_IMPL(__imp__sub_8215C370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-16248
	r11.s64 = r11.s64 + -16248;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,-16232
	r11.s64 = r11.s64 + -16232;
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-13516
	r11.s64 = r11.s64 + -13516;
	// addi r10,r10,-13536
	ctx.r10.s64 = ctx.r10.s64 + -13536;
	// addi r9,r9,-13548
	ctx.r9.s64 = ctx.r9.s64 + -13548;
	// addi r28,r30,52
	r28.s64 = r30.s64 + 52;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r9,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r9.u32);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r30,72
	ctx.r10.s64 = r30.s64 + 72;
	// addi r8,r8,2488
	ctx.r8.s64 = ctx.r8.s64 + 2488;
	// addi r11,r30,92
	r11.s64 = r30.s64 + 92;
	// std r29,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r29.u64);
	// ld r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// stw r8,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r8.u32);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8215C428"))) PPC_WEAK_FUNC(sub_8215C428);
PPC_FUNC_IMPL(__imp__sub_8215C428) {
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
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
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

__attribute__((alias("__imp__sub_8215C450"))) PPC_WEAK_FUNC(sub_8215C450);
PPC_FUNC_IMPL(__imp__sub_8215C450) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x82157bb8
	sub_82157BB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C47C"))) PPC_WEAK_FUNC(sub_8215C47C);
PPC_FUNC_IMPL(__imp__sub_8215C47C) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x823283c8
	sub_823283C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C4A8"))) PPC_WEAK_FUNC(sub_8215C4A8);
PPC_FUNC_IMPL(__imp__sub_8215C4A8) {
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
	// bl 0x8214dfa8
	sub_8214DFA8(ctx, base);
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

__attribute__((alias("__imp__sub_8215C4D8"))) PPC_WEAK_FUNC(sub_8215C4D8);
PPC_FUNC_IMPL(__imp__sub_8215C4D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x8215cab8
	sub_8215CAB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215C4E0"))) PPC_WEAK_FUNC(sub_8215C4E0);
PPC_FUNC_IMPL(__imp__sub_8215C4E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x8215cab8
	sub_8215CAB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215C4E8"))) PPC_WEAK_FUNC(sub_8215C4E8);
PPC_FUNC_IMPL(__imp__sub_8215C4E8) {
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
	// lwz r16,-13368(0)
	r16.u64 = PPC_LOAD_U32(-13368);
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r28,-32136
	r28.s64 = -2106064896;
	// lwz r11,8764(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8764);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8215c56c
	if (!cr0.eq) goto loc_8215C56C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8764, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = r11.s64 + 2988;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x8214dfa8
	sub_8214DFA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d80
	sub_82270D80(ctx, base);
	// stw r3,8760(r28)
	PPC_STORE_U32(r28.u32 + 8760, ctx.r3.u32);
	// b 0x8215c570
	goto loc_8215C570;
loc_8215C56C:
	// lwz r3,8760(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8760);
loc_8215C570:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215c5a0
	if (cr0.eq) goto loc_8215C5A0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8215c5e8
	goto loc_8215C5E8;
loc_8215C5A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bne 0x8215c5dc
	if (!cr0.eq) goto loc_8215C5DC;
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8215C5DC:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8215C5E8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8215C4F0"))) PPC_WEAK_FUNC(sub_8215C4F0);
PPC_FUNC_IMPL(__imp__sub_8215C4F0) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r28,-32136
	r28.s64 = -2106064896;
	// lwz r11,8764(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8764);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8215c56c
	if (!cr0.eq) goto loc_8215C56C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8764, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = r11.s64 + 2988;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x8214dfa8
	sub_8214DFA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d80
	sub_82270D80(ctx, base);
	// stw r3,8760(r28)
	PPC_STORE_U32(r28.u32 + 8760, ctx.r3.u32);
	// b 0x8215c570
	goto loc_8215C570;
loc_8215C56C:
	// lwz r3,8760(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8760);
loc_8215C570:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8215c5a0
	if (cr0.eq) goto loc_8215C5A0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8215c5e8
	goto loc_8215C5E8;
loc_8215C5A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bne 0x8215c5dc
	if (!cr0.eq) goto loc_8215C5DC;
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8215C5DC:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8215C5E8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8215C5F4"))) PPC_WEAK_FUNC(sub_8215C5F4);
PPC_FUNC_IMPL(__imp__sub_8215C5F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,8764
	r11.s64 = r11.s64 + 8764;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,8764
	ctx.r10.s64 = ctx.r10.s64 + 8764;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C61C"))) PPC_WEAK_FUNC(sub_8215C61C);
PPC_FUNC_IMPL(__imp__sub_8215C61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215C620"))) PPC_WEAK_FUNC(sub_8215C620);
PPC_FUNC_IMPL(__imp__sub_8215C620) {
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
	// lwz r16,-13256(0)
	r16.u64 = PPC_LOAD_U32(-13256);
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-13516
	r11.s64 = r11.s64 + -13516;
	// addi r10,r10,-13536
	ctx.r10.s64 = ctx.r10.s64 + -13536;
	// addi r9,r9,-13548
	ctx.r9.s64 = ctx.r9.s64 + -13548;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r9,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r9.u32);
	// bl 0x82158990
	sub_82158990(ctx, base);
	// addi r3,r30,92
	ctx.r3.s64 = r30.s64 + 92;
	// bl 0x82158ed8
	sub_82158ED8(ctx, base);
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x8215c018
	sub_8215C018(ctx, base);
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-16232
	r11.s64 = r11.s64 + -16232;
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-16248
	r11.s64 = r11.s64 + -16248;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
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

__attribute__((alias("__imp__sub_8215C628"))) PPC_WEAK_FUNC(sub_8215C628);
PPC_FUNC_IMPL(__imp__sub_8215C628) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-13516
	r11.s64 = r11.s64 + -13516;
	// addi r10,r10,-13536
	ctx.r10.s64 = ctx.r10.s64 + -13536;
	// addi r9,r9,-13548
	ctx.r9.s64 = ctx.r9.s64 + -13548;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r9,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r9.u32);
	// bl 0x82158990
	sub_82158990(ctx, base);
	// addi r3,r30,92
	ctx.r3.s64 = r30.s64 + 92;
	// bl 0x82158ed8
	sub_82158ED8(ctx, base);
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x8215c018
	sub_8215C018(ctx, base);
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-16232
	r11.s64 = r11.s64 + -16232;
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-16248
	r11.s64 = r11.s64 + -16248;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
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

__attribute__((alias("__imp__sub_8215C6C0"))) PPC_WEAK_FUNC(sub_8215C6C0);
PPC_FUNC_IMPL(__imp__sub_8215C6C0) {
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

__attribute__((alias("__imp__sub_8215C6E8"))) PPC_WEAK_FUNC(sub_8215C6E8);
PPC_FUNC_IMPL(__imp__sub_8215C6E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8215c714
	if (cr6.eq) goto loc_8215C714;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,40
	r11.s64 = r11.s64 + 40;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x8215c71c
	goto loc_8215C71C;
loc_8215C714:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8215C71C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82157bb8
	sub_82157BB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C734"))) PPC_WEAK_FUNC(sub_8215C734);
PPC_FUNC_IMPL(__imp__sub_8215C734) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8215c760
	if (cr6.eq) goto loc_8215C760;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,44
	r11.s64 = r11.s64 + 44;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// b 0x8215c768
	goto loc_8215C768;
loc_8215C760:
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_8215C768:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x823283c8
	sub_823283C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

