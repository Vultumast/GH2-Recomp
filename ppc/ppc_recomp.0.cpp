#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82120000"))) PPC_WEAK_FUNC(sub_82120000);
PPC_FUNC_IMPL(__imp__sub_82120000) {
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
	// lwz r16,2504(0)
	r16.u64 = PPC_LOAD_U32(2504);
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
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82353920
	sub_82353920(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82120008"))) PPC_WEAK_FUNC(sub_82120008);
PPC_FUNC_IMPL(__imp__sub_82120008) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82353920
	sub_82353920(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82120058"))) PPC_WEAK_FUNC(sub_82120058);
PPC_FUNC_IMPL(__imp__sub_82120058) {
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

__attribute__((alias("__imp__sub_82120080"))) PPC_WEAK_FUNC(sub_82120080);
PPC_FUNC_IMPL(__imp__sub_82120080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,18840
	ctx.r3.s64 = r11.s64 + 18840;
	// b 0x82272788
	sub_82272788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82120090"))) PPC_WEAK_FUNC(sub_82120090);
PPC_FUNC_IMPL(__imp__sub_82120090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r30,-32140
	r30.s64 = -2106327040;
	// addi r29,r11,-5056
	r29.s64 = r11.s64 + -5056;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r25,-32127
	r25.s64 = -2105475072;
	// addi r31,r11,16016
	r31.s64 = r11.s64 + 16016;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r28,r11,23080
	r28.s64 = r11.s64 + 23080;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r27,r11,18888
	r27.s64 = r11.s64 + 18888;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r26,r11,24812
	r26.s64 = r11.s64 + 24812;
loc_821200CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82271228
	sub_82271228(ctx, base);
	// lwz r3,-7564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -7564);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b0588
	sub_822B0588(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82274a60
	sub_82274A60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82281d50
	sub_82281D50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8236b460
	sub_8236B460(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82313dd0
	sub_82313DD0(ctx, base);
	// lwz r3,27088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8236adc8
	sub_8236ADC8(ctx, base);
	// lwz r3,27088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821200cc
	goto loc_821200CC;
}

__attribute__((alias("__imp__sub_82120144"))) PPC_WEAK_FUNC(sub_82120144);
PPC_FUNC_IMPL(__imp__sub_82120144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120148"))) PPC_WEAK_FUNC(sub_82120148);
PPC_FUNC_IMPL(__imp__sub_82120148) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// beq cr6,0x82120198
	if (cr6.eq) goto loc_82120198;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82120180
	if (cr6.eq) goto loc_82120180;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_82120180:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq cr6,0x82120198
	if (cr6.eq) goto loc_82120198;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82120198:
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

__attribute__((alias("__imp__sub_821201B0"))) PPC_WEAK_FUNC(sub_821201B0);
PPC_FUNC_IMPL(__imp__sub_821201B0) {
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
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821201e0
	if (cr0.eq) goto loc_821201E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_821201E0:
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

__attribute__((alias("__imp__sub_821201FC"))) PPC_WEAK_FUNC(sub_821201FC);
PPC_FUNC_IMPL(__imp__sub_821201FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120200"))) PPC_WEAK_FUNC(sub_82120200);
PPC_FUNC_IMPL(__imp__sub_82120200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lwz r16,2680(0)
	r16.u64 = PPC_LOAD_U32(2680);
	// mflr r12
	// bl 0x8239bce8
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// addi r31,r1,-352
	r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x826e495c
	__imp__XNotifyPositionUI(ctx, base);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// li r4,20000
	ctx.r4.s64 = 20000;
	// ori r3,r3,8928
	ctx.r3.u64 = ctx.r3.u64 | 8928;
	// bl 0x82355b68
	sub_82355B68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,2632
	ctx.r5.s64 = r11.s64 + 2632;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82275b90
	sub_82275B90(ctx, base);
	// lis r30,-32140
	r30.s64 = -2106327040;
	// lwz r3,27088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,27088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 27088);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mftb r11
	r11.u64 = __rdtsc();
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x8236d1f0
	sub_8236D1F0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,2612
	ctx.r4.s64 = r11.s64 + 2612;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// nop 
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mftb r11
	r11.u64 = __rdtsc();
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r10,18888
	ctx.r3.s64 = ctx.r10.s64 + 18888;
	// subf r10,r30,r11
	ctx.r10.s64 = r11.s64 - r30.s64;
	// mr r27,r11
	r27.u64 = r11.u64;
	// clrldi r30,r10,32
	r30.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lis r29,-32136
	r29.s64 = -2106064896;
	// mr r11,r30
	r11.u64 = r30.u64;
	// sradi r10,r30,32
	xer.ca = (r30.s64 < 0) & ((r30.u64 & 0xFFFFFFFF) != 0);
	ctx.r10.s64 = r30.s64 >> 32;
	// lis r28,-32136
	r28.s64 = -2106064896;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// lfs f0,18804(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 18804);
	f0.f64 = double(temp.f32);
	// std r10,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// lfd f13,88(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,80(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,18800(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 18800);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f31,f12,f0,f13
	f31.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// bl 0x82273778
	sub_82273778(ctx, base);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r3,r11,23080
	ctx.r3.s64 = r11.s64 + 23080;
	// bl 0x82281628
	sub_82281628(ctx, base);
	// bl 0x822e9bc0
	sub_822E9BC0(ctx, base);
	// bl 0x8214f3e0
	sub_8214F3E0(ctx, base);
	// bl 0x82224b00
	sub_82224B00(ctx, base);
	// bl 0x82363148
	sub_82363148(ctx, base);
	// bl 0x82121dc8
	sub_82121DC8(ctx, base);
	// bl 0x822b35b8
	sub_822B35B8(ctx, base);
	// bl 0x82284020
	sub_82284020(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,18800(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 18800);
	f0.f64 = double(temp.f32);
	// lfs f13,18804(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 18804);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,2608(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2608);
	f30.f64 = double(temp.f32);
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r26,r11,0
	r26.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r27,r26
	r11.s64 = r26.s64 - r27.s64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// sradi r10,r30,32
	xer.ca = (r30.s64 < 0) & ((r30.u64 & 0xFFFFFFFF) != 0);
	ctx.r10.s64 = r30.s64 >> 32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// std r10,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// lfd f12,80(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,88(r31)
	ctx.f11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmadds f12,f11,f13,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - f31.f64));
	// fcmpu cr6,f12,f30
	cr6.compare(ctx.f12.f64, f30.f64);
	// nop 
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// addi r4,r11,2580
	ctx.r4.s64 = r11.s64 + 2580;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// nop 
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lfs f0,18804(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 18804);
	f0.f64 = double(temp.f32);
	// subf r10,r26,r11
	ctx.r10.s64 = r11.s64 - r26.s64;
	// mr r26,r11
	r26.u64 = r11.u64;
	// clrldi r11,r10,32
	r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// sradi r10,r30,32
	xer.ca = (r30.s64 < 0) & ((r30.u64 & 0xFFFFFFFF) != 0);
	ctx.r10.s64 = r30.s64 >> 32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// std r10,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// lfd f13,80(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,88(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,18800(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 18800);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f31,f12,f0,f13
	f31.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// bl 0x822b2058
	sub_822B2058(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r25,r11,16016
	r25.s64 = r11.s64 + 16016;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8236c4c0
	sub_8236C4C0(ctx, base);
	// bl 0x82282688
	sub_82282688(ctx, base);
	// bl 0x822b2a08
	sub_822B2A08(ctx, base);
	// lfs f0,18800(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 18800);
	f0.f64 = double(temp.f32);
	// lfs f13,18804(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 18804);
	ctx.f13.f64 = double(temp.f32);
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r27,r11,0
	r27.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r26,r27
	r11.s64 = r27.s64 - r26.s64;
	// mr r26,r27
	r26.u64 = r27.u64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// sradi r10,r30,32
	xer.ca = (r30.s64 < 0) & ((r30.u64 & 0xFFFFFFFF) != 0);
	ctx.r10.s64 = r30.s64 >> 32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// std r10,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// lfd f12,80(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,88(r31)
	ctx.f11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmadds f12,f11,f13,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - f31.f64));
	// fcmpu cr6,f12,f30
	cr6.compare(ctx.f12.f64, f30.f64);
	// nop 
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// addi r4,r11,2556
	ctx.r4.s64 = r11.s64 + 2556;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// nop 
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lfs f0,18804(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 18804);
	f0.f64 = double(temp.f32);
	// subf r10,r27,r11
	ctx.r10.s64 = r11.s64 - r27.s64;
	// mr r27,r11
	r27.u64 = r11.u64;
	// clrldi r11,r10,32
	r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// sradi r10,r30,32
	xer.ca = (r30.s64 < 0) & ((r30.u64 & 0xFFFFFFFF) != 0);
	ctx.r10.s64 = r30.s64 >> 32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// std r10,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// lfd f13,80(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,88(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,18800(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 18800);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f31,f12,f0,f13
	f31.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8236d350
	sub_8236D350(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-9836(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9836);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8212055c
	if (!cr6.eq) goto loc_8212055C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82120568
	goto loc_82120568;
loc_8212055C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
loc_82120568:
	// addi r3,r25,76
	ctx.r3.s64 = r25.s64 + 76;
	// bl 0x82120148
	sub_82120148(ctx, base);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r3,r11,24812
	ctx.r3.s64 = r11.s64 + 24812;
	// bl 0x822af248
	sub_822AF248(ctx, base);
	// lfs f0,18800(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 18800);
	f0.f64 = double(temp.f32);
	// lfs f13,18804(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 18804);
	ctx.f13.f64 = double(temp.f32);
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r10,r27,r11
	ctx.r10.s64 = r11.s64 - r27.s64;
	// mr r27,r11
	r27.u64 = r11.u64;
	// clrldi r11,r10,32
	r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// sradi r10,r30,32
	xer.ca = (r30.s64 < 0) & ((r30.u64 & 0xFFFFFFFF) != 0);
	ctx.r10.s64 = r30.s64 >> 32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// std r10,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// lfd f12,80(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,88(r31)
	ctx.f11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmadds f12,f11,f13,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - f31.f64));
	// fcmpu cr6,f12,f30
	cr6.compare(ctx.f12.f64, f30.f64);
	// nop 
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r31,352
	ctx.r1.s64 = r31.s64 + 352;
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82120208"))) PPC_WEAK_FUNC(sub_82120208);
PPC_FUNC_IMPL(__imp__sub_82120208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-352
	r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x826e495c
	__imp__XNotifyPositionUI(ctx, base);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// li r4,20000
	ctx.r4.s64 = 20000;
	// ori r3,r3,8928
	ctx.r3.u64 = ctx.r3.u64 | 8928;
	// bl 0x82355b68
	sub_82355B68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,2632
	ctx.r5.s64 = r11.s64 + 2632;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82275b90
	sub_82275B90(ctx, base);
	// lis r30,-32140
	r30.s64 = -2106327040;
	// lwz r3,27088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,27088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 27088);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mftb r11
	r11.u64 = __rdtsc();
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x8236d1f0
	sub_8236D1F0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,2612
	ctx.r4.s64 = r11.s64 + 2612;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// nop 
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mftb r11
	r11.u64 = __rdtsc();
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r10,18888
	ctx.r3.s64 = ctx.r10.s64 + 18888;
	// subf r10,r30,r11
	ctx.r10.s64 = r11.s64 - r30.s64;
	// mr r27,r11
	r27.u64 = r11.u64;
	// clrldi r30,r10,32
	r30.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lis r29,-32136
	r29.s64 = -2106064896;
	// mr r11,r30
	r11.u64 = r30.u64;
	// sradi r10,r30,32
	xer.ca = (r30.s64 < 0) & ((r30.u64 & 0xFFFFFFFF) != 0);
	ctx.r10.s64 = r30.s64 >> 32;
	// lis r28,-32136
	r28.s64 = -2106064896;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// lfs f0,18804(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 18804);
	f0.f64 = double(temp.f32);
	// std r10,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// lfd f13,88(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,80(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,18800(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 18800);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f31,f12,f0,f13
	f31.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// bl 0x82273778
	sub_82273778(ctx, base);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r3,r11,23080
	ctx.r3.s64 = r11.s64 + 23080;
	// bl 0x82281628
	sub_82281628(ctx, base);
	// bl 0x822e9bc0
	sub_822E9BC0(ctx, base);
	// bl 0x8214f3e0
	sub_8214F3E0(ctx, base);
	// bl 0x82224b00
	sub_82224B00(ctx, base);
	// bl 0x82363148
	sub_82363148(ctx, base);
	// bl 0x82121dc8
	sub_82121DC8(ctx, base);
	// bl 0x822b35b8
	sub_822B35B8(ctx, base);
	// bl 0x82284020
	sub_82284020(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,18800(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 18800);
	f0.f64 = double(temp.f32);
	// lfs f13,18804(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 18804);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,2608(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2608);
	f30.f64 = double(temp.f32);
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r26,r11,0
	r26.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r27,r26
	r11.s64 = r26.s64 - r27.s64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// sradi r10,r30,32
	xer.ca = (r30.s64 < 0) & ((r30.u64 & 0xFFFFFFFF) != 0);
	ctx.r10.s64 = r30.s64 >> 32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// std r10,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// lfd f12,80(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,88(r31)
	ctx.f11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmadds f12,f11,f13,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - f31.f64));
	// fcmpu cr6,f12,f30
	cr6.compare(ctx.f12.f64, f30.f64);
	// nop 
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// addi r4,r11,2580
	ctx.r4.s64 = r11.s64 + 2580;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// nop 
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lfs f0,18804(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 18804);
	f0.f64 = double(temp.f32);
	// subf r10,r26,r11
	ctx.r10.s64 = r11.s64 - r26.s64;
	// mr r26,r11
	r26.u64 = r11.u64;
	// clrldi r11,r10,32
	r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// sradi r10,r30,32
	xer.ca = (r30.s64 < 0) & ((r30.u64 & 0xFFFFFFFF) != 0);
	ctx.r10.s64 = r30.s64 >> 32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// std r10,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// lfd f13,80(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,88(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,18800(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 18800);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f31,f12,f0,f13
	f31.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// bl 0x822b2058
	sub_822B2058(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r25,r11,16016
	r25.s64 = r11.s64 + 16016;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8236c4c0
	sub_8236C4C0(ctx, base);
	// bl 0x82282688
	sub_82282688(ctx, base);
	// bl 0x822b2a08
	sub_822B2A08(ctx, base);
	// lfs f0,18800(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 18800);
	f0.f64 = double(temp.f32);
	// lfs f13,18804(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 18804);
	ctx.f13.f64 = double(temp.f32);
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r27,r11,0
	r27.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r26,r27
	r11.s64 = r27.s64 - r26.s64;
	// mr r26,r27
	r26.u64 = r27.u64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// sradi r10,r30,32
	xer.ca = (r30.s64 < 0) & ((r30.u64 & 0xFFFFFFFF) != 0);
	ctx.r10.s64 = r30.s64 >> 32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// std r10,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// lfd f12,80(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,88(r31)
	ctx.f11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmadds f12,f11,f13,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - f31.f64));
	// fcmpu cr6,f12,f30
	cr6.compare(ctx.f12.f64, f30.f64);
	// nop 
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// addi r4,r11,2556
	ctx.r4.s64 = r11.s64 + 2556;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// nop 
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lfs f0,18804(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 18804);
	f0.f64 = double(temp.f32);
	// subf r10,r27,r11
	ctx.r10.s64 = r11.s64 - r27.s64;
	// mr r27,r11
	r27.u64 = r11.u64;
	// clrldi r11,r10,32
	r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// sradi r10,r30,32
	xer.ca = (r30.s64 < 0) & ((r30.u64 & 0xFFFFFFFF) != 0);
	ctx.r10.s64 = r30.s64 >> 32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// std r10,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// lfd f13,80(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,88(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,18800(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 18800);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f31,f12,f0,f13
	f31.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8236d350
	sub_8236D350(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-9836(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9836);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8212055c
	if (!cr6.eq) goto loc_8212055C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82120568
	goto loc_82120568;
loc_8212055C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
loc_82120568:
	// addi r3,r25,76
	ctx.r3.s64 = r25.s64 + 76;
	// bl 0x82120148
	sub_82120148(ctx, base);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r3,r11,24812
	ctx.r3.s64 = r11.s64 + 24812;
	// bl 0x822af248
	sub_822AF248(ctx, base);
	// lfs f0,18800(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 18800);
	f0.f64 = double(temp.f32);
	// lfs f13,18804(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 18804);
	ctx.f13.f64 = double(temp.f32);
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r10,r27,r11
	ctx.r10.s64 = r11.s64 - r27.s64;
	// mr r27,r11
	r27.u64 = r11.u64;
	// clrldi r11,r10,32
	r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// sradi r10,r30,32
	xer.ca = (r30.s64 < 0) & ((r30.u64 & 0xFFFFFFFF) != 0);
	ctx.r10.s64 = r30.s64 >> 32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// std r10,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// lfd f12,80(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,88(r31)
	ctx.f11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmadds f12,f11,f13,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - f31.f64));
	// fcmpu cr6,f12,f30
	cr6.compare(ctx.f12.f64, f30.f64);
	// nop 
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r31,352
	ctx.r1.s64 = r31.s64 + 352;
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_821205F0"))) PPC_WEAK_FUNC(sub_821205F0);
PPC_FUNC_IMPL(__imp__sub_821205F0) {
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
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8236d350
	sub_8236D350(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120618"))) PPC_WEAK_FUNC(sub_82120618);
PPC_FUNC_IMPL(__imp__sub_82120618) {
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
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82120640"))) PPC_WEAK_FUNC(sub_82120640);
PPC_FUNC_IMPL(__imp__sub_82120640) {
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
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
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

__attribute__((alias("__imp__sub_82120668"))) PPC_WEAK_FUNC(sub_82120668);
PPC_FUNC_IMPL(__imp__sub_82120668) {
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
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
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

__attribute__((alias("__imp__sub_82120690"))) PPC_WEAK_FUNC(sub_82120690);
PPC_FUNC_IMPL(__imp__sub_82120690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x821206cc
	if (cr6.eq) goto loc_821206CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_821206A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x821206c4
	if (cr0.eq) goto loc_821206C4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x821206a0
	if (cr6.eq) goto loc_821206A0;
loc_821206C4:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// b 0x821206e0
	goto loc_821206E0;
loc_821206CC:
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
loc_821206E0:
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821206EC"))) PPC_WEAK_FUNC(sub_821206EC);
PPC_FUNC_IMPL(__imp__sub_821206EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821206F0"))) PPC_WEAK_FUNC(sub_821206F0);
PPC_FUNC_IMPL(__imp__sub_821206F0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x823567c0
	sub_823567C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821206FC"))) PPC_WEAK_FUNC(sub_821206FC);
PPC_FUNC_IMPL(__imp__sub_821206FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120700"))) PPC_WEAK_FUNC(sub_82120700);
PPC_FUNC_IMPL(__imp__sub_82120700) {
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
	// beq 0x82120740
	if (cr0.eq) goto loc_82120740;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,852
	ctx.r3.s64 = r11.s64 + 852;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82120748
	goto loc_82120748;
loc_82120740:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82120748:
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

__attribute__((alias("__imp__sub_82120764"))) PPC_WEAK_FUNC(sub_82120764);
PPC_FUNC_IMPL(__imp__sub_82120764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120768"))) PPC_WEAK_FUNC(sub_82120768);
PPC_FUNC_IMPL(__imp__sub_82120768) {
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
	// beq 0x821207a8
	if (cr0.eq) goto loc_821207A8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,904
	ctx.r3.s64 = r11.s64 + 904;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821207b0
	goto loc_821207B0;
loc_821207A8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_821207B0:
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

__attribute__((alias("__imp__sub_821207CC"))) PPC_WEAK_FUNC(sub_821207CC);
PPC_FUNC_IMPL(__imp__sub_821207CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821207D0"))) PPC_WEAK_FUNC(sub_821207D0);
PPC_FUNC_IMPL(__imp__sub_821207D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	// bl 0x82357718
	sub_82357718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
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
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120818"))) PPC_WEAK_FUNC(sub_82120818);
PPC_FUNC_IMPL(__imp__sub_82120818) {
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
	// lhz r11,10(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 10);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh. r11,r11
	r11.s64 = r11.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,10(r31)
	PPC_STORE_U16(r31.u32 + 10, r11.u16);
	// bne 0x82120850
	if (!cr0.eq) goto loc_82120850;
	// bl 0x82319ba8
	sub_82319BA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_82120850:
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

__attribute__((alias("__imp__sub_82120864"))) PPC_WEAK_FUNC(sub_82120864);
PPC_FUNC_IMPL(__imp__sub_82120864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120868"))) PPC_WEAK_FUNC(sub_82120868);
PPC_FUNC_IMPL(__imp__sub_82120868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212087C"))) PPC_WEAK_FUNC(sub_8212087C);
PPC_FUNC_IMPL(__imp__sub_8212087C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120880"))) PPC_WEAK_FUNC(sub_82120880);
PPC_FUNC_IMPL(__imp__sub_82120880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// ld r11,0(r4)
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf. r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// bge 0x821208d0
	if (!cr0.lt) goto loc_821208D0;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, r11.u32);
	// addi r11,r10,-4
	r11.s64 = ctx.r10.s64 + -4;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// b 0x821208d4
	goto loc_821208D4;
loc_821208D0:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, r11.u32);
loc_821208D4:
	// ld r11,-16(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821208E0"))) PPC_WEAK_FUNC(sub_821208E0);
PPC_FUNC_IMPL(__imp__sub_821208E0) {
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
	// bl 0x82120700
	sub_82120700(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82120910
	if (cr0.eq) goto loc_82120910;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82120910:
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

__attribute__((alias("__imp__sub_82120924"))) PPC_WEAK_FUNC(sub_82120924);
PPC_FUNC_IMPL(__imp__sub_82120924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120928"))) PPC_WEAK_FUNC(sub_82120928);
PPC_FUNC_IMPL(__imp__sub_82120928) {
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
	// ld r11,0(r4)
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// bl 0x82120880
	sub_82120880(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// slw r11,r10,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_82120984"))) PPC_WEAK_FUNC(sub_82120984);
PPC_FUNC_IMPL(__imp__sub_82120984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120988"))) PPC_WEAK_FUNC(sub_82120988);
PPC_FUNC_IMPL(__imp__sub_82120988) {
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
	// bl 0x821208e0
	sub_821208E0(ctx, base);
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

__attribute__((alias("__imp__sub_821209EC"))) PPC_WEAK_FUNC(sub_821209EC);
PPC_FUNC_IMPL(__imp__sub_821209EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821209F0"))) PPC_WEAK_FUNC(sub_821209F0);
PPC_FUNC_IMPL(__imp__sub_821209F0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r30,31
	r11.s64 = r30.s64 + 31;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// rlwinm r28,r11,27,5,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82120768
	sub_82120768(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// std r10,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bl 0x82120880
	sub_82120880(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82120A70"))) PPC_WEAK_FUNC(sub_82120A70);
PPC_FUNC_IMPL(__imp__sub_82120A70) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82120A90"))) PPC_WEAK_FUNC(sub_82120A90);
PPC_FUNC_IMPL(__imp__sub_82120A90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120A94"))) PPC_WEAK_FUNC(sub_82120A94);
PPC_FUNC_IMPL(__imp__sub_82120A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120A98"))) PPC_WEAK_FUNC(sub_82120A98);
PPC_FUNC_IMPL(__imp__sub_82120A98) {
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
	// b 0x82120ac8
	goto loc_82120AC8;
loc_82120AB8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82120AC8:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82120ab8
	if (!cr6.eq) goto loc_82120AB8;
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

__attribute__((alias("__imp__sub_82120AF0"))) PPC_WEAK_FUNC(sub_82120AF0);
PPC_FUNC_IMPL(__imp__sub_82120AF0) {
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

__attribute__((alias("__imp__sub_82120B44"))) PPC_WEAK_FUNC(sub_82120B44);
PPC_FUNC_IMPL(__imp__sub_82120B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120B48"))) PPC_WEAK_FUNC(sub_82120B48);
PPC_FUNC_IMPL(__imp__sub_82120B48) {
	PPC_FUNC_PROLOGUE();
	// b 0x82120a98
	sub_82120A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82120B4C"))) PPC_WEAK_FUNC(sub_82120B4C);
PPC_FUNC_IMPL(__imp__sub_82120B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120B50"))) PPC_WEAK_FUNC(sub_82120B50);
PPC_FUNC_IMPL(__imp__sub_82120B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,3016(0)
	r16.u64 = PPC_LOAD_U32(3016);
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82120208
	sub_82120208(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82120090
	sub_82120090(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82120080
	sub_82120080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82120B58"))) PPC_WEAK_FUNC(sub_82120B58);
PPC_FUNC_IMPL(__imp__sub_82120B58) {
	PPC_FUNC_PROLOGUE();
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82120208
	sub_82120208(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82120090
	sub_82120090(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82120080
	sub_82120080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82120BA4"))) PPC_WEAK_FUNC(sub_82120BA4);
PPC_FUNC_IMPL(__imp__sub_82120BA4) {
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
	// bl 0x82120080
	sub_82120080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120BCC"))) PPC_WEAK_FUNC(sub_82120BCC);
PPC_FUNC_IMPL(__imp__sub_82120BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120BD0"))) PPC_WEAK_FUNC(sub_82120BD0);
PPC_FUNC_IMPL(__imp__sub_82120BD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,42
	ctx.r3.s64 = 42;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120BD8"))) PPC_WEAK_FUNC(sub_82120BD8);
PPC_FUNC_IMPL(__imp__sub_82120BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// rlwinm r11,r3,16,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r3,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000000;
	// addi r10,r11,-128
	ctx.r10.s64 = r11.s64 + -128;
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// bgt cr6,0x82120e5c
	if (cr6.gt) {
		sub_82120E5C(ctx, base);
		return;
	}
	// lis r12,-32256
	r12.s64 = -2113929216;
	// addi r12,r12,3072
	r12.s64 = r12.s64 + 3072;
	// lbzx r0,r12,r10
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32238
	r12.s64 = -2112749568;
	// addi r12,r12,3108
	r12.s64 = r12.s64 + 3108;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x82120C24
		return;
	case 1:
		// ERROR: 0x82120C5C
		return;
	case 2:
		// ERROR: 0x82120C7C
		return;
	case 3:
		// ERROR: 0x82120C9C
		return;
	case 4:
		// ERROR: 0x82120CBC
		return;
	case 5:
		// ERROR: 0x82120CDC
		return;
	case 6:
		// ERROR: 0x82120CFC
		return;
	case 7:
		// ERROR: 0x82120D1C
		return;
	case 8:
		// ERROR: 0x82120D3C
		return;
	case 9:
		// ERROR: 0x82120D5C
		return;
	case 10:
		// ERROR: 0x82120D7C
		return;
	case 11:
		// ERROR: 0x82120D9C
		return;
	case 12:
		// ERROR: 0x82120DBC
		return;
	case 13:
		// ERROR: 0x82120DDC
		return;
	case 14:
		// ERROR: 0x82120DFC
		return;
	case 15:
		// ERROR: 0x82120E1C
		return;
	case 16:
		// ERROR: 0x82120E3C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82120C24"))) PPC_WEAK_FUNC(sub_82120C24);
PPC_FUNC_IMPL(__imp__sub_82120C24) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82120c50
	if (cr0.eq) goto loc_82120C50;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r3,6916(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6916);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3620
	ctx.r3.s64 = r11.s64 + 3620;
	// blr 
	return;
loc_82120C50:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3612
	ctx.r3.s64 = r11.s64 + 3612;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120C5C"))) PPC_WEAK_FUNC(sub_82120C5C);
PPC_FUNC_IMPL(__imp__sub_82120C5C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120c70
	if (!cr0.eq) goto loc_82120C70;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3600
	ctx.r3.s64 = r11.s64 + 3600;
	// blr 
	return;
loc_82120C70:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3584
	ctx.r3.s64 = r11.s64 + 3584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120C7C"))) PPC_WEAK_FUNC(sub_82120C7C);
PPC_FUNC_IMPL(__imp__sub_82120C7C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120c90
	if (!cr0.eq) goto loc_82120C90;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3572
	ctx.r3.s64 = r11.s64 + 3572;
	// blr 
	return;
loc_82120C90:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3552
	ctx.r3.s64 = r11.s64 + 3552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120C9C"))) PPC_WEAK_FUNC(sub_82120C9C);
PPC_FUNC_IMPL(__imp__sub_82120C9C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120cb0
	if (!cr0.eq) goto loc_82120CB0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3540
	ctx.r3.s64 = r11.s64 + 3540;
	// blr 
	return;
loc_82120CB0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3524
	ctx.r3.s64 = r11.s64 + 3524;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120CBC"))) PPC_WEAK_FUNC(sub_82120CBC);
PPC_FUNC_IMPL(__imp__sub_82120CBC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120cd0
	if (!cr0.eq) goto loc_82120CD0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3512
	ctx.r3.s64 = r11.s64 + 3512;
	// blr 
	return;
loc_82120CD0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3496
	ctx.r3.s64 = r11.s64 + 3496;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120CDC"))) PPC_WEAK_FUNC(sub_82120CDC);
PPC_FUNC_IMPL(__imp__sub_82120CDC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120cf0
	if (!cr0.eq) goto loc_82120CF0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3480
	ctx.r3.s64 = r11.s64 + 3480;
	// blr 
	return;
loc_82120CF0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3456
	ctx.r3.s64 = r11.s64 + 3456;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120CFC"))) PPC_WEAK_FUNC(sub_82120CFC);
PPC_FUNC_IMPL(__imp__sub_82120CFC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120d10
	if (!cr0.eq) goto loc_82120D10;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3444
	ctx.r3.s64 = r11.s64 + 3444;
	// blr 
	return;
loc_82120D10:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3428
	ctx.r3.s64 = r11.s64 + 3428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120D1C"))) PPC_WEAK_FUNC(sub_82120D1C);
PPC_FUNC_IMPL(__imp__sub_82120D1C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120d30
	if (!cr0.eq) goto loc_82120D30;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3412
	ctx.r3.s64 = r11.s64 + 3412;
	// blr 
	return;
loc_82120D30:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3392
	ctx.r3.s64 = r11.s64 + 3392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120D3C"))) PPC_WEAK_FUNC(sub_82120D3C);
PPC_FUNC_IMPL(__imp__sub_82120D3C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120d50
	if (!cr0.eq) goto loc_82120D50;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3380
	ctx.r3.s64 = r11.s64 + 3380;
	// blr 
	return;
loc_82120D50:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3360
	ctx.r3.s64 = r11.s64 + 3360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120D5C"))) PPC_WEAK_FUNC(sub_82120D5C);
PPC_FUNC_IMPL(__imp__sub_82120D5C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120d70
	if (!cr0.eq) goto loc_82120D70;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3348
	ctx.r3.s64 = r11.s64 + 3348;
	// blr 
	return;
loc_82120D70:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3328
	ctx.r3.s64 = r11.s64 + 3328;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120D7C"))) PPC_WEAK_FUNC(sub_82120D7C);
PPC_FUNC_IMPL(__imp__sub_82120D7C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120d90
	if (!cr0.eq) goto loc_82120D90;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3320
	ctx.r3.s64 = r11.s64 + 3320;
	// blr 
	return;
loc_82120D90:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3304
	ctx.r3.s64 = r11.s64 + 3304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120D9C"))) PPC_WEAK_FUNC(sub_82120D9C);
PPC_FUNC_IMPL(__imp__sub_82120D9C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120db0
	if (!cr0.eq) goto loc_82120DB0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3296
	ctx.r3.s64 = r11.s64 + 3296;
	// blr 
	return;
loc_82120DB0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3280
	ctx.r3.s64 = r11.s64 + 3280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120DBC"))) PPC_WEAK_FUNC(sub_82120DBC);
PPC_FUNC_IMPL(__imp__sub_82120DBC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120dd0
	if (!cr0.eq) goto loc_82120DD0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3272
	ctx.r3.s64 = r11.s64 + 3272;
	// blr 
	return;
loc_82120DD0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3256
	ctx.r3.s64 = r11.s64 + 3256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120DDC"))) PPC_WEAK_FUNC(sub_82120DDC);
PPC_FUNC_IMPL(__imp__sub_82120DDC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120df0
	if (!cr0.eq) goto loc_82120DF0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3236
	ctx.r3.s64 = r11.s64 + 3236;
	// blr 
	return;
loc_82120DF0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3208
	ctx.r3.s64 = r11.s64 + 3208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120DFC"))) PPC_WEAK_FUNC(sub_82120DFC);
PPC_FUNC_IMPL(__imp__sub_82120DFC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120e10
	if (!cr0.eq) goto loc_82120E10;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3200
	ctx.r3.s64 = r11.s64 + 3200;
	// blr 
	return;
loc_82120E10:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3184
	ctx.r3.s64 = r11.s64 + 3184;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120E1C"))) PPC_WEAK_FUNC(sub_82120E1C);
PPC_FUNC_IMPL(__imp__sub_82120E1C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120e30
	if (!cr0.eq) goto loc_82120E30;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3172
	ctx.r3.s64 = r11.s64 + 3172;
	// blr 
	return;
loc_82120E30:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3152
	ctx.r3.s64 = r11.s64 + 3152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120E3C"))) PPC_WEAK_FUNC(sub_82120E3C);
PPC_FUNC_IMPL(__imp__sub_82120E3C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120e50
	if (!cr0.eq) goto loc_82120E50;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3140
	ctx.r3.s64 = r11.s64 + 3140;
	// blr 
	return;
loc_82120E50:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3124
	ctx.r3.s64 = r11.s64 + 3124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120E5C"))) PPC_WEAK_FUNC(sub_82120E5C);
PPC_FUNC_IMPL(__imp__sub_82120E5C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3112
	ctx.r3.s64 = r11.s64 + 3112;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120E68"))) PPC_WEAK_FUNC(sub_82120E68);
PPC_FUNC_IMPL(__imp__sub_82120E68) {
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
	// rlwinm r11,r30,0,0,0
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80000000;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82120ebc
	if (!cr0.eq) goto loc_82120EBC;
	// rlwinm r11,r30,0,8,15
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFF0000;
	// lis r10,140
	ctx.r10.s64 = 9175040;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82120ebc
	if (!cr0.eq) goto loc_82120EBC;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// b 0x82120ef4
	goto loc_82120EF4;
loc_82120EBC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82120ee0
	if (cr6.eq) goto loc_82120EE0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b4e00
	sub_823B4E00(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r10,6912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 6912);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// stw r10,6912(r11)
	PPC_STORE_U32(r11.u32 + 6912, ctx.r10.u32);
loc_82120EE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82358950
	sub_82358950(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b4de0
	sub_823B4DE0(ctx, base);
loc_82120EF4:
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

__attribute__((alias("__imp__sub_82120F0C"))) PPC_WEAK_FUNC(sub_82120F0C);
PPC_FUNC_IMPL(__imp__sub_82120F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120F10"))) PPC_WEAK_FUNC(sub_82120F10);
PPC_FUNC_IMPL(__imp__sub_82120F10) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823b4e10
	sub_823B4E10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823b4e98
	sub_823B4E98(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r10,6912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 6912);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r10,6912(r11)
	PPC_STORE_U32(r11.u32 + 6912, ctx.r10.u32);
	// bl 0x82358888
	sub_82358888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82120F74"))) PPC_WEAK_FUNC(sub_82120F74);
PPC_FUNC_IMPL(__imp__sub_82120F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120F78"))) PPC_WEAK_FUNC(sub_82120F78);
PPC_FUNC_IMPL(__imp__sub_82120F78) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82120fa8
	if (cr6.eq) goto loc_82120FA8;
	// bl 0x823b4e98
	sub_823B4E98(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r10,6912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 6912);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// stw r10,6912(r11)
	PPC_STORE_U32(r11.u32 + 6912, ctx.r10.u32);
loc_82120FA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b4ea0
	sub_823B4EA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82358950
	sub_82358950(ctx, base);
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

__attribute__((alias("__imp__sub_82120FCC"))) PPC_WEAK_FUNC(sub_82120FCC);
PPC_FUNC_IMPL(__imp__sub_82120FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120FD0"))) PPC_WEAK_FUNC(sub_82120FD0);
PPC_FUNC_IMPL(__imp__sub_82120FD0) {
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r30,-32136
	r30.s64 = -2106064896;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,6916(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 6916);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r29,6916(r30)
	PPC_STORE_U32(r30.u32 + 6916, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82121018"))) PPC_WEAK_FUNC(sub_82121018);
PPC_FUNC_IMPL(__imp__sub_82121018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// stw r11,6916(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6916, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121028"))) PPC_WEAK_FUNC(sub_82121028);
PPC_FUNC_IMPL(__imp__sub_82121028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// rlwinm r10,r3,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000000;
	// rlwinm r11,r3,8,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x821210e0
	if (cr0.eq) {
		sub_821210E0(ctx, base);
		return;
	}
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bgt cr6,0x821210d8
	if (cr6.gt) {
		sub_821210D8(ctx, base);
		return;
	}
	// lis r12,-32256
	r12.s64 = -2113929216;
	// addi r12,r12,3096
	r12.s64 = r12.s64 + 3096;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-32238
	r12.s64 = -2112749568;
	// addi r12,r12,4212
	r12.s64 = r12.s64 + 4212;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		// ERROR: 0x821210B4
		return;
	case 1:
		// ERROR: 0x821210D8
		return;
	case 2:
		// ERROR: 0x82121074
		return;
	case 3:
		// ERROR: 0x82121100
		return;
	case 4:
		// ERROR: 0x821210F8
		return;
	case 5:
		// ERROR: 0x8212107C
		return;
	case 6:
		// ERROR: 0x82121084
		return;
	case 7:
		// ERROR: 0x8212108C
		return;
	case 8:
		// ERROR: 0x82121094
		return;
	case 9:
		// ERROR: 0x8212109C
		return;
	case 10:
		// ERROR: 0x821210A4
		return;
	case 11:
		// ERROR: 0x821210AC
		return;
	case 12:
		// ERROR: 0x821210B4
		return;
	case 13:
		// ERROR: 0x821210BC
		return;
	case 14:
		// ERROR: 0x821210C4
		return;
	case 15:
		// ERROR: 0x821210CC
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82121074"))) PPC_WEAK_FUNC(sub_82121074);
PPC_FUNC_IMPL(__imp__sub_82121074) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212107C"))) PPC_WEAK_FUNC(sub_8212107C);
PPC_FUNC_IMPL(__imp__sub_8212107C) {
	PPC_FUNC_PROLOGUE();
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121084"))) PPC_WEAK_FUNC(sub_82121084);
PPC_FUNC_IMPL(__imp__sub_82121084) {
	PPC_FUNC_PROLOGUE();
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212108C"))) PPC_WEAK_FUNC(sub_8212108C);
PPC_FUNC_IMPL(__imp__sub_8212108C) {
	PPC_FUNC_PROLOGUE();
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121094"))) PPC_WEAK_FUNC(sub_82121094);
PPC_FUNC_IMPL(__imp__sub_82121094) {
	PPC_FUNC_PROLOGUE();
	// li r3,256
	ctx.r3.s64 = 256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212109C"))) PPC_WEAK_FUNC(sub_8212109C);
PPC_FUNC_IMPL(__imp__sub_8212109C) {
	PPC_FUNC_PROLOGUE();
	// li r3,512
	ctx.r3.s64 = 512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821210A4"))) PPC_WEAK_FUNC(sub_821210A4);
PPC_FUNC_IMPL(__imp__sub_821210A4) {
	PPC_FUNC_PROLOGUE();
	// li r3,1024
	ctx.r3.s64 = 1024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821210AC"))) PPC_WEAK_FUNC(sub_821210AC);
PPC_FUNC_IMPL(__imp__sub_821210AC) {
	PPC_FUNC_PROLOGUE();
	// li r3,2048
	ctx.r3.s64 = 2048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821210B4"))) PPC_WEAK_FUNC(sub_821210B4);
PPC_FUNC_IMPL(__imp__sub_821210B4) {
	PPC_FUNC_PROLOGUE();
	// li r3,4096
	ctx.r3.s64 = 4096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821210BC"))) PPC_WEAK_FUNC(sub_821210BC);
PPC_FUNC_IMPL(__imp__sub_821210BC) {
	PPC_FUNC_PROLOGUE();
	// li r3,8192
	ctx.r3.s64 = 8192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821210C4"))) PPC_WEAK_FUNC(sub_821210C4);
PPC_FUNC_IMPL(__imp__sub_821210C4) {
	PPC_FUNC_PROLOGUE();
	// li r3,16384
	ctx.r3.s64 = 16384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821210CC"))) PPC_WEAK_FUNC(sub_821210CC);
PPC_FUNC_IMPL(__imp__sub_821210CC) {
	PPC_FUNC_PROLOGUE();
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821210D8"))) PPC_WEAK_FUNC(sub_821210D8);
PPC_FUNC_IMPL(__imp__sub_821210D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821210E0"))) PPC_WEAK_FUNC(sub_821210E0);
PPC_FUNC_IMPL(__imp__sub_821210E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x821210f8
	if (cr6.lt) goto loc_821210F8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82121100
	if (cr6.lt) goto loc_82121100;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x821210d8
	if (!cr6.eq) {
		sub_821210D8(ctx, base);
		return;
	}
loc_821210F8:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_82121100:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121108"))) PPC_WEAK_FUNC(sub_82121108);
PPC_FUNC_IMPL(__imp__sub_82121108) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r11,r31,0,0,0
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80000000;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82121190
	if (!cr0.eq) goto loc_82121190;
	// rlwinm r11,r31,0,8,15
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFF0000;
	// lis r10,140
	ctx.r10.s64 = 9175040;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82121190
	if (!cr0.eq) goto loc_82121190;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121028
	sub_82121028(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120bd8
	sub_82120BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r31,0,1,1
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821211dc
	if (cr0.eq) goto loc_821211DC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x821211dc
	if (cr6.eq) goto loc_821211DC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// b 0x821211dc
	goto loc_821211DC;
loc_82121190:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823b4d48
	sub_823B4D48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823b4e00
	sub_823B4E00(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r10,6912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 6912);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r10,6912(r11)
	PPC_STORE_U32(r11.u32 + 6912, ctx.r10.u32);
	// bl 0x82120bd8
	sub_82120BD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82358888
	sub_82358888(ctx, base);
loc_821211DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821211E8"))) PPC_WEAK_FUNC(sub_821211E8);
PPC_FUNC_IMPL(__imp__sub_821211E8) {
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
	// lwz r16,3664(0)
	r16.u64 = PPC_LOAD_U32(3664);
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
	// lwz r11,6924(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6924);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6920
	r30.s64 = ctx.r9.s64 + 6920;
	// bne 0x82121234
	if (!cr0.eq) goto loc_82121234;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6924, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,3636
	ctx.r4.s64 = r11.s64 + 3636;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82121234:
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

__attribute__((alias("__imp__sub_821211F0"))) PPC_WEAK_FUNC(sub_821211F0);
PPC_FUNC_IMPL(__imp__sub_821211F0) {
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
	// lwz r11,6924(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6924);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6920
	r30.s64 = ctx.r9.s64 + 6920;
	// bne 0x82121234
	if (!cr0.eq) goto loc_82121234;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6924, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,3636
	ctx.r4.s64 = r11.s64 + 3636;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82121234:
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

__attribute__((alias("__imp__sub_82121248"))) PPC_WEAK_FUNC(sub_82121248);
PPC_FUNC_IMPL(__imp__sub_82121248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,6924
	r11.s64 = r11.s64 + 6924;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,6924
	ctx.r10.s64 = ctx.r10.s64 + 6924;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121270"))) PPC_WEAK_FUNC(sub_82121270);
PPC_FUNC_IMPL(__imp__sub_82121270) {
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
	// lwz r16,3736(0)
	r16.u64 = PPC_LOAD_U32(3736);
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
	// lwz r11,6932(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6932);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6928
	r30.s64 = ctx.r9.s64 + 6928;
	// bne 0x821212bc
	if (!cr0.eq) goto loc_821212BC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6932(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6932, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,3712
	ctx.r4.s64 = r11.s64 + 3712;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821212BC:
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

__attribute__((alias("__imp__sub_82121278"))) PPC_WEAK_FUNC(sub_82121278);
PPC_FUNC_IMPL(__imp__sub_82121278) {
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
	// lwz r11,6932(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6932);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6928
	r30.s64 = ctx.r9.s64 + 6928;
	// bne 0x821212bc
	if (!cr0.eq) goto loc_821212BC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6932(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6932, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,3712
	ctx.r4.s64 = r11.s64 + 3712;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821212BC:
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

__attribute__((alias("__imp__sub_821212D0"))) PPC_WEAK_FUNC(sub_821212D0);
PPC_FUNC_IMPL(__imp__sub_821212D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,6932
	r11.s64 = r11.s64 + 6932;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,6932
	ctx.r10.s64 = ctx.r10.s64 + 6932;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821212F8"))) PPC_WEAK_FUNC(sub_821212F8);
PPC_FUNC_IMPL(__imp__sub_821212F8) {
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
	// lwz r16,3808(0)
	r16.u64 = PPC_LOAD_U32(3808);
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
	// lwz r11,6940(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6940);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6936
	r30.s64 = ctx.r9.s64 + 6936;
	// bne 0x82121344
	if (!cr0.eq) goto loc_82121344;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6940, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,3784
	ctx.r4.s64 = r11.s64 + 3784;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82121344:
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

__attribute__((alias("__imp__sub_82121300"))) PPC_WEAK_FUNC(sub_82121300);
PPC_FUNC_IMPL(__imp__sub_82121300) {
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
	// lwz r11,6940(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6940);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6936
	r30.s64 = ctx.r9.s64 + 6936;
	// bne 0x82121344
	if (!cr0.eq) goto loc_82121344;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6940, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,3784
	ctx.r4.s64 = r11.s64 + 3784;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82121344:
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

__attribute__((alias("__imp__sub_82121358"))) PPC_WEAK_FUNC(sub_82121358);
PPC_FUNC_IMPL(__imp__sub_82121358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,6940
	r11.s64 = r11.s64 + 6940;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,6940
	ctx.r10.s64 = ctx.r10.s64 + 6940;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121380"))) PPC_WEAK_FUNC(sub_82121380);
PPC_FUNC_IMPL(__imp__sub_82121380) {
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
	// lwz r16,3888(0)
	r16.u64 = PPC_LOAD_U32(3888);
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
	// lwz r11,6948(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6948);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6944
	r30.s64 = ctx.r9.s64 + 6944;
	// bne 0x821213cc
	if (!cr0.eq) goto loc_821213CC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6948, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,3856
	ctx.r4.s64 = r11.s64 + 3856;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821213CC:
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

__attribute__((alias("__imp__sub_82121388"))) PPC_WEAK_FUNC(sub_82121388);
PPC_FUNC_IMPL(__imp__sub_82121388) {
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
	// lwz r11,6948(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6948);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6944
	r30.s64 = ctx.r9.s64 + 6944;
	// bne 0x821213cc
	if (!cr0.eq) goto loc_821213CC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6948, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,3856
	ctx.r4.s64 = r11.s64 + 3856;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821213CC:
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

__attribute__((alias("__imp__sub_821213E0"))) PPC_WEAK_FUNC(sub_821213E0);
PPC_FUNC_IMPL(__imp__sub_821213E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,6948
	r11.s64 = r11.s64 + 6948;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,6948
	ctx.r10.s64 = ctx.r10.s64 + 6948;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121408"))) PPC_WEAK_FUNC(sub_82121408);
PPC_FUNC_IMPL(__imp__sub_82121408) {
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
	// lwz r16,3968(0)
	r16.u64 = PPC_LOAD_U32(3968);
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
	// lwz r11,6956(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6956);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6952
	r30.s64 = ctx.r9.s64 + 6952;
	// bne 0x82121454
	if (!cr0.eq) goto loc_82121454;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6956, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,3936
	ctx.r4.s64 = r11.s64 + 3936;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82121454:
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

__attribute__((alias("__imp__sub_82121410"))) PPC_WEAK_FUNC(sub_82121410);
PPC_FUNC_IMPL(__imp__sub_82121410) {
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
	// lwz r11,6956(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6956);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6952
	r30.s64 = ctx.r9.s64 + 6952;
	// bne 0x82121454
	if (!cr0.eq) goto loc_82121454;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6956, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,3936
	ctx.r4.s64 = r11.s64 + 3936;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82121454:
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

__attribute__((alias("__imp__sub_82121468"))) PPC_WEAK_FUNC(sub_82121468);
PPC_FUNC_IMPL(__imp__sub_82121468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,6956
	r11.s64 = r11.s64 + 6956;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,6956
	ctx.r10.s64 = ctx.r10.s64 + 6956;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121490"))) PPC_WEAK_FUNC(sub_82121490);
PPC_FUNC_IMPL(__imp__sub_82121490) {
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
	// lwz r16,4048(0)
	r16.u64 = PPC_LOAD_U32(4048);
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
	// lwz r11,6964(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6964);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6960
	r30.s64 = ctx.r9.s64 + 6960;
	// bne 0x821214dc
	if (!cr0.eq) goto loc_821214DC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6964, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,4016
	ctx.r4.s64 = r11.s64 + 4016;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821214DC:
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

__attribute__((alias("__imp__sub_82121498"))) PPC_WEAK_FUNC(sub_82121498);
PPC_FUNC_IMPL(__imp__sub_82121498) {
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
	// lwz r11,6964(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6964);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6960
	r30.s64 = ctx.r9.s64 + 6960;
	// bne 0x821214dc
	if (!cr0.eq) goto loc_821214DC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6964, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,4016
	ctx.r4.s64 = r11.s64 + 4016;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821214DC:
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

__attribute__((alias("__imp__sub_821214F0"))) PPC_WEAK_FUNC(sub_821214F0);
PPC_FUNC_IMPL(__imp__sub_821214F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,6964
	r11.s64 = r11.s64 + 6964;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,6964
	ctx.r10.s64 = ctx.r10.s64 + 6964;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121518"))) PPC_WEAK_FUNC(sub_82121518);
PPC_FUNC_IMPL(__imp__sub_82121518) {
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
	// lwz r16,4128(0)
	r16.u64 = PPC_LOAD_U32(4128);
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
	// lwz r11,6972(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6972);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6968
	r30.s64 = ctx.r9.s64 + 6968;
	// bne 0x82121564
	if (!cr0.eq) goto loc_82121564;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6972(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6972, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,4096
	ctx.r4.s64 = r11.s64 + 4096;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82121564:
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

__attribute__((alias("__imp__sub_82121520"))) PPC_WEAK_FUNC(sub_82121520);
PPC_FUNC_IMPL(__imp__sub_82121520) {
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
	// lwz r11,6972(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6972);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6968
	r30.s64 = ctx.r9.s64 + 6968;
	// bne 0x82121564
	if (!cr0.eq) goto loc_82121564;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6972(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6972, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,4096
	ctx.r4.s64 = r11.s64 + 4096;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82121564:
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

__attribute__((alias("__imp__sub_82121578"))) PPC_WEAK_FUNC(sub_82121578);
PPC_FUNC_IMPL(__imp__sub_82121578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,6972
	r11.s64 = r11.s64 + 6972;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,6972
	ctx.r10.s64 = ctx.r10.s64 + 6972;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821215A0"))) PPC_WEAK_FUNC(sub_821215A0);
PPC_FUNC_IMPL(__imp__sub_821215A0) {
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
	// lwz r16,4208(0)
	r16.u64 = PPC_LOAD_U32(4208);
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
	// lwz r11,6980(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6980);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6976
	r30.s64 = ctx.r9.s64 + 6976;
	// bne 0x821215ec
	if (!cr0.eq) goto loc_821215EC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6980, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,4176
	ctx.r4.s64 = r11.s64 + 4176;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821215EC:
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

__attribute__((alias("__imp__sub_821215A8"))) PPC_WEAK_FUNC(sub_821215A8);
PPC_FUNC_IMPL(__imp__sub_821215A8) {
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
	// lwz r11,6980(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6980);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6976
	r30.s64 = ctx.r9.s64 + 6976;
	// bne 0x821215ec
	if (!cr0.eq) goto loc_821215EC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6980, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,4176
	ctx.r4.s64 = r11.s64 + 4176;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821215EC:
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

__attribute__((alias("__imp__sub_82121600"))) PPC_WEAK_FUNC(sub_82121600);
PPC_FUNC_IMPL(__imp__sub_82121600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,6980
	r11.s64 = r11.s64 + 6980;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,6980
	ctx.r10.s64 = ctx.r10.s64 + 6980;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121628"))) PPC_WEAK_FUNC(sub_82121628);
PPC_FUNC_IMPL(__imp__sub_82121628) {
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
	// lwz r16,4280(0)
	r16.u64 = PPC_LOAD_U32(4280);
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
	// lwz r11,6988(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6988);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6984
	r30.s64 = ctx.r9.s64 + 6984;
	// bne 0x82121674
	if (!cr0.eq) goto loc_82121674;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6988, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,4256
	ctx.r4.s64 = r11.s64 + 4256;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82121674:
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

__attribute__((alias("__imp__sub_82121630"))) PPC_WEAK_FUNC(sub_82121630);
PPC_FUNC_IMPL(__imp__sub_82121630) {
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
	// lwz r11,6988(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6988);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6984
	r30.s64 = ctx.r9.s64 + 6984;
	// bne 0x82121674
	if (!cr0.eq) goto loc_82121674;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6988, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,4256
	ctx.r4.s64 = r11.s64 + 4256;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82121674:
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

__attribute__((alias("__imp__sub_82121688"))) PPC_WEAK_FUNC(sub_82121688);
PPC_FUNC_IMPL(__imp__sub_82121688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,6988
	r11.s64 = r11.s64 + 6988;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,6988
	ctx.r10.s64 = ctx.r10.s64 + 6988;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821216B0"))) PPC_WEAK_FUNC(sub_821216B0);
PPC_FUNC_IMPL(__imp__sub_821216B0) {
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
	// lwz r16,4352(0)
	r16.u64 = PPC_LOAD_U32(4352);
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
	// lwz r11,6996(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6996);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6992
	r30.s64 = ctx.r9.s64 + 6992;
	// bne 0x821216fc
	if (!cr0.eq) goto loc_821216FC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6996, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,4328
	ctx.r4.s64 = r11.s64 + 4328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821216FC:
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

__attribute__((alias("__imp__sub_821216B8"))) PPC_WEAK_FUNC(sub_821216B8);
PPC_FUNC_IMPL(__imp__sub_821216B8) {
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
	// lwz r11,6996(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6996);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,6992
	r30.s64 = ctx.r9.s64 + 6992;
	// bne 0x821216fc
	if (!cr0.eq) goto loc_821216FC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,6996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6996, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,4328
	ctx.r4.s64 = r11.s64 + 4328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821216FC:
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

__attribute__((alias("__imp__sub_82121710"))) PPC_WEAK_FUNC(sub_82121710);
PPC_FUNC_IMPL(__imp__sub_82121710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,6996
	r11.s64 = r11.s64 + 6996;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,6996
	ctx.r10.s64 = ctx.r10.s64 + 6996;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121738"))) PPC_WEAK_FUNC(sub_82121738);
PPC_FUNC_IMPL(__imp__sub_82121738) {
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
	// lwz r16,4408(0)
	r16.u64 = PPC_LOAD_U32(4408);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821211f0
	sub_821211F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,572
	ctx.r3.s64 = 572;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121788
	if (cr0.eq) goto loc_82121788;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82126110
	sub_82126110(ctx, base);
	// b 0x8212178c
	goto loc_8212178C;
loc_82121788:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8212178C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821217a4
	if (cr6.eq) goto loc_821217A4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821217A4:
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

__attribute__((alias("__imp__sub_82121740"))) PPC_WEAK_FUNC(sub_82121740);
PPC_FUNC_IMPL(__imp__sub_82121740) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821211f0
	sub_821211F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,572
	ctx.r3.s64 = 572;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121788
	if (cr0.eq) goto loc_82121788;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82126110
	sub_82126110(ctx, base);
	// b 0x8212178c
	goto loc_8212178C;
loc_82121788:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8212178C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821217a4
	if (cr6.eq) goto loc_821217A4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821217A4:
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

__attribute__((alias("__imp__sub_821217B8"))) PPC_WEAK_FUNC(sub_821217B8);
PPC_FUNC_IMPL(__imp__sub_821217B8) {
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

__attribute__((alias("__imp__sub_821217E0"))) PPC_WEAK_FUNC(sub_821217E0);
PPC_FUNC_IMPL(__imp__sub_821217E0) {
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
	// lwz r16,4464(0)
	r16.u64 = PPC_LOAD_U32(4464);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121278
	sub_82121278(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,620
	ctx.r3.s64 = 620;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121830
	if (cr0.eq) goto loc_82121830;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821288f0
	sub_821288F0(ctx, base);
	// b 0x82121834
	goto loc_82121834;
loc_82121830:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82121834:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8212184c
	if (cr6.eq) goto loc_8212184C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8212184C:
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

__attribute__((alias("__imp__sub_821217E8"))) PPC_WEAK_FUNC(sub_821217E8);
PPC_FUNC_IMPL(__imp__sub_821217E8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121278
	sub_82121278(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,620
	ctx.r3.s64 = 620;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121830
	if (cr0.eq) goto loc_82121830;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821288f0
	sub_821288F0(ctx, base);
	// b 0x82121834
	goto loc_82121834;
loc_82121830:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82121834:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8212184c
	if (cr6.eq) goto loc_8212184C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8212184C:
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

__attribute__((alias("__imp__sub_82121860"))) PPC_WEAK_FUNC(sub_82121860);
PPC_FUNC_IMPL(__imp__sub_82121860) {
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

__attribute__((alias("__imp__sub_82121888"))) PPC_WEAK_FUNC(sub_82121888);
PPC_FUNC_IMPL(__imp__sub_82121888) {
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
	// lwz r16,4520(0)
	r16.u64 = PPC_LOAD_U32(4520);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121300
	sub_82121300(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,308
	ctx.r3.s64 = 308;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821218d8
	if (cr0.eq) goto loc_821218D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8212a0c0
	sub_8212A0C0(ctx, base);
	// b 0x821218dc
	goto loc_821218DC;
loc_821218D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821218DC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821218f4
	if (cr6.eq) goto loc_821218F4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821218F4:
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

__attribute__((alias("__imp__sub_82121890"))) PPC_WEAK_FUNC(sub_82121890);
PPC_FUNC_IMPL(__imp__sub_82121890) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121300
	sub_82121300(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,308
	ctx.r3.s64 = 308;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821218d8
	if (cr0.eq) goto loc_821218D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8212a0c0
	sub_8212A0C0(ctx, base);
	// b 0x821218dc
	goto loc_821218DC;
loc_821218D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821218DC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821218f4
	if (cr6.eq) goto loc_821218F4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821218F4:
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

__attribute__((alias("__imp__sub_82121908"))) PPC_WEAK_FUNC(sub_82121908);
PPC_FUNC_IMPL(__imp__sub_82121908) {
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

__attribute__((alias("__imp__sub_82121930"))) PPC_WEAK_FUNC(sub_82121930);
PPC_FUNC_IMPL(__imp__sub_82121930) {
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
	// lwz r16,4576(0)
	r16.u64 = PPC_LOAD_U32(4576);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121388
	sub_82121388(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,544
	ctx.r3.s64 = 544;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121980
	if (cr0.eq) goto loc_82121980;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8212cf88
	sub_8212CF88(ctx, base);
	// b 0x82121984
	goto loc_82121984;
loc_82121980:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82121984:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8212199c
	if (cr6.eq) goto loc_8212199C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8212199C:
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

__attribute__((alias("__imp__sub_82121938"))) PPC_WEAK_FUNC(sub_82121938);
PPC_FUNC_IMPL(__imp__sub_82121938) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121388
	sub_82121388(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,544
	ctx.r3.s64 = 544;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121980
	if (cr0.eq) goto loc_82121980;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8212cf88
	sub_8212CF88(ctx, base);
	// b 0x82121984
	goto loc_82121984;
loc_82121980:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82121984:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8212199c
	if (cr6.eq) goto loc_8212199C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8212199C:
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

__attribute__((alias("__imp__sub_821219B0"))) PPC_WEAK_FUNC(sub_821219B0);
PPC_FUNC_IMPL(__imp__sub_821219B0) {
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

__attribute__((alias("__imp__sub_821219D8"))) PPC_WEAK_FUNC(sub_821219D8);
PPC_FUNC_IMPL(__imp__sub_821219D8) {
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
	// lwz r16,4632(0)
	r16.u64 = PPC_LOAD_U32(4632);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121410
	sub_82121410(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,736
	ctx.r3.s64 = 736;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121a28
	if (cr0.eq) goto loc_82121A28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8212ff40
	sub_8212FF40(ctx, base);
	// b 0x82121a2c
	goto loc_82121A2C;
loc_82121A28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82121A2C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82121a44
	if (cr6.eq) goto loc_82121A44;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82121A44:
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

__attribute__((alias("__imp__sub_821219E0"))) PPC_WEAK_FUNC(sub_821219E0);
PPC_FUNC_IMPL(__imp__sub_821219E0) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121410
	sub_82121410(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,736
	ctx.r3.s64 = 736;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121a28
	if (cr0.eq) goto loc_82121A28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8212ff40
	sub_8212FF40(ctx, base);
	// b 0x82121a2c
	goto loc_82121A2C;
loc_82121A28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82121A2C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82121a44
	if (cr6.eq) goto loc_82121A44;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82121A44:
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

__attribute__((alias("__imp__sub_82121A58"))) PPC_WEAK_FUNC(sub_82121A58);
PPC_FUNC_IMPL(__imp__sub_82121A58) {
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

__attribute__((alias("__imp__sub_82121A80"))) PPC_WEAK_FUNC(sub_82121A80);
PPC_FUNC_IMPL(__imp__sub_82121A80) {
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
	// lwz r16,4688(0)
	r16.u64 = PPC_LOAD_U32(4688);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121498
	sub_82121498(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,588
	ctx.r3.s64 = 588;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121ad0
	if (cr0.eq) goto loc_82121AD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82132870
	sub_82132870(ctx, base);
	// b 0x82121ad4
	goto loc_82121AD4;
loc_82121AD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82121AD4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82121aec
	if (cr6.eq) goto loc_82121AEC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82121AEC:
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

__attribute__((alias("__imp__sub_82121A88"))) PPC_WEAK_FUNC(sub_82121A88);
PPC_FUNC_IMPL(__imp__sub_82121A88) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121498
	sub_82121498(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,588
	ctx.r3.s64 = 588;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121ad0
	if (cr0.eq) goto loc_82121AD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82132870
	sub_82132870(ctx, base);
	// b 0x82121ad4
	goto loc_82121AD4;
loc_82121AD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82121AD4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82121aec
	if (cr6.eq) goto loc_82121AEC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82121AEC:
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

__attribute__((alias("__imp__sub_82121B00"))) PPC_WEAK_FUNC(sub_82121B00);
PPC_FUNC_IMPL(__imp__sub_82121B00) {
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

__attribute__((alias("__imp__sub_82121B28"))) PPC_WEAK_FUNC(sub_82121B28);
PPC_FUNC_IMPL(__imp__sub_82121B28) {
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
	// lwz r16,4744(0)
	r16.u64 = PPC_LOAD_U32(4744);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121520
	sub_82121520(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,592
	ctx.r3.s64 = 592;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121b78
	if (cr0.eq) goto loc_82121B78;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82138500
	sub_82138500(ctx, base);
	// b 0x82121b7c
	goto loc_82121B7C;
loc_82121B78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82121B7C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82121b94
	if (cr6.eq) goto loc_82121B94;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82121B94:
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

__attribute__((alias("__imp__sub_82121B30"))) PPC_WEAK_FUNC(sub_82121B30);
PPC_FUNC_IMPL(__imp__sub_82121B30) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121520
	sub_82121520(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,592
	ctx.r3.s64 = 592;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121b78
	if (cr0.eq) goto loc_82121B78;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82138500
	sub_82138500(ctx, base);
	// b 0x82121b7c
	goto loc_82121B7C;
loc_82121B78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82121B7C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82121b94
	if (cr6.eq) goto loc_82121B94;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82121B94:
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

__attribute__((alias("__imp__sub_82121BA8"))) PPC_WEAK_FUNC(sub_82121BA8);
PPC_FUNC_IMPL(__imp__sub_82121BA8) {
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

__attribute__((alias("__imp__sub_82121BD0"))) PPC_WEAK_FUNC(sub_82121BD0);
PPC_FUNC_IMPL(__imp__sub_82121BD0) {
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
	// lwz r16,4800(0)
	r16.u64 = PPC_LOAD_U32(4800);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821215a8
	sub_821215A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,564
	ctx.r3.s64 = 564;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121c20
	if (cr0.eq) goto loc_82121C20;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82139c68
	sub_82139C68(ctx, base);
	// b 0x82121c24
	goto loc_82121C24;
loc_82121C20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82121C24:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82121c3c
	if (cr6.eq) goto loc_82121C3C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82121C3C:
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

__attribute__((alias("__imp__sub_82121BD8"))) PPC_WEAK_FUNC(sub_82121BD8);
PPC_FUNC_IMPL(__imp__sub_82121BD8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821215a8
	sub_821215A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,564
	ctx.r3.s64 = 564;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121c20
	if (cr0.eq) goto loc_82121C20;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82139c68
	sub_82139C68(ctx, base);
	// b 0x82121c24
	goto loc_82121C24;
loc_82121C20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82121C24:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82121c3c
	if (cr6.eq) goto loc_82121C3C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82121C3C:
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

__attribute__((alias("__imp__sub_82121C50"))) PPC_WEAK_FUNC(sub_82121C50);
PPC_FUNC_IMPL(__imp__sub_82121C50) {
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

__attribute__((alias("__imp__sub_82121C78"))) PPC_WEAK_FUNC(sub_82121C78);
PPC_FUNC_IMPL(__imp__sub_82121C78) {
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
	// lwz r16,4856(0)
	r16.u64 = PPC_LOAD_U32(4856);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121630
	sub_82121630(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,672
	ctx.r3.s64 = 672;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121cc8
	if (cr0.eq) goto loc_82121CC8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8213cc28
	sub_8213CC28(ctx, base);
	// b 0x82121ccc
	goto loc_82121CCC;
loc_82121CC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82121CCC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82121ce4
	if (cr6.eq) goto loc_82121CE4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82121CE4:
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

__attribute__((alias("__imp__sub_82121C80"))) PPC_WEAK_FUNC(sub_82121C80);
PPC_FUNC_IMPL(__imp__sub_82121C80) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121630
	sub_82121630(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,672
	ctx.r3.s64 = 672;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121cc8
	if (cr0.eq) goto loc_82121CC8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8213cc28
	sub_8213CC28(ctx, base);
	// b 0x82121ccc
	goto loc_82121CCC;
loc_82121CC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82121CCC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82121ce4
	if (cr6.eq) goto loc_82121CE4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82121CE4:
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

__attribute__((alias("__imp__sub_82121CF8"))) PPC_WEAK_FUNC(sub_82121CF8);
PPC_FUNC_IMPL(__imp__sub_82121CF8) {
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

__attribute__((alias("__imp__sub_82121D20"))) PPC_WEAK_FUNC(sub_82121D20);
PPC_FUNC_IMPL(__imp__sub_82121D20) {
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
	// lwz r16,4912(0)
	r16.u64 = PPC_LOAD_U32(4912);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821216b8
	sub_821216B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,308
	ctx.r3.s64 = 308;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121d70
	if (cr0.eq) goto loc_82121D70;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8213fc78
	sub_8213FC78(ctx, base);
	// b 0x82121d74
	goto loc_82121D74;
loc_82121D70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82121D74:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82121d8c
	if (cr6.eq) goto loc_82121D8C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82121D8C:
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

__attribute__((alias("__imp__sub_82121D28"))) PPC_WEAK_FUNC(sub_82121D28);
PPC_FUNC_IMPL(__imp__sub_82121D28) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821216b8
	sub_821216B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,308
	ctx.r3.s64 = 308;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121d70
	if (cr0.eq) goto loc_82121D70;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8213fc78
	sub_8213FC78(ctx, base);
	// b 0x82121d74
	goto loc_82121D74;
loc_82121D70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82121D74:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82121d8c
	if (cr6.eq) goto loc_82121D8C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82121D8C:
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

__attribute__((alias("__imp__sub_82121DA0"))) PPC_WEAK_FUNC(sub_82121DA0);
PPC_FUNC_IMPL(__imp__sub_82121DA0) {
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

__attribute__((alias("__imp__sub_82121DC8"))) PPC_WEAK_FUNC(sub_82121DC8);
PPC_FUNC_IMPL(__imp__sub_82121DC8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4980
	ctx.r4.s64 = r11.s64 + 4980;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82121f1c
	if (cr0.eq) goto loc_82121F1C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821215a8
	sub_821215A8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,7128
	ctx.r4.s64 = r11.s64 + 7128;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821211f0
	sub_821211F0(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,5952
	ctx.r4.s64 = r11.s64 + 5952;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// bl 0x8214c180
	sub_8214C180(ctx, base);
	// bl 0x82124c08
	sub_82124C08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82121300
	sub_82121300(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,6288
	ctx.r4.s64 = r11.s64 + 6288;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82121498
	sub_82121498(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,6792
	ctx.r4.s64 = r11.s64 + 6792;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82121388
	sub_82121388(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,6456
	ctx.r4.s64 = r11.s64 + 6456;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82121410
	sub_82121410(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,6624
	ctx.r4.s64 = r11.s64 + 6624;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82121278
	sub_82121278(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,6120
	ctx.r4.s64 = r11.s64 + 6120;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82121520
	sub_82121520(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,6960
	ctx.r4.s64 = r11.s64 + 6960;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// bl 0x8214a1e8
	sub_8214A1E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82121630
	sub_82121630(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,7296
	ctx.r4.s64 = r11.s64 + 7296;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821216b8
	sub_821216B8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,7464
	ctx.r4.s64 = r11.s64 + 7464;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4960
	ctx.r4.s64 = r11.s64 + 4960;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82121f1c
	if (!cr0.eq) goto loc_82121F1C;
	// bl 0x82146970
	sub_82146970(ctx, base);
	// bl 0x82144d78
	sub_82144D78(ctx, base);
	// bl 0x821416e8
	sub_821416E8(ctx, base);
loc_82121F1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121F2C"))) PPC_WEAK_FUNC(sub_82121F2C);
PPC_FUNC_IMPL(__imp__sub_82121F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82121F30"))) PPC_WEAK_FUNC(sub_82121F30);
PPC_FUNC_IMPL(__imp__sub_82121F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,5004
	ctx.r3.s64 = r11.s64 + 5004;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121F48"))) PPC_WEAK_FUNC(sub_82121F48);
PPC_FUNC_IMPL(__imp__sub_82121F48) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,4996
	r11.s64 = r11.s64 + 4996;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82121f84
	if (cr6.eq) goto loc_82121F84;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_82121F84:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82121f94
	if (cr0.eq) goto loc_82121F94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82121F94:
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

__attribute__((alias("__imp__sub_82121FB0"))) PPC_WEAK_FUNC(sub_82121FB0);
PPC_FUNC_IMPL(__imp__sub_82121FB0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,4996
	r11.s64 = r11.s64 + 4996;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82121fec
	if (cr6.eq) goto loc_82121FEC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_82121FEC:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82121ffc
	if (cr0.eq) goto loc_82121FFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82121FFC:
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

__attribute__((alias("__imp__sub_82122018"))) PPC_WEAK_FUNC(sub_82122018);
PPC_FUNC_IMPL(__imp__sub_82122018) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x82122054
	if (cr6.eq) goto loc_82122054;
	// subf r5,r31,r30
	ctx.r5.s64 = r30.s64 - r31.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// subf r11,r31,r3
	r11.s64 = ctx.r3.s64 - r31.s64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
loc_82122054:
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

__attribute__((alias("__imp__sub_8212206C"))) PPC_WEAK_FUNC(sub_8212206C);
PPC_FUNC_IMPL(__imp__sub_8212206C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122070"))) PPC_WEAK_FUNC(sub_82122070);
PPC_FUNC_IMPL(__imp__sub_82122070) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
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

__attribute__((alias("__imp__sub_821220A4"))) PPC_WEAK_FUNC(sub_821220A4);
PPC_FUNC_IMPL(__imp__sub_821220A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821220A8"))) PPC_WEAK_FUNC(sub_821220A8);
PPC_FUNC_IMPL(__imp__sub_821220A8) {
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
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

__attribute__((alias("__imp__sub_82122100"))) PPC_WEAK_FUNC(sub_82122100);
PPC_FUNC_IMPL(__imp__sub_82122100) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x82122134
	if (!cr6.eq) goto loc_82122134;
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
loc_82122134:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x82122168
	if (!cr6.eq) goto loc_82122168;
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
loc_82122168:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmadds f0,f11,f1,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + f0.f64));
	// stfs f0,8(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmadds f13,f10,f1,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmadds f12,f9,f1,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821221A8"))) PPC_WEAK_FUNC(sub_821221A8);
PPC_FUNC_IMPL(__imp__sub_821221A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	f0.f64 = double(temp.f32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fneg f31,f0
	f31.u64 = f0.u64 ^ 0x8000000000000000;
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	f0.f64 = double(temp.f32);
	// fneg f30,f13
	f30.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f29,f0
	f29.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x8226a748
	sub_8226A748(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 * f30.f64));
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f12,f29,f0
	f0.f64 = double(float(ctx.f12.f64 * f29.f64 + f0.f64));
	// fmadds f13,f11,f29,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * f29.f64 + ctx.f13.f64));
	// fmadds f12,f7,f29,f8
	ctx.f12.f64 = double(float(ctx.f7.f64 * f29.f64 + ctx.f8.f64));
	// fmadds f0,f10,f30,f0
	f0.f64 = double(float(ctx.f10.f64 * f30.f64 + f0.f64));
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// fmadds f13,f9,f30,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * f30.f64 + ctx.f13.f64));
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// fmadds f12,f6,f31,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * f31.f64 + ctx.f12.f64));
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-40(r1)
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82122258"))) PPC_WEAK_FUNC(sub_82122258);
PPC_FUNC_IMPL(__imp__sub_82122258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f11,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
	// lfs f10,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,8(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f9,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f8,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f5,f0
	f0.f64 = double(float(ctx.f5.f64 * f0.f64));
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f11,f9,f13,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f10,f8,f13,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f9,f5,f13,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f0,f7,f12,f11
	f0.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,8(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmadds f13,f6,f12,f10
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmadds f12,f4,f12,f9
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821222E0"))) PPC_WEAK_FUNC(sub_821222E0);
PPC_FUNC_IMPL(__imp__sub_821222E0) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
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

__attribute__((alias("__imp__sub_82122350"))) PPC_WEAK_FUNC(sub_82122350);
PPC_FUNC_IMPL(__imp__sub_82122350) {
	PPC_FUNC_PROLOGUE();
	// stw r4,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82122358"))) PPC_WEAK_FUNC(sub_82122358);
PPC_FUNC_IMPL(__imp__sub_82122358) {
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
	// lwz r16,5072(0)
	r16.u64 = PPC_LOAD_U32(5072);
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
	// lwz r11,7020(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7020);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,7016
	r30.s64 = ctx.r9.s64 + 7016;
	// bne 0x821223a4
	if (!cr0.eq) goto loc_821223A4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7020, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,5052
	ctx.r4.s64 = r11.s64 + 5052;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821223A4:
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

__attribute__((alias("__imp__sub_82122360"))) PPC_WEAK_FUNC(sub_82122360);
PPC_FUNC_IMPL(__imp__sub_82122360) {
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
	// lwz r11,7020(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7020);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,7016
	r30.s64 = ctx.r9.s64 + 7016;
	// bne 0x821223a4
	if (!cr0.eq) goto loc_821223A4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7020, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,5052
	ctx.r4.s64 = r11.s64 + 5052;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821223A4:
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

__attribute__((alias("__imp__sub_821223B8"))) PPC_WEAK_FUNC(sub_821223B8);
PPC_FUNC_IMPL(__imp__sub_821223B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7020
	r11.s64 = r11.s64 + 7020;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7020
	ctx.r10.s64 = ctx.r10.s64 + 7020;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821223E0"))) PPC_WEAK_FUNC(sub_821223E0);
PPC_FUNC_IMPL(__imp__sub_821223E0) {
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
	// lwz r16,5144(0)
	r16.u64 = PPC_LOAD_U32(5144);
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
	// lwz r11,7028(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7028);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,7024
	r30.s64 = ctx.r9.s64 + 7024;
	// bne 0x8212242c
	if (!cr0.eq) goto loc_8212242C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7028(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7028, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,5120
	ctx.r4.s64 = r11.s64 + 5120;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8212242C:
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

__attribute__((alias("__imp__sub_821223E8"))) PPC_WEAK_FUNC(sub_821223E8);
PPC_FUNC_IMPL(__imp__sub_821223E8) {
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
	// lwz r11,7028(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7028);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,7024
	r30.s64 = ctx.r9.s64 + 7024;
	// bne 0x8212242c
	if (!cr0.eq) goto loc_8212242C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7028(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7028, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,5120
	ctx.r4.s64 = r11.s64 + 5120;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8212242C:
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

__attribute__((alias("__imp__sub_82122440"))) PPC_WEAK_FUNC(sub_82122440);
PPC_FUNC_IMPL(__imp__sub_82122440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7028
	r11.s64 = r11.s64 + 7028;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7028
	ctx.r10.s64 = ctx.r10.s64 + 7028;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82122468"))) PPC_WEAK_FUNC(sub_82122468);
PPC_FUNC_IMPL(__imp__sub_82122468) {
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
	// lwz r16,5280(0)
	r16.u64 = PPC_LOAD_U32(5280);
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
	// lwz r11,7036(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7036);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,7032
	r30.s64 = ctx.r9.s64 + 7032;
	// bne 0x821224b4
	if (!cr0.eq) goto loc_821224B4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7036, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,5264
	ctx.r4.s64 = r11.s64 + 5264;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821224B4:
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

__attribute__((alias("__imp__sub_82122470"))) PPC_WEAK_FUNC(sub_82122470);
PPC_FUNC_IMPL(__imp__sub_82122470) {
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
	// lwz r11,7036(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7036);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,7032
	r30.s64 = ctx.r9.s64 + 7032;
	// bne 0x821224b4
	if (!cr0.eq) goto loc_821224B4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7036, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,5264
	ctx.r4.s64 = r11.s64 + 5264;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821224B4:
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

__attribute__((alias("__imp__sub_821224C8"))) PPC_WEAK_FUNC(sub_821224C8);
PPC_FUNC_IMPL(__imp__sub_821224C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7036
	r11.s64 = r11.s64 + 7036;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7036
	ctx.r10.s64 = ctx.r10.s64 + 7036;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821224F0"))) PPC_WEAK_FUNC(sub_821224F0);
PPC_FUNC_IMPL(__imp__sub_821224F0) {
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
	// bl 0x82122470
	sub_82122470(ctx, base);
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

__attribute__((alias("__imp__sub_82122520"))) PPC_WEAK_FUNC(sub_82122520);
PPC_FUNC_IMPL(__imp__sub_82122520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82122530"))) PPC_WEAK_FUNC(sub_82122530);
PPC_FUNC_IMPL(__imp__sub_82122530) {
	PPC_FUNC_PROLOGUE();
	// b 0x8236d568
	sub_8236D568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82122534"))) PPC_WEAK_FUNC(sub_82122534);
PPC_FUNC_IMPL(__imp__sub_82122534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122538"))) PPC_WEAK_FUNC(sub_82122538);
PPC_FUNC_IMPL(__imp__sub_82122538) {
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
	// lwz r16,5520(0)
	r16.u64 = PPC_LOAD_U32(5520);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r10,5500
	ctx.r10.s64 = ctx.r10.s64 + 5500;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,5440
	r11.s64 = r11.s64 + 5440;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r10,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// addi r29,r30,276
	r29.s64 = r30.s64 + 276;
	// addi r9,r9,5420
	ctx.r9.s64 = ctx.r9.s64 + 5420;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r8,5404
	ctx.r8.s64 = ctx.r8.s64 + 5404;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r7,r7,5340
	ctx.r7.s64 = ctx.r7.s64 + 5340;
	// stw r9,216(r30)
	PPC_STORE_U32(r30.u32 + 216, ctx.r9.u32);
	// addi r11,r11,5332
	r11.s64 = r11.s64 + 5332;
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-352
	ctx.r10.s64 = r11.s64 + -352;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-396
	ctx.r10.s64 = r11.s64 + -396;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,344(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 344);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8212260c
	if (cr0.eq) goto loc_8212260C;
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
loc_8212260C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8214c318
	sub_8214C318(ctx, base);
	// addi r3,r30,280
	ctx.r3.s64 = r30.s64 + 280;
	// bl 0x8236d568
	sub_8236D568(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82122540"))) PPC_WEAK_FUNC(sub_82122540);
PPC_FUNC_IMPL(__imp__sub_82122540) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r10,5500
	ctx.r10.s64 = ctx.r10.s64 + 5500;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,5440
	r11.s64 = r11.s64 + 5440;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r10,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// addi r29,r30,276
	r29.s64 = r30.s64 + 276;
	// addi r9,r9,5420
	ctx.r9.s64 = ctx.r9.s64 + 5420;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r8,5404
	ctx.r8.s64 = ctx.r8.s64 + 5404;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r7,r7,5340
	ctx.r7.s64 = ctx.r7.s64 + 5340;
	// stw r9,216(r30)
	PPC_STORE_U32(r30.u32 + 216, ctx.r9.u32);
	// addi r11,r11,5332
	r11.s64 = r11.s64 + 5332;
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-352
	ctx.r10.s64 = r11.s64 + -352;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-396
	ctx.r10.s64 = r11.s64 + -396;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,344(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 344);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8212260c
	if (cr0.eq) goto loc_8212260C;
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
loc_8212260C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8214c318
	sub_8214C318(ctx, base);
	// addi r3,r30,280
	ctx.r3.s64 = r30.s64 + 280;
	// bl 0x8236d568
	sub_8236D568(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82122624"))) PPC_WEAK_FUNC(sub_82122624);
PPC_FUNC_IMPL(__imp__sub_82122624) {
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
	// addi r3,r11,280
	ctx.r3.s64 = r11.s64 + 280;
	// bl 0x82122530
	sub_82122530(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82122650"))) PPC_WEAK_FUNC(sub_82122650);
PPC_FUNC_IMPL(__imp__sub_82122650) {
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
	// beq cr6,0x8212267c
	if (cr6.eq) goto loc_8212267C;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,276
	r11.s64 = r11.s64 + 276;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x82122684
	goto loc_82122684;
loc_8212267C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82122684:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8214c318
	sub_8214C318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212269C"))) PPC_WEAK_FUNC(sub_8212269C);
PPC_FUNC_IMPL(__imp__sub_8212269C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821226A0"))) PPC_WEAK_FUNC(sub_821226A0);
PPC_FUNC_IMPL(__imp__sub_821226A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821226BC"))) PPC_WEAK_FUNC(sub_821226BC);
PPC_FUNC_IMPL(__imp__sub_821226BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821226C0"))) PPC_WEAK_FUNC(sub_821226C0);
PPC_FUNC_IMPL(__imp__sub_821226C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-228
	ctx.r3.s64 = ctx.r3.s64 + -228;
	// b 0x821b2890
	sub_821B2890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821226C8"))) PPC_WEAK_FUNC(sub_821226C8);
PPC_FUNC_IMPL(__imp__sub_821226C8) {
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
	// bl 0x82122360
	sub_82122360(ctx, base);
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

__attribute__((alias("__imp__sub_821226F8"))) PPC_WEAK_FUNC(sub_821226F8);
PPC_FUNC_IMPL(__imp__sub_821226F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,124(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212270C"))) PPC_WEAK_FUNC(sub_8212270C);
PPC_FUNC_IMPL(__imp__sub_8212270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122710"))) PPC_WEAK_FUNC(sub_82122710);
PPC_FUNC_IMPL(__imp__sub_82122710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r3,r31,-76
	ctx.r3.s64 = r31.s64 + -76;
	// bl 0x8236ff80
	sub_8236FF80(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1100
	ctx.r6.s64 = r11.s64 + 1100;
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
	// beq 0x821227c4
	if (cr0.eq) goto loc_821227C4;
	// lfs f0,284(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	f0.f64 = double(temp.f32);
	// stfs f0,-72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -72, temp.u32);
	// lwz r11,304(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// stw r11,-52(r31)
	PPC_STORE_U32(r31.u32 + -52, r11.u32);
	// lfs f0,292(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	f0.f64 = double(temp.f32);
	// stfs f0,-64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -64, temp.u32);
	// lfs f0,296(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	f0.f64 = double(temp.f32);
	// stfs f0,-60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -60, temp.u32);
	// lfs f0,300(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	f0.f64 = double(temp.f32);
	// stfs f0,-56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -56, temp.u32);
	// lbz r11,288(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 288);
	// stb r11,-68(r31)
	PPC_STORE_U8(r31.u32 + -68, r11.u8);
	// lwz r11,308(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// stw r11,-48(r31)
	PPC_STORE_U32(r31.u32 + -48, r11.u32);
	// lfs f0,312(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	f0.f64 = double(temp.f32);
	// stfs f0,-44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -44, temp.u32);
	// lfs f0,324(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	f0.f64 = double(temp.f32);
	// stfs f0,-32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -32, temp.u32);
	// lfs f0,328(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	f0.f64 = double(temp.f32);
	// stfs f0,-28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -28, temp.u32);
	// lwz r11,320(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// stw r11,-36(r31)
	PPC_STORE_U32(r31.u32 + -36, r11.u32);
	// lfs f0,316(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	f0.f64 = double(temp.f32);
	// stfs f0,-40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -40, temp.u32);
	// lfs f0,332(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	f0.f64 = double(temp.f32);
	// stfs f0,-24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -24, temp.u32);
loc_821227C4:
	// addi r3,r31,-356
	ctx.r3.s64 = r31.s64 + -356;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
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

__attribute__((alias("__imp__sub_821227F0"))) PPC_WEAK_FUNC(sub_821227F0);
PPC_FUNC_IMPL(__imp__sub_821227F0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,984(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 984);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-76
	ctx.r3.s64 = r30.s64 + -76;
	// bl 0x8236ffd0
	sub_8236FFD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-80
	ctx.r3.s64 = r30.s64 + -80;
	// bl 0x8214c328
	sub_8214C328(ctx, base);
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

__attribute__((alias("__imp__sub_82122858"))) PPC_WEAK_FUNC(sub_82122858);
PPC_FUNC_IMPL(__imp__sub_82122858) {
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
	// lwz r11,-352(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -352);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-352
	ctx.r3.s64 = r11.s64 + -352;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-352(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -352);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-352
	ctx.r3.s64 = r11.s64 + -352;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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

__attribute__((alias("__imp__sub_821228D0"))) PPC_WEAK_FUNC(sub_821228D0);
PPC_FUNC_IMPL(__imp__sub_821228D0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,-76
	ctx.r3.s64 = r31.s64 + -76;
	// bl 0x823700a0
	sub_823700A0(ctx, base);
	// addi r3,r31,-356
	ctx.r3.s64 = r31.s64 + -356;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
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

__attribute__((alias("__imp__sub_82122914"))) PPC_WEAK_FUNC(sub_82122914);
PPC_FUNC_IMPL(__imp__sub_82122914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122918"))) PPC_WEAK_FUNC(sub_82122918);
PPC_FUNC_IMPL(__imp__sub_82122918) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,5672(0)
	r16.u64 = PPC_LOAD_U32(5672);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r4,r11,4960
	ctx.r4.s64 = r11.s64 + 4960;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821229fc
	if (cr0.eq) goto loc_821229FC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,5652
	ctx.r4.s64 = r11.s64 + 5652;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,5052
	ctx.r4.s64 = r11.s64 + 5052;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d80
	sub_82270D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r27,1
	r11.s64 = r27.s64 + 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// srawi r11,r3,8
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	r11.s64 = ctx.r3.s32 >> 8;
	// srawi r10,r3,16
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// std r9,96(r31)
	PPC_STORE_U64(r31.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// lfd f13,88(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r10,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// b 0x82122acc
	goto loc_82122ACC;
loc_821229FC:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,7056(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7056);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,7040
	r30.s64 = ctx.r9.s64 + 7040;
	// bne 0x82122a5c
	if (!cr0.eq) goto loc_82122A5C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7056, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,5636
	ctx.r4.s64 = r11.s64 + 5636;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// addi r4,r11,5624
	ctx.r4.s64 = r11.s64 + 5624;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// addi r4,r11,5608
	ctx.r4.s64 = r11.s64 + 5608;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// addi r4,r11,5592
	ctx.r4.s64 = r11.s64 + 5592;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82122A5C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,224(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 224);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82315578
	sub_82315578(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82122b04
	if (cr0.eq) goto loc_82122B04;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// srawi r11,r3,8
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	r11.s64 = ctx.r3.s32 >> 8;
	// srawi r10,r3,16
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// std r9,96(r31)
	PPC_STORE_U64(r31.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// lfd f13,88(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r10,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 80);
loc_82122ACC:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(f0.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(f0.f64));
	// lfs f0,5048(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5048);
	f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,0(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f0,8(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
loc_82122B04:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82122920"))) PPC_WEAK_FUNC(sub_82122920);
PPC_FUNC_IMPL(__imp__sub_82122920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r4,r11,4960
	ctx.r4.s64 = r11.s64 + 4960;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821229fc
	if (cr0.eq) goto loc_821229FC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,5652
	ctx.r4.s64 = r11.s64 + 5652;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,5052
	ctx.r4.s64 = r11.s64 + 5052;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d80
	sub_82270D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r27,1
	r11.s64 = r27.s64 + 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// srawi r11,r3,8
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	r11.s64 = ctx.r3.s32 >> 8;
	// srawi r10,r3,16
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// std r9,96(r31)
	PPC_STORE_U64(r31.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// lfd f13,88(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r10,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// b 0x82122acc
	goto loc_82122ACC;
loc_821229FC:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,7056(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7056);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,7040
	r30.s64 = ctx.r9.s64 + 7040;
	// bne 0x82122a5c
	if (!cr0.eq) goto loc_82122A5C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7056, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,5636
	ctx.r4.s64 = r11.s64 + 5636;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// addi r4,r11,5624
	ctx.r4.s64 = r11.s64 + 5624;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// addi r4,r11,5608
	ctx.r4.s64 = r11.s64 + 5608;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// addi r4,r11,5592
	ctx.r4.s64 = r11.s64 + 5592;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82122A5C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,224(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 224);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82315578
	sub_82315578(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82122b04
	if (cr0.eq) goto loc_82122B04;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// srawi r11,r3,8
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	r11.s64 = ctx.r3.s32 >> 8;
	// srawi r10,r3,16
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// std r9,96(r31)
	PPC_STORE_U64(r31.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// lfd f13,88(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r10,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 80);
loc_82122ACC:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(f0.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(f0.f64));
	// lfs f0,5048(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5048);
	f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,0(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f0,8(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
loc_82122B04:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82122B0C"))) PPC_WEAK_FUNC(sub_82122B0C);
PPC_FUNC_IMPL(__imp__sub_82122B0C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7056
	r11.s64 = r11.s64 + 7056;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7056
	ctx.r10.s64 = ctx.r10.s64 + 7056;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82122B34"))) PPC_WEAK_FUNC(sub_82122B34);
PPC_FUNC_IMPL(__imp__sub_82122B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122B38"))) PPC_WEAK_FUNC(sub_82122B38);
PPC_FUNC_IMPL(__imp__sub_82122B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r29,36
	r30.s64 = r29.s64 + 36;
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82122258
	sub_82122258(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82122258
	sub_82122258(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x82122ba4
	if (cr6.gt) goto loc_82122BA4;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82122BA4:
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// bgt cr6,0x82122bb8
	if (cr6.gt) goto loc_82122BB8;
	// li r11,-1
	r11.s64 = -1;
loc_82122BB8:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82122c28
	if (cr6.eq) goto loc_82122C28;
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
	// bl 0x82122100
	sub_82122100(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// lfs f13,328(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,5736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5736);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 120);
	f0.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f0,112(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 112);
	f0.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82122c28
	if (!cr6.lt) goto loc_82122C28;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x82122c28
	if (!cr6.gt) goto loc_82122C28;
	// lfs f13,324(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82122c2c
	if (cr6.lt) goto loc_82122C2C;
loc_82122C28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82122C2C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82122C38"))) PPC_WEAK_FUNC(sub_82122C38);
PPC_FUNC_IMPL(__imp__sub_82122C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// beq cr6,0x82122c7c
	if (cr6.eq) goto loc_82122C7C;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// stw r4,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r4.u32);
	// bne cr6,0x82122c7c
	if (!cr6.eq) goto loc_82122C7C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82122c7c
	if (cr6.eq) goto loc_82122C7C;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x823118d0
	sub_823118D0(ctx, base);
	// stfs f1,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 340, temp.u32);
loc_82122C7C:
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

__attribute__((alias("__imp__sub_82122C90"))) PPC_WEAK_FUNC(sub_82122C90);
PPC_FUNC_IMPL(__imp__sub_82122C90) {
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
	// addi r3,r31,-276
	ctx.r3.s64 = r31.s64 + -276;
	// bl 0x8236d920
	sub_8236D920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214cac8
	sub_8214CAC8(ctx, base);
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

__attribute__((alias("__imp__sub_82122CCC"))) PPC_WEAK_FUNC(sub_82122CCC);
PPC_FUNC_IMPL(__imp__sub_82122CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122CD0"))) PPC_WEAK_FUNC(sub_82122CD0);
PPC_FUNC_IMPL(__imp__sub_82122CD0) {
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
	// beq 0x82122d10
	if (cr0.eq) goto loc_82122D10;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,1360
	ctx.r3.s64 = r11.s64 + 1360;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82122d18
	goto loc_82122D18;
loc_82122D10:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82122D18:
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

__attribute__((alias("__imp__sub_82122D34"))) PPC_WEAK_FUNC(sub_82122D34);
PPC_FUNC_IMPL(__imp__sub_82122D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122D38"))) PPC_WEAK_FUNC(sub_82122D38);
PPC_FUNC_IMPL(__imp__sub_82122D38) {
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
	// bl 0x821223e8
	sub_821223E8(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r11,1384
	r31.s64 = r11.s64 + 1384;
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

__attribute__((alias("__imp__sub_82122D98"))) PPC_WEAK_FUNC(sub_82122D98);
PPC_FUNC_IMPL(__imp__sub_82122D98) {
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
	// beq 0x82122dd8
	if (cr0.eq) goto loc_82122DD8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,1412
	ctx.r3.s64 = r11.s64 + 1412;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82122de0
	goto loc_82122DE0;
loc_82122DD8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82122DE0:
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

__attribute__((alias("__imp__sub_82122DFC"))) PPC_WEAK_FUNC(sub_82122DFC);
PPC_FUNC_IMPL(__imp__sub_82122DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122E00"))) PPC_WEAK_FUNC(sub_82122E00);
PPC_FUNC_IMPL(__imp__sub_82122E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-88
	ctx.r3.s64 = ctx.r3.s64 + -88;
	// b 0x821226c0
	sub_821226C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82122E10"))) PPC_WEAK_FUNC(sub_82122E10);
PPC_FUNC_IMPL(__imp__sub_82122E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-356
	ctx.r3.s64 = ctx.r3.s64 + -356;
	// b 0x821249a8
	sub_821249A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82122E20"))) PPC_WEAK_FUNC(sub_82122E20);
PPC_FUNC_IMPL(__imp__sub_82122E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821228d0
	sub_821228D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82122E2C"))) PPC_WEAK_FUNC(sub_82122E2C);
PPC_FUNC_IMPL(__imp__sub_82122E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122E30"))) PPC_WEAK_FUNC(sub_82122E30);
PPC_FUNC_IMPL(__imp__sub_82122E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82122858
	sub_82122858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82122E3C"))) PPC_WEAK_FUNC(sub_82122E3C);
PPC_FUNC_IMPL(__imp__sub_82122E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122E40"))) PPC_WEAK_FUNC(sub_82122E40);
PPC_FUNC_IMPL(__imp__sub_82122E40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-276
	ctx.r3.s64 = ctx.r3.s64 + -276;
	// b 0x821249a8
	sub_821249A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82122E48"))) PPC_WEAK_FUNC(sub_82122E48);
PPC_FUNC_IMPL(__imp__sub_82122E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x821226c8
	sub_821226C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82122E54"))) PPC_WEAK_FUNC(sub_82122E54);
PPC_FUNC_IMPL(__imp__sub_82122E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122E58"))) PPC_WEAK_FUNC(sub_82122E58);
PPC_FUNC_IMPL(__imp__sub_82122E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821227f0
	sub_821227F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82122E64"))) PPC_WEAK_FUNC(sub_82122E64);
PPC_FUNC_IMPL(__imp__sub_82122E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122E68"))) PPC_WEAK_FUNC(sub_82122E68);
PPC_FUNC_IMPL(__imp__sub_82122E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-88
	ctx.r3.s64 = ctx.r3.s64 + -88;
	// b 0x8236ef28
	sub_8236EF28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82122E78"))) PPC_WEAK_FUNC(sub_82122E78);
PPC_FUNC_IMPL(__imp__sub_82122E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82122710
	sub_82122710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82122E84"))) PPC_WEAK_FUNC(sub_82122E84);
PPC_FUNC_IMPL(__imp__sub_82122E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122E88"))) PPC_WEAK_FUNC(sub_82122E88);
PPC_FUNC_IMPL(__imp__sub_82122E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-136
	ctx.r3.s64 = ctx.r3.s64 + -136;
	// b 0x821b0888
	sub_821B0888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82122E98"))) PPC_WEAK_FUNC(sub_82122E98);
PPC_FUNC_IMPL(__imp__sub_82122E98) {
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
	// lwz r16,5752(0)
	r16.u64 = PPC_LOAD_U32(5752);
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
	// lwz r11,7064(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7064);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82122f1c
	if (!cr0.eq) goto loc_82122F1C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7064, r11.u32);
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
	// bl 0x82122470
	sub_82122470(ctx, base);
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
	// stw r3,7060(r28)
	PPC_STORE_U32(r28.u32 + 7060, ctx.r3.u32);
	// b 0x82122f20
	goto loc_82122F20;
loc_82122F1C:
	// lwz r3,7060(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 7060);
loc_82122F20:
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
	// beq 0x82122f50
	if (cr0.eq) goto loc_82122F50;
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
	// b 0x82122f98
	goto loc_82122F98;
loc_82122F50:
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
	// bne 0x82122f8c
	if (!cr0.eq) goto loc_82122F8C;
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
loc_82122F8C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82122F98:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82122EA0"))) PPC_WEAK_FUNC(sub_82122EA0);
PPC_FUNC_IMPL(__imp__sub_82122EA0) {
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
	// lwz r11,7064(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7064);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82122f1c
	if (!cr0.eq) goto loc_82122F1C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7064, r11.u32);
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
	// bl 0x82122470
	sub_82122470(ctx, base);
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
	// stw r3,7060(r28)
	PPC_STORE_U32(r28.u32 + 7060, ctx.r3.u32);
	// b 0x82122f20
	goto loc_82122F20;
loc_82122F1C:
	// lwz r3,7060(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 7060);
loc_82122F20:
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
	// beq 0x82122f50
	if (cr0.eq) goto loc_82122F50;
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
	// b 0x82122f98
	goto loc_82122F98;
loc_82122F50:
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
	// bne 0x82122f8c
	if (!cr0.eq) goto loc_82122F8C;
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
loc_82122F8C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82122F98:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82122FA4"))) PPC_WEAK_FUNC(sub_82122FA4);
PPC_FUNC_IMPL(__imp__sub_82122FA4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7064
	r11.s64 = r11.s64 + 7064;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7064
	ctx.r10.s64 = ctx.r10.s64 + 7064;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82122FCC"))) PPC_WEAK_FUNC(sub_82122FCC);
PPC_FUNC_IMPL(__imp__sub_82122FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122FD0"))) PPC_WEAK_FUNC(sub_82122FD0);
PPC_FUNC_IMPL(__imp__sub_82122FD0) {
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
	// lwz r16,5824(0)
	r16.u64 = PPC_LOAD_U32(5824);
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
	// lwz r11,7072(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7072);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82123054
	if (!cr0.eq) goto loc_82123054;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7072, r11.u32);
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
	// bl 0x82122360
	sub_82122360(ctx, base);
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
	// stw r3,7068(r27)
	PPC_STORE_U32(r27.u32 + 7068, ctx.r3.u32);
	// b 0x82123058
	goto loc_82123058;
loc_82123054:
	// lwz r3,7068(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 7068);
loc_82123058:
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
	// beq 0x82123094
	if (cr0.eq) goto loc_82123094;
	// lwz r11,-352(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -352);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-352
	ctx.r3.s64 = r11.s64 + -352;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82123110
	goto loc_82123110;
loc_82123094:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x821230f4
	if (!cr0.eq) goto loc_821230F4;
	// addic. r11,r30,-356
	xer.ca = r30.u32 > 355;
	r11.s64 = r30.s64 + -356;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821230b8
	if (!cr0.eq) goto loc_821230B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821230c8
	goto loc_821230C8;
loc_821230B8:
	// lwz r11,-352(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -352);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-352
	ctx.r3.s64 = r11.s64 + -352;
loc_821230C8:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-352(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -352);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-352
	ctx.r4.s64 = r11.s64 + -352;
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
loc_821230F4:
	// lwz r11,-352(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -352);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-352
	ctx.r3.s64 = r11.s64 + -352;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82123110:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82122FD8"))) PPC_WEAK_FUNC(sub_82122FD8);
PPC_FUNC_IMPL(__imp__sub_82122FD8) {
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
	// lwz r11,7072(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7072);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82123054
	if (!cr0.eq) goto loc_82123054;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7072, r11.u32);
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
	// bl 0x82122360
	sub_82122360(ctx, base);
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
	// stw r3,7068(r27)
	PPC_STORE_U32(r27.u32 + 7068, ctx.r3.u32);
	// b 0x82123058
	goto loc_82123058;
loc_82123054:
	// lwz r3,7068(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 7068);
loc_82123058:
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
	// beq 0x82123094
	if (cr0.eq) goto loc_82123094;
	// lwz r11,-352(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -352);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-352
	ctx.r3.s64 = r11.s64 + -352;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82123110
	goto loc_82123110;
loc_82123094:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x821230f4
	if (!cr0.eq) goto loc_821230F4;
	// addic. r11,r30,-356
	xer.ca = r30.u32 > 355;
	r11.s64 = r30.s64 + -356;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821230b8
	if (!cr0.eq) goto loc_821230B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821230c8
	goto loc_821230C8;
loc_821230B8:
	// lwz r11,-352(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -352);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-352
	ctx.r3.s64 = r11.s64 + -352;
loc_821230C8:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-352(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -352);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-352
	ctx.r4.s64 = r11.s64 + -352;
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
loc_821230F4:
	// lwz r11,-352(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -352);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-352
	ctx.r3.s64 = r11.s64 + -352;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82123110:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8212311C"))) PPC_WEAK_FUNC(sub_8212311C);
PPC_FUNC_IMPL(__imp__sub_8212311C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7072
	r11.s64 = r11.s64 + 7072;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7072
	ctx.r10.s64 = ctx.r10.s64 + 7072;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82123144"))) PPC_WEAK_FUNC(sub_82123144);
PPC_FUNC_IMPL(__imp__sub_82123144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82123148"))) PPC_WEAK_FUNC(sub_82123148);
PPC_FUNC_IMPL(__imp__sub_82123148) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,5952(0)
	r16.u64 = PPC_LOAD_U32(5952);
	// mflr r12
	// bl 0x8239bcfc
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq cr6,0x821231e4
	if (cr6.eq) goto loc_821231E4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,5916
	r11.s64 = r11.s64 + 5916;
	// addi r10,r10,5904
	ctx.r10.s64 = ctx.r10.s64 + 5904;
	// addi r9,r9,5896
	ctx.r9.s64 = ctx.r9.s64 + 5896;
	// addi r8,r8,5888
	ctx.r8.s64 = ctx.r8.s64 + 5888;
	// addi r3,r30,356
	ctx.r3.s64 = r30.s64 + 356;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r9,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r9.u32);
	// stw r8,404(r30)
	PPC_STORE_U32(r30.u32 + 404, ctx.r8.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,400
	r11.s64 = r30.s64 + 400;
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
loc_821231E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82370108
	sub_82370108(ctx, base);
	// addi r29,r30,276
	r29.s64 = r30.s64 + 276;
	// lwz r4,264(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8214c9c0
	sub_8214C9C0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,5440
	r11.s64 = r11.s64 + 5440;
	// lfs f31,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r9,5420
	ctx.r9.s64 = ctx.r9.s64 + 5420;
	// addi r10,r10,5500
	ctx.r10.s64 = ctx.r10.s64 + 5500;
	// addi r8,r8,5404
	ctx.r8.s64 = ctx.r8.s64 + 5404;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r9,216(r30)
	PPC_STORE_U32(r30.u32 + 216, ctx.r9.u32);
	// addi r7,r7,5340
	ctx.r7.s64 = ctx.r7.s64 + 5340;
	// stw r10,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// addi r11,r11,5332
	r11.s64 = r11.s64 + 5332;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-352
	ctx.r10.s64 = r11.s64 + -352;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-396
	ctx.r10.s64 = r11.s64 + -396;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stfs f31,340(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 340, temp.u32);
	// bl 0x82122d38
	sub_82122D38(ctx, base);
	// stfs f31,348(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 348, temp.u32);
	// stw r3,344(r30)
	PPC_STORE_U32(r30.u32 + 344, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82123150"))) PPC_WEAK_FUNC(sub_82123150);
PPC_FUNC_IMPL(__imp__sub_82123150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq cr6,0x821231e4
	if (cr6.eq) goto loc_821231E4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,5916
	r11.s64 = r11.s64 + 5916;
	// addi r10,r10,5904
	ctx.r10.s64 = ctx.r10.s64 + 5904;
	// addi r9,r9,5896
	ctx.r9.s64 = ctx.r9.s64 + 5896;
	// addi r8,r8,5888
	ctx.r8.s64 = ctx.r8.s64 + 5888;
	// addi r3,r30,356
	ctx.r3.s64 = r30.s64 + 356;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r9,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r9.u32);
	// stw r8,404(r30)
	PPC_STORE_U32(r30.u32 + 404, ctx.r8.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,400
	r11.s64 = r30.s64 + 400;
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
loc_821231E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82370108
	sub_82370108(ctx, base);
	// addi r29,r30,276
	r29.s64 = r30.s64 + 276;
	// lwz r4,264(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8214c9c0
	sub_8214C9C0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,5440
	r11.s64 = r11.s64 + 5440;
	// lfs f31,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r9,5420
	ctx.r9.s64 = ctx.r9.s64 + 5420;
	// addi r10,r10,5500
	ctx.r10.s64 = ctx.r10.s64 + 5500;
	// addi r8,r8,5404
	ctx.r8.s64 = ctx.r8.s64 + 5404;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r9,216(r30)
	PPC_STORE_U32(r30.u32 + 216, ctx.r9.u32);
	// addi r7,r7,5340
	ctx.r7.s64 = ctx.r7.s64 + 5340;
	// stw r10,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// addi r11,r11,5332
	r11.s64 = r11.s64 + 5332;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-352
	ctx.r10.s64 = r11.s64 + -352;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-396
	ctx.r10.s64 = r11.s64 + -396;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stfs f31,340(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 340, temp.u32);
	// bl 0x82122d38
	sub_82122D38(ctx, base);
	// stfs f31,348(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 348, temp.u32);
	// stw r3,344(r30)
	PPC_STORE_U32(r30.u32 + 344, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821232A8"))) PPC_WEAK_FUNC(sub_821232A8);
PPC_FUNC_IMPL(__imp__sub_821232A8) {
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
	// beq 0x821232dc
	if (cr0.eq) goto loc_821232DC;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,356
	ctx.r3.s64 = r11.s64 + 356;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_821232DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821232EC"))) PPC_WEAK_FUNC(sub_821232EC);
PPC_FUNC_IMPL(__imp__sub_821232EC) {
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
	// addi r3,r11,280
	ctx.r3.s64 = r11.s64 + 280;
	// bl 0x82122530
	sub_82122530(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82123318"))) PPC_WEAK_FUNC(sub_82123318);
PPC_FUNC_IMPL(__imp__sub_82123318) {
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
	// addi r3,r11,276
	ctx.r3.s64 = r11.s64 + 276;
	// bl 0x8214c318
	sub_8214C318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82123344"))) PPC_WEAK_FUNC(sub_82123344);
PPC_FUNC_IMPL(__imp__sub_82123344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82123348"))) PPC_WEAK_FUNC(sub_82123348);
PPC_FUNC_IMPL(__imp__sub_82123348) {
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
	// beq 0x82123378
	if (cr0.eq) goto loc_82123378;
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82123378:
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

__attribute__((alias("__imp__sub_82123394"))) PPC_WEAK_FUNC(sub_82123394);
PPC_FUNC_IMPL(__imp__sub_82123394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82123398"))) PPC_WEAK_FUNC(sub_82123398);
PPC_FUNC_IMPL(__imp__sub_82123398) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r27,r11,7004
	r27.s64 = r11.s64 + 7004;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,984(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82123780
	if (cr6.gt) goto loc_82123780;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bge cr6,0x821235b4
	if (!cr6.lt) goto loc_821235B4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bgt cr6,0x82123404
	if (cr6.gt) goto loc_82123404;
	// addi r3,r31,-136
	ctx.r3.s64 = r31.s64 + -136;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-316
	ctx.r3.s64 = r31.s64 + -316;
	// bl 0x821b36c0
	sub_821B36C0(ctx, base);
	// b 0x8212340c
	goto loc_8212340C;
loc_82123404:
	// addi r3,r31,-76
	ctx.r3.s64 = r31.s64 + -76;
	// bl 0x82370498
	sub_82370498(ctx, base);
loc_8212340C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x82123458
	if (!cr6.gt) goto loc_82123458;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-52
	ctx.r4.s64 = r31.s64 + -52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-64
	ctx.r4.s64 = r31.s64 + -64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-60
	ctx.r4.s64 = r31.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-56
	ctx.r4.s64 = r31.s64 + -56;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_82123458:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bgt cr6,0x821234a0
	if (cr6.gt) goto loc_821234A0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82359638
	sub_82359638(ctx, base);
	// lwz r11,-352(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -352);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-352
	ctx.r3.s64 = r11.s64 + -352;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821234A0:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bge cr6,0x821234d8
	if (!cr6.lt) goto loc_821234D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821234d4
	if (cr0.eq) goto loc_821234D4;
	// li r11,1
	r11.s64 = 1;
	// stw r11,-36(r31)
	PPC_STORE_U32(r31.u32 + -36, r11.u32);
	// b 0x821234d8
	goto loc_821234D8;
loc_821234D4:
	// stw r28,-36(r31)
	PPC_STORE_U32(r31.u32 + -36, r28.u32);
loc_821234D8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bge cr6,0x82123540
	if (!cr6.lt) goto loc_82123540;
	// lwz r11,-36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82123540
	if (!cr6.eq) goto loc_82123540;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r31,-320
	r29.s64 = r31.s64 + -320;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// lfs f13,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
loc_82123540:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8212355c
	if (!cr6.gt) goto loc_8212355C;
	// addi r4,r31,-68
	ctx.r4.s64 = r31.s64 + -68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x82123560
	goto loc_82123560;
loc_8212355C:
	// stb r28,-68(r31)
	PPC_STORE_U8(r31.u32 + -68, r28.u8);
loc_82123560:
	// addi r29,r31,-32
	r29.s64 = r31.s64 + -32;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-28
	ctx.r4.s64 = r31.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bgt cr6,0x8212359c
	if (cr6.gt) goto loc_8212359C;
	// addi r4,r31,-88
	ctx.r4.s64 = r31.s64 + -88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359638
	sub_82359638(ctx, base);
loc_8212359C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ble cr6,0x82123758
	if (!cr6.gt) goto loc_82123758;
	// addi r4,r31,-48
	ctx.r4.s64 = r31.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82123750
	goto loc_82123750;
loc_821235B4:
	// addi r3,r31,-76
	ctx.r3.s64 = r31.s64 + -76;
	// bne cr6,0x8212368c
	if (!cr6.eq) goto loc_8212368C;
	// bl 0x82370498
	sub_82370498(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r29,r31,-32
	r29.s64 = r31.s64 + -32;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,-36(r31)
	PPC_STORE_U32(r31.u32 + -36, r11.u32);
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-28
	ctx.r4.s64 = r31.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-44
	ctx.r4.s64 = r31.s64 + -44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-48
	ctx.r4.s64 = r31.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-52
	ctx.r4.s64 = r31.s64 + -52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-64
	ctx.r4.s64 = r31.s64 + -64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-60
	ctx.r4.s64 = r31.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-56
	ctx.r4.s64 = r31.s64 + -56;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = r31.s64 + -68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-40
	ctx.r4.s64 = r31.s64 + -40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8212374c
	goto loc_8212374C;
loc_8212368C:
	// bl 0x82370498
	sub_82370498(ctx, base);
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
	// addi r29,r31,-32
	r29.s64 = r31.s64 + -32;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,-36(r31)
	PPC_STORE_U32(r31.u32 + -36, r11.u32);
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-28
	ctx.r4.s64 = r31.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-44
	ctx.r4.s64 = r31.s64 + -44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-48
	ctx.r4.s64 = r31.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-52
	ctx.r4.s64 = r31.s64 + -52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-64
	ctx.r4.s64 = r31.s64 + -64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-60
	ctx.r4.s64 = r31.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-56
	ctx.r4.s64 = r31.s64 + -56;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = r31.s64 + -68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-40
	ctx.r4.s64 = r31.s64 + -40;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8212374C:
	// addi r4,r31,-72
	ctx.r4.s64 = r31.s64 + -72;
loc_82123750:
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_82123758:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bge cr6,0x82123770
	if (!cr6.lt) goto loc_82123770;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,-24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -24, temp.u32);
	// b 0x82123780
	goto loc_82123780;
loc_82123770:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-24
	ctx.r4.s64 = r31.s64 + -24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_82123780:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82123788"))) PPC_WEAK_FUNC(sub_82123788);
PPC_FUNC_IMPL(__imp__sub_82123788) {
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
	// lwz r16,6160(0)
	r16.u64 = PPC_LOAD_U32(6160);
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,7100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7100);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,7096
	r28.s64 = ctx.r10.s64 + 7096;
	// bne 0x821237f8
	if (!cr0.eq) goto loc_821237F8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7100(r30)
	PPC_STORE_U32(r30.u32 + 7100, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,6092
	ctx.r4.s64 = r11.s64 + 6092;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7100);
loc_821237F8:
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
	// beq 0x82123828
	if (cr0.eq) goto loc_82123828;
	// lwz r11,-88(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -88);
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82123a60
	goto loc_82123A60;
loc_82123828:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,7092
	r28.s64 = ctx.r10.s64 + 7092;
	// bne 0x82123854
	if (!cr0.eq) goto loc_82123854;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,7100(r30)
	PPC_STORE_U32(r30.u32 + 7100, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,6080
	ctx.r4.s64 = r11.s64 + 6080;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7100);
loc_82123854:
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
	// beq 0x8212389c
	if (cr0.eq) goto loc_8212389C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82318050
	sub_82318050(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x823708a8
	sub_823708A8(ctx, base);
loc_82123888:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,-80
	ctx.r3.s64 = r25.s64 + -80;
	// bl 0x8214cac8
	sub_8214CAC8(ctx, base);
loc_82123894:
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// b 0x82123a58
	goto loc_82123A58;
loc_8212389C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,7088
	r28.s64 = ctx.r10.s64 + 7088;
	// bne 0x821238c8
	if (!cr0.eq) goto loc_821238C8;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,7100(r30)
	PPC_STORE_U32(r30.u32 + 7100, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,6060
	ctx.r4.s64 = r11.s64 + 6060;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7100);
loc_821238C8:
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
	// beq 0x821238f4
	if (cr0.eq) goto loc_821238F4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// b 0x82123888
	goto loc_82123888;
loc_821238F4:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,7084
	r28.s64 = ctx.r10.s64 + 7084;
	// bne 0x82123920
	if (!cr0.eq) goto loc_82123920;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,7100(r30)
	PPC_STORE_U32(r30.u32 + 7100, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,6048
	ctx.r4.s64 = r11.s64 + 6048;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7100);
loc_82123920:
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
	// beq 0x8212394c
	if (cr0.eq) goto loc_8212394C;
	// lwz r11,-132(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -132);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82123a60
	goto loc_82123A60;
loc_8212394C:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,7080
	r28.s64 = ctx.r10.s64 + 7080;
	// bne 0x82123978
	if (!cr0.eq) goto loc_82123978;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,7100(r30)
	PPC_STORE_U32(r30.u32 + 7100, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,6036
	ctx.r4.s64 = r11.s64 + 6036;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7100);
loc_82123978:
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
	// beq 0x821239c0
	if (cr0.eq) goto loc_821239C0;
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
	// addi r3,r25,-80
	ctx.r3.s64 = r25.s64 + -80;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x8214c5b0
	sub_8214C5B0(ctx, base);
	// b 0x82123894
	goto loc_82123894;
loc_821239C0:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,7076
	r28.s64 = ctx.r10.s64 + 7076;
	// bne 0x821239e8
	if (!cr0.eq) goto loc_821239E8;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,7100(r30)
	PPC_STORE_U32(r30.u32 + 7100, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,6024
	ctx.r4.s64 = r11.s64 + 6024;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821239E8:
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
	// beq 0x82123a0c
	if (cr0.eq) goto loc_82123A0C;
	// addi r3,r25,-80
	ctx.r3.s64 = r25.s64 + -80;
	// bl 0x8214c948
	sub_8214C948(ctx, base);
	// b 0x82123894
	goto loc_82123894;
loc_82123A0C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r25,-76
	ctx.r4.s64 = r25.s64 + -76;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x823706b8
	sub_823706B8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82123a50
	if (cr6.eq) goto loc_82123A50;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123a5c
	if (cr0.eq) goto loc_82123A5C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82123a5c
	goto loc_82123A5C;
loc_82123A50:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82123A58:
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
loc_82123A5C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82123A60:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82123790"))) PPC_WEAK_FUNC(sub_82123790);
PPC_FUNC_IMPL(__imp__sub_82123790) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,7100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7100);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,7096
	r28.s64 = ctx.r10.s64 + 7096;
	// bne 0x821237f8
	if (!cr0.eq) goto loc_821237F8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7100(r30)
	PPC_STORE_U32(r30.u32 + 7100, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,6092
	ctx.r4.s64 = r11.s64 + 6092;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7100);
loc_821237F8:
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
	// beq 0x82123828
	if (cr0.eq) goto loc_82123828;
	// lwz r11,-88(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -88);
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82123a60
	goto loc_82123A60;
loc_82123828:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,7092
	r28.s64 = ctx.r10.s64 + 7092;
	// bne 0x82123854
	if (!cr0.eq) goto loc_82123854;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,7100(r30)
	PPC_STORE_U32(r30.u32 + 7100, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,6080
	ctx.r4.s64 = r11.s64 + 6080;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7100);
loc_82123854:
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
	// beq 0x8212389c
	if (cr0.eq) goto loc_8212389C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82318050
	sub_82318050(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x823708a8
	sub_823708A8(ctx, base);
loc_82123888:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,-80
	ctx.r3.s64 = r25.s64 + -80;
	// bl 0x8214cac8
	sub_8214CAC8(ctx, base);
loc_82123894:
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// b 0x82123a58
	goto loc_82123A58;
loc_8212389C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,7088
	r28.s64 = ctx.r10.s64 + 7088;
	// bne 0x821238c8
	if (!cr0.eq) goto loc_821238C8;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,7100(r30)
	PPC_STORE_U32(r30.u32 + 7100, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,6060
	ctx.r4.s64 = r11.s64 + 6060;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7100);
loc_821238C8:
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
	// beq 0x821238f4
	if (cr0.eq) goto loc_821238F4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// b 0x82123888
	goto loc_82123888;
loc_821238F4:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,7084
	r28.s64 = ctx.r10.s64 + 7084;
	// bne 0x82123920
	if (!cr0.eq) goto loc_82123920;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,7100(r30)
	PPC_STORE_U32(r30.u32 + 7100, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,6048
	ctx.r4.s64 = r11.s64 + 6048;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7100);
loc_82123920:
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
	// beq 0x8212394c
	if (cr0.eq) goto loc_8212394C;
	// lwz r11,-132(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -132);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82123a60
	goto loc_82123A60;
loc_8212394C:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,7080
	r28.s64 = ctx.r10.s64 + 7080;
	// bne 0x82123978
	if (!cr0.eq) goto loc_82123978;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,7100(r30)
	PPC_STORE_U32(r30.u32 + 7100, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,6036
	ctx.r4.s64 = r11.s64 + 6036;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7100);
loc_82123978:
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
	// beq 0x821239c0
	if (cr0.eq) goto loc_821239C0;
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
	// addi r3,r25,-80
	ctx.r3.s64 = r25.s64 + -80;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x8214c5b0
	sub_8214C5B0(ctx, base);
	// b 0x82123894
	goto loc_82123894;
loc_821239C0:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,7076
	r28.s64 = ctx.r10.s64 + 7076;
	// bne 0x821239e8
	if (!cr0.eq) goto loc_821239E8;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,7100(r30)
	PPC_STORE_U32(r30.u32 + 7100, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,6024
	ctx.r4.s64 = r11.s64 + 6024;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821239E8:
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
	// beq 0x82123a0c
	if (cr0.eq) goto loc_82123A0C;
	// addi r3,r25,-80
	ctx.r3.s64 = r25.s64 + -80;
	// bl 0x8214c948
	sub_8214C948(ctx, base);
	// b 0x82123894
	goto loc_82123894;
loc_82123A0C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r25,-76
	ctx.r4.s64 = r25.s64 + -76;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x823706b8
	sub_823706B8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82123a50
	if (cr6.eq) goto loc_82123A50;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123a5c
	if (cr0.eq) goto loc_82123A5C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82123a5c
	goto loc_82123A5C;
loc_82123A50:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82123A58:
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
loc_82123A5C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82123A60:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82123A68"))) PPC_WEAK_FUNC(sub_82123A68);
PPC_FUNC_IMPL(__imp__sub_82123A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7100
	r11.s64 = r11.s64 + 7100;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7100
	ctx.r10.s64 = ctx.r10.s64 + 7100;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82123A90"))) PPC_WEAK_FUNC(sub_82123A90);
PPC_FUNC_IMPL(__imp__sub_82123A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7100
	r11.s64 = r11.s64 + 7100;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7100
	ctx.r10.s64 = ctx.r10.s64 + 7100;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82123AB8"))) PPC_WEAK_FUNC(sub_82123AB8);
PPC_FUNC_IMPL(__imp__sub_82123AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7100
	r11.s64 = r11.s64 + 7100;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7100
	ctx.r10.s64 = ctx.r10.s64 + 7100;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82123AE0"))) PPC_WEAK_FUNC(sub_82123AE0);
PPC_FUNC_IMPL(__imp__sub_82123AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7100
	r11.s64 = r11.s64 + 7100;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7100
	ctx.r10.s64 = ctx.r10.s64 + 7100;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82123B08"))) PPC_WEAK_FUNC(sub_82123B08);
PPC_FUNC_IMPL(__imp__sub_82123B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7100
	r11.s64 = r11.s64 + 7100;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7100
	ctx.r10.s64 = ctx.r10.s64 + 7100;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82123B30"))) PPC_WEAK_FUNC(sub_82123B30);
PPC_FUNC_IMPL(__imp__sub_82123B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7100
	r11.s64 = r11.s64 + 7100;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7100
	ctx.r10.s64 = ctx.r10.s64 + 7100;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82123B58"))) PPC_WEAK_FUNC(sub_82123B58);
PPC_FUNC_IMPL(__imp__sub_82123B58) {
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

__attribute__((alias("__imp__sub_82123B80"))) PPC_WEAK_FUNC(sub_82123B80);
PPC_FUNC_IMPL(__imp__sub_82123B80) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,6616(0)
	r16.u64 = PPC_LOAD_U32(6616);
	// mflr r12
	// bl 0x8239bcec
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7148
	r29.s64 = ctx.r10.s64 + 7148;
	// bne 0x82123bf4
	if (!cr0.eq) goto loc_82123BF4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6412
	ctx.r4.s64 = r11.s64 + 6412;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82123BF4:
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
	// beq 0x82123c6c
	if (cr0.eq) goto loc_82123C6C;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82123c34
	if (!cr6.eq) goto loc_82123C34;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8214ca98
	sub_8214CA98(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_82123C34:
	// lwz r11,-36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -36);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
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
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82123C60:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82123C64:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8212433c
	goto loc_8212433C;
loc_82123C6C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7144
	r29.s64 = ctx.r10.s64 + 7144;
	// bne 0x82123c98
	if (!cr0.eq) goto loc_82123C98;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6404
	ctx.r4.s64 = r11.s64 + 6404;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82123C98:
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
	// beq 0x82123d0c
	if (cr0.eq) goto loc_82123D0C;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82123cdc
	if (!cr6.eq) goto loc_82123CDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,-28(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -28);
	f31.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
loc_82123CCC:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// bl 0x8214ca80
	sub_8214CA80(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_82123CDC:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-32(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -32);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82123c60
	goto loc_82123C60;
loc_82123D0C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7140
	r29.s64 = ctx.r10.s64 + 7140;
	// bne 0x82123d38
	if (!cr0.eq) goto loc_82123D38;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6396
	ctx.r4.s64 = r11.s64 + 6396;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82123D38:
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
	// beq 0x82123da0
	if (cr0.eq) goto loc_82123DA0;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82123d70
	if (!cr6.eq) goto loc_82123D70;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,-32(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82123ccc
	goto loc_82123CCC;
loc_82123D70:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-28(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -28);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82123c60
	goto loc_82123C60;
loc_82123DA0:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7136
	r29.s64 = ctx.r10.s64 + 7136;
	// bne 0x82123dcc
	if (!cr0.eq) goto loc_82123DCC;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6384
	ctx.r4.s64 = r11.s64 + 6384;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82123DCC:
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
	// beq 0x82123e38
	if (cr0.eq) goto loc_82123E38;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82123e08
	if (!cr6.eq) goto loc_82123E08;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8214cab0
	sub_8214CAB0(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_82123E08:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -24);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x82123c60
	goto loc_82123C60;
loc_82123E38:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7132
	r29.s64 = ctx.r10.s64 + 7132;
	// bne 0x82123e64
	if (!cr0.eq) goto loc_82123E64;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6376
	ctx.r4.s64 = r11.s64 + 6376;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82123E64:
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
	// beq 0x82123ed0
	if (cr0.eq) goto loc_82123ED0;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82123ea0
	if (!cr6.eq) goto loc_82123EA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8214c548
	sub_8214C548(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_82123EA0:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-44(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -44);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x82123c60
	goto loc_82123C60;
loc_82123ED0:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7128
	r29.s64 = ctx.r10.s64 + 7128;
	// bne 0x82123efc
	if (!cr0.eq) goto loc_82123EFC;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6368
	ctx.r4.s64 = r11.s64 + 6368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82123EFC:
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
	// beq 0x82123f68
	if (cr0.eq) goto loc_82123F68;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82123f38
	if (!cr6.eq) goto loc_82123F38;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8214c598
	sub_8214C598(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_82123F38:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-40(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -40);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x82123c60
	goto loc_82123C60;
loc_82123F68:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7124
	r29.s64 = ctx.r10.s64 + 7124;
	// bne 0x82123f94
	if (!cr0.eq) goto loc_82123F94;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6356
	ctx.r4.s64 = r11.s64 + 6356;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82123F94:
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
	// beq 0x82124004
	if (cr0.eq) goto loc_82124004;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82123fd4
	if (!cr6.eq) goto loc_82123FD4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8214c4f8
	sub_8214C4F8(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_82123FD4:
	// lwz r11,-48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -48);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x82123c60
	goto loc_82123C60;
loc_82124004:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7120
	r29.s64 = ctx.r10.s64 + 7120;
	// bne 0x82124030
	if (!cr0.eq) goto loc_82124030;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6344
	ctx.r4.s64 = r11.s64 + 6344;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82124030:
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
	// beq 0x821240ac
	if (cr0.eq) goto loc_821240AC;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8212407c
	if (!cr6.eq) goto loc_8212407C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x8214c5b0
	sub_8214C5B0(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_8212407C:
	// lbz r11,-68(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + -68);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x82123c60
	goto loc_82123C60;
loc_821240AC:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7116
	r29.s64 = ctx.r10.s64 + 7116;
	// bne 0x821240d8
	if (!cr0.eq) goto loc_821240D8;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6332
	ctx.r4.s64 = r11.s64 + 6332;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_821240D8:
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
	// beq 0x82124144
	if (cr0.eq) goto loc_82124144;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82124114
	if (!cr6.eq) goto loc_82124114;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8214c498
	sub_8214C498(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_82124114:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-72(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -72);
	f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x82123c60
	goto loc_82123C60;
loc_82124144:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7112
	r29.s64 = ctx.r10.s64 + 7112;
	// bne 0x82124170
	if (!cr0.eq) goto loc_82124170;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6324
	ctx.r4.s64 = r11.s64 + 6324;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82124170:
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
	// beq 0x821241ec
	if (cr0.eq) goto loc_821241EC;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x821241bc
	if (!cr6.eq) goto loc_821241BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,-56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -56);
	f31.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f30,-60(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -60);
	f30.f64 = double(temp.f32);
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
loc_821241A8:
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
loc_821241AC:
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x8214c698
	sub_8214C698(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_821241BC:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-64(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -64);
	f0.f64 = double(temp.f32);
	// stfs f0,160(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x82123c60
	goto loc_82123C60;
loc_821241EC:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7108
	r29.s64 = ctx.r10.s64 + 7108;
	// bne 0x82124218
	if (!cr0.eq) goto loc_82124218;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6316
	ctx.r4.s64 = r11.s64 + 6316;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82124218:
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
	// beq 0x82124284
	if (cr0.eq) goto loc_82124284;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82124254
	if (!cr6.eq) goto loc_82124254;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,-56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -56);
	f31.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,-64(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -64);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821241a8
	goto loc_821241A8;
loc_82124254:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-60(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -60);
	f0.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// b 0x82123c60
	goto loc_82123C60;
loc_82124284:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7104
	r29.s64 = ctx.r10.s64 + 7104;
	// bne 0x821242ac
	if (!cr0.eq) goto loc_821242AC;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6304
	ctx.r4.s64 = r11.s64 + 6304;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821242AC:
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
	// beq 0x82124318
	if (cr0.eq) goto loc_82124318;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x821242e8
	if (!cr6.eq) goto loc_821242E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// lfs f2,-60(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -60);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-64(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -64);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821241ac
	goto loc_821241AC;
loc_821242E8:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -56);
	f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// b 0x82123c60
	goto loc_82123C60;
loc_82124318:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-76
	ctx.r3.s64 = r28.s64 + -76;
	// bl 0x823700a8
	sub_823700A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_8212433C:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82123B88"))) PPC_WEAK_FUNC(sub_82123B88);
PPC_FUNC_IMPL(__imp__sub_82123B88) {
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
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7148
	r29.s64 = ctx.r10.s64 + 7148;
	// bne 0x82123bf4
	if (!cr0.eq) goto loc_82123BF4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6412
	ctx.r4.s64 = r11.s64 + 6412;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82123BF4:
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
	// beq 0x82123c6c
	if (cr0.eq) goto loc_82123C6C;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82123c34
	if (!cr6.eq) goto loc_82123C34;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8214ca98
	sub_8214CA98(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_82123C34:
	// lwz r11,-36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -36);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
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
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82123C60:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82123C64:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8212433c
	goto loc_8212433C;
loc_82123C6C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7144
	r29.s64 = ctx.r10.s64 + 7144;
	// bne 0x82123c98
	if (!cr0.eq) goto loc_82123C98;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6404
	ctx.r4.s64 = r11.s64 + 6404;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82123C98:
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
	// beq 0x82123d0c
	if (cr0.eq) goto loc_82123D0C;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82123cdc
	if (!cr6.eq) goto loc_82123CDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,-28(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -28);
	f31.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
loc_82123CCC:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// bl 0x8214ca80
	sub_8214CA80(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_82123CDC:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-32(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -32);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82123c60
	goto loc_82123C60;
loc_82123D0C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7140
	r29.s64 = ctx.r10.s64 + 7140;
	// bne 0x82123d38
	if (!cr0.eq) goto loc_82123D38;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6396
	ctx.r4.s64 = r11.s64 + 6396;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82123D38:
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
	// beq 0x82123da0
	if (cr0.eq) goto loc_82123DA0;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82123d70
	if (!cr6.eq) goto loc_82123D70;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,-32(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82123ccc
	goto loc_82123CCC;
loc_82123D70:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-28(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -28);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82123c60
	goto loc_82123C60;
loc_82123DA0:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7136
	r29.s64 = ctx.r10.s64 + 7136;
	// bne 0x82123dcc
	if (!cr0.eq) goto loc_82123DCC;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6384
	ctx.r4.s64 = r11.s64 + 6384;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82123DCC:
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
	// beq 0x82123e38
	if (cr0.eq) goto loc_82123E38;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82123e08
	if (!cr6.eq) goto loc_82123E08;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8214cab0
	sub_8214CAB0(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_82123E08:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -24);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x82123c60
	goto loc_82123C60;
loc_82123E38:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7132
	r29.s64 = ctx.r10.s64 + 7132;
	// bne 0x82123e64
	if (!cr0.eq) goto loc_82123E64;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6376
	ctx.r4.s64 = r11.s64 + 6376;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82123E64:
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
	// beq 0x82123ed0
	if (cr0.eq) goto loc_82123ED0;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82123ea0
	if (!cr6.eq) goto loc_82123EA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8214c548
	sub_8214C548(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_82123EA0:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-44(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -44);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x82123c60
	goto loc_82123C60;
loc_82123ED0:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7128
	r29.s64 = ctx.r10.s64 + 7128;
	// bne 0x82123efc
	if (!cr0.eq) goto loc_82123EFC;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6368
	ctx.r4.s64 = r11.s64 + 6368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82123EFC:
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
	// beq 0x82123f68
	if (cr0.eq) goto loc_82123F68;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82123f38
	if (!cr6.eq) goto loc_82123F38;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8214c598
	sub_8214C598(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_82123F38:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-40(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -40);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x82123c60
	goto loc_82123C60;
loc_82123F68:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7124
	r29.s64 = ctx.r10.s64 + 7124;
	// bne 0x82123f94
	if (!cr0.eq) goto loc_82123F94;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6356
	ctx.r4.s64 = r11.s64 + 6356;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82123F94:
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
	// beq 0x82124004
	if (cr0.eq) goto loc_82124004;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82123fd4
	if (!cr6.eq) goto loc_82123FD4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8214c4f8
	sub_8214C4F8(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_82123FD4:
	// lwz r11,-48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -48);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x82123c60
	goto loc_82123C60;
loc_82124004:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7120
	r29.s64 = ctx.r10.s64 + 7120;
	// bne 0x82124030
	if (!cr0.eq) goto loc_82124030;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6344
	ctx.r4.s64 = r11.s64 + 6344;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82124030:
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
	// beq 0x821240ac
	if (cr0.eq) goto loc_821240AC;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8212407c
	if (!cr6.eq) goto loc_8212407C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x8214c5b0
	sub_8214C5B0(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_8212407C:
	// lbz r11,-68(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + -68);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x82123c60
	goto loc_82123C60;
loc_821240AC:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7116
	r29.s64 = ctx.r10.s64 + 7116;
	// bne 0x821240d8
	if (!cr0.eq) goto loc_821240D8;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6332
	ctx.r4.s64 = r11.s64 + 6332;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_821240D8:
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
	// beq 0x82124144
	if (cr0.eq) goto loc_82124144;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82124114
	if (!cr6.eq) goto loc_82124114;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8214c498
	sub_8214C498(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_82124114:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-72(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -72);
	f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x82123c60
	goto loc_82123C60;
loc_82124144:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7112
	r29.s64 = ctx.r10.s64 + 7112;
	// bne 0x82124170
	if (!cr0.eq) goto loc_82124170;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6324
	ctx.r4.s64 = r11.s64 + 6324;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82124170:
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
	// beq 0x821241ec
	if (cr0.eq) goto loc_821241EC;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x821241bc
	if (!cr6.eq) goto loc_821241BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,-56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -56);
	f31.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f30,-60(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -60);
	f30.f64 = double(temp.f32);
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
loc_821241A8:
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
loc_821241AC:
	// addi r3,r28,-80
	ctx.r3.s64 = r28.s64 + -80;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x8214c698
	sub_8214C698(ctx, base);
	// b 0x82123c64
	goto loc_82123C64;
loc_821241BC:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-64(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -64);
	f0.f64 = double(temp.f32);
	// stfs f0,160(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x82123c60
	goto loc_82123C60;
loc_821241EC:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7108
	r29.s64 = ctx.r10.s64 + 7108;
	// bne 0x82124218
	if (!cr0.eq) goto loc_82124218;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6316
	ctx.r4.s64 = r11.s64 + 6316;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7152);
loc_82124218:
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
	// beq 0x82124284
	if (cr0.eq) goto loc_82124284;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x82124254
	if (!cr6.eq) goto loc_82124254;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,-56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -56);
	f31.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,-64(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -64);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821241a8
	goto loc_821241A8;
loc_82124254:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-60(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -60);
	f0.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// b 0x82123c60
	goto loc_82123C60;
loc_82124284:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7104
	r29.s64 = ctx.r10.s64 + 7104;
	// bne 0x821242ac
	if (!cr0.eq) goto loc_821242AC;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,7152(r30)
	PPC_STORE_U32(r30.u32 + 7152, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6304
	ctx.r4.s64 = r11.s64 + 6304;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821242AC:
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
	// beq 0x82124318
	if (cr0.eq) goto loc_82124318;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x821242e8
	if (!cr6.eq) goto loc_821242E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// lfs f2,-60(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -60);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-64(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -64);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821241ac
	goto loc_821241AC;
loc_821242E8:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -56);
	f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82123c64
	if (cr0.eq) goto loc_82123C64;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// b 0x82123c60
	goto loc_82123C60;
loc_82124318:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-76
	ctx.r3.s64 = r28.s64 + -76;
	// bl 0x823700a8
	sub_823700A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_8212433C:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8212434C"))) PPC_WEAK_FUNC(sub_8212434C);
PPC_FUNC_IMPL(__imp__sub_8212434C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7152
	r11.s64 = r11.s64 + 7152;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7152
	ctx.r10.s64 = ctx.r10.s64 + 7152;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82124374"))) PPC_WEAK_FUNC(sub_82124374);
PPC_FUNC_IMPL(__imp__sub_82124374) {
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

__attribute__((alias("__imp__sub_8212439C"))) PPC_WEAK_FUNC(sub_8212439C);
PPC_FUNC_IMPL(__imp__sub_8212439C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7152
	r11.s64 = r11.s64 + 7152;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7152
	ctx.r10.s64 = ctx.r10.s64 + 7152;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821243C4"))) PPC_WEAK_FUNC(sub_821243C4);
PPC_FUNC_IMPL(__imp__sub_821243C4) {
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

