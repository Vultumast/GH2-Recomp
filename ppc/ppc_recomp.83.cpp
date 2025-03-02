#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822C4064"))) PPC_WEAK_FUNC(sub_822C4064);
PPC_FUNC_IMPL(__imp__sub_822C4064) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,18116(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18116);
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
	// mulli r3,r11,24
	ctx.r3.s64 = r11.s64 * 24;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// subf r11,r3,r30
	r11.s64 = r30.s64 - ctx.r3.s64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// ble cr6,0x822c40f4
	if (!cr6.gt) goto loc_822C40F4;
	// addi r31,r3,64
	r31.s64 = ctx.r3.s64 + 64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822c3330
	sub_822C3330(ctx, base);
	// b 0x822c40e8
	goto loc_822C40E8;
loc_822C40D4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822bfeb0
	sub_822BFEB0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822C40E8:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x822c40d4
	if (!cr6.eq) goto loc_822C40D4;
	// b 0x822c40fc
	goto loc_822C40FC;
loc_822C40F4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822c3330
	sub_822C3330(ctx, base);
loc_822C40FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C406C"))) PPC_WEAK_FUNC(sub_822C406C);
PPC_FUNC_IMPL(__imp__sub_822C406C) {
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
	// mulli r3,r11,24
	ctx.r3.s64 = r11.s64 * 24;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_822C4098"))) PPC_WEAK_FUNC(sub_822C4098);
PPC_FUNC_IMPL(__imp__sub_822C4098) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// subf r11,r3,r30
	r11.s64 = r30.s64 - ctx.r3.s64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// ble cr6,0x822c40f4
	if (!cr6.gt) goto loc_822C40F4;
	// addi r31,r3,64
	r31.s64 = ctx.r3.s64 + 64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822c3330
	sub_822C3330(ctx, base);
	// b 0x822c40e8
	goto loc_822C40E8;
loc_822C40D4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822bfeb0
	sub_822BFEB0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822C40E8:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x822c40d4
	if (!cr6.eq) goto loc_822C40D4;
	// b 0x822c40fc
	goto loc_822C40FC;
loc_822C40F4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822c3330
	sub_822C3330(ctx, base);
loc_822C40FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C4104"))) PPC_WEAK_FUNC(sub_822C4104);
PPC_FUNC_IMPL(__imp__sub_822C4104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C4108"))) PPC_WEAK_FUNC(sub_822C4108);
PPC_FUNC_IMPL(__imp__sub_822C4108) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// subf r11,r31,r4
	r11.s64 = ctx.r4.s64 - r31.s64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// ble cr6,0x822c4164
	if (!cr6.gt) goto loc_822C4164;
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
loc_822C4130:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r5,r30,2
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r5.s64 = r30.s32 >> 2;
	// stwx r10,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, ctx.r10.u32);
	// bl 0x822c0a40
	sub_822C0A40(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bgt cr6,0x822c4130
	if (cr6.gt) goto loc_822C4130;
loc_822C4164:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822C416C"))) PPC_WEAK_FUNC(sub_822C416C);
PPC_FUNC_IMPL(__imp__sub_822C416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C4170"))) PPC_WEAK_FUNC(sub_822C4170);
PPC_FUNC_IMPL(__imp__sub_822C4170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x822c4198
	if (!cr6.eq) goto loc_822C4198;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// bne cr6,0x822c418c
	if (!cr6.eq) goto loc_822C418C;
	// b 0x822c2080
	sub_822C2080(ctx, base);
	return;
loc_822C418C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9120
	ctx.r3.s64 = r11.s64 + 9120;
	// blr 
	return;
loc_822C4198:
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// blt cr6,0x822c41d4
	if (cr6.lt) goto loc_822C41D4;
	// beq cr6,0x822c41d0
	if (cr6.eq) goto loc_822C41D0;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// blt cr6,0x822c41cc
	if (cr6.lt) goto loc_822C41CC;
	// cmplwi cr6,r6,4
	cr6.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// beq cr6,0x822c41c8
	if (cr6.eq) goto loc_822C41C8;
	// cmplwi cr6,r6,6
	cr6.compare<uint32_t>(ctx.r6.u32, 6, xer);
	// beq cr6,0x822c41c4
	if (cr6.eq) goto loc_822C41C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822C41C4:
	// b 0x822c0070
	sub_822C0070(ctx, base);
	return;
loc_822C41C8:
	// b 0x822c3428
	sub_822C3428(ctx, base);
	return;
loc_822C41CC:
	// b 0x822c34e8
	sub_822C34E8(ctx, base);
	return;
loc_822C41D0:
	// b 0x822c2080
	sub_822C2080(ctx, base);
	return;
loc_822C41D4:
	// b 0x822bfff0
	sub_822BFFF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822C41D8"))) PPC_WEAK_FUNC(sub_822C41D8);
PPC_FUNC_IMPL(__imp__sub_822C41D8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,5
	cr6.compare<int32_t>(ctx.r6.s32, 5, xer);
	// bne cr6,0x822c422c
	if (!cr6.eq) goto loc_822C422C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822c3688
	sub_822C3688(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c42a0
	if (cr0.eq) goto loc_822C42A0;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c42a0
	if (cr0.eq) goto loc_822C42A0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,18188
	ctx.r4.s64 = r11.s64 + 18188;
loc_822C4220:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82141298
	sub_82141298(ctx, base);
	// b 0x822c42a4
	goto loc_822C42A4;
loc_822C422C:
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bne cr6,0x822c42a0
	if (!cr6.eq) goto loc_822C42A0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c35e0
	sub_822C35E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c42a0
	if (cr0.eq) goto loc_822C42A0;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822c42a0
	if (cr6.eq) goto loc_822C42A0;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,23616(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 23616);
	// bl 0x82285630
	sub_82285630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// blt cr6,0x822c42a0
	if (cr6.lt) goto loc_822C42A0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r11,18168
	ctx.r3.s64 = r11.s64 + 18168;
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// b 0x822c4220
	goto loc_822C4220;
loc_822C42A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C42A4:
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

__attribute__((alias("__imp__sub_822C42BC"))) PPC_WEAK_FUNC(sub_822C42BC);
PPC_FUNC_IMPL(__imp__sub_822C42BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C42C0"))) PPC_WEAK_FUNC(sub_822C42C0);
PPC_FUNC_IMPL(__imp__sub_822C42C0) {
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
	// bl 0x822b7280
	sub_822B7280(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c42f0
	if (cr0.eq) goto loc_822C42F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822C42F0:
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

__attribute__((alias("__imp__sub_822C430C"))) PPC_WEAK_FUNC(sub_822C430C);
PPC_FUNC_IMPL(__imp__sub_822C430C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C4310"))) PPC_WEAK_FUNC(sub_822C4310);
PPC_FUNC_IMPL(__imp__sub_822C4310) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,44
	r31.s64 = ctx.r3.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822c3e50
	sub_822C3E50(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-5232
	ctx.r4.s64 = r11.s64 + -5232;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,1
	r29.s64 = 1;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822c43a8
	if (!cr6.gt) goto loc_822C43A8;
	// li r28,8
	r28.s64 = 8;
	// lis r27,-32127
	r27.s64 = -2105475072;
loc_822C4364:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,-9608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -9608);
	// bl 0x822b43b8
	sub_822B43B8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82285ec0
	sub_82285EC0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x822c4364
	if (cr6.lt) goto loc_822C4364;
loc_822C43A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822C43B0"))) PPC_WEAK_FUNC(sub_822C43B0);
PPC_FUNC_IMPL(__imp__sub_822C43B0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r30,44
	r31.s64 = r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822c3e50
	sub_822C3E50(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// addi r4,r11,18212
	ctx.r4.s64 = r11.s64 + 18212;
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c4424
	if (cr0.eq) goto loc_822C4424;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,18204
	ctx.r4.s64 = r11.s64 + 18204;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82285ec0
	sub_82285EC0(ctx, base);
	// b 0x822c4478
	goto loc_822C4478;
loc_822C4424:
	// lbz r11,60(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 60);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// lwz r3,23616(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 23616);
	// beq 0x822c4444
	if (cr0.eq) goto loc_822C4444;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82285ff0
	sub_82285FF0(ctx, base);
	// b 0x822c4454
	goto loc_822C4454;
loc_822C4444:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822856b0
	sub_822856B0(ctx, base);
loc_822C4454:
	// lwz r29,48(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,64(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// bl 0x822c1f08
	sub_822C1F08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822c3e50
	sub_822C3E50(ctx, base);
loc_822C4478:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C4480"))) PPC_WEAK_FUNC(sub_822C4480);
PPC_FUNC_IMPL(__imp__sub_822C4480) {
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
	// bl 0x822b7568
	sub_822B7568(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c44b0
	if (cr0.eq) goto loc_822C44B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822C44B0:
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

__attribute__((alias("__imp__sub_822C44CC"))) PPC_WEAK_FUNC(sub_822C44CC);
PPC_FUNC_IMPL(__imp__sub_822C44CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C44D0"))) PPC_WEAK_FUNC(sub_822C44D0);
PPC_FUNC_IMPL(__imp__sub_822C44D0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,44
	r31.s64 = ctx.r3.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822c3e50
	sub_822C3E50(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,2792
	ctx.r4.s64 = r11.s64 + 2792;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,28536
	ctx.r4.s64 = r11.s64 + 28536;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,2956
	ctx.r4.s64 = r11.s64 + 2956;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r29,1
	r29.s64 = 1;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822c45a8
	if (!cr6.gt) goto loc_822C45A8;
	// li r28,8
	r28.s64 = 8;
loc_822C4554:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82285ec0
	sub_82285EC0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x822c4554
	if (cr6.lt) goto loc_822C4554;
loc_822C45A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822C45B0"))) PPC_WEAK_FUNC(sub_822C45B0);
PPC_FUNC_IMPL(__imp__sub_822C45B0) {
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
	// bl 0x822b7378
	sub_822B7378(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c45e0
	if (cr0.eq) goto loc_822C45E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822C45E0:
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

__attribute__((alias("__imp__sub_822C45FC"))) PPC_WEAK_FUNC(sub_822C45FC);
PPC_FUNC_IMPL(__imp__sub_822C45FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C4600"))) PPC_WEAK_FUNC(sub_822C4600);
PPC_FUNC_IMPL(__imp__sub_822C4600) {
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
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x822c3e50
	sub_822C3E50(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-32496
	ctx.r4.s64 = r11.s64 + -32496;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// lbz r11,60(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 60);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822c46d0
	if (cr0.eq) goto loc_822C46D0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-5792
	ctx.r4.s64 = r11.s64 + -5792;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,28536
	ctx.r4.s64 = r11.s64 + 28536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// li r30,1
	r30.s64 = 1;
	// lha r11,8(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822c471c
	if (!cr6.gt) goto loc_822C471C;
	// li r28,8
	r28.s64 = 8;
loc_822C4694:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82285ec0
	sub_82285EC0(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// lha r11,8(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 8));
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x822c4694
	if (cr6.lt) goto loc_822C4694;
	// b 0x822c471c
	goto loc_822C471C;
loc_822C46D0:
	// lha r11,8(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822c471c
	if (!cr6.gt) goto loc_822C471C;
	// li r28,8
	r28.s64 = 8;
loc_822C46E4:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82285ec0
	sub_82285EC0(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// lha r11,8(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 8));
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x822c46e4
	if (cr6.lt) goto loc_822C46E4;
loc_822C471C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822C4724"))) PPC_WEAK_FUNC(sub_822C4724);
PPC_FUNC_IMPL(__imp__sub_822C4724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C4728"))) PPC_WEAK_FUNC(sub_822C4728);
PPC_FUNC_IMPL(__imp__sub_822C4728) {
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
	// bl 0x822b7470
	sub_822B7470(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c4758
	if (cr0.eq) goto loc_822C4758;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822C4758:
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

__attribute__((alias("__imp__sub_822C4774"))) PPC_WEAK_FUNC(sub_822C4774);
PPC_FUNC_IMPL(__imp__sub_822C4774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C4778"))) PPC_WEAK_FUNC(sub_822C4778);
PPC_FUNC_IMPL(__imp__sub_822C4778) {
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
	// addi r29,r28,44
	r29.s64 = r28.s64 + 44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x822c3e50
	sub_822C3E50(ctx, base);
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// li r31,0
	r31.s64 = 0;
	// lha r11,8(r4)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 8));
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x822c47f0
	if (!cr0.gt) goto loc_822C47F0;
	// li r30,0
	r30.s64 = 0;
loc_822C47B4:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82285ec0
	sub_82285EC0(ctx, base);
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lha r11,8(r4)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 8));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x822c47b4
	if (cr6.lt) goto loc_822C47B4;
loc_822C47F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822C47F8"))) PPC_WEAK_FUNC(sub_822C47F8);
PPC_FUNC_IMPL(__imp__sub_822C47F8) {
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
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x822c2010
	sub_822C2010(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bge cr6,0x822c4878
	if (!cr6.lt) goto loc_822C4878;
loc_822C4830:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c486c
	if (cr0.eq) goto loc_822C486C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// srawi r5,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0a40
	sub_822C0A40(ctx, base);
loc_822C486C:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// blt cr6,0x822c4830
	if (cr6.lt) goto loc_822C4830;
loc_822C4878:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c4108
	sub_822C4108(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822C4890"))) PPC_WEAK_FUNC(sub_822C4890);
PPC_FUNC_IMPL(__imp__sub_822C4890) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,18276(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18276);
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
	// blt cr6,0x822c48ec
	if (cr6.lt) goto loc_822C48EC;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_822C48EC:
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
	// bl 0x822bfa10
	sub_822BFA10(ctx, base);
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
	// bl 0x8219d0d0
	sub_8219D0D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x822c4950
	if (!cr6.eq) goto loc_822C4950;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822c4948
	if (cr6.eq) goto loc_822C4948;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_822C4948:
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// b 0x822c4968
	goto loc_822C4968;
loc_822C4950:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823432b8
	sub_823432B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822C4968:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c498c
	if (!cr0.eq) goto loc_822C498C;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8219d0d0
	sub_8219D0D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822C498C:
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
	// b 0x822c49d4
	goto loc_822C49D4;
loc_822C49B4:
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
loc_822C49D4:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c49b4
	if (!cr0.eq) goto loc_822C49B4;
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

__attribute__((alias("__imp__sub_822C4898"))) PPC_WEAK_FUNC(sub_822C4898);
PPC_FUNC_IMPL(__imp__sub_822C4898) {
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
	// blt cr6,0x822c48ec
	if (cr6.lt) goto loc_822C48EC;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_822C48EC:
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
	// bl 0x822bfa10
	sub_822BFA10(ctx, base);
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
	// bl 0x8219d0d0
	sub_8219D0D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x822c4950
	if (!cr6.eq) goto loc_822C4950;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822c4948
	if (cr6.eq) goto loc_822C4948;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_822C4948:
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// b 0x822c4968
	goto loc_822C4968;
loc_822C4950:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823432b8
	sub_823432B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822C4968:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c498c
	if (!cr0.eq) goto loc_822C498C;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8219d0d0
	sub_8219D0D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822C498C:
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
	// b 0x822c49d4
	goto loc_822C49D4;
loc_822C49B4:
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
loc_822C49D4:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c49b4
	if (!cr0.eq) goto loc_822C49B4;
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

__attribute__((alias("__imp__sub_822C4A14"))) PPC_WEAK_FUNC(sub_822C4A14);
PPC_FUNC_IMPL(__imp__sub_822C4A14) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lwz r16,18276(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18276);
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
	// beq cr6,0x822c4bac
	if (cr6.eq) goto loc_822C4BAC;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r30,24
	r30.s64 = 24;
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
	// ble cr6,0x822c4aec
	if (!cr6.gt) goto loc_822C4AEC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x822c3f70
	sub_822C3F70(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x822c4aac
	goto loc_822C4AAC;
loc_822C4AA8:
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
loc_822C4AAC:
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
	// bne 0x822c4aa8
	if (!cr0.eq) goto loc_822C4AA8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r30
	r11.s32 = r11.s32 / r30.s32;
	// mulli r3,r11,24
	ctx.r3.s64 = r11.s64 * 24;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mulli r11,r25,24
	r11.s64 = r25.s64 * 24;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x822c4b9c
	goto loc_822C4B9C;
loc_822C4AEC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r30
	ctx.r10.s32 = ctx.r10.s32 / r30.s32;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, xer);
	// blt cr6,0x822c4b38
	if (cr6.lt) goto loc_822C4B38;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r11
	r28.u64 = r11.u64;
	// subf r11,r29,r6
	r11.s64 = ctx.r6.s64 - r29.s64;
	// divw. r30,r11,r30
	r30.s32 = r11.s32 / r30.s32;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x822c4b9c
	if (!cr0.gt) goto loc_822C4B9C;
loc_822C4B14:
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// addi r28,r28,24
	r28.s64 = r28.s64 + 24;
	// bgt 0x822c4b14
	if (cr0.gt) goto loc_822C4B14;
	// b 0x822c4b9c
	goto loc_822C4B9C;
loc_822C4B38:
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// mr r27,r11
	r27.u64 = r11.u64;
	// subf r11,r28,r10
	r11.s64 = ctx.r10.s64 - r28.s64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// divw. r29,r11,r30
	r29.s32 = r11.s32 / r30.s32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x822c4b74
	if (!cr0.gt) goto loc_822C4B74;
loc_822C4B54:
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,24
	r28.s64 = r28.s64 + 24;
	// addi r27,r27,24
	r27.s64 = r27.s64 + 24;
	// bgt 0x822c4b54
	if (cr0.gt) goto loc_822C4B54;
loc_822C4B74:
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
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x822c3260
	sub_822C3260(ctx, base);
loc_822C4B9C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r25,24
	r11.s64 = r25.s64 * 24;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_822C4BAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822C4A1C"))) PPC_WEAK_FUNC(sub_822C4A1C);
PPC_FUNC_IMPL(__imp__sub_822C4A1C) {
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

__attribute__((alias("__imp__sub_822C4A48"))) PPC_WEAK_FUNC(sub_822C4A48);
PPC_FUNC_IMPL(__imp__sub_822C4A48) {
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
	// beq cr6,0x822c4bac
	if (cr6.eq) goto loc_822C4BAC;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r30,24
	r30.s64 = 24;
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
	// ble cr6,0x822c4aec
	if (!cr6.gt) goto loc_822C4AEC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x822c3f70
	sub_822C3F70(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x822c4aac
	goto loc_822C4AAC;
loc_822C4AA8:
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
loc_822C4AAC:
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
	// bne 0x822c4aa8
	if (!cr0.eq) goto loc_822C4AA8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r30
	r11.s32 = r11.s32 / r30.s32;
	// mulli r3,r11,24
	ctx.r3.s64 = r11.s64 * 24;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mulli r11,r25,24
	r11.s64 = r25.s64 * 24;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x822c4b9c
	goto loc_822C4B9C;
loc_822C4AEC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r30
	ctx.r10.s32 = ctx.r10.s32 / r30.s32;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, xer);
	// blt cr6,0x822c4b38
	if (cr6.lt) goto loc_822C4B38;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r11
	r28.u64 = r11.u64;
	// subf r11,r29,r6
	r11.s64 = ctx.r6.s64 - r29.s64;
	// divw. r30,r11,r30
	r30.s32 = r11.s32 / r30.s32;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x822c4b9c
	if (!cr0.gt) goto loc_822C4B9C;
loc_822C4B14:
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// addi r28,r28,24
	r28.s64 = r28.s64 + 24;
	// bgt 0x822c4b14
	if (cr0.gt) goto loc_822C4B14;
	// b 0x822c4b9c
	goto loc_822C4B9C;
loc_822C4B38:
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// mr r27,r11
	r27.u64 = r11.u64;
	// subf r11,r28,r10
	r11.s64 = ctx.r10.s64 - r28.s64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// divw. r29,r11,r30
	r29.s32 = r11.s32 / r30.s32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x822c4b74
	if (!cr0.gt) goto loc_822C4B74;
loc_822C4B54:
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,24
	r28.s64 = r28.s64 + 24;
	// addi r27,r27,24
	r27.s64 = r27.s64 + 24;
	// bgt 0x822c4b54
	if (cr0.gt) goto loc_822C4B54;
loc_822C4B74:
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
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x822c3260
	sub_822C3260(ctx, base);
loc_822C4B9C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r25,24
	r11.s64 = r25.s64 * 24;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_822C4BAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822C4BB8"))) PPC_WEAK_FUNC(sub_822C4BB8);
PPC_FUNC_IMPL(__imp__sub_822C4BB8) {
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
	// li r27,24
	r27.s64 = 24;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x822c4c98
	if (!cr6.lt) goto loc_822C4C98;
	// lis r11,2730
	r11.s64 = 178913280;
	// ori r11,r11,43690
	r11.u64 = r11.u64 | 43690;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x822c4c08
	if (!cr6.gt) goto loc_822C4C08;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_822C4C08:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r5,r6
	r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// divw r26,r11,r27
	r26.s32 = r11.s32 / r27.s32;
	// beq cr6,0x822c4c6c
	if (cr6.eq) goto loc_822C4C6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c4008
	sub_822C4008(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x822c4c3c
	goto loc_822C4C3C;
loc_822C4C38:
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
loc_822C4C3C:
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
	// bne 0x822c4c38
	if (!cr0.eq) goto loc_822C4C38;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	// mulli r3,r11,24
	ctx.r3.s64 = r11.s64 * 24;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x822c4c7c
	goto loc_822C4C7C;
loc_822C4C6C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822bb4b0
	sub_822BB4B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822C4C7C:
	// mulli r10,r26,24
	ctx.r10.s64 = r26.s64 * 24;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mulli r11,r29,24
	r11.s64 = r29.s64 * 24;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_822C4C98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822C4CA0"))) PPC_WEAK_FUNC(sub_822C4CA0);
PPC_FUNC_IMPL(__imp__sub_822C4CA0) {
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
	// lwz r16,18640(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18640);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,18460
	r11.s64 = r11.s64 + 18460;
	// addi r10,r10,18396
	ctx.r10.s64 = ctx.r10.s64 + 18396;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r9,2840
	ctx.r4.s64 = ctx.r9.s64 + 2840;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,18368
	ctx.r4.s64 = r11.s64 + 18368;
	// stw r10,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r10,-1332
	ctx.r3.s64 = ctx.r10.s64 + -1332;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82356db0
	sub_82356DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r30,80
	ctx.r10.s64 = r30.s64 + 80;
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
	// stb r11,76(r30)
	PPC_STORE_U8(r30.u32 + 76, r11.u8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// addi r10,r30,96
	ctx.r10.s64 = r30.s64 + 96;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,18352
	ctx.r4.s64 = r11.s64 + 18352;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,-2968(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x82315150
	sub_82315150(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-8912(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8912);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8916
	r28.s64 = ctx.r10.s64 + -8916;
	// bne 0x822c4dbc
	if (!cr0.eq) goto loc_822C4DBC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8912(r29)
	PPC_STORE_U32(r29.u32 + -8912, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,30732
	ctx.r4.s64 = r11.s64 + 30732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8912(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8912);
loc_822C4DBC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-8920
	r27.s64 = ctx.r10.s64 + -8920;
	// bne 0x822c4de4
	if (!cr0.eq) goto loc_822C4DE4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8912(r29)
	PPC_STORE_U32(r29.u32 + -8912, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = r11.s64 + 18664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822C4DE4:
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r29,5
	r29.s64 = 5;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x822bef88
	sub_822BEF88(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c4e24
	if (cr0.eq) goto loc_822C4E24;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C4E24:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c4e38
	if (cr0.eq) goto loc_822C4E38;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C4E38:
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82317b48
	sub_82317B48(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822bef88
	sub_822BEF88(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c4e74
	if (cr0.eq) goto loc_822C4E74;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C4E74:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c4e88
	if (cr0.eq) goto loc_822C4E88;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C4E88:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// lhz r11,10(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, r11.u16);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// addi r11,r11,18448
	r11.s64 = r11.s64 + 18448;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822C4CA8"))) PPC_WEAK_FUNC(sub_822C4CA8);
PPC_FUNC_IMPL(__imp__sub_822C4CA8) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,18460
	r11.s64 = r11.s64 + 18460;
	// addi r10,r10,18396
	ctx.r10.s64 = ctx.r10.s64 + 18396;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r9,2840
	ctx.r4.s64 = ctx.r9.s64 + 2840;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,18368
	ctx.r4.s64 = r11.s64 + 18368;
	// stw r10,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r10,-1332
	ctx.r3.s64 = ctx.r10.s64 + -1332;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82356db0
	sub_82356DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r30,80
	ctx.r10.s64 = r30.s64 + 80;
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
	// stb r11,76(r30)
	PPC_STORE_U8(r30.u32 + 76, r11.u8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// addi r10,r30,96
	ctx.r10.s64 = r30.s64 + 96;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,18352
	ctx.r4.s64 = r11.s64 + 18352;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,-2968(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x82315150
	sub_82315150(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-8912(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8912);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8916
	r28.s64 = ctx.r10.s64 + -8916;
	// bne 0x822c4dbc
	if (!cr0.eq) goto loc_822C4DBC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8912(r29)
	PPC_STORE_U32(r29.u32 + -8912, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,30732
	ctx.r4.s64 = r11.s64 + 30732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8912(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8912);
loc_822C4DBC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-8920
	r27.s64 = ctx.r10.s64 + -8920;
	// bne 0x822c4de4
	if (!cr0.eq) goto loc_822C4DE4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8912(r29)
	PPC_STORE_U32(r29.u32 + -8912, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = r11.s64 + 18664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822C4DE4:
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r29,5
	r29.s64 = 5;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x822bef88
	sub_822BEF88(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c4e24
	if (cr0.eq) goto loc_822C4E24;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C4E24:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c4e38
	if (cr0.eq) goto loc_822C4E38;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C4E38:
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82317b48
	sub_82317B48(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822bef88
	sub_822BEF88(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c4e74
	if (cr0.eq) goto loc_822C4E74;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C4E74:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c4e88
	if (cr0.eq) goto loc_822C4E88;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C4E88:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// lhz r11,10(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, r11.u16);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// addi r11,r11,18448
	r11.s64 = r11.s64 + 18448;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822C4EC0"))) PPC_WEAK_FUNC(sub_822C4EC0);
PPC_FUNC_IMPL(__imp__sub_822C4EC0) {
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
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x8229aec8
	sub_8229AEC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C4EE8"))) PPC_WEAK_FUNC(sub_822C4EE8);
PPC_FUNC_IMPL(__imp__sub_822C4EE8) {
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

__attribute__((alias("__imp__sub_822C4F14"))) PPC_WEAK_FUNC(sub_822C4F14);
PPC_FUNC_IMPL(__imp__sub_822C4F14) {
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
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
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

__attribute__((alias("__imp__sub_822C4F40"))) PPC_WEAK_FUNC(sub_822C4F40);
PPC_FUNC_IMPL(__imp__sub_822C4F40) {
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
	// addi r3,r11,80
	ctx.r3.s64 = r11.s64 + 80;
	// bl 0x82267180
	sub_82267180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C4F6C"))) PPC_WEAK_FUNC(sub_822C4F6C);
PPC_FUNC_IMPL(__imp__sub_822C4F6C) {
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
	// addi r3,r11,96
	ctx.r3.s64 = r11.s64 + 96;
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

__attribute__((alias("__imp__sub_822C4F98"))) PPC_WEAK_FUNC(sub_822C4F98);
PPC_FUNC_IMPL(__imp__sub_822C4F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8912
	r11.s64 = r11.s64 + -8912;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8912
	ctx.r10.s64 = ctx.r10.s64 + -8912;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C4FC0"))) PPC_WEAK_FUNC(sub_822C4FC0);
PPC_FUNC_IMPL(__imp__sub_822C4FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8912
	r11.s64 = r11.s64 + -8912;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8912
	ctx.r10.s64 = ctx.r10.s64 + -8912;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C4FE8"))) PPC_WEAK_FUNC(sub_822C4FE8);
PPC_FUNC_IMPL(__imp__sub_822C4FE8) {
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

__attribute__((alias("__imp__sub_822C5010"))) PPC_WEAK_FUNC(sub_822C5010);
PPC_FUNC_IMPL(__imp__sub_822C5010) {
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

__attribute__((alias("__imp__sub_822C5038"))) PPC_WEAK_FUNC(sub_822C5038);
PPC_FUNC_IMPL(__imp__sub_822C5038) {
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
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82133220
	sub_82133220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C5060"))) PPC_WEAK_FUNC(sub_822C5060);
PPC_FUNC_IMPL(__imp__sub_822C5060) {
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

__attribute__((alias("__imp__sub_822C5088"))) PPC_WEAK_FUNC(sub_822C5088);
PPC_FUNC_IMPL(__imp__sub_822C5088) {
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

__attribute__((alias("__imp__sub_822C50B0"))) PPC_WEAK_FUNC(sub_822C50B0);
PPC_FUNC_IMPL(__imp__sub_822C50B0) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82133220
	sub_82133220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C50D8"))) PPC_WEAK_FUNC(sub_822C50D8);
PPC_FUNC_IMPL(__imp__sub_822C50D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x822c5890
	sub_822C5890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822C50E0"))) PPC_WEAK_FUNC(sub_822C50E0);
PPC_FUNC_IMPL(__imp__sub_822C50E0) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,18840(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18840);
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// addi r11,r11,18460
	r11.s64 = r11.s64 + 18460;
	// addi r10,r10,18396
	ctx.r10.s64 = ctx.r10.s64 + 18396;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c5134
	if (cr0.eq) goto loc_822C5134;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
loc_822C5134:
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822c5154
	if (cr0.eq) goto loc_822C5154;
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822C5154:
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// b 0x822c5164
	goto loc_822C5164;
loc_822C5160:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_822C5164:
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
	// bne 0x822c5160
	if (!cr0.eq) goto loc_822C5160;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822c5198
	if (cr6.eq) goto loc_822C5198;
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822C5198:
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C50E8"))) PPC_WEAK_FUNC(sub_822C50E8);
PPC_FUNC_IMPL(__imp__sub_822C50E8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// addi r11,r11,18460
	r11.s64 = r11.s64 + 18460;
	// addi r10,r10,18396
	ctx.r10.s64 = ctx.r10.s64 + 18396;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c5134
	if (cr0.eq) goto loc_822C5134;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
loc_822C5134:
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822c5154
	if (cr0.eq) goto loc_822C5154;
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822C5154:
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// b 0x822c5164
	goto loc_822C5164;
loc_822C5160:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_822C5164:
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
	// bne 0x822c5160
	if (!cr0.eq) goto loc_822C5160;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822c5198
	if (cr6.eq) goto loc_822C5198;
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822C5198:
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C51BC"))) PPC_WEAK_FUNC(sub_822C51BC);
PPC_FUNC_IMPL(__imp__sub_822C51BC) {
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
	// bl 0x8229aec8
	sub_8229AEC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C51E4"))) PPC_WEAK_FUNC(sub_822C51E4);
PPC_FUNC_IMPL(__imp__sub_822C51E4) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822c5210
	if (cr6.eq) goto loc_822C5210;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x822c5218
	goto loc_822C5218;
loc_822C5210:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822C5218:
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

__attribute__((alias("__imp__sub_822C5230"))) PPC_WEAK_FUNC(sub_822C5230);
PPC_FUNC_IMPL(__imp__sub_822C5230) {
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

__attribute__((alias("__imp__sub_822C525C"))) PPC_WEAK_FUNC(sub_822C525C);
PPC_FUNC_IMPL(__imp__sub_822C525C) {
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
	// addi r3,r11,80
	ctx.r3.s64 = r11.s64 + 80;
	// bl 0x82267180
	sub_82267180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C5288"))) PPC_WEAK_FUNC(sub_822C5288);
PPC_FUNC_IMPL(__imp__sub_822C5288) {
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
	// addi r3,r11,96
	ctx.r3.s64 = r11.s64 + 96;
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

__attribute__((alias("__imp__sub_822C52B4"))) PPC_WEAK_FUNC(sub_822C52B4);
PPC_FUNC_IMPL(__imp__sub_822C52B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C52B8"))) PPC_WEAK_FUNC(sub_822C52B8);
PPC_FUNC_IMPL(__imp__sub_822C52B8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,19096(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 19096);
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
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r30,44
	r11.s64 = r30.s64 + 44;
	// addi r9,r10,19028
	ctx.r9.s64 = ctx.r10.s64 + 19028;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r8,r10,18964
	ctx.r8.s64 = ctx.r10.s64 + 18964;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,18936
	ctx.r4.s64 = r11.s64 + 18936;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,-2968(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x82315150
	sub_82315150(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C52C0"))) PPC_WEAK_FUNC(sub_822C52C0);
PPC_FUNC_IMPL(__imp__sub_822C52C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r30,44
	r11.s64 = r30.s64 + 44;
	// addi r9,r10,19028
	ctx.r9.s64 = ctx.r10.s64 + 19028;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r8,r10,18964
	ctx.r8.s64 = ctx.r10.s64 + 18964;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,18936
	ctx.r4.s64 = r11.s64 + 18936;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,-2968(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x82315150
	sub_82315150(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C5340"))) PPC_WEAK_FUNC(sub_822C5340);
PPC_FUNC_IMPL(__imp__sub_822C5340) {
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
	// bl 0x8229aec8
	sub_8229AEC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C5368"))) PPC_WEAK_FUNC(sub_822C5368);
PPC_FUNC_IMPL(__imp__sub_822C5368) {
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

__attribute__((alias("__imp__sub_822C5394"))) PPC_WEAK_FUNC(sub_822C5394);
PPC_FUNC_IMPL(__imp__sub_822C5394) {
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
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
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

__attribute__((alias("__imp__sub_822C53C0"))) PPC_WEAK_FUNC(sub_822C53C0);
PPC_FUNC_IMPL(__imp__sub_822C53C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x822c58e0
	sub_822C58E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822C53C8"))) PPC_WEAK_FUNC(sub_822C53C8);
PPC_FUNC_IMPL(__imp__sub_822C53C8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,19320(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 19320);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r29,r30,44
	r29.s64 = r30.s64 + 44;
	// addi r10,r11,19252
	ctx.r10.s64 = r11.s64 + 19252;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r9,r11,19188
	ctx.r9.s64 = r11.s64 + 19188;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,18972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// lfs f0,2480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stfs f0,68(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// stfs f0,72(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 72, temp.u32);
	// stb r8,76(r30)
	PPC_STORE_U8(r30.u32 + 76, ctx.r8.u8);
	// addi r4,r9,19160
	ctx.r4.s64 = ctx.r9.s64 + 19160;
	// stw r10,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// lwz r5,-2968(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x82315150
	sub_82315150(ctx, base);
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c4bb8
	sub_822C4BB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822C53D0"))) PPC_WEAK_FUNC(sub_822C53D0);
PPC_FUNC_IMPL(__imp__sub_822C53D0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r29,r30,44
	r29.s64 = r30.s64 + 44;
	// addi r10,r11,19252
	ctx.r10.s64 = r11.s64 + 19252;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r9,r11,19188
	ctx.r9.s64 = r11.s64 + 19188;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,18972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// lfs f0,2480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stfs f0,68(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// stfs f0,72(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 72, temp.u32);
	// stb r8,76(r30)
	PPC_STORE_U8(r30.u32 + 76, ctx.r8.u8);
	// addi r4,r9,19160
	ctx.r4.s64 = ctx.r9.s64 + 19160;
	// stw r10,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// lwz r5,-2968(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x82315150
	sub_82315150(ctx, base);
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c4bb8
	sub_822C4BB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822C5488"))) PPC_WEAK_FUNC(sub_822C5488);
PPC_FUNC_IMPL(__imp__sub_822C5488) {
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
	// bl 0x8229aec8
	sub_8229AEC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C54B0"))) PPC_WEAK_FUNC(sub_822C54B0);
PPC_FUNC_IMPL(__imp__sub_822C54B0) {
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

__attribute__((alias("__imp__sub_822C54DC"))) PPC_WEAK_FUNC(sub_822C54DC);
PPC_FUNC_IMPL(__imp__sub_822C54DC) {
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
	// bl 0x822b7bd8
	sub_822B7BD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C5508"))) PPC_WEAK_FUNC(sub_822C5508);
PPC_FUNC_IMPL(__imp__sub_822C5508) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x822c5930
	sub_822C5930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822C5510"))) PPC_WEAK_FUNC(sub_822C5510);
PPC_FUNC_IMPL(__imp__sub_822C5510) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r31,44
	r29.s64 = r31.s64 + 44;
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c4a48
	sub_822C4A48(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,19384
	ctx.r4.s64 = r11.s64 + 19384;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,0
	r28.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r28,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r28.u32);
	// bl 0x82278d30
	sub_82278D30(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// bl 0x82391830
	sub_82391830(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// stb r28,76(r31)
	PPC_STORE_U8(r31.u32 + 76, r28.u8);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c5690
	if (!cr0.eq) goto loc_822C5690;
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r3,-9608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x822c5690
	if (!cr6.eq) goto loc_822C5690;
	// lwz r11,-9608(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x822c55c8
	if (!cr6.eq) goto loc_822C55C8;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_822C55C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822bb3c8
	sub_822BB3C8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// srawi. r9,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x822c5690
	if (cr0.eq) goto loc_822C5690;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r4,24
	ctx.r4.s64 = 24;
loc_822C55F4:
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mulli r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 * 24;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// b 0x822c5634
	goto loc_822C5634;
loc_822C560C:
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - r31.s64;
	// divw r8,r8,r4
	ctx.r8.s32 = ctx.r8.s32 / ctx.r4.s32;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x822c5640
	if (cr6.eq) goto loc_822C5640;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(r31.u32, 0);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_822C5634:
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x822c560c
	if (!cr6.lt) goto loc_822C560C;
loc_822C5640:
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r9,r9,r4
	ctx.r9.s32 = ctx.r9.s32 / ctx.r4.s32;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x822c5690
	if (cr6.eq) goto loc_822C5690;
	// mulli r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 * 24;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x822c5670
	if (cr6.lt) goto loc_822C5670;
	// stb r28,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, r28.u8);
loc_822C5670:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// srawi r9,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// blt cr6,0x822c55f4
	if (cr6.lt) goto loc_822C55F4;
loc_822C5690:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822C5698"))) PPC_WEAK_FUNC(sub_822C5698);
PPC_FUNC_IMPL(__imp__sub_822C5698) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,19416(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 19416);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r28,44
	ctx.r3.s64 = r28.s64 + 44;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x822c56d0
	if (cr6.eq) goto loc_822C56D0;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// bl 0x822c3ea8
	sub_822C3EA8(ctx, base);
loc_822C56D0:
	// li r11,0
	r11.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,80(r28)
	PPC_STORE_U32(r28.u32 + 80, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c56f8
	if (cr0.eq) goto loc_822C56F8;
	// bl 0x82330038
	sub_82330038(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x822c56fc
	goto loc_822C56FC;
loc_822C56F8:
	// li r11,0
	r11.s64 = 0;
loc_822C56FC:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// stw r11,-2472(r30)
	PPC_STORE_U32(r30.u32 + -2472, r11.u32);
	// bl 0x822b57c0
	sub_822B57C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822bce10
	sub_822BCE10(ctx, base);
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// lwz r29,40(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x822b4db8
	sub_822B4DB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x822bc818
	sub_822BC818(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c5510
	sub_822C5510(ctx, base);
	// lwz r3,-2472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -2472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822c5768
	if (cr6.eq) goto loc_822C5768;
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
loc_822C5768:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2472(r30)
	PPC_STORE_U32(r30.u32 + -2472, r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822bcfd8
	sub_822BCFD8(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822C56A0"))) PPC_WEAK_FUNC(sub_822C56A0);
PPC_FUNC_IMPL(__imp__sub_822C56A0) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r28,44
	ctx.r3.s64 = r28.s64 + 44;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x822c56d0
	if (cr6.eq) goto loc_822C56D0;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// bl 0x822c3ea8
	sub_822C3EA8(ctx, base);
loc_822C56D0:
	// li r11,0
	r11.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,80(r28)
	PPC_STORE_U32(r28.u32 + 80, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c56f8
	if (cr0.eq) goto loc_822C56F8;
	// bl 0x82330038
	sub_82330038(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x822c56fc
	goto loc_822C56FC;
loc_822C56F8:
	// li r11,0
	r11.s64 = 0;
loc_822C56FC:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// stw r11,-2472(r30)
	PPC_STORE_U32(r30.u32 + -2472, r11.u32);
	// bl 0x822b57c0
	sub_822B57C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822bce10
	sub_822BCE10(ctx, base);
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// lwz r29,40(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x822b4db8
	sub_822B4DB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x822bc818
	sub_822BC818(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c5510
	sub_822C5510(ctx, base);
	// lwz r3,-2472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -2472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822c5768
	if (cr6.eq) goto loc_822C5768;
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
loc_822C5768:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2472(r30)
	PPC_STORE_U32(r30.u32 + -2472, r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822bcfd8
	sub_822BCFD8(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822C5780"))) PPC_WEAK_FUNC(sub_822C5780);
PPC_FUNC_IMPL(__imp__sub_822C5780) {
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

__attribute__((alias("__imp__sub_822C57A8"))) PPC_WEAK_FUNC(sub_822C57A8);
PPC_FUNC_IMPL(__imp__sub_822C57A8) {
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

__attribute__((alias("__imp__sub_822C57D0"))) PPC_WEAK_FUNC(sub_822C57D0);
PPC_FUNC_IMPL(__imp__sub_822C57D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// b 0x822c5860
	goto loc_822C5860;
loc_822C57F4:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x822c5870
	if (cr6.eq) goto loc_822C5870;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addi r5,r31,-4
	ctx.r5.s64 = r31.s64 + -4;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x822bfcf8
	sub_822BFCF8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822c32b0
	sub_822C32B0(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822c57d0
	sub_822C57D0(ctx, base);
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_822C5860:
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// bgt cr6,0x822c57f4
	if (cr6.gt) goto loc_822C57F4;
	// b 0x822c5884
	goto loc_822C5884;
loc_822C5870:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822c47f8
	sub_822C47F8(ctx, base);
loc_822C5884:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822C588C"))) PPC_WEAK_FUNC(sub_822C588C);
PPC_FUNC_IMPL(__imp__sub_822C588C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C5890"))) PPC_WEAK_FUNC(sub_822C5890);
PPC_FUNC_IMPL(__imp__sub_822C5890) {
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
	// bl 0x822c50e8
	sub_822C50E8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c58c0
	if (cr0.eq) goto loc_822C58C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822C58C0:
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

__attribute__((alias("__imp__sub_822C58DC"))) PPC_WEAK_FUNC(sub_822C58DC);
PPC_FUNC_IMPL(__imp__sub_822C58DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C58E0"))) PPC_WEAK_FUNC(sub_822C58E0);
PPC_FUNC_IMPL(__imp__sub_822C58E0) {
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
	// bl 0x822b7f88
	sub_822B7F88(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c5910
	if (cr0.eq) goto loc_822C5910;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822C5910:
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

__attribute__((alias("__imp__sub_822C592C"))) PPC_WEAK_FUNC(sub_822C592C);
PPC_FUNC_IMPL(__imp__sub_822C592C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C5930"))) PPC_WEAK_FUNC(sub_822C5930);
PPC_FUNC_IMPL(__imp__sub_822C5930) {
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
	// bl 0x822b80a0
	sub_822B80A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c5960
	if (cr0.eq) goto loc_822C5960;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822C5960:
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

__attribute__((alias("__imp__sub_822C597C"))) PPC_WEAK_FUNC(sub_822C597C);
PPC_FUNC_IMPL(__imp__sub_822C597C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C5980"))) PPC_WEAK_FUNC(sub_822C5980);
PPC_FUNC_IMPL(__imp__sub_822C5980) {
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
	// beq cr6,0x822c59c8
	if (cr6.eq) goto loc_822C59C8;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822c59b8
	if (cr0.eq) goto loc_822C59B8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_822C59B8:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x822c59dc
	goto loc_822C59DC;
loc_822C59C8:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x822c4898
	sub_822C4898(ctx, base);
loc_822C59DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C59EC"))) PPC_WEAK_FUNC(sub_822C59EC);
PPC_FUNC_IMPL(__imp__sub_822C59EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C59F0"))) PPC_WEAK_FUNC(sub_822C59F0);
PPC_FUNC_IMPL(__imp__sub_822C59F0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x822c5a58
	if (cr6.eq) goto loc_822C5A58;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// b 0x822c5a28
	goto loc_822C5A28;
loc_822C5A20:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
loc_822C5A28:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x822c5a20
	if (!cr6.eq) goto loc_822C5A20;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c57d0
	sub_822C57D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c4098
	sub_822C4098(ctx, base);
loc_822C5A58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C5A60"))) PPC_WEAK_FUNC(sub_822C5A60);
PPC_FUNC_IMPL(__imp__sub_822C5A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,19528(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 19528);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r24,r30,96
	r24.s64 = r30.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r4,108(r30)
	PPC_STORE_U32(r30.u32 + 108, ctx.r4.u32);
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x822c3e50
	sub_822C3E50(ctx, base);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x822c5ac8
	if (cr6.eq) goto loc_822C5AC8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x822c5ac8
	if (cr6.eq) goto loc_822C5AC8;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// lbz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 76);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r23,r11,23616
	r23.s64 = r11.s64 + 23616;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// bl 0x822856b0
	sub_822856B0(ctx, base);
	// b 0x822c5c8c
	goto loc_822C5C8C;
loc_822C5AC8:
	// lis r11,-32128
	r11.s64 = -2105540608;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r23,r11,23616
	r23.s64 = r11.s64 + 23616;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// bl 0x82287600
	sub_82287600(ctx, base);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x822c5c8c
	if (!cr6.eq) goto loc_822C5C8C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822b4f60
	sub_822B4F60(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// beq cr6,0x822c5b44
	if (cr6.eq) goto loc_822C5B44;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x822c5b3c
	if (cr0.eq) goto loc_822C5B3C;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_822C5B30:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x822c5b30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_822C5B30;
loc_822C5B3C:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
loc_822C5B44:
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822c5bd0
	if (!cr0.gt) goto loc_822C5BD0;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
loc_822C5B74:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c5bac
	if (cr0.eq) goto loc_822C5BAC;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// stwx r11,r28,r10
	PPC_STORE_U32(r28.u32 + ctx.r10.u32, r11.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
loc_822C5BAC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r26,r3
	cr6.compare<int32_t>(r26.s32, ctx.r3.s32, xer);
	// blt cr6,0x822c5b74
	if (cr6.lt) goto loc_822C5B74;
loc_822C5BD0:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// subf r11,r10,r4
	r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x822c5c08
	if (!cr6.lt) goto loc_822C5C08;
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x822c3e50
	sub_822C3E50(ctx, base);
	// b 0x822c5c14
	goto loc_822C5C14;
loc_822C5C08:
	// subf r5,r11,r29
	ctx.r5.s64 = r29.s64 - r11.s64;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// bl 0x822c3f08
	sub_822C3F08(ctx, base);
loc_822C5C14:
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lbz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x822c1eb0
	sub_822C1EB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822c3e50
	sub_822C3E50(ctx, base);
	// lis r11,-32212
	r11.s64 = -2111045632;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r5,r11,-4032
	ctx.r5.s64 = r11.s64 + -4032;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x822c59f0
	sub_822C59F0(ctx, base);
	// addi r6,r30,48
	ctx.r6.s64 = r30.s64 + 48;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822c3f08
	sub_822C3F08(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822c3018
	sub_822C3018(ctx, base);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822c5c8c
	if (cr6.eq) goto loc_822C5C8C;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822C5C8C:
	// addi r27,r30,80
	r27.s64 = r30.s64 + 80;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x822c5cd4
	if (cr6.eq) goto loc_822C5CD4;
	// subf r9,r11,r11
	ctx.r9.s64 = r11.s64 - r11.s64;
	// srawi. r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x822c5cd0
	if (!cr0.gt) goto loc_822C5CD0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_822C5CB0:
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bgt 0x822c5cb0
	if (cr0.gt) goto loc_822C5CB0;
loc_822C5CD0:
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
loc_822C5CD4:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// bl 0x82287058
	sub_82287058(ctx, base);
	// lwz r28,128(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// li r29,-1
	r29.s64 = -1;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x822c5d1c
	if (cr6.eq) goto loc_822C5D1C;
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
loc_822C5CF8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// bl 0x822c5980
	sub_822C5980(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x822c5cf8
	if (!cr6.eq) goto loc_822C5CF8;
loc_822C5D1C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r26,r11,28536
	r26.s64 = r11.s64 + 28536;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x822c5980
	sub_822C5980(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r25,r11,19496
	r25.s64 = r11.s64 + 19496;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x822c5980
	sub_822C5980(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// b 0x822c5d8c
	goto loc_822C5D8C;
loc_822C5D84:
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_822C5D8C:
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x822c5d84
	if (!cr6.eq) goto loc_822C5D84;
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x822c5ed8
	if (cr6.eq) goto loc_822C5ED8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822c5ed8
	if (!cr0.gt) goto loc_822C5ED8;
	// li r28,0
	r28.s64 = 0;
loc_822C5DCC:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwzx r5,r28,r11
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x822a33c0
	sub_822A33C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c5e20
	if (cr0.eq) goto loc_822C5E20;
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x822c5e0c
	if (!cr6.eq) goto loc_822C5E0C;
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
loc_822C5E0C:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x822c5e78
	goto loc_822C5E78;
loc_822C5E20:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x822a3240
	sub_822A3240(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c5e60
	if (cr0.eq) goto loc_822C5E60;
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x822c5e4c
	if (!cr6.eq) goto loc_822C5E4C;
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
loc_822C5E4C:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822c5e78
	goto loc_822C5E78;
loc_822C5E60:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r4,r11,44
	ctx.r4.s64 = r11.s64 + 44;
	// bl 0x822a2a10
	sub_822A2A10(ctx, base);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
loc_822C5E78:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// b 0x822c5ea8
	goto loc_822C5EA8;
loc_822C5E80:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x822c5ea4
	if (!cr6.eq) goto loc_822C5EA4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822c5ea4
	if (cr0.eq) goto loc_822C5EA4;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
loc_822C5EA4:
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_822C5EA8:
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x822c5e80
	if (!cr6.eq) goto loc_822C5E80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x822c5dcc
	if (cr6.lt) goto loc_822C5DCC;
loc_822C5ED8:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x822c5f00
	if (!cr6.eq) goto loc_822C5F00;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
loc_822C5F00:
	// lwz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge 0x822c5f38
	if (!cr0.lt) goto loc_822C5F38;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x822c5f1c
	goto loc_822C5F1C;
loc_822C5F18:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_822C5F1C:
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
	// bne 0x822c5f18
	if (!cr0.eq) goto loc_822C5F18;
	// b 0x822c5f88
	goto loc_822C5F88;
loc_822C5F38:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c5f60
	if (!cr0.eq) goto loc_822C5F60;
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
loc_822C5F60:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x822c5f70
	goto loc_822C5F70;
loc_822C5F6C:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_822C5F70:
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
	// bne 0x822c5f6c
	if (!cr0.eq) goto loc_822C5F6C;
loc_822C5F88:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822c5fa4
	if (cr6.eq) goto loc_822C5FA4;
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822C5FA4:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_822C5A68"))) PPC_WEAK_FUNC(sub_822C5A68);
PPC_FUNC_IMPL(__imp__sub_822C5A68) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r24,r30,96
	r24.s64 = r30.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r4,108(r30)
	PPC_STORE_U32(r30.u32 + 108, ctx.r4.u32);
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x822c3e50
	sub_822C3E50(ctx, base);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x822c5ac8
	if (cr6.eq) goto loc_822C5AC8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x822c5ac8
	if (cr6.eq) goto loc_822C5AC8;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// lbz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 76);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r23,r11,23616
	r23.s64 = r11.s64 + 23616;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// bl 0x822856b0
	sub_822856B0(ctx, base);
	// b 0x822c5c8c
	goto loc_822C5C8C;
loc_822C5AC8:
	// lis r11,-32128
	r11.s64 = -2105540608;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r23,r11,23616
	r23.s64 = r11.s64 + 23616;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// bl 0x82287600
	sub_82287600(ctx, base);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x822c5c8c
	if (!cr6.eq) goto loc_822C5C8C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822b4f60
	sub_822B4F60(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// beq cr6,0x822c5b44
	if (cr6.eq) goto loc_822C5B44;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x822c5b3c
	if (cr0.eq) goto loc_822C5B3C;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_822C5B30:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x822c5b30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_822C5B30;
loc_822C5B3C:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
loc_822C5B44:
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822c5bd0
	if (!cr0.gt) goto loc_822C5BD0;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
loc_822C5B74:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c5bac
	if (cr0.eq) goto loc_822C5BAC;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// stwx r11,r28,r10
	PPC_STORE_U32(r28.u32 + ctx.r10.u32, r11.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
loc_822C5BAC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r26,r3
	cr6.compare<int32_t>(r26.s32, ctx.r3.s32, xer);
	// blt cr6,0x822c5b74
	if (cr6.lt) goto loc_822C5B74;
loc_822C5BD0:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// subf r11,r10,r4
	r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x822c5c08
	if (!cr6.lt) goto loc_822C5C08;
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x822c3e50
	sub_822C3E50(ctx, base);
	// b 0x822c5c14
	goto loc_822C5C14;
loc_822C5C08:
	// subf r5,r11,r29
	ctx.r5.s64 = r29.s64 - r11.s64;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// bl 0x822c3f08
	sub_822C3F08(ctx, base);
loc_822C5C14:
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lbz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x822c1eb0
	sub_822C1EB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822c3e50
	sub_822C3E50(ctx, base);
	// lis r11,-32212
	r11.s64 = -2111045632;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r5,r11,-4032
	ctx.r5.s64 = r11.s64 + -4032;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x822c59f0
	sub_822C59F0(ctx, base);
	// addi r6,r30,48
	ctx.r6.s64 = r30.s64 + 48;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822c3f08
	sub_822C3F08(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822c3018
	sub_822C3018(ctx, base);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822c5c8c
	if (cr6.eq) goto loc_822C5C8C;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822C5C8C:
	// addi r27,r30,80
	r27.s64 = r30.s64 + 80;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x822c5cd4
	if (cr6.eq) goto loc_822C5CD4;
	// subf r9,r11,r11
	ctx.r9.s64 = r11.s64 - r11.s64;
	// srawi. r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x822c5cd0
	if (!cr0.gt) goto loc_822C5CD0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_822C5CB0:
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bgt 0x822c5cb0
	if (cr0.gt) goto loc_822C5CB0;
loc_822C5CD0:
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
loc_822C5CD4:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// bl 0x82287058
	sub_82287058(ctx, base);
	// lwz r28,128(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// li r29,-1
	r29.s64 = -1;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x822c5d1c
	if (cr6.eq) goto loc_822C5D1C;
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
loc_822C5CF8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// bl 0x822c5980
	sub_822C5980(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x822c5cf8
	if (!cr6.eq) goto loc_822C5CF8;
loc_822C5D1C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r26,r11,28536
	r26.s64 = r11.s64 + 28536;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x822c5980
	sub_822C5980(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r25,r11,19496
	r25.s64 = r11.s64 + 19496;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x822c5980
	sub_822C5980(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// b 0x822c5d8c
	goto loc_822C5D8C;
loc_822C5D84:
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_822C5D8C:
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x822c5d84
	if (!cr6.eq) goto loc_822C5D84;
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x822c5ed8
	if (cr6.eq) goto loc_822C5ED8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822c5ed8
	if (!cr0.gt) goto loc_822C5ED8;
	// li r28,0
	r28.s64 = 0;
loc_822C5DCC:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwzx r5,r28,r11
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x822a33c0
	sub_822A33C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c5e20
	if (cr0.eq) goto loc_822C5E20;
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x822c5e0c
	if (!cr6.eq) goto loc_822C5E0C;
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
loc_822C5E0C:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x822c5e78
	goto loc_822C5E78;
loc_822C5E20:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x822a3240
	sub_822A3240(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c5e60
	if (cr0.eq) goto loc_822C5E60;
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x822c5e4c
	if (!cr6.eq) goto loc_822C5E4C;
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
loc_822C5E4C:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822c5e78
	goto loc_822C5E78;
loc_822C5E60:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r4,r11,44
	ctx.r4.s64 = r11.s64 + 44;
	// bl 0x822a2a10
	sub_822A2A10(ctx, base);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
loc_822C5E78:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// b 0x822c5ea8
	goto loc_822C5EA8;
loc_822C5E80:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x822c5ea4
	if (!cr6.eq) goto loc_822C5EA4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822c5ea4
	if (cr0.eq) goto loc_822C5EA4;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
loc_822C5EA4:
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_822C5EA8:
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x822c5e80
	if (!cr6.eq) goto loc_822C5E80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x822c5dcc
	if (cr6.lt) goto loc_822C5DCC;
loc_822C5ED8:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x822c5f00
	if (!cr6.eq) goto loc_822C5F00;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
loc_822C5F00:
	// lwz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge 0x822c5f38
	if (!cr0.lt) goto loc_822C5F38;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x822c5f1c
	goto loc_822C5F1C;
loc_822C5F18:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_822C5F1C:
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
	// bne 0x822c5f18
	if (!cr0.eq) goto loc_822C5F18;
	// b 0x822c5f88
	goto loc_822C5F88;
loc_822C5F38:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c5f60
	if (!cr0.eq) goto loc_822C5F60;
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
loc_822C5F60:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x822c5f70
	goto loc_822C5F70;
loc_822C5F6C:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_822C5F70:
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
	// bne 0x822c5f6c
	if (!cr0.eq) goto loc_822C5F6C;
loc_822C5F88:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822c5fa4
	if (cr6.eq) goto loc_822C5FA4;
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822C5FA4:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_822C5FAC"))) PPC_WEAK_FUNC(sub_822C5FAC);
PPC_FUNC_IMPL(__imp__sub_822C5FAC) {
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

__attribute__((alias("__imp__sub_822C5FD4"))) PPC_WEAK_FUNC(sub_822C5FD4);
PPC_FUNC_IMPL(__imp__sub_822C5FD4) {
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

__attribute__((alias("__imp__sub_822C5FFC"))) PPC_WEAK_FUNC(sub_822C5FFC);
PPC_FUNC_IMPL(__imp__sub_822C5FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C6000"))) PPC_WEAK_FUNC(sub_822C6000);
PPC_FUNC_IMPL(__imp__sub_822C6000) {
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
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x822c604c
	if (cr6.eq) goto loc_822C604C;
	// subf r9,r11,r11
	ctx.r9.s64 = r11.s64 - r11.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x822c6048
	if (!cr0.gt) goto loc_822C6048;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_822C6034:
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
	// bgt 0x822c6034
	if (cr0.gt) goto loc_822C6034;
loc_822C6048:
	// stw r10,4(r24)
	PPC_STORE_U32(r24.u32 + 4, ctx.r10.u32);
loc_822C604C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,68(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 68);
	// addi r5,r11,2940
	ctx.r5.s64 = r11.s64 + 2940;
	// bl 0x82319590
	sub_82319590(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,1
	r27.s64 = 1;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822c6114
	if (!cr6.gt) goto loc_822C6114;
	// li r28,8
	r28.s64 = 8;
	// lis r26,-32128
	r26.s64 = -2105540608;
loc_822C6078:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lbz r11,60(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 60);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822c60dc
	if (cr0.eq) goto loc_822C60DC;
	// li r29,0
	r29.s64 = 0;
loc_822C60AC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,23616(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 23616);
	// bl 0x82285320
	sub_82285320(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c60d4
	if (!cr0.eq) goto loc_822C60D4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x822c60ac
	if (cr6.lt) goto loc_822C60AC;
	// b 0x822c60ec
	goto loc_822C60EC;
loc_822C60D4:
	// li r30,1
	r30.s64 = 1;
	// b 0x822c60ec
	goto loc_822C60EC;
loc_822C60DC:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,23616(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 23616);
	// bl 0x82285cc0
	sub_82285CC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822C60EC:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c6100
	if (cr0.eq) goto loc_822C6100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82263250
	sub_82263250(ctx, base);
loc_822C6100:
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x822c6078
	if (cr6.lt) goto loc_822C6078;
loc_822C6114:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822C611C"))) PPC_WEAK_FUNC(sub_822C611C);
PPC_FUNC_IMPL(__imp__sub_822C611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C6120"))) PPC_WEAK_FUNC(sub_822C6120);
PPC_FUNC_IMPL(__imp__sub_822C6120) {
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
	// lwz r16,19696(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 19696);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r26,r27,44
	r26.s64 = r27.s64 + 44;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x822c6178
	if (cr6.eq) goto loc_822C6178;
	// subf r9,r11,r11
	ctx.r9.s64 = r11.s64 - r11.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x822c6174
	if (!cr0.gt) goto loc_822C6174;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_822C6160:
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
	// bgt 0x822c6160
	if (cr0.gt) goto loc_822C6160;
loc_822C6174:
	// stw r10,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r10.u32);
loc_822C6178:
	// li r30,0
	r30.s64 = 0;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// lis r29,-32128
	r29.s64 = -2105540608;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,23616(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 23616);
	// bl 0x822856b0
	sub_822856B0(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r28,r30
	r28.u64 = r30.u64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c621c
	if (cr0.eq) goto loc_822C621C;
loc_822C61B8:
	// lwzx r5,r30,r4
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + ctx.r4.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822c04c0
	sub_822C04C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,23616(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 23616);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82285cc0
	sub_82285CC0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c61fc
	if (cr0.eq) goto loc_822C61FC;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82263250
	sub_82263250(ctx, base);
loc_822C61FC:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x822c61b8
	if (cr6.lt) goto loc_822C61B8;
loc_822C621C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822c6238
	if (cr6.eq) goto loc_822C6238;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822C6238:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822C6128"))) PPC_WEAK_FUNC(sub_822C6128);
PPC_FUNC_IMPL(__imp__sub_822C6128) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r26,r27,44
	r26.s64 = r27.s64 + 44;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x822c6178
	if (cr6.eq) goto loc_822C6178;
	// subf r9,r11,r11
	ctx.r9.s64 = r11.s64 - r11.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x822c6174
	if (!cr0.gt) goto loc_822C6174;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_822C6160:
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
	// bgt 0x822c6160
	if (cr0.gt) goto loc_822C6160;
loc_822C6174:
	// stw r10,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r10.u32);
loc_822C6178:
	// li r30,0
	r30.s64 = 0;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// lis r29,-32128
	r29.s64 = -2105540608;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,23616(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 23616);
	// bl 0x822856b0
	sub_822856B0(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r28,r30
	r28.u64 = r30.u64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c621c
	if (cr0.eq) goto loc_822C621C;
loc_822C61B8:
	// lwzx r5,r30,r4
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + ctx.r4.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822c04c0
	sub_822C04C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,23616(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 23616);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82285cc0
	sub_82285CC0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c61fc
	if (cr0.eq) goto loc_822C61FC;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82263250
	sub_82263250(ctx, base);
loc_822C61FC:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x822c61b8
	if (cr6.lt) goto loc_822C61B8;
loc_822C621C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822c6238
	if (cr6.eq) goto loc_822C6238;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822C6238:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822C6240"))) PPC_WEAK_FUNC(sub_822C6240);
PPC_FUNC_IMPL(__imp__sub_822C6240) {
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

__attribute__((alias("__imp__sub_822C6268"))) PPC_WEAK_FUNC(sub_822C6268);
PPC_FUNC_IMPL(__imp__sub_822C6268) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,19768(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 19768);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// bl 0x822c6000
	sub_822C6000(ctx, base);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// b 0x822c62c4
	goto loc_822C62C4;
loc_822C62C0:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_822C62C4:
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
	// bne 0x822c62c0
	if (!cr0.eq) goto loc_822C62C0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822c62f8
	if (cr6.eq) goto loc_822C62F8;
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
loc_822C62F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C6270"))) PPC_WEAK_FUNC(sub_822C6270);
PPC_FUNC_IMPL(__imp__sub_822C6270) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// bl 0x822c6000
	sub_822C6000(ctx, base);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// b 0x822c62c4
	goto loc_822C62C4;
loc_822C62C0:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_822C62C4:
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
	// bne 0x822c62c0
	if (!cr0.eq) goto loc_822C62C0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822c62f8
	if (cr6.eq) goto loc_822C62F8;
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
loc_822C62F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C6304"))) PPC_WEAK_FUNC(sub_822C6304);
PPC_FUNC_IMPL(__imp__sub_822C6304) {
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

__attribute__((alias("__imp__sub_822C632C"))) PPC_WEAK_FUNC(sub_822C632C);
PPC_FUNC_IMPL(__imp__sub_822C632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C6330"))) PPC_WEAK_FUNC(sub_822C6330);
PPC_FUNC_IMPL(__imp__sub_822C6330) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,19840(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 19840);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// bl 0x822c6000
	sub_822C6000(ctx, base);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r11,r4,r10
	r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c63a0
	if (cr0.eq) goto loc_822C63A0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_822C637C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r8,r8,r29
	ctx.r8.s64 = r29.s64 - ctx.r8.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm. r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x822c63a4
	if (!cr0.eq) goto loc_822C63A4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x822c637c
	if (cr6.lt) goto loc_822C637C;
loc_822C63A0:
	// b 0x822c63ec
	goto loc_822C63EC;
loc_822C63A4:
	// b 0x822c63ac
	goto loc_822C63AC;
loc_822C63A8:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_822C63AC:
	// subf r11,r10,r4
	r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c63a8
	if (!cr0.eq) goto loc_822C63A8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822c63e0
	if (cr6.eq) goto loc_822C63E0;
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
loc_822C63E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822c6424
	goto loc_822C6424;
loc_822C63E8:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_822C63EC:
	// subf r11,r10,r4
	r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c63e8
	if (!cr0.eq) goto loc_822C63E8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822c6420
	if (cr6.eq) goto loc_822C6420;
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
loc_822C6420:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822C6424:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C6338"))) PPC_WEAK_FUNC(sub_822C6338);
PPC_FUNC_IMPL(__imp__sub_822C6338) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// bl 0x822c6000
	sub_822C6000(ctx, base);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r11,r4,r10
	r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c63a0
	if (cr0.eq) goto loc_822C63A0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_822C637C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r8,r8,r29
	ctx.r8.s64 = r29.s64 - ctx.r8.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm. r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x822c63a4
	if (!cr0.eq) goto loc_822C63A4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x822c637c
	if (cr6.lt) goto loc_822C637C;
loc_822C63A0:
	// b 0x822c63ec
	goto loc_822C63EC;
loc_822C63A4:
	// b 0x822c63ac
	goto loc_822C63AC;
loc_822C63A8:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_822C63AC:
	// subf r11,r10,r4
	r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c63a8
	if (!cr0.eq) goto loc_822C63A8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822c63e0
	if (cr6.eq) goto loc_822C63E0;
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
loc_822C63E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822c6424
	goto loc_822C6424;
loc_822C63E8:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_822C63EC:
	// subf r11,r10,r4
	r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c63e8
	if (!cr0.eq) goto loc_822C63E8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822c6420
	if (cr6.eq) goto loc_822C6420;
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
loc_822C6420:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822C6424:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C642C"))) PPC_WEAK_FUNC(sub_822C642C);
PPC_FUNC_IMPL(__imp__sub_822C642C) {
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

__attribute__((alias("__imp__sub_822C6454"))) PPC_WEAK_FUNC(sub_822C6454);
PPC_FUNC_IMPL(__imp__sub_822C6454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C6458"))) PPC_WEAK_FUNC(sub_822C6458);
PPC_FUNC_IMPL(__imp__sub_822C6458) {
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
	// lwz r16,19912(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 19912);
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// bl 0x822c6000
	sub_822C6000(ctx, base);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r10,r4,r11
	ctx.r10.s64 = r11.s64 - ctx.r4.s64;
	// srawi r30,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r30.s64 = ctx.r10.s32 >> 2;
	// b 0x822c64a8
	goto loc_822C64A8;
loc_822C64A4:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_822C64A8:
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
	// bne 0x822c64a4
	if (!cr0.eq) goto loc_822C64A4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822c64dc
	if (cr6.eq) goto loc_822C64DC;
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
loc_822C64DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_822C6460"))) PPC_WEAK_FUNC(sub_822C6460);
PPC_FUNC_IMPL(__imp__sub_822C6460) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// bl 0x822c6000
	sub_822C6000(ctx, base);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r10,r4,r11
	ctx.r10.s64 = r11.s64 - ctx.r4.s64;
	// srawi r30,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r30.s64 = ctx.r10.s32 >> 2;
	// b 0x822c64a8
	goto loc_822C64A8;
loc_822C64A4:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_822C64A8:
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
	// bne 0x822c64a4
	if (!cr0.eq) goto loc_822C64A4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822c64dc
	if (cr6.eq) goto loc_822C64DC;
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
loc_822C64DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_822C64F8"))) PPC_WEAK_FUNC(sub_822C64F8);
PPC_FUNC_IMPL(__imp__sub_822C64F8) {
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

__attribute__((alias("__imp__sub_822C6520"))) PPC_WEAK_FUNC(sub_822C6520);
PPC_FUNC_IMPL(__imp__sub_822C6520) {
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
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x822c656c
	if (cr6.lt) goto loc_822C656C;
	// lis r30,-32127
	r30.s64 = -2105475072;
loc_822C6548:
	// lwz r3,-7564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -7564);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x822e8848
	sub_822E8848(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x822c6548
	if (!cr6.lt) goto loc_822C6548;
loc_822C656C:
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

__attribute__((alias("__imp__sub_822C6584"))) PPC_WEAK_FUNC(sub_822C6584);
PPC_FUNC_IMPL(__imp__sub_822C6584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C6588"))) PPC_WEAK_FUNC(sub_822C6588);
PPC_FUNC_IMPL(__imp__sub_822C6588) {
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
	// lwz r16,19976(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 19976);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-8900(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8900);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-8904
	r30.s64 = ctx.r9.s64 + -8904;
	// bne 0x822c65f0
	if (!cr0.eq) goto loc_822C65F0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8900, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-14424
	ctx.r4.s64 = r11.s64 + -14424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822C65F0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c6618
	if (cr0.eq) goto loc_822C6618;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c6520
	sub_822C6520(ctx, base);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// b 0x822c6620
	goto loc_822C6620;
loc_822C6618:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822C6620:
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822C6590"))) PPC_WEAK_FUNC(sub_822C6590);
PPC_FUNC_IMPL(__imp__sub_822C6590) {
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
	// li r28,0
	r28.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-8900(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8900);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-8904
	r30.s64 = ctx.r9.s64 + -8904;
	// bne 0x822c65f0
	if (!cr0.eq) goto loc_822C65F0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8900, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-14424
	ctx.r4.s64 = r11.s64 + -14424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822C65F0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c6618
	if (cr0.eq) goto loc_822C6618;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c6520
	sub_822C6520(ctx, base);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// b 0x822c6620
	goto loc_822C6620;
loc_822C6618:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822C6620:
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822C6630"))) PPC_WEAK_FUNC(sub_822C6630);
PPC_FUNC_IMPL(__imp__sub_822C6630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8900
	r11.s64 = r11.s64 + -8900;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8900
	ctx.r10.s64 = ctx.r10.s64 + -8900;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C6658"))) PPC_WEAK_FUNC(sub_822C6658);
PPC_FUNC_IMPL(__imp__sub_822C6658) {
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
	// lwz r16,20048(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20048);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// addi r4,r30,44
	ctx.r4.s64 = r30.s64 + 44;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x821e05e0
	sub_821E05E0(ctx, base);
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

__attribute__((alias("__imp__sub_822C6660"))) PPC_WEAK_FUNC(sub_822C6660);
PPC_FUNC_IMPL(__imp__sub_822C6660) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// addi r4,r30,44
	ctx.r4.s64 = r30.s64 + 44;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x821e05e0
	sub_821E05E0(ctx, base);
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

__attribute__((alias("__imp__sub_822C66BC"))) PPC_WEAK_FUNC(sub_822C66BC);
PPC_FUNC_IMPL(__imp__sub_822C66BC) {
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

__attribute__((alias("__imp__sub_822C66E4"))) PPC_WEAK_FUNC(sub_822C66E4);
PPC_FUNC_IMPL(__imp__sub_822C66E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C66E8"))) PPC_WEAK_FUNC(sub_822C66E8);
PPC_FUNC_IMPL(__imp__sub_822C66E8) {
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
	// lwz r16,20112(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20112);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x822c6724
	if (cr0.lt) goto loc_822C6724;
	// lwz r3,-7564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -7564);
	// bl 0x822e7810
	sub_822E7810(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c67a4
	if (cr0.eq) goto loc_822C67A4;
loc_822C6724:
	// addi r30,r29,44
	r30.s64 = r29.s64 + 44;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c6744
	if (cr0.eq) goto loc_822C6744;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822c67a8
	goto loc_822C67A8;
loc_822C6744:
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// stw r10,40(r29)
	PPC_STORE_U32(r29.u32 + 40, ctx.r10.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x821e0648
	sub_821E0648(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r3,r11,-8760
	ctx.r3.s64 = r11.s64 + -8760;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,-7564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -7564);
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// bl 0x822e8910
	sub_822E8910(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_822C67A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C67A8:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822C66F0"))) PPC_WEAK_FUNC(sub_822C66F0);
PPC_FUNC_IMPL(__imp__sub_822C66F0) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x822c6724
	if (cr0.lt) goto loc_822C6724;
	// lwz r3,-7564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -7564);
	// bl 0x822e7810
	sub_822E7810(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c67a4
	if (cr0.eq) goto loc_822C67A4;
loc_822C6724:
	// addi r30,r29,44
	r30.s64 = r29.s64 + 44;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c6744
	if (cr0.eq) goto loc_822C6744;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822c67a8
	goto loc_822C67A8;
loc_822C6744:
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// stw r10,40(r29)
	PPC_STORE_U32(r29.u32 + 40, ctx.r10.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x821e0648
	sub_821E0648(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r3,r11,-8760
	ctx.r3.s64 = r11.s64 + -8760;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,-7564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -7564);
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// bl 0x822e8910
	sub_822E8910(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_822C67A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C67A8:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822C67B0"))) PPC_WEAK_FUNC(sub_822C67B0);
PPC_FUNC_IMPL(__imp__sub_822C67B0) {
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

__attribute__((alias("__imp__sub_822C67D8"))) PPC_WEAK_FUNC(sub_822C67D8);
PPC_FUNC_IMPL(__imp__sub_822C67D8) {
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
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r9,r9,20180
	ctx.r9.s64 = ctx.r9.s64 + 20180;
	// addi r11,r31,44
	r11.s64 = r31.s64 + 44;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r7.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_822C683C"))) PPC_WEAK_FUNC(sub_822C683C);
PPC_FUNC_IMPL(__imp__sub_822C683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C6840"))) PPC_WEAK_FUNC(sub_822C6840);
PPC_FUNC_IMPL(__imp__sub_822C6840) {
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
	// lwz r16,20248(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20248);
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
	// addi r11,r11,20180
	r11.s64 = r11.s64 + 20180;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r11,0
	r11.s64 = 0;
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// stw r11,-8908(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8908, r11.u32);
	// bl 0x821e0708
	sub_821E0708(ctx, base);
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

__attribute__((alias("__imp__sub_822C6848"))) PPC_WEAK_FUNC(sub_822C6848);
PPC_FUNC_IMPL(__imp__sub_822C6848) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,20180
	r11.s64 = r11.s64 + 20180;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r11,0
	r11.s64 = 0;
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// stw r11,-8908(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8908, r11.u32);
	// bl 0x821e0708
	sub_821E0708(ctx, base);
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

__attribute__((alias("__imp__sub_822C68A8"))) PPC_WEAK_FUNC(sub_822C68A8);
PPC_FUNC_IMPL(__imp__sub_822C68A8) {
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

__attribute__((alias("__imp__sub_822C68D0"))) PPC_WEAK_FUNC(sub_822C68D0);
PPC_FUNC_IMPL(__imp__sub_822C68D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,20312(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20312);
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c6908
	if (cr0.eq) goto loc_822C6908;
	// bl 0x822c67d8
	sub_822C67D8(ctx, base);
	// b 0x822c690c
	goto loc_822C690C;
loc_822C6908:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C690C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r3,-8908(r11)
	PPC_STORE_U32(r11.u32 + -8908, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_822C68D8"))) PPC_WEAK_FUNC(sub_822C68D8);
PPC_FUNC_IMPL(__imp__sub_822C68D8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c6908
	if (cr0.eq) goto loc_822C6908;
	// bl 0x822c67d8
	sub_822C67D8(ctx, base);
	// b 0x822c690c
	goto loc_822C690C;
loc_822C6908:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C690C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r3,-8908(r11)
	PPC_STORE_U32(r11.u32 + -8908, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_822C6928"))) PPC_WEAK_FUNC(sub_822C6928);
PPC_FUNC_IMPL(__imp__sub_822C6928) {
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

__attribute__((alias("__imp__sub_822C6950"))) PPC_WEAK_FUNC(sub_822C6950);
PPC_FUNC_IMPL(__imp__sub_822C6950) {
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
	// bl 0x822c6848
	sub_822C6848(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c6980
	if (cr0.eq) goto loc_822C6980;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822C6980:
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

__attribute__((alias("__imp__sub_822C699C"))) PPC_WEAK_FUNC(sub_822C699C);
PPC_FUNC_IMPL(__imp__sub_822C699C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C69A0"))) PPC_WEAK_FUNC(sub_822C69A0);
PPC_FUNC_IMPL(__imp__sub_822C69A0) {
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
	// lwz r30,0(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi. r31,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r31.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// ble 0x822c69dc
	if (!cr0.gt) goto loc_822C69DC;
loc_822C69C4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82263250
	sub_82263250(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bgt 0x822c69c4
	if (cr0.gt) goto loc_822C69C4;
loc_822C69DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C69E4"))) PPC_WEAK_FUNC(sub_822C69E4);
PPC_FUNC_IMPL(__imp__sub_822C69E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C69E8"))) PPC_WEAK_FUNC(sub_822C69E8);
PPC_FUNC_IMPL(__imp__sub_822C69E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// b 0x822db5a0
	sub_822DB5A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822C69F0"))) PPC_WEAK_FUNC(sub_822C69F0);
PPC_FUNC_IMPL(__imp__sub_822C69F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-9836(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9836);
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,248(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C6A04"))) PPC_WEAK_FUNC(sub_822C6A04);
PPC_FUNC_IMPL(__imp__sub_822C6A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C6A08"))) PPC_WEAK_FUNC(sub_822C6A08);
PPC_FUNC_IMPL(__imp__sub_822C6A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// stw r4,160(r11)
	PPC_STORE_U32(r11.u32 + 160, ctx.r4.u32);
	// b 0x822db5a8
	sub_822DB5A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822C6A18"))) PPC_WEAK_FUNC(sub_822C6A18);
PPC_FUNC_IMPL(__imp__sub_822C6A18) {
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
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x822dba90
	sub_822DBA90(ctx, base);
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_822C6A58"))) PPC_WEAK_FUNC(sub_822C6A58);
PPC_FUNC_IMPL(__imp__sub_822C6A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-9608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lbz r11,613(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 613);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822c6a9c
	if (cr0.eq) goto loc_822C6A9C;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x822bb320
	sub_822BB320(ctx, base);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * f31.f64));
loc_822C6A9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822dcfb0
	sub_822DCFB0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c6b00
	if (cr0.eq) goto loc_822C6B00;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
loc_822C6B00:
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

__attribute__((alias("__imp__sub_822C6B18"))) PPC_WEAK_FUNC(sub_822C6B18);
PPC_FUNC_IMPL(__imp__sub_822C6B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x822bb728
	sub_822BB728(ctx, base);
	// bl 0x82334630
	sub_82334630(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mullw r11,r30,r11
	r11.s64 = int64_t(r30.s32) * int64_t(r11.s32);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
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

__attribute__((alias("__imp__sub_822C6B98"))) PPC_WEAK_FUNC(sub_822C6B98);
PPC_FUNC_IMPL(__imp__sub_822C6B98) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,4016
	ctx.r4.s64 = r11.s64 + 4016;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
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
	// beq 0x822c6be4
	if (cr0.eq) goto loc_822C6BE4;
	// lwz r11,156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 156);
	// b 0x822c6bf0
	goto loc_822C6BF0;
loc_822C6BE4:
	// lwz r3,-9608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
loc_822C6BF0:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_822C6C14"))) PPC_WEAK_FUNC(sub_822C6C14);
PPC_FUNC_IMPL(__imp__sub_822C6C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C6C18"))) PPC_WEAK_FUNC(sub_822C6C18);
PPC_FUNC_IMPL(__imp__sub_822C6C18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// b 0x822db6c0
	sub_822DB6C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822C6C20"))) PPC_WEAK_FUNC(sub_822C6C20);
PPC_FUNC_IMPL(__imp__sub_822C6C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// b 0x822db690
	sub_822DB690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822C6C28"))) PPC_WEAK_FUNC(sub_822C6C28);
PPC_FUNC_IMPL(__imp__sub_822C6C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,164(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C6C38"))) PPC_WEAK_FUNC(sub_822C6C38);
PPC_FUNC_IMPL(__imp__sub_822C6C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// bl 0x822bb7c8
	sub_822BB7C8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r11,r30
	r11.s64 = r30.s32;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / f0.f64));
	// lfs f0,17320(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17320);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_822C6CDC"))) PPC_WEAK_FUNC(sub_822C6CDC);
PPC_FUNC_IMPL(__imp__sub_822C6CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C6CE0"))) PPC_WEAK_FUNC(sub_822C6CE0);
PPC_FUNC_IMPL(__imp__sub_822C6CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,156(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822ce350
	sub_822CE350(ctx, base);
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

__attribute__((alias("__imp__sub_822C6D20"))) PPC_WEAK_FUNC(sub_822C6D20);
PPC_FUNC_IMPL(__imp__sub_822C6D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// extsw r11,r10
	r11.s64 = ctx.r10.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// bl 0x822bb350
	sub_822BB350(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 / f0.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C6DA0"))) PPC_WEAK_FUNC(sub_822C6DA0);
PPC_FUNC_IMPL(__imp__sub_822C6DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,164(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C6DB0"))) PPC_WEAK_FUNC(sub_822C6DB0);
PPC_FUNC_IMPL(__imp__sub_822C6DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,164(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lbz r3,41(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C6DBC"))) PPC_WEAK_FUNC(sub_822C6DBC);
PPC_FUNC_IMPL(__imp__sub_822C6DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C6DC0"))) PPC_WEAK_FUNC(sub_822C6DC0);
PPC_FUNC_IMPL(__imp__sub_822C6DC0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,4016
	ctx.r4.s64 = r11.s64 + 4016;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
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
	// beq 0x822c6ef0
	if (cr0.eq) goto loc_822C6EF0;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r3,-9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r30,176(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// subf r29,r10,r29
	r29.s64 = r29.s64 - ctx.r10.s64;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x822bb358
	sub_822BB358(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x822c6ea4
	if (cr6.lt) goto loc_822C6EA4;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_822C6EA4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(f0.f64 * f30.f64));
	// extsw r10,r29
	ctx.r10.s64 = r29.s32;
	// lfs f0,30908(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 30908);
	f0.f64 = double(temp.f32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x822c6ee4
	if (!cr6.gt) goto loc_822C6EE4;
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x822c6ee8
	if (cr6.gt) goto loc_822C6EE8;
loc_822C6EE4:
	// li r11,0
	r11.s64 = 0;
loc_822C6EE8:
	// stw r29,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r29.u32);
	// b 0x822c6f1c
	goto loc_822C6F1C;
loc_822C6EF0:
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f0,-27416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27416);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x822c6f1c
	if (cr6.lt) goto loc_822C6F1C;
	// li r11,0
	r11.s64 = 0;
loc_822C6F1C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C6F30"))) PPC_WEAK_FUNC(sub_822C6F30);
PPC_FUNC_IMPL(__imp__sub_822C6F30) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,4016
	ctx.r4.s64 = r11.s64 + 4016;
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
	// beq 0x822c6fcc
	if (cr0.eq) goto loc_822C6FCC;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r3,-9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
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
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x822c6fc4
	if (!cr6.gt) goto loc_822C6FC4;
	// li r11,0
	r11.s64 = 0;
loc_822C6FC4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x822c6fd8
	goto loc_822C6FD8;
loc_822C6FCC:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-8684(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// bl 0x822ca7c0
	sub_822CA7C0(ctx, base);
loc_822C6FD8:
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

__attribute__((alias("__imp__sub_822C6FF0"))) PPC_WEAK_FUNC(sub_822C6FF0);
PPC_FUNC_IMPL(__imp__sub_822C6FF0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822dcd10
	sub_822DCD10(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x822db618
	sub_822DB618(ctx, base);
	// stb r3,1(r30)
	PPC_STORE_U8(r30.u32 + 1, ctx.r3.u8);
	// lfs f0,264(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 264);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lbz r11,72(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 72);
	// stb r11,8(r30)
	PPC_STORE_U8(r30.u32 + 8, r11.u8);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
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

__attribute__((alias("__imp__sub_822C7054"))) PPC_WEAK_FUNC(sub_822C7054);
PPC_FUNC_IMPL(__imp__sub_822C7054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C7058"))) PPC_WEAK_FUNC(sub_822C7058);
PPC_FUNC_IMPL(__imp__sub_822C7058) {
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
	// lwz r16,20976(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20976);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8800
	r29.s64 = ctx.r10.s64 + -8800;
	// bne 0x822c70c8
	if (!cr0.eq) goto loc_822C70C8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20732
	ctx.r4.s64 = r11.s64 + 20732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C70C8:
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
	// beq 0x822c7108
	if (cr0.eq) goto loc_822C7108;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
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
	// stb r11,-98(r27)
	PPC_STORE_U8(r27.u32 + -98, r11.u8);
loc_822C7100:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x822c7a84
	goto loc_822C7A84;
loc_822C7108:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8804
	r29.s64 = ctx.r10.s64 + -8804;
	// bne 0x822c7134
	if (!cr0.eq) goto loc_822C7134;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20704
	ctx.r4.s64 = r11.s64 + 20704;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7134:
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
	// beq 0x822c7170
	if (cr0.eq) goto loc_822C7170;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
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
	// stb r11,-99(r27)
	PPC_STORE_U8(r27.u32 + -99, r11.u8);
	// b 0x822c7100
	goto loc_822C7100;
loc_822C7170:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8808
	r29.s64 = ctx.r10.s64 + -8808;
	// bne 0x822c719c
	if (!cr0.eq) goto loc_822C719C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20684
	ctx.r4.s64 = r11.s64 + 20684;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C719C:
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
	// beq 0x822c71cc
	if (cr0.eq) goto loc_822C71CC;
	// lwz r3,-116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// bl 0x822db618
	sub_822DB618(ctx, base);
loc_822C71BC:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
loc_822C71C4:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822c7a88
	goto loc_822C7A88;
loc_822C71CC:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8812
	r29.s64 = ctx.r10.s64 + -8812;
	// bne 0x822c71f8
	if (!cr0.eq) goto loc_822C71F8;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20668
	ctx.r4.s64 = r11.s64 + 20668;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C71F8:
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
	// beq 0x822c7228
	if (cr0.eq) goto loc_822C7228;
	// lwz r11,-116(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r11,41(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822c7a8c
	goto loc_822C7A8C;
loc_822C7228:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8816
	r29.s64 = ctx.r10.s64 + -8816;
	// bne 0x822c7254
	if (!cr0.eq) goto loc_822C7254;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,13576
	ctx.r4.s64 = r11.s64 + 13576;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7254:
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
	// beq 0x822c7290
	if (cr0.eq) goto loc_822C7290;
	// addi r3,r27,-280
	ctx.r3.s64 = r27.s64 + -280;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822C7280:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822c7a88
	goto loc_822C7A88;
loc_822C7290:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8820
	r29.s64 = ctx.r10.s64 + -8820;
	// bne 0x822c72bc
	if (!cr0.eq) goto loc_822C72BC;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20656
	ctx.r4.s64 = r11.s64 + 20656;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C72BC:
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
	// beq 0x822c72e0
	if (cr0.eq) goto loc_822C72E0;
	// addi r3,r27,-280
	ctx.r3.s64 = r27.s64 + -280;
	// bl 0x822c6c38
	sub_822C6C38(ctx, base);
	// b 0x822c7280
	goto loc_822C7280;
loc_822C72E0:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8824
	r29.s64 = ctx.r10.s64 + -8824;
	// bne 0x822c730c
	if (!cr0.eq) goto loc_822C730C;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20644
	ctx.r4.s64 = r11.s64 + 20644;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C730C:
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
	// beq 0x822c7330
	if (cr0.eq) goto loc_822C7330;
	// addi r3,r27,-280
	ctx.r3.s64 = r27.s64 + -280;
	// bl 0x822c6dc0
	sub_822C6DC0(ctx, base);
	// b 0x822c71bc
	goto loc_822C71BC;
loc_822C7330:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8828
	r29.s64 = ctx.r10.s64 + -8828;
	// bne 0x822c735c
	if (!cr0.eq) goto loc_822C735C;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20628
	ctx.r4.s64 = r11.s64 + 20628;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C735C:
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
	// beq 0x822c7388
	if (cr0.eq) goto loc_822C7388;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,-116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// lfs f1,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f1.f64 = double(temp.f32);
loc_822C7380:
	// bl 0x822db638
	sub_822DB638(ctx, base);
	// b 0x822c7100
	goto loc_822C7100;
loc_822C7388:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8832
	r29.s64 = ctx.r10.s64 + -8832;
	// bne 0x822c73b4
	if (!cr0.eq) goto loc_822C73B4;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20608
	ctx.r4.s64 = r11.s64 + 20608;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C73B4:
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
	// beq 0x822c73dc
	if (cr0.eq) goto loc_822C73DC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,-116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822c7380
	goto loc_822C7380;
loc_822C73DC:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8836
	r29.s64 = ctx.r10.s64 + -8836;
	// bne 0x822c7408
	if (!cr0.eq) goto loc_822C7408;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20592
	ctx.r4.s64 = r11.s64 + 20592;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7408:
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
	// beq 0x822c7438
	if (cr0.eq) goto loc_822C7438;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r3,-116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// b 0x822c7380
	goto loc_822C7380;
loc_822C7438:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8840
	r29.s64 = ctx.r10.s64 + -8840;
	// bne 0x822c7464
	if (!cr0.eq) goto loc_822C7464;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20564
	ctx.r4.s64 = r11.s64 + 20564;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7464:
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
	// beq 0x822c7498
	if (cr0.eq) goto loc_822C7498;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r3,-116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// bl 0x822db6f0
	sub_822DB6F0(ctx, base);
	// b 0x822c7100
	goto loc_822C7100;
loc_822C7498:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8844
	r29.s64 = ctx.r10.s64 + -8844;
	// bne 0x822c74c4
	if (!cr0.eq) goto loc_822C74C4;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20536
	ctx.r4.s64 = r11.s64 + 20536;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C74C4:
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
	// beq 0x822c74f8
	if (cr0.eq) goto loc_822C74F8;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r3,-116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// bl 0x822db708
	sub_822DB708(ctx, base);
	// b 0x822c7100
	goto loc_822C7100;
loc_822C74F8:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8848
	r29.s64 = ctx.r10.s64 + -8848;
	// bne 0x822c7524
	if (!cr0.eq) goto loc_822C7524;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20524
	ctx.r4.s64 = r11.s64 + 20524;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7524:
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
	// beq 0x822c7548
	if (cr0.eq) goto loc_822C7548;
	// lwz r3,-116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// bl 0x822db8d8
	sub_822DB8D8(ctx, base);
	// b 0x822c7100
	goto loc_822C7100;
loc_822C7548:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8852
	r29.s64 = ctx.r10.s64 + -8852;
	// bne 0x822c7574
	if (!cr0.eq) goto loc_822C7574;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20508
	ctx.r4.s64 = r11.s64 + 20508;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7574:
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
	// beq 0x822c759c
	if (cr0.eq) goto loc_822C759C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,-272
	ctx.r3.s64 = r27.s64 + -272;
	// bl 0x822dc420
	sub_822DC420(ctx, base);
	// b 0x822c7100
	goto loc_822C7100;
loc_822C759C:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8856
	r29.s64 = ctx.r10.s64 + -8856;
	// bne 0x822c75c8
	if (!cr0.eq) goto loc_822C75C8;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20500
	ctx.r4.s64 = r11.s64 + 20500;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C75C8:
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
	// beq 0x822c7604
	if (cr0.eq) goto loc_822C7604;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,-124(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + -124);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// b 0x822c71c4
	goto loc_822C71C4;
loc_822C7604:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8860
	r29.s64 = ctx.r10.s64 + -8860;
	// bne 0x822c7630
	if (!cr0.eq) goto loc_822C7630;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20484
	ctx.r4.s64 = r11.s64 + 20484;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7630:
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
	// beq 0x822c768c
	if (cr0.eq) goto loc_822C768C;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,-124(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + -124);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r11,188(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822c766c
	if (!cr0.eq) goto loc_822C766C;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x822c767c
	goto loc_822C767C;
loc_822C766C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_822C767C:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// b 0x822c7a88
	goto loc_822C7A88;
loc_822C768C:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8864
	r29.s64 = ctx.r10.s64 + -8864;
	// bne 0x822c76b8
	if (!cr0.eq) goto loc_822C76B8;
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20472
	ctx.r4.s64 = r11.s64 + 20472;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C76B8:
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
	// beq 0x822c76e4
	if (cr0.eq) goto loc_822C76E4;
	// lwz r11,-28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -28);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822c7a8c
	goto loc_822C7A8C;
loc_822C76E4:
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8868
	r29.s64 = ctx.r10.s64 + -8868;
	// bne 0x822c7710
	if (!cr0.eq) goto loc_822C7710;
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20460
	ctx.r4.s64 = r11.s64 + 20460;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7710:
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
	// beq 0x822c773c
	if (cr0.eq) goto loc_822C773C;
	// lwz r11,-24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822c7a8c
	goto loc_822C7A8C;
loc_822C773C:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8872
	r29.s64 = ctx.r10.s64 + -8872;
	// bne 0x822c7768
	if (!cr0.eq) goto loc_822C7768;
	// oris r11,r11,4
	r11.u64 = r11.u64 | 262144;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20448
	ctx.r4.s64 = r11.s64 + 20448;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7768:
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
	// beq 0x822c7798
	if (cr0.eq) goto loc_822C7798;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,-124(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + -124);
	// lwz r4,-120(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + -120);
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x822bb7c8
	sub_822BB7C8(ctx, base);
	// b 0x822c7280
	goto loc_822C7280;
loc_822C7798:
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8876
	r29.s64 = ctx.r10.s64 + -8876;
	// bne 0x822c77c4
	if (!cr0.eq) goto loc_822C77C4;
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20432
	ctx.r4.s64 = r11.s64 + 20432;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C77C4:
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
	// beq 0x822c77f4
	if (cr0.eq) goto loc_822C77F4;
	// addi r3,r27,-280
	ctx.r3.s64 = r27.s64 + -280;
	// bl 0x822c6d20
	sub_822C6D20(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// b 0x822c7a88
	goto loc_822C7A88;
loc_822C77F4:
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8880
	r29.s64 = ctx.r10.s64 + -8880;
	// bne 0x822c7820
	if (!cr0.eq) goto loc_822C7820;
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20420
	ctx.r4.s64 = r11.s64 + 20420;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7820:
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
	// beq 0x822c7860
	if (cr0.eq) goto loc_822C7860;
	// lwz r11,-116(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r10,20412
	ctx.r3.s64 = ctx.r10.s64 + 20412;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x82162308
	sub_82162308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// b 0x822c7a88
	goto loc_822C7A88;
loc_822C7860:
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8884
	r29.s64 = ctx.r10.s64 + -8884;
	// bne 0x822c788c
	if (!cr0.eq) goto loc_822C788C;
	// oris r11,r11,32
	r11.u64 = r11.u64 | 2097152;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20392
	ctx.r4.s64 = r11.s64 + 20392;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C788C:
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
	// beq 0x822c78f8
	if (cr0.eq) goto loc_822C78F8;
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
	// lfs f0,-252(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + -252);
	f0.f64 = double(temp.f32);
	// addi r3,r27,-280
	ctx.r3.s64 = r27.s64 + -280;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// mulli r10,r11,100
	ctx.r10.s64 = r11.s64 * 100;
	// rotlwi r11,r10,1
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// twllei r9,0
	// andc r11,r9,r11
	r11.u64 = ctx.r9.u64 & ~r11.u64;
	// twlgei r11,-1
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x822c7a88
	goto loc_822C7A88;
loc_822C78F8:
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8888
	r29.s64 = ctx.r10.s64 + -8888;
	// bne 0x822c7924
	if (!cr0.eq) goto loc_822C7924;
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20380
	ctx.r4.s64 = r11.s64 + 20380;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7924:
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
	// beq 0x822c7950
	if (cr0.eq) goto loc_822C7950;
	// lwz r11,-256(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -256);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822c7a8c
	goto loc_822C7A8C;
loc_822C7950:
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8892
	r29.s64 = ctx.r10.s64 + -8892;
	// bne 0x822c797c
	if (!cr0.eq) goto loc_822C797C;
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20364
	ctx.r4.s64 = r11.s64 + 20364;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C797C:
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
	// beq 0x822c79ac
	if (cr0.eq) goto loc_822C79AC;
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-240(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + -240);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// b 0x822c7a8c
	goto loc_822C7A8C;
loc_822C79AC:
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8896
	r29.s64 = ctx.r10.s64 + -8896;
	// bne 0x822c79d4
	if (!cr0.eq) goto loc_822C79D4;
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20360
	ctx.r4.s64 = r11.s64 + 20360;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822C79D4:
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
	// beq 0x822c79f8
	if (cr0.eq) goto loc_822C79F8;
	// addi r3,r27,-280
	ctx.r3.s64 = r27.s64 + -280;
	// bl 0x822c6f30
	sub_822C6F30(ctx, base);
	// b 0x822c71bc
	goto loc_822C71BC;
loc_822C79F8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r27,-144
	ctx.r4.s64 = r27.s64 + -144;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822dd4d0
	sub_822DD4D0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822c7a3c
	if (cr6.eq) goto loc_822C7A3C;
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
	// beq 0x822c7a88
	if (cr0.eq) goto loc_822C7A88;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_822C7A34:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822c7a88
	goto loc_822C7A88;
loc_822C7A3C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r27,-120
	ctx.r4.s64 = r27.s64 + -120;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823267b8
	sub_823267B8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822c7a7c
	if (cr6.eq) goto loc_822C7A7C;
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
	// beq 0x822c7a88
	if (cr0.eq) goto loc_822C7A88;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822c7a34
	goto loc_822C7A34;
loc_822C7A7C:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822C7A84:
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
loc_822C7A88:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822C7A8C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822C7060"))) PPC_WEAK_FUNC(sub_822C7060);
PPC_FUNC_IMPL(__imp__sub_822C7060) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8800
	r29.s64 = ctx.r10.s64 + -8800;
	// bne 0x822c70c8
	if (!cr0.eq) goto loc_822C70C8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20732
	ctx.r4.s64 = r11.s64 + 20732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C70C8:
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
	// beq 0x822c7108
	if (cr0.eq) goto loc_822C7108;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
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
	// stb r11,-98(r27)
	PPC_STORE_U8(r27.u32 + -98, r11.u8);
loc_822C7100:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x822c7a84
	goto loc_822C7A84;
loc_822C7108:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8804
	r29.s64 = ctx.r10.s64 + -8804;
	// bne 0x822c7134
	if (!cr0.eq) goto loc_822C7134;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20704
	ctx.r4.s64 = r11.s64 + 20704;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7134:
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
	// beq 0x822c7170
	if (cr0.eq) goto loc_822C7170;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
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
	// stb r11,-99(r27)
	PPC_STORE_U8(r27.u32 + -99, r11.u8);
	// b 0x822c7100
	goto loc_822C7100;
loc_822C7170:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8808
	r29.s64 = ctx.r10.s64 + -8808;
	// bne 0x822c719c
	if (!cr0.eq) goto loc_822C719C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20684
	ctx.r4.s64 = r11.s64 + 20684;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C719C:
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
	// beq 0x822c71cc
	if (cr0.eq) goto loc_822C71CC;
	// lwz r3,-116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// bl 0x822db618
	sub_822DB618(ctx, base);
loc_822C71BC:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
loc_822C71C4:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822c7a88
	goto loc_822C7A88;
loc_822C71CC:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8812
	r29.s64 = ctx.r10.s64 + -8812;
	// bne 0x822c71f8
	if (!cr0.eq) goto loc_822C71F8;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20668
	ctx.r4.s64 = r11.s64 + 20668;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C71F8:
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
	// beq 0x822c7228
	if (cr0.eq) goto loc_822C7228;
	// lwz r11,-116(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r11,41(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822c7a8c
	goto loc_822C7A8C;
loc_822C7228:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8816
	r29.s64 = ctx.r10.s64 + -8816;
	// bne 0x822c7254
	if (!cr0.eq) goto loc_822C7254;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,13576
	ctx.r4.s64 = r11.s64 + 13576;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7254:
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
	// beq 0x822c7290
	if (cr0.eq) goto loc_822C7290;
	// addi r3,r27,-280
	ctx.r3.s64 = r27.s64 + -280;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822C7280:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822c7a88
	goto loc_822C7A88;
loc_822C7290:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8820
	r29.s64 = ctx.r10.s64 + -8820;
	// bne 0x822c72bc
	if (!cr0.eq) goto loc_822C72BC;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20656
	ctx.r4.s64 = r11.s64 + 20656;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C72BC:
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
	// beq 0x822c72e0
	if (cr0.eq) goto loc_822C72E0;
	// addi r3,r27,-280
	ctx.r3.s64 = r27.s64 + -280;
	// bl 0x822c6c38
	sub_822C6C38(ctx, base);
	// b 0x822c7280
	goto loc_822C7280;
loc_822C72E0:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8824
	r29.s64 = ctx.r10.s64 + -8824;
	// bne 0x822c730c
	if (!cr0.eq) goto loc_822C730C;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20644
	ctx.r4.s64 = r11.s64 + 20644;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C730C:
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
	// beq 0x822c7330
	if (cr0.eq) goto loc_822C7330;
	// addi r3,r27,-280
	ctx.r3.s64 = r27.s64 + -280;
	// bl 0x822c6dc0
	sub_822C6DC0(ctx, base);
	// b 0x822c71bc
	goto loc_822C71BC;
loc_822C7330:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8828
	r29.s64 = ctx.r10.s64 + -8828;
	// bne 0x822c735c
	if (!cr0.eq) goto loc_822C735C;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20628
	ctx.r4.s64 = r11.s64 + 20628;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C735C:
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
	// beq 0x822c7388
	if (cr0.eq) goto loc_822C7388;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,-116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// lfs f1,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f1.f64 = double(temp.f32);
loc_822C7380:
	// bl 0x822db638
	sub_822DB638(ctx, base);
	// b 0x822c7100
	goto loc_822C7100;
loc_822C7388:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8832
	r29.s64 = ctx.r10.s64 + -8832;
	// bne 0x822c73b4
	if (!cr0.eq) goto loc_822C73B4;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20608
	ctx.r4.s64 = r11.s64 + 20608;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C73B4:
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
	// beq 0x822c73dc
	if (cr0.eq) goto loc_822C73DC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,-116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822c7380
	goto loc_822C7380;
loc_822C73DC:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8836
	r29.s64 = ctx.r10.s64 + -8836;
	// bne 0x822c7408
	if (!cr0.eq) goto loc_822C7408;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20592
	ctx.r4.s64 = r11.s64 + 20592;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7408:
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
	// beq 0x822c7438
	if (cr0.eq) goto loc_822C7438;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r3,-116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// b 0x822c7380
	goto loc_822C7380;
loc_822C7438:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8840
	r29.s64 = ctx.r10.s64 + -8840;
	// bne 0x822c7464
	if (!cr0.eq) goto loc_822C7464;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20564
	ctx.r4.s64 = r11.s64 + 20564;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7464:
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
	// beq 0x822c7498
	if (cr0.eq) goto loc_822C7498;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r3,-116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// bl 0x822db6f0
	sub_822DB6F0(ctx, base);
	// b 0x822c7100
	goto loc_822C7100;
loc_822C7498:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8844
	r29.s64 = ctx.r10.s64 + -8844;
	// bne 0x822c74c4
	if (!cr0.eq) goto loc_822C74C4;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20536
	ctx.r4.s64 = r11.s64 + 20536;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C74C4:
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
	// beq 0x822c74f8
	if (cr0.eq) goto loc_822C74F8;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r3,-116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// bl 0x822db708
	sub_822DB708(ctx, base);
	// b 0x822c7100
	goto loc_822C7100;
loc_822C74F8:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8848
	r29.s64 = ctx.r10.s64 + -8848;
	// bne 0x822c7524
	if (!cr0.eq) goto loc_822C7524;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20524
	ctx.r4.s64 = r11.s64 + 20524;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7524:
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
	// beq 0x822c7548
	if (cr0.eq) goto loc_822C7548;
	// lwz r3,-116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// bl 0x822db8d8
	sub_822DB8D8(ctx, base);
	// b 0x822c7100
	goto loc_822C7100;
loc_822C7548:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8852
	r29.s64 = ctx.r10.s64 + -8852;
	// bne 0x822c7574
	if (!cr0.eq) goto loc_822C7574;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20508
	ctx.r4.s64 = r11.s64 + 20508;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7574:
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
	// beq 0x822c759c
	if (cr0.eq) goto loc_822C759C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,-272
	ctx.r3.s64 = r27.s64 + -272;
	// bl 0x822dc420
	sub_822DC420(ctx, base);
	// b 0x822c7100
	goto loc_822C7100;
loc_822C759C:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8856
	r29.s64 = ctx.r10.s64 + -8856;
	// bne 0x822c75c8
	if (!cr0.eq) goto loc_822C75C8;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20500
	ctx.r4.s64 = r11.s64 + 20500;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C75C8:
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
	// beq 0x822c7604
	if (cr0.eq) goto loc_822C7604;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,-124(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + -124);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// b 0x822c71c4
	goto loc_822C71C4;
loc_822C7604:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8860
	r29.s64 = ctx.r10.s64 + -8860;
	// bne 0x822c7630
	if (!cr0.eq) goto loc_822C7630;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20484
	ctx.r4.s64 = r11.s64 + 20484;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7630:
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
	// beq 0x822c768c
	if (cr0.eq) goto loc_822C768C;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,-124(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + -124);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r11,188(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822c766c
	if (!cr0.eq) goto loc_822C766C;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x822c767c
	goto loc_822C767C;
loc_822C766C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_822C767C:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// b 0x822c7a88
	goto loc_822C7A88;
loc_822C768C:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8864
	r29.s64 = ctx.r10.s64 + -8864;
	// bne 0x822c76b8
	if (!cr0.eq) goto loc_822C76B8;
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20472
	ctx.r4.s64 = r11.s64 + 20472;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C76B8:
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
	// beq 0x822c76e4
	if (cr0.eq) goto loc_822C76E4;
	// lwz r11,-28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -28);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822c7a8c
	goto loc_822C7A8C;
loc_822C76E4:
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8868
	r29.s64 = ctx.r10.s64 + -8868;
	// bne 0x822c7710
	if (!cr0.eq) goto loc_822C7710;
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20460
	ctx.r4.s64 = r11.s64 + 20460;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7710:
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
	// beq 0x822c773c
	if (cr0.eq) goto loc_822C773C;
	// lwz r11,-24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822c7a8c
	goto loc_822C7A8C;
loc_822C773C:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8872
	r29.s64 = ctx.r10.s64 + -8872;
	// bne 0x822c7768
	if (!cr0.eq) goto loc_822C7768;
	// oris r11,r11,4
	r11.u64 = r11.u64 | 262144;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20448
	ctx.r4.s64 = r11.s64 + 20448;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7768:
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
	// beq 0x822c7798
	if (cr0.eq) goto loc_822C7798;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,-124(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + -124);
	// lwz r4,-120(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + -120);
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x822bb7c8
	sub_822BB7C8(ctx, base);
	// b 0x822c7280
	goto loc_822C7280;
loc_822C7798:
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8876
	r29.s64 = ctx.r10.s64 + -8876;
	// bne 0x822c77c4
	if (!cr0.eq) goto loc_822C77C4;
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20432
	ctx.r4.s64 = r11.s64 + 20432;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C77C4:
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
	// beq 0x822c77f4
	if (cr0.eq) goto loc_822C77F4;
	// addi r3,r27,-280
	ctx.r3.s64 = r27.s64 + -280;
	// bl 0x822c6d20
	sub_822C6D20(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// b 0x822c7a88
	goto loc_822C7A88;
loc_822C77F4:
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8880
	r29.s64 = ctx.r10.s64 + -8880;
	// bne 0x822c7820
	if (!cr0.eq) goto loc_822C7820;
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20420
	ctx.r4.s64 = r11.s64 + 20420;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7820:
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
	// beq 0x822c7860
	if (cr0.eq) goto loc_822C7860;
	// lwz r11,-116(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r10,20412
	ctx.r3.s64 = ctx.r10.s64 + 20412;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x82162308
	sub_82162308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// b 0x822c7a88
	goto loc_822C7A88;
loc_822C7860:
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8884
	r29.s64 = ctx.r10.s64 + -8884;
	// bne 0x822c788c
	if (!cr0.eq) goto loc_822C788C;
	// oris r11,r11,32
	r11.u64 = r11.u64 | 2097152;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20392
	ctx.r4.s64 = r11.s64 + 20392;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C788C:
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
	// beq 0x822c78f8
	if (cr0.eq) goto loc_822C78F8;
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
	// lfs f0,-252(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + -252);
	f0.f64 = double(temp.f32);
	// addi r3,r27,-280
	ctx.r3.s64 = r27.s64 + -280;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// mulli r10,r11,100
	ctx.r10.s64 = r11.s64 * 100;
	// rotlwi r11,r10,1
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// twllei r9,0
	// andc r11,r9,r11
	r11.u64 = ctx.r9.u64 & ~r11.u64;
	// twlgei r11,-1
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x822c7a88
	goto loc_822C7A88;
loc_822C78F8:
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8888
	r29.s64 = ctx.r10.s64 + -8888;
	// bne 0x822c7924
	if (!cr0.eq) goto loc_822C7924;
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20380
	ctx.r4.s64 = r11.s64 + 20380;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C7924:
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
	// beq 0x822c7950
	if (cr0.eq) goto loc_822C7950;
	// lwz r11,-256(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -256);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822c7a8c
	goto loc_822C7A8C;
loc_822C7950:
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8892
	r29.s64 = ctx.r10.s64 + -8892;
	// bne 0x822c797c
	if (!cr0.eq) goto loc_822C797C;
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20364
	ctx.r4.s64 = r11.s64 + 20364;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8796(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8796);
loc_822C797C:
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
	// beq 0x822c79ac
	if (cr0.eq) goto loc_822C79AC;
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-240(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + -240);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// b 0x822c7a8c
	goto loc_822C7A8C;
loc_822C79AC:
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8896
	r29.s64 = ctx.r10.s64 + -8896;
	// bne 0x822c79d4
	if (!cr0.eq) goto loc_822C79D4;
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// stw r11,-8796(r30)
	PPC_STORE_U32(r30.u32 + -8796, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20360
	ctx.r4.s64 = r11.s64 + 20360;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822C79D4:
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
	// beq 0x822c79f8
	if (cr0.eq) goto loc_822C79F8;
	// addi r3,r27,-280
	ctx.r3.s64 = r27.s64 + -280;
	// bl 0x822c6f30
	sub_822C6F30(ctx, base);
	// b 0x822c71bc
	goto loc_822C71BC;
loc_822C79F8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r27,-144
	ctx.r4.s64 = r27.s64 + -144;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822dd4d0
	sub_822DD4D0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822c7a3c
	if (cr6.eq) goto loc_822C7A3C;
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
	// beq 0x822c7a88
	if (cr0.eq) goto loc_822C7A88;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_822C7A34:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822c7a88
	goto loc_822C7A88;
loc_822C7A3C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r27,-120
	ctx.r4.s64 = r27.s64 + -120;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823267b8
	sub_823267B8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822c7a7c
	if (cr6.eq) goto loc_822C7A7C;
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
	// beq 0x822c7a88
	if (cr0.eq) goto loc_822C7A88;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822c7a34
	goto loc_822C7A34;
loc_822C7A7C:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822C7A84:
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
loc_822C7A88:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822C7A8C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822C7A94"))) PPC_WEAK_FUNC(sub_822C7A94);
PPC_FUNC_IMPL(__imp__sub_822C7A94) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7ABC"))) PPC_WEAK_FUNC(sub_822C7ABC);
PPC_FUNC_IMPL(__imp__sub_822C7ABC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7AE4"))) PPC_WEAK_FUNC(sub_822C7AE4);
PPC_FUNC_IMPL(__imp__sub_822C7AE4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7B0C"))) PPC_WEAK_FUNC(sub_822C7B0C);
PPC_FUNC_IMPL(__imp__sub_822C7B0C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7B34"))) PPC_WEAK_FUNC(sub_822C7B34);
PPC_FUNC_IMPL(__imp__sub_822C7B34) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7B5C"))) PPC_WEAK_FUNC(sub_822C7B5C);
PPC_FUNC_IMPL(__imp__sub_822C7B5C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7B84"))) PPC_WEAK_FUNC(sub_822C7B84);
PPC_FUNC_IMPL(__imp__sub_822C7B84) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7BAC"))) PPC_WEAK_FUNC(sub_822C7BAC);
PPC_FUNC_IMPL(__imp__sub_822C7BAC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7BD4"))) PPC_WEAK_FUNC(sub_822C7BD4);
PPC_FUNC_IMPL(__imp__sub_822C7BD4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7BFC"))) PPC_WEAK_FUNC(sub_822C7BFC);
PPC_FUNC_IMPL(__imp__sub_822C7BFC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7C24"))) PPC_WEAK_FUNC(sub_822C7C24);
PPC_FUNC_IMPL(__imp__sub_822C7C24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7C4C"))) PPC_WEAK_FUNC(sub_822C7C4C);
PPC_FUNC_IMPL(__imp__sub_822C7C4C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7C74"))) PPC_WEAK_FUNC(sub_822C7C74);
PPC_FUNC_IMPL(__imp__sub_822C7C74) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7C9C"))) PPC_WEAK_FUNC(sub_822C7C9C);
PPC_FUNC_IMPL(__imp__sub_822C7C9C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7CC4"))) PPC_WEAK_FUNC(sub_822C7CC4);
PPC_FUNC_IMPL(__imp__sub_822C7CC4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7CEC"))) PPC_WEAK_FUNC(sub_822C7CEC);
PPC_FUNC_IMPL(__imp__sub_822C7CEC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,17,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7D14"))) PPC_WEAK_FUNC(sub_822C7D14);
PPC_FUNC_IMPL(__imp__sub_822C7D14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,16,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7D3C"))) PPC_WEAK_FUNC(sub_822C7D3C);
PPC_FUNC_IMPL(__imp__sub_822C7D3C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,15,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7D64"))) PPC_WEAK_FUNC(sub_822C7D64);
PPC_FUNC_IMPL(__imp__sub_822C7D64) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,14,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7D8C"))) PPC_WEAK_FUNC(sub_822C7D8C);
PPC_FUNC_IMPL(__imp__sub_822C7D8C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,13,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7DB4"))) PPC_WEAK_FUNC(sub_822C7DB4);
PPC_FUNC_IMPL(__imp__sub_822C7DB4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,12,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7DDC"))) PPC_WEAK_FUNC(sub_822C7DDC);
PPC_FUNC_IMPL(__imp__sub_822C7DDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,11,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7E04"))) PPC_WEAK_FUNC(sub_822C7E04);
PPC_FUNC_IMPL(__imp__sub_822C7E04) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,10,8
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7E2C"))) PPC_WEAK_FUNC(sub_822C7E2C);
PPC_FUNC_IMPL(__imp__sub_822C7E2C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,9,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7E54"))) PPC_WEAK_FUNC(sub_822C7E54);
PPC_FUNC_IMPL(__imp__sub_822C7E54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8796
	r11.s64 = r11.s64 + -8796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,8,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8796
	ctx.r10.s64 = ctx.r10.s64 + -8796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C7E7C"))) PPC_WEAK_FUNC(sub_822C7E7C);
PPC_FUNC_IMPL(__imp__sub_822C7E7C) {
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

__attribute__((alias("__imp__sub_822C7EA4"))) PPC_WEAK_FUNC(sub_822C7EA4);
PPC_FUNC_IMPL(__imp__sub_822C7EA4) {
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

__attribute__((alias("__imp__sub_822C7ECC"))) PPC_WEAK_FUNC(sub_822C7ECC);
PPC_FUNC_IMPL(__imp__sub_822C7ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C7ED0"))) PPC_WEAK_FUNC(sub_822C7ED0);
PPC_FUNC_IMPL(__imp__sub_822C7ED0) {
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
	// addi r31,r11,23920
	r31.s64 = r11.s64 + 23920;
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

__attribute__((alias("__imp__sub_822C7F28"))) PPC_WEAK_FUNC(sub_822C7F28);
PPC_FUNC_IMPL(__imp__sub_822C7F28) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,21456(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 21456);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,228(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// lwz r11,236(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 236);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x822c806c
	if (cr6.eq) goto loc_822C806C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,-27416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27416);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// blt cr6,0x822c806c
	if (cr6.lt) goto loc_822C806C;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,236(r28)
	PPC_STORE_U32(r28.u32 + 236, r11.u32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x822c806c
	if (!cr6.lt) goto loc_822C806C;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,-8784(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8784);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-8792
	r30.s64 = ctx.r9.s64 + -8792;
	// bne 0x822c7ff0
	if (!cr0.eq) goto loc_822C7FF0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8784, r11.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,21416
	ctx.r4.s64 = r11.s64 + 21416;
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
	// beq 0x822c7fe4
	if (cr0.eq) goto loc_822C7FE4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C7FE4:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13728
	ctx.r3.s64 = r11.s64 + 13728;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822C7FF0:
	// lwz r11,156(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 156);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
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
	// beq 0x822c8024
	if (cr0.eq) goto loc_822C8024;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8024:
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
	// beq 0x822c806c
	if (cr0.eq) goto loc_822C806C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C806C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822C7F30"))) PPC_WEAK_FUNC(sub_822C7F30);
PPC_FUNC_IMPL(__imp__sub_822C7F30) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,228(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// lwz r11,236(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 236);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x822c806c
	if (cr6.eq) goto loc_822C806C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,-27416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27416);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// blt cr6,0x822c806c
	if (cr6.lt) goto loc_822C806C;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,236(r28)
	PPC_STORE_U32(r28.u32 + 236, r11.u32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x822c806c
	if (!cr6.lt) goto loc_822C806C;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,-8784(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8784);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-8792
	r30.s64 = ctx.r9.s64 + -8792;
	// bne 0x822c7ff0
	if (!cr0.eq) goto loc_822C7FF0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8784, r11.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,21416
	ctx.r4.s64 = r11.s64 + 21416;
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
	// beq 0x822c7fe4
	if (cr0.eq) goto loc_822C7FE4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C7FE4:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13728
	ctx.r3.s64 = r11.s64 + 13728;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822C7FF0:
	// lwz r11,156(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 156);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
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
	// beq 0x822c8024
	if (cr0.eq) goto loc_822C8024;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8024:
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
	// beq 0x822c806c
	if (cr0.eq) goto loc_822C806C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C806C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822C8074"))) PPC_WEAK_FUNC(sub_822C8074);
PPC_FUNC_IMPL(__imp__sub_822C8074) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8784
	r11.s64 = r11.s64 + -8784;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8784
	ctx.r10.s64 = ctx.r10.s64 + -8784;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C809C"))) PPC_WEAK_FUNC(sub_822C809C);
PPC_FUNC_IMPL(__imp__sub_822C809C) {
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

__attribute__((alias("__imp__sub_822C80C4"))) PPC_WEAK_FUNC(sub_822C80C4);
PPC_FUNC_IMPL(__imp__sub_822C80C4) {
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

__attribute__((alias("__imp__sub_822C80EC"))) PPC_WEAK_FUNC(sub_822C80EC);
PPC_FUNC_IMPL(__imp__sub_822C80EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C80F0"))) PPC_WEAK_FUNC(sub_822C80F0);
PPC_FUNC_IMPL(__imp__sub_822C80F0) {
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
	// lwz r16,21600(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 21600);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lbz r11,181(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 181);
	// stb r27,188(r28)
	PPC_STORE_U8(r28.u32 + 188, r27.u8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822c81e0
	if (cr0.eq) goto loc_822C81E0;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c81e0
	if (cr0.eq) goto loc_822C81E0;
	// lwz r3,164(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 164);
	// lbz r11,41(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822c81e0
	if (!cr0.eq) goto loc_822C81E0;
	// bl 0x822db618
	sub_822DB618(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c81e0
	if (cr0.eq) goto loc_822C81E0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,21536
	ctx.r4.s64 = r11.s64 + 21536;
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
	// bne 0x822c8184
	if (!cr0.eq) goto loc_822C8184;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,164(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 164);
	// bl 0x822dba90
	sub_822DBA90(ctx, base);
	// addi r11,r28,8
	r11.s64 = r28.s64 + 8;
	// b 0x822c81d4
	goto loc_822C81D4;
loc_822C8184:
	// lwz r11,156(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 156);
	// lwz r3,-9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r30,176(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lbz r11,188(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 188);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822c81e0
	if (cr0.eq) goto loc_822C81E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,164(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 164);
	// bl 0x822dba90
	sub_822DBA90(ctx, base);
	// addi r11,r28,8
	r11.s64 = r28.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// bl 0x822dba90
	sub_822DBA90(ctx, base);
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
loc_822C81D4:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_822C81E0:
	// lbz r11,181(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 181);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822c8218
	if (cr0.eq) goto loc_822C8218;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8218
	if (cr0.eq) goto loc_822C8218;
	// lwz r3,164(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 164);
	// lbz r11,41(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822c8218
	if (!cr0.eq) goto loc_822C8218;
	// bl 0x822db618
	sub_822DB618(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c821c
	if (!cr0.eq) goto loc_822C821C;
loc_822C8218:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_822C821C:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// clrlwi r27,r9,24
	r27.u64 = ctx.r9.u32 & 0xFF;
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-8780
	r30.s64 = ctx.r9.s64 + -8780;
	// lwz r11,-8772(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8772);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x822c82ac
	if (!cr0.eq) goto loc_822C82AC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8772, r11.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,16952
	ctx.r4.s64 = r11.s64 + 16952;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8213deb8
	sub_8213DEB8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c828c
	if (cr0.eq) goto loc_822C828C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C828C:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c82a0
	if (cr0.eq) goto loc_822C82A0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C82A0:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13792
	ctx.r3.s64 = r11.s64 + 13792;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822C82AC:
	// lwz r11,156(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 156);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x822c82e0
	if (cr0.eq) goto loc_822C82E0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C82E0:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8314
	if (cr0.eq) goto loc_822C8314;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8314:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
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
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c835c
	if (cr0.eq) goto loc_822C835C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C835C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822C80F8"))) PPC_WEAK_FUNC(sub_822C80F8);
PPC_FUNC_IMPL(__imp__sub_822C80F8) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lbz r11,181(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 181);
	// stb r27,188(r28)
	PPC_STORE_U8(r28.u32 + 188, r27.u8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822c81e0
	if (cr0.eq) goto loc_822C81E0;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c81e0
	if (cr0.eq) goto loc_822C81E0;
	// lwz r3,164(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 164);
	// lbz r11,41(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822c81e0
	if (!cr0.eq) goto loc_822C81E0;
	// bl 0x822db618
	sub_822DB618(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c81e0
	if (cr0.eq) goto loc_822C81E0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,21536
	ctx.r4.s64 = r11.s64 + 21536;
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
	// bne 0x822c8184
	if (!cr0.eq) goto loc_822C8184;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,164(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 164);
	// bl 0x822dba90
	sub_822DBA90(ctx, base);
	// addi r11,r28,8
	r11.s64 = r28.s64 + 8;
	// b 0x822c81d4
	goto loc_822C81D4;
loc_822C8184:
	// lwz r11,156(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 156);
	// lwz r3,-9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r30,176(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lbz r11,188(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 188);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822c81e0
	if (cr0.eq) goto loc_822C81E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,164(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 164);
	// bl 0x822dba90
	sub_822DBA90(ctx, base);
	// addi r11,r28,8
	r11.s64 = r28.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// bl 0x822dba90
	sub_822DBA90(ctx, base);
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
loc_822C81D4:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_822C81E0:
	// lbz r11,181(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 181);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822c8218
	if (cr0.eq) goto loc_822C8218;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8218
	if (cr0.eq) goto loc_822C8218;
	// lwz r3,164(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 164);
	// lbz r11,41(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822c8218
	if (!cr0.eq) goto loc_822C8218;
	// bl 0x822db618
	sub_822DB618(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c821c
	if (!cr0.eq) goto loc_822C821C;
loc_822C8218:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_822C821C:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// clrlwi r27,r9,24
	r27.u64 = ctx.r9.u32 & 0xFF;
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-8780
	r30.s64 = ctx.r9.s64 + -8780;
	// lwz r11,-8772(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8772);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x822c82ac
	if (!cr0.eq) goto loc_822C82AC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8772, r11.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,16952
	ctx.r4.s64 = r11.s64 + 16952;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8213deb8
	sub_8213DEB8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c828c
	if (cr0.eq) goto loc_822C828C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C828C:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c82a0
	if (cr0.eq) goto loc_822C82A0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C82A0:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13792
	ctx.r3.s64 = r11.s64 + 13792;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822C82AC:
	// lwz r11,156(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 156);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x822c82e0
	if (cr0.eq) goto loc_822C82E0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C82E0:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8314
	if (cr0.eq) goto loc_822C8314;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8314:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
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
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c835c
	if (cr0.eq) goto loc_822C835C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C835C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822C8364"))) PPC_WEAK_FUNC(sub_822C8364);
PPC_FUNC_IMPL(__imp__sub_822C8364) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8772
	r11.s64 = r11.s64 + -8772;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8772
	ctx.r10.s64 = ctx.r10.s64 + -8772;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C838C"))) PPC_WEAK_FUNC(sub_822C838C);
PPC_FUNC_IMPL(__imp__sub_822C838C) {
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

__attribute__((alias("__imp__sub_822C83B4"))) PPC_WEAK_FUNC(sub_822C83B4);
PPC_FUNC_IMPL(__imp__sub_822C83B4) {
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

__attribute__((alias("__imp__sub_822C83DC"))) PPC_WEAK_FUNC(sub_822C83DC);
PPC_FUNC_IMPL(__imp__sub_822C83DC) {
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

__attribute__((alias("__imp__sub_822C8404"))) PPC_WEAK_FUNC(sub_822C8404);
PPC_FUNC_IMPL(__imp__sub_822C8404) {
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

__attribute__((alias("__imp__sub_822C842C"))) PPC_WEAK_FUNC(sub_822C842C);
PPC_FUNC_IMPL(__imp__sub_822C842C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C8430"))) PPC_WEAK_FUNC(sub_822C8430);
PPC_FUNC_IMPL(__imp__sub_822C8430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,21752(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 21752);
	// mflr r12
	// bl 0x8239bcfc
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lwz r11,164(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x822c8474
	if (cr6.eq) goto loc_822C8474;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x822c8478
	if (!cr6.eq) goto loc_822C8478;
loc_822C8474:
	// li r11,1
	r11.s64 = 1;
loc_822C8478:
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x822c867c
	if (cr0.eq) goto loc_822C867C;
	// lbz r10,182(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 182);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x822c867c
	if (cr0.eq) goto loc_822C867C;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c867c
	if (cr0.eq) goto loc_822C867C;
	// lfs f0,264(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 264);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fsubs f31,f30,f0
	f31.f64 = double(float(f30.f64 - f0.f64));
	// bl 0x822dcde8
	sub_822DCDE8(ctx, base);
	// lfs f0,268(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 268);
	f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 - f0.f64));
	// lfs f13,216(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x822c84e8
	if (!cr6.gt) goto loc_822C84E8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r29,1
	r29.s64 = 1;
	// bl 0x822dcde8
	sub_822DCDE8(ctx, base);
	// stfs f1,272(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 272, temp.u32);
loc_822C84E8:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c8510
	if (!cr0.eq) goto loc_822C8510;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dcde8
	sub_822DCDE8(ctx, base);
	// lfs f0,272(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 272);
	f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 - f0.f64));
	// lfs f13,220(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x822c8514
	if (!cr6.lt) goto loc_822C8514;
loc_822C8510:
	// li r11,1
	r11.s64 = 1;
loc_822C8514:
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822db678
	sub_822DB678(ctx, base);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x822c85b8
	if (cr0.eq) goto loc_822C85B8;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-8752(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8752);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-8760
	r29.s64 = ctx.r9.s64 + -8760;
	// bne 0x822c8578
	if (!cr0.eq) goto loc_822C8578;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8752(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8752, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,21720
	ctx.r4.s64 = r11.s64 + 21720;
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
	// addi r3,r11,13856
	ctx.r3.s64 = r11.s64 + 13856;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822C8578:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c867c
	if (cr0.eq) goto loc_822C867C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x822c8678
	goto loc_822C8678;
loc_822C85B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dcde8
	sub_822DCDE8(ctx, base);
	// lfs f0,184(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 184);
	f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 - f0.f64));
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f31,21716(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21716);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x822c867c
	if (cr6.lt) goto loc_822C867C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dcde8
	sub_822DCDE8(ctx, base);
	// lfs f0,272(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 272);
	f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x822c867c
	if (cr6.lt) goto loc_822C867C;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-8752(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8752);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-8768
	r29.s64 = ctx.r9.s64 + -8768;
	// bne 0x822c863c
	if (!cr0.eq) goto loc_822C863C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8752(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8752, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,21704
	ctx.r4.s64 = r11.s64 + 21704;
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
	// addi r3,r11,13824
	ctx.r3.s64 = r11.s64 + 13824;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822C863C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
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
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c867c
	if (cr0.eq) goto loc_822C867C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_822C8678:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C867C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f30,264(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 264, temp.u32);
	// bl 0x822dcde8
	sub_822DCDE8(ctx, base);
	// stfs f1,268(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 268, temp.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C8438"))) PPC_WEAK_FUNC(sub_822C8438);
PPC_FUNC_IMPL(__imp__sub_822C8438) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lwz r11,164(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x822c8474
	if (cr6.eq) goto loc_822C8474;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x822c8478
	if (!cr6.eq) goto loc_822C8478;
loc_822C8474:
	// li r11,1
	r11.s64 = 1;
loc_822C8478:
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x822c867c
	if (cr0.eq) goto loc_822C867C;
	// lbz r10,182(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 182);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x822c867c
	if (cr0.eq) goto loc_822C867C;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c867c
	if (cr0.eq) goto loc_822C867C;
	// lfs f0,264(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 264);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fsubs f31,f30,f0
	f31.f64 = double(float(f30.f64 - f0.f64));
	// bl 0x822dcde8
	sub_822DCDE8(ctx, base);
	// lfs f0,268(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 268);
	f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 - f0.f64));
	// lfs f13,216(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x822c84e8
	if (!cr6.gt) goto loc_822C84E8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r29,1
	r29.s64 = 1;
	// bl 0x822dcde8
	sub_822DCDE8(ctx, base);
	// stfs f1,272(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 272, temp.u32);
loc_822C84E8:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c8510
	if (!cr0.eq) goto loc_822C8510;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dcde8
	sub_822DCDE8(ctx, base);
	// lfs f0,272(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 272);
	f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 - f0.f64));
	// lfs f13,220(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x822c8514
	if (!cr6.lt) goto loc_822C8514;
loc_822C8510:
	// li r11,1
	r11.s64 = 1;
loc_822C8514:
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822db678
	sub_822DB678(ctx, base);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x822c85b8
	if (cr0.eq) goto loc_822C85B8;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-8752(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8752);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-8760
	r29.s64 = ctx.r9.s64 + -8760;
	// bne 0x822c8578
	if (!cr0.eq) goto loc_822C8578;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8752(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8752, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,21720
	ctx.r4.s64 = r11.s64 + 21720;
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
	// addi r3,r11,13856
	ctx.r3.s64 = r11.s64 + 13856;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822C8578:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c867c
	if (cr0.eq) goto loc_822C867C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x822c8678
	goto loc_822C8678;
loc_822C85B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dcde8
	sub_822DCDE8(ctx, base);
	// lfs f0,184(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 184);
	f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 - f0.f64));
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f31,21716(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21716);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x822c867c
	if (cr6.lt) goto loc_822C867C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dcde8
	sub_822DCDE8(ctx, base);
	// lfs f0,272(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 272);
	f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x822c867c
	if (cr6.lt) goto loc_822C867C;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-8752(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8752);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-8768
	r29.s64 = ctx.r9.s64 + -8768;
	// bne 0x822c863c
	if (!cr0.eq) goto loc_822C863C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8752(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8752, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,21704
	ctx.r4.s64 = r11.s64 + 21704;
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
	// addi r3,r11,13824
	ctx.r3.s64 = r11.s64 + 13824;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822C863C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
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
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c867c
	if (cr0.eq) goto loc_822C867C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_822C8678:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C867C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f30,264(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 264, temp.u32);
	// bl 0x822dcde8
	sub_822DCDE8(ctx, base);
	// stfs f1,268(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 268, temp.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C869C"))) PPC_WEAK_FUNC(sub_822C869C);
PPC_FUNC_IMPL(__imp__sub_822C869C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8752
	r11.s64 = r11.s64 + -8752;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8752
	ctx.r10.s64 = ctx.r10.s64 + -8752;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C86C4"))) PPC_WEAK_FUNC(sub_822C86C4);
PPC_FUNC_IMPL(__imp__sub_822C86C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8752
	r11.s64 = r11.s64 + -8752;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8752
	ctx.r10.s64 = ctx.r10.s64 + -8752;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C86EC"))) PPC_WEAK_FUNC(sub_822C86EC);
PPC_FUNC_IMPL(__imp__sub_822C86EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C86F0"))) PPC_WEAK_FUNC(sub_822C86F0);
PPC_FUNC_IMPL(__imp__sub_822C86F0) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,21888(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 21888);
	// mflr r12
	// bl 0x8239bcf4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r29,r27,196
	r29.s64 = r27.s64 + 196;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822c88c0
	if (cr0.eq) goto loc_822C88C0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822de3f8
	sub_822DE3F8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,24112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x822c8778
	if (!cr6.lt) goto loc_822C8778;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwa r11,4(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 4));
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// lfd f0,80(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x822c7f30
	sub_822C7F30(ctx, base);
loc_822C8778:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822de388
	sub_822DE388(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r28,1
	r28.s64 = 1;
	// lwz r11,-8740(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8740);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-8748
	r30.s64 = ctx.r9.s64 + -8748;
	// bne 0x822c87fc
	if (!cr0.eq) goto loc_822C87FC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8740, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,21832
	ctx.r4.s64 = r11.s64 + 21832;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c87f0
	if (cr0.eq) goto loc_822C87F0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C87F0:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13888
	ctx.r3.s64 = r11.s64 + 13888;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822C87FC:
	// stfs f31,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x822c882c
	if (cr0.eq) goto loc_822C882C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C882C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x822c886c
	if (cr0.eq) goto loc_822C886C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C886C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f2,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,60(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,164(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 164);
	// bl 0x822db678
	sub_822DB678(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822de2f0
	sub_822DE2F0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
loc_822C88C0:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822C86F8"))) PPC_WEAK_FUNC(sub_822C86F8);
PPC_FUNC_IMPL(__imp__sub_822C86F8) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r29,r27,196
	r29.s64 = r27.s64 + 196;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822c88c0
	if (cr0.eq) goto loc_822C88C0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822de3f8
	sub_822DE3F8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,24112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x822c8778
	if (!cr6.lt) goto loc_822C8778;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwa r11,4(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 4));
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// lfd f0,80(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x822c7f30
	sub_822C7F30(ctx, base);
loc_822C8778:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822de388
	sub_822DE388(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r28,1
	r28.s64 = 1;
	// lwz r11,-8740(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8740);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-8748
	r30.s64 = ctx.r9.s64 + -8748;
	// bne 0x822c87fc
	if (!cr0.eq) goto loc_822C87FC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8740, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,21832
	ctx.r4.s64 = r11.s64 + 21832;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c87f0
	if (cr0.eq) goto loc_822C87F0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C87F0:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13888
	ctx.r3.s64 = r11.s64 + 13888;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822C87FC:
	// stfs f31,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x822c882c
	if (cr0.eq) goto loc_822C882C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C882C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x822c886c
	if (cr0.eq) goto loc_822C886C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C886C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f2,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,60(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,164(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 164);
	// bl 0x822db678
	sub_822DB678(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822de2f0
	sub_822DE2F0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
loc_822C88C0:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822C88CC"))) PPC_WEAK_FUNC(sub_822C88CC);
PPC_FUNC_IMPL(__imp__sub_822C88CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8740
	r11.s64 = r11.s64 + -8740;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8740
	ctx.r10.s64 = ctx.r10.s64 + -8740;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C88F4"))) PPC_WEAK_FUNC(sub_822C88F4);
PPC_FUNC_IMPL(__imp__sub_822C88F4) {
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

__attribute__((alias("__imp__sub_822C891C"))) PPC_WEAK_FUNC(sub_822C891C);
PPC_FUNC_IMPL(__imp__sub_822C891C) {
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

__attribute__((alias("__imp__sub_822C8944"))) PPC_WEAK_FUNC(sub_822C8944);
PPC_FUNC_IMPL(__imp__sub_822C8944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C8948"))) PPC_WEAK_FUNC(sub_822C8948);
PPC_FUNC_IMPL(__imp__sub_822C8948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// li r11,-1
	r11.s64 = -1;
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822db720
	sub_822DB720(ctx, base);
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

__attribute__((alias("__imp__sub_822C8994"))) PPC_WEAK_FUNC(sub_822C8994);
PPC_FUNC_IMPL(__imp__sub_822C8994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C8998"))) PPC_WEAK_FUNC(sub_822C8998);
PPC_FUNC_IMPL(__imp__sub_822C8998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,22080(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 22080);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r11,-8704(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8704);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r25,r10,-8712
	r25.s64 = ctx.r10.s64 + -8712;
	// bne 0x822c8a08
	if (!cr0.eq) goto loc_822C8A08;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8704(r30)
	PPC_STORE_U32(r30.u32 + -8704, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,22012
	ctx.r4.s64 = r11.s64 + 22012;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14016
	ctx.r3.s64 = r11.s64 + 14016;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// lwz r11,-8704(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8704);
loc_822C8A08:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r26,r10,-8720
	r26.s64 = ctx.r10.s64 + -8720;
	// bne 0x822c8a50
	if (!cr0.eq) goto loc_822C8A50;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8704(r30)
	PPC_STORE_U32(r30.u32 + -8704, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,22000
	ctx.r4.s64 = r11.s64 + 22000;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13984
	ctx.r3.s64 = r11.s64 + 13984;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// lwz r11,-8704(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8704);
loc_822C8A50:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r10,-8728
	r27.s64 = ctx.r10.s64 + -8728;
	// bne 0x822c8abc
	if (!cr0.eq) goto loc_822C8ABC;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8704(r30)
	PPC_STORE_U32(r30.u32 + -8704, r11.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,21984
	ctx.r4.s64 = r11.s64 + 21984;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8aac
	if (cr0.eq) goto loc_822C8AAC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8AAC:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13952
	ctx.r3.s64 = r11.s64 + 13952;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// lwz r11,-8704(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8704);
loc_822C8ABC:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8736
	r28.s64 = ctx.r10.s64 + -8736;
	// bne 0x822c8b20
	if (!cr0.eq) goto loc_822C8B20;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8704(r30)
	PPC_STORE_U32(r30.u32 + -8704, r11.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,21968
	ctx.r4.s64 = r11.s64 + 21968;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8b14
	if (cr0.eq) goto loc_822C8B14;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8B14:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13920
	ctx.r3.s64 = r11.s64 + 13920;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822C8B20:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x822c8bc0
	if (!cr6.gt) goto loc_822C8BC0;
	// mr r30,r27
	r30.u64 = r27.u64;
	// bne 0x822c8b44
	if (!cr0.eq) goto loc_822C8B44;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_822C8B44:
	// lwz r11,156(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 156);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x822c8b78
	if (cr0.eq) goto loc_822C8B78;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8B78:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8c14
	if (cr0.eq) goto loc_822C8C14;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x822c8c10
	goto loc_822C8C10;
loc_822C8BC0:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// bne 0x822c8bcc
	if (!cr0.eq) goto loc_822C8BCC;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_822C8BCC:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lwz r11,-8684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
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
	// beq 0x822c8c14
	if (cr0.eq) goto loc_822C8C14;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
loc_822C8C10:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8C14:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_822C89A0"))) PPC_WEAK_FUNC(sub_822C89A0);
PPC_FUNC_IMPL(__imp__sub_822C89A0) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r11,-8704(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8704);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r25,r10,-8712
	r25.s64 = ctx.r10.s64 + -8712;
	// bne 0x822c8a08
	if (!cr0.eq) goto loc_822C8A08;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8704(r30)
	PPC_STORE_U32(r30.u32 + -8704, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,22012
	ctx.r4.s64 = r11.s64 + 22012;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14016
	ctx.r3.s64 = r11.s64 + 14016;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// lwz r11,-8704(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8704);
loc_822C8A08:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r26,r10,-8720
	r26.s64 = ctx.r10.s64 + -8720;
	// bne 0x822c8a50
	if (!cr0.eq) goto loc_822C8A50;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8704(r30)
	PPC_STORE_U32(r30.u32 + -8704, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,22000
	ctx.r4.s64 = r11.s64 + 22000;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13984
	ctx.r3.s64 = r11.s64 + 13984;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// lwz r11,-8704(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8704);
loc_822C8A50:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r10,-8728
	r27.s64 = ctx.r10.s64 + -8728;
	// bne 0x822c8abc
	if (!cr0.eq) goto loc_822C8ABC;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8704(r30)
	PPC_STORE_U32(r30.u32 + -8704, r11.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,21984
	ctx.r4.s64 = r11.s64 + 21984;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8aac
	if (cr0.eq) goto loc_822C8AAC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8AAC:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13952
	ctx.r3.s64 = r11.s64 + 13952;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// lwz r11,-8704(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8704);
loc_822C8ABC:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-8736
	r28.s64 = ctx.r10.s64 + -8736;
	// bne 0x822c8b20
	if (!cr0.eq) goto loc_822C8B20;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8704(r30)
	PPC_STORE_U32(r30.u32 + -8704, r11.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,21968
	ctx.r4.s64 = r11.s64 + 21968;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8b14
	if (cr0.eq) goto loc_822C8B14;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8B14:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13920
	ctx.r3.s64 = r11.s64 + 13920;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822C8B20:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x822c8bc0
	if (!cr6.gt) goto loc_822C8BC0;
	// mr r30,r27
	r30.u64 = r27.u64;
	// bne 0x822c8b44
	if (!cr0.eq) goto loc_822C8B44;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_822C8B44:
	// lwz r11,156(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 156);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x822c8b78
	if (cr0.eq) goto loc_822C8B78;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8B78:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8c14
	if (cr0.eq) goto loc_822C8C14;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x822c8c10
	goto loc_822C8C10;
loc_822C8BC0:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// bne 0x822c8bcc
	if (!cr0.eq) goto loc_822C8BCC;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_822C8BCC:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lwz r11,-8684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
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
	// beq 0x822c8c14
	if (cr0.eq) goto loc_822C8C14;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
loc_822C8C10:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8C14:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_822C8C1C"))) PPC_WEAK_FUNC(sub_822C8C1C);
PPC_FUNC_IMPL(__imp__sub_822C8C1C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8704
	r11.s64 = r11.s64 + -8704;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8704
	ctx.r10.s64 = ctx.r10.s64 + -8704;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C8C44"))) PPC_WEAK_FUNC(sub_822C8C44);
PPC_FUNC_IMPL(__imp__sub_822C8C44) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8704
	r11.s64 = r11.s64 + -8704;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8704
	ctx.r10.s64 = ctx.r10.s64 + -8704;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C8C6C"))) PPC_WEAK_FUNC(sub_822C8C6C);
PPC_FUNC_IMPL(__imp__sub_822C8C6C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8704
	r11.s64 = r11.s64 + -8704;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8704
	ctx.r10.s64 = ctx.r10.s64 + -8704;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C8C94"))) PPC_WEAK_FUNC(sub_822C8C94);
PPC_FUNC_IMPL(__imp__sub_822C8C94) {
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

__attribute__((alias("__imp__sub_822C8CBC"))) PPC_WEAK_FUNC(sub_822C8CBC);
PPC_FUNC_IMPL(__imp__sub_822C8CBC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8704
	r11.s64 = r11.s64 + -8704;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8704
	ctx.r10.s64 = ctx.r10.s64 + -8704;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C8CE4"))) PPC_WEAK_FUNC(sub_822C8CE4);
PPC_FUNC_IMPL(__imp__sub_822C8CE4) {
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

__attribute__((alias("__imp__sub_822C8D0C"))) PPC_WEAK_FUNC(sub_822C8D0C);
PPC_FUNC_IMPL(__imp__sub_822C8D0C) {
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

__attribute__((alias("__imp__sub_822C8D34"))) PPC_WEAK_FUNC(sub_822C8D34);
PPC_FUNC_IMPL(__imp__sub_822C8D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C8D38"))) PPC_WEAK_FUNC(sub_822C8D38);
PPC_FUNC_IMPL(__imp__sub_822C8D38) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,22256(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 22256);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,-8692(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8692);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r28,r9,-8700
	r28.s64 = ctx.r9.s64 + -8700;
	// bne 0x822c8de8
	if (!cr0.eq) goto loc_822C8DE8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8692, r11.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,22200
	ctx.r4.s64 = r11.s64 + 22200;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8213deb8
	sub_8213DEB8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8dc8
	if (cr0.eq) goto loc_822C8DC8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8DC8:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8ddc
	if (cr0.eq) goto loc_822C8DDC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8DDC:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13760
	ctx.r3.s64 = r11.s64 + 13760;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822C8DE8:
	// lwz r11,156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 156);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
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
	// beq 0x822c8e1c
	if (cr0.eq) goto loc_822C8E1C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8E1C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8e60
	if (cr0.eq) goto loc_822C8E60;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8E60:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
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
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8ea8
	if (cr0.eq) goto loc_822C8EA8;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8EA8:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,160(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r3,-9288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// bl 0x822bb728
	sub_822BB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f2,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,60(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,-9288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// lwz r4,160(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// bl 0x822bb768
	sub_822BB768(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c8f1c
	if (!cr0.eq) goto loc_822C8F1C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// bl 0x822dc368
	sub_822DC368(ctx, base);
loc_822C8F1C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822C8D40"))) PPC_WEAK_FUNC(sub_822C8D40);
PPC_FUNC_IMPL(__imp__sub_822C8D40) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,-8692(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8692);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r28,r9,-8700
	r28.s64 = ctx.r9.s64 + -8700;
	// bne 0x822c8de8
	if (!cr0.eq) goto loc_822C8DE8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8692, r11.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,22200
	ctx.r4.s64 = r11.s64 + 22200;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8213deb8
	sub_8213DEB8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8dc8
	if (cr0.eq) goto loc_822C8DC8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8DC8:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8ddc
	if (cr0.eq) goto loc_822C8DDC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8DDC:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13760
	ctx.r3.s64 = r11.s64 + 13760;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822C8DE8:
	// lwz r11,156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 156);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
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
	// beq 0x822c8e1c
	if (cr0.eq) goto loc_822C8E1C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8E1C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8e60
	if (cr0.eq) goto loc_822C8E60;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8E60:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
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
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c8ea8
	if (cr0.eq) goto loc_822C8EA8;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822C8EA8:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,160(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r3,-9288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// bl 0x822bb728
	sub_822BB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f2,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,60(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,-9288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// lwz r4,160(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// bl 0x822bb768
	sub_822BB768(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c8f1c
	if (!cr0.eq) goto loc_822C8F1C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// bl 0x822dc368
	sub_822DC368(ctx, base);
loc_822C8F1C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822C8F2C"))) PPC_WEAK_FUNC(sub_822C8F2C);
PPC_FUNC_IMPL(__imp__sub_822C8F2C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8692
	r11.s64 = r11.s64 + -8692;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8692
	ctx.r10.s64 = ctx.r10.s64 + -8692;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C8F54"))) PPC_WEAK_FUNC(sub_822C8F54);
PPC_FUNC_IMPL(__imp__sub_822C8F54) {
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

__attribute__((alias("__imp__sub_822C8F7C"))) PPC_WEAK_FUNC(sub_822C8F7C);
PPC_FUNC_IMPL(__imp__sub_822C8F7C) {
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

__attribute__((alias("__imp__sub_822C8FA4"))) PPC_WEAK_FUNC(sub_822C8FA4);
PPC_FUNC_IMPL(__imp__sub_822C8FA4) {
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

__attribute__((alias("__imp__sub_822C8FCC"))) PPC_WEAK_FUNC(sub_822C8FCC);
PPC_FUNC_IMPL(__imp__sub_822C8FCC) {
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

__attribute__((alias("__imp__sub_822C8FF4"))) PPC_WEAK_FUNC(sub_822C8FF4);
PPC_FUNC_IMPL(__imp__sub_822C8FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C8FF8"))) PPC_WEAK_FUNC(sub_822C8FF8);
PPC_FUNC_IMPL(__imp__sub_822C8FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// addi r30,r31,196
	r30.s64 = r31.s64 + 196;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822c9078
	if (cr0.eq) goto loc_822C9078;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822de428
	sub_822DE428(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822de368
	sub_822DE368(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c9078
	if (cr0.eq) goto loc_822C9078;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
loc_822C9078:
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

__attribute__((alias("__imp__sub_822C9090"))) PPC_WEAK_FUNC(sub_822C9090);
PPC_FUNC_IMPL(__imp__sub_822C9090) {
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
	// lwz r16,22544(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 22544);
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
	// addi r11,r11,22428
	r11.s64 = r11.s64 + 22428;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,22364
	ctx.r10.s64 = ctx.r10.s64 + 22364;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-280(r30)
	PPC_STORE_U32(r30.u32 + -280, r11.u32);
	// lwz r11,-276(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -276);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-276(r11)
	PPC_STORE_U32(r11.u32 + -276, ctx.r10.u32);
	// lwz r11,-276(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -276);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-276
	ctx.r10.s64 = r11.s64 + -276;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-280(r11)
	PPC_STORE_U32(r11.u32 + -280, ctx.r10.u32);
	// lwz r3,-116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -116);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c9110
	if (cr0.eq) goto loc_822C9110;
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
loc_822C9110:
	// lwz r3,-112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -112);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r4,-56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -56);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822c9138
	if (cr0.eq) goto loc_822C9138;
	// lwz r11,-48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -48);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822C9138:
	// addic. r11,r30,-280
	xer.ca = r30.u32 > 279;
	r11.s64 = r30.s64 + -280;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r30,-148
	r11.s64 = r30.s64 + -148;
	// bne 0x822c9148
	if (!cr0.eq) goto loc_822C9148;
	// li r11,0
	r11.s64 = 0;
loc_822C9148:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x823260f8
	sub_823260F8(ctx, base);
	// addi r3,r30,-144
	ctx.r3.s64 = r30.s64 + -144;
	// bl 0x822de100
	sub_822DE100(ctx, base);
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

__attribute__((alias("__imp__sub_822C9098"))) PPC_WEAK_FUNC(sub_822C9098);
PPC_FUNC_IMPL(__imp__sub_822C9098) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,22428
	r11.s64 = r11.s64 + 22428;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,22364
	ctx.r10.s64 = ctx.r10.s64 + 22364;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-280(r30)
	PPC_STORE_U32(r30.u32 + -280, r11.u32);
	// lwz r11,-276(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -276);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-276(r11)
	PPC_STORE_U32(r11.u32 + -276, ctx.r10.u32);
	// lwz r11,-276(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -276);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-276
	ctx.r10.s64 = r11.s64 + -276;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-280(r11)
	PPC_STORE_U32(r11.u32 + -280, ctx.r10.u32);
	// lwz r3,-116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -116);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c9110
	if (cr0.eq) goto loc_822C9110;
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
loc_822C9110:
	// lwz r3,-112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -112);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r4,-56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -56);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822c9138
	if (cr0.eq) goto loc_822C9138;
	// lwz r11,-48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -48);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822C9138:
	// addic. r11,r30,-280
	xer.ca = r30.u32 > 279;
	r11.s64 = r30.s64 + -280;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r30,-148
	r11.s64 = r30.s64 + -148;
	// bne 0x822c9148
	if (!cr0.eq) goto loc_822C9148;
	// li r11,0
	r11.s64 = 0;
loc_822C9148:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x823260f8
	sub_823260F8(ctx, base);
	// addi r3,r30,-144
	ctx.r3.s64 = r30.s64 + -144;
	// bl 0x822de100
	sub_822DE100(ctx, base);
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

__attribute__((alias("__imp__sub_822C9170"))) PPC_WEAK_FUNC(sub_822C9170);
PPC_FUNC_IMPL(__imp__sub_822C9170) {
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
	// addi r11,r11,-280
	r11.s64 = r11.s64 + -280;
	// addi r3,r11,136
	ctx.r3.s64 = r11.s64 + 136;
	// bl 0x822de100
	sub_822DE100(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C91A0"))) PPC_WEAK_FUNC(sub_822C91A0);
PPC_FUNC_IMPL(__imp__sub_822C91A0) {
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
	// addic. r11,r11,-280
	xer.ca = r11.u32 > 279;
	r11.s64 = r11.s64 + -280;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c91d0
	if (cr0.eq) goto loc_822C91D0;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,-280
	r11.s64 = r11.s64 + -280;
	// addi r11,r11,132
	r11.s64 = r11.s64 + 132;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x822c91d8
	goto loc_822C91D8;
loc_822C91D0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822C91D8:
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

__attribute__((alias("__imp__sub_822C91F4"))) PPC_WEAK_FUNC(sub_822C91F4);
PPC_FUNC_IMPL(__imp__sub_822C91F4) {
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
	// addi r11,r11,-280
	r11.s64 = r11.s64 + -280;
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

__attribute__((alias("__imp__sub_822C9224"))) PPC_WEAK_FUNC(sub_822C9224);
PPC_FUNC_IMPL(__imp__sub_822C9224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9228"))) PPC_WEAK_FUNC(sub_822C9228);
PPC_FUNC_IMPL(__imp__sub_822C9228) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 180);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C9230"))) PPC_WEAK_FUNC(sub_822C9230);
PPC_FUNC_IMPL(__imp__sub_822C9230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-120
	ctx.r3.s64 = ctx.r3.s64 + -120;
	// b 0x82325ac8
	sub_82325AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822C9240"))) PPC_WEAK_FUNC(sub_822C9240);
PPC_FUNC_IMPL(__imp__sub_822C9240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822c96d0
	sub_822C96D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822C924C"))) PPC_WEAK_FUNC(sub_822C924C);
PPC_FUNC_IMPL(__imp__sub_822C924C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9250"))) PPC_WEAK_FUNC(sub_822C9250);
PPC_FUNC_IMPL(__imp__sub_822C9250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x822c7060
	sub_822C7060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822C925C"))) PPC_WEAK_FUNC(sub_822C925C);
PPC_FUNC_IMPL(__imp__sub_822C925C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9260"))) PPC_WEAK_FUNC(sub_822C9260);
PPC_FUNC_IMPL(__imp__sub_822C9260) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x822dd298
	sub_822DD298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822c8ff8
	sub_822C8FF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x822dbd60
	sub_822DBD60(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// li r28,1
	r28.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822c931c
	if (!cr0.gt) goto loc_822C931C;
loc_822C92B4:
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// beq cr6,0x822c9300
	if (cr6.eq) goto loc_822C9300;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
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
	// bge cr6,0x822c9318
	if (!cr6.lt) goto loc_822C9318;
loc_822C9300:
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x822c92b4
	if (cr6.lt) goto loc_822C92B4;
	// b 0x822c931c
	goto loc_822C931C;
loc_822C9318:
	// li r28,0
	r28.s64 = 0;
loc_822C931C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822dc420
	sub_822DC420(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822C9334"))) PPC_WEAK_FUNC(sub_822C9334);
PPC_FUNC_IMPL(__imp__sub_822C9334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9338"))) PPC_WEAK_FUNC(sub_822C9338);
PPC_FUNC_IMPL(__imp__sub_822C9338) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x822bb728
	sub_822BB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x822c938c
	if (cr6.lt) goto loc_822C938C;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x822c9390
	if (cr6.lt) goto loc_822C9390;
loc_822C938C:
	// li r11,0
	r11.s64 = 0;
loc_822C9390:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c9468
	if (cr0.eq) goto loc_822C9468;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 248);
	f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	f31.f64 = double(float(f0.f64 + f31.f64));
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r11,252(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// stfs f31,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x822c93d8
	if (!cr6.lt) goto loc_822C93D8;
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
loc_822C93D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c8ff8
	sub_822C8FF8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c6b18
	sub_822C6B18(ctx, base);
	// lbz r11,13(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 13);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c9428
	if (cr0.eq) goto loc_822C9428;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,60(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822c945c
	goto loc_822C945C;
loc_822C9428:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822de310
	sub_822DE310(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r31,196
	r11.s64 = r31.s64 + 196;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_822C945C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x822dc090
	sub_822DC090(ctx, base);
loc_822C9468:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822C9474"))) PPC_WEAK_FUNC(sub_822C9474);
PPC_FUNC_IMPL(__imp__sub_822C9474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9478"))) PPC_WEAK_FUNC(sub_822C9478);
PPC_FUNC_IMPL(__imp__sub_822C9478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,172(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// lfs f0,248(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 + ctx.f1.f64));
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// bge cr6,0x822c9490
	if (!cr6.lt) goto loc_822C9490;
	// stw r5,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r5.u32);
loc_822C9490:
	// b 0x822c8d40
	sub_822C8D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822C9494"))) PPC_WEAK_FUNC(sub_822C9494);
PPC_FUNC_IMPL(__imp__sub_822C9494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9498"))) PPC_WEAK_FUNC(sub_822C9498);
PPC_FUNC_IMPL(__imp__sub_822C9498) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r3,-9288(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9288);
	// bl 0x822bb728
	sub_822BB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x822c94e8
	if (cr6.lt) goto loc_822C94E8;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x822c94ec
	if (cr6.lt) goto loc_822C94EC;
loc_822C94E8:
	// li r11,0
	r11.s64 = 0;
loc_822C94EC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c9578
	if (cr0.eq) goto loc_822C9578;
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r11.u32);
	// bl 0x822dcb30
	sub_822DCB30(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x822c952c
	if (!cr6.lt) goto loc_822C952C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// bl 0x822c8d40
	sub_822C8D40(ctx, base);
loc_822C952C:
	// lwa r11,4(r29)
	r11.s64 = int32_t(PPC_LOAD_U32(r29.u32 + 4));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x822c7f30
	sub_822C7F30(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r3,-9288(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9288);
	// bl 0x822bb768
	sub_822BB768(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c9578
	if (cr0.eq) goto loc_822C9578;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x822dc368
	sub_822DC368(ctx, base);
loc_822C9578:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822C9584"))) PPC_WEAK_FUNC(sub_822C9584);
PPC_FUNC_IMPL(__imp__sub_822C9584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9588"))) PPC_WEAK_FUNC(sub_822C9588);
PPC_FUNC_IMPL(__imp__sub_822C9588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// stfs f1,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822c9600
	if (cr0.eq) goto loc_822C9600;
	// lwz r11,200(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// beq cr6,0x822c95f0
	if (cr6.eq) goto loc_822C95F0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822de2f0
	sub_822DE2F0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// b 0x822c9600
	goto loc_822C9600;
loc_822C95F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c8ff8
	sub_822C8FF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
loc_822C9600:
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

__attribute__((alias("__imp__sub_822C9614"))) PPC_WEAK_FUNC(sub_822C9614);
PPC_FUNC_IMPL(__imp__sub_822C9614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9618"))) PPC_WEAK_FUNC(sub_822C9618);
PPC_FUNC_IMPL(__imp__sub_822C9618) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,156(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 156);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bd420
	sub_822BD420(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r10,22616
	ctx.r3.s64 = ctx.r10.s64 + 22616;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82282798
	sub_82282798(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-2968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x822c7ed0
	sub_822C7ED0(ctx, base);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r29,0
	r29.s64 = 0;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822c96c0
	if (cr0.eq) goto loc_822C96C0;
	// addi r27,r30,224
	r27.s64 = r30.s64 + 224;
	// li r28,0
	r28.s64 = 0;
loc_822C9694:
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82193c90
	sub_82193C90(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x822c9694
	if (cr6.lt) goto loc_822C9694;
loc_822C96C0:
	// lwz r11,224(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// stw r11,236(r30)
	PPC_STORE_U32(r30.u32 + 236, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822C96D0"))) PPC_WEAK_FUNC(sub_822C96D0);
PPC_FUNC_IMPL(__imp__sub_822C96D0) {
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
	// addi r30,r3,-280
	r30.s64 = ctx.r3.s64 + -280;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,280
	r31.s64 = r30.s64 + 280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9098
	sub_822C9098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c9708
	if (cr0.eq) goto loc_822C9708;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822C9708:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822C9714"))) PPC_WEAK_FUNC(sub_822C9714);
PPC_FUNC_IMPL(__imp__sub_822C9714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822C9718"))) PPC_WEAK_FUNC(sub_822C9718);
PPC_FUNC_IMPL(__imp__sub_822C9718) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,22736(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 22736);
	// mflr r12
	// bl 0x8239bcec
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r28,1
	r28.s64 = 1;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x822c977c
	if (cr6.eq) goto loc_822C977C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,22676
	r11.s64 = r11.s64 + 22676;
	// addi r10,r10,22668
	ctx.r10.s64 = ctx.r10.s64 + 22668;
	// addi r3,r30,280
	ctx.r3.s64 = r30.s64 + 280;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
loc_822C977C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822de170
	sub_822DE170(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// bl 0x821bb3f0
	sub_821BB3F0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,22428
	r11.s64 = r11.s64 + 22428;
	// addi r10,r10,22364
	ctx.r10.s64 = ctx.r10.s64 + 22364;
	// li r3,112
	ctx.r3.s64 = 112;
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
	// addi r10,r11,-276
	ctx.r10.s64 = r11.s64 + -276;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r27,156(r30)
	PPC_STORE_U32(r30.u32 + 156, r27.u32);
	// stw r26,160(r30)
	PPC_STORE_U32(r30.u32 + 160, r26.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c97f8
	if (cr0.eq) goto loc_822C97F8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822db498
	sub_822DB498(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x822c97fc
	goto loc_822C97FC;
loc_822C97F8:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_822C97FC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r29,180(r30)
	PPC_STORE_U8(r30.u32 + 180, r29.u8);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stb r28,181(r30)
	PPC_STORE_U8(r30.u32 + 181, r28.u8);
	// stb r28,182(r30)
	PPC_STORE_U8(r30.u32 + 182, r28.u8);
	// stb r29,188(r30)
	PPC_STORE_U8(r30.u32 + 188, r29.u8);
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,184(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 184, temp.u32);
	// stw r10,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r10.u32);
	// addi r4,r11,13576
	ctx.r4.s64 = r11.s64 + 13576;
	// stw r10,176(r30)
	PPC_STORE_U32(r30.u32 + 176, ctx.r10.u32);
	// stw r9,164(r30)
	PPC_STORE_U32(r30.u32 + 164, ctx.r9.u32);
	// stw r29,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r29.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r30,196
	ctx.r3.s64 = r30.s64 + 196;
	// stw r11,192(r30)
	PPC_STORE_U32(r30.u32 + 192, r11.u32);
	// bl 0x822de2f0
	sub_822DE2F0(ctx, base);
	// addi r11,r30,224
	r11.s64 = r30.s64 + 224;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// stfs f31,264(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 264, temp.u32);
	// addi r26,r30,240
	r26.s64 = r30.s64 + 240;
	// stfs f31,268(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 268, temp.u32);
	// addi r25,r30,244
	r25.s64 = r30.s64 + 244;
	// stfs f31,272(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 272, temp.u32);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// stw r29,252(r30)
	PPC_STORE_U32(r30.u32 + 252, r29.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,256(r30)
	PPC_STORE_U32(r30.u32 + 256, r29.u32);
	// stw r29,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r29.u32);
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stw r11,236(r30)
	PPC_STORE_U32(r30.u32 + 236, r11.u32);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x822de640
	sub_822DE640(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,22648
	ctx.r4.s64 = r11.s64 + 22648;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// stb r3,68(r30)
	PPC_STORE_U8(r30.u32 + 68, ctx.r3.u8);
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r10,22636
	ctx.r4.s64 = ctx.r10.s64 + 22636;
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 64);
	f0.f64 = double(temp.f32);
	// stfs f0,212(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 212, temp.u32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 68);
	f0.f64 = double(temp.f32);
	// stfs f0,216(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 216, temp.u32);
	// lfs f0,72(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 72);
	f0.f64 = double(temp.f32);
	// stfs f0,220(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 220, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,13528
	ctx.r4.s64 = r11.s64 + 13528;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x823151e0
	sub_823151E0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,21536
	ctx.r4.s64 = r11.s64 + 21536;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c9998
	if (!cr0.eq) goto loc_822C9998;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c9988
	if (cr0.eq) goto loc_822C9988;
	// bl 0x822db478
	sub_822DB478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822c998c
	goto loc_822C998C;
loc_822C9988:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_822C998C:
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// stw r4,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r4.u32);
	// bl 0x822db5a0
	sub_822DB5A0(ctx, base);
loc_822C9998:
	// lwz r29,-9608(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,12292
	ctx.r4.s64 = r11.s64 + 12292;
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c99cc
	if (cr0.eq) goto loc_822C99CC;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b4420
	sub_822B4420(ctx, base);
loc_822C99CC:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-9836(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9836);
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,248(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 248, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822C9720"))) PPC_WEAK_FUNC(sub_822C9720);
PPC_FUNC_IMPL(__imp__sub_822C9720) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r28,1
	r28.s64 = 1;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x822c977c
	if (cr6.eq) goto loc_822C977C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,22676
	r11.s64 = r11.s64 + 22676;
	// addi r10,r10,22668
	ctx.r10.s64 = ctx.r10.s64 + 22668;
	// addi r3,r30,280
	ctx.r3.s64 = r30.s64 + 280;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
loc_822C977C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822de170
	sub_822DE170(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// bl 0x821bb3f0
	sub_821BB3F0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,22428
	r11.s64 = r11.s64 + 22428;
	// addi r10,r10,22364
	ctx.r10.s64 = ctx.r10.s64 + 22364;
	// li r3,112
	ctx.r3.s64 = 112;
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
	// addi r10,r11,-276
	ctx.r10.s64 = r11.s64 + -276;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r27,156(r30)
	PPC_STORE_U32(r30.u32 + 156, r27.u32);
	// stw r26,160(r30)
	PPC_STORE_U32(r30.u32 + 160, r26.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c97f8
	if (cr0.eq) goto loc_822C97F8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822db498
	sub_822DB498(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x822c97fc
	goto loc_822C97FC;
loc_822C97F8:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_822C97FC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r29,180(r30)
	PPC_STORE_U8(r30.u32 + 180, r29.u8);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stb r28,181(r30)
	PPC_STORE_U8(r30.u32 + 181, r28.u8);
	// stb r28,182(r30)
	PPC_STORE_U8(r30.u32 + 182, r28.u8);
	// stb r29,188(r30)
	PPC_STORE_U8(r30.u32 + 188, r29.u8);
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,184(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 184, temp.u32);
	// stw r10,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r10.u32);
	// addi r4,r11,13576
	ctx.r4.s64 = r11.s64 + 13576;
	// stw r10,176(r30)
	PPC_STORE_U32(r30.u32 + 176, ctx.r10.u32);
	// stw r9,164(r30)
	PPC_STORE_U32(r30.u32 + 164, ctx.r9.u32);
	// stw r29,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r29.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r30,196
	ctx.r3.s64 = r30.s64 + 196;
	// stw r11,192(r30)
	PPC_STORE_U32(r30.u32 + 192, r11.u32);
	// bl 0x822de2f0
	sub_822DE2F0(ctx, base);
	// addi r11,r30,224
	r11.s64 = r30.s64 + 224;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// stfs f31,264(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 264, temp.u32);
	// addi r26,r30,240
	r26.s64 = r30.s64 + 240;
	// stfs f31,268(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 268, temp.u32);
	// addi r25,r30,244
	r25.s64 = r30.s64 + 244;
	// stfs f31,272(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 272, temp.u32);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// stw r29,252(r30)
	PPC_STORE_U32(r30.u32 + 252, r29.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,256(r30)
	PPC_STORE_U32(r30.u32 + 256, r29.u32);
	// stw r29,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r29.u32);
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stw r11,236(r30)
	PPC_STORE_U32(r30.u32 + 236, r11.u32);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x822de640
	sub_822DE640(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,22648
	ctx.r4.s64 = r11.s64 + 22648;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// stb r3,68(r30)
	PPC_STORE_U8(r30.u32 + 68, ctx.r3.u8);
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r10,22636
	ctx.r4.s64 = ctx.r10.s64 + 22636;
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 64);
	f0.f64 = double(temp.f32);
	// stfs f0,212(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 212, temp.u32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 68);
	f0.f64 = double(temp.f32);
	// stfs f0,216(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 216, temp.u32);
	// lfs f0,72(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 72);
	f0.f64 = double(temp.f32);
	// stfs f0,220(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 220, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,13528
	ctx.r4.s64 = r11.s64 + 13528;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x823151e0
	sub_823151E0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,21536
	ctx.r4.s64 = r11.s64 + 21536;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822c9998
	if (!cr0.eq) goto loc_822C9998;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822c9988
	if (cr0.eq) goto loc_822C9988;
	// bl 0x822db478
	sub_822DB478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822c998c
	goto loc_822C998C;
loc_822C9988:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_822C998C:
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// stw r4,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r4.u32);
	// bl 0x822db5a0
	sub_822DB5A0(ctx, base);
loc_822C9998:
	// lwz r29,-9608(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,12292
	ctx.r4.s64 = r11.s64 + 12292;
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c99cc
	if (cr0.eq) goto loc_822C99CC;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b4420
	sub_822B4420(ctx, base);
loc_822C99CC:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-9836(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9836);
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,248(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 248, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822C99EC"))) PPC_WEAK_FUNC(sub_822C99EC);
PPC_FUNC_IMPL(__imp__sub_822C99EC) {
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822c9a20
	if (cr0.eq) goto loc_822C9A20;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// addi r3,r11,280
	ctx.r3.s64 = r11.s64 + 280;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_822C9A20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822C9A30"))) PPC_WEAK_FUNC(sub_822C9A30);
PPC_FUNC_IMPL(__imp__sub_822C9A30) {
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
	// addi r3,r11,136
	ctx.r3.s64 = r11.s64 + 136;
	// bl 0x822de100
	sub_822DE100(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

