#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822657FC"))) PPC_WEAK_FUNC(sub_822657FC);
PPC_FUNC_IMPL(__imp__sub_822657FC) {
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
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
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

__attribute__((alias("__imp__sub_82265824"))) PPC_WEAK_FUNC(sub_82265824);
PPC_FUNC_IMPL(__imp__sub_82265824) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15556
	r11.s64 = r11.s64 + 15556;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15556
	ctx.r10.s64 = ctx.r10.s64 + 15556;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226584C"))) PPC_WEAK_FUNC(sub_8226584C);
PPC_FUNC_IMPL(__imp__sub_8226584C) {
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
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
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

__attribute__((alias("__imp__sub_82265874"))) PPC_WEAK_FUNC(sub_82265874);
PPC_FUNC_IMPL(__imp__sub_82265874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265878"))) PPC_WEAK_FUNC(sub_82265878);
PPC_FUNC_IMPL(__imp__sub_82265878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// b 0x8268cd60
	sub_8268CD60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82265884"))) PPC_WEAK_FUNC(sub_82265884);
PPC_FUNC_IMPL(__imp__sub_82265884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265888"))) PPC_WEAK_FUNC(sub_82265888);
PPC_FUNC_IMPL(__imp__sub_82265888) {
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
	// lwz r16,15160(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15160);
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,15136
	r11.s64 = r11.s64 + 15136;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822658e0
	if (cr0.eq) goto loc_822658E0;
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
loc_822658E0:
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

__attribute__((alias("__imp__sub_82265890"))) PPC_WEAK_FUNC(sub_82265890);
PPC_FUNC_IMPL(__imp__sub_82265890) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,15136
	r11.s64 = r11.s64 + 15136;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822658e0
	if (cr0.eq) goto loc_822658E0;
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
loc_822658E0:
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

__attribute__((alias("__imp__sub_82265904"))) PPC_WEAK_FUNC(sub_82265904);
PPC_FUNC_IMPL(__imp__sub_82265904) {
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

__attribute__((alias("__imp__sub_8226592C"))) PPC_WEAK_FUNC(sub_8226592C);
PPC_FUNC_IMPL(__imp__sub_8226592C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265930"))) PPC_WEAK_FUNC(sub_82265930);
PPC_FUNC_IMPL(__imp__sub_82265930) {
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
	// bl 0x82265890
	sub_82265890(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82265960
	if (cr0.eq) goto loc_82265960;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82265960:
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

__attribute__((alias("__imp__sub_8226597C"))) PPC_WEAK_FUNC(sub_8226597C);
PPC_FUNC_IMPL(__imp__sub_8226597C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265980"))) PPC_WEAK_FUNC(sub_82265980);
PPC_FUNC_IMPL(__imp__sub_82265980) {
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
	// beq cr6,0x822659ec
	if (cr6.eq) goto loc_822659EC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822659c8
	if (cr6.eq) goto loc_822659C8;
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
loc_822659C8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq cr6,0x822659ec
	if (cr6.eq) goto loc_822659EC;
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
loc_822659EC:
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

__attribute__((alias("__imp__sub_82265A04"))) PPC_WEAK_FUNC(sub_82265A04);
PPC_FUNC_IMPL(__imp__sub_82265A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265A08"))) PPC_WEAK_FUNC(sub_82265A08);
PPC_FUNC_IMPL(__imp__sub_82265A08) {
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
	// beq 0x82265a48
	if (cr0.eq) goto loc_82265A48;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,18488
	ctx.r3.s64 = r11.s64 + 18488;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82265a50
	goto loc_82265A50;
loc_82265A48:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82265A50:
	// mulli r3,r31,24
	ctx.r3.s64 = r31.s64 * 24;
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

__attribute__((alias("__imp__sub_82265A6C"))) PPC_WEAK_FUNC(sub_82265A6C);
PPC_FUNC_IMPL(__imp__sub_82265A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265A70"))) PPC_WEAK_FUNC(sub_82265A70);
PPC_FUNC_IMPL(__imp__sub_82265A70) {
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
	// beq 0x82265ab0
	if (cr0.eq) goto loc_82265AB0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,18564
	ctx.r3.s64 = r11.s64 + 18564;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82265ab8
	goto loc_82265AB8;
loc_82265AB0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82265AB8:
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

__attribute__((alias("__imp__sub_82265AD4"))) PPC_WEAK_FUNC(sub_82265AD4);
PPC_FUNC_IMPL(__imp__sub_82265AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265AD8"))) PPC_WEAK_FUNC(sub_82265AD8);
PPC_FUNC_IMPL(__imp__sub_82265AD8) {
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
	// addi r31,r11,3908
	r31.s64 = r11.s64 + 3908;
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

__attribute__((alias("__imp__sub_82265B30"))) PPC_WEAK_FUNC(sub_82265B30);
PPC_FUNC_IMPL(__imp__sub_82265B30) {
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
	// beq 0x82265b70
	if (cr0.eq) goto loc_82265B70;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,18588
	ctx.r3.s64 = r11.s64 + 18588;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82265b78
	goto loc_82265B78;
loc_82265B70:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82265B78:
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

__attribute__((alias("__imp__sub_82265B94"))) PPC_WEAK_FUNC(sub_82265B94);
PPC_FUNC_IMPL(__imp__sub_82265B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265B98"))) PPC_WEAK_FUNC(sub_82265B98);
PPC_FUNC_IMPL(__imp__sub_82265B98) {
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
	// addi r31,r11,3908
	r31.s64 = r11.s64 + 3908;
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

__attribute__((alias("__imp__sub_82265BEC"))) PPC_WEAK_FUNC(sub_82265BEC);
PPC_FUNC_IMPL(__imp__sub_82265BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265BF0"))) PPC_WEAK_FUNC(sub_82265BF0);
PPC_FUNC_IMPL(__imp__sub_82265BF0) {
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
	// beq 0x82265c30
	if (cr0.eq) goto loc_82265C30;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,18640
	ctx.r3.s64 = r11.s64 + 18640;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82265c38
	goto loc_82265C38;
loc_82265C30:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82265C38:
	// mulli r3,r31,20
	ctx.r3.s64 = r31.s64 * 20;
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

__attribute__((alias("__imp__sub_82265C54"))) PPC_WEAK_FUNC(sub_82265C54);
PPC_FUNC_IMPL(__imp__sub_82265C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265C58"))) PPC_WEAK_FUNC(sub_82265C58);
PPC_FUNC_IMPL(__imp__sub_82265C58) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,15068
	r11.s64 = r11.s64 + 15068;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r9,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r9.u32);
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82265ca0
	if (cr0.eq) goto loc_82265CA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82265CA0:
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

__attribute__((alias("__imp__sub_82265CBC"))) PPC_WEAK_FUNC(sub_82265CBC);
PPC_FUNC_IMPL(__imp__sub_82265CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265CC0"))) PPC_WEAK_FUNC(sub_82265CC0);
PPC_FUNC_IMPL(__imp__sub_82265CC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82265890
	sub_82265890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82265CC4"))) PPC_WEAK_FUNC(sub_82265CC4);
PPC_FUNC_IMPL(__imp__sub_82265CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265CC8"))) PPC_WEAK_FUNC(sub_82265CC8);
PPC_FUNC_IMPL(__imp__sub_82265CC8) {
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
	// lwz r16,15216(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15216);
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
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82265d04
	if (cr0.eq) goto loc_82265D04;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82265D04:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82265d18
	if (cr0.eq) goto loc_82265D18;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82265D18:
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

__attribute__((alias("__imp__sub_82265CD0"))) PPC_WEAK_FUNC(sub_82265CD0);
PPC_FUNC_IMPL(__imp__sub_82265CD0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82265d04
	if (cr0.eq) goto loc_82265D04;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82265D04:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82265d18
	if (cr0.eq) goto loc_82265D18;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82265D18:
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

__attribute__((alias("__imp__sub_82265D30"))) PPC_WEAK_FUNC(sub_82265D30);
PPC_FUNC_IMPL(__imp__sub_82265D30) {
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

__attribute__((alias("__imp__sub_82265D58"))) PPC_WEAK_FUNC(sub_82265D58);
PPC_FUNC_IMPL(__imp__sub_82265D58) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82265d90
	if (cr0.eq) goto loc_82265D90;
	// bl 0x8268cba0
	sub_8268CBA0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82265e0c
	if (!cr0.eq) goto loc_82265E0C;
loc_82265D90:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f0,-25364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// beq 0x82265db8
	if (cr0.eq) goto loc_82265DB8;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
loc_82265DB8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lhz r11,10(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, r11.u16);
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x82265e08
	if (!cr6.gt) goto loc_82265E08;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r11.u8);
	// b 0x82265e0c
	goto loc_82265E0C;
loc_82265E08:
	// stb r29,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r29.u8);
loc_82265E0C:
	// stw r29,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82265E20"))) PPC_WEAK_FUNC(sub_82265E20);
PPC_FUNC_IMPL(__imp__sub_82265E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lbz r11,92(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 92);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,92(r4)
	PPC_STORE_U8(ctx.r4.u32 + 92, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82265E44"))) PPC_WEAK_FUNC(sub_82265E44);
PPC_FUNC_IMPL(__imp__sub_82265E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265E48"))) PPC_WEAK_FUNC(sub_82265E48);
PPC_FUNC_IMPL(__imp__sub_82265E48) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,92(r29)
	PPC_STORE_U8(r29.u32 + 92, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82265E98"))) PPC_WEAK_FUNC(sub_82265E98);
PPC_FUNC_IMPL(__imp__sub_82265E98) {
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
	// beq cr6,0x82265ed0
	if (cr6.eq) goto loc_82265ED0;
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
loc_82265ED0:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82265f00
	if (!cr6.eq) goto loc_82265F00;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,3908
	ctx.r6.s64 = r11.s64 + 3908;
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
	// bl 0x82265980
	sub_82265980(ctx, base);
loc_82265F00:
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

__attribute__((alias("__imp__sub_82265F14"))) PPC_WEAK_FUNC(sub_82265F14);
PPC_FUNC_IMPL(__imp__sub_82265F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265F18"))) PPC_WEAK_FUNC(sub_82265F18);
PPC_FUNC_IMPL(__imp__sub_82265F18) {
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
	// bl 0x82265890
	sub_82265890(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82265f48
	if (cr0.eq) goto loc_82265F48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82265F48:
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

__attribute__((alias("__imp__sub_82265F64"))) PPC_WEAK_FUNC(sub_82265F64);
PPC_FUNC_IMPL(__imp__sub_82265F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265F68"))) PPC_WEAK_FUNC(sub_82265F68);
PPC_FUNC_IMPL(__imp__sub_82265F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,15296(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15296);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82265F70"))) PPC_WEAK_FUNC(sub_82265F70);
PPC_FUNC_IMPL(__imp__sub_82265F70) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82265FA8"))) PPC_WEAK_FUNC(sub_82265FA8);
PPC_FUNC_IMPL(__imp__sub_82265FA8) {
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

__attribute__((alias("__imp__sub_82265FD0"))) PPC_WEAK_FUNC(sub_82265FD0);
PPC_FUNC_IMPL(__imp__sub_82265FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,15352(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15352);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82265FD8"))) PPC_WEAK_FUNC(sub_82265FD8);
PPC_FUNC_IMPL(__imp__sub_82265FD8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82266010"))) PPC_WEAK_FUNC(sub_82266010);
PPC_FUNC_IMPL(__imp__sub_82266010) {
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

__attribute__((alias("__imp__sub_82266038"))) PPC_WEAK_FUNC(sub_82266038);
PPC_FUNC_IMPL(__imp__sub_82266038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r8
	ctx.r9.u64 = r11.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - r11.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm. r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82266074
	if (cr0.eq) goto loc_82266074;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
loc_82266074:
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// b 0x82266080
	goto loc_82266080;
loc_8226607C:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82266080:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8226607c
	if (cr6.eq) goto loc_8226607C;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x822660b0
	goto loc_822660B0;
loc_822660A8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_822660B0:
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x822660a8
	if (!cr0.eq) goto loc_822660A8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822660D0"))) PPC_WEAK_FUNC(sub_822660D0);
PPC_FUNC_IMPL(__imp__sub_822660D0) {
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
	// lwz r16,15416(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15416);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// subf r10,r11,r23
	ctx.r10.s64 = r23.s64 - r11.s64;
	// mr r24,r11
	r24.u64 = r11.u64;
	// cntlzw r11,r10
	r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// b 0x8226622c
	goto loc_8226622C;
loc_82266104:
	// addi r30,r24,8
	r30.s64 = r24.s64 + 8;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bne cr6,0x82266140
	if (!cr6.eq) goto loc_82266140;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82315440
	sub_82315440(ctx, base);
	// b 0x82266170
	goto loc_82266170;
loc_82266140:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x82315578
	sub_82315578(ctx, base);
loc_82266170:
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bne cr6,0x8226620c
	if (!cr6.eq) goto loc_8226620C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// lhz r11,8(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822661d4
	if (cr6.eq) goto loc_822661D4;
	// li r28,0
	r28.s64 = 0;
loc_822661A8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// bl 0x82317b88
	sub_82317B88(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822661d4
	if (!cr0.eq) goto loc_822661D4;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x822661a8
	if (!cr6.eq) goto loc_822661A8;
loc_822661D4:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82266220
	if (!cr6.eq) goto loc_82266220;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82318240
	sub_82318240(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
loc_82266200:
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82266240
	goto loc_82266240;
loc_8226620C:
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82317d60
	sub_82317D60(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82266248
	if (!cr0.eq) goto loc_82266248;
loc_82266220:
	// lwz r24,0(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// subf r11,r24,r23
	r11.s64 = r23.s64 - r24.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
loc_8226622C:
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82266104
	if (!cr0.eq) goto loc_82266104;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82266240:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd34
	return;
loc_82266248:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82318240
	sub_82318240(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// b 0x82266200
	goto loc_82266200;
}

__attribute__((alias("__imp__sub_822660D8"))) PPC_WEAK_FUNC(sub_822660D8);
PPC_FUNC_IMPL(__imp__sub_822660D8) {
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
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// subf r10,r11,r23
	ctx.r10.s64 = r23.s64 - r11.s64;
	// mr r24,r11
	r24.u64 = r11.u64;
	// cntlzw r11,r10
	r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// b 0x8226622c
	goto loc_8226622C;
loc_82266104:
	// addi r30,r24,8
	r30.s64 = r24.s64 + 8;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bne cr6,0x82266140
	if (!cr6.eq) goto loc_82266140;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82315440
	sub_82315440(ctx, base);
	// b 0x82266170
	goto loc_82266170;
loc_82266140:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x82315578
	sub_82315578(ctx, base);
loc_82266170:
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bne cr6,0x8226620c
	if (!cr6.eq) goto loc_8226620C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// lhz r11,8(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822661d4
	if (cr6.eq) goto loc_822661D4;
	// li r28,0
	r28.s64 = 0;
loc_822661A8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// bl 0x82317b88
	sub_82317B88(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822661d4
	if (!cr0.eq) goto loc_822661D4;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x822661a8
	if (!cr6.eq) goto loc_822661A8;
loc_822661D4:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82266220
	if (!cr6.eq) goto loc_82266220;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82318240
	sub_82318240(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
loc_82266200:
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82266240
	goto loc_82266240;
loc_8226620C:
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82317d60
	sub_82317D60(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82266248
	if (!cr0.eq) goto loc_82266248;
loc_82266220:
	// lwz r24,0(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// subf r11,r24,r23
	r11.s64 = r23.s64 - r24.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
loc_8226622C:
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82266104
	if (!cr0.eq) goto loc_82266104;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82266240:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd34
	return;
loc_82266248:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82318240
	sub_82318240(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// b 0x82266200
	goto loc_82266200;
}

__attribute__((alias("__imp__sub_8226626C"))) PPC_WEAK_FUNC(sub_8226626C);
PPC_FUNC_IMPL(__imp__sub_8226626C) {
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

__attribute__((alias("__imp__sub_82266294"))) PPC_WEAK_FUNC(sub_82266294);
PPC_FUNC_IMPL(__imp__sub_82266294) {
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
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
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

__attribute__((alias("__imp__sub_822662BC"))) PPC_WEAK_FUNC(sub_822662BC);
PPC_FUNC_IMPL(__imp__sub_822662BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822662C0"))) PPC_WEAK_FUNC(sub_822662C0);
PPC_FUNC_IMPL(__imp__sub_822662C0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// lfs f2,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82266354
	if (cr0.eq) goto loc_82266354;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
loc_8226630C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x8226633c
	if (!cr6.gt) goto loc_8226633C;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8226630c
	if (cr6.lt) goto loc_8226630C;
	// b 0x82266354
	goto loc_82266354;
loc_8226633C:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r30,r11,r9
	r30.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82266354
	if (cr0.eq) goto loc_82266354;
	// li r11,1
	r11.s64 = 1;
	// stb r11,246(r30)
	PPC_STORE_U8(r30.u32 + 246, r11.u8);
loc_82266354:
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

__attribute__((alias("__imp__sub_82266370"))) PPC_WEAK_FUNC(sub_82266370);
PPC_FUNC_IMPL(__imp__sub_82266370) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822663dc
	if (cr0.eq) goto loc_822663DC;
	// li r30,0
	r30.s64 = 0;
loc_822663A4:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822660d8
	sub_822660D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822663e8
	if (cr0.eq) goto loc_822663E8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x822663a4
	if (!cr6.eq) goto loc_822663A4;
loc_822663DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822663E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_822663E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822663e0
	goto loc_822663E0;
}

__attribute__((alias("__imp__sub_822663F0"))) PPC_WEAK_FUNC(sub_822663F0);
PPC_FUNC_IMPL(__imp__sub_822663F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,1
	r11.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,246(r30)
	PPC_STORE_U8(r30.u32 + 246, r11.u8);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82266430
	if (cr0.eq) goto loc_82266430;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82266430:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82265980
	sub_82265980(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e74b8
	sub_821E74B8(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-5056
	r11.s64 = r11.s64 + -5056;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82311948
	sub_82311948(ctx, base);
	// stfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
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

__attribute__((alias("__imp__sub_82266488"))) PPC_WEAK_FUNC(sub_82266488);
PPC_FUNC_IMPL(__imp__sub_82266488) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,15536(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15536);
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x822664f8
	if (!cr6.eq) goto loc_822664F8;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822664f0
	if (cr0.eq) goto loc_822664F0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,-27416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27416);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r4,448(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 448);
	// lfs f1,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8268cc80
	sub_8268CC80(ctx, base);
	// b 0x822664f4
	goto loc_822664F4;
loc_822664F0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822664F4:
	// stw r3,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r3.u32);
loc_822664F8:
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82266518
	if (cr0.eq) goto loc_82266518;
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
loc_82266518:
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// stw r28,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r28.u32);
	// stw r29,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r29.u32);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x8268cbb0
	sub_8268CBB0(ctx, base);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x8268cba0
	sub_8268CBA0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822665d0
	if (cr0.eq) goto loc_822665D0;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82266558
	if (cr0.eq) goto loc_82266558;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82266558:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// bl 0x82265980
	sub_82265980(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82266578
	if (cr0.eq) goto loc_82266578;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// stw r28,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r28.u32);
loc_82266578:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x822665ac
	if (cr0.eq) goto loc_822665AC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r30.u32);
	// addi r11,r11,15068
	r11.s64 = r11.s64 + 15068;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x822665b0
	goto loc_822665B0;
loc_822665AC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_822665B0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r4,88(r30)
	PPC_STORE_U32(r30.u32 + 88, ctx.r4.u32);
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82314420
	sub_82314420(ctx, base);
	// b 0x822665f4
	goto loc_822665F4;
loc_822665D0:
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822665f0
	if (cr0.eq) goto loc_822665F0;
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
loc_822665F0:
	// stw r28,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r28.u32);
loc_822665F4:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x8268cba0
	sub_8268CBA0(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82266490"))) PPC_WEAK_FUNC(sub_82266490);
PPC_FUNC_IMPL(__imp__sub_82266490) {
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
	// li r28,0
	r28.s64 = 0;
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x822664f8
	if (!cr6.eq) goto loc_822664F8;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822664f0
	if (cr0.eq) goto loc_822664F0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,-27416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27416);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r4,448(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 448);
	// lfs f1,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8268cc80
	sub_8268CC80(ctx, base);
	// b 0x822664f4
	goto loc_822664F4;
loc_822664F0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822664F4:
	// stw r3,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r3.u32);
loc_822664F8:
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82266518
	if (cr0.eq) goto loc_82266518;
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
loc_82266518:
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// stw r28,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r28.u32);
	// stw r29,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r29.u32);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x8268cbb0
	sub_8268CBB0(ctx, base);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x8268cba0
	sub_8268CBA0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822665d0
	if (cr0.eq) goto loc_822665D0;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82266558
	if (cr0.eq) goto loc_82266558;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82266558:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// bl 0x82265980
	sub_82265980(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82266578
	if (cr0.eq) goto loc_82266578;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// stw r28,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r28.u32);
loc_82266578:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x822665ac
	if (cr0.eq) goto loc_822665AC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r30.u32);
	// addi r11,r11,15068
	r11.s64 = r11.s64 + 15068;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x822665b0
	goto loc_822665B0;
loc_822665AC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_822665B0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r4,88(r30)
	PPC_STORE_U32(r30.u32 + 88, ctx.r4.u32);
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82314420
	sub_82314420(ctx, base);
	// b 0x822665f4
	goto loc_822665F4;
loc_822665D0:
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822665f0
	if (cr0.eq) goto loc_822665F0;
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
loc_822665F0:
	// stw r28,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r28.u32);
loc_822665F4:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x8268cba0
	sub_8268CBA0(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82266604"))) PPC_WEAK_FUNC(sub_82266604);
PPC_FUNC_IMPL(__imp__sub_82266604) {
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

__attribute__((alias("__imp__sub_8226662C"))) PPC_WEAK_FUNC(sub_8226662C);
PPC_FUNC_IMPL(__imp__sub_8226662C) {
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

__attribute__((alias("__imp__sub_82266654"))) PPC_WEAK_FUNC(sub_82266654);
PPC_FUNC_IMPL(__imp__sub_82266654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82266658"))) PPC_WEAK_FUNC(sub_82266658);
PPC_FUNC_IMPL(__imp__sub_82266658) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82265a70
	sub_82265A70(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822666B0"))) PPC_WEAK_FUNC(sub_822666B0);
PPC_FUNC_IMPL(__imp__sub_822666B0) {
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
	// lwz r16,15640(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15640);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r28,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r28.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r30.u32);
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82265f70
	sub_82265F70(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82266708
	if (cr0.eq) goto loc_82266708;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82266708:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226671c
	if (cr0.eq) goto loc_8226671C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8226671C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822666B8"))) PPC_WEAK_FUNC(sub_822666B8);
PPC_FUNC_IMPL(__imp__sub_822666B8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r28,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r28.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r30.u32);
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82265f70
	sub_82265F70(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82266708
	if (cr0.eq) goto loc_82266708;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82266708:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226671c
	if (cr0.eq) goto loc_8226671C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8226671C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82266728"))) PPC_WEAK_FUNC(sub_82266728);
PPC_FUNC_IMPL(__imp__sub_82266728) {
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
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
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

__attribute__((alias("__imp__sub_82266750"))) PPC_WEAK_FUNC(sub_82266750);
PPC_FUNC_IMPL(__imp__sub_82266750) {
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
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 156);
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

__attribute__((alias("__imp__sub_82266778"))) PPC_WEAK_FUNC(sub_82266778);
PPC_FUNC_IMPL(__imp__sub_82266778) {
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
	// beq 0x822667a8
	if (cr0.eq) goto loc_822667A8;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x82265cd0
	sub_82265CD0(ctx, base);
loc_822667A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822667B8"))) PPC_WEAK_FUNC(sub_822667B8);
PPC_FUNC_IMPL(__imp__sub_822667B8) {
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
	// lwz r16,15712(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15712);
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
	// beq cr6,0x822667e8
	if (cr6.eq) goto loc_822667E8;
	// bl 0x82265fd8
	sub_82265FD8(ctx, base);
loc_822667E8:
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

__attribute__((alias("__imp__sub_822667C0"))) PPC_WEAK_FUNC(sub_822667C0);
PPC_FUNC_IMPL(__imp__sub_822667C0) {
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
	// beq cr6,0x822667e8
	if (cr6.eq) goto loc_822667E8;
	// bl 0x82265fd8
	sub_82265FD8(ctx, base);
loc_822667E8:
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

__attribute__((alias("__imp__sub_822667FC"))) PPC_WEAK_FUNC(sub_822667FC);
PPC_FUNC_IMPL(__imp__sub_822667FC) {
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

__attribute__((alias("__imp__sub_82266828"))) PPC_WEAK_FUNC(sub_82266828);
PPC_FUNC_IMPL(__imp__sub_82266828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r8,r11,r10
	ctx.r8.u32 = r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82266878
	goto loc_82266878;
loc_82266864:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r8,r8,r11
	ctx.r8.s64 = r11.s64 - ctx.r8.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm. r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82266898
	if (!cr0.eq) goto loc_82266898;
loc_82266878:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x82266864
	if (!cr0.eq) goto loc_82266864;
loc_82266898:
	// subf r11,r10,r9
	r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822668b8
	if (cr0.eq) goto loc_822668B8;
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// b 0x822668c4
	goto loc_822668C4;
loc_822668B8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, r11.u32);
	// addi r11,r1,-12
	r11.s64 = ctx.r1.s64 + -12;
loc_822668C4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822668D0"))) PPC_WEAK_FUNC(sub_822668D0);
PPC_FUNC_IMPL(__imp__sub_822668D0) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82266904
	if (cr0.eq) goto loc_82266904;
	// bl 0x8268cba0
	sub_8268CBA0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226693c
	if (!cr0.eq) goto loc_8226693C;
loc_82266904:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8226691c
	if (cr0.eq) goto loc_8226691C;
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8226693c
	if (!cr0.eq) goto loc_8226693C;
loc_8226691C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82266930
	if (cr6.eq) goto loc_82266930;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_82266930:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822663f0
	sub_822663F0(ctx, base);
loc_8226693C:
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

__attribute__((alias("__imp__sub_82266954"))) PPC_WEAK_FUNC(sub_82266954);
PPC_FUNC_IMPL(__imp__sub_82266954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82266958"))) PPC_WEAK_FUNC(sub_82266958);
PPC_FUNC_IMPL(__imp__sub_82266958) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82266998
	if (!cr6.eq) goto loc_82266998;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822459b8
	sub_822459B8(ctx, base);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x822669ec
	goto loc_822669EC;
loc_82266998:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822459b8
	sub_822459B8(ctx, base);
	// b 0x822669b8
	goto loc_822669B8;
loc_822669A4:
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x822669c4
	if (cr6.eq) goto loc_822669C4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82245a38
	sub_82245A38(ctx, base);
loc_822669B8:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x822669a4
	if (!cr6.eq) goto loc_822669A4;
loc_822669C4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82245a38
	sub_82245A38(ctx, base);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x822669f4
	if (!cr6.eq) goto loc_822669F4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822459b8
	sub_822459B8(ctx, base);
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
loc_822669EC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822669fc
	if (cr6.eq) goto loc_822669FC;
loc_822669F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822668d0
	sub_822668D0(ctx, base);
loc_822669FC:
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82266A10"))) PPC_WEAK_FUNC(sub_82266A10);
PPC_FUNC_IMPL(__imp__sub_82266A10) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82265b98
	sub_82265B98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822668d0
	sub_822668D0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82266A60"))) PPC_WEAK_FUNC(sub_82266A60);
PPC_FUNC_IMPL(__imp__sub_82266A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x82266658
	sub_82266658(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82122018
	sub_82122018(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_82266AD4"))) PPC_WEAK_FUNC(sub_82266AD4);
PPC_FUNC_IMPL(__imp__sub_82266AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82266AD8"))) PPC_WEAK_FUNC(sub_82266AD8);
PPC_FUNC_IMPL(__imp__sub_82266AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,15812(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15812);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82265a08
	sub_82265A08(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x822667c0
	sub_822667C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82266AE0"))) PPC_WEAK_FUNC(sub_82266AE0);
PPC_FUNC_IMPL(__imp__sub_82266AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82265a08
	sub_82265A08(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x822667c0
	sub_822667C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82266B2C"))) PPC_WEAK_FUNC(sub_82266B2C);
PPC_FUNC_IMPL(__imp__sub_82266B2C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,15812(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15812);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_82266B34"))) PPC_WEAK_FUNC(sub_82266B34);
PPC_FUNC_IMPL(__imp__sub_82266B34) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82266B60"))) PPC_WEAK_FUNC(sub_82266B60);
PPC_FUNC_IMPL(__imp__sub_82266B60) {
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
	// blt cr6,0x82266ba8
	if (cr6.lt) goto loc_82266BA8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82266BA8:
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
	// bl 0x82265a70
	sub_82265A70(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82266be0
	if (cr0.eq) goto loc_82266BE0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_82266BE0:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82266c00
	if (cr6.eq) goto loc_82266C00;
loc_82266BEC:
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
	// bne 0x82266bec
	if (!cr0.eq) goto loc_82266BEC;
loc_82266C00:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x82266c28
	if (!cr0.eq) goto loc_82266C28;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82266c28
	if (cr0.eq) goto loc_82266C28;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_82266C28:
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

__attribute__((alias("__imp__sub_82266C5C"))) PPC_WEAK_FUNC(sub_82266C5C);
PPC_FUNC_IMPL(__imp__sub_82266C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82266C60"))) PPC_WEAK_FUNC(sub_82266C60);
PPC_FUNC_IMPL(__imp__sub_82266C60) {
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
	// beq cr6,0x82266ca0
	if (cr6.eq) goto loc_82266CA0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82266c90
	if (cr0.eq) goto loc_82266C90;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82266C90:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82266cb4
	goto loc_82266CB4;
loc_82266CA0:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82266b60
	sub_82266B60(ctx, base);
loc_82266CB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82266CC4"))) PPC_WEAK_FUNC(sub_82266CC4);
PPC_FUNC_IMPL(__imp__sub_82266CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82266CC8"))) PPC_WEAK_FUNC(sub_82266CC8);
PPC_FUNC_IMPL(__imp__sub_82266CC8) {
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
	// bl 0x82266ae0
	sub_82266AE0(ctx, base);
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

__attribute__((alias("__imp__sub_82266D2C"))) PPC_WEAK_FUNC(sub_82266D2C);
PPC_FUNC_IMPL(__imp__sub_82266D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82266D30"))) PPC_WEAK_FUNC(sub_82266D30);
PPC_FUNC_IMPL(__imp__sub_82266D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82266d64
	goto loc_82266D64;
loc_82266D48:
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x82265cd0
	sub_82265CD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82266D64:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82266d48
	if (!cr6.eq) goto loc_82266D48;
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82266D7C"))) PPC_WEAK_FUNC(sub_82266D7C);
PPC_FUNC_IMPL(__imp__sub_82266D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82266D80"))) PPC_WEAK_FUNC(sub_82266D80);
PPC_FUNC_IMPL(__imp__sub_82266D80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,15872(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15872);
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82266dc4
	if (cr6.eq) goto loc_82266DC4;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82266a60
	sub_82266A60(ctx, base);
loc_82266DC4:
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

__attribute__((alias("__imp__sub_82266D88"))) PPC_WEAK_FUNC(sub_82266D88);
PPC_FUNC_IMPL(__imp__sub_82266D88) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82266dc4
	if (cr6.eq) goto loc_82266DC4;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82266a60
	sub_82266A60(ctx, base);
loc_82266DC4:
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

__attribute__((alias("__imp__sub_82266DD8"))) PPC_WEAK_FUNC(sub_82266DD8);
PPC_FUNC_IMPL(__imp__sub_82266DD8) {
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

__attribute__((alias("__imp__sub_82266E04"))) PPC_WEAK_FUNC(sub_82266E04);
PPC_FUNC_IMPL(__imp__sub_82266E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82266E08"))) PPC_WEAK_FUNC(sub_82266E08);
PPC_FUNC_IMPL(__imp__sub_82266E08) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82266e44
	if (cr0.eq) goto loc_82266E44;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82266E44:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82266e54
	if (cr0.eq) goto loc_82266E54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82266E54:
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

__attribute__((alias("__imp__sub_82266E70"))) PPC_WEAK_FUNC(sub_82266E70);
PPC_FUNC_IMPL(__imp__sub_82266E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
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
	// lwz r16,15972(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15972);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82265bf0
	sub_82265BF0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82266d88
	sub_82266D88(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82266E78"))) PPC_WEAK_FUNC(sub_82266E78);
PPC_FUNC_IMPL(__imp__sub_82266E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82265bf0
	sub_82265BF0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82266d88
	sub_82266D88(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82266ECC"))) PPC_WEAK_FUNC(sub_82266ECC);
PPC_FUNC_IMPL(__imp__sub_82266ECC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,15972(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15972);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_82266ED4"))) PPC_WEAK_FUNC(sub_82266ED4);
PPC_FUNC_IMPL(__imp__sub_82266ED4) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82266F00"))) PPC_WEAK_FUNC(sub_82266F00);
PPC_FUNC_IMPL(__imp__sub_82266F00) {
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
	// lwz r16,16056(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16056);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bne cr6,0x82266fac
	if (!cr6.eq) goto loc_82266FAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82266f94
	if (!cr0.gt) goto loc_82266F94;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82266F60:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82266f60
	if (cr6.lt) goto loc_82266F60;
loc_82266F94:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lha r10,8(r30)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stwx r11,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, r11.u32);
	// b 0x82266fd0
	goto loc_82266FD0;
loc_82266FAC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_82266FD0:
	// lha r11,8(r25)
	r11.s64 = int16_t(PPC_LOAD_U16(r25.u32 + 8));
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x822670d4
	if (!cr6.gt) goto loc_822670D4;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// lhz r11,8(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822670d4
	if (cr6.eq) goto loc_822670D4;
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_82267010:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x822666b8
	sub_822666B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x82266cc8
	sub_82266CC8(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82265cd0
	sub_82265CD0(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822670ac
	if (cr0.eq) goto loc_822670AC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822670AC:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822670c0
	if (cr0.eq) goto loc_822670C0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822670C0:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82267010
	if (!cr6.eq) goto loc_82267010;
loc_822670D4:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82266F08"))) PPC_WEAK_FUNC(sub_82266F08);
PPC_FUNC_IMPL(__imp__sub_82266F08) {
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
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bne cr6,0x82266fac
	if (!cr6.eq) goto loc_82266FAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82266f94
	if (!cr0.gt) goto loc_82266F94;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82266F60:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82266f60
	if (cr6.lt) goto loc_82266F60;
loc_82266F94:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lha r10,8(r30)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stwx r11,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, r11.u32);
	// b 0x82266fd0
	goto loc_82266FD0;
loc_82266FAC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_82266FD0:
	// lha r11,8(r25)
	r11.s64 = int16_t(PPC_LOAD_U16(r25.u32 + 8));
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x822670d4
	if (!cr6.gt) goto loc_822670D4;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// lhz r11,8(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822670d4
	if (cr6.eq) goto loc_822670D4;
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_82267010:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x822666b8
	sub_822666B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x82266cc8
	sub_82266CC8(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82265cd0
	sub_82265CD0(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822670ac
	if (cr0.eq) goto loc_822670AC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822670AC:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822670c0
	if (cr0.eq) goto loc_822670C0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822670C0:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82267010
	if (!cr6.eq) goto loc_82267010;
loc_822670D4:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822670DC"))) PPC_WEAK_FUNC(sub_822670DC);
PPC_FUNC_IMPL(__imp__sub_822670DC) {
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

__attribute__((alias("__imp__sub_82267104"))) PPC_WEAK_FUNC(sub_82267104);
PPC_FUNC_IMPL(__imp__sub_82267104) {
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

__attribute__((alias("__imp__sub_8226712C"))) PPC_WEAK_FUNC(sub_8226712C);
PPC_FUNC_IMPL(__imp__sub_8226712C) {
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
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
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

__attribute__((alias("__imp__sub_82267154"))) PPC_WEAK_FUNC(sub_82267154);
PPC_FUNC_IMPL(__imp__sub_82267154) {
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
	// bl 0x82265cd0
	sub_82265CD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226717C"))) PPC_WEAK_FUNC(sub_8226717C);
PPC_FUNC_IMPL(__imp__sub_8226717C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82267180"))) PPC_WEAK_FUNC(sub_82267180);
PPC_FUNC_IMPL(__imp__sub_82267180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82267190
	goto loc_82267190;
loc_8226718C:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_82267190:
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
	// bne 0x8226718c
	if (!cr0.eq) goto loc_8226718C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
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

__attribute__((alias("__imp__sub_822671C4"))) PPC_WEAK_FUNC(sub_822671C4);
PPC_FUNC_IMPL(__imp__sub_822671C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822671C8"))) PPC_WEAK_FUNC(sub_822671C8);
PPC_FUNC_IMPL(__imp__sub_822671C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82266d30
	sub_82266D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822671CC"))) PPC_WEAK_FUNC(sub_822671CC);
PPC_FUNC_IMPL(__imp__sub_822671CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822671D0"))) PPC_WEAK_FUNC(sub_822671D0);
PPC_FUNC_IMPL(__imp__sub_822671D0) {
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
	// lwz r16,16220(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16220);
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
	// blt cr6,0x8226722c
	if (cr6.lt) goto loc_8226722C;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_8226722C:
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
	// bl 0x82265b30
	sub_82265B30(ctx, base);
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
	// bne cr6,0x82267290
	if (!cr6.eq) goto loc_82267290;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82267288
	if (cr6.eq) goto loc_82267288;
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
loc_82267288:
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// b 0x822672a8
	goto loc_822672A8;
loc_82267290:
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
loc_822672A8:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822672cc
	if (!cr0.eq) goto loc_822672CC;
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
loc_822672CC:
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
	// b 0x82267314
	goto loc_82267314;
loc_822672F4:
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
loc_82267314:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822672f4
	if (!cr0.eq) goto loc_822672F4;
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

__attribute__((alias("__imp__sub_822671D8"))) PPC_WEAK_FUNC(sub_822671D8);
PPC_FUNC_IMPL(__imp__sub_822671D8) {
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
	// blt cr6,0x8226722c
	if (cr6.lt) goto loc_8226722C;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_8226722C:
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
	// bl 0x82265b30
	sub_82265B30(ctx, base);
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
	// bne cr6,0x82267290
	if (!cr6.eq) goto loc_82267290;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82267288
	if (cr6.eq) goto loc_82267288;
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
loc_82267288:
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// b 0x822672a8
	goto loc_822672A8;
loc_82267290:
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
loc_822672A8:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822672cc
	if (!cr0.eq) goto loc_822672CC;
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
loc_822672CC:
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
	// b 0x82267314
	goto loc_82267314;
loc_822672F4:
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
loc_82267314:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822672f4
	if (!cr0.eq) goto loc_822672F4;
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

__attribute__((alias("__imp__sub_82267354"))) PPC_WEAK_FUNC(sub_82267354);
PPC_FUNC_IMPL(__imp__sub_82267354) {
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
	// lwz r16,16220(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16220);
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
	// bl 0x82261b30
	sub_82261B30(ctx, base);
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822626c0
	sub_822626C0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822623f8
	sub_822623F8(ctx, base);
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

__attribute__((alias("__imp__sub_8226735C"))) PPC_WEAK_FUNC(sub_8226735C);
PPC_FUNC_IMPL(__imp__sub_8226735C) {
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

__attribute__((alias("__imp__sub_82267388"))) PPC_WEAK_FUNC(sub_82267388);
PPC_FUNC_IMPL(__imp__sub_82267388) {
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
	// bl 0x82261b30
	sub_82261B30(ctx, base);
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822626c0
	sub_822626C0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822623f8
	sub_822623F8(ctx, base);
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

__attribute__((alias("__imp__sub_822673EC"))) PPC_WEAK_FUNC(sub_822673EC);
PPC_FUNC_IMPL(__imp__sub_822673EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822673F0"))) PPC_WEAK_FUNC(sub_822673F0);
PPC_FUNC_IMPL(__imp__sub_822673F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x8226742c
	goto loc_8226742C;
loc_8226740C:
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x82266e08
	sub_82266E08(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8226742C:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8226740c
	if (!cr6.eq) goto loc_8226740C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82267444"))) PPC_WEAK_FUNC(sub_82267444);
PPC_FUNC_IMPL(__imp__sub_82267444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82267448"))) PPC_WEAK_FUNC(sub_82267448);
PPC_FUNC_IMPL(__imp__sub_82267448) {
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
	// lwz r30,0(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82266e78
	sub_82266E78(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_822674A0"))) PPC_WEAK_FUNC(sub_822674A0);
PPC_FUNC_IMPL(__imp__sub_822674A0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82266038
	sub_82266038(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82267448
	sub_82267448(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x82267518
	goto loc_82267518;
loc_82267510:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82267518:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82267510
	if (!cr6.eq) goto loc_82267510;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwzx r11,r10,r9
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82267544"))) PPC_WEAK_FUNC(sub_82267544);
PPC_FUNC_IMPL(__imp__sub_82267544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82267548"))) PPC_WEAK_FUNC(sub_82267548);
PPC_FUNC_IMPL(__imp__sub_82267548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82267590
	if (cr6.eq) goto loc_82267590;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82267580
	if (cr0.eq) goto loc_82267580;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
loc_82267580:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x822675a4
	goto loc_822675A4;
loc_82267590:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x822671d8
	sub_822671D8(ctx, base);
loc_822675A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822675B4"))) PPC_WEAK_FUNC(sub_822675B4);
PPC_FUNC_IMPL(__imp__sub_822675B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822675B8"))) PPC_WEAK_FUNC(sub_822675B8);
PPC_FUNC_IMPL(__imp__sub_822675B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822673f0
	sub_822673F0(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// li r30,0
	r30.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x822623f8
	sub_822623F8(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
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

__attribute__((alias("__imp__sub_82267620"))) PPC_WEAK_FUNC(sub_82267620);
PPC_FUNC_IMPL(__imp__sub_82267620) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// divwu r8,r10,r11
	ctx.r8.u32 = ctx.r10.u32 / r11.u32;
	// twllei r11,0
	// mullw r11,r8,r11
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq 0x8226770c
	if (cr0.eq) goto loc_8226770C;
loc_82267694:
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subf r7,r7,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r7.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm. r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x822676fc
	if (!cr0.eq) goto loc_822676FC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne 0x82267694
	if (!cr0.eq) goto loc_82267694;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82267448
	sub_82267448(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r10,4(r30)
	PPC_STORE_U8(r30.u32 + 4, ctx.r10.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// b 0x82267728
	goto loc_82267728;
loc_822676FC:
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
	// b 0x8226772c
	goto loc_8226772C;
loc_8226770C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822674a0
	sub_822674A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r10,4(r30)
	PPC_STORE_U8(r30.u32 + 4, ctx.r10.u8);
loc_82267728:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8226772C:
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

__attribute__((alias("__imp__sub_82267748"))) PPC_WEAK_FUNC(sub_82267748);
PPC_FUNC_IMPL(__imp__sub_82267748) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82267810
	if (cr0.eq) goto loc_82267810;
	// li r27,0
	r27.s64 = 0;
loc_82267780:
	// lwzx r31,r27,r11
	r31.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// lbz r11,244(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 244);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822677f0
	if (cr0.eq) goto loc_822677F0;
	// lbz r11,246(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 246);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822677f0
	if (!cr0.eq) goto loc_822677F0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822660d8
	sub_822660D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822677f0
	if (!cr0.eq) goto loc_822677F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,76(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// bl 0x822257b8
	sub_822257B8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822677f0
	if (cr0.eq) goto loc_822677F0;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,44(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r29,32
	ctx.r3.s64 = r29.s64 + 32;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// li r26,1
	r26.s64 = 1;
	// stfs f0,44(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 44, temp.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82267548
	sub_82267548(ctx, base);
loc_822677F0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82267780
	if (!cr6.eq) goto loc_82267780;
loc_82267810:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822678bc
	if (!cr0.eq) goto loc_822678BC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822678bc
	if (cr0.eq) goto loc_822678BC;
	// li r28,0
	r28.s64 = 0;
loc_82267834:
	// lwzx r31,r28,r11
	r31.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lbz r11,244(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 244);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226789c
	if (cr0.eq) goto loc_8226789C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822660d8
	sub_822660D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226789c
	if (!cr0.eq) goto loc_8226789C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,76(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// bl 0x822257b8
	sub_822257B8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226789c
	if (cr0.eq) goto loc_8226789C;
	// li r11,0
	r11.s64 = 0;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r29,32
	ctx.r3.s64 = r29.s64 + 32;
	// stb r11,246(r31)
	PPC_STORE_U8(r31.u32 + 246, r11.u8);
	// lfs f13,44(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,44(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 44, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82267548
	sub_82267548(ctx, base);
loc_8226789C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// bne cr6,0x82267834
	if (!cr6.eq) goto loc_82267834;
loc_822678BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822678C4"))) PPC_WEAK_FUNC(sub_822678C4);
PPC_FUNC_IMPL(__imp__sub_822678C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822678C8"))) PPC_WEAK_FUNC(sub_822678C8);
PPC_FUNC_IMPL(__imp__sub_822678C8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822673f0
	sub_822673F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822678D4"))) PPC_WEAK_FUNC(sub_822678D4);
PPC_FUNC_IMPL(__imp__sub_822678D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822678D8"))) PPC_WEAK_FUNC(sub_822678D8);
PPC_FUNC_IMPL(__imp__sub_822678D8) {
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
	// lwz r16,16304(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16304);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r28,r29,8
	r28.s64 = r29.s64 + 8;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// addi r30,r27,1
	r30.s64 = r27.s64 + 1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82261640
	sub_82261640(ctx, base);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// beq cr6,0x8226795c
	if (cr6.eq) goto loc_8226795C;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82267954
	if (cr0.eq) goto loc_82267954;
	// mtctr r30
	ctr.u64 = r30.u64;
loc_82267948:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82267948
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82267948;
loc_82267954:
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r5
	r26.u64 = r11.u64 + ctx.r5.u64;
loc_8226795C:
	// addi r7,r29,4
	ctx.r7.s64 = r29.s64 + 4;
	// b 0x82267a78
	goto loc_82267A78;
loc_82267964:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// twllei r27,0
	// divwu r10,r11,r27
	ctx.r10.u32 = r11.u32 / r27.u32;
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x822679c8
	if (cr6.eq) goto loc_822679C8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x82267a78
	if (cr6.eq) goto loc_82267A78;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82267a78
	if (cr6.eq) goto loc_82267A78;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// b 0x82267a78
	goto loc_82267A78;
loc_822679C8:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x822679e0
	if (!cr6.eq) goto loc_822679E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
	// b 0x82267a30
	goto loc_82267A30;
loc_822679E0:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// b 0x82267a00
	goto loc_82267A00;
loc_822679F0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82267a0c
	if (cr6.eq) goto loc_82267A0C;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82267A00:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x822679f0
	if (cr6.eq) goto loc_822679F0;
loc_82267A0C:
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82267a24
	goto loc_82267A24;
loc_82267A1C:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82267A24:
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x82267a1c
	if (!cr6.eq) goto loc_82267A1C;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
loc_82267A30:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x82267a5c
	if (cr6.eq) goto loc_82267A5C;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82267a5c
	if (cr6.eq) goto loc_82267A5C;
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82267A5C:
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// b 0x82267a70
	goto loc_82267A70;
loc_82267A68:
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82267A70:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82267a68
	if (!cr6.eq) goto loc_82267A68;
loc_82267A78:
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82267964
	if (cr0.eq) goto loc_82267964;
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r5,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r5.u32);
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r10,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r10.u32);
	// beq 0x82267ac8
	if (cr0.eq) goto loc_82267AC8;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82267AC8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822673f0
	sub_822673F0(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822678E0"))) PPC_WEAK_FUNC(sub_822678E0);
PPC_FUNC_IMPL(__imp__sub_822678E0) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r28,r29,8
	r28.s64 = r29.s64 + 8;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// addi r30,r27,1
	r30.s64 = r27.s64 + 1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82261640
	sub_82261640(ctx, base);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// beq cr6,0x8226795c
	if (cr6.eq) goto loc_8226795C;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82267954
	if (cr0.eq) goto loc_82267954;
	// mtctr r30
	ctr.u64 = r30.u64;
loc_82267948:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82267948
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82267948;
loc_82267954:
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r5
	r26.u64 = r11.u64 + ctx.r5.u64;
loc_8226795C:
	// addi r7,r29,4
	ctx.r7.s64 = r29.s64 + 4;
	// b 0x82267a78
	goto loc_82267A78;
loc_82267964:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// twllei r27,0
	// divwu r10,r11,r27
	ctx.r10.u32 = r11.u32 / r27.u32;
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x822679c8
	if (cr6.eq) goto loc_822679C8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x82267a78
	if (cr6.eq) goto loc_82267A78;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82267a78
	if (cr6.eq) goto loc_82267A78;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// b 0x82267a78
	goto loc_82267A78;
loc_822679C8:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x822679e0
	if (!cr6.eq) goto loc_822679E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
	// b 0x82267a30
	goto loc_82267A30;
loc_822679E0:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// b 0x82267a00
	goto loc_82267A00;
loc_822679F0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82267a0c
	if (cr6.eq) goto loc_82267A0C;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82267A00:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x822679f0
	if (cr6.eq) goto loc_822679F0;
loc_82267A0C:
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82267a24
	goto loc_82267A24;
loc_82267A1C:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82267A24:
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x82267a1c
	if (!cr6.eq) goto loc_82267A1C;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
loc_82267A30:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x82267a5c
	if (cr6.eq) goto loc_82267A5C;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82267a5c
	if (cr6.eq) goto loc_82267A5C;
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82267A5C:
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// b 0x82267a70
	goto loc_82267A70;
loc_82267A68:
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82267A70:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82267a68
	if (!cr6.eq) goto loc_82267A68;
loc_82267A78:
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82267964
	if (cr0.eq) goto loc_82267964;
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r5,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r5.u32);
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r10,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r10.u32);
	// beq 0x82267ac8
	if (cr0.eq) goto loc_82267AC8;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82267AC8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822673f0
	sub_822673F0(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82267AE0"))) PPC_WEAK_FUNC(sub_82267AE0);
PPC_FUNC_IMPL(__imp__sub_82267AE0) {
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
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822678c8
	sub_822678C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82267B08"))) PPC_WEAK_FUNC(sub_82267B08);
PPC_FUNC_IMPL(__imp__sub_82267B08) {
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
	// lwz r16,16384(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16384);
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
	// bl 0x822675b8
	sub_822675B8(ctx, base);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82267b54
	if (cr0.eq) goto loc_82267B54;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82267B54:
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822673f0
	sub_822673F0(ctx, base);
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

__attribute__((alias("__imp__sub_82267B10"))) PPC_WEAK_FUNC(sub_82267B10);
PPC_FUNC_IMPL(__imp__sub_82267B10) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x822675b8
	sub_822675B8(ctx, base);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82267b54
	if (cr0.eq) goto loc_82267B54;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82267B54:
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822673f0
	sub_822673F0(ctx, base);
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

__attribute__((alias("__imp__sub_82267B7C"))) PPC_WEAK_FUNC(sub_82267B7C);
PPC_FUNC_IMPL(__imp__sub_82267B7C) {
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
	// bl 0x822678c8
	sub_822678C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82267BA8"))) PPC_WEAK_FUNC(sub_82267BA8);
PPC_FUNC_IMPL(__imp__sub_82267BA8) {
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

__attribute__((alias("__imp__sub_82267BD4"))) PPC_WEAK_FUNC(sub_82267BD4);
PPC_FUNC_IMPL(__imp__sub_82267BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82267BD8"))) PPC_WEAK_FUNC(sub_82267BD8);
PPC_FUNC_IMPL(__imp__sub_82267BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,16464(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16464);
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// lfs f0,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// bl 0x82267388
	sub_82267388(ctx, base);
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

__attribute__((alias("__imp__sub_82267BE0"))) PPC_WEAK_FUNC(sub_82267BE0);
PPC_FUNC_IMPL(__imp__sub_82267BE0) {
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// lfs f0,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// bl 0x82267388
	sub_82267388(ctx, base);
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

__attribute__((alias("__imp__sub_82267C48"))) PPC_WEAK_FUNC(sub_82267C48);
PPC_FUNC_IMPL(__imp__sub_82267C48) {
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
	// bl 0x822678c8
	sub_822678C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82267C74"))) PPC_WEAK_FUNC(sub_82267C74);
PPC_FUNC_IMPL(__imp__sub_82267C74) {
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

__attribute__((alias("__imp__sub_82267CA0"))) PPC_WEAK_FUNC(sub_82267CA0);
PPC_FUNC_IMPL(__imp__sub_82267CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrldi r11,r4,32
	r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82267d4c
	if (cr6.gt) goto loc_82267D4C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82267d9c
	if (!cr6.lt) goto loc_82267D9C;
loc_82267D4C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x82267d64
	if (cr6.lt) goto loc_82267D64;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
loc_82267D64:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82261b30
	sub_82261B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822678e0
	sub_822678E0(ctx, base);
loc_82267D9C:
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

__attribute__((alias("__imp__sub_82267DB0"))) PPC_WEAK_FUNC(sub_82267DB0);
PPC_FUNC_IMPL(__imp__sub_82267DB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82267b10
	sub_82267B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82267DB4"))) PPC_WEAK_FUNC(sub_82267DB4);
PPC_FUNC_IMPL(__imp__sub_82267DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82267DB8"))) PPC_WEAK_FUNC(sub_82267DB8);
PPC_FUNC_IMPL(__imp__sub_82267DB8) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,16536(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16536);
	// mflr r12
	// bl 0x8239bcfc
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
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82267df0
	if (cr0.eq) goto loc_82267DF0;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
loc_82267DF0:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82267e0c
	if (cr0.eq) goto loc_82267E0C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82267E0C:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,27088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82267e44
	if (cr0.eq) goto loc_82267E44;
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
loc_82267E44:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82267e68
	if (cr0.eq) goto loc_82267E68;
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
loc_82267E68:
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// bl 0x82265890
	sub_82265890(ctx, base);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// b 0x82267e84
	goto loc_82267E84;
loc_82267E80:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_82267E84:
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
	// bne 0x82267e80
	if (!cr0.eq) goto loc_82267E80;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82267eb8
	if (cr6.eq) goto loc_82267EB8;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82267EB8:
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82267b10
	sub_82267B10(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82267DC0"))) PPC_WEAK_FUNC(sub_82267DC0);
PPC_FUNC_IMPL(__imp__sub_82267DC0) {
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
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82267df0
	if (cr0.eq) goto loc_82267DF0;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
loc_82267DF0:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82267e0c
	if (cr0.eq) goto loc_82267E0C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82267E0C:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,27088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82267e44
	if (cr0.eq) goto loc_82267E44;
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
loc_82267E44:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82267e68
	if (cr0.eq) goto loc_82267E68;
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
loc_82267E68:
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// bl 0x82265890
	sub_82265890(ctx, base);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// b 0x82267e84
	goto loc_82267E84;
loc_82267E80:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_82267E84:
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
	// bne 0x82267e80
	if (!cr0.eq) goto loc_82267E80;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82267eb8
	if (cr6.eq) goto loc_82267EB8;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82267EB8:
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82267b10
	sub_82267B10(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82267EC8"))) PPC_WEAK_FUNC(sub_82267EC8);
PPC_FUNC_IMPL(__imp__sub_82267EC8) {
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
	// bl 0x82267db0
	sub_82267DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82267EF4"))) PPC_WEAK_FUNC(sub_82267EF4);
PPC_FUNC_IMPL(__imp__sub_82267EF4) {
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
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
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

__attribute__((alias("__imp__sub_82267F20"))) PPC_WEAK_FUNC(sub_82267F20);
PPC_FUNC_IMPL(__imp__sub_82267F20) {
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
	// addi r3,r11,68
	ctx.r3.s64 = r11.s64 + 68;
	// bl 0x82265cc0
	sub_82265CC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82267F4C"))) PPC_WEAK_FUNC(sub_82267F4C);
PPC_FUNC_IMPL(__imp__sub_82267F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82267F50"))) PPC_WEAK_FUNC(sub_82267F50);
PPC_FUNC_IMPL(__imp__sub_82267F50) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x82267ca0
	sub_82267CA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82267620
	sub_82267620(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
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

__attribute__((alias("__imp__sub_82267FA8"))) PPC_WEAK_FUNC(sub_82267FA8);
PPC_FUNC_IMPL(__imp__sub_82267FA8) {
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
	// lwz r16,16656(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16656);
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,100
	ctx.r4.s64 = 100;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// stb r11,52(r30)
	PPC_STORE_U8(r30.u32 + 52, r11.u8);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// stfs f0,60(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
	// bne cr6,0x82268028
	if (!cr6.eq) goto loc_82268028;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// b 0x82268038
	goto loc_82268038;
loc_82268028:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82268038:
	// stw r10,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r10.u32);
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,15276
	ctx.r10.s64 = ctx.r10.s64 + 15276;
	// stw r10,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r10.u32);
	// stfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// stw r11,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r11.u32);
	// stb r9,92(r30)
	PPC_STORE_U8(r30.u32 + 92, ctx.r9.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82267FB0"))) PPC_WEAK_FUNC(sub_82267FB0);
PPC_FUNC_IMPL(__imp__sub_82267FB0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,100
	ctx.r4.s64 = 100;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// stb r11,52(r30)
	PPC_STORE_U8(r30.u32 + 52, r11.u8);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// stfs f0,60(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
	// bne cr6,0x82268028
	if (!cr6.eq) goto loc_82268028;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// b 0x82268038
	goto loc_82268038;
loc_82268028:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82268038:
	// stw r10,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r10.u32);
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,15276
	ctx.r10.s64 = ctx.r10.s64 + 15276;
	// stw r10,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r10.u32);
	// stfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// stw r11,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r11.u32);
	// stb r9,92(r30)
	PPC_STORE_U8(r30.u32 + 92, ctx.r9.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8226806C"))) PPC_WEAK_FUNC(sub_8226806C);
PPC_FUNC_IMPL(__imp__sub_8226806C) {
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
	// bl 0x82267db0
	sub_82267DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82268098"))) PPC_WEAK_FUNC(sub_82268098);
PPC_FUNC_IMPL(__imp__sub_82268098) {
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
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
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

__attribute__((alias("__imp__sub_822680C4"))) PPC_WEAK_FUNC(sub_822680C4);
PPC_FUNC_IMPL(__imp__sub_822680C4) {
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

__attribute__((alias("__imp__sub_822680EC"))) PPC_WEAK_FUNC(sub_822680EC);
PPC_FUNC_IMPL(__imp__sub_822680EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822680F0"))) PPC_WEAK_FUNC(sub_822680F0);
PPC_FUNC_IMPL(__imp__sub_822680F0) {
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
	// lwz r16,16720(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16720);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x82266828
	sub_82266828(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82268180
	if (cr0.eq) goto loc_82268180;
	// mr r27,r28
	r27.u64 = r28.u64;
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// li r11,3
	r11.s64 = 3;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82266a60
	sub_82266A60(ctx, base);
	// li r28,7
	r28.s64 = 7;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x82267f50
	sub_82267F50(ctx, base);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// b 0x82268188
	goto loc_82268188;
loc_82268180:
	// lwz r27,88(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
loc_82268188:
	// rlwinm. r11,r28,0,29,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822681b8
	if (cr0.eq) goto loc_822681B8;
	// rlwinm r28,r28,0,30,28
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq cr6,0x822681b8
	if (cr6.eq) goto loc_822681B8;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822681B8:
	// rlwinm. r11,r28,0,30,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822681e0
	if (cr0.eq) goto loc_822681E0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x822681e0
	if (cr6.eq) goto loc_822681E0;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822681E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822680F8"))) PPC_WEAK_FUNC(sub_822680F8);
PPC_FUNC_IMPL(__imp__sub_822680F8) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x82266828
	sub_82266828(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82268180
	if (cr0.eq) goto loc_82268180;
	// mr r27,r28
	r27.u64 = r28.u64;
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// li r11,3
	r11.s64 = 3;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82266a60
	sub_82266A60(ctx, base);
	// li r28,7
	r28.s64 = 7;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x82267f50
	sub_82267F50(ctx, base);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// b 0x82268188
	goto loc_82268188;
loc_82268180:
	// lwz r27,88(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
loc_82268188:
	// rlwinm. r11,r28,0,29,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822681b8
	if (cr0.eq) goto loc_822681B8;
	// rlwinm r28,r28,0,30,28
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq cr6,0x822681b8
	if (cr6.eq) goto loc_822681B8;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822681B8:
	// rlwinm. r11,r28,0,30,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822681e0
	if (cr0.eq) goto loc_822681E0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x822681e0
	if (cr6.eq) goto loc_822681E0;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822681E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822681EC"))) PPC_WEAK_FUNC(sub_822681EC);
PPC_FUNC_IMPL(__imp__sub_822681EC) {
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
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226821c
	if (cr0.eq) goto loc_8226821C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8269a918
	sub_8269A918(ctx, base);
loc_8226821C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226822C"))) PPC_WEAK_FUNC(sub_8226822C);
PPC_FUNC_IMPL(__imp__sub_8226822C) {
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
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226825c
	if (cr0.eq) goto loc_8226825C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82261a30
	sub_82261A30(ctx, base);
loc_8226825C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226826C"))) PPC_WEAK_FUNC(sub_8226826C);
PPC_FUNC_IMPL(__imp__sub_8226826C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82268270"))) PPC_WEAK_FUNC(sub_82268270);
PPC_FUNC_IMPL(__imp__sub_82268270) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822675b8
	sub_822675B8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822459b8
	sub_822459B8(ctx, base);
	// b 0x822682d4
	goto loc_822682D4;
loc_822682A8:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r31,r1,84
	r31.s64 = ctx.r1.s64 + 84;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822680f8
	sub_822680F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82266c60
	sub_82266C60(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82245a38
	sub_82245A38(ctx, base);
loc_822682D4:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x822682a8
	if (!cr6.eq) goto loc_822682A8;
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

__attribute__((alias("__imp__sub_822682F8"))) PPC_WEAK_FUNC(sub_822682F8);
PPC_FUNC_IMPL(__imp__sub_822682F8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r8,r30,32
	ctx.r8.s64 = r30.s64 + 32;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82268364
	if (cr6.eq) goto loc_82268364;
	// subf r9,r11,r11
	ctx.r9.s64 = r11.s64 - r11.s64;
	// srawi. r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x82268360
	if (!cr0.gt) goto loc_82268360;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82268340:
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
	// bgt 0x82268340
	if (cr0.gt) goto loc_82268340;
loc_82268360:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_82268364:
	// lis r27,-32140
	r27.s64 = -2106327040;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,18972(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 18972);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822683b4
	if (cr0.eq) goto loc_822683B4;
	// lwz r31,8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x8226839c
	goto loc_8226839C;
loc_82268388:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82267748
	sub_82267748(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8226839C:
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82268388
	if (!cr0.eq) goto loc_82268388;
	// b 0x822683fc
	goto loc_822683FC;
loc_822683B4:
	// li r31,0
	r31.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
loc_822683C0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822680f8
	sub_822680F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x82267748
	sub_82267748(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// lwz r11,18972(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 18972);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822683c0
	if (cr0.eq) goto loc_822683C0;
loc_822683FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822662c0
	sub_822662C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8226840C"))) PPC_WEAK_FUNC(sub_8226840C);
PPC_FUNC_IMPL(__imp__sub_8226840C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82268410"))) PPC_WEAK_FUNC(sub_82268410);
PPC_FUNC_IMPL(__imp__sub_82268410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,16816(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16816);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-688
	r31.s64 = ctx.r1.s64 + -688;
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lis r28,-32140
	r28.s64 = -2106327040;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// stw r26,708(r31)
	PPC_STORE_U32(r31.u32 + 708, r26.u32);
	// li r11,128
	r11.s64 = 128;
	// lwz r9,18972(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 18972);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82268454:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82268454
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82268454;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// std r27,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r27.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82266f08
	sub_82266F08(ctx, base);
	// lwz r11,18972(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18972);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82268520
	if (cr0.eq) goto loc_82268520;
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// b 0x822684d0
	goto loc_822684D0;
loc_822684B0:
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82266370
	sub_82266370(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82268508
	if (!cr0.eq) goto loc_82268508;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_822684D0:
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822684b0
	if (!cr0.eq) goto loc_822684B0;
loc_822684E4:
	// li r11,1
	r11.s64 = 1;
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// stw r27,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r27.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
loc_822684F8:
	// bl 0x82266d30
	sub_82266D30(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r31,688
	ctx.r1.s64 = r31.s64 + 688;
	// b 0x8239bd38
	return;
loc_82268508:
	// li r11,1
	r11.s64 = 1;
	// stw r27,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r27.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_82268518:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// b 0x822684f8
	goto loc_822684F8;
loc_82268520:
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r25,r29,4
	r25.s64 = r29.s64 + 4;
loc_8226852C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r24,r31,80
	r24.s64 = r31.s64 + 80;
	// bl 0x822680f8
	sub_822680F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x82266370
	sub_82266370(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226857c
	if (!cr0.eq) goto loc_8226857C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,18972(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18972);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226852c
	if (cr0.eq) goto loc_8226852C;
	// b 0x822684e4
	goto loc_822684E4;
loc_8226857C:
	// li r11,1
	r11.s64 = 1;
	// stw r27,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r27.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// b 0x82268518
	goto loc_82268518;
}

__attribute__((alias("__imp__sub_82268418"))) PPC_WEAK_FUNC(sub_82268418);
PPC_FUNC_IMPL(__imp__sub_82268418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-688
	r31.s64 = ctx.r1.s64 + -688;
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lis r28,-32140
	r28.s64 = -2106327040;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// stw r26,708(r31)
	PPC_STORE_U32(r31.u32 + 708, r26.u32);
	// li r11,128
	r11.s64 = 128;
	// lwz r9,18972(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 18972);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82268454:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82268454
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82268454;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// std r27,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r27.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82266f08
	sub_82266F08(ctx, base);
	// lwz r11,18972(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18972);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82268520
	if (cr0.eq) goto loc_82268520;
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// b 0x822684d0
	goto loc_822684D0;
loc_822684B0:
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82266370
	sub_82266370(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82268508
	if (!cr0.eq) goto loc_82268508;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_822684D0:
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822684b0
	if (!cr0.eq) goto loc_822684B0;
loc_822684E4:
	// li r11,1
	r11.s64 = 1;
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// stw r27,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r27.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
loc_822684F8:
	// bl 0x82266d30
	sub_82266D30(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r31,688
	ctx.r1.s64 = r31.s64 + 688;
	// b 0x8239bd38
	return;
loc_82268508:
	// li r11,1
	r11.s64 = 1;
	// stw r27,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r27.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_82268518:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// b 0x822684f8
	goto loc_822684F8;
loc_82268520:
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r25,r29,4
	r25.s64 = r29.s64 + 4;
loc_8226852C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r24,r31,80
	r24.s64 = r31.s64 + 80;
	// bl 0x822680f8
	sub_822680F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x82266370
	sub_82266370(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226857c
	if (!cr0.eq) goto loc_8226857C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,18972(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18972);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226852c
	if (cr0.eq) goto loc_8226852C;
	// b 0x822684e4
	goto loc_822684E4;
loc_8226857C:
	// li r11,1
	r11.s64 = 1;
	// stw r27,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r27.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// b 0x82268518
	goto loc_82268518;
}

__attribute__((alias("__imp__sub_82268590"))) PPC_WEAK_FUNC(sub_82268590);
PPC_FUNC_IMPL(__imp__sub_82268590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-688
	r31.s64 = r12.s64 + -688;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
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

__attribute__((alias("__imp__sub_822685B8"))) PPC_WEAK_FUNC(sub_822685B8);
PPC_FUNC_IMPL(__imp__sub_822685B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-688
	r31.s64 = r12.s64 + -688;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822685e8
	if (cr0.eq) goto loc_822685E8;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r3,708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 708);
	// bl 0x82120868
	sub_82120868(ctx, base);
loc_822685E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822685F8"))) PPC_WEAK_FUNC(sub_822685F8);
PPC_FUNC_IMPL(__imp__sub_822685F8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822682f8
	sub_822682F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226863C"))) PPC_WEAK_FUNC(sub_8226863C);
PPC_FUNC_IMPL(__imp__sub_8226863C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82268640"))) PPC_WEAK_FUNC(sub_82268640);
PPC_FUNC_IMPL(__imp__sub_82268640) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,16968(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16968);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lbz r11,92(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82268678
	if (!cr0.eq) goto loc_82268678;
loc_82268670:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226884c
	goto loc_8226884C;
loc_82268678:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822682f8
	sub_822682F8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x822687e4
	if (!cr0.eq) goto loc_822687E4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,16932
	ctx.r4.s64 = r11.s64 + 16932;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// lis r29,-32140
	r29.s64 = -2106327040;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,18972(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18972);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r25,r11,16928
	r25.s64 = r11.s64 + 16928;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r27,r11,2836
	r27.s64 = r11.s64 + 2836;
	// bne 0x82268740
	if (!cr0.eq) goto loc_82268740;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,16920
	ctx.r4.s64 = r11.s64 + 16920;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,18972(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18972);
	// li r28,0
	r28.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82268734
	if (!cr0.eq) goto loc_82268734;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_822686FC:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82357918
	sub_82357918(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,18972(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 18972);
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822686fc
	if (cr0.eq) goto loc_822686FC;
loc_82268734:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_82268740:
	// lwz r30,0(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// subf r11,r30,r24
	r11.s64 = r24.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822687d8
	if (cr0.eq) goto loc_822687D8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r26,r11,2832
	r26.s64 = r11.s64 + 2832;
loc_82268764:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82318240
	sub_82318240(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82318240
	sub_82318240(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r30,r24
	r11.s64 = r24.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82268764
	if (!cr0.eq) goto loc_82268764;
loc_822687D8:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x82268670
	goto loc_82268670;
loc_822687E4:
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, xer);
	// beq cr6,0x82268848
	if (cr6.eq) goto loc_82268848;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82268808
	if (cr6.eq) goto loc_82268808;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82268808:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r29,68
	ctx.r3.s64 = r29.s64 + 68;
	// bl 0x82265980
	sub_82265980(ctx, base);
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821e74b8
	sub_821E74B8(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-5056
	r11.s64 = r11.s64 + -5056;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82311948
	sub_82311948(ctx, base);
	// stfs f1,80(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r29.u32 + 80, temp.u32);
loc_82268848:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8226884C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82268648"))) PPC_WEAK_FUNC(sub_82268648);
PPC_FUNC_IMPL(__imp__sub_82268648) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lbz r11,92(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82268678
	if (!cr0.eq) goto loc_82268678;
loc_82268670:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226884c
	goto loc_8226884C;
loc_82268678:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822682f8
	sub_822682F8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x822687e4
	if (!cr0.eq) goto loc_822687E4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,16932
	ctx.r4.s64 = r11.s64 + 16932;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// lis r29,-32140
	r29.s64 = -2106327040;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,18972(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18972);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r25,r11,16928
	r25.s64 = r11.s64 + 16928;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r27,r11,2836
	r27.s64 = r11.s64 + 2836;
	// bne 0x82268740
	if (!cr0.eq) goto loc_82268740;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,16920
	ctx.r4.s64 = r11.s64 + 16920;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,18972(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18972);
	// li r28,0
	r28.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82268734
	if (!cr0.eq) goto loc_82268734;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_822686FC:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82357918
	sub_82357918(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,18972(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 18972);
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822686fc
	if (cr0.eq) goto loc_822686FC;
loc_82268734:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_82268740:
	// lwz r30,0(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// subf r11,r30,r24
	r11.s64 = r24.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822687d8
	if (cr0.eq) goto loc_822687D8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r26,r11,2832
	r26.s64 = r11.s64 + 2832;
loc_82268764:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82318240
	sub_82318240(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82318240
	sub_82318240(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r30,r24
	r11.s64 = r24.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82268764
	if (!cr0.eq) goto loc_82268764;
loc_822687D8:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x82268670
	goto loc_82268670;
loc_822687E4:
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, xer);
	// beq cr6,0x82268848
	if (cr6.eq) goto loc_82268848;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82268808
	if (cr6.eq) goto loc_82268808;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82268808:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r29,68
	ctx.r3.s64 = r29.s64 + 68;
	// bl 0x82265980
	sub_82265980(ctx, base);
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821e74b8
	sub_821E74B8(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-5056
	r11.s64 = r11.s64 + -5056;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82311948
	sub_82311948(ctx, base);
	// stfs f1,80(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r29.u32 + 80, temp.u32);
loc_82268848:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8226884C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82268854"))) PPC_WEAK_FUNC(sub_82268854);
PPC_FUNC_IMPL(__imp__sub_82268854) {
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

__attribute__((alias("__imp__sub_8226887C"))) PPC_WEAK_FUNC(sub_8226887C);
PPC_FUNC_IMPL(__imp__sub_8226887C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82268880"))) PPC_WEAK_FUNC(sub_82268880);
PPC_FUNC_IMPL(__imp__sub_82268880) {
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
	// lwz r16,17064(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17064);
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
	// lis r29,-32136
	r29.s64 = -2106064896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,15568(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15568);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r27,r10,15564
	r27.s64 = ctx.r10.s64 + 15564;
	// bne 0x822688d4
	if (!cr0.eq) goto loc_822688D4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15568(r29)
	PPC_STORE_U32(r29.u32 + 15568, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,17032
	ctx.r4.s64 = r11.s64 + 17032;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,15568(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15568);
loc_822688D4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r26,r10,15560
	r26.s64 = ctx.r10.s64 + 15560;
	// bne 0x822688fc
	if (!cr0.eq) goto loc_822688FC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,15568(r29)
	PPC_STORE_U32(r29.u32 + 15568, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,2996
	ctx.r4.s64 = r11.s64 + 2996;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822688FC:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r25,r11,-5056
	r25.s64 = r11.s64 + -5056;
	// beq 0x82268950
	if (cr0.eq) goto loc_82268950;
	// bl 0x821e74b8
	sub_821E74B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82311948
	sub_82311948(ctx, base);
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 80);
	f0.f64 = double(temp.f32);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// fsubs f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 - f0.f64));
	// bl 0x821e74d0
	sub_821E74D0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// lfs f2,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82268950:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82268960
	if (cr0.eq) goto loc_82268960;
	// bl 0x8268cd60
	sub_8268CD60(ctx, base);
loc_82268960:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82268b9c
	if (cr6.eq) goto loc_82268B9C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// bl 0x82311948
	sub_82311948(ctx, base);
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bgt cr6,0x82268b9c
	if (cr6.gt) goto loc_82268B9C;
	// b 0x822689c4
	goto loc_822689C4;
loc_82268988:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,17
	cr6.compare<int32_t>(ctx.r9.s32, 17, xer);
	// bne cr6,0x822689d8
	if (!cr6.eq) goto loc_822689D8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
loc_822689C4:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lha r11,8(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 8));
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82268988
	if (cr6.lt) goto loc_82268988;
loc_822689D8:
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lha r10,8(r4)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 8));
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82268a08
	if (cr6.lt) goto loc_82268A08;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82268b9c
	if (cr6.eq) goto loc_82268B9C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// b 0x82268b9c
	goto loc_82268B9C;
loc_82268A08:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r28,0
	r28.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// beq 0x82268a7c
	if (cr0.eq) goto loc_82268A7C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82265ad8
	sub_82265AD8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822663f0
	sub_822663F0(ctx, base);
	// b 0x82268b1c
	goto loc_82268B1C;
loc_82268A7C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82268b1c
	if (cr0.eq) goto loc_82268B1C;
	// lis r28,-32140
	r28.s64 = -2106327040;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// addi r10,r31,104
	ctx.r10.s64 = r31.s64 + 104;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,18972(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18972);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// lwz r10,18972(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 18972);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,96(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// std r11,96(r31)
	PPC_STORE_U64(r31.u32 + 96, r11.u64);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82268648
	sub_82268648(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82266d30
	sub_82266D30(ctx, base);
loc_82268B1C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f31,240(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 240);
	f31.f64 = double(temp.f32);
	// bl 0x821e74b8
	sub_821E74B8(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r3.u32);
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x82268b4c
	if (!cr6.gt) goto loc_82268B4C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
loc_82268B4C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bne cr6,0x82268b68
	if (!cr6.eq) goto loc_82268B68;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	f0.f64 = double(temp.f32);
	// b 0x82268b8c
	goto loc_82268B8C;
loc_82268B68:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// bl 0x82311948
	sub_82311948(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f1,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
	// bl 0x821e74d0
	sub_821E74D0(ctx, base);
	// fdivs f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 / ctx.f1.f64));
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
loc_82268B8C:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
loc_82268B9C:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82268888"))) PPC_WEAK_FUNC(sub_82268888);
PPC_FUNC_IMPL(__imp__sub_82268888) {
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
	// lis r29,-32136
	r29.s64 = -2106064896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,15568(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15568);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r27,r10,15564
	r27.s64 = ctx.r10.s64 + 15564;
	// bne 0x822688d4
	if (!cr0.eq) goto loc_822688D4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15568(r29)
	PPC_STORE_U32(r29.u32 + 15568, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,17032
	ctx.r4.s64 = r11.s64 + 17032;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,15568(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15568);
loc_822688D4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r26,r10,15560
	r26.s64 = ctx.r10.s64 + 15560;
	// bne 0x822688fc
	if (!cr0.eq) goto loc_822688FC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,15568(r29)
	PPC_STORE_U32(r29.u32 + 15568, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,2996
	ctx.r4.s64 = r11.s64 + 2996;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822688FC:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r25,r11,-5056
	r25.s64 = r11.s64 + -5056;
	// beq 0x82268950
	if (cr0.eq) goto loc_82268950;
	// bl 0x821e74b8
	sub_821E74B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82311948
	sub_82311948(ctx, base);
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 80);
	f0.f64 = double(temp.f32);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// fsubs f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 - f0.f64));
	// bl 0x821e74d0
	sub_821E74D0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// lfs f2,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82268950:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82268960
	if (cr0.eq) goto loc_82268960;
	// bl 0x8268cd60
	sub_8268CD60(ctx, base);
loc_82268960:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82268b9c
	if (cr6.eq) goto loc_82268B9C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// bl 0x82311948
	sub_82311948(ctx, base);
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bgt cr6,0x82268b9c
	if (cr6.gt) goto loc_82268B9C;
	// b 0x822689c4
	goto loc_822689C4;
loc_82268988:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,17
	cr6.compare<int32_t>(ctx.r9.s32, 17, xer);
	// bne cr6,0x822689d8
	if (!cr6.eq) goto loc_822689D8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
loc_822689C4:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lha r11,8(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 8));
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82268988
	if (cr6.lt) goto loc_82268988;
loc_822689D8:
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lha r10,8(r4)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 8));
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82268a08
	if (cr6.lt) goto loc_82268A08;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82268b9c
	if (cr6.eq) goto loc_82268B9C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// b 0x82268b9c
	goto loc_82268B9C;
loc_82268A08:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r28,0
	r28.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// beq 0x82268a7c
	if (cr0.eq) goto loc_82268A7C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82265ad8
	sub_82265AD8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822663f0
	sub_822663F0(ctx, base);
	// b 0x82268b1c
	goto loc_82268B1C;
loc_82268A7C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82268b1c
	if (cr0.eq) goto loc_82268B1C;
	// lis r28,-32140
	r28.s64 = -2106327040;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// addi r10,r31,104
	ctx.r10.s64 = r31.s64 + 104;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,18972(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18972);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// lwz r10,18972(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 18972);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,96(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// std r11,96(r31)
	PPC_STORE_U64(r31.u32 + 96, r11.u64);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82268648
	sub_82268648(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82266d30
	sub_82266D30(ctx, base);
loc_82268B1C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f31,240(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 240);
	f31.f64 = double(temp.f32);
	// bl 0x821e74b8
	sub_821E74B8(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r3.u32);
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x82268b4c
	if (!cr6.gt) goto loc_82268B4C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
loc_82268B4C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bne cr6,0x82268b68
	if (!cr6.eq) goto loc_82268B68;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	f0.f64 = double(temp.f32);
	// b 0x82268b8c
	goto loc_82268B8C;
loc_82268B68:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// bl 0x82311948
	sub_82311948(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f1,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
	// bl 0x821e74d0
	sub_821E74D0(ctx, base);
	// fdivs f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 / ctx.f1.f64));
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
loc_82268B8C:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
loc_82268B9C:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82268BA8"))) PPC_WEAK_FUNC(sub_82268BA8);
PPC_FUNC_IMPL(__imp__sub_82268BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15568
	r11.s64 = r11.s64 + 15568;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15568
	ctx.r10.s64 = ctx.r10.s64 + 15568;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82268BD0"))) PPC_WEAK_FUNC(sub_82268BD0);
PPC_FUNC_IMPL(__imp__sub_82268BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15568
	r11.s64 = r11.s64 + 15568;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15568
	ctx.r10.s64 = ctx.r10.s64 + 15568;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82268BF8"))) PPC_WEAK_FUNC(sub_82268BF8);
PPC_FUNC_IMPL(__imp__sub_82268BF8) {
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

__attribute__((alias("__imp__sub_82268C20"))) PPC_WEAK_FUNC(sub_82268C20);
PPC_FUNC_IMPL(__imp__sub_82268C20) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82268c50
	if (cr0.eq) goto loc_82268C50;
	// bl 0x8268cba0
	sub_8268CBA0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82268c68
	if (!cr0.eq) goto loc_82268C68;
loc_82268C50:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82268c70
	if (cr0.eq) goto loc_82268C70;
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82268c70
	if (cr0.eq) goto loc_82268C70;
loc_82268C68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82268c94
	goto loc_82268C94;
loc_82268C70:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82268c84
	if (cr6.eq) goto loc_82268C84;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_82268C84:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82268648
	sub_82268648(ctx, base);
loc_82268C94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82268C9C"))) PPC_WEAK_FUNC(sub_82268C9C);
PPC_FUNC_IMPL(__imp__sub_82268C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82268CA0"))) PPC_WEAK_FUNC(sub_82268CA0);
PPC_FUNC_IMPL(__imp__sub_82268CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,17184(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17184);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-656
	r31.s64 = ctx.r1.s64 + -656;
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// lwz r9,18972(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// li r11,128
	r11.s64 = 128;
	// stw r28,676(r31)
	PPC_STORE_U32(r31.u32 + 676, r28.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82268CE4:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82268ce4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82268CE4;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// std r29,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r29.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82266f08
	sub_82266F08(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82268c20
	sub_82268C20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82268d48
	if (cr0.eq) goto loc_82268D48;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r29,r11,4
	r29.s64 = r11.s64 + 4;
loc_82268D48:
	// li r11,4
	r11.s64 = 4;
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82266d30
	sub_82266D30(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,656
	ctx.r1.s64 = r31.s64 + 656;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82268CA8"))) PPC_WEAK_FUNC(sub_82268CA8);
PPC_FUNC_IMPL(__imp__sub_82268CA8) {
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
	// addi r31,r1,-656
	r31.s64 = ctx.r1.s64 + -656;
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// lwz r9,18972(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// li r11,128
	r11.s64 = 128;
	// stw r28,676(r31)
	PPC_STORE_U32(r31.u32 + 676, r28.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82268CE4:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82268ce4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82268CE4;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// std r29,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r29.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82266f08
	sub_82266F08(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82268c20
	sub_82268C20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82268d48
	if (cr0.eq) goto loc_82268D48;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r29,r11,4
	r29.s64 = r11.s64 + 4;
loc_82268D48:
	// li r11,4
	r11.s64 = 4;
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82266d30
	sub_82266D30(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,656
	ctx.r1.s64 = r31.s64 + 656;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82268D70"))) PPC_WEAK_FUNC(sub_82268D70);
PPC_FUNC_IMPL(__imp__sub_82268D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-656
	r31.s64 = r12.s64 + -656;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
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

__attribute__((alias("__imp__sub_82268D98"))) PPC_WEAK_FUNC(sub_82268D98);
PPC_FUNC_IMPL(__imp__sub_82268D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-656
	r31.s64 = r12.s64 + -656;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82268dc8
	if (cr0.eq) goto loc_82268DC8;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r3,676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 676);
	// bl 0x82120868
	sub_82120868(ctx, base);
loc_82268DC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82268DD8"))) PPC_WEAK_FUNC(sub_82268DD8);
PPC_FUNC_IMPL(__imp__sub_82268DD8) {
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
	// lwz r16,17536(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17536);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
	// clrlwi. r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15608
	r29.s64 = r11.s64 + 15608;
	// bne 0x82268e48
	if (!cr0.eq) goto loc_82268E48;
	// ori r11,r10,1
	r11.u64 = ctx.r10.u64 | 1;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17384
	ctx.r4.s64 = r11.s64 + 17384;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82268E48:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82268ea4
	if (cr0.eq) goto loc_82268EA4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82268ca8
	sub_82268CA8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82268ea0
	if (cr6.eq) goto loc_82268EA0;
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
	// beq 0x82269314
	if (cr0.eq) goto loc_82269314;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82268E98:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82269314
	goto loc_82269314;
loc_82268EA0:
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82268EA4:
	// rlwinm. r11,r10,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15604
	r29.s64 = r11.s64 + 15604;
	// bne 0x82268ed0
	if (!cr0.eq) goto loc_82268ED0;
	// ori r11,r10,2
	r11.u64 = ctx.r10.u64 | 2;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17372
	ctx.r4.s64 = r11.s64 + 17372;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82268ED0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82268f28
	if (cr0.eq) goto loc_82268F28;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82266a10
	sub_82266A10(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82268f24
	if (cr6.eq) goto loc_82268F24;
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
	// beq 0x82269314
	if (cr0.eq) goto loc_82269314;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82268e98
	goto loc_82268E98;
loc_82268F24:
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82268F28:
	// rlwinm. r11,r10,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15600
	r29.s64 = r11.s64 + 15600;
	// bne 0x82268f54
	if (!cr0.eq) goto loc_82268F54;
	// ori r11,r10,4
	r11.u64 = ctx.r10.u64 | 4;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17348
	ctx.r4.s64 = r11.s64 + 17348;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82268F54:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82268fac
	if (cr0.eq) goto loc_82268FAC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82265d58
	sub_82265D58(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82268fa8
	if (cr6.eq) goto loc_82268FA8;
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
	// beq 0x82269314
	if (cr0.eq) goto loc_82269314;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82268e98
	goto loc_82268E98;
loc_82268FA8:
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82268FAC:
	// rlwinm. r11,r10,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15596
	r29.s64 = r11.s64 + 15596;
	// bne 0x82268fd8
	if (!cr0.eq) goto loc_82268FD8;
	// ori r11,r10,8
	r11.u64 = ctx.r10.u64 | 8;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17332
	ctx.r4.s64 = r11.s64 + 17332;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82268FD8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269028
	if (cr0.eq) goto loc_82269028;
	// lwz r11,76(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 76);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82269004
	if (!cr0.eq) goto loc_82269004;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82269014
	goto loc_82269014;
loc_82269004:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82269014:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// b 0x82269318
	goto loc_82269318;
loc_82269028:
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15592
	r29.s64 = r11.s64 + 15592;
	// bne 0x82269054
	if (!cr0.eq) goto loc_82269054;
	// ori r11,r10,16
	r11.u64 = ctx.r10.u64 | 16;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17316
	ctx.r4.s64 = r11.s64 + 17316;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82269054:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269098
	if (cr0.eq) goto loc_82269098;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82266490
	sub_82266490(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
loc_8226908C:
	// stw r25,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r25.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// b 0x82269314
	goto loc_82269314;
loc_82269098:
	// rlwinm. r11,r10,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15588
	r29.s64 = r11.s64 + 15588;
	// bne 0x822690c4
	if (!cr0.eq) goto loc_822690C4;
	// ori r11,r10,32
	r11.u64 = ctx.r10.u64 | 32;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17300
	ctx.r4.s64 = r11.s64 + 17300;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_822690C4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269104
	if (cr0.eq) goto loc_82269104;
	// lwz r3,84(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 84);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822690f8
	if (cr0.eq) goto loc_822690F8;
	// bl 0x8268cba0
	sub_8268CBA0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x822690fc
	if (!cr0.eq) goto loc_822690FC;
loc_822690F8:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_822690FC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// b 0x8226908c
	goto loc_8226908C;
loc_82269104:
	// rlwinm. r11,r10,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15584
	r29.s64 = r11.s64 + 15584;
	// bne 0x82269130
	if (!cr0.eq) goto loc_82269130;
	// ori r11,r10,64
	r11.u64 = ctx.r10.u64 | 64;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17288
	ctx.r4.s64 = r11.s64 + 17288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82269130:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269188
	if (cr0.eq) goto loc_82269188;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82266958
	sub_82266958(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82269184
	if (cr6.eq) goto loc_82269184;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269314
	if (cr0.eq) goto loc_82269314;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x82268e98
	goto loc_82268E98;
loc_82269184:
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82269188:
	// rlwinm. r11,r10,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15580
	r29.s64 = r11.s64 + 15580;
	// bne 0x822691b4
	if (!cr0.eq) goto loc_822691B4;
	// ori r11,r10,128
	r11.u64 = ctx.r10.u64 | 128;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17268
	ctx.r4.s64 = r11.s64 + 17268;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_822691B4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269208
	if (cr0.eq) goto loc_82269208;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82265e20
	sub_82265E20(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82269208
	if (cr6.eq) goto loc_82269208;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269314
	if (cr0.eq) goto loc_82269314;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x82268e98
	goto loc_82268E98;
loc_82269208:
	// rlwinm. r11,r10,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15576
	r29.s64 = r11.s64 + 15576;
	// bne 0x82269234
	if (!cr0.eq) goto loc_82269234;
	// ori r11,r10,256
	r11.u64 = ctx.r10.u64 | 256;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17252
	ctx.r4.s64 = r11.s64 + 17252;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82269234:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226928c
	if (cr0.eq) goto loc_8226928C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82265e48
	sub_82265E48(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82269288
	if (cr6.eq) goto loc_82269288;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269314
	if (cr0.eq) goto loc_82269314;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x82268e98
	goto loc_82268E98;
loc_82269288:
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_8226928C:
	// rlwinm. r11,r10,0,22,22
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15572
	r29.s64 = r11.s64 + 15572;
	// bne 0x822692b4
	if (!cr0.eq) goto loc_822692B4;
	// ori r11,r10,512
	r11.u64 = ctx.r10.u64 | 512;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17240
	ctx.r4.s64 = r11.s64 + 17240;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822692B4:
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
	// beq 0x82269308
	if (cr0.eq) goto loc_82269308;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x82268418
	sub_82268418(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82269308
	if (cr6.eq) goto loc_82269308;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269314
	if (cr0.eq) goto loc_82269314;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x82268e98
	goto loc_82268E98;
loc_82269308:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r25.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_82269314:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82269318:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82268DE0"))) PPC_WEAK_FUNC(sub_82268DE0);
PPC_FUNC_IMPL(__imp__sub_82268DE0) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
	// clrlwi. r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15608
	r29.s64 = r11.s64 + 15608;
	// bne 0x82268e48
	if (!cr0.eq) goto loc_82268E48;
	// ori r11,r10,1
	r11.u64 = ctx.r10.u64 | 1;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17384
	ctx.r4.s64 = r11.s64 + 17384;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82268E48:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82268ea4
	if (cr0.eq) goto loc_82268EA4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82268ca8
	sub_82268CA8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82268ea0
	if (cr6.eq) goto loc_82268EA0;
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
	// beq 0x82269314
	if (cr0.eq) goto loc_82269314;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82268E98:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82269314
	goto loc_82269314;
loc_82268EA0:
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82268EA4:
	// rlwinm. r11,r10,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15604
	r29.s64 = r11.s64 + 15604;
	// bne 0x82268ed0
	if (!cr0.eq) goto loc_82268ED0;
	// ori r11,r10,2
	r11.u64 = ctx.r10.u64 | 2;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17372
	ctx.r4.s64 = r11.s64 + 17372;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82268ED0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82268f28
	if (cr0.eq) goto loc_82268F28;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82266a10
	sub_82266A10(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82268f24
	if (cr6.eq) goto loc_82268F24;
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
	// beq 0x82269314
	if (cr0.eq) goto loc_82269314;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82268e98
	goto loc_82268E98;
loc_82268F24:
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82268F28:
	// rlwinm. r11,r10,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15600
	r29.s64 = r11.s64 + 15600;
	// bne 0x82268f54
	if (!cr0.eq) goto loc_82268F54;
	// ori r11,r10,4
	r11.u64 = ctx.r10.u64 | 4;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17348
	ctx.r4.s64 = r11.s64 + 17348;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82268F54:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82268fac
	if (cr0.eq) goto loc_82268FAC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82265d58
	sub_82265D58(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82268fa8
	if (cr6.eq) goto loc_82268FA8;
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
	// beq 0x82269314
	if (cr0.eq) goto loc_82269314;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82268e98
	goto loc_82268E98;
loc_82268FA8:
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82268FAC:
	// rlwinm. r11,r10,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15596
	r29.s64 = r11.s64 + 15596;
	// bne 0x82268fd8
	if (!cr0.eq) goto loc_82268FD8;
	// ori r11,r10,8
	r11.u64 = ctx.r10.u64 | 8;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17332
	ctx.r4.s64 = r11.s64 + 17332;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82268FD8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269028
	if (cr0.eq) goto loc_82269028;
	// lwz r11,76(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 76);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82269004
	if (!cr0.eq) goto loc_82269004;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82269014
	goto loc_82269014;
loc_82269004:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82269014:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// b 0x82269318
	goto loc_82269318;
loc_82269028:
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15592
	r29.s64 = r11.s64 + 15592;
	// bne 0x82269054
	if (!cr0.eq) goto loc_82269054;
	// ori r11,r10,16
	r11.u64 = ctx.r10.u64 | 16;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17316
	ctx.r4.s64 = r11.s64 + 17316;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82269054:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269098
	if (cr0.eq) goto loc_82269098;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82266490
	sub_82266490(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
loc_8226908C:
	// stw r25,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r25.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// b 0x82269314
	goto loc_82269314;
loc_82269098:
	// rlwinm. r11,r10,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15588
	r29.s64 = r11.s64 + 15588;
	// bne 0x822690c4
	if (!cr0.eq) goto loc_822690C4;
	// ori r11,r10,32
	r11.u64 = ctx.r10.u64 | 32;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17300
	ctx.r4.s64 = r11.s64 + 17300;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_822690C4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269104
	if (cr0.eq) goto loc_82269104;
	// lwz r3,84(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 84);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822690f8
	if (cr0.eq) goto loc_822690F8;
	// bl 0x8268cba0
	sub_8268CBA0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x822690fc
	if (!cr0.eq) goto loc_822690FC;
loc_822690F8:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_822690FC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// b 0x8226908c
	goto loc_8226908C;
loc_82269104:
	// rlwinm. r11,r10,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15584
	r29.s64 = r11.s64 + 15584;
	// bne 0x82269130
	if (!cr0.eq) goto loc_82269130;
	// ori r11,r10,64
	r11.u64 = ctx.r10.u64 | 64;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17288
	ctx.r4.s64 = r11.s64 + 17288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82269130:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269188
	if (cr0.eq) goto loc_82269188;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82266958
	sub_82266958(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82269184
	if (cr6.eq) goto loc_82269184;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269314
	if (cr0.eq) goto loc_82269314;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x82268e98
	goto loc_82268E98;
loc_82269184:
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82269188:
	// rlwinm. r11,r10,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15580
	r29.s64 = r11.s64 + 15580;
	// bne 0x822691b4
	if (!cr0.eq) goto loc_822691B4;
	// ori r11,r10,128
	r11.u64 = ctx.r10.u64 | 128;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17268
	ctx.r4.s64 = r11.s64 + 17268;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_822691B4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269208
	if (cr0.eq) goto loc_82269208;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82265e20
	sub_82265E20(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82269208
	if (cr6.eq) goto loc_82269208;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269314
	if (cr0.eq) goto loc_82269314;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x82268e98
	goto loc_82268E98;
loc_82269208:
	// rlwinm. r11,r10,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15576
	r29.s64 = r11.s64 + 15576;
	// bne 0x82269234
	if (!cr0.eq) goto loc_82269234;
	// ori r11,r10,256
	r11.u64 = ctx.r10.u64 | 256;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17252
	ctx.r4.s64 = r11.s64 + 17252;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_82269234:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226928c
	if (cr0.eq) goto loc_8226928C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82265e48
	sub_82265E48(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82269288
	if (cr6.eq) goto loc_82269288;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269314
	if (cr0.eq) goto loc_82269314;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x82268e98
	goto loc_82268E98;
loc_82269288:
	// lwz r10,15612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 15612);
loc_8226928C:
	// rlwinm. r11,r10,0,22,22
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15572
	r29.s64 = r11.s64 + 15572;
	// bne 0x822692b4
	if (!cr0.eq) goto loc_822692B4;
	// ori r11,r10,512
	r11.u64 = ctx.r10.u64 | 512;
	// stw r11,15612(r30)
	PPC_STORE_U32(r30.u32 + 15612, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17240
	ctx.r4.s64 = r11.s64 + 17240;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822692B4:
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
	// beq 0x82269308
	if (cr0.eq) goto loc_82269308;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x82268418
	sub_82268418(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82269308
	if (cr6.eq) goto loc_82269308;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82269314
	if (cr0.eq) goto loc_82269314;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x82268e98
	goto loc_82268E98;
loc_82269308:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r25.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_82269314:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82269318:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82269320"))) PPC_WEAK_FUNC(sub_82269320);
PPC_FUNC_IMPL(__imp__sub_82269320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15612
	r11.s64 = r11.s64 + 15612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15612
	ctx.r10.s64 = ctx.r10.s64 + 15612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269348"))) PPC_WEAK_FUNC(sub_82269348);
PPC_FUNC_IMPL(__imp__sub_82269348) {
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

__attribute__((alias("__imp__sub_82269370"))) PPC_WEAK_FUNC(sub_82269370);
PPC_FUNC_IMPL(__imp__sub_82269370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15612
	r11.s64 = r11.s64 + 15612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15612
	ctx.r10.s64 = ctx.r10.s64 + 15612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269398"))) PPC_WEAK_FUNC(sub_82269398);
PPC_FUNC_IMPL(__imp__sub_82269398) {
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

__attribute__((alias("__imp__sub_822693C0"))) PPC_WEAK_FUNC(sub_822693C0);
PPC_FUNC_IMPL(__imp__sub_822693C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15612
	r11.s64 = r11.s64 + 15612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15612
	ctx.r10.s64 = ctx.r10.s64 + 15612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822693E8"))) PPC_WEAK_FUNC(sub_822693E8);
PPC_FUNC_IMPL(__imp__sub_822693E8) {
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

__attribute__((alias("__imp__sub_82269410"))) PPC_WEAK_FUNC(sub_82269410);
PPC_FUNC_IMPL(__imp__sub_82269410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15612
	r11.s64 = r11.s64 + 15612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15612
	ctx.r10.s64 = ctx.r10.s64 + 15612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269438"))) PPC_WEAK_FUNC(sub_82269438);
PPC_FUNC_IMPL(__imp__sub_82269438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15612
	r11.s64 = r11.s64 + 15612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15612
	ctx.r10.s64 = ctx.r10.s64 + 15612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269460"))) PPC_WEAK_FUNC(sub_82269460);
PPC_FUNC_IMPL(__imp__sub_82269460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15612
	r11.s64 = r11.s64 + 15612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15612
	ctx.r10.s64 = ctx.r10.s64 + 15612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269488"))) PPC_WEAK_FUNC(sub_82269488);
PPC_FUNC_IMPL(__imp__sub_82269488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15612
	r11.s64 = r11.s64 + 15612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15612
	ctx.r10.s64 = ctx.r10.s64 + 15612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822694B0"))) PPC_WEAK_FUNC(sub_822694B0);
PPC_FUNC_IMPL(__imp__sub_822694B0) {
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

__attribute__((alias("__imp__sub_822694D8"))) PPC_WEAK_FUNC(sub_822694D8);
PPC_FUNC_IMPL(__imp__sub_822694D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15612
	r11.s64 = r11.s64 + 15612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15612
	ctx.r10.s64 = ctx.r10.s64 + 15612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269500"))) PPC_WEAK_FUNC(sub_82269500);
PPC_FUNC_IMPL(__imp__sub_82269500) {
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

__attribute__((alias("__imp__sub_82269528"))) PPC_WEAK_FUNC(sub_82269528);
PPC_FUNC_IMPL(__imp__sub_82269528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15612
	r11.s64 = r11.s64 + 15612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15612
	ctx.r10.s64 = ctx.r10.s64 + 15612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269550"))) PPC_WEAK_FUNC(sub_82269550);
PPC_FUNC_IMPL(__imp__sub_82269550) {
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

__attribute__((alias("__imp__sub_82269578"))) PPC_WEAK_FUNC(sub_82269578);
PPC_FUNC_IMPL(__imp__sub_82269578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15612
	r11.s64 = r11.s64 + 15612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15612
	ctx.r10.s64 = ctx.r10.s64 + 15612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822695A0"))) PPC_WEAK_FUNC(sub_822695A0);
PPC_FUNC_IMPL(__imp__sub_822695A0) {
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

__attribute__((alias("__imp__sub_822695C8"))) PPC_WEAK_FUNC(sub_822695C8);
PPC_FUNC_IMPL(__imp__sub_822695C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f3
	f30.f64 = ctx.f3.f64;
	// fsubs f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 - f31.f64));
	// bl 0x82161c70
	sub_82161C70(ctx, base);
	// fmadds f1,f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f30.f64 + f31.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-24(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269608"))) PPC_WEAK_FUNC(sub_82269608);
PPC_FUNC_IMPL(__imp__sub_82269608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f8,f0
	ctx.f8.f64 = f0.f64;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// fmadds f0,f13,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fmadds f0,f11,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + f0.f64));
	// fsqrts f12,f0
	ctx.f12.f64 = double(float(sqrt(f0.f64)));
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(f0.f64 * ctx.f10.f64));
	// stfs f12,12(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfs f11,8(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmuls f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * f0.f64));
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269668"))) PPC_WEAK_FUNC(sub_82269668);
PPC_FUNC_IMPL(__imp__sub_82269668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// fmuls f30,f1,f0
	f30.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f0,-25408(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25408);
	f0.f64 = double(temp.f32);
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 + f0.f64));
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
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

__attribute__((alias("__imp__sub_822696FC"))) PPC_WEAK_FUNC(sub_822696FC);
PPC_FUNC_IMPL(__imp__sub_822696FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82269700"))) PPC_WEAK_FUNC(sub_82269700);
PPC_FUNC_IMPL(__imp__sub_82269700) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = f0.u64 & ~0x8000000000000000;
	// lfs f13,17844(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17844);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8226977c
	if (!cr6.gt) goto loc_8226977C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x82269754
	if (!cr6.gt) goto loc_82269754;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-25408(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25408);
	f0.f64 = double(temp.f32);
	// b 0x8226975c
	goto loc_8226975C;
loc_82269754:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,17840(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17840);
	f0.f64 = double(temp.f32);
loc_8226975C:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f2,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239e050
	sub_8239E050(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// b 0x822697bc
	goto loc_822697BC;
loc_8226977C:
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f2,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x8239e050
	sub_8239E050(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f1,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239dcf0
	sub_8239DCF0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f2,40(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x8239e050
	sub_8239E050(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
loc_822697BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_822697D8"))) PPC_WEAK_FUNC(sub_822697D8);
PPC_FUNC_IMPL(__imp__sub_822697D8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, f31.u64);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f2,f0,f11
	ctx.f2.f64 = double(float(f0.f64 * ctx.f11.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f12,f10
	f31.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f6,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// lfs f8,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// fmsubs f12,f9,f12,f2
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f2.f64));
	// fmsubs f13,f13,f11,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - f31.f64));
	// fmsubs f10,f0,f10,f1
	ctx.f10.f64 = double(float(f0.f64 * ctx.f10.f64 - ctx.f1.f64));
	// fmadds f11,f8,f8,f7
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmuls f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmadds f11,f6,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f11.f64));
	// fmadds f12,f4,f10,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fmadds f12,f3,f13,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82269858
	if (!cr6.gt) goto loc_82269858;
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// b 0x8226985c
	goto loc_8226985C;
loc_82269858:
	// fneg f9,f11
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_8226985C:
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stfs f9,8(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmadds f0,f0,f0,f8
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f8.f64));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f0,f13,f13
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f11,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + f0.f64));
	// fmadds f0,f10,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + f0.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// stfs f0,4(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfd f31,-8(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822698A4"))) PPC_WEAK_FUNC(sub_822698A4);
PPC_FUNC_IMPL(__imp__sub_822698A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822698A8"))) PPC_WEAK_FUNC(sub_822698A8);
PPC_FUNC_IMPL(__imp__sub_822698A8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x822697d8
	sub_822697D8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82269904
	if (cr6.eq) goto loc_82269904;
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82269904:
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// beq cr6,0x82269938
	if (cr6.eq) goto loc_82269938;
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82269938:
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// beq cr6,0x8226996c
	if (cr6.eq) goto loc_8226996C;
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_8226996C:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82269700
	sub_82269700(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269988"))) PPC_WEAK_FUNC(sub_82269988);
PPC_FUNC_IMPL(__imp__sub_82269988) {
	PPC_FUNC_PROLOGUE();
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
	// lfs f2,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239e050
	sub_8239E050(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822699B4"))) PPC_WEAK_FUNC(sub_822699B4);
PPC_FUNC_IMPL(__imp__sub_822699B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822699B8"))) PPC_WEAK_FUNC(sub_822699B8);
PPC_FUNC_IMPL(__imp__sub_822699B8) {
	PPC_FUNC_PROLOGUE();
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
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f2,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x8239e050
	sub_8239E050(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822699E8"))) PPC_WEAK_FUNC(sub_822699E8);
PPC_FUNC_IMPL(__imp__sub_822699E8) {
	PPC_FUNC_PROLOGUE();
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
	// lfs f2,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239e050
	sub_8239E050(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269A18"))) PPC_WEAK_FUNC(sub_82269A18);
PPC_FUNC_IMPL(__imp__sub_82269A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8239d5e0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f28,f12,f0
	f28.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// lfs f30,-25408(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25408);
	f30.f64 = double(temp.f32);
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(f31.f64 + f30.f64));
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// fadds f1,f29,f30
	ctx.f1.f64 = double(float(f29.f64 + f30.f64));
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fmuls f13,f26,f31
	ctx.f13.f64 = double(float(f26.f64 * f31.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fmuls f12,f26,f27
	ctx.f12.f64 = double(float(f26.f64 * f27.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// fmuls f11,f0,f27
	ctx.f11.f64 = double(float(f0.f64 * f27.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fadds f1,f28,f30
	ctx.f1.f64 = double(float(f28.f64 + f30.f64));
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// fmuls f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f13,f1
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmsubs f13,f0,f1,f10
	ctx.f13.f64 = double(float(f0.f64 * ctx.f1.f64 - ctx.f10.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// fmadds f12,f11,f31,f9
	ctx.f12.f64 = double(float(ctx.f11.f64 * f31.f64 + ctx.f9.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fmsubs f11,f11,f1,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 - ctx.f8.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fmadds f0,f0,f31,f7
	f0.f64 = double(float(f0.f64 * f31.f64 + ctx.f7.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8239d62c
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269B1C"))) PPC_WEAK_FUNC(sub_82269B1C);
PPC_FUNC_IMPL(__imp__sub_82269B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82269B20"))) PPC_WEAK_FUNC(sub_82269B20);
PPC_FUNC_IMPL(__imp__sub_82269B20) {
	PPC_FUNC_PROLOGUE();
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
	// lfs f13,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f10
	f0.f64 = double(float(f0.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x82269bb0
	if (!cr6.gt) goto loc_82269BB0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f13,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x82269cbc
	goto loc_82269CBC;
loc_82269BB0:
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r11.u32);
	// li r11,2
	r11.s64 = 2;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r11.u32);
	// ble cr6,0x82269bd4
	if (!cr6.gt) goto loc_82269BD4;
	// li r11,1
	r11.s64 = 1;
loc_82269BD4:
	// mulli r10,r11,20
	ctx.r10.s64 = r11.s64 * 20;
	// lfsx f0,r10,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// ble cr6,0x82269be8
	if (!cr6.gt) goto loc_82269BE8;
	// li r11,2
	r11.s64 = 2;
loc_82269BE8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// mulli r8,r11,20
	ctx.r8.s64 = r11.s64 * 20;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lfsx f0,r8,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	f0.f64 = double(temp.f32);
	// mulli r6,r9,20
	ctx.r6.s64 = ctx.r9.s64 * 20;
	// lfsx f13,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mulli r6,r7,20
	ctx.r6.s64 = ctx.r7.s64 * 20;
	// lfsx f13,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,2552(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lfs f13,5736(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// stfsx f12,r10,r3
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// beq cr6,0x82269c4c
	if (cr6.eq) goto loc_82269C4C;
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_82269C4C:
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r8,r11
	r31.u64 = ctx.r8.u64 + r11.u64;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r5,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfsx f12,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfsx f12,r30,r4
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f13,r31,r4
	temp.u32 = PPC_LOAD_U32(r31.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfsx f13,r8,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// lfsx f13,r11,r4
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfsx f0,r6,r3
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, temp.u32);
loc_82269CBC:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269CC8"))) PPC_WEAK_FUNC(sub_82269CC8);
PPC_FUNC_IMPL(__imp__sub_82269CC8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bne cr6,0x82269cfc
	if (!cr6.eq) goto loc_82269CFC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r11.u32);
	// blr 
	return;
loc_82269CFC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f9,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f1,f9
	cr6.compare(ctx.f1.f64, ctx.f9.f64);
	// bne cr6,0x82269d30
	if (!cr6.eq) goto loc_82269D30;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r11.u32);
	// blr 
	return;
loc_82269D30:
	// lfs f10,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f11.f64));
	// fmadds f11,f10,f8,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fmadds f11,f7,f6,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82269db0
	if (!cr6.lt) goto loc_82269DB0;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fnmsubs f0,f13,f1,f0
	f0.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - f0.f64)));
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fnmsubs f0,f13,f1,f0
	f0.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - f0.f64)));
	// stfs f0,4(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fnmsubs f0,f13,f1,f0
	f0.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - f0.f64)));
	// stfs f0,8(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fnmsubs f0,f13,f1,f0
	f0.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - f0.f64)));
	// b 0x82269df4
	goto loc_82269DF4;
loc_82269DB0:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fmadds f0,f13,f1,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fmadds f0,f13,f1,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f0,4(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fmadds f0,f13,f1,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f0,8(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fmadds f0,f13,f1,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
loc_82269DF4:
	// lfs f12,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
	// stfs f0,12(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// fmuls f0,f12,f12
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f0,f11,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + f0.f64));
	// fmadds f0,f10,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + f0.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fdivs f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 / f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmuls f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f0,12(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269E44"))) PPC_WEAK_FUNC(sub_82269E44);
PPC_FUNC_IMPL(__imp__sub_82269E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82269E48"))) PPC_WEAK_FUNC(sub_82269E48);
PPC_FUNC_IMPL(__imp__sub_82269E48) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f9,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f1,f9
	cr6.compare(ctx.f1.f64, ctx.f9.f64);
	// bne cr6,0x82269e7c
	if (!cr6.eq) goto loc_82269E7C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r11.u32);
	// blr 
	return;
loc_82269E7C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f8,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f1,f8
	cr6.compare(ctx.f1.f64, ctx.f8.f64);
	// bne cr6,0x82269eb0
	if (!cr6.eq) goto loc_82269EB0;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r11.u32);
	// blr 
	return;
loc_82269EB0:
	// lfs f11,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f7,f13,f0,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f7.f64));
	// fmadds f7,f10,f6,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fmadds f7,f5,f12,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fcmpu cr6,f7,f9
	cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// bge cr6,0x82269efc
	if (!cr6.lt) goto loc_82269EFC;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// b 0x82269f30
	goto loc_82269F30;
loc_82269EFC:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// lfs f10,-4(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
loc_82269F30:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fmadds f0,f13,f1,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f1,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + f0.f64));
	// stfs f0,4(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f11,f1,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + f0.f64));
	// stfs f0,8(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - f0.f64));
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f10,f1,f0
	f0.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + f0.f64));
	// stfs f0,12(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// fmadds f10,f11,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmr f9,f0
	ctx.f9.f64 = f0.f64;
	// fmadds f0,f0,f0,f10
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f10.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fdivs f0,f8,f0
	f0.f64 = double(float(ctx.f8.f64 / f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmuls f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfs f0,12(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269FB8"))) PPC_WEAK_FUNC(sub_82269FB8);
PPC_FUNC_IMPL(__imp__sub_82269FB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82269e48
	sub_82269E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82269FBC"))) PPC_WEAK_FUNC(sub_82269FBC);
PPC_FUNC_IMPL(__imp__sub_82269FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82269FC0"))) PPC_WEAK_FUNC(sub_82269FC0);
PPC_FUNC_IMPL(__imp__sub_82269FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8239d5e0
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lfs f29,-25408(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25408);
	f29.f64 = double(temp.f32);
	// fadds f1,f0,f29
	ctx.f1.f64 = double(float(f0.f64 + f29.f64));
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// fmr f27,f1
	f27.f64 = ctx.f1.f64;
	// fadds f1,f0,f29
	ctx.f1.f64 = double(float(f0.f64 + f29.f64));
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fadds f1,f0,f29
	ctx.f1.f64 = double(float(f0.f64 + f29.f64));
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// fmuls f10,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64 * f27.f64));
	// stfs f31,24(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fmuls f9,f1,f30
	ctx.f9.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fmuls f0,f26,f28
	f0.f64 = double(float(f26.f64 * f28.f64));
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(f27.f64 * f30.f64));
	// fmuls f12,f26,f30
	ctx.f12.f64 = double(float(f26.f64 * f30.f64));
	// fmuls f11,f27,f28
	ctx.f11.f64 = double(float(f27.f64 * f28.f64));
	// fmuls f8,f1,f28
	ctx.f8.f64 = double(float(ctx.f1.f64 * f28.f64));
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// fmuls f8,f1,f26
	ctx.f8.f64 = double(float(ctx.f1.f64 * f26.f64));
	// stfs f8,40(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fneg f10,f9
	ctx.f10.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// fnmsubs f10,f13,f31,f0
	ctx.f10.f64 = double(float(-(ctx.f13.f64 * f31.f64 - f0.f64)));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fnmsubs f0,f0,f31,f13
	f0.f64 = double(float(-(f0.f64 * f31.f64 - ctx.f13.f64)));
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// fmadds f10,f12,f31,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * f31.f64 + ctx.f11.f64));
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// fmadds f12,f11,f31,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * f31.f64 + ctx.f12.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8239d62c
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

__attribute__((alias("__imp__sub_8226A0B8"))) PPC_WEAK_FUNC(sub_8226A0B8);
PPC_FUNC_IMPL(__imp__sub_8226A0B8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmsubs f13,f9,f13,f7
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fmsubs f0,f11,f0,f8
	f0.f64 = double(float(ctx.f11.f64 * f0.f64 - ctx.f8.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fmsubs f12,f12,f10,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f6.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmsubs f13,f9,f13,f6
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f6.f64));
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// fmsubs f0,f0,f11,f8
	f0.f64 = double(float(f0.f64 * ctx.f11.f64 - ctx.f8.f64));
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// fmsubs f12,f12,f10,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f7.f64));
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8226A18C"))) PPC_WEAK_FUNC(sub_8226A18C);
PPC_FUNC_IMPL(__imp__sub_8226A18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226A190"))) PPC_WEAK_FUNC(sub_8226A190);
PPC_FUNC_IMPL(__imp__sub_8226A190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(f0.f64 * f0.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f0,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	f0.f64 = double(temp.f32);
	// fmuls f3,f11,f13
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f2,f11,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmuls f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmuls f6,f3,f0
	ctx.f6.f64 = double(float(ctx.f3.f64 * f0.f64));
	// fmuls f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * f0.f64));
	// fmuls f7,f4,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * f0.f64));
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fsubs f4,f0,f13
	ctx.f4.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fsubs f3,f0,f12
	ctx.f3.f64 = double(float(f0.f64 - ctx.f12.f64));
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
	// fadds f2,f7,f8
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f2,24(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// fsubs f2,f9,f6
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// stfs f2,8(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fadds f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f2,4(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fsubs f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// stfs f10,16(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,20(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// fsubs f0,f7,f8
	f0.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// stfs f0,36(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// fadds f10,f6,f9
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f10,32(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// fsubs f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f0,f4,f12
	f0.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// stfs f0,40(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226A250"))) PPC_WEAK_FUNC(sub_8226A250);
PPC_FUNC_IMPL(__imp__sub_8226A250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f0,-25408(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25408);
	f0.f64 = double(temp.f32);
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 + f0.f64));
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f13,f1
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f12,f1
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f11,f1
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f9,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f10,f1
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// fmuls f6,f0,f1
	ctx.f6.f64 = double(float(f0.f64 * ctx.f1.f64));
	// fmuls f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmsubs f0,f0,f31,f5
	f0.f64 = double(float(f0.f64 * f31.f64 - ctx.f5.f64));
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// fmadds f11,f11,f31,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64 + ctx.f4.f64));
	// fmsubs f12,f12,f31,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64 - ctx.f3.f64));
	// fmadds f9,f9,f31,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64 + ctx.f2.f64));
	// fmadds f13,f13,f31,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64 + ctx.f6.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f8,16(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// fmsubs f10,f10,f31,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64 - ctx.f1.f64));
	// stfs f11,24(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f7,32(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// stfs f9,40(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// stfs f10,36(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
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

__attribute__((alias("__imp__sub_8226A32C"))) PPC_WEAK_FUNC(sub_8226A32C);
PPC_FUNC_IMPL(__imp__sub_8226A32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226A330"))) PPC_WEAK_FUNC(sub_8226A330);
PPC_FUNC_IMPL(__imp__sub_8226A330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f0,-25408(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25408);
	f0.f64 = double(temp.f32);
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 + f0.f64));
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// fmuls f5,f0,f31
	ctx.f5.f64 = double(float(f0.f64 * f31.f64));
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f11,f1
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f12,f1
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f10,f1
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f30,f9,f1
	f30.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// stfs f8,8(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// fmadds f5,f13,f1,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f5.f64));
	// stfs f5,4(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 * ctx.f1.f64));
	// fmsubs f12,f12,f31,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64 - ctx.f3.f64));
	// fmadds f0,f11,f31,f4
	f0.f64 = double(float(ctx.f11.f64 * f31.f64 + ctx.f4.f64));
	// fmadds f11,f9,f31,f2
	ctx.f11.f64 = double(float(ctx.f9.f64 * f31.f64 + ctx.f2.f64));
	// fmsubs f10,f10,f31,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64 - f30.f64));
	// fmsubs f13,f13,f31,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64 - ctx.f1.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f7,24(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// stfs f6,40(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// stfs f11,36(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// stfs f10,32(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
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

__attribute__((alias("__imp__sub_8226A40C"))) PPC_WEAK_FUNC(sub_8226A40C);
PPC_FUNC_IMPL(__imp__sub_8226A40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226A410"))) PPC_WEAK_FUNC(sub_8226A410);
PPC_FUNC_IMPL(__imp__sub_8226A410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8226a190
	sub_8226A190(ctx, base);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82269700
	sub_82269700(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226A444"))) PPC_WEAK_FUNC(sub_8226A444);
PPC_FUNC_IMPL(__imp__sub_8226A444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226A448"))) PPC_WEAK_FUNC(sub_8226A448);
PPC_FUNC_IMPL(__imp__sub_8226A448) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f12,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// fmuls f2,f0,f10
	ctx.f2.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fmuls f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// fmadds f8,f13,f0,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f8.f64));
	// fmadds f6,f7,f6,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f7,f11,f11
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f4,f13,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f7,f0,f0,f7
	ctx.f7.f64 = double(float(f0.f64 * f0.f64 + ctx.f7.f64));
	// fmsubs f8,f9,f10,f5
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 - ctx.f5.f64));
	// fmadds f10,f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f5,f9,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmsubs f9,f0,f12,f3
	ctx.f9.f64 = double(float(f0.f64 * ctx.f12.f64 - ctx.f3.f64));
	// fmsubs f7,f13,f11,f2
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f2.f64));
	// lfs f11,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// fmuls f0,f5,f10
	f0.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// lfs f10,17848(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17848);
	ctx.f10.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(f0.f64)));
	// fdivs f0,f6,f13
	f0.f64 = double(float(ctx.f6.f64 / ctx.f13.f64));
	// fadds f0,f0,f11
	f0.f64 = double(float(f0.f64 + ctx.f11.f64));
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x8226a50c
	if (!cr6.gt) goto loc_8226A50C;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,12(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// fdivs f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmuls f0,f7,f0
	f0.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfs f0,8(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
loc_8226A50C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f11,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f0,12(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226A528"))) PPC_WEAK_FUNC(sub_8226A528);
PPC_FUNC_IMPL(__imp__sub_8226A528) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// lfs f13,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f11,17848(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17848);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x8226a588
	if (!cr6.gt) goto loc_8226A588;
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / f0.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,12(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmuls f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f0,f10,f13
	f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fneg f13,f12
	ctx.f13.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// b 0x8226a598
	goto loc_8226A598;
loc_8226A588:
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f0,12(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
loc_8226A598:
	// stfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226A5A0"))) PPC_WEAK_FUNC(sub_8226A5A0);
PPC_FUNC_IMPL(__imp__sub_8226A5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8226a190
	sub_8226A190(ctx, base);
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f0,f5
	ctx.f5.f64 = double(float(f0.f64 * ctx.f5.f64));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f0,f4
	ctx.f4.f64 = double(float(f0.f64 * ctx.f4.f64));
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f11,f13,f11,f5
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f13,f13,f10,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f10,f0,f7,f3
	ctx.f10.f64 = double(float(f0.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fmadds f0,f12,f9,f11
	f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f11.f64));
	// stfs f0,8(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmadds f13,f12,f8,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f13.f64));
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmadds f12,f12,f6,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f10.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226A62C"))) PPC_WEAK_FUNC(sub_8226A62C);
PPC_FUNC_IMPL(__imp__sub_8226A62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226A630"))) PPC_WEAK_FUNC(sub_8226A630);
PPC_FUNC_IMPL(__imp__sub_8226A630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f5,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// lfs f12,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	f0.f64 = double(temp.f32);
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8226a6d4
	if (cr6.eq) goto loc_8226A6D4;
	// lfs f11,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f11,f9,f13,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f10,f8,f13,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f9,f4,f0,f5
	ctx.f9.f64 = double(float(ctx.f4.f64 * f0.f64 + ctx.f5.f64));
	// fmadds f0,f7,f12,f11
	f0.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,56(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// fmadds f12,f6,f12,f10
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f12,52(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// fmadds f13,f13,f3,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f9.f64));
	// stfs f13,48(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// lfs f13,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f13,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f12,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,56(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// stfs f12,48(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// stfs f13,52(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// b 0x8226a730
	goto loc_8226A730;
loc_8226A6D4:
	// lfs f11,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	f31.f64 = double(temp.f32);
	// fmadds f11,f9,f13,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f10,f8,f13,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f9,f4,f0,f5
	ctx.f9.f64 = double(float(ctx.f4.f64 * f0.f64 + ctx.f5.f64));
	// fmadds f0,f7,f12,f11
	f0.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f12,f6,f12,f10
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f13,f13,f3,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f0,52(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// fadds f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f12,56(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// stfs f13,48(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
loc_8226A730:
	// bl 0x8216db48
	sub_8216DB48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226A748"))) PPC_WEAK_FUNC(sub_8226A748);
PPC_FUNC_IMPL(__imp__sub_8226A748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8239d5dc
	// lfs f6,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f8,f6
	ctx.f8.f64 = ctx.f6.f64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f9,f6
	ctx.f9.f64 = ctx.f6.f64;
	// lfs f7,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// lfs f5,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmr f30,f5
	f30.f64 = ctx.f5.f64;
	// fmr f31,f4
	f31.f64 = ctx.f4.f64;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmr f29,f5
	f29.f64 = ctx.f5.f64;
	// lfs f3,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmr f26,f3
	f26.f64 = ctx.f3.f64;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// fmr f27,f2
	f27.f64 = ctx.f2.f64;
	// fmr f25,f3
	f25.f64 = ctx.f3.f64;
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmr f8,f7
	ctx.f8.f64 = ctx.f7.f64;
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(float(f0.f64 * f0.f64 + ctx.f11.f64));
	// fmuls f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// lfs f11,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f8,f30,f29,f8
	ctx.f8.f64 = double(float(f30.f64 * f29.f64 + ctx.f8.f64));
	// fmadds f9,f1,f31,f9
	ctx.f9.f64 = double(float(ctx.f1.f64 * f31.f64 + ctx.f9.f64));
	// fdivs f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmadds f1,f26,f25,f8
	ctx.f1.f64 = double(float(f26.f64 * f25.f64 + ctx.f8.f64));
	// fmadds f9,f28,f27,f9
	ctx.f9.f64 = double(float(f28.f64 * f27.f64 + ctx.f9.f64));
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f0,f0,f10
	f0.f64 = double(float(f0.f64 * ctx.f10.f64));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fdivs f13,f11,f1
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f1.f64));
	// fdivs f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// fmuls f10,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f10,8(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmuls f0,f2,f9
	f0.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// stfs f0,4(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f11,f6,f9
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// stfs f8,16(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f11,20(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f7,24(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f9,f4,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// stfs f12,32(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// stfs f9,36(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// stfs f13,40(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8239d628
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226A840"))) PPC_WEAK_FUNC(sub_8226A840);
PPC_FUNC_IMPL(__imp__sub_8226A840) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// stfd f29,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f29.u64);
	// stfd f30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, f31.u64);
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f11,f13
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	f0.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmsubs f6,f12,f0,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * f0.f64 - ctx.f6.f64));
	// fmsubs f0,f10,f0,f13
	f0.f64 = double(float(ctx.f10.f64 * f0.f64 - ctx.f13.f64));
	// fmsubs f13,f12,f9,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f11.f64));
	// fmuls f12,f6,f8
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmsubs f0,f0,f5,f12
	f0.f64 = double(float(f0.f64 * ctx.f5.f64 - ctx.f12.f64));
	// fmadds f13,f13,f7,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + f0.f64));
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x8226a8b0
	if (cr6.eq) goto loc_8226A8B0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
loc_8226A8B0:
	// lfs f12,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f6,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f8,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f31,f11,f6
	f31.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f7,f8
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f1,f8,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f10,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f13,f9
	f30.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmsubs f4,f10,f13,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f4.f64));
	// fmsubs f3,f7,f5,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 - ctx.f3.f64));
	// fmsubs f13,f7,f13,f31
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 - f31.f64));
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmsubs f2,f10,f9,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 - ctx.f2.f64));
	// fmsubs f1,f12,f5,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 - ctx.f1.f64));
	// fmsubs f31,f10,f5,f11
	f31.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 - ctx.f11.f64));
	// fmsubs f29,f12,f9,f8
	f29.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f8.f64));
	// fmsubs f30,f6,f5,f30
	f30.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 - f30.f64));
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * f0.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmsubs f10,f10,f6,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 - ctx.f7.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * f0.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fmuls f8,f31,f0
	ctx.f8.f64 = double(float(f31.f64 * f0.f64));
	// fmuls f12,f29,f0
	ctx.f12.f64 = double(float(f29.f64 * f0.f64));
	// fneg f11,f4
	ctx.f11.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f4,f30,f0
	ctx.f4.f64 = double(float(f30.f64 * f0.f64));
	// fneg f9,f3
	ctx.f9.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fmuls f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fneg f5,f2
	ctx.f5.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f9,24(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// stfs f8,20(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// fneg f3,f1
	ctx.f3.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f5,16(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stfs f4,40(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stfs f3,36(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// stfs f12,32(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfd f29,-24(r1)
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f30,-16(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226A980"))) PPC_WEAK_FUNC(sub_8226A980);
PPC_FUNC_IMPL(__imp__sub_8226A980) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82269b20
	sub_82269B20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82269b20
	sub_82269B20(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82269e48
	sub_82269E48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8226a190
	sub_8226A190(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_8226A9E8"))) PPC_WEAK_FUNC(sub_8226A9E8);
PPC_FUNC_IMPL(__imp__sub_8226A9E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x8226aa20
	if (!cr6.eq) goto loc_8226AA20;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bne cr6,0x8226aa20
	if (!cr6.eq) goto loc_8226AA20;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bne cr6,0x8226aa20
	if (!cr6.eq) goto loc_8226AA20;
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// beqlr cr6
	if (cr6.eq) return;
loc_8226AA20:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fmadds f0,f12,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
	// fsqrts f12,f0
	ctx.f12.f64 = double(float(sqrt(f0.f64)));
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f12,12(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f11,8(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmuls f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226AA74"))) PPC_WEAK_FUNC(sub_8226AA74);
PPC_FUNC_IMPL(__imp__sub_8226AA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226AA78"))) PPC_WEAK_FUNC(sub_8226AA78);
PPC_FUNC_IMPL(__imp__sub_8226AA78) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8226AB0C"))) PPC_WEAK_FUNC(sub_8226AB0C);
PPC_FUNC_IMPL(__imp__sub_8226AB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226AB10"))) PPC_WEAK_FUNC(sub_8226AB10);
PPC_FUNC_IMPL(__imp__sub_8226AB10) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8226ab68
	if (cr6.eq) goto loc_8226AB68;
	// li r11,1
	r11.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r29,20(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,16(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8226aa78
	sub_8226AA78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8226ab10
	sub_8226AB10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8226ab10
	sub_8226AB10(ctx, base);
	// b 0x8226ab74
	goto loc_8226AB74;
loc_8226AB68:
	// li r11,0
	r11.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
loc_8226AB74:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8226AB80"))) PPC_WEAK_FUNC(sub_8226AB80);
PPC_FUNC_IMPL(__imp__sub_8226AB80) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226ac04
	if (cr0.eq) goto loc_8226AC04;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r5,r11,-18832
	ctx.r5.s64 = r11.s64 + -18832;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8226abd8
	if (cr0.eq) goto loc_8226ABD8;
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// b 0x8226abdc
	goto loc_8226ABDC;
loc_8226ABD8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8226ABDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r4.u32);
	// addi r29,r4,20
	r29.s64 = ctx.r4.s64 + 20;
	// addi r28,r4,16
	r28.s64 = ctx.r4.s64 + 16;
	// bl 0x82212390
	sub_82212390(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8226ab80
	sub_8226AB80(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8226ab80
	sub_8226AB80(ctx, base);
	// b 0x8226ac0c
	goto loc_8226AC0C;
loc_8226AC04:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8226AC0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8226AC18"))) PPC_WEAK_FUNC(sub_8226AC18);
PPC_FUNC_IMPL(__imp__sub_8226AC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226ac64
	if (cr0.eq) goto loc_8226AC64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
loc_8226AC64:
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// subf r8,r4,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r4.s64;
	// li r9,3
	ctx.r9.s64 = 3;
loc_8226AC70:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + r11.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8226ac8c
	if (!cr6.lt) goto loc_8226AC8C;
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x8226ac9c
	goto loc_8226AC9C;
loc_8226AC8C:
	// lfs f13,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8226ac9c
	if (!cr6.gt) goto loc_8226AC9C;
	// stfs f0,16(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
loc_8226AC9C:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x8226ac70
	if (!cr0.eq) goto loc_8226AC70;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226ACAC"))) PPC_WEAK_FUNC(sub_8226ACAC);
PPC_FUNC_IMPL(__imp__sub_8226ACAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226ACB0"))) PPC_WEAK_FUNC(sub_8226ACB0);
PPC_FUNC_IMPL(__imp__sub_8226ACB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	f0.f64 = double(float(f0.f64 - ctx.f1.f64));
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	f0.f64 = double(float(f0.f64 - ctx.f1.f64));
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fadds f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226ACE4"))) PPC_WEAK_FUNC(sub_8226ACE4);
PPC_FUNC_IMPL(__imp__sub_8226ACE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226ACE8"))) PPC_WEAK_FUNC(sub_8226ACE8);
PPC_FUNC_IMPL(__imp__sub_8226ACE8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f1,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82122100
	sub_82122100(ctx, base);
	// lfs f13,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f9,16(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// stfs f9,16(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + f0.f64));
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fadds f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// fadds f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f9,16(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fmadds f0,f11,f31,f0
	f0.f64 = double(float(ctx.f11.f64 * f31.f64 + f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fmadds f0,f10,f31,f13
	f0.f64 = double(float(ctx.f10.f64 * f31.f64 + ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fmadds f12,f9,f31,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * f31.f64 + ctx.f12.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8226ADBC"))) PPC_WEAK_FUNC(sub_8226ADBC);
PPC_FUNC_IMPL(__imp__sub_8226ADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226ADC0"))) PPC_WEAK_FUNC(sub_8226ADC0);
PPC_FUNC_IMPL(__imp__sub_8226ADC0) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8239bcfc
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8226a748
	sub_8226A748(ctx, base);
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f13,f13
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f3,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f2,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f13,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f4,f0,f0,f4
	ctx.f4.f64 = double(float(f0.f64 * f0.f64 + ctx.f4.f64));
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f11,f0,f11,f3
	ctx.f11.f64 = double(float(f0.f64 * ctx.f11.f64 + ctx.f3.f64));
	// lfs f5,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f10,f0,f10,f2
	ctx.f10.f64 = double(float(f0.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fmadds f8,f0,f8,f1
	ctx.f8.f64 = double(float(f0.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fmadds f4,f12,f12,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f31,f12,f7,f11
	f31.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmadds f30,f12,f6,f10
	f30.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f29,f12,f5,f8
	f29.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f8.f64));
	// fdivs f11,f9,f4
	ctx.f11.f64 = double(float(ctx.f9.f64 / ctx.f4.f64));
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmuls f0,f0,f11
	f0.f64 = double(float(f0.f64 * ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f12,f11
	f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f13,f11
	f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8214f950
	sub_8214F950(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,0(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f30,4(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f29,8(r30)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// fmadds f0,f0,f29,f13
	f0.f64 = double(float(f0.f64 * f29.f64 + ctx.f13.f64));
	// fnmadds f0,f12,f30,f0
	f0.f64 = double(float(-(ctx.f12.f64 * f30.f64 + f0.f64)));
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-56(r1)
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8226AEC0"))) PPC_WEAK_FUNC(sub_8226AEC0);
PPC_FUNC_IMPL(__imp__sub_8226AEC0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f8,f12,f13,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f8.f64));
	// fcmpu cr6,f8,f7
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// beq cr6,0x8226af20
	if (cr6.eq) goto loc_8226AF20;
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f6,f9,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f0,f6,f0,f12
	f0.f64 = double(float(ctx.f6.f64 * f0.f64 + ctx.f12.f64));
	// fdivs f0,f0,f8
	f0.f64 = double(float(f0.f64 / ctx.f8.f64));
	// fmadds f13,f0,f13,f10
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f0,f0,f11,f9
	f0.f64 = double(float(f0.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
loc_8226AF20:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226AF34"))) PPC_WEAK_FUNC(sub_8226AF34);
PPC_FUNC_IMPL(__imp__sub_8226AF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

