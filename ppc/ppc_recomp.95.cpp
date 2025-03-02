#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822FF420"))) PPC_WEAK_FUNC(sub_822FF420);
PPC_FUNC_IMPL(__imp__sub_822FF420) {
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
	// lwz r16,-24(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24);
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
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x822ff2a0
	sub_822FF2A0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-21432
	r11.s64 = r11.s64 + -21432;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// bl 0x822f8898
	sub_822F8898(ctx, base);
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

__attribute__((alias("__imp__sub_822FF428"))) PPC_WEAK_FUNC(sub_822FF428);
PPC_FUNC_IMPL(__imp__sub_822FF428) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x822ff2a0
	sub_822FF2A0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-21432
	r11.s64 = r11.s64 + -21432;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// bl 0x822f8898
	sub_822F8898(ctx, base);
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

__attribute__((alias("__imp__sub_822FF49C"))) PPC_WEAK_FUNC(sub_822FF49C);
PPC_FUNC_IMPL(__imp__sub_822FF49C) {
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
	// bl 0x822e7590
	sub_822E7590(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822FF4C4"))) PPC_WEAK_FUNC(sub_822FF4C4);
PPC_FUNC_IMPL(__imp__sub_822FF4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FF4C8"))) PPC_WEAK_FUNC(sub_822FF4C8);
PPC_FUNC_IMPL(__imp__sub_822FF4C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x822e6168
	sub_822E6168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822FF4CC"))) PPC_WEAK_FUNC(sub_822FF4CC);
PPC_FUNC_IMPL(__imp__sub_822FF4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FF4D0"))) PPC_WEAK_FUNC(sub_822FF4D0);
PPC_FUNC_IMPL(__imp__sub_822FF4D0) {
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ff330
	sub_822FF330(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
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
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f8a38
	sub_822F8A38(ctx, base);
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

__attribute__((alias("__imp__sub_822FF57C"))) PPC_WEAK_FUNC(sub_822FF57C);
PPC_FUNC_IMPL(__imp__sub_822FF57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FF580"))) PPC_WEAK_FUNC(sub_822FF580);
PPC_FUNC_IMPL(__imp__sub_822FF580) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ff380
	sub_822FF380(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-6512(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -6512);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x822ff610
	if (!cr6.gt) goto loc_822FF610;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,-6512(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -6512);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x822ff610
	if (cr6.lt) goto loc_822FF610;
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f8f48
	sub_822F8F48(ctx, base);
loc_822FF610:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822FF618"))) PPC_WEAK_FUNC(sub_822FF618);
PPC_FUNC_IMPL(__imp__sub_822FF618) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822ff4d0
	sub_822FF4D0(ctx, base);
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

__attribute__((alias("__imp__sub_822FF650"))) PPC_WEAK_FUNC(sub_822FF650);
PPC_FUNC_IMPL(__imp__sub_822FF650) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822ff580
	sub_822FF580(ctx, base);
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

__attribute__((alias("__imp__sub_822FF688"))) PPC_WEAK_FUNC(sub_822FF688);
PPC_FUNC_IMPL(__imp__sub_822FF688) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ff6c8
	if (cr0.eq) goto loc_822FF6C8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822FF6C8:
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

__attribute__((alias("__imp__sub_822FF6DC"))) PPC_WEAK_FUNC(sub_822FF6DC);
PPC_FUNC_IMPL(__imp__sub_822FF6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FF6E0"))) PPC_WEAK_FUNC(sub_822FF6E0);
PPC_FUNC_IMPL(__imp__sub_822FF6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 + ctx.f1.f64));
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_822FF6FC"))) PPC_WEAK_FUNC(sub_822FF6FC);
PPC_FUNC_IMPL(__imp__sub_822FF6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FF700"))) PPC_WEAK_FUNC(sub_822FF700);
PPC_FUNC_IMPL(__imp__sub_822FF700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f1,56(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 + ctx.f1.f64));
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_822FF71C"))) PPC_WEAK_FUNC(sub_822FF71C);
PPC_FUNC_IMPL(__imp__sub_822FF71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FF720"))) PPC_WEAK_FUNC(sub_822FF720);
PPC_FUNC_IMPL(__imp__sub_822FF720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	f0.f64 = double(temp.f32);
	// stfs f1,60(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 * ctx.f1.f64));
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_822FF73C"))) PPC_WEAK_FUNC(sub_822FF73C);
PPC_FUNC_IMPL(__imp__sub_822FF73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FF740"))) PPC_WEAK_FUNC(sub_822FF740);
PPC_FUNC_IMPL(__imp__sub_822FF740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f1,64(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 * ctx.f1.f64));
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_822FF75C"))) PPC_WEAK_FUNC(sub_822FF75C);
PPC_FUNC_IMPL(__imp__sub_822FF75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FF760"))) PPC_WEAK_FUNC(sub_822FF760);
PPC_FUNC_IMPL(__imp__sub_822FF760) {
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
	// lwz r16,144(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 144);
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// bl 0x822eb8d0
	sub_822EB8D0(ctx, base);
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

__attribute__((alias("__imp__sub_822FF768"))) PPC_WEAK_FUNC(sub_822FF768);
PPC_FUNC_IMPL(__imp__sub_822FF768) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// bl 0x822eb8d0
	sub_822EB8D0(ctx, base);
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

__attribute__((alias("__imp__sub_822FF7BC"))) PPC_WEAK_FUNC(sub_822FF7BC);
PPC_FUNC_IMPL(__imp__sub_822FF7BC) {
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

__attribute__((alias("__imp__sub_822FF7E4"))) PPC_WEAK_FUNC(sub_822FF7E4);
PPC_FUNC_IMPL(__imp__sub_822FF7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FF7E8"))) PPC_WEAK_FUNC(sub_822FF7E8);
PPC_FUNC_IMPL(__imp__sub_822FF7E8) {
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
	// bl 0x822ff688
	sub_822FF688(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
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

__attribute__((alias("__imp__sub_822FF828"))) PPC_WEAK_FUNC(sub_822FF828);
PPC_FUNC_IMPL(__imp__sub_822FF828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826910a0
	sub_826910A0(ctx, base);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f1,40(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 * ctx.f1.f64));
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

__attribute__((alias("__imp__sub_822FF87C"))) PPC_WEAK_FUNC(sub_822FF87C);
PPC_FUNC_IMPL(__imp__sub_822FF87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FF880"))) PPC_WEAK_FUNC(sub_822FF880);
PPC_FUNC_IMPL(__imp__sub_822FF880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826910a0
	sub_826910A0(ctx, base);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f1,44(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 * ctx.f1.f64));
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

__attribute__((alias("__imp__sub_822FF8D4"))) PPC_WEAK_FUNC(sub_822FF8D4);
PPC_FUNC_IMPL(__imp__sub_822FF8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FF8D8"))) PPC_WEAK_FUNC(sub_822FF8D8);
PPC_FUNC_IMPL(__imp__sub_822FF8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826910a0
	sub_826910A0(ctx, base);
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f1,48(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 * ctx.f1.f64));
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

__attribute__((alias("__imp__sub_822FF92C"))) PPC_WEAK_FUNC(sub_822FF92C);
PPC_FUNC_IMPL(__imp__sub_822FF92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FF930"))) PPC_WEAK_FUNC(sub_822FF930);
PPC_FUNC_IMPL(__imp__sub_822FF930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_822FF948"))) PPC_WEAK_FUNC(sub_822FF948);
PPC_FUNC_IMPL(__imp__sub_822FF948) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,208(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 208);
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r29,r30,68
	r29.s64 = r30.s64 + 68;
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f31,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f31.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f31,40(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,44(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// stfs f31,60(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stfs f31,64(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 64, temp.u32);
	// lfs f0,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// stfs f0,56(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// bl 0x822eb9b8
	sub_822EB9B8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-17724
	r11.s64 = r11.s64 + -17724;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stfs f31,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822FF950"))) PPC_WEAK_FUNC(sub_822FF950);
PPC_FUNC_IMPL(__imp__sub_822FF950) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r29,r30,68
	r29.s64 = r30.s64 + 68;
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f31,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f31.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f31,40(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,44(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// stfs f31,60(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stfs f31,64(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 64, temp.u32);
	// lfs f0,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// stfs f0,56(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// bl 0x822eb9b8
	sub_822EB9B8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-17724
	r11.s64 = r11.s64 + -17724;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stfs f31,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822FF9D8"))) PPC_WEAK_FUNC(sub_822FF9D8);
PPC_FUNC_IMPL(__imp__sub_822FF9D8) {
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

__attribute__((alias("__imp__sub_822FFA00"))) PPC_WEAK_FUNC(sub_822FFA00);
PPC_FUNC_IMPL(__imp__sub_822FFA00) {
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
	// bl 0x822ff768
	sub_822FF768(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ffa30
	if (cr0.eq) goto loc_822FFA30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822FFA30:
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

__attribute__((alias("__imp__sub_822FFA4C"))) PPC_WEAK_FUNC(sub_822FFA4C);
PPC_FUNC_IMPL(__imp__sub_822FFA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FFA50"))) PPC_WEAK_FUNC(sub_822FFA50);
PPC_FUNC_IMPL(__imp__sub_822FFA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x822eba48
	sub_822EBA48(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stfs f31,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_822FFAB8"))) PPC_WEAK_FUNC(sub_822FFAB8);
PPC_FUNC_IMPL(__imp__sub_822FFAB8) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 272);
	f0.f64 = double(temp.f32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lfd f1,264(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 264);
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
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

__attribute__((alias("__imp__sub_822FFAF0"))) PPC_WEAK_FUNC(sub_822FFAF0);
PPC_FUNC_IMPL(__imp__sub_822FFAF0) {
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
	// bl 0x8239ebe8
	sub_8239EBE8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfs f0,276(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 276);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822FFB20"))) PPC_WEAK_FUNC(sub_822FFB20);
PPC_FUNC_IMPL(__imp__sub_822FFB20) {
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
	// lwz r16,360(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 360);
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,284
	r11.s64 = r11.s64 + 284;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x822eb8d0
	sub_822EB8D0(ctx, base);
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

__attribute__((alias("__imp__sub_822FFB28"))) PPC_WEAK_FUNC(sub_822FFB28);
PPC_FUNC_IMPL(__imp__sub_822FFB28) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,284
	r11.s64 = r11.s64 + 284;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x822eb8d0
	sub_822EB8D0(ctx, base);
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

__attribute__((alias("__imp__sub_822FFB7C"))) PPC_WEAK_FUNC(sub_822FFB7C);
PPC_FUNC_IMPL(__imp__sub_822FFB7C) {
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

__attribute__((alias("__imp__sub_822FFBA4"))) PPC_WEAK_FUNC(sub_822FFBA4);
PPC_FUNC_IMPL(__imp__sub_822FFBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FFBA8"))) PPC_WEAK_FUNC(sub_822FFBA8);
PPC_FUNC_IMPL(__imp__sub_822FFBA8) {
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
	// lwz r16,432(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 432);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-6504(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6504);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-6508
	r30.s64 = ctx.r9.s64 + -6508;
	// bne 0x822ffbf4
	if (!cr0.eq) goto loc_822FFBF4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-6504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6504, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,416
	ctx.r4.s64 = r11.s64 + 416;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822FFBF4:
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

__attribute__((alias("__imp__sub_822FFBB0"))) PPC_WEAK_FUNC(sub_822FFBB0);
PPC_FUNC_IMPL(__imp__sub_822FFBB0) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-6504(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6504);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-6508
	r30.s64 = ctx.r9.s64 + -6508;
	// bne 0x822ffbf4
	if (!cr0.eq) goto loc_822FFBF4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-6504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6504, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,416
	ctx.r4.s64 = r11.s64 + 416;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822FFBF4:
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

__attribute__((alias("__imp__sub_822FFC08"))) PPC_WEAK_FUNC(sub_822FFC08);
PPC_FUNC_IMPL(__imp__sub_822FFC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-6504
	r11.s64 = r11.s64 + -6504;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-6504
	ctx.r10.s64 = ctx.r10.s64 + -6504;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822FFC30"))) PPC_WEAK_FUNC(sub_822FFC30);
PPC_FUNC_IMPL(__imp__sub_822FFC30) {
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
	// bl 0x822ffbb0
	sub_822FFBB0(ctx, base);
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

__attribute__((alias("__imp__sub_822FFC60"))) PPC_WEAK_FUNC(sub_822FFC60);
PPC_FUNC_IMPL(__imp__sub_822FFC60) {
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
	// lwz r16,488(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 488);
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r11,-6496(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6496);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822ffce4
	if (!cr0.eq) goto loc_822FFCE4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-6496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6496, r11.u32);
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
	// bl 0x822ffbb0
	sub_822FFBB0(ctx, base);
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
	// stw r3,-6500(r28)
	PPC_STORE_U32(r28.u32 + -6500, ctx.r3.u32);
	// b 0x822ffce8
	goto loc_822FFCE8;
loc_822FFCE4:
	// lwz r3,-6500(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -6500);
loc_822FFCE8:
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
	// beq 0x822ffd18
	if (cr0.eq) goto loc_822FFD18;
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
	// b 0x822ffd60
	goto loc_822FFD60;
loc_822FFD18:
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
	// bne 0x822ffd54
	if (!cr0.eq) goto loc_822FFD54;
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
loc_822FFD54:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822FFD60:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822FFC68"))) PPC_WEAK_FUNC(sub_822FFC68);
PPC_FUNC_IMPL(__imp__sub_822FFC68) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r11,-6496(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6496);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822ffce4
	if (!cr0.eq) goto loc_822FFCE4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-6496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6496, r11.u32);
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
	// bl 0x822ffbb0
	sub_822FFBB0(ctx, base);
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
	// stw r3,-6500(r28)
	PPC_STORE_U32(r28.u32 + -6500, ctx.r3.u32);
	// b 0x822ffce8
	goto loc_822FFCE8;
loc_822FFCE4:
	// lwz r3,-6500(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -6500);
loc_822FFCE8:
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
	// beq 0x822ffd18
	if (cr0.eq) goto loc_822FFD18;
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
	// b 0x822ffd60
	goto loc_822FFD60;
loc_822FFD18:
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
	// bne 0x822ffd54
	if (!cr0.eq) goto loc_822FFD54;
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
loc_822FFD54:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822FFD60:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822FFD6C"))) PPC_WEAK_FUNC(sub_822FFD6C);
PPC_FUNC_IMPL(__imp__sub_822FFD6C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-6496
	r11.s64 = r11.s64 + -6496;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-6496
	ctx.r10.s64 = ctx.r10.s64 + -6496;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822FFD94"))) PPC_WEAK_FUNC(sub_822FFD94);
PPC_FUNC_IMPL(__imp__sub_822FFD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FFD98"))) PPC_WEAK_FUNC(sub_822FFD98);
PPC_FUNC_IMPL(__imp__sub_822FFD98) {
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
	// lwz r16,560(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 560);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
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
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822ffe18
	if (cr6.eq) goto loc_822FFE18;
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
	// beq 0x822ffe24
	if (cr0.eq) goto loc_822FFE24;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822ffe24
	goto loc_822FFE24;
loc_822FFE18:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822FFE24:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822FFDA0"))) PPC_WEAK_FUNC(sub_822FFDA0);
PPC_FUNC_IMPL(__imp__sub_822FFDA0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
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
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822ffe18
	if (cr6.eq) goto loc_822FFE18;
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
	// beq 0x822ffe24
	if (cr0.eq) goto loc_822FFE24;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822ffe24
	goto loc_822FFE24;
loc_822FFE18:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822FFE24:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822FFE30"))) PPC_WEAK_FUNC(sub_822FFE30);
PPC_FUNC_IMPL(__imp__sub_822FFE30) {
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

__attribute__((alias("__imp__sub_822FFE58"))) PPC_WEAK_FUNC(sub_822FFE58);
PPC_FUNC_IMPL(__imp__sub_822FFE58) {
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
	// lwz r16,632(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 632);
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
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r29,r30,40
	r29.s64 = r30.s64 + 40;
	// addi r11,r11,284
	r11.s64 = r11.s64 + 284;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822eb9b8
	sub_822EB9B8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-17724
	r11.s64 = r11.s64 + -17724;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r10,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822FFE60"))) PPC_WEAK_FUNC(sub_822FFE60);
PPC_FUNC_IMPL(__imp__sub_822FFE60) {
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r29,r30,40
	r29.s64 = r30.s64 + 40;
	// addi r11,r11,284
	r11.s64 = r11.s64 + 284;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822eb9b8
	sub_822EB9B8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-17724
	r11.s64 = r11.s64 + -17724;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r10,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822FFEBC"))) PPC_WEAK_FUNC(sub_822FFEBC);
PPC_FUNC_IMPL(__imp__sub_822FFEBC) {
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

__attribute__((alias("__imp__sub_822FFEE4"))) PPC_WEAK_FUNC(sub_822FFEE4);
PPC_FUNC_IMPL(__imp__sub_822FFEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FFEE8"))) PPC_WEAK_FUNC(sub_822FFEE8);
PPC_FUNC_IMPL(__imp__sub_822FFEE8) {
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
	// bl 0x822ffb28
	sub_822FFB28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822fff18
	if (cr0.eq) goto loc_822FFF18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_822FFF18:
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

__attribute__((alias("__imp__sub_822FFF34"))) PPC_WEAK_FUNC(sub_822FFF34);
PPC_FUNC_IMPL(__imp__sub_822FFF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FFF38"))) PPC_WEAK_FUNC(sub_822FFF38);
PPC_FUNC_IMPL(__imp__sub_822FFF38) {
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
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x822eba48
	sub_822EBA48(ctx, base);
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

__attribute__((alias("__imp__sub_822FFF7C"))) PPC_WEAK_FUNC(sub_822FFF7C);
PPC_FUNC_IMPL(__imp__sub_822FFF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822FFF80"))) PPC_WEAK_FUNC(sub_822FFF80);
PPC_FUNC_IMPL(__imp__sub_822FFF80) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// beq cr6,0x8230004c
	if (cr6.eq) goto loc_8230004C;
	// addi r27,r28,32
	r27.s64 = r28.s64 + 32;
	// lwz r31,0(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r31,r27
	r11.s64 = r27.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82300034
	if (cr0.eq) goto loc_82300034;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,24988
	r29.s64 = r11.s64 + 24988;
loc_822FFFD0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82300018
	if (cr0.eq) goto loc_82300018;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82300018
	if (!cr6.eq) goto loc_82300018;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// bge cr6,0x8230004c
	if (!cr6.lt) goto loc_8230004C;
loc_82300018:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r31,r27
	r11.s64 = r27.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822fffd0
	if (!cr0.eq) goto loc_822FFFD0;
loc_82300034:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,52(r28)
	PPC_STORE_U32(r28.u32 + 52, r26.u32);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8230004C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82300054"))) PPC_WEAK_FUNC(sub_82300054);
PPC_FUNC_IMPL(__imp__sub_82300054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82300058"))) PPC_WEAK_FUNC(sub_82300058);
PPC_FUNC_IMPL(__imp__sub_82300058) {
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
	// addi r4,r30,40
	ctx.r4.s64 = r30.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec828
	sub_822EC828(ctx, base);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
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

__attribute__((alias("__imp__sub_823000D4"))) PPC_WEAK_FUNC(sub_823000D4);
PPC_FUNC_IMPL(__imp__sub_823000D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823000D8"))) PPC_WEAK_FUNC(sub_823000D8);
PPC_FUNC_IMPL(__imp__sub_823000D8) {
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
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x82300138
	if (cr6.gt) goto loc_82300138;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// addi r4,r30,40
	ctx.r4.s64 = r30.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec878
	sub_822EC878(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,52
	ctx.r4.s64 = r30.s64 + 52;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_82300138:
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

__attribute__((alias("__imp__sub_82300150"))) PPC_WEAK_FUNC(sub_82300150);
PPC_FUNC_IMPL(__imp__sub_82300150) {
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
	// lwz r16,736(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 736);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-6484(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -6484);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-6488
	r29.s64 = ctx.r10.s64 + -6488;
	// bne 0x823001b8
	if (!cr0.eq) goto loc_823001B8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-6484(r30)
	PPC_STORE_U32(r30.u32 + -6484, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,688
	ctx.r4.s64 = r11.s64 + 688;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-6484(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -6484);
loc_823001B8:
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
	// beq 0x82300238
	if (cr0.eq) goto loc_82300238;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x82300200
	if (!cr6.eq) goto loc_82300200;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822ebc48
	sub_822EBC48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82300230
	goto loc_82300230;
loc_82300200:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,4
	r11.s64 = 4;
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
	// beq 0x82300230
	if (cr0.eq) goto loc_82300230;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8230022C:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82300230:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823002d0
	goto loc_823002D0;
loc_82300238:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-6492
	r29.s64 = ctx.r10.s64 + -6492;
	// bne 0x82300260
	if (!cr0.eq) goto loc_82300260;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-6484(r30)
	PPC_STORE_U32(r30.u32 + -6484, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,680
	ctx.r4.s64 = r11.s64 + 680;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82300260:
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
	// beq 0x823002cc
	if (cr0.eq) goto loc_823002CC;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x8230029c
	if (!cr6.eq) goto loc_8230029C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822fff80
	sub_822FFF80(ctx, base);
	// b 0x82300230
	goto loc_82300230;
loc_8230029C:
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r11,0
	r11.s64 = 0;
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
	// beq 0x82300230
	if (cr0.eq) goto loc_82300230;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8230022c
	goto loc_8230022C;
loc_823002CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823002D0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82300158"))) PPC_WEAK_FUNC(sub_82300158);
PPC_FUNC_IMPL(__imp__sub_82300158) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-6484(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -6484);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-6488
	r29.s64 = ctx.r10.s64 + -6488;
	// bne 0x823001b8
	if (!cr0.eq) goto loc_823001B8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-6484(r30)
	PPC_STORE_U32(r30.u32 + -6484, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,688
	ctx.r4.s64 = r11.s64 + 688;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-6484(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -6484);
loc_823001B8:
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
	// beq 0x82300238
	if (cr0.eq) goto loc_82300238;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x82300200
	if (!cr6.eq) goto loc_82300200;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822ebc48
	sub_822EBC48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82300230
	goto loc_82300230;
loc_82300200:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,4
	r11.s64 = 4;
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
	// beq 0x82300230
	if (cr0.eq) goto loc_82300230;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8230022C:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82300230:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823002d0
	goto loc_823002D0;
loc_82300238:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-6492
	r29.s64 = ctx.r10.s64 + -6492;
	// bne 0x82300260
	if (!cr0.eq) goto loc_82300260;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-6484(r30)
	PPC_STORE_U32(r30.u32 + -6484, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,680
	ctx.r4.s64 = r11.s64 + 680;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82300260:
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
	// beq 0x823002cc
	if (cr0.eq) goto loc_823002CC;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x8230029c
	if (!cr6.eq) goto loc_8230029C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822fff80
	sub_822FFF80(ctx, base);
	// b 0x82300230
	goto loc_82300230;
loc_8230029C:
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r11,0
	r11.s64 = 0;
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
	// beq 0x82300230
	if (cr0.eq) goto loc_82300230;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8230022c
	goto loc_8230022C;
loc_823002CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823002D0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823002D8"))) PPC_WEAK_FUNC(sub_823002D8);
PPC_FUNC_IMPL(__imp__sub_823002D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-6484
	r11.s64 = r11.s64 + -6484;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-6484
	ctx.r10.s64 = ctx.r10.s64 + -6484;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82300300"))) PPC_WEAK_FUNC(sub_82300300);
PPC_FUNC_IMPL(__imp__sub_82300300) {
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

__attribute__((alias("__imp__sub_82300328"))) PPC_WEAK_FUNC(sub_82300328);
PPC_FUNC_IMPL(__imp__sub_82300328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-6484
	r11.s64 = r11.s64 + -6484;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-6484
	ctx.r10.s64 = ctx.r10.s64 + -6484;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82300350"))) PPC_WEAK_FUNC(sub_82300350);
PPC_FUNC_IMPL(__imp__sub_82300350) {
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

__attribute__((alias("__imp__sub_82300378"))) PPC_WEAK_FUNC(sub_82300378);
PPC_FUNC_IMPL(__imp__sub_82300378) {
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
	// addi r6,r11,24988
	ctx.r6.s64 = r11.s64 + 24988;
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
	// beq 0x823003d4
	if (cr0.eq) goto loc_823003D4;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x822eba48
	sub_822EBA48(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
loc_823003D4:
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

__attribute__((alias("__imp__sub_823003EC"))) PPC_WEAK_FUNC(sub_823003EC);
PPC_FUNC_IMPL(__imp__sub_823003EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823003F0"))) PPC_WEAK_FUNC(sub_823003F0);
PPC_FUNC_IMPL(__imp__sub_823003F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82300400
	goto loc_82300400;
loc_823003FC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82300400:
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x823003fc
	if (!cr0.eq) goto loc_823003FC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230041C"))) PPC_WEAK_FUNC(sub_8230041C);
PPC_FUNC_IMPL(__imp__sub_8230041C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82300420"))) PPC_WEAK_FUNC(sub_82300420);
PPC_FUNC_IMPL(__imp__sub_82300420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,20
	r11.s64 = ctx.r3.s64 + 20;
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82300468"))) PPC_WEAK_FUNC(sub_82300468);
PPC_FUNC_IMPL(__imp__sub_82300468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r3,-6480(r11)
	PPC_STORE_U32(r11.u32 + -6480, ctx.r3.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r4,-6476(r11)
	PPC_STORE_U32(r11.u32 + -6476, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230047C"))) PPC_WEAK_FUNC(sub_8230047C);
PPC_FUNC_IMPL(__imp__sub_8230047C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82300480"))) PPC_WEAK_FUNC(sub_82300480);
PPC_FUNC_IMPL(__imp__sub_82300480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,-6476(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -6476);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82300494"))) PPC_WEAK_FUNC(sub_82300494);
PPC_FUNC_IMPL(__imp__sub_82300494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82300498"))) PPC_WEAK_FUNC(sub_82300498);
PPC_FUNC_IMPL(__imp__sub_82300498) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,11
	r11.s64 = 11;
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
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r29,r11,1
	r29.u64 = r11.u64 ^ 1;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82300560
	if (cr0.eq) goto loc_82300560;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
loc_82300560:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82300568"))) PPC_WEAK_FUNC(sub_82300568);
PPC_FUNC_IMPL(__imp__sub_82300568) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,-6476(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -6476);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_823005BC"))) PPC_WEAK_FUNC(sub_823005BC);
PPC_FUNC_IMPL(__imp__sub_823005BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823005C0"))) PPC_WEAK_FUNC(sub_823005C0);
PPC_FUNC_IMPL(__imp__sub_823005C0) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x82300568
	sub_82300568(ctx, base);
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

__attribute__((alias("__imp__sub_823005F8"))) PPC_WEAK_FUNC(sub_823005F8);
PPC_FUNC_IMPL(__imp__sub_823005F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82300568
	sub_82300568(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// ble cr6,0x823006e4
	if (!cr6.gt) goto loc_823006E4;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r11,r11,-1001
	r11.s64 = r11.s64 + -1001;
	// ori r10,r10,17926
	ctx.r10.u64 = ctx.r10.u64 | 17926;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bgt cr6,0x823006c8
	if (cr6.gt) goto loc_823006C8;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,15600
	r11.s64 = r11.s64 + 15600;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823006b0
	if (!cr6.eq) goto loc_823006B0;
	// li r11,2
	r11.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// srawi r11,r3,4
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	r11.s64 = ctx.r3.s32 >> 4;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// b 0x823006c0
	goto loc_823006C0;
loc_823006B0:
	// li r11,1
	r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r11.s64 = ctx.r3.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
loc_823006C0:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82300760
	goto loc_82300760;
loc_823006C8:
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x82300784
	goto loc_82300784;
loc_823006E4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// blt cr6,0x82300750
	if (cr6.lt) goto loc_82300750;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
loc_82300750:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82300784
	if (cr0.eq) goto loc_82300784;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_82300760:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-6480(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -6480);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r4,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r4.u32);
	// bl 0x82359250
	sub_82359250(ctx, base);
loc_82300784:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230078C"))) PPC_WEAK_FUNC(sub_8230078C);
PPC_FUNC_IMPL(__imp__sub_8230078C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82300790"))) PPC_WEAK_FUNC(sub_82300790);
PPC_FUNC_IMPL(__imp__sub_82300790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x823007d8
	if (cr6.lt) goto loc_823007D8;
	// beq cr6,0x823007d8
	if (cr6.eq) goto loc_823007D8;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x823007c0
	if (cr6.lt) goto loc_823007C0;
	// beq cr6,0x823007b0
	if (cr6.eq) goto loc_823007B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823007B0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// divw r3,r11,r10
	ctx.r3.s32 = r11.s32 / ctx.r10.s32;
	// blr 
	return;
loc_823007C0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,112
	ctx.r10.s64 = 112;
	// addi r11,r11,111
	r11.s64 = r11.s64 + 111;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// blr 
	return;
loc_823007D8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823007E4"))) PPC_WEAK_FUNC(sub_823007E4);
PPC_FUNC_IMPL(__imp__sub_823007E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823007E8"))) PPC_WEAK_FUNC(sub_823007E8);
PPC_FUNC_IMPL(__imp__sub_823007E8) {
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
	// lwz r16,864(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 864);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82300568
	sub_82300568(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8235f108
	sub_8235F108(ctx, base);
	// lhz r11,114(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 114);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8230084c
	if (cr6.eq) goto loc_8230084C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x82300920
	goto loc_82300920;
loc_8230084C:
	// lhz r11,126(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 126);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// beq cr6,0x8230087c
	if (cr6.eq) goto loc_8230087C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x82300920
	goto loc_82300920;
loc_8230087C:
	// lha r11,112(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 112));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823008bc
	if (cr0.eq) goto loc_823008BC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x82300920
	goto loc_82300920;
loc_823008BC:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// bl 0x82300790
	sub_82300790(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// lwz r11,-6480(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -6480);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bl 0x8235d520
	sub_8235D520(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82359250
	sub_82359250(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8235d590
	sub_8235D590(ctx, base);
loc_82300920:
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8235e9a8
	sub_8235E9A8(ctx, base);
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823007F0"))) PPC_WEAK_FUNC(sub_823007F0);
PPC_FUNC_IMPL(__imp__sub_823007F0) {
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
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82300568
	sub_82300568(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8235f108
	sub_8235F108(ctx, base);
	// lhz r11,114(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 114);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8230084c
	if (cr6.eq) goto loc_8230084C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x82300920
	goto loc_82300920;
loc_8230084C:
	// lhz r11,126(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 126);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// beq cr6,0x8230087c
	if (cr6.eq) goto loc_8230087C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x82300920
	goto loc_82300920;
loc_8230087C:
	// lha r11,112(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 112));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823008bc
	if (cr0.eq) goto loc_823008BC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x82300920
	goto loc_82300920;
loc_823008BC:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// bl 0x82300790
	sub_82300790(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// lwz r11,-6480(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -6480);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bl 0x8235d520
	sub_8235D520(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82359250
	sub_82359250(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8235d590
	sub_8235D590(ctx, base);
loc_82300920:
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8235e9a8
	sub_8235E9A8(ctx, base);
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82300930"))) PPC_WEAK_FUNC(sub_82300930);
PPC_FUNC_IMPL(__imp__sub_82300930) {
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
	// bl 0x8235e9a8
	sub_8235E9A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82300958"))) PPC_WEAK_FUNC(sub_82300958);
PPC_FUNC_IMPL(__imp__sub_82300958) {
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
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8235d590
	sub_8235D590(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82300980"))) PPC_WEAK_FUNC(sub_82300980);
PPC_FUNC_IMPL(__imp__sub_82300980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// stw r4,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r5,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r5.u32);
	// stw r11,-5408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5408, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82300998"))) PPC_WEAK_FUNC(sub_82300998);
PPC_FUNC_IMPL(__imp__sub_82300998) {
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
	// bl 0x82302068
	sub_82302068(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823c0d58
	sub_823C0D58(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823009d8
	if (cr6.eq) goto loc_823009D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823c3be8
	sub_823C3BE8(ctx, base);
loc_823009D8:
	// lwz r4,248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// bl 0x823c0a80
	sub_823C0A80(ctx, base);
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

__attribute__((alias("__imp__sub_823009FC"))) PPC_WEAK_FUNC(sub_823009FC);
PPC_FUNC_IMPL(__imp__sub_823009FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82300A00"))) PPC_WEAK_FUNC(sub_82300A00);
PPC_FUNC_IMPL(__imp__sub_82300A00) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,244(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823c4010
	sub_823C4010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82300A10"))) PPC_WEAK_FUNC(sub_82300A10);
PPC_FUNC_IMPL(__imp__sub_82300A10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwa r10,64(r3)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 64));
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwa r9,60(r3)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 60));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f10,f0,f13
	ctx.f10.f64 = double(float(f0.f64 / ctx.f13.f64));
	// beq 0x82300a5c
	if (cr0.eq) goto loc_82300A5C;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfs f11,1056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 1056);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82300a64
	goto loc_82300A64;
loc_82300A5C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f11,-19936(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19936);
	ctx.f11.f64 = double(temp.f32);
loc_82300A64:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 - ctx.f1.f64));
	// fnmsubs f11,f11,f10,f0
	ctx.f11.f64 = double(float(-(ctx.f11.f64 * ctx.f10.f64 - f0.f64)));
	// lfs f12,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f12,f11,f12,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 - ctx.f12.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821c51c0
	sub_821C51C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82300ABC"))) PPC_WEAK_FUNC(sub_82300ABC);
PPC_FUNC_IMPL(__imp__sub_82300ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82300AC0"))) PPC_WEAK_FUNC(sub_82300AC0);
PPC_FUNC_IMPL(__imp__sub_82300AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f13,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f13,12(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,16(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f11,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,20(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f13,24(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// stfs f13,28(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// stfs f13,32(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// stfs f13,36(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// stfs f11,40(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// stfs f13,44(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	f0.f64 = double(temp.f32);
	// beq 0x82300b74
	if (cr0.eq) goto loc_82300B74;
	// fneg f10,f0
	ctx.f10.u64 = f0.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,56(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f11,60(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 60, temp.u32);
	// lfs f7,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 - f0.f64));
	// fmuls f11,f12,f8
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f10,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f13,f6,f13,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f12,f7,f12,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + f0.f64));
	// stfs f12,48(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// b 0x82300b84
	goto loc_82300B84;
loc_82300B74:
	// stfs f0,48(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f13,56(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// stfs f11,60(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 60, temp.u32);
loc_82300B84:
	// stfs f0,52(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82300B8C"))) PPC_WEAK_FUNC(sub_82300B8C);
PPC_FUNC_IMPL(__imp__sub_82300B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82300B90"))) PPC_WEAK_FUNC(sub_82300B90);
PPC_FUNC_IMPL(__imp__sub_82300B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f0,-30144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30144);
	f0.f64 = double(temp.f32);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r31,r9,-5540
	r31.s64 = ctx.r9.s64 + -5540;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfiwx f12,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f12.u32);
	// fctidz f12,f11
	ctx.f12.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// fctidz f11,f10
	ctx.f11.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fctidz f10,f9
	ctx.f10.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfiwx f12,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f12.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f11,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stfiwx f10,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// bl 0x82306be8
	sub_82306BE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82300ccc
	if (!cr0.eq) goto loc_82300CCC;
	// li r5,17
	ctx.r5.s64 = 17;
loc_82300CCC:
	// bl 0x82308098
	sub_82308098(ctx, base);
	// li r4,66
	ctx.r4.s64 = 66;
	// lwz r3,236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 236);
	// bl 0x823cbf70
	sub_823CBF70(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 236);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823c7478
	sub_823C7478(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82300CFC"))) PPC_WEAK_FUNC(sub_82300CFC);
PPC_FUNC_IMPL(__imp__sub_82300CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82300D00"))) PPC_WEAK_FUNC(sub_82300D00);
PPC_FUNC_IMPL(__imp__sub_82300D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addis r11,r4,-6688
	r11.s64 = ctx.r4.s64 + -438304768;
	// addic. r11,r11,-338
	xer.ca = r11.u32 > 337;
	r11.s64 = r11.s64 + -338;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82300d44
	if (cr0.eq) goto loc_82300D44;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82300d3c
	if (cr6.eq) goto loc_82300D3C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82300d34
	if (cr6.eq) goto loc_82300D34;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(r11.u32, 31, xer);
	// beq cr6,0x82300d2c
	if (cr6.eq) goto loc_82300D2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82300D2C:
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_82300D34:
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
loc_82300D3C:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_82300D44:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82300D4C"))) PPC_WEAK_FUNC(sub_82300D4C);
PPC_FUNC_IMPL(__imp__sub_82300D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82300D50"))) PPC_WEAK_FUNC(sub_82300D50);
PPC_FUNC_IMPL(__imp__sub_82300D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,6690
	r11.s64 = 438435840;
	// ori r11,r11,88
	r11.u64 = r11.u64 | 88;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x82300df4
	if (cr6.gt) goto loc_82300DF4;
	// beq cr6,0x82300e64
	if (cr6.eq) goto loc_82300E64;
	// lis r11,6184
	r11.s64 = 405274624;
	// ori r11,r11,438
	r11.u64 = r11.u64 | 438;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x82300d9c
	if (cr6.gt) goto loc_82300D9C;
	// beq cr6,0x82300e94
	if (cr6.eq) goto loc_82300E94;
	// addis r11,r3,-6184
	r11.s64 = ctx.r3.s64 + -405274624;
	// addic. r11,r11,-67
	xer.ca = r11.u32 > 66;
	r11.s64 = r11.s64 + -67;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82300e64
	if (cr0.eq) goto loc_82300E64;
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(r11.u32, 67, xer);
	// beq cr6,0x82300e94
	if (cr6.eq) goto loc_82300E94;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// beq cr6,0x82300e64
	if (cr6.eq) goto loc_82300E64;
	// cmplwi cr6,r11,323
	cr6.compare<uint32_t>(r11.u32, 323, xer);
	// b 0x82300e88
	goto loc_82300E88;
loc_82300D9C:
	// lis r11,6688
	r11.s64 = 438304768;
	// ori r11,r11,82
	r11.u64 = r11.u64 | 82;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// beq cr6,0x82300dec
	if (cr6.eq) goto loc_82300DEC;
	// ble cr6,0x82300e8c
	if (!cr6.gt) goto loc_82300E8C;
	// lis r11,6688
	r11.s64 = 438304768;
	// ori r11,r11,84
	r11.u64 = r11.u64 | 84;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// ble cr6,0x82300de4
	if (!cr6.gt) goto loc_82300DE4;
	// lis r11,6688
	r11.s64 = 438304768;
	// ori r11,r11,338
	r11.u64 = r11.u64 | 338;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// beq cr6,0x82300dec
	if (cr6.eq) goto loc_82300DEC;
	// ble cr6,0x82300e8c
	if (!cr6.gt) goto loc_82300E8C;
	// lis r11,6688
	r11.s64 = 438304768;
	// ori r11,r11,340
	r11.u64 = r11.u64 | 340;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x82300e8c
	if (cr6.gt) goto loc_82300E8C;
loc_82300DE4:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82300DEC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82300DF4:
	// lis r11,10280
	r11.s64 = 673710080;
	// ori r11,r11,324
	r11.u64 = r11.u64 | 324;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// lis r11,10280
	r11.s64 = 673710080;
	// bgt cr6,0x82300e6c
	if (cr6.gt) goto loc_82300E6C;
	// ori r11,r11,323
	r11.u64 = r11.u64 | 323;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bge cr6,0x82300e64
	if (!cr6.lt) goto loc_82300E64;
	// lis r11,6690
	r11.s64 = 438435840;
	// ori r11,r11,344
	r11.u64 = r11.u64 | 344;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// beq cr6,0x82300e64
	if (cr6.eq) goto loc_82300E64;
	// lis r11,10240
	r11.s64 = 671088640;
	// ori r11,r11,258
	r11.u64 = r11.u64 | 258;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// beq cr6,0x82300de4
	if (cr6.eq) goto loc_82300DE4;
	// lis r11,10280
	r11.s64 = 673710080;
	// ori r11,r11,66
	r11.u64 = r11.u64 | 66;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// ble cr6,0x82300e8c
	if (!cr6.gt) goto loc_82300E8C;
	// lis r11,10280
	r11.s64 = 673710080;
	// ori r11,r11,68
	r11.u64 = r11.u64 | 68;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// ble cr6,0x82300e64
	if (!cr6.gt) goto loc_82300E64;
	// lis r11,10280
	r11.s64 = 673710080;
	// ori r11,r11,134
	r11.u64 = r11.u64 | 134;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// b 0x82300e88
	goto loc_82300E88;
loc_82300E64:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_82300E6C:
	// ori r11,r11,390
	r11.u64 = r11.u64 | 390;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82300e94
	if (cr6.eq) goto loc_82300E94;
	// addis r11,r3,-11552
	r11.s64 = ctx.r3.s64 + -757071872;
	// addic. r11,r11,-150
	xer.ca = r11.u32 > 149;
	r11.s64 = r11.s64 + -150;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82300e94
	if (cr0.eq) goto loc_82300E94;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
loc_82300E88:
	// beq cr6,0x82300e94
	if (cr6.eq) goto loc_82300E94;
loc_82300E8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82300E94:
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82300E9C"))) PPC_WEAK_FUNC(sub_82300E9C);
PPC_FUNC_IMPL(__imp__sub_82300E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82300EA0"))) PPC_WEAK_FUNC(sub_82300EA0);
PPC_FUNC_IMPL(__imp__sub_82300EA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// bne cr6,0x82300efc
	if (!cr6.eq) goto loc_82300EFC;
	// bl 0x821e0538
	sub_821E0538(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lwz r7,356(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// addi r3,r11,1060
	ctx.r3.s64 = r11.s64 + 1060;
	// lwz r6,352(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 352);
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// bl 0x821a18d8
	sub_821A18D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// b 0x82300f08
	goto loc_82300F08;
loc_82300EFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821e4a08
	sub_821E4A08(ctx, base);
loc_82300F08:
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

__attribute__((alias("__imp__sub_82300F20"))) PPC_WEAK_FUNC(sub_82300F20);
PPC_FUNC_IMPL(__imp__sub_82300F20) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// bl 0x82302290
	sub_82302290(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f30.f64 = double(temp.f32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// beq 0x82300f74
	if (cr0.eq) goto loc_82300F74;
	// fmr f0,f30
	f0.f64 = f30.f64;
	// b 0x82300f78
	goto loc_82300F78;
loc_82300F74:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
loc_82300F78:
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f0,f10,f13
	f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// beq cr6,0x8230104c
	if (cr6.eq) goto loc_8230104C;
	// lbz r11,160(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 160);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8230104c
	if (!cr0.eq) goto loc_8230104C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,60(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f12,48(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-30144(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30144);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// fctidz f12,f11
	ctx.f12.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f12,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f12.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8230126c
	goto loc_8230126C;
loc_8230104C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-30144(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30144);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// beq cr6,0x82301148
	if (cr6.eq) goto loc_82301148;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f9,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * f0.f64));
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * f0.f64));
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfiwx f13,0,r11
	PPC_STORE_U32(r11.u32, ctx.f13.u32);
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// fctidz f12,f11
	ctx.f12.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// fmuls f0,f6,f0
	f0.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fctidz f11,f10
	ctx.f11.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// fctidz f10,f9
	ctx.f10.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// fctidz f9,f8
	ctx.f9.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// fctidz f8,f7
	ctx.f8.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f12,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f12.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stfiwx f11,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f10,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f10.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfiwx f9,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f9.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f8,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f8.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// b 0x82301278
	goto loc_82301278;
loc_82301148:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82301220
	if (cr6.eq) goto loc_82301220;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fmuls f10,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f9,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * f0.f64));
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * f0.f64));
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfiwx f13,0,r11
	PPC_STORE_U32(r11.u32, ctx.f13.u32);
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// fctidz f12,f11
	ctx.f12.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// fmuls f0,f6,f0
	f0.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fctidz f11,f10
	ctx.f11.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// fctidz f10,f9
	ctx.f10.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// fctidz f9,f8
	ctx.f9.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// fctidz f8,f7
	ctx.f8.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f12,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f12.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stfiwx f11,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f10,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f10.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfiwx f9,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f9.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f8,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f8.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// b 0x8230127c
	goto loc_8230127C;
loc_82301220:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f10,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// fctidz f12,f11
	ctx.f12.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f12,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f12.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8230126C:
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
loc_82301278:
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
loc_8230127C:
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x823012dc
	if (cr6.eq) goto loc_823012DC;
	// lwz r10,76(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x823012dc
	if (!cr6.eq) goto loc_823012DC;
	// addic. r11,r28,84
	xer.ca = r28.u32 > 4294967211;
	r11.s64 = r28.s64 + 84;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823012dc
	if (cr0.eq) goto loc_823012DC;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f0,f12,f31,f0
	f0.f64 = double(float(ctx.f12.f64 * f31.f64 - f0.f64));
	// fmsubs f13,f11,f31,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * f31.f64 - ctx.f13.f64));
	// fadds f0,f0,f10
	f0.f64 = double(float(f0.f64 + ctx.f10.f64));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f0,f13,f9
	f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// b 0x823012e4
	goto loc_823012E4;
loc_823012DC:
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_823012E4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301320
	if (cr6.eq) goto loc_82301320;
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f0,f31,f13
	f0.f64 = double(float(f0.f64 * f31.f64 - ctx.f13.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f13,f11,f31,f12
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * f31.f64 - ctx.f12.f64)));
	// lfs f10,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fadds f0,f0,f10
	f0.f64 = double(float(f0.f64 + ctx.f10.f64));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f0,f13,f9
	f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// b 0x82301328
	goto loc_82301328;
loc_82301320:
	// stfs f31,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_82301328:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301364
	if (cr6.eq) goto loc_82301364;
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f13,f31,f0
	f0.f64 = double(float(-(ctx.f13.f64 * f31.f64 - f0.f64)));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f13,f12,f31,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * f31.f64 - ctx.f11.f64));
	// lfs f10,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fadds f0,f0,f10
	f0.f64 = double(float(f0.f64 + ctx.f10.f64));
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f0,f13,f9
	f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// b 0x8230136c
	goto loc_8230136C;
loc_82301364:
	// stfs f30,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
loc_8230136C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823013a8
	if (cr6.eq) goto loc_823013A8;
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// stfs f0,184(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f0,f13,f11
	f0.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,188(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// b 0x823013b0
	goto loc_823013B0;
loc_823013A8:
	// stfs f30,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f30,188(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
loc_823013B0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r31,r11,-5540
	r31.s64 = r11.s64 + -5540;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823062a0
	sub_823062A0(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f30,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,196(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,208(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f30,212(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f31,228(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f30,232(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,248(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f31,244(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f31,240(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// bl 0x823062f8
	sub_823062F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82306be8
	sub_82306BE8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82308098
	sub_82308098(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-6464
	r30.s64 = r11.s64 + -6464;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823bec10
	sub_823BEC10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823befc8
	sub_823BEFC8(ctx, base);
	// li r4,322
	ctx.r4.s64 = 322;
	// lwz r3,236(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 236);
	// bl 0x823cbf70
	sub_823CBF70(ctx, base);
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,236(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 236);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x823c7478
	sub_823C7478(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823bec10
	sub_823BEC10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823befc8
	sub_823BEFC8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82306208
	sub_82306208(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823014BC"))) PPC_WEAK_FUNC(sub_823014BC);
PPC_FUNC_IMPL(__imp__sub_823014BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823014C0"))) PPC_WEAK_FUNC(sub_823014C0);
PPC_FUNC_IMPL(__imp__sub_823014C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lbz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// rlwinm. r11,r11,0,26,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x38;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82301524
	if (cr0.eq) goto loc_82301524;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x82301518
	if (cr6.eq) goto loc_82301518;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// beq cr6,0x8230150c
	if (cr6.eq) goto loc_8230150C;
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// beq cr6,0x82301500
	if (cr6.eq) goto loc_82301500;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r3,6688
	ctx.r3.s64 = 438304768;
	// ori r3,r3,369
	ctx.r3.u64 = ctx.r3.u64 | 369;
	// blr 
	return;
loc_82301500:
	// lis r3,6688
	ctx.r3.s64 = 438304768;
	// ori r3,r3,340
	ctx.r3.u64 = ctx.r3.u64 | 340;
	// blr 
	return;
loc_8230150C:
	// lis r3,6688
	ctx.r3.s64 = 438304768;
	// ori r3,r3,339
	ctx.r3.u64 = ctx.r3.u64 | 339;
	// blr 
	return;
loc_82301518:
	// lis r3,6688
	ctx.r3.s64 = 438304768;
	// ori r3,r3,338
	ctx.r3.u64 = ctx.r3.u64 | 338;
	// blr 
	return;
loc_82301524:
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// beq cr6,0x8230154c
	if (cr6.eq) goto loc_8230154C;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// beq cr6,0x8230154c
	if (cr6.eq) goto loc_8230154C;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// beq cr6,0x82301560
	if (cr6.eq) goto loc_82301560;
	// cmpwi cr6,r10,24
	cr6.compare<int32_t>(ctx.r10.s32, 24, xer);
	// beq cr6,0x82301558
	if (cr6.eq) goto loc_82301558;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_8230154C:
	// lis r3,6184
	ctx.r3.s64 = 405274624;
loc_82301550:
	// ori r3,r3,390
	ctx.r3.u64 = ctx.r3.u64 | 390;
	// blr 
	return;
loc_82301558:
	// lis r3,10280
	ctx.r3.s64 = 673710080;
	// b 0x82301550
	goto loc_82301550;
loc_82301560:
	// lis r3,6184
	ctx.r3.s64 = 405274624;
	// ori r3,r3,323
	ctx.r3.u64 = ctx.r3.u64 | 323;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230156C"))) PPC_WEAK_FUNC(sub_8230156C);
PPC_FUNC_IMPL(__imp__sub_8230156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301570"))) PPC_WEAK_FUNC(sub_82301570);
PPC_FUNC_IMPL(__imp__sub_82301570) {
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
	// lwz r16,1120(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1120);
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
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-6468(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6468);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-6472
	r29.s64 = ctx.r9.s64 + -6472;
	// bne 0x823015dc
	if (!cr0.eq) goto loc_823015DC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-6468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6468, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,1096
	ctx.r4.s64 = r11.s64 + 1096;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_823015DC:
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
	// beq 0x82301604
	if (cr0.eq) goto loc_82301604;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82302830
	sub_82302830(ctx, base);
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// b 0x82301650
	goto loc_82301650;
loc_82301604:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e5088
	sub_821E5088(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82301648
	if (cr6.eq) goto loc_82301648;
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
	// beq 0x82301654
	if (cr0.eq) goto loc_82301654;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82301654
	goto loc_82301654;
loc_82301648:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_82301650:
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
loc_82301654:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82301578"))) PPC_WEAK_FUNC(sub_82301578);
PPC_FUNC_IMPL(__imp__sub_82301578) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-6468(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6468);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-6472
	r29.s64 = ctx.r9.s64 + -6472;
	// bne 0x823015dc
	if (!cr0.eq) goto loc_823015DC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-6468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6468, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,1096
	ctx.r4.s64 = r11.s64 + 1096;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_823015DC:
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
	// beq 0x82301604
	if (cr0.eq) goto loc_82301604;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82302830
	sub_82302830(ctx, base);
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// b 0x82301650
	goto loc_82301650;
loc_82301604:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e5088
	sub_821E5088(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82301648
	if (cr6.eq) goto loc_82301648;
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
	// beq 0x82301654
	if (cr0.eq) goto loc_82301654;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82301654
	goto loc_82301654;
loc_82301648:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_82301650:
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
loc_82301654:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82301660"))) PPC_WEAK_FUNC(sub_82301660);
PPC_FUNC_IMPL(__imp__sub_82301660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-6468
	r11.s64 = r11.s64 + -6468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-6468
	ctx.r10.s64 = ctx.r10.s64 + -6468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82301688"))) PPC_WEAK_FUNC(sub_82301688);
PPC_FUNC_IMPL(__imp__sub_82301688) {
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

__attribute__((alias("__imp__sub_823016B0"))) PPC_WEAK_FUNC(sub_823016B0);
PPC_FUNC_IMPL(__imp__sub_823016B0) {
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
	// addi r30,r29,376
	r30.s64 = r29.s64 + 376;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x823016e4
	goto loc_823016E4;
loc_823016CC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_823016E4:
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
	// bne 0x823016cc
	if (!cr0.eq) goto loc_823016CC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823038c8
	sub_823038C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82301720"))) PPC_WEAK_FUNC(sub_82301720);
PPC_FUNC_IMPL(__imp__sub_82301720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// li r6,13
	ctx.r6.s64 = 13;
	// b 0x82300f20
	sub_82300F20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230173C"))) PPC_WEAK_FUNC(sub_8230173C);
PPC_FUNC_IMPL(__imp__sub_8230173C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301740"))) PPC_WEAK_FUNC(sub_82301740);
PPC_FUNC_IMPL(__imp__sub_82301740) {
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

__attribute__((alias("__imp__sub_82301794"))) PPC_WEAK_FUNC(sub_82301794);
PPC_FUNC_IMPL(__imp__sub_82301794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301798"))) PPC_WEAK_FUNC(sub_82301798);
PPC_FUNC_IMPL(__imp__sub_82301798) {
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
	// b 0x823017c8
	goto loc_823017C8;
loc_823017B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_823017C8:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x823017b8
	if (!cr6.eq) goto loc_823017B8;
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

__attribute__((alias("__imp__sub_823017F0"))) PPC_WEAK_FUNC(sub_823017F0);
PPC_FUNC_IMPL(__imp__sub_823017F0) {
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
	// addi r30,r29,460
	r30.s64 = r29.s64 + 460;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82301828
	goto loc_82301828;
loc_8230180C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82301824
	if (cr0.eq) goto loc_82301824;
	// bl 0x823c42e0
	sub_823C42E0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82301824:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82301828:
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
	// bne 0x8230180c
	if (!cr0.eq) goto loc_8230180C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82301798
	sub_82301798(ctx, base);
	// addi r30,r29,376
	r30.s64 = r29.s64 + 376;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8230186c
	goto loc_8230186C;
loc_82301854:
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
loc_8230186C:
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
	// bne 0x82301854
	if (!cr0.eq) goto loc_82301854;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82305980
	sub_82305980(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82301894"))) PPC_WEAK_FUNC(sub_82301894);
PPC_FUNC_IMPL(__imp__sub_82301894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301898"))) PPC_WEAK_FUNC(sub_82301898);
PPC_FUNC_IMPL(__imp__sub_82301898) {
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
	// bl 0x821e4f28
	sub_821E4F28(ctx, base);
	// addi r31,r31,460
	r31.s64 = r31.s64 + 460;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x823018f0
	goto loc_823018F0;
loc_823018C4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bne cr6,0x823018ec
	if (!cr6.eq) goto loc_823018EC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82301740
	sub_82301740(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x823018f0
	goto loc_823018F0;
loc_823018EC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823018F0:
	// subf r10,r11,r31
	ctx.r10.s64 = r31.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x823018c4
	if (!cr0.eq) goto loc_823018C4;
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

__attribute__((alias("__imp__sub_82301920"))) PPC_WEAK_FUNC(sub_82301920);
PPC_FUNC_IMPL(__imp__sub_82301920) {
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
	// lwz r16,1216(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1216);
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
	// bl 0x821469d0
	sub_821469D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,800
	ctx.r3.s64 = 800;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82301970
	if (cr0.eq) goto loc_82301970;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82308650
	sub_82308650(ctx, base);
	// b 0x82301974
	goto loc_82301974;
loc_82301970:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82301974:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230198c
	if (cr6.eq) goto loc_8230198C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8230198C:
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

__attribute__((alias("__imp__sub_82301928"))) PPC_WEAK_FUNC(sub_82301928);
PPC_FUNC_IMPL(__imp__sub_82301928) {
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
	// bl 0x821469d0
	sub_821469D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,800
	ctx.r3.s64 = 800;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82301970
	if (cr0.eq) goto loc_82301970;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82308650
	sub_82308650(ctx, base);
	// b 0x82301974
	goto loc_82301974;
loc_82301970:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82301974:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230198c
	if (cr6.eq) goto loc_8230198C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8230198C:
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

__attribute__((alias("__imp__sub_823019A0"))) PPC_WEAK_FUNC(sub_823019A0);
PPC_FUNC_IMPL(__imp__sub_823019A0) {
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

__attribute__((alias("__imp__sub_823019C8"))) PPC_WEAK_FUNC(sub_823019C8);
PPC_FUNC_IMPL(__imp__sub_823019C8) {
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
	// lwz r16,1272(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1272);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-5724(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5724);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-5728
	r30.s64 = ctx.r9.s64 + -5728;
	// bne 0x82301a14
	if (!cr0.eq) goto loc_82301A14;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5724(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5724, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-5988
	ctx.r4.s64 = r11.s64 + -5988;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82301A14:
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

__attribute__((alias("__imp__sub_823019D0"))) PPC_WEAK_FUNC(sub_823019D0);
PPC_FUNC_IMPL(__imp__sub_823019D0) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-5724(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5724);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-5728
	r30.s64 = ctx.r9.s64 + -5728;
	// bne 0x82301a14
	if (!cr0.eq) goto loc_82301A14;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5724(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5724, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-5988
	ctx.r4.s64 = r11.s64 + -5988;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82301A14:
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

__attribute__((alias("__imp__sub_82301A28"))) PPC_WEAK_FUNC(sub_82301A28);
PPC_FUNC_IMPL(__imp__sub_82301A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-5724
	r11.s64 = r11.s64 + -5724;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-5724
	ctx.r10.s64 = ctx.r10.s64 + -5724;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82301A50"))) PPC_WEAK_FUNC(sub_82301A50);
PPC_FUNC_IMPL(__imp__sub_82301A50) {
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
	// bl 0x821d9c20
	sub_821D9C20(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1324
	r11.s64 = r11.s64 + 1324;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r10.u32);
	// stb r9,128(r31)
	PPC_STORE_U8(r31.u32 + 128, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_82301AA0"))) PPC_WEAK_FUNC(sub_82301AA0);
PPC_FUNC_IMPL(__imp__sub_82301AA0) {
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
	// bl 0x823019d0
	sub_823019D0(ctx, base);
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

__attribute__((alias("__imp__sub_82301AD0"))) PPC_WEAK_FUNC(sub_82301AD0);
PPC_FUNC_IMPL(__imp__sub_82301AD0) {
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
	// lwz r16,1400(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1400);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-5716(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5716);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-5720
	r30.s64 = ctx.r9.s64 + -5720;
	// bne 0x82301b1c
	if (!cr0.eq) goto loc_82301B1C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5716, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,29728
	ctx.r4.s64 = r11.s64 + 29728;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82301B1C:
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

__attribute__((alias("__imp__sub_82301AD8"))) PPC_WEAK_FUNC(sub_82301AD8);
PPC_FUNC_IMPL(__imp__sub_82301AD8) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-5716(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5716);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-5720
	r30.s64 = ctx.r9.s64 + -5720;
	// bne 0x82301b1c
	if (!cr0.eq) goto loc_82301B1C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5716, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,29728
	ctx.r4.s64 = r11.s64 + 29728;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82301B1C:
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

__attribute__((alias("__imp__sub_82301B30"))) PPC_WEAK_FUNC(sub_82301B30);
PPC_FUNC_IMPL(__imp__sub_82301B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-5716
	r11.s64 = r11.s64 + -5716;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-5716
	ctx.r10.s64 = ctx.r10.s64 + -5716;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82301B58"))) PPC_WEAK_FUNC(sub_82301B58);
PPC_FUNC_IMPL(__imp__sub_82301B58) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,368
	ctx.r3.s64 = 368;
	// b 0x823567c0
	sub_823567C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82301B64"))) PPC_WEAK_FUNC(sub_82301B64);
PPC_FUNC_IMPL(__imp__sub_82301B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301B68"))) PPC_WEAK_FUNC(sub_82301B68);
PPC_FUNC_IMPL(__imp__sub_82301B68) {
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
	// lwz r16,1464(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1464);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-5708(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5708);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-5712
	r30.s64 = ctx.r9.s64 + -5712;
	// bne 0x82301bb4
	if (!cr0.eq) goto loc_82301BB4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5708(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5708, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-21304
	ctx.r4.s64 = r11.s64 + -21304;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82301BB4:
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

__attribute__((alias("__imp__sub_82301B70"))) PPC_WEAK_FUNC(sub_82301B70);
PPC_FUNC_IMPL(__imp__sub_82301B70) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-5708(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5708);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-5712
	r30.s64 = ctx.r9.s64 + -5712;
	// bne 0x82301bb4
	if (!cr0.eq) goto loc_82301BB4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5708(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5708, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-21304
	ctx.r4.s64 = r11.s64 + -21304;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82301BB4:
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

__attribute__((alias("__imp__sub_82301BC8"))) PPC_WEAK_FUNC(sub_82301BC8);
PPC_FUNC_IMPL(__imp__sub_82301BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-5708
	r11.s64 = r11.s64 + -5708;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-5708
	ctx.r10.s64 = ctx.r10.s64 + -5708;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82301BF0"))) PPC_WEAK_FUNC(sub_82301BF0);
PPC_FUNC_IMPL(__imp__sub_82301BF0) {
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
	// lwz r16,1520(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1520);
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
	// bl 0x8214fa68
	sub_8214FA68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,164
	ctx.r3.s64 = 164;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82301c3c
	if (cr0.eq) goto loc_82301C3C;
	// bl 0x823098e8
	sub_823098E8(ctx, base);
	// b 0x82301c40
	goto loc_82301C40;
loc_82301C3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82301C40:
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

__attribute__((alias("__imp__sub_82301BF8"))) PPC_WEAK_FUNC(sub_82301BF8);
PPC_FUNC_IMPL(__imp__sub_82301BF8) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8214fa68
	sub_8214FA68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,164
	ctx.r3.s64 = 164;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82301c3c
	if (cr0.eq) goto loc_82301C3C;
	// bl 0x823098e8
	sub_823098E8(ctx, base);
	// b 0x82301c40
	goto loc_82301C40;
loc_82301C3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82301C40:
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

__attribute__((alias("__imp__sub_82301C54"))) PPC_WEAK_FUNC(sub_82301C54);
PPC_FUNC_IMPL(__imp__sub_82301C54) {
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

__attribute__((alias("__imp__sub_82301C7C"))) PPC_WEAK_FUNC(sub_82301C7C);
PPC_FUNC_IMPL(__imp__sub_82301C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301C80"))) PPC_WEAK_FUNC(sub_82301C80);
PPC_FUNC_IMPL(__imp__sub_82301C80) {
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
	// lwz r16,1576(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1576);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-5700(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5700);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-5704
	r30.s64 = ctx.r9.s64 + -5704;
	// bne 0x82301ccc
	if (!cr0.eq) goto loc_82301CCC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5700, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-960
	ctx.r4.s64 = r11.s64 + -960;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82301CCC:
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

__attribute__((alias("__imp__sub_82301C88"))) PPC_WEAK_FUNC(sub_82301C88);
PPC_FUNC_IMPL(__imp__sub_82301C88) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-5700(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5700);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-5704
	r30.s64 = ctx.r9.s64 + -5704;
	// bne 0x82301ccc
	if (!cr0.eq) goto loc_82301CCC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5700, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-960
	ctx.r4.s64 = r11.s64 + -960;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82301CCC:
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

__attribute__((alias("__imp__sub_82301CE0"))) PPC_WEAK_FUNC(sub_82301CE0);
PPC_FUNC_IMPL(__imp__sub_82301CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-5700
	r11.s64 = r11.s64 + -5700;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-5700
	ctx.r10.s64 = ctx.r10.s64 + -5700;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82301D08"))) PPC_WEAK_FUNC(sub_82301D08);
PPC_FUNC_IMPL(__imp__sub_82301D08) {
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
	// lwz r16,1632(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1632);
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
	// bl 0x821e1000
	sub_821E1000(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,344
	ctx.r3.s64 = 344;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82301d54
	if (cr0.eq) goto loc_82301D54;
	// bl 0x8230bb58
	sub_8230BB58(ctx, base);
	// b 0x82301d58
	goto loc_82301D58;
loc_82301D54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82301D58:
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

__attribute__((alias("__imp__sub_82301D10"))) PPC_WEAK_FUNC(sub_82301D10);
PPC_FUNC_IMPL(__imp__sub_82301D10) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821e1000
	sub_821E1000(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,344
	ctx.r3.s64 = 344;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82301d54
	if (cr0.eq) goto loc_82301D54;
	// bl 0x8230bb58
	sub_8230BB58(ctx, base);
	// b 0x82301d58
	goto loc_82301D58;
loc_82301D54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82301D58:
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

__attribute__((alias("__imp__sub_82301D6C"))) PPC_WEAK_FUNC(sub_82301D6C);
PPC_FUNC_IMPL(__imp__sub_82301D6C) {
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

__attribute__((alias("__imp__sub_82301D94"))) PPC_WEAK_FUNC(sub_82301D94);
PPC_FUNC_IMPL(__imp__sub_82301D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301D98"))) PPC_WEAK_FUNC(sub_82301D98);
PPC_FUNC_IMPL(__imp__sub_82301D98) {
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
	// lwz r16,1688(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1688);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-5692(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5692);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-5696
	r30.s64 = ctx.r9.s64 + -5696;
	// bne 0x82301de4
	if (!cr0.eq) goto loc_82301DE4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5692, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-384
	ctx.r4.s64 = r11.s64 + -384;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82301DE4:
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

__attribute__((alias("__imp__sub_82301DA0"))) PPC_WEAK_FUNC(sub_82301DA0);
PPC_FUNC_IMPL(__imp__sub_82301DA0) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-5692(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5692);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-5696
	r30.s64 = ctx.r9.s64 + -5696;
	// bne 0x82301de4
	if (!cr0.eq) goto loc_82301DE4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5692, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-384
	ctx.r4.s64 = r11.s64 + -384;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82301DE4:
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

__attribute__((alias("__imp__sub_82301DF8"))) PPC_WEAK_FUNC(sub_82301DF8);
PPC_FUNC_IMPL(__imp__sub_82301DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-5692
	r11.s64 = r11.s64 + -5692;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-5692
	ctx.r10.s64 = ctx.r10.s64 + -5692;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82301E20"))) PPC_WEAK_FUNC(sub_82301E20);
PPC_FUNC_IMPL(__imp__sub_82301E20) {
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
	// lwz r16,1744(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1744);
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
	// bl 0x821e14c8
	sub_821E14C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,152
	ctx.r3.s64 = 152;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82301e70
	if (cr0.eq) goto loc_82301E70;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8230c930
	sub_8230C930(ctx, base);
	// b 0x82301e74
	goto loc_82301E74;
loc_82301E70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82301E74:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82301e8c
	if (cr6.eq) goto loc_82301E8C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82301E8C:
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

__attribute__((alias("__imp__sub_82301E28"))) PPC_WEAK_FUNC(sub_82301E28);
PPC_FUNC_IMPL(__imp__sub_82301E28) {
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
	// bl 0x821e14c8
	sub_821E14C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,152
	ctx.r3.s64 = 152;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82301e70
	if (cr0.eq) goto loc_82301E70;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8230c930
	sub_8230C930(ctx, base);
	// b 0x82301e74
	goto loc_82301E74;
loc_82301E70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82301E74:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82301e8c
	if (cr6.eq) goto loc_82301E8C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82301E8C:
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

__attribute__((alias("__imp__sub_82301EA0"))) PPC_WEAK_FUNC(sub_82301EA0);
PPC_FUNC_IMPL(__imp__sub_82301EA0) {
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

__attribute__((alias("__imp__sub_82301EC8"))) PPC_WEAK_FUNC(sub_82301EC8);
PPC_FUNC_IMPL(__imp__sub_82301EC8) {
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
	// lwz r16,1800(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1800);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-5684(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5684);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-5688
	r30.s64 = ctx.r9.s64 + -5688;
	// bne 0x82301f14
	if (!cr0.eq) goto loc_82301F14;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5684, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-13896
	ctx.r4.s64 = r11.s64 + -13896;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82301F14:
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

__attribute__((alias("__imp__sub_82301ED0"))) PPC_WEAK_FUNC(sub_82301ED0);
PPC_FUNC_IMPL(__imp__sub_82301ED0) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-5684(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5684);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-5688
	r30.s64 = ctx.r9.s64 + -5688;
	// bne 0x82301f14
	if (!cr0.eq) goto loc_82301F14;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5684, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-13896
	ctx.r4.s64 = r11.s64 + -13896;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82301F14:
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

__attribute__((alias("__imp__sub_82301F28"))) PPC_WEAK_FUNC(sub_82301F28);
PPC_FUNC_IMPL(__imp__sub_82301F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-5684
	r11.s64 = r11.s64 + -5684;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-5684
	ctx.r10.s64 = ctx.r10.s64 + -5684;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82301F50"))) PPC_WEAK_FUNC(sub_82301F50);
PPC_FUNC_IMPL(__imp__sub_82301F50) {
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
	// lwz r16,1856(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1856);
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
	// bl 0x821e16e8
	sub_821E16E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,764
	ctx.r3.s64 = 764;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82301fa0
	if (cr0.eq) goto loc_82301FA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8230cf10
	sub_8230CF10(ctx, base);
	// b 0x82301fa4
	goto loc_82301FA4;
loc_82301FA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82301FA4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82301fbc
	if (cr6.eq) goto loc_82301FBC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82301FBC:
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

__attribute__((alias("__imp__sub_82301F58"))) PPC_WEAK_FUNC(sub_82301F58);
PPC_FUNC_IMPL(__imp__sub_82301F58) {
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
	// bl 0x821e16e8
	sub_821E16E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,764
	ctx.r3.s64 = 764;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82301fa0
	if (cr0.eq) goto loc_82301FA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8230cf10
	sub_8230CF10(ctx, base);
	// b 0x82301fa4
	goto loc_82301FA4;
loc_82301FA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82301FA4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82301fbc
	if (cr6.eq) goto loc_82301FBC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82301FBC:
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

__attribute__((alias("__imp__sub_82301FD0"))) PPC_WEAK_FUNC(sub_82301FD0);
PPC_FUNC_IMPL(__imp__sub_82301FD0) {
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

__attribute__((alias("__imp__sub_82301FF8"))) PPC_WEAK_FUNC(sub_82301FF8);
PPC_FUNC_IMPL(__imp__sub_82301FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r9,r5,26
	ctx.r9.u64 = ctx.r5.u32 & 0x3F;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// blt cr6,0x82302014
	if (cr6.lt) goto loc_82302014;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
loc_82302014:
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bne cr6,0x82302020
	if (!cr6.eq) goto loc_82302020;
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
loc_82302020:
	// addi r11,r11,79
	r11.s64 = r11.s64 + 79;
	// li r7,80
	ctx.r7.s64 = 80;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// divwu r7,r11,r7
	ctx.r7.u32 = r11.u32 / ctx.r7.u32;
	// rlwinm r11,r10,0,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// mulli r10,r7,80
	ctx.r10.s64 = ctx.r7.s64 * 80;
	// cmpwi cr6,r9,21
	cr6.compare<int32_t>(ctx.r9.s32, 21, xer);
	// beq cr6,0x82302050
	if (cr6.eq) goto loc_82302050;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x82302050
	if (cr6.eq) goto loc_82302050;
	// cmpwi cr6,r9,37
	cr6.compare<int32_t>(ctx.r9.s32, 37, xer);
	// bne cr6,0x82302054
	if (!cr6.eq) goto loc_82302054;
loc_82302050:
	// li r8,8
	ctx.r8.s64 = 8;
loc_82302054:
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// li r10,5120
	ctx.r10.s64 = 5120;
	// divwu r3,r11,r10
	ctx.r3.u32 = r11.u32 / ctx.r10.u32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82302068"))) PPC_WEAK_FUNC(sub_82302068);
PPC_FUNC_IMPL(__imp__sub_82302068) {
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
	// lwz r3,592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 592);
	// bl 0x823c3b70
	sub_823C3B70(ctx, base);
	// lwz r3,592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 592);
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

__attribute__((alias("__imp__sub_8230209C"))) PPC_WEAK_FUNC(sub_8230209C);
PPC_FUNC_IMPL(__imp__sub_8230209C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823020A0"))) PPC_WEAK_FUNC(sub_823020A0);
PPC_FUNC_IMPL(__imp__sub_823020A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 724);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r3,236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823020B8"))) PPC_WEAK_FUNC(sub_823020B8);
PPC_FUNC_IMPL(__imp__sub_823020B8) {
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
	// bl 0x823017f0
	sub_823017F0(ctx, base);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823020e8
	if (cr0.eq) goto loc_823020E8;
	// bl 0x823c6c28
	sub_823C6C28(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r11.u32);
loc_823020E8:
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

__attribute__((alias("__imp__sub_823020FC"))) PPC_WEAK_FUNC(sub_823020FC);
PPC_FUNC_IMPL(__imp__sub_823020FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302100"))) PPC_WEAK_FUNC(sub_82302100);
PPC_FUNC_IMPL(__imp__sub_82302100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-1696(r1)
	ea = -1696 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-24112
	ctx.r4.s64 = r11.s64 + -24112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1908
	ctx.r4.s64 = r11.s64 + 1908;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823021f4
	if (cr0.eq) goto loc_823021F4;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r31,0
	r31.s64 = 0;
	// lfs f30,1904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1904);
	f30.f64 = double(temp.f32);
	// lfs f31,26488(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26488);
	f31.f64 = double(temp.f32);
loc_82302180:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r31,r10,16
	r31.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,624
	ctx.r8.s64 = ctx.r1.s64 + 624;
	// addi r7,r1,1136
	ctx.r7.s64 = ctx.r1.s64 + 1136;
	// cmplwi cr6,r31,256
	cr6.compare<uint32_t>(r31.u32, 256, xer);
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// rlwinm r10,r10,6,16,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFC0;
	// sthx r10,r11,r9
	PPC_STORE_U16(r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// sthx r10,r11,r8
	PPC_STORE_U16(r11.u32 + ctx.r8.u32, ctx.r10.u16);
	// sthx r10,r11,r7
	PPC_STORE_U16(r11.u32 + ctx.r7.u32, ctx.r10.u16);
	// blt cr6,0x82302180
	if (cr6.lt) goto loc_82302180;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c00e0
	sub_823C00E0(ctx, base);
loc_823021F4:
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
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

__attribute__((alias("__imp__sub_82302214"))) PPC_WEAK_FUNC(sub_82302214);
PPC_FUNC_IMPL(__imp__sub_82302214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302218"))) PPC_WEAK_FUNC(sub_82302218);
PPC_FUNC_IMPL(__imp__sub_82302218) {
	PPC_FUNC_PROLOGUE();
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r31,604
	ctx.r6.s64 = r31.s64 + 604;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,600(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 600);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x823d0188
	sub_823D0188(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,552(r31)
	PPC_STORE_U8(r31.u32 + 552, r11.u8);
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

__attribute__((alias("__imp__sub_82302288"))) PPC_WEAK_FUNC(sub_82302288);
PPC_FUNC_IMPL(__imp__sub_82302288) {
	PPC_FUNC_PROLOGUE();
	// b 0x821e1d40
	sub_821E1D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230228C"))) PPC_WEAK_FUNC(sub_8230228C);
PPC_FUNC_IMPL(__imp__sub_8230228C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302290"))) PPC_WEAK_FUNC(sub_82302290);
PPC_FUNC_IMPL(__imp__sub_82302290) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,236(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// li r30,1
	r30.s64 = 1;
	// bl 0x823c00a0
	sub_823C00A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823022ec
	if (cr0.eq) goto loc_823022EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bd480
	sub_823BD480(ctx, base);
	// lis r11,11552
	r11.s64 = 757071872;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r11,r11,406
	r11.u64 = r11.u64 | 406;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r30,r11,1
	r30.u64 = r11.u64 ^ 1;
	// bl 0x823c3be8
	sub_823C3BE8(ctx, base);
loc_823022EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_82302308"))) PPC_WEAK_FUNC(sub_82302308);
PPC_FUNC_IMPL(__imp__sub_82302308) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32140
	r27.s64 = -2106327040;
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r8,27124(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 27124);
	// lwz r10,-5568(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5568);
	// extsw r11,r8
	r11.s64 = ctx.r8.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq 0x823023f8
	if (cr0.eq) goto loc_823023F8;
	// clrlwi. r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-5624
	r11.s64 = r11.s64 + -5624;
	// bne 0x82302480
	if (!cr0.eq) goto loc_82302480;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,-5568(r9)
	PPC_STORE_U32(ctx.r9.u32 + -5568, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f13,-14524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14524);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f13,1924(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1924);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfs f13,31836(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31836);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lfs f13,-14528(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14528);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stfs f13,36(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lfs f13,1920(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1920);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// lfs f0,1916(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1916);
	f0.f64 = double(temp.f32);
	// b 0x8230247c
	goto loc_8230247C;
loc_823023F8:
	// rlwinm. r11,r10,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-5680
	r11.s64 = r11.s64 + -5680;
	// bne 0x82302480
	if (!cr0.eq) goto loc_82302480;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,-5568(r9)
	PPC_STORE_U32(ctx.r9.u32 + -5568, ctx.r10.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-14524(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14524);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,1924(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1924);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f13,31836(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31836);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lfs f13,-14528(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14528);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// lfs f13,1920(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1920);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// lfs f13,1916(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1916);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
loc_8230247C:
	// stfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
loc_82302480:
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r28,r10,-5540
	r28.s64 = ctx.r10.s64 + -5540;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// stw r8,36(r28)
	PPC_STORE_U32(r28.u32 + 36, ctx.r8.u32);
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// lfs f0,27120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27120);
	f0.f64 = double(temp.f32);
	// fdivs f31,f0,f12
	f31.f64 = double(float(f0.f64 / ctx.f12.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f30,f0,f13
	f30.f64 = double(float(f0.f64 / ctx.f13.f64));
	// beq cr6,0x82302534
	if (cr6.eq) goto loc_82302534;
	// li r31,47
	r31.s64 = 47;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_823024D8:
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-16
	ctx.r4.s64 = r31.s64 + -16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x823065a8
	sub_823065A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823063c8
	sub_823063C8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,27124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 27124);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r10,r31,-47
	ctx.r10.s64 = r31.s64 + -47;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x823024d8
	if (cr6.lt) goto loc_823024D8;
loc_82302534:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82302544"))) PPC_WEAK_FUNC(sub_82302544);
PPC_FUNC_IMPL(__imp__sub_82302544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302548"))) PPC_WEAK_FUNC(sub_82302548);
PPC_FUNC_IMPL(__imp__sub_82302548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x821ea108
	sub_821EA108(ctx, base);
	// lfs f31,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	f31.f64 = double(temp.f32);
	// bl 0x821ea108
	sub_821EA108(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// lfs f0,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	f0.f64 = double(temp.f32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	f0.f64 = double(temp.f32);
	// lfs f13,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	f0.f64 = double(temp.f32);
	// lfs f13,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// beq cr6,0x82302634
	if (cr6.eq) goto loc_82302634;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r1,100
	r31.s64 = ctx.r1.s64 + 100;
	// addi r29,r11,-5540
	r29.s64 = r11.s64 + -5540;
loc_823025E4:
	// lfs f0,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -4);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f13,f31
	f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r30,92
	ctx.r4.s64 = r30.s64 + 92;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f12,f31
	f0.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82306468
	sub_82306468(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// blt cr6,0x823025e4
	if (cr6.lt) goto loc_823025E4;
	// b 0x82302668
	goto loc_82302668;
loc_82302634:
	// addi r31,r11,-5540
	r31.s64 = r11.s64 + -5540;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82306468
	sub_82306468(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82306468
	sub_82306468(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82306468
	sub_82306468(ctx, base);
loc_82302668:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82302674"))) PPC_WEAK_FUNC(sub_82302674);
PPC_FUNC_IMPL(__imp__sub_82302674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302678"))) PPC_WEAK_FUNC(sub_82302678);
PPC_FUNC_IMPL(__imp__sub_82302678) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821ea108
	sub_821EA108(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-5540
	ctx.r3.s64 = ctx.r10.s64 + -5540;
	// li r4,80
	ctx.r4.s64 = 80;
	// lfs f12,236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 244);
	f0.f64 = double(temp.f32);
	// lfs f13,240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82306658
	sub_82306658(ctx, base);
	// lwz r10,588(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// bne 0x823026f0
	if (!cr0.eq) goto loc_823026F0;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_823026F0:
	// lis r6,2
	ctx.r6.s64 = 131072;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bd580
	sub_823BD580(ctx, base);
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

__attribute__((alias("__imp__sub_82302714"))) PPC_WEAK_FUNC(sub_82302714);
PPC_FUNC_IMPL(__imp__sub_82302714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302718"))) PPC_WEAK_FUNC(sub_82302718);
PPC_FUNC_IMPL(__imp__sub_82302718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,704(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 704);
	f0.f64 = double(temp.f32);
	// stfs f0,688(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 688, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82302724"))) PPC_WEAK_FUNC(sub_82302724);
PPC_FUNC_IMPL(__imp__sub_82302724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302728"))) PPC_WEAK_FUNC(sub_82302728);
PPC_FUNC_IMPL(__imp__sub_82302728) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f11.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f3,f11
	cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// bgt cr6,0x82302740
	if (cr6.gt) goto loc_82302740;
	// li r11,0
	r11.s64 = 0;
loc_82302740:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stfs f3,684(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 684, temp.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r10,476(r3)
	PPC_STORE_U8(ctx.r3.u32 + 476, ctx.r10.u8);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// bgt cr6,0x82302760
	if (cr6.gt) goto loc_82302760;
	// fmr f2,f0
	ctx.f2.f64 = f0.f64;
loc_82302760:
	// lfs f13,692(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 692);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,696(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 696);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82302778
	if (!cr6.lt) goto loc_82302778;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
	// b 0x82302788
	goto loc_82302788;
loc_82302778:
	// fdivs f12,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f0.f64 / ctx.f1.f64));
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fnmsubs f0,f12,f13,f0
	f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - f0.f64)));
	// fdivs f0,f0,f10
	f0.f64 = double(float(f0.f64 / ctx.f10.f64));
loc_82302788:
	// fnmsubs f12,f1,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(-(ctx.f1.f64 * ctx.f2.f64 - ctx.f1.f64)));
	// stfs f0,676(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 676, temp.u32);
	// lfs f0,692(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 692);
	f0.f64 = double(temp.f32);
	// lfs f13,696(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 696);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x823027a8
	if (!cr6.lt) goto loc_823027A8;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
	// b 0x823027b8
	goto loc_823027B8;
loc_823027A8:
	// fdivs f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fnmsubs f0,f12,f0,f13
	f0.f64 = double(float(-(ctx.f12.f64 * f0.f64 - ctx.f13.f64)));
	// fdivs f0,f0,f10
	f0.f64 = double(float(f0.f64 / ctx.f10.f64));
loc_823027B8:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stfs f0,680(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 680, temp.u32);
	// stfs f11,700(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 700, temp.u32);
	// lfs f0,1932(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 1932);
	f0.f64 = double(temp.f32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stfs f0,692(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 692, temp.u32);
	// lfs f13,1928(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 1928);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,696(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 696, temp.u32);
	// lwa r10,60(r3)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 60));
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lwa r11,64(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 64));
	// stfs f11,716(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 716, temp.u32);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,-16(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,708(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 708, temp.u32);
	// lfd f13,-8(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,712(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 712, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82302820"))) PPC_WEAK_FUNC(sub_82302820);
PPC_FUNC_IMPL(__imp__sub_82302820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,476(r3)
	PPC_STORE_U8(ctx.r3.u32 + 476, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230282C"))) PPC_WEAK_FUNC(sub_8230282C);
PPC_FUNC_IMPL(__imp__sub_8230282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302830"))) PPC_WEAK_FUNC(sub_82302830);
PPC_FUNC_IMPL(__imp__sub_82302830) {
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
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82302868
	if (cr0.eq) goto loc_82302868;
	// lbz r11,672(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 672);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82302860
	if (!cr0.eq) goto loc_82302860;
	// bl 0x823c6cd0
	sub_823C6CD0(ctx, base);
loc_82302860:
	// li r11,1
	r11.s64 = 1;
	// stb r11,672(r31)
	PPC_STORE_U8(r31.u32 + 672, r11.u8);
loc_82302868:
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

__attribute__((alias("__imp__sub_8230287C"))) PPC_WEAK_FUNC(sub_8230287C);
PPC_FUNC_IMPL(__imp__sub_8230287C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302880"))) PPC_WEAK_FUNC(sub_82302880);
PPC_FUNC_IMPL(__imp__sub_82302880) {
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
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823028b8
	if (cr0.eq) goto loc_823028B8;
	// lbz r11,672(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 672);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823028b0
	if (cr0.eq) goto loc_823028B0;
	// bl 0x823c6d68
	sub_823C6D68(ctx, base);
loc_823028B0:
	// li r11,0
	r11.s64 = 0;
	// stb r11,672(r31)
	PPC_STORE_U8(r31.u32 + 672, r11.u8);
loc_823028B8:
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

__attribute__((alias("__imp__sub_823028CC"))) PPC_WEAK_FUNC(sub_823028CC);
PPC_FUNC_IMPL(__imp__sub_823028CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823028D0"))) PPC_WEAK_FUNC(sub_823028D0);
PPC_FUNC_IMPL(__imp__sub_823028D0) {
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
	// beq 0x82302910
	if (cr0.eq) goto loc_82302910;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,27128
	ctx.r3.s64 = r11.s64 + 27128;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82302918
	goto loc_82302918;
loc_82302910:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82302918:
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

__attribute__((alias("__imp__sub_82302934"))) PPC_WEAK_FUNC(sub_82302934);
PPC_FUNC_IMPL(__imp__sub_82302934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302938"))) PPC_WEAK_FUNC(sub_82302938);
PPC_FUNC_IMPL(__imp__sub_82302938) {
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
	// beq 0x82302978
	if (cr0.eq) goto loc_82302978;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,27188
	ctx.r3.s64 = r11.s64 + 27188;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82302980
	goto loc_82302980;
loc_82302978:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82302980:
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

__attribute__((alias("__imp__sub_8230299C"))) PPC_WEAK_FUNC(sub_8230299C);
PPC_FUNC_IMPL(__imp__sub_8230299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823029A0"))) PPC_WEAK_FUNC(sub_823029A0);
PPC_FUNC_IMPL(__imp__sub_823029A0) {
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
	// beq 0x823029e0
	if (cr0.eq) goto loc_823029E0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,27216
	ctx.r3.s64 = r11.s64 + 27216;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823029e8
	goto loc_823029E8;
loc_823029E0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_823029E8:
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

__attribute__((alias("__imp__sub_82302A04"))) PPC_WEAK_FUNC(sub_82302A04);
PPC_FUNC_IMPL(__imp__sub_82302A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302A08"))) PPC_WEAK_FUNC(sub_82302A08);
PPC_FUNC_IMPL(__imp__sub_82302A08) {
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
	// lwz r16,1944(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1944);
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
	// bl 0x821d9ce0
	sub_821D9CE0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,132
	ctx.r3.s64 = 132;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82302a54
	if (cr0.eq) goto loc_82302A54;
	// bl 0x82301a50
	sub_82301A50(ctx, base);
	// b 0x82302a58
	goto loc_82302A58;
loc_82302A54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82302A58:
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

__attribute__((alias("__imp__sub_82302A10"))) PPC_WEAK_FUNC(sub_82302A10);
PPC_FUNC_IMPL(__imp__sub_82302A10) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821d9ce0
	sub_821D9CE0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,132
	ctx.r3.s64 = 132;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82302a54
	if (cr0.eq) goto loc_82302A54;
	// bl 0x82301a50
	sub_82301A50(ctx, base);
	// b 0x82302a58
	goto loc_82302A58;
loc_82302A54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82302A58:
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

__attribute__((alias("__imp__sub_82302A6C"))) PPC_WEAK_FUNC(sub_82302A6C);
PPC_FUNC_IMPL(__imp__sub_82302A6C) {
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

__attribute__((alias("__imp__sub_82302A94"))) PPC_WEAK_FUNC(sub_82302A94);
PPC_FUNC_IMPL(__imp__sub_82302A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302A98"))) PPC_WEAK_FUNC(sub_82302A98);
PPC_FUNC_IMPL(__imp__sub_82302A98) {
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
	// lwz r16,2000(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2000);
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r11,-5560(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5560);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82302b1c
	if (!cr0.eq) goto loc_82302B1C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5560, r11.u32);
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
	// bl 0x823019d0
	sub_823019D0(ctx, base);
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
	// stw r3,-5564(r28)
	PPC_STORE_U32(r28.u32 + -5564, ctx.r3.u32);
	// b 0x82302b20
	goto loc_82302B20;
loc_82302B1C:
	// lwz r3,-5564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -5564);
loc_82302B20:
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
	// beq 0x82302b50
	if (cr0.eq) goto loc_82302B50;
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
	// b 0x82302b98
	goto loc_82302B98;
loc_82302B50:
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
	// bne 0x82302b8c
	if (!cr0.eq) goto loc_82302B8C;
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
loc_82302B8C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82302B98:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82302AA0"))) PPC_WEAK_FUNC(sub_82302AA0);
PPC_FUNC_IMPL(__imp__sub_82302AA0) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r11,-5560(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5560);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82302b1c
	if (!cr0.eq) goto loc_82302B1C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5560, r11.u32);
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
	// bl 0x823019d0
	sub_823019D0(ctx, base);
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
	// stw r3,-5564(r28)
	PPC_STORE_U32(r28.u32 + -5564, ctx.r3.u32);
	// b 0x82302b20
	goto loc_82302B20;
loc_82302B1C:
	// lwz r3,-5564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -5564);
loc_82302B20:
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
	// beq 0x82302b50
	if (cr0.eq) goto loc_82302B50;
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
	// b 0x82302b98
	goto loc_82302B98;
loc_82302B50:
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
	// bne 0x82302b8c
	if (!cr0.eq) goto loc_82302B8C;
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
loc_82302B8C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82302B98:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82302BA4"))) PPC_WEAK_FUNC(sub_82302BA4);
PPC_FUNC_IMPL(__imp__sub_82302BA4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-5560
	r11.s64 = r11.s64 + -5560;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-5560
	ctx.r10.s64 = ctx.r10.s64 + -5560;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82302BCC"))) PPC_WEAK_FUNC(sub_82302BCC);
PPC_FUNC_IMPL(__imp__sub_82302BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302BD0"))) PPC_WEAK_FUNC(sub_82302BD0);
PPC_FUNC_IMPL(__imp__sub_82302BD0) {
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
	// bl 0x821d9ed0
	sub_821D9ED0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82302c00
	if (cr0.eq) goto loc_82302C00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_82302C00:
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

__attribute__((alias("__imp__sub_82302C1C"))) PPC_WEAK_FUNC(sub_82302C1C);
PPC_FUNC_IMPL(__imp__sub_82302C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302C20"))) PPC_WEAK_FUNC(sub_82302C20);
PPC_FUNC_IMPL(__imp__sub_82302C20) {
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
	// lwz r16,2072(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2072);
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r4,368
	ctx.r4.s64 = 368;
	// addi r5,r11,1448
	ctx.r5.s64 = r11.s64 + 1448;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82302c68
	if (cr0.eq) goto loc_82302C68;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8230d738
	sub_8230D738(ctx, base);
	// b 0x82302c6c
	goto loc_82302C6C;
loc_82302C68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82302C6C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302c84
	if (cr6.eq) goto loc_82302C84;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82302C84:
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

__attribute__((alias("__imp__sub_82302C28"))) PPC_WEAK_FUNC(sub_82302C28);
PPC_FUNC_IMPL(__imp__sub_82302C28) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r4,368
	ctx.r4.s64 = 368;
	// addi r5,r11,1448
	ctx.r5.s64 = r11.s64 + 1448;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82302c68
	if (cr0.eq) goto loc_82302C68;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8230d738
	sub_8230D738(ctx, base);
	// b 0x82302c6c
	goto loc_82302C6C;
loc_82302C68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82302C6C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302c84
	if (cr6.eq) goto loc_82302C84;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82302C84:
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

__attribute__((alias("__imp__sub_82302C98"))) PPC_WEAK_FUNC(sub_82302C98);
PPC_FUNC_IMPL(__imp__sub_82302C98) {
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
	// bl 0x82301b58
	sub_82301B58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82302CC0"))) PPC_WEAK_FUNC(sub_82302CC0);
PPC_FUNC_IMPL(__imp__sub_82302CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r4,196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 196, ctx.r4.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne 0x82302cd4
	if (!cr0.eq) goto loc_82302CD4;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
loc_82302CD4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-6464
	r11.s64 = r11.s64 + -6464;
	// lwz r10,724(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 724);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82302cec
	if (!cr6.eq) goto loc_82302CEC;
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 236);
loc_82302CEC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x823bf2c0
	sub_823BF2C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82302CF4"))) PPC_WEAK_FUNC(sub_82302CF4);
PPC_FUNC_IMPL(__imp__sub_82302CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302CF8"))) PPC_WEAK_FUNC(sub_82302CF8);
PPC_FUNC_IMPL(__imp__sub_82302CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x8239bcd0
	// addi r12,r1,-120
	r12.s64 = ctx.r1.s64 + -120;
	// bl 0x8239d5dc
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// ld r11,0(r18)
	r11.u64 = PPC_LOAD_U64(r18.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// beq cr6,0x82302f9c
	if (cr6.eq) goto loc_82302F9C;
	// lbz r11,0(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82302f9c
	if (cr6.eq) goto loc_82302F9C;
	// lwz r3,724(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 724);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82302d44
	if (!cr0.eq) goto loc_82302D44;
	// lwz r3,236(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 236);
loc_82302D44:
	// li r4,66
	ctx.r4.s64 = 66;
	// bl 0x823cbf70
	sub_823CBF70(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r23,r11,-5540
	r23.s64 = r11.s64 + -5540;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823062a0
	sub_823062A0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lfs f27,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f27.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f27,96(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f27,116(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f27,136(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x823062f8
	sub_823062F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82306be8
	sub_82306BE8(ctx, base);
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82308098
	sub_82308098(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r21,r11,-6464
	r21.s64 = r11.s64 + -6464;
	// lwz r11,724(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82302df0
	if (!cr6.eq) goto loc_82302DF0;
	// lwz r11,236(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 236);
loc_82302DF0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bec10
	sub_823BEC10(ctx, base);
	// lbz r11,0(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f31.f64 = double(temp.f32);
	// li r22,0
	r22.s64 = 0;
	// lfs f25,-27468(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	f25.f64 = double(temp.f32);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82302f5c
	if (cr0.eq) goto loc_82302F5C;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f26,2120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2120);
	f26.f64 = double(temp.f32);
	// lfs f28,-1472(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1472);
	f28.f64 = double(temp.f32);
	// lfs f29,-27456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	f29.f64 = double(temp.f32);
loc_82302E34:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x82302e4c
	if (!cr6.eq) goto loc_82302E4C;
	// lfs f30,0(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r18.u32 + 0);
	f30.f64 = double(temp.f32);
	// fadds f31,f31,f25
	f31.f64 = double(float(f31.f64 + f25.f64));
	// li r22,0
	r22.s64 = 0;
	// b 0x82302f4c
	goto loc_82302F4C;
loc_82302E4C:
	// li r22,1
	r22.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82302f48
	if (!cr6.gt) goto loc_82302F48;
	// lwz r10,192(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 192);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// lha r8,8(r10)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 8));
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bge cr6,0x82302f48
	if (!cr6.lt) goto loc_82302F48;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r26,r11,r10
	r26.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lha r11,8(r26)
	r11.s64 = int16_t(PPC_LOAD_U16(r26.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82302f48
	if (!cr0.gt) goto loc_82302F48;
	// li r25,0
	r25.s64 = 0;
loc_82302E90:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// lwzx r30,r11,r25
	r30.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82302f10
	if (!cr0.gt) goto loc_82302F10;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r1,228
	r31.s64 = ctx.r1.s64 + 228;
loc_82302EB4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmadds f0,f1,f29,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f29.f64 + f30.f64));
	// stfs f0,-4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -4, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// fmadds f0,f1,f28,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f28.f64 + f31.f64));
	// stfs f27,4(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82302eb4
	if (cr6.lt) goto loc_82302EB4;
loc_82302F10:
	// lwz r3,724(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 724);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82302f20
	if (!cr0.eq) goto loc_82302F20;
	// lwz r3,236(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 236);
loc_82302F20:
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823c7478
	sub_823C7478(ctx, base);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// lha r11,8(r26)
	r11.s64 = int16_t(PPC_LOAD_U16(r26.u32 + 8));
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// blt cr6,0x82302e90
	if (cr6.lt) goto loc_82302E90;
loc_82302F48:
	// fadds f30,f30,f26
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f30.f64 + f26.f64));
loc_82302F4C:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// lbz r11,0(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82302e34
	if (!cr0.eq) goto loc_82302E34;
loc_82302F5C:
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82302f68
	if (cr0.eq) goto loc_82302F68;
	// fadds f31,f31,f25
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 + f25.f64));
loc_82302F68:
	// lwz r3,724(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 724);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82302f78
	if (!cr6.eq) goto loc_82302F78;
	// lwz r3,236(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 236);
loc_82302F78:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823bec10
	sub_823BEC10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82306208
	sub_82306208(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// b 0x82302fa4
	goto loc_82302FA4;
loc_82302F9C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
loc_82302FA4:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// addi r12,r1,-120
	r12.s64 = ctx.r1.s64 + -120;
	// bl 0x8239d628
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_82302FB4"))) PPC_WEAK_FUNC(sub_82302FB4);
PPC_FUNC_IMPL(__imp__sub_82302FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302FB8"))) PPC_WEAK_FUNC(sub_82302FB8);
PPC_FUNC_IMPL(__imp__sub_82302FB8) {
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
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// bne 0x82303018
	if (!cr0.eq) goto loc_82303018;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,19968
	r11.s64 = r11.s64 + 19968;
loc_82302FE8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82302fe8
	if (!cr6.eq) goto loc_82302FE8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82302FFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82302ffc
	if (!cr0.eq) goto loc_82302FFC;
	// b 0x8230304c
	goto loc_8230304C;
loc_82303018:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,19944
	r11.s64 = r11.s64 + 19944;
loc_82303020:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82303020
	if (!cr6.eq) goto loc_82303020;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82303034:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82303034
	if (!cr0.eq) goto loc_82303034;
loc_8230304C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82302880
	sub_82302880(ctx, base);
	// lbz r26,552(r31)
	r26.u64 = PPC_LOAD_U8(r31.u32 + 552);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// lis r30,-32256
	r30.s64 = -2113929216;
	// beq 0x82303090
	if (cr0.eq) goto loc_82303090;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,2480(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r28,552(r31)
	PPC_STORE_U8(r31.u32 + 552, r28.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823d0710
	sub_823D0710(ctx, base);
loc_82303090:
	// lwz r3,724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823030a0
	if (!cr0.eq) goto loc_823030A0;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_823030A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c0058
	sub_823C0058(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,2480(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,9196(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9196);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f31,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82302218
	sub_82302218(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,2128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2128);
	f0.f64 = double(temp.f32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,2124(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2124);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821e1e18
	sub_821E1E18(ctx, base);
	// lwz r11,588(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,2480(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// stb r28,552(r31)
	PPC_STORE_U8(r31.u32 + 552, r28.u8);
	// bl 0x823d0710
	sub_823D0710(ctx, base);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// bl 0x823cf948
	sub_823CF948(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ca718
	sub_823CA718(ctx, base);
	// lwz r11,588(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r10,r11,144
	ctx.r10.s64 = r11.s64 + 144;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,588(r31)
	PPC_STORE_U32(r31.u32 + 588, r11.u32);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// bl 0x823cf950
	sub_823CF950(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227c418
	sub_8227C418(ctx, base);
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823031c0
	if (!cr0.eq) goto loc_823031C0;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_823031C0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823c0d58
	sub_823C0D58(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8230321c
	if (cr6.eq) goto loc_8230321C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f1,2480(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,22976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 22976);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82302218
	sub_82302218(ctx, base);
loc_8230321C:
	// lbz r11,672(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 672);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82303230
	if (cr0.eq) goto loc_82303230;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// bl 0x823c6cd0
	sub_823C6CD0(ctx, base);
loc_82303230:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8230323C"))) PPC_WEAK_FUNC(sub_8230323C);
PPC_FUNC_IMPL(__imp__sub_8230323C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82303240"))) PPC_WEAK_FUNC(sub_82303240);
PPC_FUNC_IMPL(__imp__sub_82303240) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-6464
	ctx.r3.s64 = r11.s64 + -6464;
	// bl 0x82302830
	sub_82302830(ctx, base);
	// bl 0x82275838
	sub_82275838(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230326C"))) PPC_WEAK_FUNC(sub_8230326C);
PPC_FUNC_IMPL(__imp__sub_8230326C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82303270"))) PPC_WEAK_FUNC(sub_82303270);
PPC_FUNC_IMPL(__imp__sub_82303270) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,-5540
	ctx.r3.s64 = r11.s64 + -5540;
	// bl 0x82305e10
	sub_82305E10(ctx, base);
	// bl 0x8230fbf8
	sub_8230FBF8(ctx, base);
	// bl 0x8230ee40
	sub_8230EE40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e1e98
	sub_821E1E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823020b8
	sub_823020B8(ctx, base);
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

__attribute__((alias("__imp__sub_823032BC"))) PPC_WEAK_FUNC(sub_823032BC);
PPC_FUNC_IMPL(__imp__sub_823032BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823032C0"))) PPC_WEAK_FUNC(sub_823032C0);
PPC_FUNC_IMPL(__imp__sub_823032C0) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2176(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2176);
	// mflr r12
	// bl 0x8239bce4
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,2144
	ctx.r4.s64 = r11.s64 + 2144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82120fd0
	sub_82120FD0(ctx, base);
	// addi r26,r30,252
	r26.s64 = r30.s64 + 252;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r25,r30,504
	r25.s64 = r30.s64 + 504;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826e497c
	__imp__XGetVideoMode(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,2132
	ctx.r4.s64 = r11.s64 + 2132;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r10,-24112
	ctx.r4.s64 = ctx.r10.s64 + -24112;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82303390
	if (cr0.eq) goto loc_82303390;
	// stw r10,520(r30)
	PPC_STORE_U32(r30.u32 + 520, ctx.r10.u32);
	// stw r10,516(r30)
	PPC_STORE_U32(r30.u32 + 516, ctx.r10.u32);
loc_82303390:
	// lwz r11,520(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823033ac
	if (!cr6.eq) goto loc_823033AC;
	// lwz r11,516(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// li r7,960
	ctx.r7.s64 = 960;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823033b0
	if (cr6.eq) goto loc_823033B0;
loc_823033AC:
	// li r7,1280
	ctx.r7.s64 = 1280;
loc_823033B0:
	// lwz r11,516(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// li r5,720
	ctx.r5.s64 = 720;
	// stw r7,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r7.u32);
	// li r29,0
	r29.s64 = 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r5,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r5.u32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// srawi r11,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	r11.s64 = ctx.r7.s32 >> 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// addze r28,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r28.s64 = temp.s64;
	// addi r11,r30,608
	r11.s64 = r30.s64 + 608;
	// stw r6,200(r30)
	PPC_STORE_U32(r30.u32 + 200, ctx.r6.u32);
	// stw r7,600(r30)
	PPC_STORE_U32(r30.u32 + 600, ctx.r7.u32);
loc_823033F4:
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// add r6,r9,r28
	ctx.r6.u64 = ctx.r9.u64 + r28.u64;
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// stw r7,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r7,600(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 600);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x823033f4
	if (cr6.lt) goto loc_823033F4;
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// lwz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// addi r11,r30,348
	r11.s64 = r30.s64 + 348;
	// stw r10,308(r30)
	PPC_STORE_U32(r30.u32 + 308, ctx.r10.u32);
	// addi r27,r30,236
	r27.s64 = r30.s64 + 236;
	// stw r10,312(r30)
	PPC_STORE_U32(r30.u32 + 312, ctx.r10.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r10,276(r30)
	PPC_STORE_U32(r30.u32 + 276, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r5,336(r30)
	PPC_STORE_U32(r30.u32 + 336, ctx.r5.u32);
	// addi r5,r11,20
	ctx.r5.s64 = r11.s64 + 20;
	// stw r9,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stw r8,256(r30)
	PPC_STORE_U32(r30.u32 + 256, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,284(r30)
	PPC_STORE_U32(r30.u32 + 284, r29.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// stw r29,304(r30)
	PPC_STORE_U32(r30.u32 + 304, r29.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// std r10,96(r31)
	PPC_STORE_U64(r31.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,3036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3036);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f13.u32);
	// lwz r10,508(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// stw r29,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r29.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// std r11,96(r31)
	PPC_STORE_U64(r31.u32 + 96, r11.u64);
	// lfd f13,96(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r5
	PPC_STORE_U32(ctx.r5.u32, f0.u32);
	// lwz r5,240(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// lwz r4,244(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// bl 0x823c6f00
	sub_823C6F00(ctx, base);
	// lis r11,6184
	r11.s64 = 405274624;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r24,r11,438
	r24.u64 = r11.u64 | 438;
	// li r4,720
	ctx.r4.s64 = 720;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82301ff8
	sub_82301FF8(ctx, base);
	// lis r11,6690
	r11.s64 = 438435840;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// ori r25,r11,407
	r25.u64 = r11.u64 | 407;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,720
	ctx.r4.s64 = 720;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82301ff8
	sub_82301FF8(ctx, base);
	// addi r11,r28,31
	r11.s64 = r28.s64 + 31;
	// subfic r26,r3,2048
	xer.ca = ctx.r3.u32 <= 2048;
	r26.s64 = 2048 - ctx.r3.s64;
	// stw r29,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r29.u32);
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r7,r31,112
	ctx.r7.s64 = r31.s64 + 112;
	// mulli r11,r11,1440
	r11.s64 = r11.s64 * 1440;
	// stw r26,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r26.u32);
	// rlwinm r11,r11,23,9,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x7FFFFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// subfic r11,r11,3600
	xer.ca = r11.u32 <= 3600;
	r11.s64 = 3600 - r11.s64;
	// li r4,720
	ctx.r4.s64 = 720;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// bl 0x823bd358
	sub_823BD358(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r31,112
	ctx.r7.s64 = r31.s64 + 112;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,248(r30)
	PPC_STORE_U32(r30.u32 + 248, r11.u32);
	// subf r11,r23,r26
	r11.s64 = r26.s64 - r23.s64;
	// li r28,-1
	r28.s64 = -1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,720
	ctx.r4.s64 = 720;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r28,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r28.u32);
	// bl 0x823bd358
	sub_823BD358(ctx, base);
	// lis r5,10280
	ctx.r5.s64 = 673710080;
	// stw r3,592(r30)
	PPC_STORE_U32(r30.u32 + 592, ctx.r3.u32);
	// addi r7,r31,128
	ctx.r7.s64 = r31.s64 + 128;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// ori r5,r5,390
	ctx.r5.u64 = ctx.r5.u64 | 390;
	// stw r29,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r29.u32);
	// stw r28,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r28.u32);
	// stw r29,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r29.u32);
	// bl 0x823bd358
	sub_823BD358(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r3,596(r30)
	PPC_STORE_U32(r30.u32 + 596, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x823bd238
	sub_823BD238(ctx, base);
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r3,572(r30)
	PPC_STORE_U32(r30.u32 + 572, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// ori r8,r8,262
	ctx.r8.u64 = ctx.r8.u64 | 262;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x823bd238
	sub_823BD238(ctx, base);
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r3,576(r30)
	PPC_STORE_U32(r30.u32 + 576, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// ori r8,r8,262
	ctx.r8.u64 = ctx.r8.u64 | 262;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x823bd238
	sub_823BD238(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,580(r30)
	PPC_STORE_U32(r30.u32 + 580, ctx.r3.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x823bd238
	sub_823BD238(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,584(r30)
	PPC_STORE_U32(r30.u32 + 584, r11.u32);
	// bl 0x823016b0
	sub_823016B0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r28,2
	r28.s64 = 2;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,96(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f31,104(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
loc_82303694:
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82302218
	sub_82302218(ctx, base);
	// lwz r11,588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 588);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r6,r11,r30
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stb r29,552(r30)
	PPC_STORE_U8(r30.u32 + 552, r29.u8);
	// bl 0x823d0710
	sub_823D0710(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x823cf948
	sub_823CF948(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ca718
	sub_823CA718(ctx, base);
	// lwz r11,588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 588);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r10,r11,144
	ctx.r10.s64 = r11.s64 + 144;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,588(r30)
	PPC_STORE_U32(r30.u32 + 588, r11.u32);
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// bl 0x823cf950
	sub_823CF950(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82303694
	if (!cr0.eq) goto loc_82303694;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121018
	sub_82121018(ctx, base);
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_823032C8"))) PPC_WEAK_FUNC(sub_823032C8);
PPC_FUNC_IMPL(__imp__sub_823032C8) {
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
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,2144
	ctx.r4.s64 = r11.s64 + 2144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82120fd0
	sub_82120FD0(ctx, base);
	// addi r26,r30,252
	r26.s64 = r30.s64 + 252;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r25,r30,504
	r25.s64 = r30.s64 + 504;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826e497c
	__imp__XGetVideoMode(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,2132
	ctx.r4.s64 = r11.s64 + 2132;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r10,-24112
	ctx.r4.s64 = ctx.r10.s64 + -24112;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82303390
	if (cr0.eq) goto loc_82303390;
	// stw r10,520(r30)
	PPC_STORE_U32(r30.u32 + 520, ctx.r10.u32);
	// stw r10,516(r30)
	PPC_STORE_U32(r30.u32 + 516, ctx.r10.u32);
loc_82303390:
	// lwz r11,520(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823033ac
	if (!cr6.eq) goto loc_823033AC;
	// lwz r11,516(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// li r7,960
	ctx.r7.s64 = 960;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823033b0
	if (cr6.eq) goto loc_823033B0;
loc_823033AC:
	// li r7,1280
	ctx.r7.s64 = 1280;
loc_823033B0:
	// lwz r11,516(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// li r5,720
	ctx.r5.s64 = 720;
	// stw r7,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r7.u32);
	// li r29,0
	r29.s64 = 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r5,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r5.u32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// srawi r11,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	r11.s64 = ctx.r7.s32 >> 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// addze r28,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r28.s64 = temp.s64;
	// addi r11,r30,608
	r11.s64 = r30.s64 + 608;
	// stw r6,200(r30)
	PPC_STORE_U32(r30.u32 + 200, ctx.r6.u32);
	// stw r7,600(r30)
	PPC_STORE_U32(r30.u32 + 600, ctx.r7.u32);
loc_823033F4:
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// add r6,r9,r28
	ctx.r6.u64 = ctx.r9.u64 + r28.u64;
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// stw r7,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r7,600(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 600);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x823033f4
	if (cr6.lt) goto loc_823033F4;
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// lwz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// addi r11,r30,348
	r11.s64 = r30.s64 + 348;
	// stw r10,308(r30)
	PPC_STORE_U32(r30.u32 + 308, ctx.r10.u32);
	// addi r27,r30,236
	r27.s64 = r30.s64 + 236;
	// stw r10,312(r30)
	PPC_STORE_U32(r30.u32 + 312, ctx.r10.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r10,276(r30)
	PPC_STORE_U32(r30.u32 + 276, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r5,336(r30)
	PPC_STORE_U32(r30.u32 + 336, ctx.r5.u32);
	// addi r5,r11,20
	ctx.r5.s64 = r11.s64 + 20;
	// stw r9,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stw r8,256(r30)
	PPC_STORE_U32(r30.u32 + 256, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,284(r30)
	PPC_STORE_U32(r30.u32 + 284, r29.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// stw r29,304(r30)
	PPC_STORE_U32(r30.u32 + 304, r29.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// std r10,96(r31)
	PPC_STORE_U64(r31.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,3036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3036);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f13.u32);
	// lwz r10,508(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// stw r29,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r29.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// std r11,96(r31)
	PPC_STORE_U64(r31.u32 + 96, r11.u64);
	// lfd f13,96(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r5
	PPC_STORE_U32(ctx.r5.u32, f0.u32);
	// lwz r5,240(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// lwz r4,244(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// bl 0x823c6f00
	sub_823C6F00(ctx, base);
	// lis r11,6184
	r11.s64 = 405274624;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r24,r11,438
	r24.u64 = r11.u64 | 438;
	// li r4,720
	ctx.r4.s64 = 720;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82301ff8
	sub_82301FF8(ctx, base);
	// lis r11,6690
	r11.s64 = 438435840;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// ori r25,r11,407
	r25.u64 = r11.u64 | 407;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,720
	ctx.r4.s64 = 720;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82301ff8
	sub_82301FF8(ctx, base);
	// addi r11,r28,31
	r11.s64 = r28.s64 + 31;
	// subfic r26,r3,2048
	xer.ca = ctx.r3.u32 <= 2048;
	r26.s64 = 2048 - ctx.r3.s64;
	// stw r29,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r29.u32);
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r7,r31,112
	ctx.r7.s64 = r31.s64 + 112;
	// mulli r11,r11,1440
	r11.s64 = r11.s64 * 1440;
	// stw r26,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r26.u32);
	// rlwinm r11,r11,23,9,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x7FFFFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// subfic r11,r11,3600
	xer.ca = r11.u32 <= 3600;
	r11.s64 = 3600 - r11.s64;
	// li r4,720
	ctx.r4.s64 = 720;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// bl 0x823bd358
	sub_823BD358(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r31,112
	ctx.r7.s64 = r31.s64 + 112;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,248(r30)
	PPC_STORE_U32(r30.u32 + 248, r11.u32);
	// subf r11,r23,r26
	r11.s64 = r26.s64 - r23.s64;
	// li r28,-1
	r28.s64 = -1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,720
	ctx.r4.s64 = 720;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r28,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r28.u32);
	// bl 0x823bd358
	sub_823BD358(ctx, base);
	// lis r5,10280
	ctx.r5.s64 = 673710080;
	// stw r3,592(r30)
	PPC_STORE_U32(r30.u32 + 592, ctx.r3.u32);
	// addi r7,r31,128
	ctx.r7.s64 = r31.s64 + 128;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// ori r5,r5,390
	ctx.r5.u64 = ctx.r5.u64 | 390;
	// stw r29,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r29.u32);
	// stw r28,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r28.u32);
	// stw r29,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r29.u32);
	// bl 0x823bd358
	sub_823BD358(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r3,596(r30)
	PPC_STORE_U32(r30.u32 + 596, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x823bd238
	sub_823BD238(ctx, base);
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r3,572(r30)
	PPC_STORE_U32(r30.u32 + 572, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// ori r8,r8,262
	ctx.r8.u64 = ctx.r8.u64 | 262;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x823bd238
	sub_823BD238(ctx, base);
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r3,576(r30)
	PPC_STORE_U32(r30.u32 + 576, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// ori r8,r8,262
	ctx.r8.u64 = ctx.r8.u64 | 262;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x823bd238
	sub_823BD238(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,580(r30)
	PPC_STORE_U32(r30.u32 + 580, ctx.r3.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x823bd238
	sub_823BD238(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,584(r30)
	PPC_STORE_U32(r30.u32 + 584, r11.u32);
	// bl 0x823016b0
	sub_823016B0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r28,2
	r28.s64 = 2;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,96(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f31,104(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
loc_82303694:
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82302218
	sub_82302218(ctx, base);
	// lwz r11,588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 588);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r6,r11,r30
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stb r29,552(r30)
	PPC_STORE_U8(r30.u32 + 552, r29.u8);
	// bl 0x823d0710
	sub_823D0710(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x823cf948
	sub_823CF948(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ca718
	sub_823CA718(ctx, base);
	// lwz r11,588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 588);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r10,r11,144
	ctx.r10.s64 = r11.s64 + 144;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,588(r30)
	PPC_STORE_U32(r30.u32 + 588, r11.u32);
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// bl 0x823cf950
	sub_823CF950(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82303694
	if (!cr0.eq) goto loc_82303694;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121018
	sub_82121018(ctx, base);
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8230373C"))) PPC_WEAK_FUNC(sub_8230373C);
PPC_FUNC_IMPL(__imp__sub_8230373C) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121018
	sub_82121018(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82303764"))) PPC_WEAK_FUNC(sub_82303764);
PPC_FUNC_IMPL(__imp__sub_82303764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82303768"))) PPC_WEAK_FUNC(sub_82303768);
PPC_FUNC_IMPL(__imp__sub_82303768) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300a00
	sub_82300A00(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r31,r11,-6464
	r31.s64 = r11.s64 + -6464;
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823037ac
	if (!cr6.eq) goto loc_823037AC;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_823037AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bde98
	sub_823BDE98(ctx, base);
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823037c8
	if (!cr6.eq) goto loc_823037C8;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_823037C8:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bdf00
	sub_823BDF00(ctx, base);
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823037e4
	if (!cr6.eq) goto loc_823037E4;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_823037E4:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x823be858
	sub_823BE858(ctx, base);
	// lwz r11,228(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82303898
	if (cr6.eq) goto loc_82303898;
	// li r29,0
	r29.s64 = 0;
loc_82303804:
	// lwz r3,724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82303814
	if (!cr6.eq) goto loc_82303814;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_82303814:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823bf2f0
	sub_823BF2F0(ctx, base);
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82303830
	if (!cr6.eq) goto loc_82303830;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_82303830:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bf478
	sub_823BF478(ctx, base);
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82303850
	if (!cr6.eq) goto loc_82303850;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_82303850:
	// addi r9,r30,32
	ctx.r9.s64 = r30.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r10,r29,r11
	ctx.r10.u64 = r29.u64 + r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,1036(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1036);
	// rlwimi r8,r7,23,7,8
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 23) & 0x1800000) | (ctx.r8.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r8,1036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1036, ctx.r8.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// lwz r11,228(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82303804
	if (cr6.lt) goto loc_82303804;
loc_82303898:
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823038a8
	if (!cr6.eq) goto loc_823038A8;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_823038A8:
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bf2d0
	sub_823BF2D0(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823038BC"))) PPC_WEAK_FUNC(sub_823038BC);
PPC_FUNC_IMPL(__imp__sub_823038BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823038C0"))) PPC_WEAK_FUNC(sub_823038C0);
PPC_FUNC_IMPL(__imp__sub_823038C0) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2256(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2256);
	// mflr r12
	// bl 0x8239bcf4
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,2144
	ctx.r4.s64 = r11.s64 + 2144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82120fd0
	sub_82120FD0(ctx, base);
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8230391c
	if (!cr6.eq) goto loc_8230391C;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// b 0x82303a1c
	goto loc_82303A1C;
loc_8230391C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82303768
	sub_82303768(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823dec88
	sub_823DEC88(ctx, base);
	// lwz r3,668(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 668);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82303944
	if (cr0.eq) goto loc_82303944;
	// bl 0x823c3be8
	sub_823C3BE8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,668(r30)
	PPC_STORE_U32(r30.u32 + 668, r11.u32);
loc_82303944:
	// lis r8,10240
	ctx.r8.s64 = 671088640;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823bd238
	sub_823BD238(ctx, base);
	// stw r3,668(r30)
	PPC_STORE_U32(r30.u32 + 668, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x823bd210
	sub_823BD210(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r27,92(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// lfd f29,2240(r9)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r9.u32 + 2240);
	// lfs f30,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f30.f64 = double(temp.f32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_823039A8:
	// li r29,0
	r29.s64 = 0;
loc_823039AC:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmul f0,f1,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64 * f29.f64;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mullw r11,r11,r29
	r11.s64 = int64_t(r11.s32) * int64_t(r29.s32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,96(r31)
	PPC_STORE_U64(r31.u32 + 96, f0.u64);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(r29.u32, 32, xer);
	// lbz r10,103(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 103);
	// stbx r10,r11,r27
	PPC_STORE_U8(r11.u32 + r27.u32, ctx.r10.u8);
	// blt cr6,0x823039ac
	if (cr6.lt) goto loc_823039AC;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(r28.u32, 32, xer);
	// blt cr6,0x823039a8
	if (cr6.lt) goto loc_823039A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,668(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 668);
	// bl 0x823bb8c0
	sub_823BB8C0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r5,668(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 668);
	// addi r3,r11,-5540
	ctx.r3.s64 = r11.s64 + -5540;
	// bl 0x823067d0
	sub_823067D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82302100
	sub_82302100(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
loc_82303A1C:
	// bl 0x82121018
	sub_82121018(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823038C8"))) PPC_WEAK_FUNC(sub_823038C8);
PPC_FUNC_IMPL(__imp__sub_823038C8) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,2144
	ctx.r4.s64 = r11.s64 + 2144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82120fd0
	sub_82120FD0(ctx, base);
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8230391c
	if (!cr6.eq) goto loc_8230391C;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// b 0x82303a1c
	goto loc_82303A1C;
loc_8230391C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82303768
	sub_82303768(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823dec88
	sub_823DEC88(ctx, base);
	// lwz r3,668(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 668);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82303944
	if (cr0.eq) goto loc_82303944;
	// bl 0x823c3be8
	sub_823C3BE8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,668(r30)
	PPC_STORE_U32(r30.u32 + 668, r11.u32);
loc_82303944:
	// lis r8,10240
	ctx.r8.s64 = 671088640;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823bd238
	sub_823BD238(ctx, base);
	// stw r3,668(r30)
	PPC_STORE_U32(r30.u32 + 668, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x823bd210
	sub_823BD210(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r27,92(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// lfd f29,2240(r9)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r9.u32 + 2240);
	// lfs f30,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f30.f64 = double(temp.f32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_823039A8:
	// li r29,0
	r29.s64 = 0;
loc_823039AC:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmul f0,f1,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64 * f29.f64;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mullw r11,r11,r29
	r11.s64 = int64_t(r11.s32) * int64_t(r29.s32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,96(r31)
	PPC_STORE_U64(r31.u32 + 96, f0.u64);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(r29.u32, 32, xer);
	// lbz r10,103(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 103);
	// stbx r10,r11,r27
	PPC_STORE_U8(r11.u32 + r27.u32, ctx.r10.u8);
	// blt cr6,0x823039ac
	if (cr6.lt) goto loc_823039AC;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(r28.u32, 32, xer);
	// blt cr6,0x823039a8
	if (cr6.lt) goto loc_823039A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,668(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 668);
	// bl 0x823bb8c0
	sub_823BB8C0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r5,668(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 668);
	// addi r3,r11,-5540
	ctx.r3.s64 = r11.s64 + -5540;
	// bl 0x823067d0
	sub_823067D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82302100
	sub_82302100(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
loc_82303A1C:
	// bl 0x82121018
	sub_82121018(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82303A34"))) PPC_WEAK_FUNC(sub_82303A34);
PPC_FUNC_IMPL(__imp__sub_82303A34) {
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
	// bl 0x82121018
	sub_82121018(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82303A5C"))) PPC_WEAK_FUNC(sub_82303A5C);
PPC_FUNC_IMPL(__imp__sub_82303A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82303A60"))) PPC_WEAK_FUNC(sub_82303A60);
PPC_FUNC_IMPL(__imp__sub_82303A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f28,2552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	f28.f64 = double(temp.f32);
	// lfs f29,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f29.f64 = double(temp.f32);
	// beq 0x82303aac
	if (cr0.eq) goto loc_82303AAC;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fdivs f25,f28,f0
	f25.f64 = double(float(f28.f64 / f0.f64));
	// b 0x82303ab0
	goto loc_82303AB0;
loc_82303AAC:
	// fmr f25,f29
	ctx.fpscr.disableFlushMode();
	f25.f64 = f29.f64;
loc_82303AB0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82303ac0
	if (cr6.eq) goto loc_82303AC0;
	// fmr f26,f29
	ctx.fpscr.disableFlushMode();
	f26.f64 = f29.f64;
	// b 0x82303ad8
	goto loc_82303AD8;
loc_82303AC0:
	// extsw r11,r5
	r11.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fdivs f26,f28,f0
	f26.f64 = double(float(f28.f64 / f0.f64));
loc_82303AD8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f0,f2,f2
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lfs f13,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f30,f0,f13
	f30.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f13,32744(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32744);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lis r11,-32251
	r11.s64 = -2113601536;
	// fsqrts f31,f0
	f31.f64 = double(float(sqrt(f0.f64)));
	// lfs f0,2320(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2320);
	f0.f64 = double(temp.f32);
	// fdivs f1,f0,f30
	ctx.f1.f64 = double(float(f0.f64 / f30.f64));
	// bl 0x823a05b0
	sub_823A05B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f29,160(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r31,1
	r31.s64 = 1;
	// stfs f29,164(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r30,r1,168
	r30.s64 = ctx.r1.s64 + 168;
	// addi r29,r1,100
	r29.s64 = ctx.r1.s64 + 100;
	// fdivs f29,f28,f31
	f29.f64 = double(float(f28.f64 / f31.f64));
	// fdivs f0,f0,f31
	f0.f64 = double(float(f0.f64 / f31.f64));
	// fmuls f0,f0,f27
	f0.f64 = double(float(f0.f64 * f27.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82303B30:
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// fmuls f0,f31,f31
	f0.f64 = double(float(f31.f64 * f31.f64));
	// fdivs f0,f0,f30
	f0.f64 = double(float(f0.f64 / f30.f64));
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x823a05b0
	sub_823A05B0(ctx, base);
	// fmuls f0,f31,f25
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 * f25.f64));
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// fmuls f0,f31,f26
	f0.f64 = double(float(f31.f64 * f26.f64));
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// frsp f0,f1
	f0.f64 = double(float(ctx.f1.f64));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(r31.u32, 8, xer);
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// fmuls f0,f0,f27
	f0.f64 = double(float(f0.f64 * f27.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// blt cr6,0x82303b30
	if (cr6.lt) goto loc_82303B30;
	// addi r11,r1,168
	r11.s64 = ctx.r1.s64 + 168;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r8,7
	ctx.r8.s64 = 7;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82303B9C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82303b9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82303B9C;
	// li r10,7
	ctx.r10.s64 = 7;
loc_82303BB4:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,60(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x82303bb4
	if (!cr0.eq) goto loc_82303BB4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r31,47
	r31.s64 = 47;
	// addi r30,r11,-5540
	r30.s64 = r11.s64 + -5540;
	// li r11,15
	r11.s64 = 15;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// addi r28,r1,160
	r28.s64 = ctx.r1.s64 + 160;
	// li r29,15
	r29.s64 = 15;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
loc_82303BF8:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r31,-16
	ctx.r4.s64 = r31.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823065a8
	sub_823065A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823063c8
	sub_823063C8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x82303bf8
	if (!cr0.eq) goto loc_82303BF8;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d628
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82303C3C"))) PPC_WEAK_FUNC(sub_82303C3C);
PPC_FUNC_IMPL(__imp__sub_82303C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82303C40"))) PPC_WEAK_FUNC(sub_82303C40);
PPC_FUNC_IMPL(__imp__sub_82303C40) {
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
	// bl 0x823028d0
	sub_823028D0(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82303c78
	if (cr0.eq) goto loc_82303C78;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82303C78:
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

__attribute__((alias("__imp__sub_82303C8C"))) PPC_WEAK_FUNC(sub_82303C8C);
PPC_FUNC_IMPL(__imp__sub_82303C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82303C90"))) PPC_WEAK_FUNC(sub_82303C90);
PPC_FUNC_IMPL(__imp__sub_82303C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-6464
	ctx.r3.s64 = ctx.r10.s64 + -6464;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82302fb8
	sub_82302FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82303CA8"))) PPC_WEAK_FUNC(sub_82303CA8);
PPC_FUNC_IMPL(__imp__sub_82303CA8) {
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
	// lis r11,-32208
	r11.s64 = -2110783488;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,12864
	ctx.r3.s64 = r11.s64 + 12864;
	// bl 0x82275810
	sub_82275810(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,2324
	ctx.r3.s64 = r11.s64 + 2324;
	// bl 0x82358018
	sub_82358018(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// stb r3,673(r31)
	PPC_STORE_U8(r31.u32 + 673, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(r31.u32 + 384, r30.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(r31.u32 + 388, r30.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(r31.u32 + 396, r30.u32);
	// stw r30,468(r31)
	PPC_STORE_U32(r31.u32 + 468, r30.u32);
	// stw r30,472(r31)
	PPC_STORE_U32(r31.u32 + 472, r30.u32);
	// stb r30,476(r31)
	PPC_STORE_U8(r31.u32 + 476, r30.u8);
	// bl 0x821e68e0
	sub_821E68E0(ctx, base);
	// lis r11,-32208
	r11.s64 = -2110783488;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r4,r11,15504
	ctx.r4.s64 = r11.s64 + 15504;
	// addi r3,r10,18840
	ctx.r3.s64 = ctx.r10.s64 + 18840;
	// bl 0x82272430
	sub_82272430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823032c8
	sub_823032C8(ctx, base);
	// lbz r11,196(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 196);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82303d4c
	if (cr0.eq) goto loc_82303D4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e1f50
	sub_821E1F50(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82303d50
	if (cr0.eq) goto loc_82303D50;
loc_82303D4C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82303D50:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-5540
	r30.s64 = r11.s64 + -5540;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823082c0
	sub_823082C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82302830
	sub_82302830(ctx, base);
	// bl 0x82270ce8
	sub_82270CE8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82303d90
	if (cr0.eq) goto loc_82303D90;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82307f30
	sub_82307F30(ctx, base);
loc_82303D90:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225e198
	sub_8225E198(ctx, base);
	// lis r11,-32208
	r11.s64 = -2110783488;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,6440
	ctx.r4.s64 = r11.s64 + 6440;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823019d0
	sub_823019D0(ctx, base);
	// lis r11,-32208
	r11.s64 = -2110783488;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,10768
	ctx.r4.s64 = r11.s64 + 10768;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// bl 0x823110c0
	sub_823110C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82301ad8
	sub_82301AD8(ctx, base);
	// lis r11,-32208
	r11.s64 = -2110783488;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,11304
	ctx.r4.s64 = r11.s64 + 11304;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// bl 0x8230b110
	sub_8230B110(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82301b70
	sub_82301B70(ctx, base);
	// lis r11,-32208
	r11.s64 = -2110783488;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,7160
	ctx.r4.s64 = r11.s64 + 7160;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82301c88
	sub_82301C88(ctx, base);
	// lis r11,-32208
	r11.s64 = -2110783488;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,7440
	ctx.r4.s64 = r11.s64 + 7440;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// bl 0x8230fb18
	sub_8230FB18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82301da0
	sub_82301DA0(ctx, base);
	// lis r11,-32208
	r11.s64 = -2110783488;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,7720
	ctx.r4.s64 = r11.s64 + 7720;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82301ed0
	sub_82301ED0(ctx, base);
	// lis r11,-32208
	r11.s64 = -2110783488;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8024
	ctx.r4.s64 = r11.s64 + 8024;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e4a80
	sub_821E4A80(ctx, base);
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

__attribute__((alias("__imp__sub_82303E64"))) PPC_WEAK_FUNC(sub_82303E64);
PPC_FUNC_IMPL(__imp__sub_82303E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82303E68"))) PPC_WEAK_FUNC(sub_82303E68);
PPC_FUNC_IMPL(__imp__sub_82303E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// stfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, f29.u64);
	// stfd f30,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r24,1
	r24.s64 = 1;
	// stb r24,198(r31)
	PPC_STORE_U8(r31.u32 + 198, r24.u8);
	// bl 0x821ea108
	sub_821EA108(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x821ead60
	sub_821EAD60(ctx, base);
	// lis r20,-32256
	r20.s64 = -2113929216;
	// lfs f30,64(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r22.u32 + 64);
	f30.f64 = double(temp.f32);
	// li r21,0
	r21.s64 = 0;
	// mr r11,r24
	r11.u64 = r24.u64;
	// lfs f0,2480(r20)
	temp.u32 = PPC_LOAD_U32(r20.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bgt cr6,0x82303eb8
	if (cr6.gt) goto loc_82303EB8;
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82303EB8:
	// clrlwi r26,r11,24
	r26.u64 = r11.u32 & 0xFF;
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82303ed0
	if (cr6.eq) goto loc_82303ED0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x82303ed4
	goto loc_82303ED4;
loc_82303ED0:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_82303ED4:
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ca718
	sub_823CA718(ctx, base);
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82303ef8
	if (cr6.eq) goto loc_82303EF8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x82303efc
	goto loc_82303EFC;
loc_82303EF8:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_82303EFC:
	// lis r6,64
	ctx.r6.s64 = 4194304;
	// lwz r5,584(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x823bd580
	sub_823BD580(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r25,r11,-5540
	r25.s64 = r11.s64 + -5540;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f1,24112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,688(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 688, temp.u32);
	// bl 0x823063c8
	sub_823063C8(ctx, base);
	// lwz r30,220(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lwz r29,224(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// b 0x82303f50
	goto loc_82303F50;
loc_82303F38:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_82303F50:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82303f38
	if (!cr6.eq) goto loc_82303F38;
	// lwz r11,556(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 556);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82303f84
	if (!cr6.eq) goto loc_82303F84;
	// bl 0x821503f0
	sub_821503F0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,34
	ctx.r7.s64 = 34;
	// stw r3,556(r31)
	PPC_STORE_U32(r31.u32 + 556, ctx.r3.u32);
	// li r5,320
	ctx.r5.s64 = 320;
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r4,640
	ctx.r4.s64 = 640;
	// bl 0x821d5e30
	sub_821D5E30(ctx, base);
loc_82303F84:
	// lwz r11,560(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 560);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8230401c
	if (!cr6.eq) goto loc_8230401C;
	// bl 0x821503f0
	sub_821503F0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,34
	ctx.r7.s64 = 34;
	// stw r3,560(r31)
	PPC_STORE_U32(r31.u32 + 560, ctx.r3.u32);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x821d5e30
	sub_821D5E30(ctx, base);
	// mr r30,r24
	r30.u64 = r24.u64;
	// addi r29,r31,564
	r29.s64 = r31.s64 + 564;
loc_82303FB8:
	// lwz r28,60(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r27,64(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x821503f0
	sub_821503F0(ctx, base);
	// rotlwi r11,r28,1
	r11.u64 = __builtin_rotateleft32(r28.u32, 1);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// rotlwi r10,r27,1
	ctx.r10.u64 = __builtin_rotateleft32(r27.u32, 1);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,34
	ctx.r7.s64 = 34;
	// slw r11,r24,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r24.u32 << (r30.u8 & 0x3F));
	// andc r10,r11,r10
	ctx.r10.u64 = r11.u64 & ~ctx.r10.u64;
	// andc r9,r11,r9
	ctx.r9.u64 = r11.u64 & ~ctx.r9.u64;
	// divw r5,r27,r11
	ctx.r5.s32 = r27.s32 / r11.s32;
	// divw r4,r28,r11
	ctx.r4.s32 = r28.s32 / r11.s32;
	// twllei r11,0
	// twllei r11,0
	// twlgei r10,-1
	// twlgei r9,-1
	// bl 0x821d5e30
	sub_821D5E30(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// bne cr6,0x82303fb8
	if (!cr6.eq) goto loc_82303FB8;
loc_8230401C:
	// lwa r11,64(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 64));
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lwa r10,60(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 60));
	// lfs f0,2480(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r20.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfs f13,2344(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2344);
	ctx.f13.f64 = double(temp.f32);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f13,2340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2340);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// stfs f0,224(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// stfs f0,228(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,232(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// stfs f13,236(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// stfs f0,240(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// stfs f0,244(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,248(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// stfs f13,252(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// lbz r23,476(r31)
	r23.u64 = PPC_LOAD_U8(r31.u32 + 476);
	// cmplwi r23,0
	cr0.compare<uint32_t>(r23.u32, 0, xer);
	// beq 0x82304324
	if (cr0.eq) goto loc_82304324;
	// lfs f13,676(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 676);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,680(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 680);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f12,684(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 684);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// lfs f31,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// fdivs f0,f31,f11
	f0.f64 = double(float(f31.f64 / ctx.f11.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// bgt cr6,0x82304154
	if (cr6.gt) goto loc_82304154;
	// fmr f12,f31
	ctx.f12.f64 = f31.f64;
loc_82304154:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f0,-5556(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5556);
	f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82306658
	sub_82306658(ctx, base);
	// addi r5,r31,692
	ctx.r5.s64 = r31.s64 + 692;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82306500
	sub_82306500(ctx, base);
	// addi r5,r31,708
	ctx.r5.s64 = r31.s64 + 708;
	// li r4,30
	ctx.r4.s64 = 30;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82306500
	sub_82306500(ctx, base);
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 556);
	// bl 0x82308f60
	sub_82308F60(ctx, base);
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823041c0
	if (cr6.eq) goto loc_823041C0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x823041c4
	goto loc_823041C4;
loc_823041C0:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_823041C4:
	// lis r6,256
	ctx.r6.s64 = 16777216;
	// lwz r5,572(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 572);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x823bd580
	sub_823BD580(ctx, base);
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823041e8
	if (cr6.eq) goto loc_823041E8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x823041ec
	goto loc_823041EC;
loc_823041E8:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_823041EC:
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// lwz r5,584(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823bd580
	sub_823BD580(ctx, base);
	// lwz r5,24(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r24,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, r24.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,260(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r5)
	PPC_STORE_U32(ctx.r5.u32 + 260, r11.u32);
	// stw r21,68(r5)
	PPC_STORE_U32(ctx.r5.u32 + 68, r21.u32);
	// lwz r11,260(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r5)
	PPC_STORE_U32(ctx.r5.u32 + 260, r11.u32);
	// bl 0x82300f20
	sub_82300F20(ctx, base);
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 556);
	// bl 0x82309fb8
	sub_82309FB8(ctx, base);
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 556);
	// bl 0x82308f60
	sub_82308F60(ctx, base);
	// lwz r30,24(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// lwz r4,556(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 556);
	// addi r29,r30,148
	r29.s64 = r30.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821c55d0
	sub_821C55D0(ctx, base);
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// li r5,320
	ctx.r5.s64 = 320;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// li r4,640
	ctx.r4.s64 = 640;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
	// stw r24,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r24.u32);
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
	// stw r21,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r21.u32);
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
	// bl 0x82302308
	sub_82302308(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300f20
	sub_82300F20(ctx, base);
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 556);
	// bl 0x82309fb8
	sub_82309FB8(ctx, base);
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 556);
	// bl 0x82308f60
	sub_82308F60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,556(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 556);
	// bl 0x821c55d0
	sub_821C55D0(ctx, base);
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// li r5,320
	ctx.r5.s64 = 320;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// li r4,640
	ctx.r4.s64 = 640;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
	// bl 0x82302308
	sub_82302308(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300f20
	sub_82300F20(ctx, base);
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 556);
	// bl 0x82309fb8
	sub_82309FB8(ctx, base);
	// mr r11,r24
	r11.u64 = r24.u64;
	// stw r11,36(r25)
	PPC_STORE_U32(r25.u32 + 36, r11.u32);
loc_82304324:
	// clrlwi. r26,r26,24
	r26.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x82304510
	if (cr0.eq) goto loc_82304510;
	// li r4,6
	ctx.r4.s64 = 6;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823063c8
	sub_823063C8(ctx, base);
	// addi r10,r22,40
	ctx.r10.s64 = r22.s64 + 40;
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// bl 0x82306468
	sub_82306468(ctx, base);
	// lwz r3,560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 560);
	// bl 0x82308f60
	sub_82308F60(ctx, base);
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82304390
	if (cr6.eq) goto loc_82304390;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x82304394
	goto loc_82304394;
loc_82304390:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_82304394:
	// lis r6,256
	ctx.r6.s64 = 16777216;
	// lwz r5,572(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 572);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x823bd580
	sub_823BD580(ctx, base);
	// lwz r5,24(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r24,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, r24.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r11,260(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r5)
	PPC_STORE_U32(ctx.r5.u32 + 260, r11.u32);
	// stw r21,68(r5)
	PPC_STORE_U32(ctx.r5.u32 + 68, r21.u32);
	// lwz r11,260(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r5)
	PPC_STORE_U32(ctx.r5.u32 + 260, r11.u32);
	// bl 0x82300f20
	sub_82300F20(ctx, base);
	// lwz r3,560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 560);
	// bl 0x82309fb8
	sub_82309FB8(ctx, base);
	// addi r27,r1,224
	r27.s64 = ctx.r1.s64 + 224;
	// addi r29,r31,564
	r29.s64 = r31.s64 + 564;
	// li r28,2
	r28.s64 = 2;
loc_823043F8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82308f60
	sub_82308F60(ctx, base);
	// lwz r30,24(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// lwz r4,-4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -4);
	// addi r3,r30,148
	ctx.r3.s64 = r30.s64 + 148;
	// bl 0x821c55d0
	sub_821C55D0(ctx, base);
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r21,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r21.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
	// bl 0x82300f20
	sub_82300F20(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82309fb8
	sub_82309FB8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// bne 0x823043f8
	if (!cr0.eq) goto loc_823043F8;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_82304468:
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// bl 0x82308f60
	sub_82308F60(ctx, base);
	// lwz r30,24(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// lwz r4,568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// addi r3,r30,148
	ctx.r3.s64 = r30.s64 + 148;
	// bl 0x821c55d0
	sub_821C55D0(ctx, base);
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// clrlwi r3,r29,31
	ctx.r3.u64 = r29.u32 & 0x1;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
	// stw r24,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r24.u32);
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
	// stw r21,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r21.u32);
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
	// lfs f2,60(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r22.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lfs f1,56(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addze r5,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r11.s64 = ctx.r10.s32 >> 2;
	// addze r4,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x82303a60
	sub_82303A60(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300f20
	sub_82300F20(ctx, base);
	// mr r11,r24
	r11.u64 = r24.u64;
	// stw r11,36(r25)
	PPC_STORE_U32(r25.u32 + 36, r11.u32);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// bl 0x82309fb8
	sub_82309FB8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(r29.u32, 2, xer);
	// bne cr6,0x82304468
	if (!cr6.eq) goto loc_82304468;
loc_82304510:
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82304524
	if (cr6.eq) goto loc_82304524;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x82304528
	goto loc_82304528;
loc_82304524:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_82304528:
	// lis r6,256
	ctx.r6.s64 = 16777216;
	// lwz r5,572(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 572);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x823bd580
	sub_823BD580(ctx, base);
	// lwz r11,556(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 556);
	// lwz r10,724(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r5,124(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// beq cr6,0x82304554
	if (cr6.eq) goto loc_82304554;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x82304558
	goto loc_82304558;
loc_82304554:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_82304558:
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823bd580
	sub_823BD580(ctx, base);
	// lwz r11,568(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// lwz r10,724(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r5,124(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// beq cr6,0x82304580
	if (cr6.eq) goto loc_82304580;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x82304584
	goto loc_82304584;
loc_82304580:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_82304584:
	// lis r6,32
	ctx.r6.s64 = 2097152;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x823bd580
	sub_823BD580(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-6464
	r30.s64 = r11.s64 + -6464;
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823045a8
	if (!cr6.eq) goto loc_823045A8;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_823045A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bf2f0
	sub_823BF2F0(ctx, base);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823045c8
	if (!cr6.eq) goto loc_823045C8;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_823045C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bf478
	sub_823BF478(ctx, base);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823045e8
	if (!cr6.eq) goto loc_823045E8;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_823045E8:
	// lwz r10,1192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1192);
	// rlwimi r10,r24,11,19,21
	ctx.r10.u64 = (__builtin_rotateleft32(r24.u32, 11) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r10,1192(r11)
	PPC_STORE_U32(r11.u32 + 1192, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304610
	if (!cr6.eq) goto loc_82304610;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_82304610:
	// lwz r10,1192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1192);
	// rlwimi r10,r24,14,16,18
	ctx.r10.u64 = (__builtin_rotateleft32(r24.u32, 14) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r10,1192(r11)
	PPC_STORE_U32(r11.u32 + 1192, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304638
	if (!cr6.eq) goto loc_82304638;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_82304638:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bf2f0
	sub_823BF2F0(ctx, base);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304658
	if (!cr6.eq) goto loc_82304658;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_82304658:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bf478
	sub_823BF478(ctx, base);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304678
	if (!cr6.eq) goto loc_82304678;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_82304678:
	// lwz r10,1240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1240);
	// rlwimi r10,r24,11,19,21
	ctx.r10.u64 = (__builtin_rotateleft32(r24.u32, 11) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r10,1240(r11)
	PPC_STORE_U32(r11.u32 + 1240, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823046a0
	if (!cr6.eq) goto loc_823046A0;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_823046A0:
	// lwz r10,1240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1240);
	// rlwimi r10,r24,14,16,18
	ctx.r10.u64 = (__builtin_rotateleft32(r24.u32, 14) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r10,1240(r11)
	PPC_STORE_U32(r11.u32 + 1240, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823046c8
	if (!cr6.eq) goto loc_823046C8;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_823046C8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bf2f0
	sub_823BF2F0(ctx, base);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823046e8
	if (!cr6.eq) goto loc_823046E8;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_823046E8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bf478
	sub_823BF478(ctx, base);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304708
	if (!cr6.eq) goto loc_82304708;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_82304708:
	// lwz r10,1216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1216);
	// rlwimi r10,r24,11,19,21
	ctx.r10.u64 = (__builtin_rotateleft32(r24.u32, 11) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r10,1216(r11)
	PPC_STORE_U32(r11.u32 + 1216, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304730
	if (!cr6.eq) goto loc_82304730;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_82304730:
	// lwz r10,1216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1216);
	// rlwimi r10,r24,14,16,18
	ctx.r10.u64 = (__builtin_rotateleft32(r24.u32, 14) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r10,1216(r11)
	PPC_STORE_U32(r11.u32 + 1216, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304758
	if (!cr6.eq) goto loc_82304758;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_82304758:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bf2f0
	sub_823BF2F0(ctx, base);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304778
	if (!cr6.eq) goto loc_82304778;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_82304778:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bf478
	sub_823BF478(ctx, base);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304798
	if (!cr6.eq) goto loc_82304798;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_82304798:
	// lwz r10,1264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1264);
	// rlwimi r10,r24,11,19,21
	ctx.r10.u64 = (__builtin_rotateleft32(r24.u32, 11) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r10,1264(r11)
	PPC_STORE_U32(r11.u32 + 1264, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 2097152;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823047c0
	if (!cr6.eq) goto loc_823047C0;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_823047C0:
	// lwz r10,1264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1264);
	// rlwimi r10,r24,14,16,18
	ctx.r10.u64 = (__builtin_rotateleft32(r24.u32, 14) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r10,1264(r11)
	PPC_STORE_U32(r11.u32 + 1264, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 2097152;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823047e8
	if (!cr6.eq) goto loc_823047E8;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_823047E8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bf2f0
	sub_823BF2F0(ctx, base);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304808
	if (!cr6.eq) goto loc_82304808;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_82304808:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bf478
	sub_823BF478(ctx, base);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304828
	if (!cr6.eq) goto loc_82304828;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_82304828:
	// lwz r10,1288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1288);
	// rlwimi r10,r24,11,19,21
	ctx.r10.u64 = (__builtin_rotateleft32(r24.u32, 11) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r10,1288(r11)
	PPC_STORE_U32(r11.u32 + 1288, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 1048576;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304850
	if (!cr6.eq) goto loc_82304850;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_82304850:
	// lwz r10,1288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1288);
	// rlwimi r10,r24,14,16,18
	ctx.r10.u64 = (__builtin_rotateleft32(r24.u32, 14) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r10,1288(r11)
	PPC_STORE_U32(r11.u32 + 1288, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 1048576;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304878
	if (!cr6.eq) goto loc_82304878;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_82304878:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bf2f0
	sub_823BF2F0(ctx, base);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304898
	if (!cr6.eq) goto loc_82304898;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_82304898:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bf478
	sub_823BF478(ctx, base);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823048b8
	if (!cr6.eq) goto loc_823048B8;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_823048B8:
	// lwz r10,1384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1384);
	// rlwinm r10,r10,0,22,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE3FF;
	// stw r10,1384(r11)
	PPC_STORE_U32(r11.u32 + 1384, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 65536;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823048e0
	if (!cr6.eq) goto loc_823048E0;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_823048E0:
	// lwz r10,1384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1384);
	// rlwinm r10,r10,0,19,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF1FFF;
	// stw r10,1384(r11)
	PPC_STORE_U32(r11.u32 + 1384, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 65536;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// lwz r11,724(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304908
	if (!cr6.eq) goto loc_82304908;
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_82304908:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bf2f0
	sub_823BF2F0(ctx, base);
	// lwz r3,724(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82304928
	if (!cr6.eq) goto loc_82304928;
	// lwz r3,236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 236);
loc_82304928:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x823bf478
	sub_823BF478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82302548
	sub_82302548(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,76(r22)
	ctx.r5.u64 = PPC_LOAD_U32(r22.u32 + 76);
	// bl 0x82306768
	sub_82306768(ctx, base);
	// bl 0x8226dd10
	sub_8226DD10(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8226dd10
	sub_8226DD10(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x8226dd10
	sub_8226DD10(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x8226dd10
	sub_8226DD10(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,78
	ctx.r4.s64 = 78;
	// stfs f1,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stfs f29,212(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f30,216(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x82306658
	sub_82306658(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lfs f0,212(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r22.u32 + 212);
	f0.f64 = double(temp.f32);
	// li r4,79
	ctx.r4.s64 = 79;
	// lfs f13,208(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f12,204(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,200(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,176(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bl 0x82306658
	sub_82306658(ctx, base);
	// lwz r11,224(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 224);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823049cc
	if (cr0.eq) goto loc_823049CC;
	// lwz r5,124(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// b 0x823049d0
	goto loc_823049D0;
loc_823049CC:
	// lwz r5,668(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 668);
loc_823049D0:
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823067d0
	sub_823067D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82302678
	sub_82302678(ctx, base);
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823049f8
	if (cr6.eq) goto loc_823049F8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x823049fc
	goto loc_823049FC;
loc_823049F8:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_823049FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,596(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// bl 0x823c0d58
	sub_823C0D58(ctx, base);
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82304a1c
	if (cr6.eq) goto loc_82304A1C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x82304a20
	goto loc_82304A20;
loc_82304A1C:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_82304A20:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c0a80
	sub_823C0A80(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82304a50
	if (cr6.eq) goto loc_82304A50;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82304a40
	if (cr6.eq) goto loc_82304A40;
	// li r6,16
	ctx.r6.s64 = 16;
	// b 0x82304a60
	goto loc_82304A60;
loc_82304A40:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82304a50
	if (cr6.eq) goto loc_82304A50;
	// li r6,15
	ctx.r6.s64 = 15;
	// b 0x82304a60
	goto loc_82304A60;
loc_82304A50:
	// subfic r11,r26,0
	xer.ca = r26.u32 <= 0;
	r11.s64 = 0 - r26.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// addi r6,r11,10
	ctx.r6.s64 = r11.s64 + 10;
loc_82304A60:
	// lwz r5,24(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r24,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, r24.u32);
	// lwz r11,260(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r5)
	PPC_STORE_U32(ctx.r5.u32 + 260, r11.u32);
	// bl 0x82300f20
	sub_82300F20(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f1,2480(r20)
	temp.u32 = PPC_LOAD_U32(r20.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,204(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lfs f0,22976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 22976);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,196(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f0,200(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lwz r11,588(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// lwz r10,724(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// beq cr6,0x82304ae8
	if (cr6.eq) goto loc_82304AE8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x82304aec
	goto loc_82304AEC;
loc_82304AE8:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_82304AEC:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c2770
	sub_823C2770(ctx, base);
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82304b24
	if (cr6.eq) goto loc_82304B24;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x82304b28
	goto loc_82304B28;
loc_82304B24:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_82304B28:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,592(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 592);
	// bl 0x823c0d58
	sub_823C0D58(ctx, base);
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82304b48
	if (cr6.eq) goto loc_82304B48;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x82304b4c
	goto loc_82304B4C;
loc_82304B48:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_82304B4C:
	// lwz r4,248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// bl 0x823c0a80
	sub_823C0A80(ctx, base);
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82304b68
	if (cr6.eq) goto loc_82304B68;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x82304b6c
	goto loc_82304B6C;
loc_82304B68:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
loc_82304B6C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ca718
	sub_823CA718(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821ead98
	sub_821EAD98(ctx, base);
	// stb r21,198(r31)
	PPC_STORE_U8(r31.u32 + 198, r21.u8);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f30,-120(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_82304B9C"))) PPC_WEAK_FUNC(sub_82304B9C);
PPC_FUNC_IMPL(__imp__sub_82304B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82304BA0"))) PPC_WEAK_FUNC(sub_82304BA0);
PPC_FUNC_IMPL(__imp__sub_82304BA0) {
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
	// bl 0x82303c40
	sub_82303C40(ctx, base);
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

__attribute__((alias("__imp__sub_82304C04"))) PPC_WEAK_FUNC(sub_82304C04);
PPC_FUNC_IMPL(__imp__sub_82304C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82304C08"))) PPC_WEAK_FUNC(sub_82304C08);
PPC_FUNC_IMPL(__imp__sub_82304C08) {
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
	// b 0x82304c38
	goto loc_82304C38;
loc_82304C28:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82304C38:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82304c28
	if (!cr6.eq) goto loc_82304C28;
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

__attribute__((alias("__imp__sub_82304C60"))) PPC_WEAK_FUNC(sub_82304C60);
PPC_FUNC_IMPL(__imp__sub_82304C60) {
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
	// blt cr6,0x82304ca8
	if (cr6.lt) goto loc_82304CA8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82304CA8:
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
	// bl 0x82302938
	sub_82302938(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82304ce0
	if (cr0.eq) goto loc_82304CE0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_82304CE0:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82304d00
	if (cr6.eq) goto loc_82304D00;
loc_82304CEC:
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
	// bne 0x82304cec
	if (!cr0.eq) goto loc_82304CEC;
loc_82304D00:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x82304d28
	if (!cr0.eq) goto loc_82304D28;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82304d28
	if (cr0.eq) goto loc_82304D28;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_82304D28:
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

__attribute__((alias("__imp__sub_82304D5C"))) PPC_WEAK_FUNC(sub_82304D5C);
PPC_FUNC_IMPL(__imp__sub_82304D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82304D60"))) PPC_WEAK_FUNC(sub_82304D60);
PPC_FUNC_IMPL(__imp__sub_82304D60) {
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
	// blt cr6,0x82304da8
	if (cr6.lt) goto loc_82304DA8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82304DA8:
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
	// bl 0x823029a0
	sub_823029A0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82304de0
	if (cr0.eq) goto loc_82304DE0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_82304DE0:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82304e00
	if (cr6.eq) goto loc_82304E00;
loc_82304DEC:
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
	// bne 0x82304dec
	if (!cr0.eq) goto loc_82304DEC;
loc_82304E00:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x82304e28
	if (!cr0.eq) goto loc_82304E28;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82304e28
	if (cr0.eq) goto loc_82304E28;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_82304E28:
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

__attribute__((alias("__imp__sub_82304E5C"))) PPC_WEAK_FUNC(sub_82304E5C);
PPC_FUNC_IMPL(__imp__sub_82304E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82304E60"))) PPC_WEAK_FUNC(sub_82304E60);
PPC_FUNC_IMPL(__imp__sub_82304E60) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// addi r25,r26,460
	r25.s64 = r26.s64 + 460;
	// lwz r31,0(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// b 0x82304ef4
	goto loc_82304EF4;
loc_82304E88:
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x823c46d0
	sub_823C46D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82304ef0
	if (!cr0.eq) goto loc_82304EF0;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// stb r11,217(r10)
	PPC_STORE_U8(ctx.r10.u32 + 217, r11.u8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82304ed4
	if (cr0.eq) goto loc_82304ED4;
	// bl 0x823c42e0
	sub_823C42E0(ctx, base);
	// stw r24,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r24.u32);
loc_82304ED4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82301740
	sub_82301740(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82304ef4
	goto loc_82304EF4;
loc_82304EF0:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82304EF4:
	// subf r11,r31,r25
	r11.s64 = r25.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82304e88
	if (!cr0.eq) goto loc_82304E88;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r29,r11,-6464
	r29.s64 = r11.s64 + -6464;
	// lwz r11,724(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304f24
	if (!cr6.eq) goto loc_82304F24;
	// lwz r11,236(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 236);
loc_82304F24:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823be690
	sub_823BE690(ctx, base);
	// lwz r11,724(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304f40
	if (!cr6.eq) goto loc_82304F40;
	// lwz r11,236(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 236);
loc_82304F40:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bda70
	sub_823BDA70(ctx, base);
	// lwz r11,724(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304f5c
	if (!cr6.eq) goto loc_82304F5C;
	// lwz r11,236(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 236);
loc_82304F5C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bda38
	sub_823BDA38(ctx, base);
	// lwz r11,724(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304f78
	if (!cr6.eq) goto loc_82304F78;
	// lwz r11,236(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 236);
loc_82304F78:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823be138
	sub_823BE138(ctx, base);
	// lwz r11,724(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304f94
	if (!cr6.eq) goto loc_82304F94;
	// lwz r11,236(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 236);
loc_82304F94:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823be0f8
	sub_823BE0F8(ctx, base);
	// lwz r31,724(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 724);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82304fb0
	if (!cr6.eq) goto loc_82304FB0;
	// lwz r31,236(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 236);
loc_82304FB0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82302290
	sub_82302290(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x823be168
	sub_823BE168(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// lwz r11,724(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 724);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82304ff4
	if (!cr6.eq) goto loc_82304FF4;
	// lwz r11,236(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 236);
loc_82304FF4:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823be7a0
	sub_823BE7A0(ctx, base);
	// lwz r11,724(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82305010
	if (!cr6.eq) goto loc_82305010;
	// lwz r11,236(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 236);
loc_82305010:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bec10
	sub_823BEC10(ctx, base);
	// lwz r3,724(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 724);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8230502c
	if (!cr6.eq) goto loc_8230502C;
	// lwz r3,236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 236);
loc_8230502C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823befc8
	sub_823BEFC8(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r27,r11,-5540
	r27.s64 = r11.s64 + -5540;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823062a0
	sub_823062A0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f31,180(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stfs f31,200(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,216(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,212(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f0,208(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82306be8
	sub_82306BE8(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823062f8
	sub_823062F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82308098
	sub_82308098(ctx, base);
	// li r4,16450
	ctx.r4.s64 = 16450;
	// lwz r3,236(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 236);
	// bl 0x823cbf70
	sub_823CBF70(ctx, base);
	// addi r28,r26,212
	r28.s64 = r26.s64 + 212;
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
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
	// beq 0x823051d8
	if (cr0.eq) goto loc_823051D8;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// lfs f30,2348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2348);
	f30.f64 = double(temp.f32);
loc_823050F0:
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r24,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r24.u64);
	// bl 0x82304ba0
	sub_82304BA0(ctx, base);
	// lwz r11,464(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 464);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addic. r30,r11,4
	xer.ca = r11.u32 > 4294967291;
	r30.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r5,600(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 600);
	// lwz r3,236(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 236);
	// beq 0x82305138
	if (cr0.eq) goto loc_82305138;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x823c4210
	sub_823C4210(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_82305138:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823c4448
	sub_823C4448(ctx, base);
	// li r7,20
	ctx.r7.s64 = 20;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,236(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 236);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwa r11,8(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 8));
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwa r11,12(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 12));
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, r11.u64);
	// lfd f0,136(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, r11.u64);
	// lfd f0,144(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x823c7478
	sub_823C7478(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823c4448
	sub_823C4448(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// bne 0x823050f0
	if (!cr0.eq) goto loc_823050F0;
loc_823051D8:
	// mr r11,r24
	r11.u64 = r24.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// stw r11,-5408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5408, r11.u32);
	// lwz r11,724(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823051f4
	if (!cr6.eq) goto loc_823051F4;
	// lwz r11,236(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 236);
loc_823051F4:
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823be690
	sub_823BE690(ctx, base);
	// lwz r11,724(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82305210
	if (!cr6.eq) goto loc_82305210;
	// lwz r11,236(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 236);
loc_82305210:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823bec10
	sub_823BEC10(ctx, base);
	// lwz r11,724(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8230522c
	if (!cr6.eq) goto loc_8230522C;
	// lwz r11,236(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 236);
loc_8230522C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823befc8
	sub_823BEFC8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82306208
	sub_82306208(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8230525C"))) PPC_WEAK_FUNC(sub_8230525C);
PPC_FUNC_IMPL(__imp__sub_8230525C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82305260"))) PPC_WEAK_FUNC(sub_82305260);
PPC_FUNC_IMPL(__imp__sub_82305260) {
	PPC_FUNC_PROLOGUE();
	// b 0x82304c08
	sub_82304C08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82305264"))) PPC_WEAK_FUNC(sub_82305264);
PPC_FUNC_IMPL(__imp__sub_82305264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82305268"))) PPC_WEAK_FUNC(sub_82305268);
PPC_FUNC_IMPL(__imp__sub_82305268) {
	PPC_FUNC_PROLOGUE();
	// b 0x82301798
	sub_82301798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230526C"))) PPC_WEAK_FUNC(sub_8230526C);
PPC_FUNC_IMPL(__imp__sub_8230526C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82305270"))) PPC_WEAK_FUNC(sub_82305270);
PPC_FUNC_IMPL(__imp__sub_82305270) {
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
	// beq cr6,0x823052b0
	if (cr6.eq) goto loc_823052B0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823052a0
	if (cr0.eq) goto loc_823052A0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_823052A0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x823052c4
	goto loc_823052C4;
loc_823052B0:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82304c60
	sub_82304C60(ctx, base);
loc_823052C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

