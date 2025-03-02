#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821B5D48"))) PPC_WEAK_FUNC(sub_821B5D48);
PPC_FUNC_IMPL(__imp__sub_821B5D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821b4ae0
	sub_821B4AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B5D54"))) PPC_WEAK_FUNC(sub_821B5D54);
PPC_FUNC_IMPL(__imp__sub_821B5D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5D58"))) PPC_WEAK_FUNC(sub_821B5D58);
PPC_FUNC_IMPL(__imp__sub_821B5D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821b4e40
	sub_821B4E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B5D64"))) PPC_WEAK_FUNC(sub_821B5D64);
PPC_FUNC_IMPL(__imp__sub_821B5D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5D68"))) PPC_WEAK_FUNC(sub_821B5D68);
PPC_FUNC_IMPL(__imp__sub_821B5D68) {
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
	// lwz r16,-22024(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -22024);
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
	// addi r3,r30,-20
	ctx.r3.s64 = r30.s64 + -20;
	// bl 0x821b42a0
	sub_821B42A0(ctx, base);
	// addi r3,r30,-32
	ctx.r3.s64 = r30.s64 + -32;
	// bl 0x82332528
	sub_82332528(ctx, base);
	// addi r3,r30,-44
	ctx.r3.s64 = r30.s64 + -44;
	// bl 0x82332528
	sub_82332528(ctx, base);
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x82332528
	sub_82332528(ctx, base);
	// addi r3,r30,-72
	ctx.r3.s64 = r30.s64 + -72;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
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

__attribute__((alias("__imp__sub_821B5D70"))) PPC_WEAK_FUNC(sub_821B5D70);
PPC_FUNC_IMPL(__imp__sub_821B5D70) {
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
	// addi r3,r30,-20
	ctx.r3.s64 = r30.s64 + -20;
	// bl 0x821b42a0
	sub_821B42A0(ctx, base);
	// addi r3,r30,-32
	ctx.r3.s64 = r30.s64 + -32;
	// bl 0x82332528
	sub_82332528(ctx, base);
	// addi r3,r30,-44
	ctx.r3.s64 = r30.s64 + -44;
	// bl 0x82332528
	sub_82332528(ctx, base);
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x82332528
	sub_82332528(ctx, base);
	// addi r3,r30,-72
	ctx.r3.s64 = r30.s64 + -72;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
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

__attribute__((alias("__imp__sub_821B5DD0"))) PPC_WEAK_FUNC(sub_821B5DD0);
PPC_FUNC_IMPL(__imp__sub_821B5DD0) {
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
	// addi r11,r11,-88
	r11.s64 = r11.s64 + -88;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
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

__attribute__((alias("__imp__sub_821B5E00"))) PPC_WEAK_FUNC(sub_821B5E00);
PPC_FUNC_IMPL(__imp__sub_821B5E00) {
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
	// addi r11,r11,-88
	r11.s64 = r11.s64 + -88;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x821b5910
	sub_821B5910(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B5E30"))) PPC_WEAK_FUNC(sub_821B5E30);
PPC_FUNC_IMPL(__imp__sub_821B5E30) {
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
	// addi r11,r11,-88
	r11.s64 = r11.s64 + -88;
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x821b5910
	sub_821B5910(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B5E60"))) PPC_WEAK_FUNC(sub_821B5E60);
PPC_FUNC_IMPL(__imp__sub_821B5E60) {
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
	// addi r11,r11,-88
	r11.s64 = r11.s64 + -88;
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x821b5910
	sub_821B5910(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B5E90"))) PPC_WEAK_FUNC(sub_821B5E90);
PPC_FUNC_IMPL(__imp__sub_821B5E90) {
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r6,r11,1384
	ctx.r6.s64 = r11.s64 + 1384;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// lwz r11,-84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -84);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-84
	ctx.r3.s64 = r11.s64 + -84;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,-68
	ctx.r3.s64 = r31.s64 + -68;
	// bl 0x821e76c0
	sub_821E76C0(ctx, base);
	// addi r3,r31,-72
	ctx.r3.s64 = r31.s64 + -72;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// beq cr6,0x821b5f9c
	if (cr6.eq) goto loc_821B5F9C;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x821b5f20
	if (!cr6.eq) goto loc_821B5F20;
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x821b5f9c
	if (!cr6.eq) goto loc_821B5F9C;
loc_821B5F20:
	// addi r4,r31,-88
	ctx.r4.s64 = r31.s64 + -88;
	// addi r3,r31,-20
	ctx.r3.s64 = r31.s64 + -20;
	// bl 0x821b4430
	sub_821B4430(ctx, base);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// addi r3,r31,-44
	ctx.r3.s64 = r31.s64 + -44;
	// addi r4,r11,44
	ctx.r4.s64 = r11.s64 + 44;
	// bl 0x821b55b8
	sub_821B55B8(ctx, base);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// addi r3,r31,-56
	ctx.r3.s64 = r31.s64 + -56;
	// addi r4,r11,32
	ctx.r4.s64 = r11.s64 + 32;
	// bl 0x821b5430
	sub_821B5430(ctx, base);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// addi r3,r31,-32
	ctx.r3.s64 = r31.s64 + -32;
	// addi r4,r11,56
	ctx.r4.s64 = r11.s64 + 56;
	// bl 0x821b55b8
	sub_821B55B8(ctx, base);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lbz r11,28(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 28);
	// stb r11,-60(r31)
	PPC_STORE_U8(r31.u32 + -60, r11.u8);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lbz r11,80(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 80);
	// stb r11,-8(r31)
	PPC_STORE_U8(r31.u32 + -8, r11.u8);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lbz r11,29(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 29);
	// stb r11,-59(r31)
	PPC_STORE_U8(r31.u32 + -59, r11.u8);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lbz r11,81(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 81);
	// stb r11,-7(r31)
	PPC_STORE_U8(r31.u32 + -7, r11.u8);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lbz r11,30(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 30);
	// stb r11,-58(r31)
	PPC_STORE_U8(r31.u32 + -58, r11.u8);
	// b 0x821b5fa8
	goto loc_821B5FA8;
loc_821B5F9C:
	// addi r3,r31,-20
	ctx.r3.s64 = r31.s64 + -20;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// bl 0x821b4430
	sub_821B4430(ctx, base);
loc_821B5FA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B5FB0"))) PPC_WEAK_FUNC(sub_821B5FB0);
PPC_FUNC_IMPL(__imp__sub_821B5FB0) {
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
	// beq cr6,0x821b6004
	if (cr6.eq) goto loc_821B6004;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,20
	ctx.r8.s64 = 20;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x821b5ff0
	if (cr6.lt) goto loc_821B5FF0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x821b5130
	sub_821B5130(ctx, base);
	// b 0x821b6004
	goto loc_821B6004;
loc_821B5FF0:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x821b5748
	sub_821B5748(ctx, base);
loc_821B6004:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B6014"))) PPC_WEAK_FUNC(sub_821B6014);
PPC_FUNC_IMPL(__imp__sub_821B6014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6018"))) PPC_WEAK_FUNC(sub_821B6018);
PPC_FUNC_IMPL(__imp__sub_821B6018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821b5e90
	sub_821B5E90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B6024"))) PPC_WEAK_FUNC(sub_821B6024);
PPC_FUNC_IMPL(__imp__sub_821B6024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6028"))) PPC_WEAK_FUNC(sub_821B6028);
PPC_FUNC_IMPL(__imp__sub_821B6028) {
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
	// addi r30,r3,-88
	r30.s64 = ctx.r3.s64 + -88;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,88
	r31.s64 = r30.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b5d70
	sub_821B5D70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b6060
	if (cr0.eq) goto loc_821B6060;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821B6060:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B606C"))) PPC_WEAK_FUNC(sub_821B606C);
PPC_FUNC_IMPL(__imp__sub_821B606C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6070"))) PPC_WEAK_FUNC(sub_821B6070);
PPC_FUNC_IMPL(__imp__sub_821B6070) {
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
	// li r8,20
	ctx.r8.s64 = 20;
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
	// bge cr6,0x821b60c0
	if (!cr6.lt) goto loc_821B60C0;
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x821b60d4
	if (cr6.eq) goto loc_821B60D4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x821b5060
	sub_821B5060(ctx, base);
	// b 0x821b60d4
	goto loc_821B60D4;
loc_821B60C0:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x821b5fb0
	sub_821B5FB0(ctx, base);
loc_821B60D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B60E4"))) PPC_WEAK_FUNC(sub_821B60E4);
PPC_FUNC_IMPL(__imp__sub_821B60E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B60E8"))) PPC_WEAK_FUNC(sub_821B60E8);
PPC_FUNC_IMPL(__imp__sub_821B60E8) {
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
	// li r8,20
	ctx.r8.s64 = 20;
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
	// bge cr6,0x821b6138
	if (!cr6.lt) goto loc_821B6138;
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x821b614c
	if (cr6.eq) goto loc_821B614C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x821b50c8
	sub_821B50C8(ctx, base);
	// b 0x821b614c
	goto loc_821B614C;
loc_821B6138:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x82125bb8
	sub_82125BB8(ctx, base);
loc_821B614C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B615C"))) PPC_WEAK_FUNC(sub_821B615C);
PPC_FUNC_IMPL(__imp__sub_821B615C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6160"))) PPC_WEAK_FUNC(sub_821B6160);
PPC_FUNC_IMPL(__imp__sub_821B6160) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x821b6070
	sub_821B6070(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x821b61b0
	goto loc_821B61B0;
loc_821B61A4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821b4510
	sub_821B4510(ctx, base);
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
loc_821B61B0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x821b61a4
	if (!cr6.eq) goto loc_821B61A4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B61C8"))) PPC_WEAK_FUNC(sub_821B61C8);
PPC_FUNC_IMPL(__imp__sub_821B61C8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x821b60e8
	sub_821B60E8(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x821b6218
	goto loc_821B6218;
loc_821B620C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821b4558
	sub_821B4558(ctx, base);
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
loc_821B6218:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x821b620c
	if (!cr6.eq) goto loc_821B620C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B6230"))) PPC_WEAK_FUNC(sub_821B6230);
PPC_FUNC_IMPL(__imp__sub_821B6230) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,9392(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 9392);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x821b6678
	if (cr6.gt) goto loc_821B6678;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// ble cr6,0x821b628c
	if (!cr6.gt) goto loc_821B628C;
	// lwz r11,-84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-84
	ctx.r3.s64 = r11.s64 + -84;
	// bl 0x82315350
	sub_82315350(ctx, base);
loc_821B628C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-68
	ctx.r3.s64 = r31.s64 + -68;
	// bl 0x821e96c0
	sub_821E96C0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x821b62ac
	if (!cr6.lt) goto loc_821B62AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b2ab8
	sub_821B2AB8(ctx, base);
loc_821B62AC:
	// addi r4,r31,-72
	ctx.r4.s64 = r31.s64 + -72;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x821b62dc
	if (cr6.eq) goto loc_821B62DC;
	// addi r4,r31,-56
	ctx.r4.s64 = r31.s64 + -56;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r31,-44
	r29.s64 = r31.s64 + -44;
	// bl 0x821b6160
	sub_821B6160(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821b61c8
	sub_821B61C8(ctx, base);
loc_821B62DC:
	// addi r29,r31,-20
	r29.s64 = r31.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821b4a50
	sub_821B4A50(ctx, base);
	// lwz r11,-12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x821b6304
	if (!cr6.eq) goto loc_821B6304;
	// addi r4,r31,-88
	ctx.r4.s64 = r31.s64 + -88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b4430
	sub_821B4430(ctx, base);
loc_821B6304:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// bge cr6,0x821b6490
	if (!cr6.lt) goto loc_821B6490;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x821b6340
	if (cr6.eq) goto loc_821B6340;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821b63cc
	if (cr6.eq) goto loc_821B63CC;
loc_821B6340:
	// addi r29,r31,-44
	r29.s64 = r31.s64 + -44;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b60e8
	sub_821B60E8(ctx, base);
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x821b63c0
	goto loc_821B63C0;
loc_821B635C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r28,r1,256
	r28.s64 = ctx.r1.s64 + 256;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
loc_821B63C0:
	// lwz r11,-40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -40);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x821b635c
	if (!cr6.eq) goto loc_821B635C;
loc_821B63CC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x821b63f4
	if (cr6.eq) goto loc_821B63F4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821b6480
	if (cr6.eq) goto loc_821B6480;
loc_821B63F4:
	// addi r29,r31,-56
	r29.s64 = r31.s64 + -56;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b6070
	sub_821B6070(ctx, base);
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x821b6474
	goto loc_821B6474;
loc_821B6410:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b4228
	sub_821B4228(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r28,r1,240
	r28.s64 = ctx.r1.s64 + 240;
	// bl 0x821b4228
	sub_821B4228(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821b4228
	sub_821B4228(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
loc_821B6474:
	// lwz r11,-52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -52);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x821b6410
	if (!cr6.eq) goto loc_821B6410;
loc_821B6480:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_821B6490:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x821b64ac
	if (!cr6.gt) goto loc_821B64AC;
	// addi r4,r31,-60
	ctx.r4.s64 = r31.s64 + -60;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x821b64cc
	goto loc_821B64CC;
loc_821B64AC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,-60(r31)
	PPC_STORE_U8(r31.u32 + -60, r11.u8);
loc_821B64CC:
	// addi r4,r31,-8
	ctx.r4.s64 = r31.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// ble cr6,0x821b6500
	if (!cr6.gt) goto loc_821B6500;
	// addi r4,r31,-32
	ctx.r4.s64 = r31.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r31,-59
	r29.s64 = r31.s64 + -59;
	// bl 0x821b61c8
	sub_821B61C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x821b6600
	goto loc_821B6600;
loc_821B6500:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x821b6604
	if (!cr6.gt) goto loc_821B6604;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x821b6520
	if (cr6.eq) goto loc_821B6520;
	// addi r4,r31,-32
	ctx.r4.s64 = r31.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b61c8
	sub_821B61C8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821B6520:
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x821b65dc
	if (!cr6.lt) goto loc_821B65DC;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x821b6550
	if (cr6.eq) goto loc_821B6550;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821b65dc
	if (cr6.eq) goto loc_821B65DC;
loc_821B6550:
	// addi r29,r31,-32
	r29.s64 = r31.s64 + -32;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b60e8
	sub_821B60E8(ctx, base);
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x821b65d0
	goto loc_821B65D0;
loc_821B656C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r28,r1,224
	r28.s64 = ctx.r1.s64 + 224;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
loc_821B65D0:
	// lwz r11,-28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -28);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x821b656c
	if (!cr6.eq) goto loc_821B656C;
loc_821B65DC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,-59(r31)
	PPC_STORE_U8(r31.u32 + -59, r11.u8);
loc_821B6600:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821B6604:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x821b6620
	if (!cr6.gt) goto loc_821B6620;
	// addi r4,r31,-7
	ctx.r4.s64 = r31.s64 + -7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x821b6664
	goto loc_821B6664;
loc_821B6620:
	// lwz r11,-12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x821b665c
	if (cr0.eq) goto loc_821B665C;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x821b6660
	if (cr6.gt) goto loc_821B6660;
loc_821B665C:
	// li r11,0
	r11.s64 = 0;
loc_821B6660:
	// stb r11,-7(r31)
	PPC_STORE_U8(r31.u32 + -7, r11.u8);
loc_821B6664:
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// ble cr6,0x821b6678
	if (!cr6.gt) goto loc_821B6678;
	// addi r4,r31,-58
	ctx.r4.s64 = r31.s64 + -58;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
loc_821B6678:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B6684"))) PPC_WEAK_FUNC(sub_821B6684);
PPC_FUNC_IMPL(__imp__sub_821B6684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6688"))) PPC_WEAK_FUNC(sub_821B6688);
PPC_FUNC_IMPL(__imp__sub_821B6688) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm. r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x821b66cc
	if (cr0.eq) goto loc_821B66CC;
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// b 0x821b689c
	goto loc_821B689C;
loc_821B66CC:
	// lfs f0,16(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x821b66f0
	if (cr6.gt) goto loc_821B66F0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// b 0x821b6898
	goto loc_821B6898;
loc_821B66F0:
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x821b674c
	if (cr6.lt) goto loc_821B674C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// lfs f0,2480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beq cr6,0x821b6730
	if (cr6.eq) goto loc_821B6730;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821B6730:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r8,20
	ctx.r8.s64 = 20;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r11,r8
	r11.s32 = r11.s32 / ctx.r8.s32;
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// b 0x821b689c
	goto loc_821B689C;
loc_821B674C:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// li r31,20
	r31.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// divw r4,r10,r31
	ctx.r4.s32 = ctx.r10.s32 / r31.s32;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x821b67ac
	if (!cr6.gt) goto loc_821B67AC;
loc_821B6768:
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r3,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bge cr6,0x821b67c0
	if (!cr6.lt) goto loc_821B67C0;
	// mulli r30,r3,20
	r30.s64 = ctx.r3.s64 * 20;
	// add r30,r30,r9
	r30.u64 = r30.u64 + ctx.r9.u64;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beq cr6,0x821b67cc
	if (cr6.eq) goto loc_821B67CC;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x821b679c
	if (!cr6.gt) goto loc_821B679C;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x821b67a0
	goto loc_821B67A0;
loc_821B679C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_821B67A0:
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// bgt cr6,0x821b6768
	if (cr6.gt) goto loc_821B6768;
loc_821B67AC:
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// blt cr6,0x821b67fc
	if (cr6.lt) goto loc_821B67FC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x821250e8
	sub_821250E8(ctx, base);
loc_821B67C0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x821250e8
	sub_821250E8(ctx, base);
loc_821B67CC:
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// blt cr6,0x821b67e0
	if (cr6.lt) goto loc_821B67E0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x821250e8
	sub_821250E8(ctx, base);
loc_821B67E0:
	// mulli r11,r3,20
	r11.s64 = ctx.r3.s64 * 20;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// b 0x821b6898
	goto loc_821B6898;
loc_821B67FC:
	// mulli r4,r8,20
	ctx.r4.s64 = ctx.r8.s64 * 20;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r5,r9,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r9.s64;
	// divw r5,r5,r31
	ctx.r5.s32 = ctx.r5.s32 / r31.s32;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x821b682c
	if (cr6.lt) goto loc_821B682C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x821250e8
	sub_821250E8(ctx, base);
loc_821B682C:
	// mulli r5,r10,20
	ctx.r5.s64 = ctx.r10.s64 * 20;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// divw r11,r11,r31
	r11.s32 = r11.s32 / r31.s32;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x821b685c
	if (cr6.lt) goto loc_821B685C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x821250e8
	sub_821250E8(ctx, base);
loc_821B685C:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x821b6870
	if (cr6.lt) goto loc_821B6870;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x821250e8
	sub_821250E8(ctx, base);
loc_821B6870:
	// add r11,r4,r9
	r11.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// add r11,r5,r9
	r11.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lfs f13,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 - f0.f64));
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
loc_821B6898:
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_821B689C:
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

__attribute__((alias("__imp__sub_821B68B4"))) PPC_WEAK_FUNC(sub_821B68B4);
PPC_FUNC_IMPL(__imp__sub_821B68B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B68B8"))) PPC_WEAK_FUNC(sub_821B68B8);
PPC_FUNC_IMPL(__imp__sub_821B68B8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x821b6688
	sub_821B6688(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// beq 0x821b6968
	if (cr0.eq) goto loc_821B6968;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x821b6968
	if (!cr6.eq) goto loc_821B6968;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x821b6968
	if (cr6.eq) goto loc_821B6968;
	// blt cr6,0x821b6930
	if (cr6.lt) goto loc_821B6930;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x821250e8
	sub_821250E8(ctx, base);
loc_821B6930:
	// mulli r10,r29,20
	ctx.r10.s64 = r29.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x821b6968
	if (!cr6.eq) goto loc_821B6968;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x821b69ac
	goto loc_821B69AC;
loc_821B6968:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r10,r29,20
	ctx.r10.s64 = r29.s64 * 20;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x821b5fb0
	sub_821B5FB0(ctx, base);
loc_821B69AC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B69BC"))) PPC_WEAK_FUNC(sub_821B69BC);
PPC_FUNC_IMPL(__imp__sub_821B69BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B69C0"))) PPC_WEAK_FUNC(sub_821B69C0);
PPC_FUNC_IMPL(__imp__sub_821B69C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821b6688
	sub_821B6688(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b6688
	sub_821B6688(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r10,r30,20
	ctx.r10.s64 = r30.s64 * 20;
	// mulli r9,r3,20
	ctx.r9.s64 = ctx.r3.s64 * 20;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x821b6a34
	if (cr6.eq) goto loc_821B6A34;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b5060
	sub_821B5060(ctx, base);
loc_821B6A34:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_821B6A54"))) PPC_WEAK_FUNC(sub_821B6A54);
PPC_FUNC_IMPL(__imp__sub_821B6A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6A58"))) PPC_WEAK_FUNC(sub_821B6A58);
PPC_FUNC_IMPL(__imp__sub_821B6A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821257b8
	sub_821257B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821257b8
	sub_821257B8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r10,r30,20
	ctx.r10.s64 = r30.s64 * 20;
	// mulli r9,r3,20
	ctx.r9.s64 = ctx.r3.s64 * 20;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x821b6acc
	if (cr6.eq) goto loc_821B6ACC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b50c8
	sub_821B50C8(ctx, base);
loc_821B6ACC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_821B6AEC"))) PPC_WEAK_FUNC(sub_821B6AEC);
PPC_FUNC_IMPL(__imp__sub_821B6AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6AF0"))) PPC_WEAK_FUNC(sub_821B6AF0);
PPC_FUNC_IMPL(__imp__sub_821B6AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821b6230
	sub_821B6230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B6AFC"))) PPC_WEAK_FUNC(sub_821B6AFC);
PPC_FUNC_IMPL(__imp__sub_821B6AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6B00"))) PPC_WEAK_FUNC(sub_821B6B00);
PPC_FUNC_IMPL(__imp__sub_821B6B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d5dc
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// fmr f25,f2
	f25.f64 = ctx.f2.f64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x821b6b3c
	if (cr6.eq) goto loc_821B6B3C;
	// bl 0x821b6b00
	sub_821B6B00(ctx, base);
	// b 0x821b6f78
	goto loc_821B6F78;
loc_821B6B3C:
	// addi r28,r30,44
	r28.s64 = r30.s64 + 44;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lfs f26,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f26.f64 = double(temp.f32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f28,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f28.f64 = double(temp.f32);
	// bne 0x821b6cbc
	if (!cr0.eq) goto loc_821B6CBC;
	// lbz r11,80(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b6be4
	if (cr0.eq) goto loc_821B6BE4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821b4110
	sub_821B4110(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lfs f13,-20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f12,-16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lwa r9,88(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 88));
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f11
	f0.f64 = double(ctx.f11.s64);
	// lfs f11,-12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f30,f12,f0
	f30.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f31,f11,f0
	f31.f64 = double(float(ctx.f11.f64 * f0.f64));
	// b 0x821b6bf0
	goto loc_821B6BF0;
loc_821B6BE4:
	// lfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	f31.f64 = double(temp.f32);
	// lfs f30,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	f30.f64 = double(temp.f32);
	// lfs f29,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	f29.f64 = double(temp.f32);
loc_821B6BF0:
	// lbz r11,81(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 81);
	// fcmpu cr6,f25,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f25.f64, f28.f64);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821b6c68
	if (cr6.eq) goto loc_821B6C68;
	// bne 0x821b6c0c
	if (!cr0.eq) goto loc_821B6C0C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_821B6C0C:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lbz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 28);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x8226e560
	sub_8226E560(ctx, base);
	// lbz r11,80(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b6c50
	if (cr0.eq) goto loc_821B6C50;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	f0.f64 = double(float(f31.f64 + f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_821B6C50:
	// addi r6,r31,48
	ctx.r6.s64 = r31.s64 + 48;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82122100
	sub_82122100(ctx, base);
	// b 0x821b6cd0
	goto loc_821B6CD0;
loc_821B6C68:
	// bne 0x821b6c70
	if (!cr0.eq) goto loc_821B6C70;
	// li r7,0
	ctx.r7.s64 = 0;
loc_821B6C70:
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// lbz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 28);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x8226e560
	sub_8226E560(ctx, base);
	// lbz r11,80(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b6cd0
	if (cr0.eq) goto loc_821B6CD0;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// fadds f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 + f29.f64));
	// stfs f0,8(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// b 0x821b6cd0
	goto loc_821B6CD0;
loc_821B6CBC:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b6cd0
	if (cr0.eq) goto loc_821B6CD0;
	// stfs f26,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f26,52(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f26,48(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
loc_821B6CD0:
	// addi r29,r30,32
	r29.s64 = r30.s64 + 32;
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
	// bne 0x821b6e28
	if (!cr0.eq) goto loc_821B6E28;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b6688
	sub_821B6688(ctx, base);
	// lbz r11,30(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 30);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// beq 0x821b6d28
	if (cr0.eq) goto loc_821B6D28;
	// bl 0x82269fb8
	sub_82269FB8(ctx, base);
	// b 0x821b6d2c
	goto loc_821B6D2C;
loc_821B6D28:
	// bl 0x82269cc8
	sub_82269CC8(ctx, base);
loc_821B6D2C:
	// fcmpu cr6,f25,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f25.f64, f28.f64);
	// beq cr6,0x821b6e18
	if (cr6.eq) goto loc_821B6E18;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821b6de4
	if (!cr0.eq) goto loc_821B6DE4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822697d8
	sub_822697D8(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// fdivs f0,f28,f0
	f0.f64 = double(float(f28.f64 / f0.f64));
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f28,f13
	ctx.f13.f64 = double(float(f28.f64 / ctx.f13.f64));
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f12,f28,f12
	ctx.f12.f64 = double(float(f28.f64 / ctx.f12.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(f0.f64 * ctx.f10.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fmuls f0,f0,f9
	f0.f64 = double(float(f0.f64 * ctx.f9.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_821B6DE4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82269b20
	sub_82269B20(ctx, base);
	// lbz r11,30(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 30);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// beq 0x821b6e14
	if (cr0.eq) goto loc_821B6E14;
	// bl 0x82269fb8
	sub_82269FB8(ctx, base);
	// b 0x821b6e18
	goto loc_821B6E18;
loc_821B6E14:
	// bl 0x82269cc8
	sub_82269CC8(ctx, base);
loc_821B6E18:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8226a190
	sub_8226A190(ctx, base);
	// b 0x821b6e54
	goto loc_821B6E54;
loc_821B6E28:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b6e54
	if (cr0.eq) goto loc_821B6E54;
	// stfs f28,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f26,4(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f26,8(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f26,16(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f28,20(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f26,24(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f26,32(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f26,36(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f28,40(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
loc_821B6E54:
	// lbz r11,81(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 81);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b6eb4
	if (cr0.eq) goto loc_821B6EB4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821b6eb4
	if (!cr0.eq) goto loc_821B6EB4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821b6ea0
	if (!cr0.eq) goto loc_821B6EA0;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// b 0x821b6eb0
	goto loc_821B6EB0;
loc_821B6EA0:
	// stfs f26,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f26,180(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f28,184(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
loc_821B6EB0:
	// bl 0x8226a0b8
	sub_8226A0B8(ctx, base);
loc_821B6EB4:
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821b6f78
	if (!cr0.eq) goto loc_821B6F78;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r4,29(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 29);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x8226e560
	sub_8226E560(ctx, base);
	// fcmpu cr6,f25,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f25.f64, f28.f64);
	// beq cr6,0x821b6f00
	if (cr6.eq) goto loc_821B6F00;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82122100
	sub_82122100(ctx, base);
loc_821B6F00:
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f0.f64 = double(temp.f32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f0.f64 = double(temp.f32);
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
loc_821B6F78:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d628
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821B6F88"))) PPC_WEAK_FUNC(sub_821B6F88);
PPC_FUNC_IMPL(__imp__sub_821B6F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7000
	if (cr0.eq) goto loc_821B7000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,28
	ctx.r4.s64 = r11.s64 + 28;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821b6b00
	sub_821B6B00(ctx, base);
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
loc_821B7000:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B701C"))) PPC_WEAK_FUNC(sub_821B701C);
PPC_FUNC_IMPL(__imp__sub_821B701C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7020"))) PPC_WEAK_FUNC(sub_821B7020);
PPC_FUNC_IMPL(__imp__sub_821B7020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b70b8
	if (cr0.eq) goto loc_821B70B8;
	// addi r4,r11,76
	ctx.r4.s64 = r11.s64 + 76;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x82125c20
	sub_82125C20(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x8214f7f0
	sub_8214F7F0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82269b20
	sub_82269B20(ctx, base);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x821b68b8
	sub_821B68B8(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822697d8
	sub_822697D8(ctx, base);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x82125c20
	sub_82125C20(ctx, base);
loc_821B70B8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_821B70D0"))) PPC_WEAK_FUNC(sub_821B70D0);
PPC_FUNC_IMPL(__imp__sub_821B70D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82125c20
	sub_82125C20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_821B718C"))) PPC_WEAK_FUNC(sub_821B718C);
PPC_FUNC_IMPL(__imp__sub_821B718C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7190"))) PPC_WEAK_FUNC(sub_821B7190);
PPC_FUNC_IMPL(__imp__sub_821B7190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82125c20
	sub_82125C20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_821B724C"))) PPC_WEAK_FUNC(sub_821B724C);
PPC_FUNC_IMPL(__imp__sub_821B724C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7250"))) PPC_WEAK_FUNC(sub_821B7250);
PPC_FUNC_IMPL(__imp__sub_821B7250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// bl 0x8239bcf8
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-25404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25404);
	f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 * f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82269a18
	sub_82269A18(ctx, base);
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x821b68b8
	sub_821B68B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B7324"))) PPC_WEAK_FUNC(sub_821B7324);
PPC_FUNC_IMPL(__imp__sub_821B7324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7328"))) PPC_WEAK_FUNC(sub_821B7328);
PPC_FUNC_IMPL(__imp__sub_821B7328) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x821b69c0
	sub_821B69C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B7398"))) PPC_WEAK_FUNC(sub_821B7398);
PPC_FUNC_IMPL(__imp__sub_821B7398) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x821b6a58
	sub_821B6A58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B7408"))) PPC_WEAK_FUNC(sub_821B7408);
PPC_FUNC_IMPL(__imp__sub_821B7408) {
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
	// lwz r16,-21472(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21472);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
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
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
	// clrlwi. r11,r8,31
	r11.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10864
	r29.s64 = r11.s64 + 10864;
	// bne 0x821b7478
	if (!cr0.eq) goto loc_821B7478;
	// ori r11,r8,1
	r11.u64 = ctx.r8.u64 | 1;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-1440
	ctx.r4.s64 = r11.s64 + -1440;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7478:
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
	// beq 0x821b74d0
	if (cr0.eq) goto loc_821B74D0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x821b4710
	sub_821B4710(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b74d0
	if (cr6.eq) goto loc_821B74D0;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
loc_821B74C8:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821b7c8c
	goto loc_821B7C8C;
loc_821B74D0:
	// rlwinm. r11,r8,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10860
	r29.s64 = r11.s64 + 10860;
	// bne 0x821b74fc
	if (!cr0.eq) goto loc_821B74FC;
	// ori r11,r8,2
	r11.u64 = ctx.r8.u64 | 2;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21736
	ctx.r4.s64 = r11.s64 + -21736;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B74FC:
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
	// beq 0x821b7554
	if (cr0.eq) goto loc_821B7554;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821b4bf0
	sub_821B4BF0(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7550
	if (cr6.eq) goto loc_821B7550;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7550:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7554:
	// rlwinm. r11,r8,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10856
	r29.s64 = r11.s64 + 10856;
	// bne 0x821b7580
	if (!cr0.eq) goto loc_821B7580;
	// ori r11,r8,4
	r11.u64 = ctx.r8.u64 | 4;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21748
	ctx.r4.s64 = r11.s64 + -21748;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7580:
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
	// beq 0x821b75d8
	if (cr0.eq) goto loc_821B75D8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821b47d8
	sub_821B47D8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b75d4
	if (cr6.eq) goto loc_821B75D4;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B75D4:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B75D8:
	// rlwinm. r11,r8,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10852
	r29.s64 = r11.s64 + 10852;
	// bne 0x821b7604
	if (!cr0.eq) goto loc_821B7604;
	// ori r11,r8,8
	r11.u64 = ctx.r8.u64 | 8;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21760
	ctx.r4.s64 = r11.s64 + -21760;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7604:
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
	// beq 0x821b765c
	if (cr0.eq) goto loc_821B765C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x821b4c80
	sub_821B4C80(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7658
	if (cr6.eq) goto loc_821B7658;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7658:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B765C:
	// rlwinm. r11,r8,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10848
	r29.s64 = r11.s64 + 10848;
	// bne 0x821b7688
	if (!cr0.eq) goto loc_821B7688;
	// ori r11,r8,16
	r11.u64 = ctx.r8.u64 | 16;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21776
	ctx.r4.s64 = r11.s64 + -21776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7688:
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
	// beq 0x821b76e0
	if (cr0.eq) goto loc_821B76E0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821b7328
	sub_821B7328(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b76dc
	if (cr6.eq) goto loc_821B76DC;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B76DC:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B76E0:
	// rlwinm. r11,r8,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10844
	r29.s64 = r11.s64 + 10844;
	// bne 0x821b770c
	if (!cr0.eq) goto loc_821B770C;
	// ori r11,r8,32
	r11.u64 = ctx.r8.u64 | 32;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21796
	ctx.r4.s64 = r11.s64 + -21796;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B770C:
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
	// beq 0x821b7764
	if (cr0.eq) goto loc_821B7764;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x821b7398
	sub_821B7398(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7760
	if (cr6.eq) goto loc_821B7760;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7760:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7764:
	// rlwinm. r11,r8,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10840
	r29.s64 = r11.s64 + 10840;
	// bne 0x821b7790
	if (!cr0.eq) goto loc_821B7790;
	// ori r11,r8,64
	r11.u64 = ctx.r8.u64 | 64;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21812
	ctx.r4.s64 = r11.s64 + -21812;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7790:
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
	// beq 0x821b77e4
	if (cr0.eq) goto loc_821B77E4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821b4748
	sub_821B4748(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b77e4
	if (cr6.eq) goto loc_821B77E4;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B77E4:
	// rlwinm. r11,r8,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10836
	r29.s64 = r11.s64 + 10836;
	// bne 0x821b7810
	if (!cr0.eq) goto loc_821B7810;
	// ori r11,r8,128
	r11.u64 = ctx.r8.u64 | 128;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21828
	ctx.r4.s64 = r11.s64 + -21828;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7810:
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
	// beq 0x821b7864
	if (cr0.eq) goto loc_821B7864;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b4778
	sub_821B4778(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7864
	if (cr6.eq) goto loc_821B7864;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7864:
	// rlwinm. r11,r8,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10832
	r29.s64 = r11.s64 + 10832;
	// bne 0x821b7890
	if (!cr0.eq) goto loc_821B7890;
	// ori r11,r8,256
	r11.u64 = ctx.r8.u64 | 256;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21844
	ctx.r4.s64 = r11.s64 + -21844;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7890:
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
	// beq 0x821b78e4
	if (cr0.eq) goto loc_821B78E4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821b47a8
	sub_821B47A8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b78e4
	if (cr6.eq) goto loc_821B78E4;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B78E4:
	// rlwinm. r11,r8,0,22,22
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10828
	r29.s64 = r11.s64 + 10828;
	// bne 0x821b7910
	if (!cr0.eq) goto loc_821B7910;
	// ori r11,r8,512
	r11.u64 = ctx.r8.u64 | 512;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21860
	ctx.r4.s64 = r11.s64 + -21860;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7910:
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
	// beq 0x821b7968
	if (cr0.eq) goto loc_821B7968;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821b70d0
	sub_821B70D0(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7964
	if (cr6.eq) goto loc_821B7964;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7964:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7968:
	// rlwinm. r11,r8,0,21,21
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10824
	r29.s64 = r11.s64 + 10824;
	// bne 0x821b7994
	if (!cr0.eq) goto loc_821B7994;
	// ori r11,r8,1024
	r11.u64 = ctx.r8.u64 | 1024;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21872
	ctx.r4.s64 = r11.s64 + -21872;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7994:
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
	// beq 0x821b79ec
	if (cr0.eq) goto loc_821B79EC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x821b7250
	sub_821B7250(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b79e8
	if (cr6.eq) goto loc_821B79E8;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B79E8:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B79EC:
	// rlwinm. r11,r8,0,20,20
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10820
	r29.s64 = r11.s64 + 10820;
	// bne 0x821b7a18
	if (!cr0.eq) goto loc_821B7A18;
	// ori r11,r8,2048
	r11.u64 = ctx.r8.u64 | 2048;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21888
	ctx.r4.s64 = r11.s64 + -21888;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7A18:
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
	// beq 0x821b7a70
	if (cr0.eq) goto loc_821B7A70;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x821b7190
	sub_821B7190(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7a6c
	if (cr6.eq) goto loc_821B7A6C;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7A6C:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7A70:
	// rlwinm. r11,r8,0,19,19
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10816
	r29.s64 = r11.s64 + 10816;
	// bne 0x821b7a9c
	if (!cr0.eq) goto loc_821B7A9C;
	// ori r11,r8,4096
	r11.u64 = ctx.r8.u64 | 4096;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21908
	ctx.r4.s64 = r11.s64 + -21908;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7A9C:
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
	// beq 0x821b7af4
	if (cr0.eq) goto loc_821B7AF4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x821b4608
	sub_821B4608(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7af0
	if (cr6.eq) goto loc_821B7AF0;
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7AF0:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7AF4:
	// rlwinm. r11,r8,0,18,18
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10812
	r29.s64 = r11.s64 + 10812;
	// bne 0x821b7b20
	if (!cr0.eq) goto loc_821B7B20;
	// ori r11,r8,8192
	r11.u64 = ctx.r8.u64 | 8192;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21928
	ctx.r4.s64 = r11.s64 + -21928;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7B20:
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
	// beq 0x821b7b78
	if (cr0.eq) goto loc_821B7B78;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x821b4660
	sub_821B4660(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7b74
	if (cr6.eq) goto loc_821B7B74;
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7B74:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7B78:
	// rlwinm. r11,r8,0,17,17
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10808
	r29.s64 = r11.s64 + 10808;
	// bne 0x821b7ba0
	if (!cr0.eq) goto loc_821B7BA0;
	// ori r11,r8,16384
	r11.u64 = ctx.r8.u64 | 16384;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21944
	ctx.r4.s64 = r11.s64 + -21944;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821B7BA0:
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
	// beq 0x821b7bf4
	if (cr0.eq) goto loc_821B7BF4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x821b46b8
	sub_821B46B8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7bf4
	if (cr6.eq) goto loc_821B7BF4;
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7BF4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-68
	ctx.r4.s64 = r27.s64 + -68;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x821e9d00
	sub_821E9D00(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7c34
	if (cr6.eq) goto loc_821B7C34;
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7C34:
	// lwz r11,-84(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -84);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,-84
	ctx.r4.s64 = r11.s64 + -84;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7c80
	if (cr6.eq) goto loc_821B7C80;
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7C80:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_821B7C8C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821B7410"))) PPC_WEAK_FUNC(sub_821B7410);
PPC_FUNC_IMPL(__imp__sub_821B7410) {
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
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
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
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
	// clrlwi. r11,r8,31
	r11.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10864
	r29.s64 = r11.s64 + 10864;
	// bne 0x821b7478
	if (!cr0.eq) goto loc_821B7478;
	// ori r11,r8,1
	r11.u64 = ctx.r8.u64 | 1;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-1440
	ctx.r4.s64 = r11.s64 + -1440;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7478:
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
	// beq 0x821b74d0
	if (cr0.eq) goto loc_821B74D0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x821b4710
	sub_821B4710(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b74d0
	if (cr6.eq) goto loc_821B74D0;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
loc_821B74C8:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821b7c8c
	goto loc_821B7C8C;
loc_821B74D0:
	// rlwinm. r11,r8,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10860
	r29.s64 = r11.s64 + 10860;
	// bne 0x821b74fc
	if (!cr0.eq) goto loc_821B74FC;
	// ori r11,r8,2
	r11.u64 = ctx.r8.u64 | 2;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21736
	ctx.r4.s64 = r11.s64 + -21736;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B74FC:
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
	// beq 0x821b7554
	if (cr0.eq) goto loc_821B7554;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821b4bf0
	sub_821B4BF0(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7550
	if (cr6.eq) goto loc_821B7550;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7550:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7554:
	// rlwinm. r11,r8,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10856
	r29.s64 = r11.s64 + 10856;
	// bne 0x821b7580
	if (!cr0.eq) goto loc_821B7580;
	// ori r11,r8,4
	r11.u64 = ctx.r8.u64 | 4;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21748
	ctx.r4.s64 = r11.s64 + -21748;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7580:
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
	// beq 0x821b75d8
	if (cr0.eq) goto loc_821B75D8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821b47d8
	sub_821B47D8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b75d4
	if (cr6.eq) goto loc_821B75D4;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B75D4:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B75D8:
	// rlwinm. r11,r8,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10852
	r29.s64 = r11.s64 + 10852;
	// bne 0x821b7604
	if (!cr0.eq) goto loc_821B7604;
	// ori r11,r8,8
	r11.u64 = ctx.r8.u64 | 8;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21760
	ctx.r4.s64 = r11.s64 + -21760;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7604:
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
	// beq 0x821b765c
	if (cr0.eq) goto loc_821B765C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x821b4c80
	sub_821B4C80(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7658
	if (cr6.eq) goto loc_821B7658;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7658:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B765C:
	// rlwinm. r11,r8,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10848
	r29.s64 = r11.s64 + 10848;
	// bne 0x821b7688
	if (!cr0.eq) goto loc_821B7688;
	// ori r11,r8,16
	r11.u64 = ctx.r8.u64 | 16;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21776
	ctx.r4.s64 = r11.s64 + -21776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7688:
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
	// beq 0x821b76e0
	if (cr0.eq) goto loc_821B76E0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821b7328
	sub_821B7328(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b76dc
	if (cr6.eq) goto loc_821B76DC;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B76DC:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B76E0:
	// rlwinm. r11,r8,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10844
	r29.s64 = r11.s64 + 10844;
	// bne 0x821b770c
	if (!cr0.eq) goto loc_821B770C;
	// ori r11,r8,32
	r11.u64 = ctx.r8.u64 | 32;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21796
	ctx.r4.s64 = r11.s64 + -21796;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B770C:
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
	// beq 0x821b7764
	if (cr0.eq) goto loc_821B7764;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x821b7398
	sub_821B7398(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7760
	if (cr6.eq) goto loc_821B7760;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7760:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7764:
	// rlwinm. r11,r8,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10840
	r29.s64 = r11.s64 + 10840;
	// bne 0x821b7790
	if (!cr0.eq) goto loc_821B7790;
	// ori r11,r8,64
	r11.u64 = ctx.r8.u64 | 64;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21812
	ctx.r4.s64 = r11.s64 + -21812;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7790:
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
	// beq 0x821b77e4
	if (cr0.eq) goto loc_821B77E4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821b4748
	sub_821B4748(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b77e4
	if (cr6.eq) goto loc_821B77E4;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B77E4:
	// rlwinm. r11,r8,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10836
	r29.s64 = r11.s64 + 10836;
	// bne 0x821b7810
	if (!cr0.eq) goto loc_821B7810;
	// ori r11,r8,128
	r11.u64 = ctx.r8.u64 | 128;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21828
	ctx.r4.s64 = r11.s64 + -21828;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7810:
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
	// beq 0x821b7864
	if (cr0.eq) goto loc_821B7864;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b4778
	sub_821B4778(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7864
	if (cr6.eq) goto loc_821B7864;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7864:
	// rlwinm. r11,r8,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10832
	r29.s64 = r11.s64 + 10832;
	// bne 0x821b7890
	if (!cr0.eq) goto loc_821B7890;
	// ori r11,r8,256
	r11.u64 = ctx.r8.u64 | 256;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21844
	ctx.r4.s64 = r11.s64 + -21844;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7890:
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
	// beq 0x821b78e4
	if (cr0.eq) goto loc_821B78E4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821b47a8
	sub_821B47A8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b78e4
	if (cr6.eq) goto loc_821B78E4;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B78E4:
	// rlwinm. r11,r8,0,22,22
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10828
	r29.s64 = r11.s64 + 10828;
	// bne 0x821b7910
	if (!cr0.eq) goto loc_821B7910;
	// ori r11,r8,512
	r11.u64 = ctx.r8.u64 | 512;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21860
	ctx.r4.s64 = r11.s64 + -21860;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7910:
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
	// beq 0x821b7968
	if (cr0.eq) goto loc_821B7968;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821b70d0
	sub_821B70D0(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7964
	if (cr6.eq) goto loc_821B7964;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7964:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7968:
	// rlwinm. r11,r8,0,21,21
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10824
	r29.s64 = r11.s64 + 10824;
	// bne 0x821b7994
	if (!cr0.eq) goto loc_821B7994;
	// ori r11,r8,1024
	r11.u64 = ctx.r8.u64 | 1024;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21872
	ctx.r4.s64 = r11.s64 + -21872;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7994:
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
	// beq 0x821b79ec
	if (cr0.eq) goto loc_821B79EC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x821b7250
	sub_821B7250(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b79e8
	if (cr6.eq) goto loc_821B79E8;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B79E8:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B79EC:
	// rlwinm. r11,r8,0,20,20
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10820
	r29.s64 = r11.s64 + 10820;
	// bne 0x821b7a18
	if (!cr0.eq) goto loc_821B7A18;
	// ori r11,r8,2048
	r11.u64 = ctx.r8.u64 | 2048;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21888
	ctx.r4.s64 = r11.s64 + -21888;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7A18:
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
	// beq 0x821b7a70
	if (cr0.eq) goto loc_821B7A70;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x821b7190
	sub_821B7190(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7a6c
	if (cr6.eq) goto loc_821B7A6C;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7A6C:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7A70:
	// rlwinm. r11,r8,0,19,19
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10816
	r29.s64 = r11.s64 + 10816;
	// bne 0x821b7a9c
	if (!cr0.eq) goto loc_821B7A9C;
	// ori r11,r8,4096
	r11.u64 = ctx.r8.u64 | 4096;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21908
	ctx.r4.s64 = r11.s64 + -21908;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7A9C:
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
	// beq 0x821b7af4
	if (cr0.eq) goto loc_821B7AF4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x821b4608
	sub_821B4608(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7af0
	if (cr6.eq) goto loc_821B7AF0;
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7AF0:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7AF4:
	// rlwinm. r11,r8,0,18,18
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10812
	r29.s64 = r11.s64 + 10812;
	// bne 0x821b7b20
	if (!cr0.eq) goto loc_821B7B20;
	// ori r11,r8,8192
	r11.u64 = ctx.r8.u64 | 8192;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21928
	ctx.r4.s64 = r11.s64 + -21928;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7B20:
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
	// beq 0x821b7b78
	if (cr0.eq) goto loc_821B7B78;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x821b4660
	sub_821B4660(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7b74
	if (cr6.eq) goto loc_821B7B74;
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7B74:
	// lwz r8,10868(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 10868);
loc_821B7B78:
	// rlwinm. r11,r8,0,17,17
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,10808
	r29.s64 = r11.s64 + 10808;
	// bne 0x821b7ba0
	if (!cr0.eq) goto loc_821B7BA0;
	// ori r11,r8,16384
	r11.u64 = ctx.r8.u64 | 16384;
	// stw r11,10868(r30)
	PPC_STORE_U32(r30.u32 + 10868, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-21944
	ctx.r4.s64 = r11.s64 + -21944;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821B7BA0:
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
	// beq 0x821b7bf4
	if (cr0.eq) goto loc_821B7BF4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x821b46b8
	sub_821B46B8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7bf4
	if (cr6.eq) goto loc_821B7BF4;
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7BF4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-68
	ctx.r4.s64 = r27.s64 + -68;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x821e9d00
	sub_821E9D00(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7c34
	if (cr6.eq) goto loc_821B7C34;
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7C34:
	// lwz r11,-84(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -84);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,-84
	ctx.r4.s64 = r11.s64 + -84;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b7c80
	if (cr6.eq) goto loc_821B7C80;
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b7c8c
	if (cr0.eq) goto loc_821B7C8C;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// b 0x821b74c8
	goto loc_821B74C8;
loc_821B7C80:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_821B7C8C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821B7C98"))) PPC_WEAK_FUNC(sub_821B7C98);
PPC_FUNC_IMPL(__imp__sub_821B7C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10868
	r11.s64 = r11.s64 + 10868;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10868
	ctx.r10.s64 = ctx.r10.s64 + 10868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B7CC0"))) PPC_WEAK_FUNC(sub_821B7CC0);
PPC_FUNC_IMPL(__imp__sub_821B7CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
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

__attribute__((alias("__imp__sub_821B7CE8"))) PPC_WEAK_FUNC(sub_821B7CE8);
PPC_FUNC_IMPL(__imp__sub_821B7CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10868
	r11.s64 = r11.s64 + 10868;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10868
	ctx.r10.s64 = ctx.r10.s64 + 10868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B7D10"))) PPC_WEAK_FUNC(sub_821B7D10);
PPC_FUNC_IMPL(__imp__sub_821B7D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
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

__attribute__((alias("__imp__sub_821B7D38"))) PPC_WEAK_FUNC(sub_821B7D38);
PPC_FUNC_IMPL(__imp__sub_821B7D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10868
	r11.s64 = r11.s64 + 10868;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10868
	ctx.r10.s64 = ctx.r10.s64 + 10868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B7D60"))) PPC_WEAK_FUNC(sub_821B7D60);
PPC_FUNC_IMPL(__imp__sub_821B7D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
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

__attribute__((alias("__imp__sub_821B7D88"))) PPC_WEAK_FUNC(sub_821B7D88);
PPC_FUNC_IMPL(__imp__sub_821B7D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10868
	r11.s64 = r11.s64 + 10868;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10868
	ctx.r10.s64 = ctx.r10.s64 + 10868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B7DB0"))) PPC_WEAK_FUNC(sub_821B7DB0);
PPC_FUNC_IMPL(__imp__sub_821B7DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
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

__attribute__((alias("__imp__sub_821B7DD8"))) PPC_WEAK_FUNC(sub_821B7DD8);
PPC_FUNC_IMPL(__imp__sub_821B7DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10868
	r11.s64 = r11.s64 + 10868;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10868
	ctx.r10.s64 = ctx.r10.s64 + 10868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B7E00"))) PPC_WEAK_FUNC(sub_821B7E00);
PPC_FUNC_IMPL(__imp__sub_821B7E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
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

__attribute__((alias("__imp__sub_821B7E28"))) PPC_WEAK_FUNC(sub_821B7E28);
PPC_FUNC_IMPL(__imp__sub_821B7E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10868
	r11.s64 = r11.s64 + 10868;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10868
	ctx.r10.s64 = ctx.r10.s64 + 10868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B7E50"))) PPC_WEAK_FUNC(sub_821B7E50);
PPC_FUNC_IMPL(__imp__sub_821B7E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
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

__attribute__((alias("__imp__sub_821B7E78"))) PPC_WEAK_FUNC(sub_821B7E78);
PPC_FUNC_IMPL(__imp__sub_821B7E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10868
	r11.s64 = r11.s64 + 10868;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10868
	ctx.r10.s64 = ctx.r10.s64 + 10868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B7EA0"))) PPC_WEAK_FUNC(sub_821B7EA0);
PPC_FUNC_IMPL(__imp__sub_821B7EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
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

__attribute__((alias("__imp__sub_821B7EC8"))) PPC_WEAK_FUNC(sub_821B7EC8);
PPC_FUNC_IMPL(__imp__sub_821B7EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10868
	r11.s64 = r11.s64 + 10868;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10868
	ctx.r10.s64 = ctx.r10.s64 + 10868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B7EF0"))) PPC_WEAK_FUNC(sub_821B7EF0);
PPC_FUNC_IMPL(__imp__sub_821B7EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
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

__attribute__((alias("__imp__sub_821B7F18"))) PPC_WEAK_FUNC(sub_821B7F18);
PPC_FUNC_IMPL(__imp__sub_821B7F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10868
	r11.s64 = r11.s64 + 10868;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10868
	ctx.r10.s64 = ctx.r10.s64 + 10868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B7F40"))) PPC_WEAK_FUNC(sub_821B7F40);
PPC_FUNC_IMPL(__imp__sub_821B7F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
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

__attribute__((alias("__imp__sub_821B7F68"))) PPC_WEAK_FUNC(sub_821B7F68);
PPC_FUNC_IMPL(__imp__sub_821B7F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10868
	r11.s64 = r11.s64 + 10868;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10868
	ctx.r10.s64 = ctx.r10.s64 + 10868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B7F90"))) PPC_WEAK_FUNC(sub_821B7F90);
PPC_FUNC_IMPL(__imp__sub_821B7F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
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

__attribute__((alias("__imp__sub_821B7FB8"))) PPC_WEAK_FUNC(sub_821B7FB8);
PPC_FUNC_IMPL(__imp__sub_821B7FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10868
	r11.s64 = r11.s64 + 10868;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10868
	ctx.r10.s64 = ctx.r10.s64 + 10868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B7FE0"))) PPC_WEAK_FUNC(sub_821B7FE0);
PPC_FUNC_IMPL(__imp__sub_821B7FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
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

__attribute__((alias("__imp__sub_821B8008"))) PPC_WEAK_FUNC(sub_821B8008);
PPC_FUNC_IMPL(__imp__sub_821B8008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10868
	r11.s64 = r11.s64 + 10868;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10868
	ctx.r10.s64 = ctx.r10.s64 + 10868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B8030"))) PPC_WEAK_FUNC(sub_821B8030);
PPC_FUNC_IMPL(__imp__sub_821B8030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
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

__attribute__((alias("__imp__sub_821B8058"))) PPC_WEAK_FUNC(sub_821B8058);
PPC_FUNC_IMPL(__imp__sub_821B8058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10868
	r11.s64 = r11.s64 + 10868;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10868
	ctx.r10.s64 = ctx.r10.s64 + 10868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B8080"))) PPC_WEAK_FUNC(sub_821B8080);
PPC_FUNC_IMPL(__imp__sub_821B8080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
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

__attribute__((alias("__imp__sub_821B80A8"))) PPC_WEAK_FUNC(sub_821B80A8);
PPC_FUNC_IMPL(__imp__sub_821B80A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10868
	r11.s64 = r11.s64 + 10868;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10868
	ctx.r10.s64 = ctx.r10.s64 + 10868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B80D0"))) PPC_WEAK_FUNC(sub_821B80D0);
PPC_FUNC_IMPL(__imp__sub_821B80D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
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

__attribute__((alias("__imp__sub_821B80F8"))) PPC_WEAK_FUNC(sub_821B80F8);
PPC_FUNC_IMPL(__imp__sub_821B80F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10868
	r11.s64 = r11.s64 + 10868;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10868
	ctx.r10.s64 = ctx.r10.s64 + 10868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B8120"))) PPC_WEAK_FUNC(sub_821B8120);
PPC_FUNC_IMPL(__imp__sub_821B8120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
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

__attribute__((alias("__imp__sub_821B8148"))) PPC_WEAK_FUNC(sub_821B8148);
PPC_FUNC_IMPL(__imp__sub_821B8148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
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

__attribute__((alias("__imp__sub_821B8170"))) PPC_WEAK_FUNC(sub_821B8170);
PPC_FUNC_IMPL(__imp__sub_821B8170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
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

__attribute__((alias("__imp__sub_821B8198"))) PPC_WEAK_FUNC(sub_821B8198);
PPC_FUNC_IMPL(__imp__sub_821B8198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x821b7410
	sub_821B7410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B81A4"))) PPC_WEAK_FUNC(sub_821B81A4);
PPC_FUNC_IMPL(__imp__sub_821B81A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B81A8"))) PPC_WEAK_FUNC(sub_821B81A8);
PPC_FUNC_IMPL(__imp__sub_821B81A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r10,11632(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 11632);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r10,11636(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11636);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x821b8200
	if (cr6.eq) goto loc_821B8200;
	// lwz r11,11632(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11632);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x821b8200
	if (cr6.eq) goto loc_821B8200;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B8200:
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

__attribute__((alias("__imp__sub_821B8218"))) PPC_WEAK_FUNC(sub_821B8218);
PPC_FUNC_IMPL(__imp__sub_821B8218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r10,11632(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11632);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,60(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821B824C"))) PPC_WEAK_FUNC(sub_821B824C);
PPC_FUNC_IMPL(__imp__sub_821B824C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B8250"))) PPC_WEAK_FUNC(sub_821B8250);
PPC_FUNC_IMPL(__imp__sub_821B8250) {
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
	// lwz r16,-20920(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20920);
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
	// lwz r11,10876(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10876);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,10872
	r30.s64 = ctx.r9.s64 + 10872;
	// bne 0x821b829c
	if (!cr0.eq) goto loc_821B829C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10876, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-20944
	ctx.r4.s64 = r11.s64 + -20944;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821B829C:
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

__attribute__((alias("__imp__sub_821B8258"))) PPC_WEAK_FUNC(sub_821B8258);
PPC_FUNC_IMPL(__imp__sub_821B8258) {
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
	// lwz r11,10876(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10876);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,10872
	r30.s64 = ctx.r9.s64 + 10872;
	// bne 0x821b829c
	if (!cr0.eq) goto loc_821B829C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10876, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-20944
	ctx.r4.s64 = r11.s64 + -20944;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821B829C:
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

__attribute__((alias("__imp__sub_821B82B0"))) PPC_WEAK_FUNC(sub_821B82B0);
PPC_FUNC_IMPL(__imp__sub_821B82B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10876
	r11.s64 = r11.s64 + 10876;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10876
	ctx.r10.s64 = ctx.r10.s64 + 10876;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B82D8"))) PPC_WEAK_FUNC(sub_821B82D8);
PPC_FUNC_IMPL(__imp__sub_821B82D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,-44
	ctx.r3.s64 = r31.s64 + -44;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82325ac8
	sub_82325AC8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-76
	ctx.r3.s64 = r31.s64 + -76;
	// bl 0x821b0888
	sub_821B0888(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B8310"))) PPC_WEAK_FUNC(sub_821B8310);
PPC_FUNC_IMPL(__imp__sub_821B8310) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821221a8
	sub_821221A8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8214f950
	sub_8214F950(ctx, base);
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_821B8380:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821b8380
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_821B8380;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_821B83AC"))) PPC_WEAK_FUNC(sub_821B83AC);
PPC_FUNC_IMPL(__imp__sub_821B83AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B83B0"))) PPC_WEAK_FUNC(sub_821B83B0);
PPC_FUNC_IMPL(__imp__sub_821B83B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-308
	ctx.r3.s64 = ctx.r3.s64 + -308;
	// b 0x8231df20
	sub_8231DF20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B83B8"))) PPC_WEAK_FUNC(sub_821B83B8);
PPC_FUNC_IMPL(__imp__sub_821B83B8) {
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
	// lwz r16,-20864(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20864);
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r4,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// addi r11,r11,8428
	r11.s64 = r11.s64 + 8428;
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x821b8408
	if (cr6.eq) goto loc_821B8408;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_821B8408:
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

__attribute__((alias("__imp__sub_821B83C0"))) PPC_WEAK_FUNC(sub_821B83C0);
PPC_FUNC_IMPL(__imp__sub_821B83C0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r4,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// addi r11,r11,8428
	r11.s64 = r11.s64 + 8428;
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x821b8408
	if (cr6.eq) goto loc_821B8408;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_821B8408:
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

__attribute__((alias("__imp__sub_821B8424"))) PPC_WEAK_FUNC(sub_821B8424);
PPC_FUNC_IMPL(__imp__sub_821B8424) {
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

__attribute__((alias("__imp__sub_821B844C"))) PPC_WEAK_FUNC(sub_821B844C);
PPC_FUNC_IMPL(__imp__sub_821B844C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8450"))) PPC_WEAK_FUNC(sub_821B8450);
PPC_FUNC_IMPL(__imp__sub_821B8450) {
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
	// beq 0x821b8490
	if (cr0.eq) goto loc_821B8490;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,9520
	ctx.r3.s64 = r11.s64 + 9520;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b8498
	goto loc_821B8498;
loc_821B8490:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_821B8498:
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

__attribute__((alias("__imp__sub_821B84B4"))) PPC_WEAK_FUNC(sub_821B84B4);
PPC_FUNC_IMPL(__imp__sub_821B84B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B84B8"))) PPC_WEAK_FUNC(sub_821B84B8);
PPC_FUNC_IMPL(__imp__sub_821B84B8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b8258
	sub_821B8258(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r11,9580
	r31.s64 = r11.s64 + 9580;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// bl 0x823173f0
	sub_823173F0(ctx, base);
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

__attribute__((alias("__imp__sub_821B8518"))) PPC_WEAK_FUNC(sub_821B8518);
PPC_FUNC_IMPL(__imp__sub_821B8518) {
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
	// addi r31,r11,1204
	r31.s64 = r11.s64 + 1204;
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

__attribute__((alias("__imp__sub_821B856C"))) PPC_WEAK_FUNC(sub_821B856C);
PPC_FUNC_IMPL(__imp__sub_821B856C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8570"))) PPC_WEAK_FUNC(sub_821B8570);
PPC_FUNC_IMPL(__imp__sub_821B8570) {
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
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x821b85bc
	if (!cr6.eq) goto loc_821B85BC;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,5336
	ctx.r6.s64 = r11.s64 + 5336;
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
	// bl 0x82150008
	sub_82150008(ctx, base);
loc_821B85BC:
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

__attribute__((alias("__imp__sub_821B85D0"))) PPC_WEAK_FUNC(sub_821B85D0);
PPC_FUNC_IMPL(__imp__sub_821B85D0) {
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
	// bl 0x82126828
	sub_82126828(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b8600
	if (cr0.eq) goto loc_821B8600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_821B8600:
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

__attribute__((alias("__imp__sub_821B861C"))) PPC_WEAK_FUNC(sub_821B861C);
PPC_FUNC_IMPL(__imp__sub_821B861C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8620"))) PPC_WEAK_FUNC(sub_821B8620);
PPC_FUNC_IMPL(__imp__sub_821B8620) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821b8698
	if (cr6.eq) goto loc_821B8698;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,1712
	r29.s64 = r11.s64 + 1712;
loc_821B864C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bne 0x821b86f0
	if (!cr0.eq) goto loc_821B86F0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82133060
	sub_82133060(ctx, base);
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x821b864c
	if (!cr6.eq) goto loc_821B864C;
loc_821B8698:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821b86e8
	if (cr0.eq) goto loc_821B86E8;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x8231e310
	sub_8231E310(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x821b86e8
	if (cr0.eq) goto loc_821B86E8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82133060
	sub_82133060(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x821b8620
	sub_821B8620(ctx, base);
	// b 0x821b86f0
	goto loc_821B86F0;
loc_821B86E8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_821B86F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B86F8"))) PPC_WEAK_FUNC(sub_821B86F8);
PPC_FUNC_IMPL(__imp__sub_821B86F8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821b8770
	if (cr6.eq) goto loc_821B8770;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,1264
	r29.s64 = r11.s64 + 1264;
loc_821B8724:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bne 0x821b87c8
	if (!cr0.eq) goto loc_821B87C8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82133060
	sub_82133060(ctx, base);
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x821b8724
	if (!cr6.eq) goto loc_821B8724;
loc_821B8770:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821b87c0
	if (cr0.eq) goto loc_821B87C0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x8231e310
	sub_8231E310(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x821b87c0
	if (cr0.eq) goto loc_821B87C0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82133060
	sub_82133060(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x821b86f8
	sub_821B86F8(ctx, base);
	// b 0x821b87c8
	goto loc_821B87C8;
loc_821B87C0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_821B87C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B87D0"))) PPC_WEAK_FUNC(sub_821B87D0);
PPC_FUNC_IMPL(__imp__sub_821B87D0) {
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
	// bl 0x821b8450
	sub_821B8450(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b8800
	if (cr0.eq) goto loc_821B8800;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_821B8800:
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

__attribute__((alias("__imp__sub_821B8814"))) PPC_WEAK_FUNC(sub_821B8814);
PPC_FUNC_IMPL(__imp__sub_821B8814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8818"))) PPC_WEAK_FUNC(sub_821B8818);
PPC_FUNC_IMPL(__imp__sub_821B8818) {
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
	// beq 0x821b8840
	if (cr0.eq) goto loc_821B8840;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x821b8848
	goto loc_821B8848;
loc_821B8840:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
loc_821B8848:
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

__attribute__((alias("__imp__sub_821B8864"))) PPC_WEAK_FUNC(sub_821B8864);
PPC_FUNC_IMPL(__imp__sub_821B8864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8868"))) PPC_WEAK_FUNC(sub_821B8868);
PPC_FUNC_IMPL(__imp__sub_821B8868) {
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
	// addi r31,r11,5336
	r31.s64 = r11.s64 + 5336;
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

__attribute__((alias("__imp__sub_821B88C0"))) PPC_WEAK_FUNC(sub_821B88C0);
PPC_FUNC_IMPL(__imp__sub_821B88C0) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-20792(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20792);
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x821b8918
	if (!cr6.eq) goto loc_821B8918;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b8950
	if (cr0.eq) goto loc_821B8950;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821b8950
	goto loc_821B8950;
loc_821B8918:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,5336
	r30.s64 = r11.s64 + 5336;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// bl 0x82318130
	sub_82318130(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82150008
	sub_82150008(ctx, base);
loc_821B8950:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B88C8"))) PPC_WEAK_FUNC(sub_821B88C8);
PPC_FUNC_IMPL(__imp__sub_821B88C8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x821b8918
	if (!cr6.eq) goto loc_821B8918;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b8950
	if (cr0.eq) goto loc_821B8950;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821b8950
	goto loc_821B8950;
loc_821B8918:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,5336
	r30.s64 = r11.s64 + 5336;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// bl 0x82318130
	sub_82318130(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82150008
	sub_82150008(ctx, base);
loc_821B8950:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B895C"))) PPC_WEAK_FUNC(sub_821B895C);
PPC_FUNC_IMPL(__imp__sub_821B895C) {
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

__attribute__((alias("__imp__sub_821B8984"))) PPC_WEAK_FUNC(sub_821B8984);
PPC_FUNC_IMPL(__imp__sub_821B8984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8988"))) PPC_WEAK_FUNC(sub_821B8988);
PPC_FUNC_IMPL(__imp__sub_821B8988) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-20720(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20720);
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x821b89f8
	if (!cr6.eq) goto loc_821B89F8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b89cc
	if (cr0.eq) goto loc_821B89CC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821B89CC:
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b8a28
	if (cr0.eq) goto loc_821B8A28;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821b8a28
	goto loc_821B8A28;
loc_821B89F8:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,1264
	r30.s64 = r11.s64 + 1264;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// bl 0x82318130
	sub_82318130(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
loc_821B8A28:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B8990"))) PPC_WEAK_FUNC(sub_821B8990);
PPC_FUNC_IMPL(__imp__sub_821B8990) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x821b89f8
	if (!cr6.eq) goto loc_821B89F8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b89cc
	if (cr0.eq) goto loc_821B89CC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821B89CC:
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b8a28
	if (cr0.eq) goto loc_821B8A28;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821b8a28
	goto loc_821B8A28;
loc_821B89F8:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,1264
	r30.s64 = r11.s64 + 1264;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// bl 0x82318130
	sub_82318130(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
loc_821B8A28:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B8A34"))) PPC_WEAK_FUNC(sub_821B8A34);
PPC_FUNC_IMPL(__imp__sub_821B8A34) {
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

__attribute__((alias("__imp__sub_821B8A5C"))) PPC_WEAK_FUNC(sub_821B8A5C);
PPC_FUNC_IMPL(__imp__sub_821B8A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8A60"))) PPC_WEAK_FUNC(sub_821B8A60);
PPC_FUNC_IMPL(__imp__sub_821B8A60) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x821b8afc
	goto loc_821B8AFC;
loc_821B8A84:
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b8b14
	if (cr0.eq) goto loc_821B8B14;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b8af8
	if (cr0.eq) goto loc_821B8AF8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x821b8af0
	if (cr6.eq) goto loc_821B8AF0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_821B8AF0:
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x821b8afc
	goto loc_821B8AFC;
loc_821B8AF8:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_821B8AFC:
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
	// bne 0x821b8a84
	if (!cr0.eq) goto loc_821B8A84;
loc_821B8B14:
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b8b64
	if (cr0.eq) goto loc_821B8B64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// beq cr6,0x821b8b64
	if (cr6.eq) goto loc_821B8B64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_821B8B64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821B8B6C"))) PPC_WEAK_FUNC(sub_821B8B6C);
PPC_FUNC_IMPL(__imp__sub_821B8B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8B70"))) PPC_WEAK_FUNC(sub_821B8B70);
PPC_FUNC_IMPL(__imp__sub_821B8B70) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// beq 0x821b8c50
	if (cr0.eq) goto loc_821B8C50;
	// addi r29,r31,264
	r29.s64 = r31.s64 + 264;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// stfs f31,8(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f31,4(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f31,0(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f31,16(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r31,r29
	r11.s64 = r29.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b8c48
	if (cr0.eq) goto loc_821B8C48;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,1204
	r28.s64 = r11.s64 + 1204;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r27,r11,1232
	r27.s64 = r11.s64 + 1232;
loc_821B8BD8:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821b8c20
	if (cr0.eq) goto loc_821B8C20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821c78e8
	sub_821C78E8(ctx, base);
loc_821B8C20:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8226b7d0
	sub_8226B7D0(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r31,r29
	r11.s64 = r29.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b8bd8
	if (!cr0.eq) goto loc_821B8BD8;
loc_821B8C48:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821b8c8c
	goto loc_821B8C8C;
loc_821B8C50:
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x821b8c88
	if (cr6.eq) goto loc_821B8C88;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214f950
	sub_8214F950(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// b 0x821b8c48
	goto loc_821B8C48;
loc_821B8C88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B8C8C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821B8C98"))) PPC_WEAK_FUNC(sub_821B8C98);
PPC_FUNC_IMPL(__imp__sub_821B8C98) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,-224(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + -224);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b8d2c
	if (cr0.eq) goto loc_821B8D2C;
	// addi r30,r29,48
	r30.s64 = r29.s64 + 48;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x821b8cd8
	goto loc_821B8CD8;
loc_821B8CC0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_821B8CD8:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b8cc0
	if (!cr0.eq) goto loc_821B8CC0;
	// addi r30,r29,56
	r30.s64 = r29.s64 + 56;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x821b8d14
	goto loc_821B8D14;
loc_821B8CFC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_821B8D14:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b8cfc
	if (!cr0.eq) goto loc_821B8CFC;
loc_821B8D2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B8D34"))) PPC_WEAK_FUNC(sub_821B8D34);
PPC_FUNC_IMPL(__imp__sub_821B8D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8D38"))) PPC_WEAK_FUNC(sub_821B8D38);
PPC_FUNC_IMPL(__imp__sub_821B8D38) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x821b8d6c
	goto loc_821B8D6C;
loc_821B8D54:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_821B8D6C:
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
	// bne 0x821b8d54
	if (!cr0.eq) goto loc_821B8D54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b3f78
	sub_821B3F78(ctx, base);
	// addi r11,r31,-360
	r11.s64 = r31.s64 + -360;
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
	// beq 0x821b8df4
	if (cr0.eq) goto loc_821B8DF4;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r10,-356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -356);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1740
	ctx.r6.s64 = r11.s64 + 1740;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,1688
	ctx.r5.s64 = r11.s64 + 1688;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r3,-328(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -328);
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x821b8df4
	if (cr0.eq) goto loc_821B8DF4;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x823266e8
	sub_823266E8(ctx, base);
loc_821B8DF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B8DFC"))) PPC_WEAK_FUNC(sub_821B8DFC);
PPC_FUNC_IMPL(__imp__sub_821B8DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8E00"))) PPC_WEAK_FUNC(sub_821B8E00);
PPC_FUNC_IMPL(__imp__sub_821B8E00) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x821b8e34
	goto loc_821B8E34;
loc_821B8E1C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_821B8E34:
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
	// bne 0x821b8e1c
	if (!cr0.eq) goto loc_821B8E1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b4048
	sub_821B4048(ctx, base);
	// addi r11,r31,-360
	r11.s64 = r31.s64 + -360;
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
	// beq 0x821b8ebc
	if (cr0.eq) goto loc_821B8EBC;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r10,-356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -356);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1740
	ctx.r6.s64 = r11.s64 + 1740;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,1688
	ctx.r5.s64 = r11.s64 + 1688;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r3,-328(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -328);
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x821b8ebc
	if (cr0.eq) goto loc_821B8EBC;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82325a20
	sub_82325A20(ctx, base);
loc_821B8EBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B8EC4"))) PPC_WEAK_FUNC(sub_821B8EC4);
PPC_FUNC_IMPL(__imp__sub_821B8EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8EC8"))) PPC_WEAK_FUNC(sub_821B8EC8);
PPC_FUNC_IMPL(__imp__sub_821B8EC8) {
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
	// lwz r16,-20648(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20648);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r29,r11,264
	r29.s64 = r11.s64 + 264;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r10,r10,r29
	ctx.r10.s64 = r29.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x821b8f88
	if (!cr0.eq) goto loc_821B8F88;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// lwz r30,304(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 304);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821b81a8
	sub_821B81A8(ctx, base);
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
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
	// beq 0x821b8f58
	if (cr0.eq) goto loc_821B8F58;
loc_821B8F34:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x821b2800
	sub_821B2800(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// bne 0x821b8f34
	if (!cr0.eq) goto loc_821B8F34;
loc_821B8F58:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821b8f88
	if (cr6.eq) goto loc_821B8F88;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r11,11632(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11632);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x821b8f88
	if (cr6.eq) goto loc_821B8F88;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B8F88:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B8ED0"))) PPC_WEAK_FUNC(sub_821B8ED0);
PPC_FUNC_IMPL(__imp__sub_821B8ED0) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r29,r11,264
	r29.s64 = r11.s64 + 264;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r10,r10,r29
	ctx.r10.s64 = r29.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x821b8f88
	if (!cr0.eq) goto loc_821B8F88;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// lwz r30,304(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 304);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821b81a8
	sub_821B81A8(ctx, base);
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
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
	// beq 0x821b8f58
	if (cr0.eq) goto loc_821B8F58;
loc_821B8F34:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x821b2800
	sub_821B2800(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// bne 0x821b8f34
	if (!cr0.eq) goto loc_821B8F34;
loc_821B8F58:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821b8f88
	if (cr6.eq) goto loc_821B8F88;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r11,11632(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11632);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x821b8f88
	if (cr6.eq) goto loc_821B8F88;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B8F88:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B8F90"))) PPC_WEAK_FUNC(sub_821B8F90);
PPC_FUNC_IMPL(__imp__sub_821B8F90) {
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
	// bl 0x821b8218
	sub_821B8218(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B8FB8"))) PPC_WEAK_FUNC(sub_821B8FB8);
PPC_FUNC_IMPL(__imp__sub_821B8FB8) {
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
	// addi r30,r3,264
	r30.s64 = ctx.r3.s64 + 264;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,-1
	r29.s64 = -1;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x821b901c
	goto loc_821B901C;
loc_821B8FD8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq 0x821b900c
	if (cr0.eq) goto loc_821B900C;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x821b9018
	goto loc_821B9018;
loc_821B900C:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x821b9040
	if (!cr6.eq) goto loc_821B9040;
loc_821B9018:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_821B901C:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b8fd8
	if (!cr0.eq) goto loc_821B8FD8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_821B9038:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_821B9040:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b9038
	goto loc_821B9038;
}

__attribute__((alias("__imp__sub_821B9048"))) PPC_WEAK_FUNC(sub_821B9048);
PPC_FUNC_IMPL(__imp__sub_821B9048) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r30,r28,264
	r30.s64 = r28.s64 + 264;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// b 0x821b9100
	goto loc_821B9100;
loc_821B908C:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821b2c18
	sub_821B2C18(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821b90fc
	if (cr0.eq) goto loc_821B90FC;
	// addi r11,r28,-128
	r11.s64 = r28.s64 + -128;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b9128
	if (!cr0.eq) goto loc_821B9128;
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// bl 0x82122100
	sub_82122100(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
loc_821B90FC:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_821B9100:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b908c
	if (!cr0.eq) goto loc_821B908C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821B911C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
loc_821B9128:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// addic. r11,r28,-128
	xer.ca = r28.u32 > 127;
	r11.s64 = r28.s64 + -128;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bne 0x821b911c
	if (!cr0.eq) goto loc_821B911C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b911c
	goto loc_821B911C;
}

__attribute__((alias("__imp__sub_821B9144"))) PPC_WEAK_FUNC(sub_821B9144);
PPC_FUNC_IMPL(__imp__sub_821B9144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9148"))) PPC_WEAK_FUNC(sub_821B9148);
PPC_FUNC_IMPL(__imp__sub_821B9148) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r31,-128
	r11.s64 = r31.s64 + -128;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
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
	// beq 0x821b9194
	if (cr0.eq) goto loc_821B9194;
	// bl 0x821b3d88
	sub_821B3D88(ctx, base);
	// b 0x821b91e4
	goto loc_821B91E4;
loc_821B9194:
	// bl 0x821b2b90
	sub_821B2B90(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b91e4
	if (cr0.eq) goto loc_821B91E4;
	// addi r30,r31,264
	r30.s64 = r31.s64 + 264;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x821b91cc
	goto loc_821B91CC;
loc_821B91AC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_821B91CC:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b91ac
	if (!cr0.eq) goto loc_821B91AC;
loc_821B91E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B91EC"))) PPC_WEAK_FUNC(sub_821B91EC);
PPC_FUNC_IMPL(__imp__sub_821B91EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B91F0"))) PPC_WEAK_FUNC(sub_821B91F0);
PPC_FUNC_IMPL(__imp__sub_821B91F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// lbz r11,-28(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -28);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b9268
	if (cr0.eq) goto loc_821B9268;
	// addi r30,r3,236
	r30.s64 = ctx.r3.s64 + 236;
	// stfs f31,8(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x821b9250
	goto loc_821B9250;
loc_821B9230:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_821B9250:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b9230
	if (!cr0.eq) goto loc_821B9230;
loc_821B9268:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_821B9288"))) PPC_WEAK_FUNC(sub_821B9288);
PPC_FUNC_IMPL(__imp__sub_821B9288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,236
	r30.s64 = ctx.r3.s64 + 236;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// b 0x821b92d8
	goto loc_821B92D8;
loc_821B92B4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// bge cr6,0x821b92d4
	if (!cr6.lt) goto loc_821B92D4;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
loc_821B92D4:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_821B92D8:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b92b4
	if (!cr0.eq) goto loc_821B92B4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
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

__attribute__((alias("__imp__sub_821B9310"))) PPC_WEAK_FUNC(sub_821B9310);
PPC_FUNC_IMPL(__imp__sub_821B9310) {
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
	// li r11,9
	r11.s64 = 9;
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
	// addi r3,r30,-308
	ctx.r3.s64 = r30.s64 + -308;
	// bl 0x8231e9f0
	sub_8231E9F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-256
	ctx.r3.s64 = r30.s64 + -256;
	// bl 0x821e7640
	sub_821E7640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-272
	ctx.r3.s64 = r30.s64 + -272;
	// bl 0x821b2a18
	sub_821B2A18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-76
	ctx.r3.s64 = r30.s64 + -76;
	// bl 0x821afb80
	sub_821AFB80(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b8818
	sub_821B8818(ctx, base);
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

__attribute__((alias("__imp__sub_821B9398"))) PPC_WEAK_FUNC(sub_821B9398);
PPC_FUNC_IMPL(__imp__sub_821B9398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-20552(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20552);
	// mflr r12
	// bl 0x8239bce0
	// addi r31,r1,-384
	r31.s64 = ctx.r1.s64 + -384;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x821b95c4
	if (!cr6.gt) goto loc_821B95C4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r23,r11,2488
	r23.s64 = r11.s64 + 2488;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r25,r11,1688
	r25.s64 = r11.s64 + 1688;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r24,r11,1664
	r24.s64 = r11.s64 + 1664;
loc_821B93F4:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// stw r23,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r23.u32);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82132d78
	sub_82132D78(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r30,r31,256
	r30.s64 = r31.s64 + 256;
	// addi r29,r31,240
	r29.s64 = r31.s64 + 240;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r31,272
	ctx.r4.s64 = r31.s64 + 272;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// cmpwi cr6,r22,11
	cr6.compare<int32_t>(r22.s32, 11, xer);
	// ble cr6,0x821b9478
	if (!cr6.gt) goto loc_821B9478;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
	// b 0x821b9484
	goto loc_821B9484;
loc_821B9478:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82353618
	sub_82353618(ctx, base);
loc_821B9484:
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// cmpwi cr6,r22,11
	cr6.compare<int32_t>(r22.s32, 11, xer);
	// ble cr6,0x821b94b8
	if (!cr6.gt) goto loc_821B94B8;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x821b94c0
	goto loc_821B94C0;
loc_821B94B8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
loc_821B94C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82325568
	sub_82325568(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
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
	// addi r29,r30,180
	r29.s64 = r30.s64 + 180;
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x8212a040
	sub_8212A040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stfs f0,160(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 160, temp.u32);
	// stb r11,136(r30)
	PPC_STORE_U8(r30.u32 + 136, r11.u8);
	// lwz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// bl 0x821b8868
	sub_821B8868(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,424
	ctx.r3.s64 = r30.s64 + 424;
	// bl 0x82150008
	sub_82150008(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x821b93f4
	if (cr6.lt) goto loc_821B93F4;
loc_821B95C4:
	// addi r1,r31,384
	ctx.r1.s64 = r31.s64 + 384;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_821B93A0"))) PPC_WEAK_FUNC(sub_821B93A0);
PPC_FUNC_IMPL(__imp__sub_821B93A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// addi r31,r1,-384
	r31.s64 = ctx.r1.s64 + -384;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x821b95c4
	if (!cr6.gt) goto loc_821B95C4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r23,r11,2488
	r23.s64 = r11.s64 + 2488;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r25,r11,1688
	r25.s64 = r11.s64 + 1688;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r24,r11,1664
	r24.s64 = r11.s64 + 1664;
loc_821B93F4:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// stw r23,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r23.u32);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82132d78
	sub_82132D78(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r30,r31,256
	r30.s64 = r31.s64 + 256;
	// addi r29,r31,240
	r29.s64 = r31.s64 + 240;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r31,272
	ctx.r4.s64 = r31.s64 + 272;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// cmpwi cr6,r22,11
	cr6.compare<int32_t>(r22.s32, 11, xer);
	// ble cr6,0x821b9478
	if (!cr6.gt) goto loc_821B9478;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
	// b 0x821b9484
	goto loc_821B9484;
loc_821B9478:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82353618
	sub_82353618(ctx, base);
loc_821B9484:
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// cmpwi cr6,r22,11
	cr6.compare<int32_t>(r22.s32, 11, xer);
	// ble cr6,0x821b94b8
	if (!cr6.gt) goto loc_821B94B8;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x821b94c0
	goto loc_821B94C0;
loc_821B94B8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
loc_821B94C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82325568
	sub_82325568(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
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
	// addi r29,r30,180
	r29.s64 = r30.s64 + 180;
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x8212a040
	sub_8212A040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stfs f0,160(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 160, temp.u32);
	// stb r11,136(r30)
	PPC_STORE_U8(r30.u32 + 136, r11.u8);
	// lwz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// bl 0x821b8868
	sub_821B8868(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,424
	ctx.r3.s64 = r30.s64 + 424;
	// bl 0x82150008
	sub_82150008(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x821b93f4
	if (cr6.lt) goto loc_821B93F4;
loc_821B95C4:
	// addi r1,r31,384
	ctx.r1.s64 = r31.s64 + 384;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_821B95CC"))) PPC_WEAK_FUNC(sub_821B95CC);
PPC_FUNC_IMPL(__imp__sub_821B95CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
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

__attribute__((alias("__imp__sub_821B95F4"))) PPC_WEAK_FUNC(sub_821B95F4);
PPC_FUNC_IMPL(__imp__sub_821B95F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
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

__attribute__((alias("__imp__sub_821B961C"))) PPC_WEAK_FUNC(sub_821B961C);
PPC_FUNC_IMPL(__imp__sub_821B961C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
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

__attribute__((alias("__imp__sub_821B9644"))) PPC_WEAK_FUNC(sub_821B9644);
PPC_FUNC_IMPL(__imp__sub_821B9644) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
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

__attribute__((alias("__imp__sub_821B966C"))) PPC_WEAK_FUNC(sub_821B966C);
PPC_FUNC_IMPL(__imp__sub_821B966C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9670"))) PPC_WEAK_FUNC(sub_821B9670);
PPC_FUNC_IMPL(__imp__sub_821B9670) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r29,r27
	r29.u64 = r27.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r26,r11,1
	r26.u64 = r11.u64 ^ 1;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x821b9700
	if (!cr0.gt) goto loc_821B9700;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_821B96D0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bl 0x821b8518
	sub_821B8518(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821b96ec
	if (cr0.eq) goto loc_821B96EC;
	// stb r26,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r26.u8);
loc_821B96EC:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x821b96d0
	if (cr6.lt) goto loc_821B96D0;
loc_821B9700:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821B9714"))) PPC_WEAK_FUNC(sub_821B9714);
PPC_FUNC_IMPL(__imp__sub_821B9714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9718"))) PPC_WEAK_FUNC(sub_821B9718);
PPC_FUNC_IMPL(__imp__sub_821B9718) {
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
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// bne 0x821b9740
	if (!cr0.eq) goto loc_821B9740;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_821B9740:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x821b9774
	if (cr6.eq) goto loc_821B9774;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82133060
	sub_82133060(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x821b8620
	sub_821B8620(ctx, base);
	// b 0x821b977c
	goto loc_821B977C;
loc_821B9774:
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_821B977C:
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

__attribute__((alias("__imp__sub_821B9794"))) PPC_WEAK_FUNC(sub_821B9794);
PPC_FUNC_IMPL(__imp__sub_821B9794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9798"))) PPC_WEAK_FUNC(sub_821B9798);
PPC_FUNC_IMPL(__imp__sub_821B9798) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b97d8
	if (cr0.eq) goto loc_821B97D8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x82133060
	sub_82133060(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x821b8620
	sub_821B8620(ctx, base);
loc_821B97D8:
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

__attribute__((alias("__imp__sub_821B97F0"))) PPC_WEAK_FUNC(sub_821B97F0);
PPC_FUNC_IMPL(__imp__sub_821B97F0) {
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
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// bne 0x821b9818
	if (!cr0.eq) goto loc_821B9818;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_821B9818:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x821b984c
	if (cr6.eq) goto loc_821B984C;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82133060
	sub_82133060(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x821b86f8
	sub_821B86F8(ctx, base);
	// b 0x821b9854
	goto loc_821B9854;
loc_821B984C:
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_821B9854:
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

__attribute__((alias("__imp__sub_821B986C"))) PPC_WEAK_FUNC(sub_821B986C);
PPC_FUNC_IMPL(__imp__sub_821B986C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9870"))) PPC_WEAK_FUNC(sub_821B9870);
PPC_FUNC_IMPL(__imp__sub_821B9870) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b98b0
	if (cr0.eq) goto loc_821B98B0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x82133060
	sub_82133060(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x821b86f8
	sub_821B86F8(ctx, base);
loc_821B98B0:
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

__attribute__((alias("__imp__sub_821B98C8"))) PPC_WEAK_FUNC(sub_821B98C8);
PPC_FUNC_IMPL(__imp__sub_821B98C8) {
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
	// bl 0x821b87d0
	sub_821B87D0(ctx, base);
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

__attribute__((alias("__imp__sub_821B992C"))) PPC_WEAK_FUNC(sub_821B992C);
PPC_FUNC_IMPL(__imp__sub_821B992C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9930"))) PPC_WEAK_FUNC(sub_821B9930);
PPC_FUNC_IMPL(__imp__sub_821B9930) {
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

__attribute__((alias("__imp__sub_821B9984"))) PPC_WEAK_FUNC(sub_821B9984);
PPC_FUNC_IMPL(__imp__sub_821B9984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9988"))) PPC_WEAK_FUNC(sub_821B9988);
PPC_FUNC_IMPL(__imp__sub_821B9988) {
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

__attribute__((alias("__imp__sub_821B99DC"))) PPC_WEAK_FUNC(sub_821B99DC);
PPC_FUNC_IMPL(__imp__sub_821B99DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B99E0"))) PPC_WEAK_FUNC(sub_821B99E0);
PPC_FUNC_IMPL(__imp__sub_821B99E0) {
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
	// b 0x821b9a10
	goto loc_821B9A10;
loc_821B9A00:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821B9A10:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x821b9a00
	if (!cr6.eq) goto loc_821B9A00;
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

__attribute__((alias("__imp__sub_821B9A38"))) PPC_WEAK_FUNC(sub_821B9A38);
PPC_FUNC_IMPL(__imp__sub_821B9A38) {
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
	// b 0x821b9aa4
	goto loc_821B9AA4;
loc_821B9A58:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b9a78
	if (cr0.eq) goto loc_821B9A78;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821B9A78:
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b9a9c
	if (cr0.eq) goto loc_821B9A9C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82152ae8
	sub_82152AE8(ctx, base);
loc_821B9A9C:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_821B9AA4:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b9a58
	if (!cr0.eq) goto loc_821B9A58;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B9AC0"))) PPC_WEAK_FUNC(sub_821B9AC0);
PPC_FUNC_IMPL(__imp__sub_821B9AC0) {
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
	// b 0x821b9b2c
	goto loc_821B9B2C;
loc_821B9AE0:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b9b00
	if (cr0.eq) goto loc_821B9B00;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821B9B00:
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b9b24
	if (cr0.eq) goto loc_821B9B24;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821b9988
	sub_821B9988(ctx, base);
loc_821B9B24:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_821B9B2C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b9ae0
	if (!cr0.eq) goto loc_821B9AE0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B9B48"))) PPC_WEAK_FUNC(sub_821B9B48);
PPC_FUNC_IMPL(__imp__sub_821B9B48) {
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
	// b 0x821b9bb4
	goto loc_821B9BB4;
loc_821B9B68:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b9b88
	if (cr0.eq) goto loc_821B9B88;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821B9B88:
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b9bac
	if (cr0.eq) goto loc_821B9BAC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821b9930
	sub_821B9930(ctx, base);
loc_821B9BAC:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_821B9BB4:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b9b68
	if (!cr0.eq) goto loc_821B9B68;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B9BD0"))) PPC_WEAK_FUNC(sub_821B9BD0);
PPC_FUNC_IMPL(__imp__sub_821B9BD0) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x821b9c00
	if (cr0.eq) goto loc_821B9C00;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x821b9c18
	goto loc_821B9C18;
loc_821B9C00:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x821b9c28
	if (cr0.eq) goto loc_821B9C28;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
loc_821B9C18:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82370ed8
	sub_82370ED8(ctx, base);
	// b 0x821b9c58
	goto loc_821B9C58;
loc_821B9C28:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_821B9C58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B9C68"))) PPC_WEAK_FUNC(sub_821B9C68);
PPC_FUNC_IMPL(__imp__sub_821B9C68) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// b 0x821b9ca8
	goto loc_821B9CA8;
loc_821B9C88:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r6,r31,8
	ctx.r6.s64 = r31.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82187ad8
	sub_82187AD8(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_821B9CA8:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b9c88
	if (!cr0.eq) goto loc_821B9C88;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B9CC8"))) PPC_WEAK_FUNC(sub_821B9CC8);
PPC_FUNC_IMPL(__imp__sub_821B9CC8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// b 0x821b9d14
	goto loc_821B9D14;
loc_821B9CE8:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82152a80
	sub_82152A80(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_821B9D14:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b9ce8
	if (!cr0.eq) goto loc_821B9CE8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B9D3C"))) PPC_WEAK_FUNC(sub_821B9D3C);
PPC_FUNC_IMPL(__imp__sub_821B9D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9D40"))) PPC_WEAK_FUNC(sub_821B9D40);
PPC_FUNC_IMPL(__imp__sub_821B9D40) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// b 0x821b9d80
	goto loc_821B9D80;
loc_821B9D60:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r6,r31,8
	ctx.r6.s64 = r31.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x821b98c8
	sub_821B98C8(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_821B9D80:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b9d60
	if (!cr0.eq) goto loc_821B9D60;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B9DA0"))) PPC_WEAK_FUNC(sub_821B9DA0);
PPC_FUNC_IMPL(__imp__sub_821B9DA0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r30,-308
	ctx.r3.s64 = r30.s64 + -308;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x823209a8
	sub_823209A8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-256
	ctx.r3.s64 = r30.s64 + -256;
	// bl 0x821e76c0
	sub_821E76C0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-272
	ctx.r3.s64 = r30.s64 + -272;
	// bl 0x821b2938
	sub_821B2938(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-76
	ctx.r3.s64 = r30.s64 + -76;
	// bl 0x821b0908
	sub_821B0908(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1664
	ctx.r6.s64 = r11.s64 + 1664;
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
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b9e2c
	if (cr0.eq) goto loc_821B9E2C;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// beq cr6,0x821b9e2c
	if (cr6.eq) goto loc_821B9E2C;
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x82150008
	sub_82150008(ctx, base);
loc_821B9E2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B9E34"))) PPC_WEAK_FUNC(sub_821B9E34);
PPC_FUNC_IMPL(__imp__sub_821B9E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9E38"))) PPC_WEAK_FUNC(sub_821B9E38);
PPC_FUNC_IMPL(__imp__sub_821B9E38) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-20360(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20360);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,10884(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10884);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r28,r9,10880
	r28.s64 = ctx.r9.s64 + 10880;
	// bne 0x821b9ea4
	if (!cr0.eq) goto loc_821B9EA4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10884, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-20440
	ctx.r4.s64 = r11.s64 + -20440;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821B9EA4:
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
	// beq 0x821b9efc
	if (cr0.eq) goto loc_821B9EFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-440
	ctx.r4.s64 = r30.s64 + -440;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b9670
	sub_821B9670(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b9efc
	if (cr6.eq) goto loc_821B9EFC;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba11c
	if (cr0.eq) goto loc_821BA11C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_821B9EF4:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821ba11c
	goto loc_821BA11C;
loc_821B9EFC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-308
	ctx.r4.s64 = r30.s64 + -308;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823216e0
	sub_823216E0(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b9f3c
	if (cr6.eq) goto loc_821B9F3C;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba11c
	if (cr0.eq) goto loc_821BA11C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821b9ef4
	goto loc_821B9EF4;
loc_821B9F3C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-256
	ctx.r4.s64 = r30.s64 + -256;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821e9d00
	sub_821E9D00(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b9f7c
	if (cr6.eq) goto loc_821B9F7C;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba11c
	if (cr0.eq) goto loc_821BA11C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821b9ef4
	goto loc_821B9EF4;
loc_821B9F7C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-272
	ctx.r4.s64 = r30.s64 + -272;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b9fbc
	if (cr6.eq) goto loc_821B9FBC;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba11c
	if (cr0.eq) goto loc_821BA11C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821b9ef4
	goto loc_821B9EF4;
loc_821B9FBC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-76
	ctx.r4.s64 = r30.s64 + -76;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b9ffc
	if (cr6.eq) goto loc_821B9FFC;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba11c
	if (cr0.eq) goto loc_821BA11C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x821b9ef4
	goto loc_821B9EF4;
loc_821B9FFC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-72
	ctx.r4.s64 = r30.s64 + -72;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821b3e18
	sub_821B3E18(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821ba03c
	if (cr6.eq) goto loc_821BA03C;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba11c
	if (cr0.eq) goto loc_821BA11C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821b9ef4
	goto loc_821B9EF4;
loc_821BA03C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-44
	ctx.r4.s64 = r30.s64 + -44;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x823267b8
	sub_823267B8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821ba07c
	if (cr6.eq) goto loc_821BA07C;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba11c
	if (cr0.eq) goto loc_821BA11C;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x821b9ef4
	goto loc_821B9EF4;
loc_821BA07C:
	// lwz r11,-344(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -344);
	// lwz r10,-348(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -348);
	// li r26,12
	r26.s64 = 12;
	// mr r27,r24
	r27.u64 = r24.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba110
	if (cr0.eq) goto loc_821BA110;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_821BA09C:
	// lwz r11,-348(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -348);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba0f0
	if (cr0.eq) goto loc_821BA0F0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
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
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba0f0
	if (cr0.eq) goto loc_821BA0F0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821BA0F0:
	// lwz r11,-344(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -344);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,-348(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -348);
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x821ba09c
	if (cr6.lt) goto loc_821BA09C;
loc_821BA110:
	// li r11,6
	r11.s64 = 6;
	// stw r24,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r24.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
loc_821BA11C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_821B9E40"))) PPC_WEAK_FUNC(sub_821B9E40);
PPC_FUNC_IMPL(__imp__sub_821B9E40) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,10884(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10884);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r28,r9,10880
	r28.s64 = ctx.r9.s64 + 10880;
	// bne 0x821b9ea4
	if (!cr0.eq) goto loc_821B9EA4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10884, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-20440
	ctx.r4.s64 = r11.s64 + -20440;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821B9EA4:
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
	// beq 0x821b9efc
	if (cr0.eq) goto loc_821B9EFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-440
	ctx.r4.s64 = r30.s64 + -440;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b9670
	sub_821B9670(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b9efc
	if (cr6.eq) goto loc_821B9EFC;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba11c
	if (cr0.eq) goto loc_821BA11C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_821B9EF4:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821ba11c
	goto loc_821BA11C;
loc_821B9EFC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-308
	ctx.r4.s64 = r30.s64 + -308;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823216e0
	sub_823216E0(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b9f3c
	if (cr6.eq) goto loc_821B9F3C;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba11c
	if (cr0.eq) goto loc_821BA11C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821b9ef4
	goto loc_821B9EF4;
loc_821B9F3C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-256
	ctx.r4.s64 = r30.s64 + -256;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821e9d00
	sub_821E9D00(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b9f7c
	if (cr6.eq) goto loc_821B9F7C;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba11c
	if (cr0.eq) goto loc_821BA11C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821b9ef4
	goto loc_821B9EF4;
loc_821B9F7C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-272
	ctx.r4.s64 = r30.s64 + -272;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b9fbc
	if (cr6.eq) goto loc_821B9FBC;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba11c
	if (cr0.eq) goto loc_821BA11C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821b9ef4
	goto loc_821B9EF4;
loc_821B9FBC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-76
	ctx.r4.s64 = r30.s64 + -76;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b9ffc
	if (cr6.eq) goto loc_821B9FFC;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba11c
	if (cr0.eq) goto loc_821BA11C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x821b9ef4
	goto loc_821B9EF4;
loc_821B9FFC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-72
	ctx.r4.s64 = r30.s64 + -72;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821b3e18
	sub_821B3E18(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821ba03c
	if (cr6.eq) goto loc_821BA03C;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba11c
	if (cr0.eq) goto loc_821BA11C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821b9ef4
	goto loc_821B9EF4;
loc_821BA03C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-44
	ctx.r4.s64 = r30.s64 + -44;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x823267b8
	sub_823267B8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821ba07c
	if (cr6.eq) goto loc_821BA07C;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba11c
	if (cr0.eq) goto loc_821BA11C;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x821b9ef4
	goto loc_821B9EF4;
loc_821BA07C:
	// lwz r11,-344(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -344);
	// lwz r10,-348(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -348);
	// li r26,12
	r26.s64 = 12;
	// mr r27,r24
	r27.u64 = r24.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba110
	if (cr0.eq) goto loc_821BA110;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_821BA09C:
	// lwz r11,-348(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -348);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba0f0
	if (cr0.eq) goto loc_821BA0F0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
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
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba0f0
	if (cr0.eq) goto loc_821BA0F0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821BA0F0:
	// lwz r11,-344(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -344);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,-348(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -348);
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x821ba09c
	if (cr6.lt) goto loc_821BA09C;
loc_821BA110:
	// li r11,6
	r11.s64 = 6;
	// stw r24,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r24.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
loc_821BA11C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_821BA128"))) PPC_WEAK_FUNC(sub_821BA128);
PPC_FUNC_IMPL(__imp__sub_821BA128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10884
	r11.s64 = r11.s64 + 10884;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10884
	ctx.r10.s64 = ctx.r10.s64 + 10884;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BA150"))) PPC_WEAK_FUNC(sub_821BA150);
PPC_FUNC_IMPL(__imp__sub_821BA150) {
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

__attribute__((alias("__imp__sub_821BA178"))) PPC_WEAK_FUNC(sub_821BA178);
PPC_FUNC_IMPL(__imp__sub_821BA178) {
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

__attribute__((alias("__imp__sub_821BA1A0"))) PPC_WEAK_FUNC(sub_821BA1A0);
PPC_FUNC_IMPL(__imp__sub_821BA1A0) {
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

__attribute__((alias("__imp__sub_821BA1C8"))) PPC_WEAK_FUNC(sub_821BA1C8);
PPC_FUNC_IMPL(__imp__sub_821BA1C8) {
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

__attribute__((alias("__imp__sub_821BA1F0"))) PPC_WEAK_FUNC(sub_821BA1F0);
PPC_FUNC_IMPL(__imp__sub_821BA1F0) {
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

__attribute__((alias("__imp__sub_821BA218"))) PPC_WEAK_FUNC(sub_821BA218);
PPC_FUNC_IMPL(__imp__sub_821BA218) {
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

__attribute__((alias("__imp__sub_821BA240"))) PPC_WEAK_FUNC(sub_821BA240);
PPC_FUNC_IMPL(__imp__sub_821BA240) {
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

__attribute__((alias("__imp__sub_821BA268"))) PPC_WEAK_FUNC(sub_821BA268);
PPC_FUNC_IMPL(__imp__sub_821BA268) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r11,r31
	ctx.r10.s64 = r31.s64 - r11.s64;
	// b 0x821ba2b8
	goto loc_821BA2B8;
loc_821BA288:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x821ba2b0
	if (!cr6.eq) goto loc_821BA2B0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821b9930
	sub_821B9930(ctx, base);
loc_821BA2B0:
	// subf r10,r30,r31
	ctx.r10.s64 = r31.s64 - r30.s64;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_821BA2B8:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x821ba288
	if (!cr0.eq) goto loc_821BA288;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821BA2D4"))) PPC_WEAK_FUNC(sub_821BA2D4);
PPC_FUNC_IMPL(__imp__sub_821BA2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BA2D8"))) PPC_WEAK_FUNC(sub_821BA2D8);
PPC_FUNC_IMPL(__imp__sub_821BA2D8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r11,r31
	ctx.r10.s64 = r31.s64 - r11.s64;
	// b 0x821ba328
	goto loc_821BA328;
loc_821BA2F8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x821ba320
	if (!cr6.eq) goto loc_821BA320;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821b9988
	sub_821B9988(ctx, base);
loc_821BA320:
	// subf r10,r30,r31
	ctx.r10.s64 = r31.s64 - r30.s64;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_821BA328:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x821ba2f8
	if (!cr0.eq) goto loc_821BA2F8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821BA344"))) PPC_WEAK_FUNC(sub_821BA344);
PPC_FUNC_IMPL(__imp__sub_821BA344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BA348"))) PPC_WEAK_FUNC(sub_821BA348);
PPC_FUNC_IMPL(__imp__sub_821BA348) {
	PPC_FUNC_PROLOGUE();
	// b 0x821b99e0
	sub_821B99E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BA34C"))) PPC_WEAK_FUNC(sub_821BA34C);
PPC_FUNC_IMPL(__imp__sub_821BA34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BA350"))) PPC_WEAK_FUNC(sub_821BA350);
PPC_FUNC_IMPL(__imp__sub_821BA350) {
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
	// bl 0x8231e038
	sub_8231E038(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,392
	ctx.r3.s64 = r31.s64 + 392;
	// bl 0x821b9a38
	sub_821B9A38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,408
	ctx.r3.s64 = r31.s64 + 408;
	// bl 0x821b9ac0
	sub_821B9AC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// bl 0x821b9b48
	sub_821B9B48(ctx, base);
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

__attribute__((alias("__imp__sub_821BA3AC"))) PPC_WEAK_FUNC(sub_821BA3AC);
PPC_FUNC_IMPL(__imp__sub_821BA3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BA3B0"))) PPC_WEAK_FUNC(sub_821BA3B0);
PPC_FUNC_IMPL(__imp__sub_821BA3B0) {
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
	// addi r31,r3,416
	r31.s64 = ctx.r3.s64 + 416;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82313778
	sub_82313778(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821ba3f4
	if (!cr0.eq) goto loc_821BA3F4;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82187ad8
	sub_82187AD8(ctx, base);
loc_821BA3F4:
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

__attribute__((alias("__imp__sub_821BA408"))) PPC_WEAK_FUNC(sub_821BA408);
PPC_FUNC_IMPL(__imp__sub_821BA408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r3,r3,416
	ctx.r3.s64 = ctx.r3.s64 + 416;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x821ba2d8
	sub_821BA2D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BA434"))) PPC_WEAK_FUNC(sub_821BA434);
PPC_FUNC_IMPL(__imp__sub_821BA434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BA438"))) PPC_WEAK_FUNC(sub_821BA438);
PPC_FUNC_IMPL(__imp__sub_821BA438) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bgt cr6,0x821ba4a4
	if (cr6.gt) goto loc_821BA4A4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-308
	ctx.r3.s64 = r30.s64 + -308;
	// bl 0x82322598
	sub_82322598(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-4904
	ctx.r4.s64 = r11.s64 + -4904;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x821281a0
	sub_821281A0(ctx, base);
loc_821BA4A4:
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

__attribute__((alias("__imp__sub_821BA4BC"))) PPC_WEAK_FUNC(sub_821BA4BC);
PPC_FUNC_IMPL(__imp__sub_821BA4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BA4C0"))) PPC_WEAK_FUNC(sub_821BA4C0);
PPC_FUNC_IMPL(__imp__sub_821BA4C0) {
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
	// lwz r16,-20176(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20176);
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82128448
	sub_82128448(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-308
	ctx.r3.s64 = r30.s64 + -308;
	// bl 0x8231ff08
	sub_8231FF08(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-256
	ctx.r3.s64 = r30.s64 + -256;
	// bl 0x821e96c0
	sub_821E96C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-272
	ctx.r3.s64 = r30.s64 + -272;
	// bl 0x821b36c0
	sub_821B36C0(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x821ba520
	if (!cr6.gt) goto loc_821BA520;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-76
	ctx.r3.s64 = r30.s64 + -76;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
loc_821BA520:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// ble cr6,0x821ba594
	if (!cr6.gt) goto loc_821BA594;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lbz r11,-4936(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -4936);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821ba588
	if (cr0.eq) goto loc_821BA588;
	// addic. r11,r30,-440
	xer.ca = r30.u32 > 439;
	r11.s64 = r30.s64 + -440;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821ba548
	if (!cr0.eq) goto loc_821BA548;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821ba558
	goto loc_821BA558;
loc_821BA548:
	// lwz r11,-436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -436);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-436
	ctx.r4.s64 = r11.s64 + -436;
loc_821BA558:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b83c0
	sub_821B83C0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,-20812
	r11.s64 = r11.s64 + -20812;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82150fa0
	sub_82150FA0(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82126828
	sub_82126828(ctx, base);
	// b 0x821ba594
	goto loc_821BA594;
loc_821BA588:
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82150fa0
	sub_82150FA0(ctx, base);
loc_821BA594:
	// addi r11,r28,-3
	r11.s64 = r28.s64 + -3;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x821ba5d8
	if (cr6.gt) goto loc_821BA5D8;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82359638
	sub_82359638(ctx, base);
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(r28.s32, 3, xer);
	// ble cr6,0x821ba5d8
	if (!cr6.gt) goto loc_821BA5D8;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// bl 0x82359638
	sub_82359638(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82359638
	sub_82359638(ctx, base);
loc_821BA5D8:
	// addi r11,r28,-5
	r11.s64 = r28.s64 + -5;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bgt cr6,0x821ba618
	if (cr6.gt) goto loc_821BA618;
	// bl 0x821b84b8
	sub_821B84B8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x821eb3d0
	sub_821EB3D0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x821ba618
	if (cr6.eq) goto loc_821BA618;
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
loc_821BA618:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821BA4C8"))) PPC_WEAK_FUNC(sub_821BA4C8);
PPC_FUNC_IMPL(__imp__sub_821BA4C8) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82128448
	sub_82128448(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-308
	ctx.r3.s64 = r30.s64 + -308;
	// bl 0x8231ff08
	sub_8231FF08(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-256
	ctx.r3.s64 = r30.s64 + -256;
	// bl 0x821e96c0
	sub_821E96C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-272
	ctx.r3.s64 = r30.s64 + -272;
	// bl 0x821b36c0
	sub_821B36C0(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x821ba520
	if (!cr6.gt) goto loc_821BA520;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-76
	ctx.r3.s64 = r30.s64 + -76;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
loc_821BA520:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// ble cr6,0x821ba594
	if (!cr6.gt) goto loc_821BA594;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lbz r11,-4936(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -4936);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821ba588
	if (cr0.eq) goto loc_821BA588;
	// addic. r11,r30,-440
	xer.ca = r30.u32 > 439;
	r11.s64 = r30.s64 + -440;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821ba548
	if (!cr0.eq) goto loc_821BA548;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821ba558
	goto loc_821BA558;
loc_821BA548:
	// lwz r11,-436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -436);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-436
	ctx.r4.s64 = r11.s64 + -436;
loc_821BA558:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b83c0
	sub_821B83C0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,-20812
	r11.s64 = r11.s64 + -20812;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82150fa0
	sub_82150FA0(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82126828
	sub_82126828(ctx, base);
	// b 0x821ba594
	goto loc_821BA594;
loc_821BA588:
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82150fa0
	sub_82150FA0(ctx, base);
loc_821BA594:
	// addi r11,r28,-3
	r11.s64 = r28.s64 + -3;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x821ba5d8
	if (cr6.gt) goto loc_821BA5D8;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82359638
	sub_82359638(ctx, base);
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(r28.s32, 3, xer);
	// ble cr6,0x821ba5d8
	if (!cr6.gt) goto loc_821BA5D8;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// bl 0x82359638
	sub_82359638(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82359638
	sub_82359638(ctx, base);
loc_821BA5D8:
	// addi r11,r28,-5
	r11.s64 = r28.s64 + -5;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bgt cr6,0x821ba618
	if (cr6.gt) goto loc_821BA618;
	// bl 0x821b84b8
	sub_821B84B8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x821eb3d0
	sub_821EB3D0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x821ba618
	if (cr6.eq) goto loc_821BA618;
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
loc_821BA618:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821BA620"))) PPC_WEAK_FUNC(sub_821BA620);
PPC_FUNC_IMPL(__imp__sub_821BA620) {
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
	// bl 0x82126e80
	sub_82126E80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BA648"))) PPC_WEAK_FUNC(sub_821BA648);
PPC_FUNC_IMPL(__imp__sub_821BA648) {
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
	// lwz r16,-20104(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20104);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// bne cr6,0x821ba6e0
	if (!cr6.eq) goto loc_821BA6E0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821ba694
	goto loc_821BA694;
loc_821BA68C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_821BA694:
	// subf r9,r11,r28
	ctx.r9.s64 = r28.s64 - r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x821ba68c
	if (!cr0.eq) goto loc_821BA68C;
	// li r11,0
	r11.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
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
	// beq 0x821ba6d8
	if (cr0.eq) goto loc_821BA6D8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821BA6D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821ba7a4
	goto loc_821BA7A4;
loc_821BA6E0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r27,0(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// addi r6,r29,1
	ctx.r6.s64 = r29.s64 + 1;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x821ba710
	if (!cr0.gt) goto loc_821BA710;
loc_821BA704:
	// lwz r27,0(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x821ba704
	if (cr0.gt) goto loc_821BA704;
loc_821BA710:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// blt cr6,0x821ba790
	if (cr6.lt) goto loc_821BA790;
	// andi. r11,r26,19
	r11.u64 = r26.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821ba790
	if (!cr0.eq) goto loc_821BA790;
	// cmpwi cr6,r26,8
	cr6.compare<int32_t>(r26.s32, 8, xer);
	// bne cr6,0x821ba748
	if (!cr6.eq) goto loc_821BA748;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821b9988
	sub_821B9988(ctx, base);
	// b 0x821ba6d8
	goto loc_821BA6D8;
loc_821BA748:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// bne cr6,0x821ba788
	if (!cr6.eq) goto loc_821BA788;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821b8990
	sub_821B8990(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba788
	if (cr0.eq) goto loc_821BA788;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82187ad8
	sub_82187AD8(ctx, base);
	// b 0x821ba6d8
	goto loc_821BA6D8;
loc_821BA788:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821ba7a4
	goto loc_821BA7A4;
loc_821BA790:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,8
	ctx.r3.s64 = r27.s64 + 8;
	// bl 0x821b8990
	sub_821B8990(ctx, base);
loc_821BA7A4:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821BA650"))) PPC_WEAK_FUNC(sub_821BA650);
PPC_FUNC_IMPL(__imp__sub_821BA650) {
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
	// bne cr6,0x821ba6e0
	if (!cr6.eq) goto loc_821BA6E0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821ba694
	goto loc_821BA694;
loc_821BA68C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_821BA694:
	// subf r9,r11,r28
	ctx.r9.s64 = r28.s64 - r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x821ba68c
	if (!cr0.eq) goto loc_821BA68C;
	// li r11,0
	r11.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
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
	// beq 0x821ba6d8
	if (cr0.eq) goto loc_821BA6D8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821BA6D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821ba7a4
	goto loc_821BA7A4;
loc_821BA6E0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r27,0(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// addi r6,r29,1
	ctx.r6.s64 = r29.s64 + 1;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x821ba710
	if (!cr0.gt) goto loc_821BA710;
loc_821BA704:
	// lwz r27,0(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x821ba704
	if (cr0.gt) goto loc_821BA704;
loc_821BA710:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// blt cr6,0x821ba790
	if (cr6.lt) goto loc_821BA790;
	// andi. r11,r26,19
	r11.u64 = r26.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821ba790
	if (!cr0.eq) goto loc_821BA790;
	// cmpwi cr6,r26,8
	cr6.compare<int32_t>(r26.s32, 8, xer);
	// bne cr6,0x821ba748
	if (!cr6.eq) goto loc_821BA748;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821b9988
	sub_821B9988(ctx, base);
	// b 0x821ba6d8
	goto loc_821BA6D8;
loc_821BA748:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// bne cr6,0x821ba788
	if (!cr6.eq) goto loc_821BA788;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821b8990
	sub_821B8990(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ba788
	if (cr0.eq) goto loc_821BA788;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82187ad8
	sub_82187AD8(ctx, base);
	// b 0x821ba6d8
	goto loc_821BA6D8;
loc_821BA788:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821ba7a4
	goto loc_821BA7A4;
loc_821BA790:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,8
	ctx.r3.s64 = r27.s64 + 8;
	// bl 0x821b8990
	sub_821B8990(ctx, base);
loc_821BA7A4:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821BA7AC"))) PPC_WEAK_FUNC(sub_821BA7AC);
PPC_FUNC_IMPL(__imp__sub_821BA7AC) {
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

__attribute__((alias("__imp__sub_821BA7D4"))) PPC_WEAK_FUNC(sub_821BA7D4);
PPC_FUNC_IMPL(__imp__sub_821BA7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BA7D8"))) PPC_WEAK_FUNC(sub_821BA7D8);
PPC_FUNC_IMPL(__imp__sub_821BA7D8) {
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
	// lwz r16,-20016(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20016);
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
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// bl 0x821b9c68
	sub_821B9C68(ctx, base);
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

__attribute__((alias("__imp__sub_821BA7E0"))) PPC_WEAK_FUNC(sub_821BA7E0);
PPC_FUNC_IMPL(__imp__sub_821BA7E0) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// bl 0x821b9c68
	sub_821B9C68(ctx, base);
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

__attribute__((alias("__imp__sub_821BA850"))) PPC_WEAK_FUNC(sub_821BA850);
PPC_FUNC_IMPL(__imp__sub_821BA850) {
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
	// bl 0x821286c0
	sub_821286C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BA878"))) PPC_WEAK_FUNC(sub_821BA878);
PPC_FUNC_IMPL(__imp__sub_821BA878) {
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
	// lwz r16,-19960(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19960);
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
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,96(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// bl 0x821b9cc8
	sub_821B9CC8(ctx, base);
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

__attribute__((alias("__imp__sub_821BA880"))) PPC_WEAK_FUNC(sub_821BA880);
PPC_FUNC_IMPL(__imp__sub_821BA880) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,96(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// bl 0x821b9cc8
	sub_821B9CC8(ctx, base);
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

__attribute__((alias("__imp__sub_821BA900"))) PPC_WEAK_FUNC(sub_821BA900);
PPC_FUNC_IMPL(__imp__sub_821BA900) {
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
	// bl 0x821286b8
	sub_821286B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BA928"))) PPC_WEAK_FUNC(sub_821BA928);
PPC_FUNC_IMPL(__imp__sub_821BA928) {
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
	// lwz r16,-19904(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19904);
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
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// bl 0x821b9d40
	sub_821B9D40(ctx, base);
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

__attribute__((alias("__imp__sub_821BA930"))) PPC_WEAK_FUNC(sub_821BA930);
PPC_FUNC_IMPL(__imp__sub_821BA930) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// bl 0x821b9d40
	sub_821B9D40(ctx, base);
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

__attribute__((alias("__imp__sub_821BA9A0"))) PPC_WEAK_FUNC(sub_821BA9A0);
PPC_FUNC_IMPL(__imp__sub_821BA9A0) {
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
	// bl 0x82128440
	sub_82128440(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BA9C8"))) PPC_WEAK_FUNC(sub_821BA9C8);
PPC_FUNC_IMPL(__imp__sub_821BA9C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x821b99e0
	sub_821B99E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BA9D0"))) PPC_WEAK_FUNC(sub_821BA9D0);
PPC_FUNC_IMPL(__imp__sub_821BA9D0) {
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
	// lwz r16,-19832(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19832);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,10896(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10896);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,10892
	r28.s64 = ctx.r10.s64 + 10892;
	// bne 0x821baa3c
	if (!cr0.eq) goto loc_821BAA3C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10896(r30)
	PPC_STORE_U32(r30.u32 + 10896, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-19856
	ctx.r4.s64 = r11.s64 + -19856;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10896(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10896);
loc_821BAA3C:
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
	// beq 0x821baa70
	if (cr0.eq) goto loc_821BAA70;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-16
	ctx.r3.s64 = r27.s64 + -16;
	// bl 0x821b88c8
	sub_821B88C8(ctx, base);
	// b 0x821bab4c
	goto loc_821BAB4C;
loc_821BAA70:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,10888
	r28.s64 = ctx.r10.s64 + 10888;
	// bne 0x821baa98
	if (!cr0.eq) goto loc_821BAA98;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,10896(r30)
	PPC_STORE_U32(r30.u32 + 10896, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,16328
	ctx.r4.s64 = r11.s64 + 16328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821BAA98:
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
	// beq 0x821baacc
	if (cr0.eq) goto loc_821BAACC;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-32
	ctx.r3.s64 = r27.s64 + -32;
	// bl 0x821ba650
	sub_821BA650(ctx, base);
	// b 0x821bab4c
	goto loc_821BAB4C;
loc_821BAACC:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r27,-308
	ctx.r3.s64 = r27.s64 + -308;
	// bl 0x82322160
	sub_82322160(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821baaf0
	if (cr0.eq) goto loc_821BAAF0;
loc_821BAAE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821bab4c
	goto loc_821BAB4C;
loc_821BAAF0:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r27,-76
	ctx.r3.s64 = r27.s64 + -76;
	// bl 0x821aec48
	sub_821AEC48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821baae8
	if (!cr0.eq) goto loc_821BAAE8;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r27,-272
	ctx.r3.s64 = r27.s64 + -272;
	// bl 0x821b3420
	sub_821B3420(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821baae8
	if (!cr0.eq) goto loc_821BAAE8;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r27,-256
	ctx.r3.s64 = r27.s64 + -256;
	// bl 0x821e7cf0
	sub_821E7CF0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_821BAB4C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821BA9D8"))) PPC_WEAK_FUNC(sub_821BA9D8);
PPC_FUNC_IMPL(__imp__sub_821BA9D8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,10896(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10896);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,10892
	r28.s64 = ctx.r10.s64 + 10892;
	// bne 0x821baa3c
	if (!cr0.eq) goto loc_821BAA3C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10896(r30)
	PPC_STORE_U32(r30.u32 + 10896, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-19856
	ctx.r4.s64 = r11.s64 + -19856;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10896(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10896);
loc_821BAA3C:
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
	// beq 0x821baa70
	if (cr0.eq) goto loc_821BAA70;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-16
	ctx.r3.s64 = r27.s64 + -16;
	// bl 0x821b88c8
	sub_821B88C8(ctx, base);
	// b 0x821bab4c
	goto loc_821BAB4C;
loc_821BAA70:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,10888
	r28.s64 = ctx.r10.s64 + 10888;
	// bne 0x821baa98
	if (!cr0.eq) goto loc_821BAA98;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,10896(r30)
	PPC_STORE_U32(r30.u32 + 10896, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,16328
	ctx.r4.s64 = r11.s64 + 16328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821BAA98:
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
	// beq 0x821baacc
	if (cr0.eq) goto loc_821BAACC;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-32
	ctx.r3.s64 = r27.s64 + -32;
	// bl 0x821ba650
	sub_821BA650(ctx, base);
	// b 0x821bab4c
	goto loc_821BAB4C;
loc_821BAACC:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r27,-308
	ctx.r3.s64 = r27.s64 + -308;
	// bl 0x82322160
	sub_82322160(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821baaf0
	if (cr0.eq) goto loc_821BAAF0;
loc_821BAAE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821bab4c
	goto loc_821BAB4C;
loc_821BAAF0:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r27,-76
	ctx.r3.s64 = r27.s64 + -76;
	// bl 0x821aec48
	sub_821AEC48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821baae8
	if (!cr0.eq) goto loc_821BAAE8;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r27,-272
	ctx.r3.s64 = r27.s64 + -272;
	// bl 0x821b3420
	sub_821B3420(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821baae8
	if (!cr0.eq) goto loc_821BAAE8;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r27,-256
	ctx.r3.s64 = r27.s64 + -256;
	// bl 0x821e7cf0
	sub_821E7CF0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_821BAB4C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821BAB54"))) PPC_WEAK_FUNC(sub_821BAB54);
PPC_FUNC_IMPL(__imp__sub_821BAB54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10896
	r11.s64 = r11.s64 + 10896;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10896
	ctx.r10.s64 = ctx.r10.s64 + 10896;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BAB7C"))) PPC_WEAK_FUNC(sub_821BAB7C);
PPC_FUNC_IMPL(__imp__sub_821BAB7C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10896
	r11.s64 = r11.s64 + 10896;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10896
	ctx.r10.s64 = ctx.r10.s64 + 10896;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BABA4"))) PPC_WEAK_FUNC(sub_821BABA4);
PPC_FUNC_IMPL(__imp__sub_821BABA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BABA8"))) PPC_WEAK_FUNC(sub_821BABA8);
PPC_FUNC_IMPL(__imp__sub_821BABA8) {
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
	// lwz r16,-19736(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19736);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-672
	r31.s64 = ctx.r1.s64 + -672;
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x821bad44
	if (cr6.eq) goto loc_821BAD44;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x821bad44
	if (cr6.eq) goto loc_821BAD44;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32217
	r11.s64 = -2111373312;
	// addi r7,r10,-31048
	ctx.r7.s64 = ctx.r10.s64 + -31048;
	// addi r6,r11,-11496
	ctx.r6.s64 = r11.s64 + -11496;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cc38
	sub_8239CC38(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x821bace0
	if (!cr0.eq) goto loc_821BACE0;
loc_821BAC3C:
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x821bacac
	if (!cr6.gt) goto loc_821BACAC;
	// addi r27,r31,96
	r27.s64 = r31.s64 + 96;
loc_821BAC6C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821bacac
	if (!cr0.eq) goto loc_821BACAC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821b8a60
	sub_821B8A60(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821b9bd0
	sub_821B9BD0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// blt cr6,0x821bac6c
	if (cr6.lt) goto loc_821BAC6C;
loc_821BACAC:
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x821b9bd0
	sub_821B9BD0(ctx, base);
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// bne cr6,0x821baccc
	if (!cr6.eq) goto loc_821BACCC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_821BACCC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821bac3c
	if (cr0.eq) goto loc_821BAC3C;
loc_821BACE0:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// ble cr6,0x821bad0c
	if (!cr6.gt) goto loc_821BAD0C;
	// addi r29,r31,104
	r29.s64 = r31.s64 + 104;
	// addi r27,r30,-1
	r27.s64 = r30.s64 + -1;
loc_821BACF0:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b8a60
	sub_821B8A60(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x821bacf0
	if (!cr0.eq) goto loc_821BACF0;
loc_821BAD0C:
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// bl 0x821b9bd0
	sub_821B9BD0(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r6,r11,-31048
	ctx.r6.s64 = r11.s64 + -31048;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cb10
	sub_8239CB10(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82128260
	sub_82128260(ctx, base);
loc_821BAD44:
	// addi r1,r31,672
	ctx.r1.s64 = r31.s64 + 672;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821BABB0"))) PPC_WEAK_FUNC(sub_821BABB0);
PPC_FUNC_IMPL(__imp__sub_821BABB0) {
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
	// addi r31,r1,-672
	r31.s64 = ctx.r1.s64 + -672;
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x821bad44
	if (cr6.eq) goto loc_821BAD44;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x821bad44
	if (cr6.eq) goto loc_821BAD44;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32217
	r11.s64 = -2111373312;
	// addi r7,r10,-31048
	ctx.r7.s64 = ctx.r10.s64 + -31048;
	// addi r6,r11,-11496
	ctx.r6.s64 = r11.s64 + -11496;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cc38
	sub_8239CC38(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x821bace0
	if (!cr0.eq) goto loc_821BACE0;
loc_821BAC3C:
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x821bacac
	if (!cr6.gt) goto loc_821BACAC;
	// addi r27,r31,96
	r27.s64 = r31.s64 + 96;
loc_821BAC6C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821bacac
	if (!cr0.eq) goto loc_821BACAC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821b8a60
	sub_821B8A60(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821b9bd0
	sub_821B9BD0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// blt cr6,0x821bac6c
	if (cr6.lt) goto loc_821BAC6C;
loc_821BACAC:
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x821b9bd0
	sub_821B9BD0(ctx, base);
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// bne cr6,0x821baccc
	if (!cr6.eq) goto loc_821BACCC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_821BACCC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821bac3c
	if (cr0.eq) goto loc_821BAC3C;
loc_821BACE0:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// ble cr6,0x821bad0c
	if (!cr6.gt) goto loc_821BAD0C;
	// addi r29,r31,104
	r29.s64 = r31.s64 + 104;
	// addi r27,r30,-1
	r27.s64 = r30.s64 + -1;
loc_821BACF0:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b8a60
	sub_821B8A60(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x821bacf0
	if (!cr0.eq) goto loc_821BACF0;
loc_821BAD0C:
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// bl 0x821b9bd0
	sub_821B9BD0(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r6,r11,-31048
	ctx.r6.s64 = r11.s64 + -31048;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cb10
	sub_8239CB10(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82128260
	sub_82128260(ctx, base);
loc_821BAD44:
	// addi r1,r31,672
	ctx.r1.s64 = r31.s64 + 672;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821BAD4C"))) PPC_WEAK_FUNC(sub_821BAD4C);
PPC_FUNC_IMPL(__imp__sub_821BAD4C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-672
	r31.s64 = r12.s64 + -672;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821286b8
	sub_821286B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BAD74"))) PPC_WEAK_FUNC(sub_821BAD74);
PPC_FUNC_IMPL(__imp__sub_821BAD74) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-672
	r31.s64 = r12.s64 + -672;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r6,r11,-31048
	ctx.r6.s64 = r11.s64 + -31048;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cb10
	sub_8239CB10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BADAC"))) PPC_WEAK_FUNC(sub_821BADAC);
PPC_FUNC_IMPL(__imp__sub_821BADAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BADB0"))) PPC_WEAK_FUNC(sub_821BADB0);
PPC_FUNC_IMPL(__imp__sub_821BADB0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821ba7e0
	sub_821BA7E0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82370ed8
	sub_82370ED8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82128310
	sub_82128310(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821BAE14"))) PPC_WEAK_FUNC(sub_821BAE14);
PPC_FUNC_IMPL(__imp__sub_821BAE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BAE18"))) PPC_WEAK_FUNC(sub_821BAE18);
PPC_FUNC_IMPL(__imp__sub_821BAE18) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821ba880
	sub_821BA880(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82370ed8
	sub_82370ED8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82128260
	sub_82128260(ctx, base);
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

__attribute__((alias("__imp__sub_821BAE9C"))) PPC_WEAK_FUNC(sub_821BAE9C);
PPC_FUNC_IMPL(__imp__sub_821BAE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BAEA0"))) PPC_WEAK_FUNC(sub_821BAEA0);
PPC_FUNC_IMPL(__imp__sub_821BAEA0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821ba930
	sub_821BA930(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82370ed8
	sub_82370ED8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821282b8
	sub_821282B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821BAF04"))) PPC_WEAK_FUNC(sub_821BAF04);
PPC_FUNC_IMPL(__imp__sub_821BAF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BAF08"))) PPC_WEAK_FUNC(sub_821BAF08);
PPC_FUNC_IMPL(__imp__sub_821BAF08) {
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
	// lwz r16,-19632(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19632);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r29,392
	r30.s64 = r29.s64 + 392;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82128260
	sub_82128260(ctx, base);
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// li r27,0
	r27.s64 = 0;
	// std r27,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r27.u64);
	// ld r11,112(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 112);
	// std r11,112(r31)
	PPC_STORE_U64(r31.u32 + 112, r11.u64);
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821526e0
	sub_821526E0(ctx, base);
	// b 0x821bafbc
	goto loc_821BAFBC;
loc_821BAF68:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r10,r29,128
	ctx.r10.s64 = r29.s64 + 128;
	// bne cr6,0x821baf78
	if (!cr6.eq) goto loc_821BAF78;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821BAF78:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x821bafb4
	if (cr6.eq) goto loc_821BAFB4;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82152a80
	sub_82152A80(ctx, base);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BAFB4:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82152760
	sub_82152760(ctx, base);
loc_821BAFBC:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x821baf68
	if (!cr6.eq) goto loc_821BAF68;
	// lwz r28,112(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821bafdc
	goto loc_821BAFDC;
loc_821BAFD0:
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// bl 0x82153780
	sub_82153780(ctx, base);
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
loc_821BAFDC:
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821bafd0
	if (!cr0.eq) goto loc_821BAFD0;
	// lis r11,-32228
	r11.s64 = -2112094208;
	// addi r4,r11,18736
	ctx.r4.s64 = r11.s64 + 18736;
	// bl 0x821babb0
	sub_821BABB0(ctx, base);
	// addi r30,r29,400
	r30.s64 = r29.s64 + 400;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821282b8
	sub_821282B8(ctx, base);
	// addi r11,r31,104
	r11.s64 = r31.s64 + 104;
	// std r27,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r27.u64);
	// ld r11,104(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// std r11,104(r31)
	PPC_STORE_U64(r31.u32 + 104, r11.u64);
	// addi r11,r31,104
	r11.s64 = r31.s64 + 104;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// addi r11,r31,104
	r11.s64 = r31.s64 + 104;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821b9718
	sub_821B9718(ctx, base);
	// b 0x821bb09c
	goto loc_821BB09C;
loc_821BB048:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r10,r29,164
	ctx.r10.s64 = r29.s64 + 164;
	// bne cr6,0x821bb058
	if (!cr6.eq) goto loc_821BB058;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821BB058:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x821bb094
	if (cr6.eq) goto loc_821BB094;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821b98c8
	sub_821B98C8(ctx, base);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BB094:
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821b9798
	sub_821B9798(ctx, base);
loc_821BB09C:
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x821bb048
	if (!cr6.eq) goto loc_821BB048;
	// lwz r28,104(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821bb0c0
	goto loc_821BB0C0;
loc_821BB0B0:
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ba268
	sub_821BA268(ctx, base);
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
loc_821BB0C0:
	// addi r11,r31,104
	r11.s64 = r31.s64 + 104;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821bb0b0
	if (!cr0.eq) goto loc_821BB0B0;
	// addi r28,r29,408
	r28.s64 = r29.s64 + 408;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82128310
	sub_82128310(ctx, base);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// std r27,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r27.u64);
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
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x821b97f0
	sub_821B97F0(ctx, base);
	// b 0x821bb170
	goto loc_821BB170;
loc_821BB11C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r10,r29,360
	ctx.r10.s64 = r29.s64 + 360;
	// bne cr6,0x821bb12c
	if (!cr6.eq) goto loc_821BB12C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821BB12C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x821bb168
	if (cr6.eq) goto loc_821BB168;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82187ad8
	sub_82187AD8(ctx, base);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BB168:
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x821b9870
	sub_821B9870(ctx, base);
loc_821BB170:
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x821bb11c
	if (!cr6.eq) goto loc_821BB11C;
	// lwz r30,96(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821bb194
	goto loc_821BB194;
loc_821BB184:
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821ba2d8
	sub_821BA2D8(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_821BB194:
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821bb184
	if (!cr0.eq) goto loc_821BB184;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82128310
	sub_82128310(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821282b8
	sub_821282B8(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82128260
	sub_82128260(ctx, base);
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821BAF10"))) PPC_WEAK_FUNC(sub_821BAF10);
PPC_FUNC_IMPL(__imp__sub_821BAF10) {
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
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r29,392
	r30.s64 = r29.s64 + 392;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82128260
	sub_82128260(ctx, base);
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// li r27,0
	r27.s64 = 0;
	// std r27,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r27.u64);
	// ld r11,112(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 112);
	// std r11,112(r31)
	PPC_STORE_U64(r31.u32 + 112, r11.u64);
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821526e0
	sub_821526E0(ctx, base);
	// b 0x821bafbc
	goto loc_821BAFBC;
loc_821BAF68:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r10,r29,128
	ctx.r10.s64 = r29.s64 + 128;
	// bne cr6,0x821baf78
	if (!cr6.eq) goto loc_821BAF78;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821BAF78:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x821bafb4
	if (cr6.eq) goto loc_821BAFB4;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82152a80
	sub_82152A80(ctx, base);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BAFB4:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82152760
	sub_82152760(ctx, base);
loc_821BAFBC:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x821baf68
	if (!cr6.eq) goto loc_821BAF68;
	// lwz r28,112(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821bafdc
	goto loc_821BAFDC;
loc_821BAFD0:
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// bl 0x82153780
	sub_82153780(ctx, base);
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
loc_821BAFDC:
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821bafd0
	if (!cr0.eq) goto loc_821BAFD0;
	// lis r11,-32228
	r11.s64 = -2112094208;
	// addi r4,r11,18736
	ctx.r4.s64 = r11.s64 + 18736;
	// bl 0x821babb0
	sub_821BABB0(ctx, base);
	// addi r30,r29,400
	r30.s64 = r29.s64 + 400;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821282b8
	sub_821282B8(ctx, base);
	// addi r11,r31,104
	r11.s64 = r31.s64 + 104;
	// std r27,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r27.u64);
	// ld r11,104(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// std r11,104(r31)
	PPC_STORE_U64(r31.u32 + 104, r11.u64);
	// addi r11,r31,104
	r11.s64 = r31.s64 + 104;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// addi r11,r31,104
	r11.s64 = r31.s64 + 104;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821b9718
	sub_821B9718(ctx, base);
	// b 0x821bb09c
	goto loc_821BB09C;
loc_821BB048:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r10,r29,164
	ctx.r10.s64 = r29.s64 + 164;
	// bne cr6,0x821bb058
	if (!cr6.eq) goto loc_821BB058;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821BB058:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x821bb094
	if (cr6.eq) goto loc_821BB094;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821b98c8
	sub_821B98C8(ctx, base);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BB094:
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821b9798
	sub_821B9798(ctx, base);
loc_821BB09C:
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x821bb048
	if (!cr6.eq) goto loc_821BB048;
	// lwz r28,104(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821bb0c0
	goto loc_821BB0C0;
loc_821BB0B0:
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ba268
	sub_821BA268(ctx, base);
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
loc_821BB0C0:
	// addi r11,r31,104
	r11.s64 = r31.s64 + 104;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821bb0b0
	if (!cr0.eq) goto loc_821BB0B0;
	// addi r28,r29,408
	r28.s64 = r29.s64 + 408;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82128310
	sub_82128310(ctx, base);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// std r27,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r27.u64);
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
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x821b97f0
	sub_821B97F0(ctx, base);
	// b 0x821bb170
	goto loc_821BB170;
loc_821BB11C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r10,r29,360
	ctx.r10.s64 = r29.s64 + 360;
	// bne cr6,0x821bb12c
	if (!cr6.eq) goto loc_821BB12C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821BB12C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x821bb168
	if (cr6.eq) goto loc_821BB168;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82187ad8
	sub_82187AD8(ctx, base);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BB168:
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x821b9870
	sub_821B9870(ctx, base);
loc_821BB170:
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x821bb11c
	if (!cr6.eq) goto loc_821BB11C;
	// lwz r30,96(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821bb194
	goto loc_821BB194;
loc_821BB184:
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821ba2d8
	sub_821BA2D8(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_821BB194:
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821bb184
	if (!cr0.eq) goto loc_821BB184;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82128310
	sub_82128310(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821282b8
	sub_821282B8(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82128260
	sub_82128260(ctx, base);
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821BB1D8"))) PPC_WEAK_FUNC(sub_821BB1D8);
PPC_FUNC_IMPL(__imp__sub_821BB1D8) {
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
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821286b8
	sub_821286B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BB200"))) PPC_WEAK_FUNC(sub_821BB200);
PPC_FUNC_IMPL(__imp__sub_821BB200) {
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
	// bl 0x82128440
	sub_82128440(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BB228"))) PPC_WEAK_FUNC(sub_821BB228);
PPC_FUNC_IMPL(__imp__sub_821BB228) {
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
	// bl 0x821286c0
	sub_821286C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BB250"))) PPC_WEAK_FUNC(sub_821BB250);
PPC_FUNC_IMPL(__imp__sub_821BB250) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x821bb2a4
	if (!cr0.eq) goto loc_821BB2A4;
	// addi r6,r11,408
	ctx.r6.s64 = r11.s64 + 408;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x821badb0
	sub_821BADB0(ctx, base);
loc_821BB2A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BB2B4"))) PPC_WEAK_FUNC(sub_821BB2B4);
PPC_FUNC_IMPL(__imp__sub_821BB2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB2B8"))) PPC_WEAK_FUNC(sub_821BB2B8);
PPC_FUNC_IMPL(__imp__sub_821BB2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r10,-128
	r11.s64 = ctx.r10.s64 + -128;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821bb320
	if (!cr0.eq) goto loc_821BB320;
	// addi r11,r10,264
	r11.s64 = ctx.r10.s64 + 264;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x821bae18
	sub_821BAE18(ctx, base);
loc_821BB320:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BB330"))) PPC_WEAK_FUNC(sub_821BB330);
PPC_FUNC_IMPL(__imp__sub_821BB330) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r10,-164
	r11.s64 = ctx.r10.s64 + -164;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821bb388
	if (!cr0.eq) goto loc_821BB388;
	// addi r6,r10,236
	ctx.r6.s64 = ctx.r10.s64 + 236;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x821baea0
	sub_821BAEA0(ctx, base);
loc_821BB388:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BB398"))) PPC_WEAK_FUNC(sub_821BB398);
PPC_FUNC_IMPL(__imp__sub_821BB398) {
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
	// b 0x821bb3cc
	goto loc_821BB3CC;
loc_821BB3B0:
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x821b99e0
	sub_821B99E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821BB3CC:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x821bb3b0
	if (!cr6.eq) goto loc_821BB3B0;
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821BB3E4"))) PPC_WEAK_FUNC(sub_821BB3E4);
PPC_FUNC_IMPL(__imp__sub_821BB3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB3E8"))) PPC_WEAK_FUNC(sub_821BB3E8);
PPC_FUNC_IMPL(__imp__sub_821BB3E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x821bb398
	sub_821BB398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BB3EC"))) PPC_WEAK_FUNC(sub_821BB3EC);
PPC_FUNC_IMPL(__imp__sub_821BB3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB3F0"))) PPC_WEAK_FUNC(sub_821BB3F0);
PPC_FUNC_IMPL(__imp__sub_821BB3F0) {
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
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq cr6,0x821bb42c
	if (cr6.eq) goto loc_821BB42C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// addi r11,r11,-19408
	r11.s64 = r11.s64 + -19408;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
loc_821BB42C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,-19468
	ctx.r9.s64 = r11.s64 + -19468;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// std r30,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, r30.u64);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r30,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, r30.u64);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r6,r9,-28
	ctx.r6.s64 = ctx.r9.s64 + -28;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// stw r6,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r6.u32);
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_821BB4AC"))) PPC_WEAK_FUNC(sub_821BB4AC);
PPC_FUNC_IMPL(__imp__sub_821BB4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB4B0"))) PPC_WEAK_FUNC(sub_821BB4B0);
PPC_FUNC_IMPL(__imp__sub_821BB4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x823267b8
	sub_823267B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BB4BC"))) PPC_WEAK_FUNC(sub_821BB4BC);
PPC_FUNC_IMPL(__imp__sub_821BB4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB4C0"))) PPC_WEAK_FUNC(sub_821BB4C0);
PPC_FUNC_IMPL(__imp__sub_821BB4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821bb4e0
	sub_821BB4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BB4CC"))) PPC_WEAK_FUNC(sub_821BB4CC);
PPC_FUNC_IMPL(__imp__sub_821BB4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB4D0"))) PPC_WEAK_FUNC(sub_821BB4D0);
PPC_FUNC_IMPL(__imp__sub_821BB4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82325ac8
	sub_82325AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BB4DC"))) PPC_WEAK_FUNC(sub_821BB4DC);
PPC_FUNC_IMPL(__imp__sub_821BB4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB4E0"))) PPC_WEAK_FUNC(sub_821BB4E0);
PPC_FUNC_IMPL(__imp__sub_821BB4E0) {
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
	// addi r30,r3,-28
	r30.s64 = ctx.r3.s64 + -28;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,28
	r31.s64 = r30.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823260f8
	sub_823260F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821bb518
	if (cr0.eq) goto loc_821BB518;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_821BB518:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821BB524"))) PPC_WEAK_FUNC(sub_821BB524);
PPC_FUNC_IMPL(__imp__sub_821BB524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB528"))) PPC_WEAK_FUNC(sub_821BB528);
PPC_FUNC_IMPL(__imp__sub_821BB528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,-19048(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19048);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq cr6,0x821bb5e4
	if (cr6.eq) goto loc_821BB5E4;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r11,-19128
	r11.s64 = r11.s64 + -19128;
	// addi r10,r10,-19140
	ctx.r10.s64 = ctx.r10.s64 + -19140;
	// addi r9,r9,-19148
	ctx.r9.s64 = ctx.r9.s64 + -19148;
	// addi r8,r8,-19160
	ctx.r8.s64 = ctx.r8.s64 + -19160;
	// addi r7,r7,-19168
	ctx.r7.s64 = ctx.r7.s64 + -19168;
	// addi r6,r6,-19176
	ctx.r6.s64 = ctx.r6.s64 + -19176;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r5,r5,-19184
	ctx.r5.s64 = ctx.r5.s64 + -19184;
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// addi r3,r30,440
	ctx.r3.s64 = r30.s64 + 440;
	// stw r9,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r9.u32);
	// stw r8,184(r30)
	PPC_STORE_U32(r30.u32 + 184, ctx.r8.u32);
	// stw r7,364(r30)
	PPC_STORE_U32(r30.u32 + 364, ctx.r7.u32);
	// stw r6,368(r30)
	PPC_STORE_U32(r30.u32 + 368, ctx.r6.u32);
	// stw r5,488(r30)
	PPC_STORE_U32(r30.u32 + 488, ctx.r5.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,484
	r11.s64 = r30.s64 + 484;
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
loc_821BB5E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82320b18
	sub_82320B18(ctx, base);
	// addi r27,r30,128
	r27.s64 = r30.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// addi r26,r30,164
	r26.s64 = r30.s64 + 164;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821e74e8
	sub_821E74E8(ctx, base);
	// addi r25,r30,180
	r25.s64 = r30.s64 + 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// addi r29,r30,360
	r29.s64 = r30.s64 + 360;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-11084
	r11.s64 = r11.s64 + -11084;
	// addi r10,r10,-11148
	ctx.r10.s64 = ctx.r10.s64 + -11148;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,368
	ctx.r3.s64 = r30.s64 + 368;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x821bb3f0
	sub_821BB3F0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r8,r8,-19188
	ctx.r8.s64 = ctx.r8.s64 + -19188;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r10,r10,-19268
	ctx.r10.s64 = ctx.r10.s64 + -19268;
	// stw r8,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r8.u32);
	// addi r9,r9,-19304
	ctx.r9.s64 = ctx.r9.s64 + -19304;
	// addi r11,r11,-19228
	r11.s64 = r11.s64 + -19228;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r7,r7,-19324
	ctx.r7.s64 = ctx.r7.s64 + -19324;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r9,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// addi r9,r31,88
	ctx.r9.s64 = r31.s64 + 88;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r7,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r6,r11,-19388
	ctx.r6.s64 = r11.s64 + -19388;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// std r28,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r28.u64);
	// addi r10,r11,-19396
	ctx.r10.s64 = r11.s64 + -19396;
	// ld r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// addi r11,r30,392
	r11.s64 = r30.s64 + 392;
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-436
	ctx.r9.s64 = ctx.r10.s64 + -436;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r10,-480
	ctx.r9.s64 = ctx.r10.s64 + -480;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// std r7,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r7.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// addi r11,r30,400
	r11.s64 = r30.s64 + 400;
	// std r28,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r28.u64);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// addi r11,r30,408
	r11.s64 = r30.s64 + 408;
	// std r28,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r28.u64);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// addi r11,r30,416
	r11.s64 = r30.s64 + 416;
	// std r28,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r28.u64);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r30,424
	r29.s64 = r30.s64 + 424;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x821b83c0
	sub_821B83C0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,-20812
	r11.s64 = r11.s64 + -20812;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821BB530"))) PPC_WEAK_FUNC(sub_821BB530);
PPC_FUNC_IMPL(__imp__sub_821BB530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq cr6,0x821bb5e4
	if (cr6.eq) goto loc_821BB5E4;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r11,-19128
	r11.s64 = r11.s64 + -19128;
	// addi r10,r10,-19140
	ctx.r10.s64 = ctx.r10.s64 + -19140;
	// addi r9,r9,-19148
	ctx.r9.s64 = ctx.r9.s64 + -19148;
	// addi r8,r8,-19160
	ctx.r8.s64 = ctx.r8.s64 + -19160;
	// addi r7,r7,-19168
	ctx.r7.s64 = ctx.r7.s64 + -19168;
	// addi r6,r6,-19176
	ctx.r6.s64 = ctx.r6.s64 + -19176;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r5,r5,-19184
	ctx.r5.s64 = ctx.r5.s64 + -19184;
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// addi r3,r30,440
	ctx.r3.s64 = r30.s64 + 440;
	// stw r9,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r9.u32);
	// stw r8,184(r30)
	PPC_STORE_U32(r30.u32 + 184, ctx.r8.u32);
	// stw r7,364(r30)
	PPC_STORE_U32(r30.u32 + 364, ctx.r7.u32);
	// stw r6,368(r30)
	PPC_STORE_U32(r30.u32 + 368, ctx.r6.u32);
	// stw r5,488(r30)
	PPC_STORE_U32(r30.u32 + 488, ctx.r5.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,484
	r11.s64 = r30.s64 + 484;
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
loc_821BB5E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82320b18
	sub_82320B18(ctx, base);
	// addi r27,r30,128
	r27.s64 = r30.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// addi r26,r30,164
	r26.s64 = r30.s64 + 164;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821e74e8
	sub_821E74E8(ctx, base);
	// addi r25,r30,180
	r25.s64 = r30.s64 + 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// addi r29,r30,360
	r29.s64 = r30.s64 + 360;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-11084
	r11.s64 = r11.s64 + -11084;
	// addi r10,r10,-11148
	ctx.r10.s64 = ctx.r10.s64 + -11148;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,368
	ctx.r3.s64 = r30.s64 + 368;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x821bb3f0
	sub_821BB3F0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r8,r8,-19188
	ctx.r8.s64 = ctx.r8.s64 + -19188;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r10,r10,-19268
	ctx.r10.s64 = ctx.r10.s64 + -19268;
	// stw r8,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r8.u32);
	// addi r9,r9,-19304
	ctx.r9.s64 = ctx.r9.s64 + -19304;
	// addi r11,r11,-19228
	r11.s64 = r11.s64 + -19228;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r7,r7,-19324
	ctx.r7.s64 = ctx.r7.s64 + -19324;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r9,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// addi r9,r31,88
	ctx.r9.s64 = r31.s64 + 88;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r7,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r6,r11,-19388
	ctx.r6.s64 = r11.s64 + -19388;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// std r28,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r28.u64);
	// addi r10,r11,-19396
	ctx.r10.s64 = r11.s64 + -19396;
	// ld r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// addi r11,r30,392
	r11.s64 = r30.s64 + 392;
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-436
	ctx.r9.s64 = ctx.r10.s64 + -436;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r10,-480
	ctx.r9.s64 = ctx.r10.s64 + -480;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// std r7,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r7.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// addi r11,r30,400
	r11.s64 = r30.s64 + 400;
	// std r28,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r28.u64);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// addi r11,r30,408
	r11.s64 = r30.s64 + 408;
	// std r28,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r28.u64);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// addi r11,r30,416
	r11.s64 = r30.s64 + 416;
	// std r28,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r28.u64);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r30,424
	r29.s64 = r30.s64 + 424;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x821b83c0
	sub_821B83C0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,-20812
	r11.s64 = r11.s64 + -20812;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821BB788"))) PPC_WEAK_FUNC(sub_821BB788);
PPC_FUNC_IMPL(__imp__sub_821BB788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821bb7bc
	if (cr0.eq) goto loc_821BB7BC;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r3,r11,440
	ctx.r3.s64 = r11.s64 + 440;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_821BB7BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BB7CC"))) PPC_WEAK_FUNC(sub_821BB7CC);
PPC_FUNC_IMPL(__imp__sub_821BB7CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r3,r11,132
	ctx.r3.s64 = r11.s64 + 132;
	// bl 0x82320f70
	sub_82320F70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BB7F8"))) PPC_WEAK_FUNC(sub_821BB7F8);
PPC_FUNC_IMPL(__imp__sub_821BB7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r3,r11,364
	ctx.r3.s64 = r11.s64 + 364;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

