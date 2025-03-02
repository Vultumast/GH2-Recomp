#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821E7EC4"))) PPC_WEAK_FUNC(sub_821E7EC4);
PPC_FUNC_IMPL(__imp__sub_821E7EC4) {
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
	// bl 0x82126e68
	sub_82126E68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7EF0"))) PPC_WEAK_FUNC(sub_821E7EF0);
PPC_FUNC_IMPL(__imp__sub_821E7EF0) {
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
	// bl 0x82221420
	sub_82221420(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7F1C"))) PPC_WEAK_FUNC(sub_821E7F1C);
PPC_FUNC_IMPL(__imp__sub_821E7F1C) {
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
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// bl 0x821e7db8
	sub_821E7DB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7F48"))) PPC_WEAK_FUNC(sub_821E7F48);
PPC_FUNC_IMPL(__imp__sub_821E7F48) {
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
	// bl 0x821e7438
	sub_821E7438(ctx, base);
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

__attribute__((alias("__imp__sub_821E7F78"))) PPC_WEAK_FUNC(sub_821E7F78);
PPC_FUNC_IMPL(__imp__sub_821E7F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// bl 0x8239d5e8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	f0.f64 = double(temp.f32);
	// fmr f29,f13
	f29.f64 = ctx.f13.f64;
	// lfs f28,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f28.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// beq cr6,0x821e8014
	if (cr6.eq) goto loc_821E8014;
	// fdivs f29,f31,f0
	f29.f64 = double(float(f31.f64 / f0.f64));
	// fcmpu cr6,f29,f13
	cr6.compare(f29.f64, ctx.f13.f64);
	// blt cr6,0x821e7ff0
	if (cr6.lt) goto loc_821E7FF0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// fmr f29,f13
	f29.f64 = ctx.f13.f64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e7fe8
	if (cr0.eq) goto loc_821E7FE8;
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
loc_821E7FE8:
	// stfs f28,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// b 0x821e8034
	goto loc_821E8034;
loc_821E7FF0:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x821e8034
	if (!cr6.eq) goto loc_821E8034;
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(f31.f64 - ctx.f13.f64));
	// stfs f31,80(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fdivs f29,f12,f0
	f29.f64 = double(float(ctx.f12.f64 / f0.f64));
	// b 0x821e8034
	goto loc_821E8034;
loc_821E8014:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821e8034
	if (cr0.eq) goto loc_821E8034;
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
loc_821E8034:
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// lbz r11,104(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 104);
	// lfs f13,100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f30,f0,f31,f13
	f30.f64 = double(float(f0.f64 * f31.f64 + ctx.f13.f64));
	// lfs f0,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	f0.f64 = double(temp.f32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821e8068
	if (cr0.eq) goto loc_821E8068;
	// lfs f31,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f31.f64 = double(temp.f32);
	// fsubs f2,f0,f31
	ctx.f2.f64 = double(float(f0.f64 - f31.f64));
	// fsubs f1,f30,f31
	ctx.f1.f64 = double(float(f30.f64 - f31.f64));
	// bl 0x82192610
	sub_82192610(ctx, base);
	// fadds f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + f31.f64));
	// b 0x821e8088
	goto loc_821E8088;
loc_821E8068:
	// lfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// ble cr6,0x821e807c
	if (!cr6.gt) goto loc_821E807C;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// b 0x821e8088
	goto loc_821E8088;
loc_821E807C:
	// fcmpu cr6,f30,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, ctx.f1.f64);
	// blt cr6,0x821e8088
	if (cr6.lt) goto loc_821E8088;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
loc_821E8088:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,104(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 104);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821e80f4
	if (!cr0.eq) goto loc_821E80F4;
	// lbz r11,76(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 76);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821e80f4
	if (!cr0.eq) goto loc_821E80F4;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// bne cr6,0x821e80f4
	if (!cr6.eq) goto loc_821E80F4;
	// lfs f0,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bgt cr6,0x821e80dc
	if (cr6.gt) goto loc_821E80DC;
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x821e80f4
	if (!cr6.lt) goto loc_821E80F4;
loc_821E80DC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821E80F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8239d634
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8110"))) PPC_WEAK_FUNC(sub_821E8110);
PPC_FUNC_IMPL(__imp__sub_821E8110) {
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
	// bne cr6,0x821e815c
	if (!cr6.eq) goto loc_821E815C;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,12032
	ctx.r6.s64 = r11.s64 + 12032;
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
	// bl 0x821e78a8
	sub_821E78A8(ctx, base);
loc_821E815C:
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

__attribute__((alias("__imp__sub_821E8170"))) PPC_WEAK_FUNC(sub_821E8170);
PPC_FUNC_IMPL(__imp__sub_821E8170) {
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
	// bl 0x82126780
	sub_82126780(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e81a0
	if (cr0.eq) goto loc_821E81A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_821E81A0:
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

__attribute__((alias("__imp__sub_821E81BC"))) PPC_WEAK_FUNC(sub_821E81BC);
PPC_FUNC_IMPL(__imp__sub_821E81BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E81C0"))) PPC_WEAK_FUNC(sub_821E81C0);
PPC_FUNC_IMPL(__imp__sub_821E81C0) {
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
	// bl 0x821e7730
	sub_821E7730(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e81f0
	if (cr0.eq) goto loc_821E81F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_821E81F0:
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

__attribute__((alias("__imp__sub_821E820C"))) PPC_WEAK_FUNC(sub_821E820C);
PPC_FUNC_IMPL(__imp__sub_821E820C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8210"))) PPC_WEAK_FUNC(sub_821E8210);
PPC_FUNC_IMPL(__imp__sub_821E8210) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x821e7ac8
	sub_821E7AC8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x821e825c
	if (cr6.eq) goto loc_821E825C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
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
loc_821E825C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821E8268"))) PPC_WEAK_FUNC(sub_821E8268);
PPC_FUNC_IMPL(__imp__sub_821E8268) {
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
	// bl 0x821e7a00
	sub_821E7A00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821E82C0"))) PPC_WEAK_FUNC(sub_821E82C0);
PPC_FUNC_IMPL(__imp__sub_821E82C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821e7cf0
	sub_821E7CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E82CC"))) PPC_WEAK_FUNC(sub_821E82CC);
PPC_FUNC_IMPL(__imp__sub_821E82CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E82D0"))) PPC_WEAK_FUNC(sub_821E82D0);
PPC_FUNC_IMPL(__imp__sub_821E82D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821e7b78
	sub_821E7B78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E82DC"))) PPC_WEAK_FUNC(sub_821E82DC);
PPC_FUNC_IMPL(__imp__sub_821E82DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E82E0"))) PPC_WEAK_FUNC(sub_821E82E0);
PPC_FUNC_IMPL(__imp__sub_821E82E0) {
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
	// beq 0x821e8310
	if (cr0.eq) goto loc_821E8310;
	// addi r3,r31,-20
	ctx.r3.s64 = r31.s64 + -20;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821E8310:
	// addi r3,r31,-20
	ctx.r3.s64 = r31.s64 + -20;
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

__attribute__((alias("__imp__sub_821E832C"))) PPC_WEAK_FUNC(sub_821E832C);
PPC_FUNC_IMPL(__imp__sub_821E832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8330"))) PPC_WEAK_FUNC(sub_821E8330);
PPC_FUNC_IMPL(__imp__sub_821E8330) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,36
	r11.s64 = r11.s64 + 36;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821e83d8
	if (cr0.eq) goto loc_821E83D8;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,12032
	r28.s64 = r11.s64 + 12032;
loc_821E837C:
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
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x821e83e4
	if (!cr0.eq) goto loc_821E83E4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,36
	r11.s64 = r11.s64 + 36;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821e837c
	if (!cr0.eq) goto loc_821E837C;
loc_821E83D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E83DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_821E83E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821e83dc
	goto loc_821E83DC;
}

__attribute__((alias("__imp__sub_821E83EC"))) PPC_WEAK_FUNC(sub_821E83EC);
PPC_FUNC_IMPL(__imp__sub_821E83EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E83F0"))) PPC_WEAK_FUNC(sub_821E83F0);
PPC_FUNC_IMPL(__imp__sub_821E83F0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,36
	r11.s64 = r11.s64 + 36;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821e84bc
	if (cr0.eq) goto loc_821E84BC;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,12032
	r28.s64 = r11.s64 + 12032;
loc_821E843C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e8494
	if (cr0.eq) goto loc_821E8494;
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
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r31,36(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 36);
loc_821E8494:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,36
	r11.s64 = r11.s64 + 36;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821e843c
	if (!cr0.eq) goto loc_821E843C;
loc_821E84BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821E84C4"))) PPC_WEAK_FUNC(sub_821E84C4);
PPC_FUNC_IMPL(__imp__sub_821E84C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E84C8"))) PPC_WEAK_FUNC(sub_821E84C8);
PPC_FUNC_IMPL(__imp__sub_821E84C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,6096(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 6096);
	// mflr r12
	// bl 0x8239bce0
	// addi r12,r1,-88
	r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8239d5e4
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// stfs f31,260(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
	// stfs f30,268(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 268, temp.u32);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// fmr f28,f3
	f28.f64 = ctx.f3.f64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// fmr f29,f4
	f29.f64 = ctx.f4.f64;
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r30,40
	r29.s64 = r30.s64 + 40;
	// addi r11,r11,5844
	r11.s64 = r11.s64 + 5844;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r27,0
	r27.s64 = 0;
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r27.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,6028
	r11.s64 = r11.s64 + 6028;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r25,r30,52
	r25.s64 = r30.s64 + 52;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82146cb0
	sub_82146CB0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-29764
	r11.s64 = r11.s64 + -29764;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r26,r30,64
	r26.s64 = r30.s64 + 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821e7818
	sub_821E7818(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,6044
	r11.s64 = r11.s64 + 6044;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f29,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r30.u32 + 84, temp.u32);
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// stb r27,76(r30)
	PPC_STORE_U8(r30.u32 + 76, r27.u8);
	// stb r28,104(r30)
	PPC_STORE_U8(r30.u32 + 104, r28.u8);
	// lfs f27,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f27.f64 = double(temp.f32);
	// addi r11,r31,268
	r11.s64 = r31.s64 + 268;
	// stfs f27,80(r30)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// blt cr6,0x821e85a4
	if (cr6.lt) goto loc_821E85A4;
	// addi r11,r31,260
	r11.s64 = r31.s64 + 260;
loc_821E85A4:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// stfs f13,88(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// addi r11,r31,268
	r11.s64 = r31.s64 + 268;
	// blt cr6,0x821e85bc
	if (cr6.lt) goto loc_821E85BC;
	// addi r11,r31,260
	r11.s64 = r31.s64 + 260;
loc_821E85BC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// stfs f0,92(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 92, temp.u32);
	// bge cr6,0x821e85d8
	if (!cr6.lt) goto loc_821E85D8;
	// stfs f28,96(r30)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r30.u32 + 96, temp.u32);
	// stfs f13,100(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 100, temp.u32);
	// b 0x821e85e4
	goto loc_821E85E4;
loc_821E85D8:
	// fneg f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f28.u64 ^ 0x8000000000000000;
	// stfs f0,100(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 100, temp.u32);
	// stfs f13,96(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 96, temp.u32);
loc_821E85E4:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e8690
	if (cr0.eq) goto loc_821E8690;
	// addi r22,r3,32
	r22.s64 = ctx.r3.s64 + 32;
	// lwz r27,0(r22)
	r27.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// b 0x821e8668
	goto loc_821E8668;
loc_821E860C:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x821e8664
	if (cr0.eq) goto loc_821E8664;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821e7438
	sub_821E7438(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821e8684
	if (!cr0.eq) goto loc_821E8684;
loc_821E8664:
	// lwz r27,0(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_821E8668:
	// subf r11,r27,r22
	r11.s64 = r22.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821e860c
	if (!cr0.eq) goto loc_821E860C;
	// b 0x821e8690
	goto loc_821E8690;
loc_821E8684:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821e78a8
	sub_821E78A8(ctx, base);
loc_821E8690:
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 84);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// beq cr6,0x821e86b0
	if (cr6.eq) goto loc_821E86B0;
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821e86b0
	if (cr0.eq) goto loc_821E86B0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,76(r11)
	PPC_STORE_U8(r11.u32 + 76, ctx.r10.u8);
loc_821E86B0:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82126ba0
	sub_82126BA0(ctx, base);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82120148
	sub_82120148(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
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
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// addi r12,r1,-88
	r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8239d630
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_821E84D0"))) PPC_WEAK_FUNC(sub_821E84D0);
PPC_FUNC_IMPL(__imp__sub_821E84D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// addi r12,r1,-88
	r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8239d5e4
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// stfs f31,260(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
	// stfs f30,268(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 268, temp.u32);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// fmr f28,f3
	f28.f64 = ctx.f3.f64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// fmr f29,f4
	f29.f64 = ctx.f4.f64;
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r30,40
	r29.s64 = r30.s64 + 40;
	// addi r11,r11,5844
	r11.s64 = r11.s64 + 5844;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r27,0
	r27.s64 = 0;
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r27.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,6028
	r11.s64 = r11.s64 + 6028;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r25,r30,52
	r25.s64 = r30.s64 + 52;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82146cb0
	sub_82146CB0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-29764
	r11.s64 = r11.s64 + -29764;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r26,r30,64
	r26.s64 = r30.s64 + 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821e7818
	sub_821E7818(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,6044
	r11.s64 = r11.s64 + 6044;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f29,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r30.u32 + 84, temp.u32);
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// stb r27,76(r30)
	PPC_STORE_U8(r30.u32 + 76, r27.u8);
	// stb r28,104(r30)
	PPC_STORE_U8(r30.u32 + 104, r28.u8);
	// lfs f27,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f27.f64 = double(temp.f32);
	// addi r11,r31,268
	r11.s64 = r31.s64 + 268;
	// stfs f27,80(r30)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// blt cr6,0x821e85a4
	if (cr6.lt) goto loc_821E85A4;
	// addi r11,r31,260
	r11.s64 = r31.s64 + 260;
loc_821E85A4:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// stfs f13,88(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// addi r11,r31,268
	r11.s64 = r31.s64 + 268;
	// blt cr6,0x821e85bc
	if (cr6.lt) goto loc_821E85BC;
	// addi r11,r31,260
	r11.s64 = r31.s64 + 260;
loc_821E85BC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// stfs f0,92(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 92, temp.u32);
	// bge cr6,0x821e85d8
	if (!cr6.lt) goto loc_821E85D8;
	// stfs f28,96(r30)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r30.u32 + 96, temp.u32);
	// stfs f13,100(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 100, temp.u32);
	// b 0x821e85e4
	goto loc_821E85E4;
loc_821E85D8:
	// fneg f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f28.u64 ^ 0x8000000000000000;
	// stfs f0,100(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 100, temp.u32);
	// stfs f13,96(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 96, temp.u32);
loc_821E85E4:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e8690
	if (cr0.eq) goto loc_821E8690;
	// addi r22,r3,32
	r22.s64 = ctx.r3.s64 + 32;
	// lwz r27,0(r22)
	r27.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// b 0x821e8668
	goto loc_821E8668;
loc_821E860C:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x821e8664
	if (cr0.eq) goto loc_821E8664;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821e7438
	sub_821E7438(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821e8684
	if (!cr0.eq) goto loc_821E8684;
loc_821E8664:
	// lwz r27,0(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_821E8668:
	// subf r11,r27,r22
	r11.s64 = r22.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821e860c
	if (!cr0.eq) goto loc_821E860C;
	// b 0x821e8690
	goto loc_821E8690;
loc_821E8684:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821e78a8
	sub_821E78A8(ctx, base);
loc_821E8690:
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 84);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// beq cr6,0x821e86b0
	if (cr6.eq) goto loc_821E86B0;
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821e86b0
	if (cr0.eq) goto loc_821E86B0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,76(r11)
	PPC_STORE_U8(r11.u32 + 76, ctx.r10.u8);
loc_821E86B0:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82126ba0
	sub_82126BA0(ctx, base);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82120148
	sub_82120148(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
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
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// addi r12,r1,-88
	r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8239d630
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_821E8704"))) PPC_WEAK_FUNC(sub_821E8704);
PPC_FUNC_IMPL(__imp__sub_821E8704) {
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
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// bl 0x821e7720
	sub_821E7720(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E872C"))) PPC_WEAK_FUNC(sub_821E872C);
PPC_FUNC_IMPL(__imp__sub_821E872C) {
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

__attribute__((alias("__imp__sub_821E8754"))) PPC_WEAK_FUNC(sub_821E8754);
PPC_FUNC_IMPL(__imp__sub_821E8754) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x82126e68
	sub_82126E68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8780"))) PPC_WEAK_FUNC(sub_821E8780);
PPC_FUNC_IMPL(__imp__sub_821E8780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x82221420
	sub_82221420(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E87AC"))) PPC_WEAK_FUNC(sub_821E87AC);
PPC_FUNC_IMPL(__imp__sub_821E87AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// bl 0x821e7db8
	sub_821E7DB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E87D8"))) PPC_WEAK_FUNC(sub_821E87D8);
PPC_FUNC_IMPL(__imp__sub_821E87D8) {
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
	// bl 0x821e7e18
	sub_821E7E18(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e880c
	if (cr0.eq) goto loc_821E880C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_821E880C:
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

__attribute__((alias("__imp__sub_821E8828"))) PPC_WEAK_FUNC(sub_821E8828);
PPC_FUNC_IMPL(__imp__sub_821E8828) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x821e88c4
	if (!cr6.eq) goto loc_821E88C4;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821e885c
	if (!cr0.eq) goto loc_821E885C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821e886c
	goto loc_821E886C;
loc_821E885C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_821E886C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x821e88c4
	if (!cr6.eq) goto loc_821E88C4;
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821e88ac
	if (cr0.eq) goto loc_821E88AC;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x821e88ac
	if (!cr6.eq) goto loc_821E88AC;
	// addi r31,r30,64
	r31.s64 = r30.s64 + 64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e88ac
	if (cr0.eq) goto loc_821E88AC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_821E88AC:
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
loc_821E88C4:
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

__attribute__((alias("__imp__sub_821E88DC"))) PPC_WEAK_FUNC(sub_821E88DC);
PPC_FUNC_IMPL(__imp__sub_821E88DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E88E0"))) PPC_WEAK_FUNC(sub_821E88E0);
PPC_FUNC_IMPL(__imp__sub_821E88E0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x821e891c
	if (!cr6.eq) goto loc_821E891C;
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
	// b 0x821e89dc
	goto loc_821E89DC;
loc_821E891C:
	// lwz r31,8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x821e89dc
	if (cr0.eq) goto loc_821E89DC;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r26,r11,920
	r26.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r25,r11,1712
	r25.s64 = r11.s64 + 1712;
loc_821E8938:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821e8954
	if (cr0.eq) goto loc_821E8954;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821E8954:
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x821e89d0
	if (!cr6.eq) goto loc_821E89D0;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x821e8994
	if (!cr6.eq) goto loc_821E8994;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x821e8994
	if (!cr6.eq) goto loc_821E8994;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7910
	sub_821E7910(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x821e89d4
	goto loc_821E89D4;
loc_821E8994:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x821e89d0
	if (cr6.eq) goto loc_821E89D0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_821E89D0:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_821E89D4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x821e8938
	if (!cr6.eq) goto loc_821E8938;
loc_821E89DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821E89E4"))) PPC_WEAK_FUNC(sub_821E89E4);
PPC_FUNC_IMPL(__imp__sub_821E89E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E89E8"))) PPC_WEAK_FUNC(sub_821E89E8);
PPC_FUNC_IMPL(__imp__sub_821E89E8) {
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
	// b 0x821e8a24
	goto loc_821E8A24;
loc_821E8A04:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821e7910
	sub_821E7910(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_821E8A24:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x821e8a04
	if (!cr6.eq) goto loc_821E8A04;
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

__attribute__((alias("__imp__sub_821E8A48"))) PPC_WEAK_FUNC(sub_821E8A48);
PPC_FUNC_IMPL(__imp__sub_821E8A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,6192(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 6192);
	// mflr r12
	// bl 0x8239bcf0
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d5e8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r5,r11,5304
	ctx.r5.s64 = r11.s64 + 5304;
	// li r4,108
	ctx.r4.s64 = 108;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,11868
	r28.s64 = r11.s64 + 11868;
	// beq 0x821e8b18
	if (cr0.eq) goto loc_821E8B18;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r10,r28,16
	ctx.r10.s64 = r28.s64 + 16;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfsx f31,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f31.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f28.f64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// bl 0x821e84d0
	sub_821E84D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x821e8b1c
	goto loc_821E8B1C;
loc_821E8B18:
	// li r29,0
	r29.s64 = 0;
loc_821E8B1C:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e8b38
	if (cr0.eq) goto loc_821E8B38;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821e8b38
	if (cr0.eq) goto loc_821E8B38;
	// bl 0x821e7dc0
	sub_821E7DC0(ctx, base);
	// fadds f29,f1,f29
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64 + f29.f64));
loc_821E8B38:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r28
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x82314420
	sub_82314420(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d634
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821E8A50"))) PPC_WEAK_FUNC(sub_821E8A50);
PPC_FUNC_IMPL(__imp__sub_821E8A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d5e8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r5,r11,5304
	ctx.r5.s64 = r11.s64 + 5304;
	// li r4,108
	ctx.r4.s64 = 108;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,11868
	r28.s64 = r11.s64 + 11868;
	// beq 0x821e8b18
	if (cr0.eq) goto loc_821E8B18;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r10,r28,16
	ctx.r10.s64 = r28.s64 + 16;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfsx f31,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f31.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f28.f64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// bl 0x821e84d0
	sub_821E84D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x821e8b1c
	goto loc_821E8B1C;
loc_821E8B18:
	// li r29,0
	r29.s64 = 0;
loc_821E8B1C:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e8b38
	if (cr0.eq) goto loc_821E8B38;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821e8b38
	if (cr0.eq) goto loc_821E8B38;
	// bl 0x821e7dc0
	sub_821E7DC0(ctx, base);
	// fadds f29,f1,f29
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64 + f29.f64));
loc_821E8B38:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r28
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x82314420
	sub_82314420(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d634
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821E8B6C"))) PPC_WEAK_FUNC(sub_821E8B6C);
PPC_FUNC_IMPL(__imp__sub_821E8B6C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x821e7420
	sub_821E7420(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8B94"))) PPC_WEAK_FUNC(sub_821E8B94);
PPC_FUNC_IMPL(__imp__sub_821E8B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8B98"))) PPC_WEAK_FUNC(sub_821E8B98);
PPC_FUNC_IMPL(__imp__sub_821E8B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,6288(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 6288);
	// mflr r12
	// bl 0x8239bcec
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8239d5e0
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32136
	r30.s64 = -2106064896;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// fmr f26,f2
	f26.f64 = ctx.f2.f64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// fmr f31,f3
	f31.f64 = ctx.f3.f64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// fmr f29,f4
	f29.f64 = ctx.f4.f64;
	// fmr f30,f5
	f30.f64 = ctx.f5.f64;
	// lwz r11,12268(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12268);
	// fmr f28,f6
	f28.f64 = ctx.f6.f64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12264
	r29.s64 = ctx.r10.s64 + 12264;
	// bne 0x821e8c10
	if (!cr0.eq) goto loc_821E8C10;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12268(r30)
	PPC_STORE_U32(r30.u32 + 12268, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-10280
	ctx.r4.s64 = r11.s64 + -10280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12268(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12268);
loc_821E8C10:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,12260
	r28.s64 = ctx.r10.s64 + 12260;
	// bne 0x821e8c38
	if (!cr0.eq) goto loc_821E8C38;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12268(r30)
	PPC_STORE_U32(r30.u32 + 12268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,6256
	ctx.r4.s64 = r11.s64 + 6256;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821E8C38:
	// lwz r30,300(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e8c54
	if (cr0.eq) goto loc_821E8C54;
	// lfs f31,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	f31.f64 = double(temp.f32);
loc_821E8C54:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// addi r29,r11,11868
	r29.s64 = r11.s64 + 11868;
	// beq cr6,0x821e8c7c
	if (cr6.eq) goto loc_821E8C7C;
	// fsubs f0,f29,f31
	f0.f64 = double(float(f29.f64 - f31.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fdivs f30,f0,f30
	f30.f64 = double(float(f0.f64 / f30.f64));
	// b 0x821e8c8c
	goto loc_821E8C8C;
loc_821E8C7C:
	// addi r11,r29,16
	r11.s64 = r29.s64 + 16;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// fmuls f30,f0,f28
	f30.f64 = double(float(f0.f64 * f28.f64));
loc_821E8C8C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r5,r11,5304
	ctx.r5.s64 = r11.s64 + 5304;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e8ce0
	if (cr0.eq) goto loc_821E8CE0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f27.f64;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// bl 0x821e84d0
	sub_821E84D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821e8ce4
	goto loc_821E8CE4;
loc_821E8CE0:
	// li r30,0
	r30.s64 = 0;
loc_821E8CE4:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e8d00
	if (cr0.eq) goto loc_821E8D00;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821e8d00
	if (cr0.eq) goto loc_821E8D00;
	// bl 0x821e7dc0
	sub_821E7DC0(ctx, base);
	// fadds f26,f1,f26
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(ctx.f1.f64 + f26.f64));
loc_821E8D00:
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// lwzx r5,r10,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// bl 0x82314420
	sub_82314420(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8239d62c
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821E8BA0"))) PPC_WEAK_FUNC(sub_821E8BA0);
PPC_FUNC_IMPL(__imp__sub_821E8BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x8239bcec
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8239d5e0
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32136
	r30.s64 = -2106064896;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// fmr f26,f2
	f26.f64 = ctx.f2.f64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// fmr f31,f3
	f31.f64 = ctx.f3.f64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// fmr f29,f4
	f29.f64 = ctx.f4.f64;
	// fmr f30,f5
	f30.f64 = ctx.f5.f64;
	// lwz r11,12268(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12268);
	// fmr f28,f6
	f28.f64 = ctx.f6.f64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12264
	r29.s64 = ctx.r10.s64 + 12264;
	// bne 0x821e8c10
	if (!cr0.eq) goto loc_821E8C10;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12268(r30)
	PPC_STORE_U32(r30.u32 + 12268, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-10280
	ctx.r4.s64 = r11.s64 + -10280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12268(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12268);
loc_821E8C10:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,12260
	r28.s64 = ctx.r10.s64 + 12260;
	// bne 0x821e8c38
	if (!cr0.eq) goto loc_821E8C38;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12268(r30)
	PPC_STORE_U32(r30.u32 + 12268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,6256
	ctx.r4.s64 = r11.s64 + 6256;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821E8C38:
	// lwz r30,300(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e8c54
	if (cr0.eq) goto loc_821E8C54;
	// lfs f31,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	f31.f64 = double(temp.f32);
loc_821E8C54:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// addi r29,r11,11868
	r29.s64 = r11.s64 + 11868;
	// beq cr6,0x821e8c7c
	if (cr6.eq) goto loc_821E8C7C;
	// fsubs f0,f29,f31
	f0.f64 = double(float(f29.f64 - f31.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fdivs f30,f0,f30
	f30.f64 = double(float(f0.f64 / f30.f64));
	// b 0x821e8c8c
	goto loc_821E8C8C;
loc_821E8C7C:
	// addi r11,r29,16
	r11.s64 = r29.s64 + 16;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// fmuls f30,f0,f28
	f30.f64 = double(float(f0.f64 * f28.f64));
loc_821E8C8C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r5,r11,5304
	ctx.r5.s64 = r11.s64 + 5304;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e8ce0
	if (cr0.eq) goto loc_821E8CE0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f27.f64;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// bl 0x821e84d0
	sub_821E84D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821e8ce4
	goto loc_821E8CE4;
loc_821E8CE0:
	// li r30,0
	r30.s64 = 0;
loc_821E8CE4:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e8d00
	if (cr0.eq) goto loc_821E8D00;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821e8d00
	if (cr0.eq) goto loc_821E8D00;
	// bl 0x821e7dc0
	sub_821E7DC0(ctx, base);
	// fadds f26,f1,f26
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(ctx.f1.f64 + f26.f64));
loc_821E8D00:
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// lwzx r5,r10,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// bl 0x82314420
	sub_82314420(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8239d62c
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821E8D30"))) PPC_WEAK_FUNC(sub_821E8D30);
PPC_FUNC_IMPL(__imp__sub_821E8D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12268
	r11.s64 = r11.s64 + 12268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12268
	ctx.r10.s64 = ctx.r10.s64 + 12268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8D58"))) PPC_WEAK_FUNC(sub_821E8D58);
PPC_FUNC_IMPL(__imp__sub_821E8D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12268
	r11.s64 = r11.s64 + 12268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12268
	ctx.r10.s64 = ctx.r10.s64 + 12268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8D80"))) PPC_WEAK_FUNC(sub_821E8D80);
PPC_FUNC_IMPL(__imp__sub_821E8D80) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x821e7420
	sub_821E7420(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8DA8"))) PPC_WEAK_FUNC(sub_821E8DA8);
PPC_FUNC_IMPL(__imp__sub_821E8DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,6392(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 6392);
	// mflr r12
	// bl 0x8239bcfc
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8239d5e4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// lfs f27,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f27.f64 = double(temp.f32);
	// fcmpu cr6,f3,f27
	cr6.compare(ctx.f3.f64, f27.f64);
	// beq cr6,0x821e8dfc
	if (cr6.eq) goto loc_821E8DFC;
	// fsubs f0,f29,f30
	f0.f64 = double(float(f29.f64 - f30.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fdivs f31,f0,f3
	f31.f64 = double(float(f0.f64 / ctx.f3.f64));
	// b 0x821e8e24
	goto loc_821E8E24;
loc_821E8DFC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,88
	ctx.r9.s64 = r31.s64 + 88;
	// lfs f0,8748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8748);
	f0.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lfs f13,6376(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6376);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lfsx f31,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	f31.f64 = double(temp.f32);
loc_821E8E24:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r5,r11,5304
	ctx.r5.s64 = r11.s64 + 5304;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e8e68
	if (cr0.eq) goto loc_821E8E68;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f28.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821e84d0
	sub_821E84D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821e8e6c
	goto loc_821E8E6C;
loc_821E8E68:
	// li r30,0
	r30.s64 = 0;
loc_821E8E6C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82314420
	sub_82314420(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8239d630
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821E8DB0"))) PPC_WEAK_FUNC(sub_821E8DB0);
PPC_FUNC_IMPL(__imp__sub_821E8DB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f27{};
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
	// bl 0x8239d5e4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// lfs f27,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f27.f64 = double(temp.f32);
	// fcmpu cr6,f3,f27
	cr6.compare(ctx.f3.f64, f27.f64);
	// beq cr6,0x821e8dfc
	if (cr6.eq) goto loc_821E8DFC;
	// fsubs f0,f29,f30
	f0.f64 = double(float(f29.f64 - f30.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fdivs f31,f0,f3
	f31.f64 = double(float(f0.f64 / ctx.f3.f64));
	// b 0x821e8e24
	goto loc_821E8E24;
loc_821E8DFC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,88
	ctx.r9.s64 = r31.s64 + 88;
	// lfs f0,8748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8748);
	f0.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lfs f13,6376(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6376);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lfsx f31,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	f31.f64 = double(temp.f32);
loc_821E8E24:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r5,r11,5304
	ctx.r5.s64 = r11.s64 + 5304;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e8e68
	if (cr0.eq) goto loc_821E8E68;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f28.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821e84d0
	sub_821E84D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821e8e6c
	goto loc_821E8E6C;
loc_821E8E68:
	// li r30,0
	r30.s64 = 0;
loc_821E8E6C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82314420
	sub_82314420(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8239d630
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821E8E98"))) PPC_WEAK_FUNC(sub_821E8E98);
PPC_FUNC_IMPL(__imp__sub_821E8E98) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x821e7420
	sub_821E7420(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8EC0"))) PPC_WEAK_FUNC(sub_821E8EC0);
PPC_FUNC_IMPL(__imp__sub_821E8EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,6576(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 6576);
	// mflr r12
	// bl 0x8239bcc8
	// stfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f29.u64);
	// stfd f30,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r17,0
	r17.s64 = 0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r17,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r17.u32);
	// lfs f29,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f29.f64 = double(temp.f32);
	// stfs f29,92(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stfs f29,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// stw r17,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r17.u32);
	// addi r10,r11,11868
	ctx.r10.s64 = r11.s64 + 11868;
	// stb r17,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r17.u8);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r9,12(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lfsx f29,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	f29.f64 = double(temp.f32);
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r23,r10,12304
	r23.s64 = ctx.r10.s64 + 12304;
	// bne 0x821e8fac
	if (!cr0.eq) goto loc_821E8FAC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,6488
	ctx.r4.s64 = r11.s64 + 6488;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
loc_821E8FAC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r22,r10,12300
	r22.s64 = ctx.r10.s64 + 12300;
	// bne 0x821e8fd8
	if (!cr0.eq) goto loc_821E8FD8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r11,31076
	ctx.r4.s64 = r11.s64 + 31076;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
loc_821E8FD8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r21,r10,12296
	r21.s64 = ctx.r10.s64 + 12296;
	// bne 0x821e9004
	if (!cr0.eq) goto loc_821E9004;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r4,r11,6256
	ctx.r4.s64 = r11.s64 + 6256;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
loc_821E9004:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r20,r10,12292
	r20.s64 = ctx.r10.s64 + 12292;
	// bne 0x821e9030
	if (!cr0.eq) goto loc_821E9030;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r4,r11,-10280
	ctx.r4.s64 = r11.s64 + -10280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
loc_821E9030:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r19,r10,12288
	r19.s64 = ctx.r10.s64 + 12288;
	// bne 0x821e905c
	if (!cr0.eq) goto loc_821E905C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r4,r11,6480
	ctx.r4.s64 = r11.s64 + 6480;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
loc_821E905C:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r25,r10,12284
	r25.s64 = ctx.r10.s64 + 12284;
	// bne 0x821e9088
	if (!cr0.eq) goto loc_821E9088;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,6472
	ctx.r4.s64 = r11.s64 + 6472;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
loc_821E9088:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r26,r10,12280
	r26.s64 = ctx.r10.s64 + 12280;
	// bne 0x821e90b4
	if (!cr0.eq) goto loc_821E90B4;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,6464
	ctx.r4.s64 = r11.s64 + 6464;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
loc_821E90B4:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,12276
	r28.s64 = ctx.r10.s64 + 12276;
	// bne 0x821e90e0
	if (!cr0.eq) goto loc_821E90E0;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = r11.s64 + 18664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
loc_821E90E0:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12272
	r29.s64 = ctx.r10.s64 + 12272;
	// bne 0x821e9108
	if (!cr0.eq) goto loc_821E9108;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6456
	ctx.r4.s64 = r11.s64 + 6456;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821E9108:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319758
	sub_82319758(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319758
	sub_82319758(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319700
	sub_82319700(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823195f8
	sub_823195F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823197b0
	sub_823197B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x821e91b0
	if (cr0.eq) goto loc_821E91B0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r18,r17
	r18.u64 = r17.u64;
loc_821E91B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x821e923c
	if (cr0.eq) goto loc_821E923C;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x821e91e8
	if (!cr6.gt) goto loc_821E91E8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// b 0x821e91fc
	goto loc_821E91FC;
loc_821E91E8:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821E91FC:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x821e9220
	if (!cr6.gt) goto loc_821E9220;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// b 0x821e9234
	goto loc_821E9234;
loc_821E9220:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821E9234:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r18,1
	r18.s64 = 1;
loc_821E923C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x821e926c
	if (cr0.eq) goto loc_821E926C;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f30,8(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + 8);
	f30.f64 = double(temp.f32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r18,r17
	r18.u64 = r17.u64;
loc_821E926C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x821e929c
	if (cr0.eq) goto loc_821E929C;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - f30.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fdivs f29,f0,f1
	f29.f64 = double(float(f0.f64 / ctx.f1.f64));
loc_821E929C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r5,r11,5304
	ctx.r5.s64 = r11.s64 + 5304;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e92e0
	if (cr0.eq) goto loc_821E92E0;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// lfs f4,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821e84d0
	sub_821E84D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821e92e4
	goto loc_821E92E4;
loc_821E92E0:
	// mr r30,r17
	r30.u64 = r17.u64;
loc_821E92E4:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821e9324
	if (cr6.eq) goto loc_821E9324;
	// bl 0x8231d2e8
	sub_8231D2E8(ctx, base);
	// bl 0x8231d2e8
	sub_8231D2E8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821E9324:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821e9358
	if (cr0.eq) goto loc_821E9358;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821e9358
	if (cr0.eq) goto loc_821E9358;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x821e9358
	if (!cr6.eq) goto loc_821E9358;
	// bl 0x821e7dc0
	sub_821E7DC0(ctx, base);
	// stfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
loc_821E9358:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82314420
	sub_82314420(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r30,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r30.u32);
	// stw r11,4(r16)
	PPC_STORE_U32(r16.u32 + 4, r11.u32);
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_821E8EC8"))) PPC_WEAK_FUNC(sub_821E8EC8);
PPC_FUNC_IMPL(__imp__sub_821E8EC8) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc8
	// stfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f29.u64);
	// stfd f30,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r17,0
	r17.s64 = 0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r17,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r17.u32);
	// lfs f29,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f29.f64 = double(temp.f32);
	// stfs f29,92(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stfs f29,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// stw r17,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r17.u32);
	// addi r10,r11,11868
	ctx.r10.s64 = r11.s64 + 11868;
	// stb r17,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r17.u8);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r9,12(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lfsx f29,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	f29.f64 = double(temp.f32);
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r23,r10,12304
	r23.s64 = ctx.r10.s64 + 12304;
	// bne 0x821e8fac
	if (!cr0.eq) goto loc_821E8FAC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,6488
	ctx.r4.s64 = r11.s64 + 6488;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
loc_821E8FAC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r22,r10,12300
	r22.s64 = ctx.r10.s64 + 12300;
	// bne 0x821e8fd8
	if (!cr0.eq) goto loc_821E8FD8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r11,31076
	ctx.r4.s64 = r11.s64 + 31076;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
loc_821E8FD8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r21,r10,12296
	r21.s64 = ctx.r10.s64 + 12296;
	// bne 0x821e9004
	if (!cr0.eq) goto loc_821E9004;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r4,r11,6256
	ctx.r4.s64 = r11.s64 + 6256;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
loc_821E9004:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r20,r10,12292
	r20.s64 = ctx.r10.s64 + 12292;
	// bne 0x821e9030
	if (!cr0.eq) goto loc_821E9030;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r4,r11,-10280
	ctx.r4.s64 = r11.s64 + -10280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
loc_821E9030:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r19,r10,12288
	r19.s64 = ctx.r10.s64 + 12288;
	// bne 0x821e905c
	if (!cr0.eq) goto loc_821E905C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r4,r11,6480
	ctx.r4.s64 = r11.s64 + 6480;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
loc_821E905C:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r25,r10,12284
	r25.s64 = ctx.r10.s64 + 12284;
	// bne 0x821e9088
	if (!cr0.eq) goto loc_821E9088;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,6472
	ctx.r4.s64 = r11.s64 + 6472;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
loc_821E9088:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r26,r10,12280
	r26.s64 = ctx.r10.s64 + 12280;
	// bne 0x821e90b4
	if (!cr0.eq) goto loc_821E90B4;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,6464
	ctx.r4.s64 = r11.s64 + 6464;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
loc_821E90B4:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,12276
	r28.s64 = ctx.r10.s64 + 12276;
	// bne 0x821e90e0
	if (!cr0.eq) goto loc_821E90E0;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = r11.s64 + 18664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12308);
loc_821E90E0:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12272
	r29.s64 = ctx.r10.s64 + 12272;
	// bne 0x821e9108
	if (!cr0.eq) goto loc_821E9108;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,12308(r30)
	PPC_STORE_U32(r30.u32 + 12308, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6456
	ctx.r4.s64 = r11.s64 + 6456;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821E9108:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319758
	sub_82319758(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319758
	sub_82319758(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319700
	sub_82319700(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823195f8
	sub_823195F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823197b0
	sub_823197B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x821e91b0
	if (cr0.eq) goto loc_821E91B0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r18,r17
	r18.u64 = r17.u64;
loc_821E91B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x821e923c
	if (cr0.eq) goto loc_821E923C;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x821e91e8
	if (!cr6.gt) goto loc_821E91E8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// b 0x821e91fc
	goto loc_821E91FC;
loc_821E91E8:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821E91FC:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x821e9220
	if (!cr6.gt) goto loc_821E9220;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// b 0x821e9234
	goto loc_821E9234;
loc_821E9220:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821E9234:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r18,1
	r18.s64 = 1;
loc_821E923C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x821e926c
	if (cr0.eq) goto loc_821E926C;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f30,8(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + 8);
	f30.f64 = double(temp.f32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r18,r17
	r18.u64 = r17.u64;
loc_821E926C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x821e929c
	if (cr0.eq) goto loc_821E929C;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - f30.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fdivs f29,f0,f1
	f29.f64 = double(float(f0.f64 / ctx.f1.f64));
loc_821E929C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r5,r11,5304
	ctx.r5.s64 = r11.s64 + 5304;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e92e0
	if (cr0.eq) goto loc_821E92E0;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// lfs f4,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821e84d0
	sub_821E84D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821e92e4
	goto loc_821E92E4;
loc_821E92E0:
	// mr r30,r17
	r30.u64 = r17.u64;
loc_821E92E4:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821e9324
	if (cr6.eq) goto loc_821E9324;
	// bl 0x8231d2e8
	sub_8231D2E8(ctx, base);
	// bl 0x8231d2e8
	sub_8231D2E8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821E9324:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821e9358
	if (cr0.eq) goto loc_821E9358;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821e9358
	if (cr0.eq) goto loc_821E9358;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x821e9358
	if (!cr6.eq) goto loc_821E9358;
	// bl 0x821e7dc0
	sub_821E7DC0(ctx, base);
	// stfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
loc_821E9358:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82314420
	sub_82314420(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r30,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r30.u32);
	// stw r11,4(r16)
	PPC_STORE_U32(r16.u32 + 4, r11.u32);
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_821E9394"))) PPC_WEAK_FUNC(sub_821E9394);
PPC_FUNC_IMPL(__imp__sub_821E9394) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12308
	r11.s64 = r11.s64 + 12308;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12308
	ctx.r10.s64 = ctx.r10.s64 + 12308;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E93BC"))) PPC_WEAK_FUNC(sub_821E93BC);
PPC_FUNC_IMPL(__imp__sub_821E93BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12308
	r11.s64 = r11.s64 + 12308;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12308
	ctx.r10.s64 = ctx.r10.s64 + 12308;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E93E4"))) PPC_WEAK_FUNC(sub_821E93E4);
PPC_FUNC_IMPL(__imp__sub_821E93E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12308
	r11.s64 = r11.s64 + 12308;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12308
	ctx.r10.s64 = ctx.r10.s64 + 12308;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E940C"))) PPC_WEAK_FUNC(sub_821E940C);
PPC_FUNC_IMPL(__imp__sub_821E940C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12308
	r11.s64 = r11.s64 + 12308;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12308
	ctx.r10.s64 = ctx.r10.s64 + 12308;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9434"))) PPC_WEAK_FUNC(sub_821E9434);
PPC_FUNC_IMPL(__imp__sub_821E9434) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12308
	r11.s64 = r11.s64 + 12308;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12308
	ctx.r10.s64 = ctx.r10.s64 + 12308;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E945C"))) PPC_WEAK_FUNC(sub_821E945C);
PPC_FUNC_IMPL(__imp__sub_821E945C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12308
	r11.s64 = r11.s64 + 12308;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12308
	ctx.r10.s64 = ctx.r10.s64 + 12308;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9484"))) PPC_WEAK_FUNC(sub_821E9484);
PPC_FUNC_IMPL(__imp__sub_821E9484) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12308
	r11.s64 = r11.s64 + 12308;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12308
	ctx.r10.s64 = ctx.r10.s64 + 12308;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E94AC"))) PPC_WEAK_FUNC(sub_821E94AC);
PPC_FUNC_IMPL(__imp__sub_821E94AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12308
	r11.s64 = r11.s64 + 12308;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12308
	ctx.r10.s64 = ctx.r10.s64 + 12308;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E94D4"))) PPC_WEAK_FUNC(sub_821E94D4);
PPC_FUNC_IMPL(__imp__sub_821E94D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12308
	r11.s64 = r11.s64 + 12308;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12308
	ctx.r10.s64 = ctx.r10.s64 + 12308;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E94FC"))) PPC_WEAK_FUNC(sub_821E94FC);
PPC_FUNC_IMPL(__imp__sub_821E94FC) {
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
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x821e7420
	sub_821E7420(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9524"))) PPC_WEAK_FUNC(sub_821E9524);
PPC_FUNC_IMPL(__imp__sub_821E9524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9528"))) PPC_WEAK_FUNC(sub_821E9528);
PPC_FUNC_IMPL(__imp__sub_821E9528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r2{};
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
	// lwz r16,6728(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 6728);
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,5628
	r11.s64 = r11.s64 + 5628;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x821e89e8
	sub_821E89E8(ctx, base);
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

__attribute__((alias("__imp__sub_821E9530"))) PPC_WEAK_FUNC(sub_821E9530);
PPC_FUNC_IMPL(__imp__sub_821E9530) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,5628
	r11.s64 = r11.s64 + 5628;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x821e89e8
	sub_821E89E8(ctx, base);
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

__attribute__((alias("__imp__sub_821E9584"))) PPC_WEAK_FUNC(sub_821E9584);
PPC_FUNC_IMPL(__imp__sub_821E9584) {
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

__attribute__((alias("__imp__sub_821E95AC"))) PPC_WEAK_FUNC(sub_821E95AC);
PPC_FUNC_IMPL(__imp__sub_821E95AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E95B0"))) PPC_WEAK_FUNC(sub_821E95B0);
PPC_FUNC_IMPL(__imp__sub_821E95B0) {
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
	// bl 0x821e9530
	sub_821E9530(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e95e0
	if (cr0.eq) goto loc_821E95E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_821E95E0:
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

__attribute__((alias("__imp__sub_821E95FC"))) PPC_WEAK_FUNC(sub_821E95FC);
PPC_FUNC_IMPL(__imp__sub_821E95FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9600"))) PPC_WEAK_FUNC(sub_821E9600);
PPC_FUNC_IMPL(__imp__sub_821E9600) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e89e8
	sub_821E89E8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821e96a8
	if (cr6.eq) goto loc_821E96A8;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r27,0
	r27.s64 = 0;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,1712
	r29.s64 = r11.s64 + 1712;
loc_821E964C:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821e8268
	sub_821E8268(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne 0x821e964c
	if (!cr0.eq) goto loc_821E964C;
loc_821E96A8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821E96B4"))) PPC_WEAK_FUNC(sub_821E96B4);
PPC_FUNC_IMPL(__imp__sub_821E96B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E96B8"))) PPC_WEAK_FUNC(sub_821E96B8);
PPC_FUNC_IMPL(__imp__sub_821E96B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,6848(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 6848);
	// mflr r12
	// bl 0x8239bcf0
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x821e970c
	if (!cr6.gt) goto loc_821E970C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r28,-12
	ctx.r4.s64 = r28.s64 + -12;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_821E970C:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x821e972c
	if (!cr6.gt) goto loc_821E972C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r28,-8
	ctx.r4.s64 = r28.s64 + -8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// b 0x821e9750
	goto loc_821E9750;
loc_821E972C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x821e9750
	if (!cr6.gt) goto loc_821E9750;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,-8(r28)
	PPC_STORE_U32(r28.u32 + -8, r11.u32);
loc_821E9750:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x821e9bcc
	if (!cr6.lt) goto loc_821E9BCC;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r26,0
	r26.s64 = 0;
	// lfs f30,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f30,96(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stb r26,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r26.u8);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// stfs f31,108(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f31,104(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// b 0x821e9874
	goto loc_821E9874;
loc_821E9798:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x821e9854
	if (cr6.lt) goto loc_821E9854;
	// beq cr6,0x821e9824
	if (cr6.eq) goto loc_821E9824;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x821e980c
	if (cr6.lt) goto loc_821E980C;
	// beq cr6,0x821e97f4
	if (cr6.eq) goto loc_821E97F4;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bge cr6,0x821e9874
	if (!cr6.lt) goto loc_821E9874;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,212
	ctx.r4.s64 = r31.s64 + 212;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,220
	ctx.r4.s64 = r31.s64 + 220;
	// b 0x821e9868
	goto loc_821E9868;
loc_821E97F4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,196
	ctx.r4.s64 = r31.s64 + 196;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// b 0x821e9868
	goto loc_821E9868;
loc_821E980C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,204
	ctx.r4.s64 = r31.s64 + 204;
	// b 0x821e9868
	goto loc_821E9868;
loc_821E9824:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x821e9874
	goto loc_821E9874;
loc_821E9854:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,108
	ctx.r4.s64 = r31.s64 + 108;
loc_821E9868:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_821E9874:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bne cr6,0x821e9798
	if (!cr6.eq) goto loc_821E9798;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x821e98b0
	if (!cr6.eq) goto loc_821E98B0;
	// lfs f0,108(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x821e98b0
	if (!cr6.eq) goto loc_821E98B0;
	// lfs f0,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	f0.f64 = double(temp.f32);
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x821e9af4
	if (cr6.eq) goto loc_821E9AF4;
loc_821E98B0:
	// lwz r11,-16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82275ef0
	sub_82275EF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,6784
	r11.s64 = r11.s64 + 6784;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// lwz r11,-16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x821e8210
	sub_821E8210(ctx, base);
	// addic. r11,r28,-20
	xer.ca = r28.u32 > 19;
	r11.s64 = r28.s64 + -20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bne 0x821e9904
	if (!cr0.eq) goto loc_821E9904;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x821e9914
	goto loc_821E9914;
loc_821E9904:
	// lwz r11,-16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_821E9914:
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,28392
	ctx.r4.s64 = r11.s64 + 28392;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x823157d0
	sub_823157D0(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e9960
	if (cr0.eq) goto loc_821E9960;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E9960:
	// li r29,1
	r29.s64 = 1;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-12620
	ctx.r4.s64 = r11.s64 + -12620;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x823157d0
	sub_823157D0(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e99b4
	if (cr0.eq) goto loc_821E99B4;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E99B4:
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	f0.f64 = double(temp.f32);
	// stw r29,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r29.u32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-3636
	ctx.r4.s64 = r11.s64 + -3636;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x823157d0
	sub_823157D0(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e9a04
	if (cr0.eq) goto loc_821E9A04;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E9A04:
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	f0.f64 = double(temp.f32);
	// stw r29,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r29.u32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,6780
	ctx.r4.s64 = r11.s64 + 6780;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,136
	ctx.r5.s64 = r31.s64 + 136;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x823157d0
	sub_823157D0(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e9a54
	if (cr0.eq) goto loc_821E9A54;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E9A54:
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	f0.f64 = double(temp.f32);
	// stw r29,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r29.u32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,6776
	ctx.r4.s64 = r11.s64 + 6776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,152
	ctx.r5.s64 = r31.s64 + 152;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x823157d0
	sub_823157D0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e9aa4
	if (cr0.eq) goto loc_821E9AA4;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E9AA4:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// stw r26,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r26.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,6256
	ctx.r4.s64 = r11.s64 + 6256;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x823157d0
	sub_823157D0(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e9af4
	if (cr0.eq) goto loc_821E9AF4;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E9AF4:
	// addic. r11,r28,-20
	xer.ca = r28.u32 > 19;
	r11.s64 = r28.s64 + -20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821e9b04
	if (!cr0.eq) goto loc_821E9B04;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x821e9b14
	goto loc_821E9B14;
loc_821E9B04:
	// lwz r11,-16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = r11.s64 + -16;
loc_821E9B14:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r26,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r26.u32);
	// stw r26,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r26.u32);
	// addi r11,r11,5628
	r11.s64 = r11.s64 + 5628;
	// stw r10,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// stw r26,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r26.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e9600
	sub_821E9600(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,2720
	ctx.r6.s64 = r11.s64 + 2720;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,1712
	ctx.r5.s64 = r11.s64 + 1712;
	// addi r3,r28,-20
	ctx.r3.s64 = r28.s64 + -20;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r30,r11
	r30.u64 = r11.u64;
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x821e9bb8
	goto loc_821E9BB8;
loc_821E9B74:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x821e9bac
	if (cr6.eq) goto loc_821E9BAC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821e9b90
	if (!cr0.eq) goto loc_821E9B90;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// b 0x821e9ba0
	goto loc_821E9BA0;
loc_821E9B90:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_821E9BA0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dc870
	sub_821DC870(ctx, base);
loc_821E9BAC:
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_821E9BB8:
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821e9b74
	if (!cr0.eq) goto loc_821E9B74;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x821e9530
	sub_821E9530(ctx, base);
loc_821E9BCC:
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821E96C0"))) PPC_WEAK_FUNC(sub_821E96C0);
PPC_FUNC_IMPL(__imp__sub_821E96C0) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x821e970c
	if (!cr6.gt) goto loc_821E970C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r28,-12
	ctx.r4.s64 = r28.s64 + -12;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_821E970C:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x821e972c
	if (!cr6.gt) goto loc_821E972C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r28,-8
	ctx.r4.s64 = r28.s64 + -8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// b 0x821e9750
	goto loc_821E9750;
loc_821E972C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x821e9750
	if (!cr6.gt) goto loc_821E9750;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,-8(r28)
	PPC_STORE_U32(r28.u32 + -8, r11.u32);
loc_821E9750:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x821e9bcc
	if (!cr6.lt) goto loc_821E9BCC;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r26,0
	r26.s64 = 0;
	// lfs f30,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f30,96(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stb r26,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r26.u8);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// stfs f31,108(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f31,104(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// b 0x821e9874
	goto loc_821E9874;
loc_821E9798:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x821e9854
	if (cr6.lt) goto loc_821E9854;
	// beq cr6,0x821e9824
	if (cr6.eq) goto loc_821E9824;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x821e980c
	if (cr6.lt) goto loc_821E980C;
	// beq cr6,0x821e97f4
	if (cr6.eq) goto loc_821E97F4;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bge cr6,0x821e9874
	if (!cr6.lt) goto loc_821E9874;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,212
	ctx.r4.s64 = r31.s64 + 212;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,220
	ctx.r4.s64 = r31.s64 + 220;
	// b 0x821e9868
	goto loc_821E9868;
loc_821E97F4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,196
	ctx.r4.s64 = r31.s64 + 196;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// b 0x821e9868
	goto loc_821E9868;
loc_821E980C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,204
	ctx.r4.s64 = r31.s64 + 204;
	// b 0x821e9868
	goto loc_821E9868;
loc_821E9824:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x821e9874
	goto loc_821E9874;
loc_821E9854:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,108
	ctx.r4.s64 = r31.s64 + 108;
loc_821E9868:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_821E9874:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bne cr6,0x821e9798
	if (!cr6.eq) goto loc_821E9798;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x821e98b0
	if (!cr6.eq) goto loc_821E98B0;
	// lfs f0,108(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x821e98b0
	if (!cr6.eq) goto loc_821E98B0;
	// lfs f0,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	f0.f64 = double(temp.f32);
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x821e9af4
	if (cr6.eq) goto loc_821E9AF4;
loc_821E98B0:
	// lwz r11,-16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82275ef0
	sub_82275EF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,6784
	r11.s64 = r11.s64 + 6784;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// lwz r11,-16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x821e8210
	sub_821E8210(ctx, base);
	// addic. r11,r28,-20
	xer.ca = r28.u32 > 19;
	r11.s64 = r28.s64 + -20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bne 0x821e9904
	if (!cr0.eq) goto loc_821E9904;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x821e9914
	goto loc_821E9914;
loc_821E9904:
	// lwz r11,-16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_821E9914:
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,28392
	ctx.r4.s64 = r11.s64 + 28392;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x823157d0
	sub_823157D0(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e9960
	if (cr0.eq) goto loc_821E9960;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E9960:
	// li r29,1
	r29.s64 = 1;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-12620
	ctx.r4.s64 = r11.s64 + -12620;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x823157d0
	sub_823157D0(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e99b4
	if (cr0.eq) goto loc_821E99B4;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E99B4:
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	f0.f64 = double(temp.f32);
	// stw r29,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r29.u32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-3636
	ctx.r4.s64 = r11.s64 + -3636;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x823157d0
	sub_823157D0(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e9a04
	if (cr0.eq) goto loc_821E9A04;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E9A04:
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	f0.f64 = double(temp.f32);
	// stw r29,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r29.u32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,6780
	ctx.r4.s64 = r11.s64 + 6780;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,136
	ctx.r5.s64 = r31.s64 + 136;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x823157d0
	sub_823157D0(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e9a54
	if (cr0.eq) goto loc_821E9A54;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E9A54:
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	f0.f64 = double(temp.f32);
	// stw r29,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r29.u32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,6776
	ctx.r4.s64 = r11.s64 + 6776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,152
	ctx.r5.s64 = r31.s64 + 152;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x823157d0
	sub_823157D0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e9aa4
	if (cr0.eq) goto loc_821E9AA4;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E9AA4:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// stw r26,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r26.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,6256
	ctx.r4.s64 = r11.s64 + 6256;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x823157d0
	sub_823157D0(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e9af4
	if (cr0.eq) goto loc_821E9AF4;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E9AF4:
	// addic. r11,r28,-20
	xer.ca = r28.u32 > 19;
	r11.s64 = r28.s64 + -20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821e9b04
	if (!cr0.eq) goto loc_821E9B04;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x821e9b14
	goto loc_821E9B14;
loc_821E9B04:
	// lwz r11,-16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = r11.s64 + -16;
loc_821E9B14:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r26,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r26.u32);
	// stw r26,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r26.u32);
	// addi r11,r11,5628
	r11.s64 = r11.s64 + 5628;
	// stw r10,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// stw r26,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r26.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e9600
	sub_821E9600(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,2720
	ctx.r6.s64 = r11.s64 + 2720;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,1712
	ctx.r5.s64 = r11.s64 + 1712;
	// addi r3,r28,-20
	ctx.r3.s64 = r28.s64 + -20;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r30,r11
	r30.u64 = r11.u64;
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x821e9bb8
	goto loc_821E9BB8;
loc_821E9B74:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x821e9bac
	if (cr6.eq) goto loc_821E9BAC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821e9b90
	if (!cr0.eq) goto loc_821E9B90;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// b 0x821e9ba0
	goto loc_821E9BA0;
loc_821E9B90:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_821E9BA0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dc870
	sub_821DC870(ctx, base);
loc_821E9BAC:
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_821E9BB8:
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821e9b74
	if (!cr0.eq) goto loc_821E9B74;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x821e9530
	sub_821E9530(ctx, base);
loc_821E9BCC:
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821E9BDC"))) PPC_WEAK_FUNC(sub_821E9BDC);
PPC_FUNC_IMPL(__imp__sub_821E9BDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-304
	r31.s64 = r12.s64 + -304;
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

__attribute__((alias("__imp__sub_821E9C04"))) PPC_WEAK_FUNC(sub_821E9C04);
PPC_FUNC_IMPL(__imp__sub_821E9C04) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-304
	r31.s64 = r12.s64 + -304;
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

__attribute__((alias("__imp__sub_821E9C2C"))) PPC_WEAK_FUNC(sub_821E9C2C);
PPC_FUNC_IMPL(__imp__sub_821E9C2C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-304
	r31.s64 = r12.s64 + -304;
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

__attribute__((alias("__imp__sub_821E9C54"))) PPC_WEAK_FUNC(sub_821E9C54);
PPC_FUNC_IMPL(__imp__sub_821E9C54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-304
	r31.s64 = r12.s64 + -304;
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

__attribute__((alias("__imp__sub_821E9C7C"))) PPC_WEAK_FUNC(sub_821E9C7C);
PPC_FUNC_IMPL(__imp__sub_821E9C7C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-304
	r31.s64 = r12.s64 + -304;
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

__attribute__((alias("__imp__sub_821E9CA4"))) PPC_WEAK_FUNC(sub_821E9CA4);
PPC_FUNC_IMPL(__imp__sub_821E9CA4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-304
	r31.s64 = r12.s64 + -304;
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

__attribute__((alias("__imp__sub_821E9CCC"))) PPC_WEAK_FUNC(sub_821E9CCC);
PPC_FUNC_IMPL(__imp__sub_821E9CCC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-304
	r31.s64 = r12.s64 + -304;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x821e9530
	sub_821E9530(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9CF4"))) PPC_WEAK_FUNC(sub_821E9CF4);
PPC_FUNC_IMPL(__imp__sub_821E9CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9CF8"))) PPC_WEAK_FUNC(sub_821E9CF8);
PPC_FUNC_IMPL(__imp__sub_821E9CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,7152(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 7152);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,12336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12336);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12332
	r29.s64 = ctx.r10.s64 + 12332;
	// bne 0x821e9d68
	if (!cr0.eq) goto loc_821E9D68;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12336(r30)
	PPC_STORE_U32(r30.u32 + 12336, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7080
	ctx.r4.s64 = r11.s64 + 7080;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12336);
loc_821E9D68:
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
	// beq 0x821e9db4
	if (cr0.eq) goto loc_821E9DB4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r25,-20
	ctx.r3.s64 = r25.s64 + -20;
	// lfs f2,2552(r11)
	ctx.fpscr.disableFlushMode();
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
loc_821E9DAC:
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x821e9fb0
	goto loc_821E9FB0;
loc_821E9DB4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12328
	r29.s64 = ctx.r10.s64 + 12328;
	// bne 0x821e9de0
	if (!cr0.eq) goto loc_821E9DE0;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12336(r30)
	PPC_STORE_U32(r30.u32 + 12336, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,28736
	ctx.r4.s64 = r11.s64 + 28736;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12336);
loc_821E9DE0:
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
	// beq 0x821e9e10
	if (cr0.eq) goto loc_821E9E10;
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-12(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + -12);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// b 0x821e9fb8
	goto loc_821E9FB8;
loc_821E9E10:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12324
	r29.s64 = ctx.r10.s64 + 12324;
	// bne 0x821e9e3c
	if (!cr0.eq) goto loc_821E9E3C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,12336(r30)
	PPC_STORE_U32(r30.u32 + 12336, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31144
	ctx.r4.s64 = r11.s64 + 31144;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12336);
loc_821E9E3C:
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
	// beq 0x821e9e78
	if (cr0.eq) goto loc_821E9E78;
	// addi r3,r25,-20
	ctx.r3.s64 = r25.s64 + -20;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	r11.s64 = 1;
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// b 0x821e9fb4
	goto loc_821E9FB4;
loc_821E9E78:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12320
	r29.s64 = ctx.r10.s64 + 12320;
	// bne 0x821e9ea4
	if (!cr0.eq) goto loc_821E9EA4;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,12336(r30)
	PPC_STORE_U32(r30.u32 + 12336, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7072
	ctx.r4.s64 = r11.s64 + 7072;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12336);
loc_821E9EA4:
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
	// beq 0x821e9f00
	if (cr0.eq) goto loc_821E9F00;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r25,-20
	ctx.r4.s64 = r25.s64 + -20;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e8ec8
	sub_821E8EC8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e9efc
	if (cr6.eq) goto loc_821E9EFC;
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
	// beq 0x821e9fb4
	if (cr0.eq) goto loc_821E9FB4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821e9fb4
	goto loc_821E9FB4;
loc_821E9EFC:
	// lwz r11,12336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12336);
loc_821E9F00:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12316
	r29.s64 = ctx.r10.s64 + 12316;
	// bne 0x821e9f2c
	if (!cr0.eq) goto loc_821E9F2C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,12336(r30)
	PPC_STORE_U32(r30.u32 + 12336, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7056
	ctx.r4.s64 = r11.s64 + 7056;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12336);
loc_821E9F2C:
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
	// beq 0x821e9f50
	if (cr0.eq) goto loc_821E9F50;
	// addi r3,r25,-20
	ctx.r3.s64 = r25.s64 + -20;
	// bl 0x821e83f0
	sub_821E83F0(ctx, base);
	// b 0x821e9dac
	goto loc_821E9DAC;
loc_821E9F50:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12312
	r29.s64 = ctx.r10.s64 + 12312;
	// bne 0x821e9f78
	if (!cr0.eq) goto loc_821E9F78;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,12336(r30)
	PPC_STORE_U32(r30.u32 + 12336, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7040
	ctx.r4.s64 = r11.s64 + 7040;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821E9F78:
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
	// beq 0x821e9fa8
	if (cr0.eq) goto loc_821E9FA8;
	// addi r3,r25,-20
	ctx.r3.s64 = r25.s64 + -20;
	// bl 0x821e8330
	sub_821E8330(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// b 0x821e9fb4
	goto loc_821E9FB4;
loc_821E9FA8:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_821E9FB0:
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
loc_821E9FB4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821E9FB8:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821E9D00"))) PPC_WEAK_FUNC(sub_821E9D00);
PPC_FUNC_IMPL(__imp__sub_821E9D00) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,12336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12336);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12332
	r29.s64 = ctx.r10.s64 + 12332;
	// bne 0x821e9d68
	if (!cr0.eq) goto loc_821E9D68;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12336(r30)
	PPC_STORE_U32(r30.u32 + 12336, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7080
	ctx.r4.s64 = r11.s64 + 7080;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12336);
loc_821E9D68:
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
	// beq 0x821e9db4
	if (cr0.eq) goto loc_821E9DB4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r25,-20
	ctx.r3.s64 = r25.s64 + -20;
	// lfs f2,2552(r11)
	ctx.fpscr.disableFlushMode();
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
loc_821E9DAC:
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x821e9fb0
	goto loc_821E9FB0;
loc_821E9DB4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12328
	r29.s64 = ctx.r10.s64 + 12328;
	// bne 0x821e9de0
	if (!cr0.eq) goto loc_821E9DE0;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12336(r30)
	PPC_STORE_U32(r30.u32 + 12336, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,28736
	ctx.r4.s64 = r11.s64 + 28736;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12336);
loc_821E9DE0:
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
	// beq 0x821e9e10
	if (cr0.eq) goto loc_821E9E10;
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-12(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + -12);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// b 0x821e9fb8
	goto loc_821E9FB8;
loc_821E9E10:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12324
	r29.s64 = ctx.r10.s64 + 12324;
	// bne 0x821e9e3c
	if (!cr0.eq) goto loc_821E9E3C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,12336(r30)
	PPC_STORE_U32(r30.u32 + 12336, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31144
	ctx.r4.s64 = r11.s64 + 31144;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12336);
loc_821E9E3C:
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
	// beq 0x821e9e78
	if (cr0.eq) goto loc_821E9E78;
	// addi r3,r25,-20
	ctx.r3.s64 = r25.s64 + -20;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	r11.s64 = 1;
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// b 0x821e9fb4
	goto loc_821E9FB4;
loc_821E9E78:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12320
	r29.s64 = ctx.r10.s64 + 12320;
	// bne 0x821e9ea4
	if (!cr0.eq) goto loc_821E9EA4;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,12336(r30)
	PPC_STORE_U32(r30.u32 + 12336, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7072
	ctx.r4.s64 = r11.s64 + 7072;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12336);
loc_821E9EA4:
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
	// beq 0x821e9f00
	if (cr0.eq) goto loc_821E9F00;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r25,-20
	ctx.r4.s64 = r25.s64 + -20;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e8ec8
	sub_821E8EC8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e9efc
	if (cr6.eq) goto loc_821E9EFC;
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
	// beq 0x821e9fb4
	if (cr0.eq) goto loc_821E9FB4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821e9fb4
	goto loc_821E9FB4;
loc_821E9EFC:
	// lwz r11,12336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12336);
loc_821E9F00:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12316
	r29.s64 = ctx.r10.s64 + 12316;
	// bne 0x821e9f2c
	if (!cr0.eq) goto loc_821E9F2C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,12336(r30)
	PPC_STORE_U32(r30.u32 + 12336, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7056
	ctx.r4.s64 = r11.s64 + 7056;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12336);
loc_821E9F2C:
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
	// beq 0x821e9f50
	if (cr0.eq) goto loc_821E9F50;
	// addi r3,r25,-20
	ctx.r3.s64 = r25.s64 + -20;
	// bl 0x821e83f0
	sub_821E83F0(ctx, base);
	// b 0x821e9dac
	goto loc_821E9DAC;
loc_821E9F50:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12312
	r29.s64 = ctx.r10.s64 + 12312;
	// bne 0x821e9f78
	if (!cr0.eq) goto loc_821E9F78;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,12336(r30)
	PPC_STORE_U32(r30.u32 + 12336, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7040
	ctx.r4.s64 = r11.s64 + 7040;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821E9F78:
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
	// beq 0x821e9fa8
	if (cr0.eq) goto loc_821E9FA8;
	// addi r3,r25,-20
	ctx.r3.s64 = r25.s64 + -20;
	// bl 0x821e8330
	sub_821E8330(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// b 0x821e9fb4
	goto loc_821E9FB4;
loc_821E9FA8:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_821E9FB0:
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
loc_821E9FB4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821E9FB8:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821E9FC0"))) PPC_WEAK_FUNC(sub_821E9FC0);
PPC_FUNC_IMPL(__imp__sub_821E9FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12336
	r11.s64 = r11.s64 + 12336;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12336
	ctx.r10.s64 = ctx.r10.s64 + 12336;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9FE8"))) PPC_WEAK_FUNC(sub_821E9FE8);
PPC_FUNC_IMPL(__imp__sub_821E9FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12336
	r11.s64 = r11.s64 + 12336;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12336
	ctx.r10.s64 = ctx.r10.s64 + 12336;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA010"))) PPC_WEAK_FUNC(sub_821EA010);
PPC_FUNC_IMPL(__imp__sub_821EA010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12336
	r11.s64 = r11.s64 + 12336;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12336
	ctx.r10.s64 = ctx.r10.s64 + 12336;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA038"))) PPC_WEAK_FUNC(sub_821EA038);
PPC_FUNC_IMPL(__imp__sub_821EA038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12336
	r11.s64 = r11.s64 + 12336;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12336
	ctx.r10.s64 = ctx.r10.s64 + 12336;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA060"))) PPC_WEAK_FUNC(sub_821EA060);
PPC_FUNC_IMPL(__imp__sub_821EA060) {
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

__attribute__((alias("__imp__sub_821EA088"))) PPC_WEAK_FUNC(sub_821EA088);
PPC_FUNC_IMPL(__imp__sub_821EA088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12336
	r11.s64 = r11.s64 + 12336;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12336
	ctx.r10.s64 = ctx.r10.s64 + 12336;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA0B0"))) PPC_WEAK_FUNC(sub_821EA0B0);
PPC_FUNC_IMPL(__imp__sub_821EA0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12336
	r11.s64 = r11.s64 + 12336;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12336
	ctx.r10.s64 = ctx.r10.s64 + 12336;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA0D8"))) PPC_WEAK_FUNC(sub_821EA0D8);
PPC_FUNC_IMPL(__imp__sub_821EA0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x821e9d00
	sub_821E9D00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA0E4"))) PPC_WEAK_FUNC(sub_821EA0E4);
PPC_FUNC_IMPL(__imp__sub_821EA0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA0E8"))) PPC_WEAK_FUNC(sub_821EA0E8);
PPC_FUNC_IMPL(__imp__sub_821EA0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821e96c0
	sub_821E96C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA0F4"))) PPC_WEAK_FUNC(sub_821EA0F4);
PPC_FUNC_IMPL(__imp__sub_821EA0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA0F8"))) PPC_WEAK_FUNC(sub_821EA0F8);
PPC_FUNC_IMPL(__imp__sub_821EA0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// stw r3,12340(r11)
	PPC_STORE_U32(r11.u32 + 12340, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA104"))) PPC_WEAK_FUNC(sub_821EA104);
PPC_FUNC_IMPL(__imp__sub_821EA104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA108"))) PPC_WEAK_FUNC(sub_821EA108);
PPC_FUNC_IMPL(__imp__sub_821EA108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r3,12340(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12340);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,27088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwz r3,172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA128"))) PPC_WEAK_FUNC(sub_821EA128);
PPC_FUNC_IMPL(__imp__sub_821EA128) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x821ea208
	if (!cr6.gt) goto loc_821EA208;
	// lfs f13,176(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x821ea208
	if (!cr6.gt) goto loc_821EA208;
	// lfs f2,168(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// ble cr6,0x821ea208
	if (!cr6.gt) goto loc_821EA208;
	// lfs f13,180(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x821ea1a4
	if (cr6.lt) goto loc_821EA1A4;
	// stfs f0,180(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f0,192(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 192);
	f0.f64 = double(temp.f32);
	// lfs f1,164(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,188(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lfs f2,176(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 176);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,172(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
loc_821EA1A4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,180(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfs f11,192(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,188(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f12,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,11004(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11004);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fnmsubs f12,f0,f12,f11
	ctx.f12.f64 = double(float(-(f0.f64 * ctx.f12.f64 - ctx.f11.f64)));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmadds f13,f0,f10,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f10.f64 + ctx.f13.f64));
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,196(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// bl 0x82311970
	sub_82311970(ctx, base);
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f0,180(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// b 0x821ea214
	goto loc_821EA214;
loc_821EA208:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
loc_821EA214:
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

__attribute__((alias("__imp__sub_821EA228"))) PPC_WEAK_FUNC(sub_821EA228);
PPC_FUNC_IMPL(__imp__sub_821EA228) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,228(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x821ea254
	if (!cr6.lt) goto loc_821EA254;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x821ea258
	if (cr6.gt) goto loc_821EA258;
loc_821EA254:
	// li r11,0
	r11.s64 = 0;
loc_821EA258:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA260"))) PPC_WEAK_FUNC(sub_821EA260);
PPC_FUNC_IMPL(__imp__sub_821EA260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,228(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 228);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// lfs f13,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x821ea2a8
	if (!cr6.lt) goto loc_821EA2A8;
	// lfs f12,232(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x821ea2ac
	if (cr6.gt) goto loc_821EA2AC;
loc_821EA2A8:
	// li r11,0
	r11.s64 = 0;
loc_821EA2AC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ea320
	if (cr0.eq) goto loc_821EA320;
	// lbz r11,253(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 253);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821ea320
	if (!cr0.eq) goto loc_821EA320;
	// lbz r11,252(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 252);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821ea314
	if (!cr0.eq) goto loc_821EA314;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lfs f31,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 232);
	f31.f64 = double(temp.f32);
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311970
	sub_82311970(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,236(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// lfs f0,-30144(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30144);
	f0.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fdivs f12,f0,f31
	ctx.f12.f64 = double(float(f0.f64 / f31.f64));
	// lfs f0,7304(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7304);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,244(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// fadds f0,f1,f13
	f0.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f0,5048(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5048);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// b 0x821ea31c
	goto loc_821EA31C;
loc_821EA314:
	// stfs f0,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// stfs f13,244(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
loc_821EA31C:
	// stfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
loc_821EA320:
	// li r11,0
	r11.s64 = 0;
	// stb r11,252(r31)
	PPC_STORE_U8(r31.u32 + 252, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_821EA344"))) PPC_WEAK_FUNC(sub_821EA344);
PPC_FUNC_IMPL(__imp__sub_821EA344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA348"))) PPC_WEAK_FUNC(sub_821EA348);
PPC_FUNC_IMPL(__imp__sub_821EA348) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,256(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, f30.f64);
	// ble cr6,0x821ea3ac
	if (!cr6.gt) goto loc_821EA3AC;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fdivs f31,f0,f13
	f31.f64 = double(float(f0.f64 / ctx.f13.f64));
	// bl 0x82311970
	sub_82311970(ctx, base);
	// lfs f0,260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 260);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	f0.f64 = double(float(f0.f64 + ctx.f1.f64));
	// stfs f0,260(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x821ea3ac
	if (cr6.gt) goto loc_821EA3AC;
	// li r11,1
	r11.s64 = 1;
	// b 0x821ea3b4
	goto loc_821EA3B4;
loc_821EA3AC:
	// stfs f30,260(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
	// li r11,0
	r11.s64 = 0;
loc_821EA3B4:
	// stb r11,253(r31)
	PPC_STORE_U8(r31.u32 + 253, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_821EA3D4"))) PPC_WEAK_FUNC(sub_821EA3D4);
PPC_FUNC_IMPL(__imp__sub_821EA3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA3D8"))) PPC_WEAK_FUNC(sub_821EA3D8);
PPC_FUNC_IMPL(__imp__sub_821EA3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f13,7320(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7320);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ble cr6,0x821ea4fc
	if (!cr6.gt) goto loc_821EA4FC;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f0,7316(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7316);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,-25408(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25408);
	f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8239de90
	sub_8239DE90(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// bl 0x8239ddc0
	sub_8239DDC0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r9,3
	ctx.r9.s64 = 3;
loc_821EA48C:
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// stfs f30,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// divw r6,r8,r9
	ctx.r6.s32 = ctx.r8.s32 / ctx.r9.s32;
	// mulli r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 * 3;
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x821ea4ac
	if (!cr0.lt) goto loc_821EA4AC;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
loc_821EA4AC:
	// divw r6,r10,r9
	ctx.r6.s32 = ctx.r10.s32 / ctx.r9.s32;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 * 3;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// subf. r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r8,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// bge 0x821ea4d4
	if (!cr0.lt) goto loc_821EA4D4;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
loc_821EA4D4:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 + 20;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// stfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x821ea48c
	if (cr6.lt) goto loc_821EA48C;
	// b 0x821ea730
	goto loc_821EA730;
loc_821EA4FC:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x821ea5b4
	if (!cr6.gt) goto loc_821EA5B4;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,7316(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7316);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f0,-25408(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25408);
	f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8239de90
	sub_8239DE90(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// bl 0x8239ddc0
	sub_8239DDC0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r9,3
	ctx.r9.s64 = 3;
loc_821EA544:
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// stfs f31,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// divw r6,r8,r9
	ctx.r6.s32 = ctx.r8.s32 / ctx.r9.s32;
	// mulli r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 * 3;
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x821ea564
	if (!cr0.lt) goto loc_821EA564;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
loc_821EA564:
	// divw r6,r10,r9
	ctx.r6.s32 = ctx.r10.s32 / ctx.r9.s32;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 * 3;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// subf. r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r8,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// bge 0x821ea58c
	if (!cr0.lt) goto loc_821EA58C;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
loc_821EA58C:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 + 20;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// stfsx f30,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x821ea544
	if (cr6.lt) goto loc_821EA544;
	// b 0x821ea730
	goto loc_821EA730;
loc_821EA5B4:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f12,7312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7312);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bge cr6,0x821ea67c
	if (!cr6.lt) goto loc_821EA67C;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f0,7316(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7316);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,-25408(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25408);
	f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8239de90
	sub_8239DE90(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// bl 0x8239ddc0
	sub_8239DDC0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r9,3
	ctx.r9.s64 = 3;
loc_821EA60C:
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// stfs f30,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// divw r6,r8,r9
	ctx.r6.s32 = ctx.r8.s32 / ctx.r9.s32;
	// mulli r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 * 3;
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x821ea62c
	if (!cr0.lt) goto loc_821EA62C;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
loc_821EA62C:
	// divw r6,r10,r9
	ctx.r6.s32 = ctx.r10.s32 / ctx.r9.s32;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 * 3;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// subf. r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r8,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// bge 0x821ea654
	if (!cr0.lt) goto loc_821EA654;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
loc_821EA654:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 + 20;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// stfsx f31,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x821ea60c
	if (cr6.lt) goto loc_821EA60C;
	// b 0x821ea730
	goto loc_821EA730;
loc_821EA67C:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x821ea730
	if (!cr6.lt) goto loc_821EA730;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,7308(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7308);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f0,-25408(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25408);
	f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8239de90
	sub_8239DE90(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// bl 0x8239ddc0
	sub_8239DDC0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r9,3
	ctx.r9.s64 = 3;
loc_821EA6C4:
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// stfs f31,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// divw r6,r8,r9
	ctx.r6.s32 = ctx.r8.s32 / ctx.r9.s32;
	// mulli r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 * 3;
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x821ea6e4
	if (!cr0.lt) goto loc_821EA6E4;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
loc_821EA6E4:
	// divw r6,r10,r9
	ctx.r6.s32 = ctx.r10.s32 / ctx.r9.s32;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 * 3;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// subf. r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f30,r8,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// bge 0x821ea70c
	if (!cr0.lt) goto loc_821EA70C;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
loc_821EA70C:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 + 20;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// stfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x821ea6c4
	if (cr6.lt) goto loc_821EA6C4;
loc_821EA730:
	// addi r5,r31,100
	ctx.r5.s64 = r31.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
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

__attribute__((alias("__imp__sub_821EA75C"))) PPC_WEAK_FUNC(sub_821EA75C);
PPC_FUNC_IMPL(__imp__sub_821EA75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA760"))) PPC_WEAK_FUNC(sub_821EA760);
PPC_FUNC_IMPL(__imp__sub_821EA760) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,-26880(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26880);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ble cr6,0x821ea7cc
	if (!cr6.gt) goto loc_821EA7CC;
	// fadds f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// b 0x821ea7d8
	goto loc_821EA7D8;
loc_821EA7CC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f0,7324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7324);
	f0.f64 = double(temp.f32);
	// fnmsubs f0,f12,f0,f13
	f0.f64 = double(float(-(ctx.f12.f64 * f0.f64 - ctx.f13.f64)));
loc_821EA7D8:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,2
	r11.s64 = 2;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f13,5736(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_821EA7FC:
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// divw r5,r9,r6
	ctx.r5.s32 = ctx.r9.s32 / ctx.r6.s32;
	// mulli r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 * 3;
	// subf. r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x821ea818
	if (!cr0.lt) goto loc_821EA818;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
loc_821EA818:
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// divw r5,r11,r6
	ctx.r5.s32 = r11.s32 / ctx.r6.s32;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r9,r5,3
	ctx.r9.s64 = ctx.r5.s64 * 3;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subf. r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stfsx f13,r4,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, temp.u32);
	// bge 0x821ea83c
	if (!cr0.lt) goto loc_821EA83C;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
loc_821EA83C:
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfsx f13,r9,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
	// bne 0x821ea7fc
	if (!cr0.eq) goto loc_821EA7FC;
	// addi r5,r3,100
	ctx.r5.s64 = ctx.r3.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA880"))) PPC_WEAK_FUNC(sub_821EA880);
PPC_FUNC_IMPL(__imp__sub_821EA880) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f13,-26880(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26880);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// blt cr6,0x821ea8dc
	if (cr6.lt) goto loc_821EA8DC;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// b 0x821ea8e0
	goto loc_821EA8E0;
loc_821EA8DC:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
loc_821EA8E0:
	// addi r5,r3,100
	ctx.r5.s64 = ctx.r3.s64 + 100;
	// stfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA918"))) PPC_WEAK_FUNC(sub_821EA918);
PPC_FUNC_IMPL(__imp__sub_821EA918) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f13,-26880(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26880);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x821ea97c
	if (!cr6.gt) goto loc_821EA97C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f12,7332(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7332);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2552
	r11.s64 = r11.s64 + 2552;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fnmsubs f13,f13,f12,f0
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - f0.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// b 0x821ea994
	goto loc_821EA994;
loc_821EA97C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f12,7328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7328);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2552
	r11.s64 = r11.s64 + 2552;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fnmsubs f13,f13,f12,f0
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - f0.f64)));
loc_821EA994:
	// fsubs f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r3,100
	ctx.r5.s64 = ctx.r3.s64 + 100;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA9DC"))) PPC_WEAK_FUNC(sub_821EA9DC);
PPC_FUNC_IMPL(__imp__sub_821EA9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA9E0"))) PPC_WEAK_FUNC(sub_821EA9E0);
PPC_FUNC_IMPL(__imp__sub_821EA9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r3,100
	ctx.r5.s64 = ctx.r3.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f12,-11912(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -11912);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,17320(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17320);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// fmsubs f0,f11,f12,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EAA70"))) PPC_WEAK_FUNC(sub_821EAA70);
PPC_FUNC_IMPL(__imp__sub_821EAA70) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r31,100
	r11.s64 = r31.s64 + 100;
	// lfs f13,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// bl 0x821ea3d8
	sub_821EA3D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ea760
	sub_821EA760(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ea880
	sub_821EA880(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ea918
	sub_821EA918(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ea9e0
	sub_821EA9E0(ctx, base);
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

__attribute__((alias("__imp__sub_821EAB00"))) PPC_WEAK_FUNC(sub_821EAB00);
PPC_FUNC_IMPL(__imp__sub_821EAB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r11,12340(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12340);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EAB1C"))) PPC_WEAK_FUNC(sub_821EAB1C);
PPC_FUNC_IMPL(__imp__sub_821EAB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EAB20"))) PPC_WEAK_FUNC(sub_821EAB20);
PPC_FUNC_IMPL(__imp__sub_821EAB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,7416(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 7416);
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,7340
	r11.s64 = r11.s64 + 7340;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r10,12340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12340);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bne cr6,0x821eab74
	if (!cr6.eq) goto loc_821EAB74;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r10,27088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27088);
	// lwz r10,172(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// stw r10,12340(r11)
	PPC_STORE_U32(r11.u32 + 12340, ctx.r10.u32);
loc_821EAB74:
	// addi r3,r30,216
	ctx.r3.s64 = r30.s64 + 216;
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
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

__attribute__((alias("__imp__sub_821EAB28"))) PPC_WEAK_FUNC(sub_821EAB28);
PPC_FUNC_IMPL(__imp__sub_821EAB28) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,7340
	r11.s64 = r11.s64 + 7340;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r10,12340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12340);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bne cr6,0x821eab74
	if (!cr6.eq) goto loc_821EAB74;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r10,27088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27088);
	// lwz r10,172(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// stw r10,12340(r11)
	PPC_STORE_U32(r11.u32 + 12340, ctx.r10.u32);
loc_821EAB74:
	// addi r3,r30,216
	ctx.r3.s64 = r30.s64 + 216;
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
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

__attribute__((alias("__imp__sub_821EABA4"))) PPC_WEAK_FUNC(sub_821EABA4);
PPC_FUNC_IMPL(__imp__sub_821EABA4) {
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

__attribute__((alias("__imp__sub_821EABCC"))) PPC_WEAK_FUNC(sub_821EABCC);
PPC_FUNC_IMPL(__imp__sub_821EABCC) {
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
	// bl 0x821c7408
	sub_821C7408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EABF8"))) PPC_WEAK_FUNC(sub_821EABF8);
PPC_FUNC_IMPL(__imp__sub_821EABF8) {
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
	// bl 0x821b8258
	sub_821B8258(ctx, base);
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

__attribute__((alias("__imp__sub_821EAC28"))) PPC_WEAK_FUNC(sub_821EAC28);
PPC_FUNC_IMPL(__imp__sub_821EAC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
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
	// lwz r16,7488(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 7488);
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
	// lwz r11,12348(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12348);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x821eacac
	if (!cr0.eq) goto loc_821EACAC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12348, r11.u32);
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
	// bl 0x821b8258
	sub_821B8258(ctx, base);
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
	// stw r3,12344(r28)
	PPC_STORE_U32(r28.u32 + 12344, ctx.r3.u32);
	// b 0x821eacb0
	goto loc_821EACB0;
loc_821EACAC:
	// lwz r3,12344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12344);
loc_821EACB0:
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
	// beq 0x821eace0
	if (cr0.eq) goto loc_821EACE0;
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
	// b 0x821ead28
	goto loc_821EAD28;
loc_821EACE0:
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
	// bne 0x821ead1c
	if (!cr0.eq) goto loc_821EAD1C;
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
loc_821EAD1C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_821EAD28:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821EAC30"))) PPC_WEAK_FUNC(sub_821EAC30);
PPC_FUNC_IMPL(__imp__sub_821EAC30) {
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
	// lwz r11,12348(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12348);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x821eacac
	if (!cr0.eq) goto loc_821EACAC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12348, r11.u32);
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
	// bl 0x821b8258
	sub_821B8258(ctx, base);
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
	// stw r3,12344(r28)
	PPC_STORE_U32(r28.u32 + 12344, ctx.r3.u32);
	// b 0x821eacb0
	goto loc_821EACB0;
loc_821EACAC:
	// lwz r3,12344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12344);
loc_821EACB0:
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
	// beq 0x821eace0
	if (cr0.eq) goto loc_821EACE0;
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
	// b 0x821ead28
	goto loc_821EAD28;
loc_821EACE0:
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
	// bne 0x821ead1c
	if (!cr0.eq) goto loc_821EAD1C;
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
loc_821EAD1C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_821EAD28:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821EAD34"))) PPC_WEAK_FUNC(sub_821EAD34);
PPC_FUNC_IMPL(__imp__sub_821EAD34) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12348
	r11.s64 = r11.s64 + 12348;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12348
	ctx.r10.s64 = ctx.r10.s64 + 12348;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EAD5C"))) PPC_WEAK_FUNC(sub_821EAD5C);
PPC_FUNC_IMPL(__imp__sub_821EAD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EAD60"))) PPC_WEAK_FUNC(sub_821EAD60);
PPC_FUNC_IMPL(__imp__sub_821EAD60) {
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
	// bl 0x821ea128
	sub_821EA128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ea260
	sub_821EA260(ctx, base);
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

__attribute__((alias("__imp__sub_821EAD94"))) PPC_WEAK_FUNC(sub_821EAD94);
PPC_FUNC_IMPL(__imp__sub_821EAD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EAD98"))) PPC_WEAK_FUNC(sub_821EAD98);
PPC_FUNC_IMPL(__imp__sub_821EAD98) {
	PPC_FUNC_PROLOGUE();
	// b 0x821ea348
	sub_821EA348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EAD9C"))) PPC_WEAK_FUNC(sub_821EAD9C);
PPC_FUNC_IMPL(__imp__sub_821EAD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EADA0"))) PPC_WEAK_FUNC(sub_821EADA0);
PPC_FUNC_IMPL(__imp__sub_821EADA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,7568(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 7568);
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
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821eae24
	if (cr6.eq) goto loc_821EAE24;
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
	// beq 0x821eae1c
	if (cr0.eq) goto loc_821EAE1C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821EAE1C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x821eae8c
	goto loc_821EAE8C;
loc_821EAE24:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,12356(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12356);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,12352
	r30.s64 = ctx.r9.s64 + 12352;
	// bne 0x821eae54
	if (!cr0.eq) goto loc_821EAE54;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12356, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-14396
	ctx.r4.s64 = r11.s64 + -14396;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821EAE54:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821eae80
	if (cr0.eq) goto loc_821EAE80;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// stw r27,12340(r11)
	PPC_STORE_U32(r11.u32 + 12340, r27.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// b 0x821eae88
	goto loc_821EAE88;
loc_821EAE80:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_821EAE88:
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_821EAE8C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821EADA8"))) PPC_WEAK_FUNC(sub_821EADA8);
PPC_FUNC_IMPL(__imp__sub_821EADA8) {
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
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821eae24
	if (cr6.eq) goto loc_821EAE24;
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
	// beq 0x821eae1c
	if (cr0.eq) goto loc_821EAE1C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821EAE1C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x821eae8c
	goto loc_821EAE8C;
loc_821EAE24:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,12356(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12356);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,12352
	r30.s64 = ctx.r9.s64 + 12352;
	// bne 0x821eae54
	if (!cr0.eq) goto loc_821EAE54;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12356, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-14396
	ctx.r4.s64 = r11.s64 + -14396;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821EAE54:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821eae80
	if (cr0.eq) goto loc_821EAE80;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// stw r27,12340(r11)
	PPC_STORE_U32(r11.u32 + 12340, r27.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// b 0x821eae88
	goto loc_821EAE88;
loc_821EAE80:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_821EAE88:
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_821EAE8C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821EAE94"))) PPC_WEAK_FUNC(sub_821EAE94);
PPC_FUNC_IMPL(__imp__sub_821EAE94) {
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

__attribute__((alias("__imp__sub_821EAEBC"))) PPC_WEAK_FUNC(sub_821EAEBC);
PPC_FUNC_IMPL(__imp__sub_821EAEBC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12356
	r11.s64 = r11.s64 + 12356;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12356
	ctx.r10.s64 = ctx.r10.s64 + 12356;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EAEE4"))) PPC_WEAK_FUNC(sub_821EAEE4);
PPC_FUNC_IMPL(__imp__sub_821EAEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EAEE8"))) PPC_WEAK_FUNC(sub_821EAEE8);
PPC_FUNC_IMPL(__imp__sub_821EAEE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,7648(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 7648);
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
	// bne cr6,0x821eaf40
	if (!cr6.eq) goto loc_821EAF40;
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
	// beq 0x821eaf78
	if (cr0.eq) goto loc_821EAF78;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821eaf78
	goto loc_821EAF78;
loc_821EAF40:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,5092
	r30.s64 = r11.s64 + 5092;
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
	// bl 0x821c55d0
	sub_821C55D0(ctx, base);
loc_821EAF78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821EAEF0"))) PPC_WEAK_FUNC(sub_821EAEF0);
PPC_FUNC_IMPL(__imp__sub_821EAEF0) {
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
	// bne cr6,0x821eaf40
	if (!cr6.eq) goto loc_821EAF40;
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
	// beq 0x821eaf78
	if (cr0.eq) goto loc_821EAF78;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821eaf78
	goto loc_821EAF78;
loc_821EAF40:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,5092
	r30.s64 = r11.s64 + 5092;
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
	// bl 0x821c55d0
	sub_821C55D0(ctx, base);
loc_821EAF78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821EAF84"))) PPC_WEAK_FUNC(sub_821EAF84);
PPC_FUNC_IMPL(__imp__sub_821EAF84) {
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

__attribute__((alias("__imp__sub_821EAFAC"))) PPC_WEAK_FUNC(sub_821EAFAC);
PPC_FUNC_IMPL(__imp__sub_821EAFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EAFB0"))) PPC_WEAK_FUNC(sub_821EAFB0);
PPC_FUNC_IMPL(__imp__sub_821EAFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r2{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
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
	// lwz r16,7752(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 7752);
	// mflr r12
	// bl 0x8239bcf8
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r30,68
	r29.s64 = r30.s64 + 68;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f0,-27476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27476);
	f0.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f30,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f30.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,7340
	r11.s64 = r11.s64 + 7340;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f31,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f31.f64 = double(temp.f32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stfs f0,40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// stfs f0,48(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 48, temp.u32);
	// stfs f0,52(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// stfs f30,56(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// stfs f30,60(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
	// stfs f31,64(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 64, temp.u32);
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r28,r11,-7284
	r28.s64 = r11.s64 + -7284;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// addi r29,r30,216
	r29.s64 = r30.s64 + 216;
	// stfs f31,84(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 84, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,88(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f31,92(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 92, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f31,96(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 96, temp.u32);
	// stfs f31,164(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 164, temp.u32);
	// stfs f31,168(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 168, temp.u32);
	// stfs f0,172(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 172, temp.u32);
	// lfs f13,7728(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7728);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f13,176(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 176, temp.u32);
	// stfs f31,180(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 180, temp.u32);
	// stfs f31,184(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 184, temp.u32);
	// stfs f30,188(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 188, temp.u32);
	// lfs f12,7724(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f30,192(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 192, temp.u32);
	// stfs f30,196(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 196, temp.u32);
	// stfs f12,200(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 200, temp.u32);
	// lfs f11,7720(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7720);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f11,204(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 204, temp.u32);
	// stfs f31,212(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 212, temp.u32);
	// lfs f10,7716(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7716);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,208(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 208, temp.u32);
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// addi r11,r30,100
	r11.s64 = r30.s64 + 100;
	// stfs f30,228(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 228, temp.u32);
	// stfs f31,232(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 232, temp.u32);
	// stfs f30,236(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 236, temp.u32);
	// stfs f30,240(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 240, temp.u32);
	// stfs f31,244(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 244, temp.u32);
	// lfs f0,7712(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7712);
	f0.f64 = double(temp.f32);
	// stfs f31,256(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 256, temp.u32);
	// stfs f0,260(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 260, temp.u32);
	// stfs f30,0(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f30,20(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f31,32(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f31,36(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stfs f30,40(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821EAFB8"))) PPC_WEAK_FUNC(sub_821EAFB8);
PPC_FUNC_IMPL(__imp__sub_821EAFB8) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r30,68
	r29.s64 = r30.s64 + 68;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f0,-27476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27476);
	f0.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f30,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f30.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,7340
	r11.s64 = r11.s64 + 7340;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f31,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f31.f64 = double(temp.f32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stfs f0,40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// stfs f0,48(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 48, temp.u32);
	// stfs f0,52(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// stfs f30,56(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// stfs f30,60(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
	// stfs f31,64(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 64, temp.u32);
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r28,r11,-7284
	r28.s64 = r11.s64 + -7284;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// addi r29,r30,216
	r29.s64 = r30.s64 + 216;
	// stfs f31,84(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 84, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,88(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f31,92(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 92, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f31,96(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 96, temp.u32);
	// stfs f31,164(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 164, temp.u32);
	// stfs f31,168(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 168, temp.u32);
	// stfs f0,172(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 172, temp.u32);
	// lfs f13,7728(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7728);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f13,176(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 176, temp.u32);
	// stfs f31,180(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 180, temp.u32);
	// stfs f31,184(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 184, temp.u32);
	// stfs f30,188(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 188, temp.u32);
	// lfs f12,7724(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f30,192(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 192, temp.u32);
	// stfs f30,196(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 196, temp.u32);
	// stfs f12,200(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 200, temp.u32);
	// lfs f11,7720(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7720);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f11,204(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 204, temp.u32);
	// stfs f31,212(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 212, temp.u32);
	// lfs f10,7716(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7716);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,208(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 208, temp.u32);
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// addi r11,r30,100
	r11.s64 = r30.s64 + 100;
	// stfs f30,228(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 228, temp.u32);
	// stfs f31,232(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 232, temp.u32);
	// stfs f30,236(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 236, temp.u32);
	// stfs f30,240(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 240, temp.u32);
	// stfs f31,244(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 244, temp.u32);
	// lfs f0,7712(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7712);
	f0.f64 = double(temp.f32);
	// stfs f31,256(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 256, temp.u32);
	// stfs f0,260(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 260, temp.u32);
	// stfs f30,0(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f30,20(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f31,32(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f31,36(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stfs f30,40(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821EB130"))) PPC_WEAK_FUNC(sub_821EB130);
PPC_FUNC_IMPL(__imp__sub_821EB130) {
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

__attribute__((alias("__imp__sub_821EB158"))) PPC_WEAK_FUNC(sub_821EB158);
PPC_FUNC_IMPL(__imp__sub_821EB158) {
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
	// addi r3,r11,68
	ctx.r3.s64 = r11.s64 + 68;
	// bl 0x821c7408
	sub_821C7408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EB184"))) PPC_WEAK_FUNC(sub_821EB184);
PPC_FUNC_IMPL(__imp__sub_821EB184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EB188"))) PPC_WEAK_FUNC(sub_821EB188);
PPC_FUNC_IMPL(__imp__sub_821EB188) {
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
	// bl 0x821eab28
	sub_821EAB28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821eb1b8
	if (cr0.eq) goto loc_821EB1B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821EB1B8:
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

__attribute__((alias("__imp__sub_821EB1D4"))) PPC_WEAK_FUNC(sub_821EB1D4);
PPC_FUNC_IMPL(__imp__sub_821EB1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EB1D8"))) PPC_WEAK_FUNC(sub_821EB1D8);
PPC_FUNC_IMPL(__imp__sub_821EB1D8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,9
	r11.s64 = 9;
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
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82132e90
	sub_82132E90(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
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
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
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
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d78e0
	sub_821D78E0(ctx, base);
	// addi r29,r31,100
	r29.s64 = r31.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r29,32
	r28.s64 = r29.s64 + 32;
	// addi r27,r29,16
	r27.s64 = r29.s64 + 16;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// addi r4,r31,164
	ctx.r4.s64 = r31.s64 + 164;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r31,172
	r29.s64 = r31.s64 + 172;
	// bl 0x821bbc48
	sub_821BBC48(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821bbc48
	sub_821BBC48(ctx, base);
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 208);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x821bbc48
	sub_821BBC48(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 212);
	f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d78e0
	sub_821D78E0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	f0.f64 = double(temp.f32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f0,228(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 228);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 232);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f0,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 256);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821EB3CC"))) PPC_WEAK_FUNC(sub_821EB3CC);
PPC_FUNC_IMPL(__imp__sub_821EB3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EB3D0"))) PPC_WEAK_FUNC(sub_821EB3D0);
PPC_FUNC_IMPL(__imp__sub_821EB3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// ble cr6,0x821eb42c
	if (!cr6.gt) goto loc_821EB42C;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,60
	ctx.r4.s64 = r31.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_821EB42C:
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(r28.s32, 5, xer);
	// ble cr6,0x821eb440
	if (!cr6.gt) goto loc_821EB440;
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d7930
	sub_821D7930(ctx, base);
loc_821EB440:
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(r28.s32, 6, xer);
	// ble cr6,0x821eb550
	if (!cr6.gt) goto loc_821EB550;
	// addi r29,r31,100
	r29.s64 = r31.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r27,r29,32
	r27.s64 = r29.s64 + 32;
	// addi r26,r29,16
	r26.s64 = r29.s64 + 16;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r29,r31,164
	r29.s64 = r31.s64 + 164;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r27,r31,172
	r27.s64 = r31.s64 + 172;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// cmpwi cr6,r28,9
	cr6.compare<int32_t>(r28.s32, 9, xer);
	// bge cr6,0x821eb4c0
	if (!cr6.lt) goto loc_821EB4C0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// lfs f13,168(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,168(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
loc_821EB4C0:
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,212
	ctx.r4.s64 = r31.s64 + 212;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(r28.s32, 8, xer);
	// ble cr6,0x821eb500
	if (!cr6.gt) goto loc_821EB500;
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d7930
	sub_821D7930(ctx, base);
loc_821EB500:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_821EB550:
	// cmpwi cr6,r28,7
	cr6.compare<int32_t>(r28.s32, 7, xer);
	// ble cr6,0x821eb588
	if (!cr6.gt) goto loc_821EB588;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,228
	ctx.r4.s64 = r31.s64 + 228;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,232
	ctx.r4.s64 = r31.s64 + 232;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,256
	ctx.r4.s64 = r31.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_821EB588:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821EB590"))) PPC_WEAK_FUNC(sub_821EB590);
PPC_FUNC_IMPL(__imp__sub_821EB590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
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
	// lwz r16,8424(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 8424);
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
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12464
	r29.s64 = ctx.r10.s64 + 12464;
	// bne 0x821eb5fc
	if (!cr0.eq) goto loc_821EB5FC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8188
	ctx.r4.s64 = r11.s64 + 8188;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB5FC:
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
	// beq 0x821eb630
	if (cr0.eq) goto loc_821EB630;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,40
	ctx.r3.s64 = r26.s64 + 40;
loc_821EB628:
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x821ebfb8
	goto loc_821EBFB8;
loc_821EB630:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12460
	r29.s64 = ctx.r10.s64 + 12460;
	// bne 0x821eb65c
	if (!cr0.eq) goto loc_821EB65C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8164
	ctx.r4.s64 = r11.s64 + 8164;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB65C:
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
	// beq 0x821eb68c
	if (cr0.eq) goto loc_821EB68C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,44
	ctx.r3.s64 = r26.s64 + 44;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EB68C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12456
	r29.s64 = ctx.r10.s64 + 12456;
	// bne 0x821eb6b8
	if (!cr0.eq) goto loc_821EB6B8;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8140
	ctx.r4.s64 = r11.s64 + 8140;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB6B8:
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
	// beq 0x821eb6e8
	if (cr0.eq) goto loc_821EB6E8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,48
	ctx.r3.s64 = r26.s64 + 48;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EB6E8:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12452
	r29.s64 = ctx.r10.s64 + 12452;
	// bne 0x821eb714
	if (!cr0.eq) goto loc_821EB714;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8116
	ctx.r4.s64 = r11.s64 + 8116;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB714:
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
	// beq 0x821eb744
	if (cr0.eq) goto loc_821EB744;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,52
	ctx.r3.s64 = r26.s64 + 52;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EB744:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12448
	r29.s64 = ctx.r10.s64 + 12448;
	// bne 0x821eb770
	if (!cr0.eq) goto loc_821EB770;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8092
	ctx.r4.s64 = r11.s64 + 8092;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB770:
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
	// beq 0x821eb7a0
	if (cr0.eq) goto loc_821EB7A0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,56
	ctx.r3.s64 = r26.s64 + 56;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EB7A0:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12444
	r29.s64 = ctx.r10.s64 + 12444;
	// bne 0x821eb7cc
	if (!cr0.eq) goto loc_821EB7CC;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8080
	ctx.r4.s64 = r11.s64 + 8080;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB7CC:
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
	// beq 0x821eb7fc
	if (cr0.eq) goto loc_821EB7FC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,60
	ctx.r3.s64 = r26.s64 + 60;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EB7FC:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12440
	r29.s64 = ctx.r10.s64 + 12440;
	// bne 0x821eb828
	if (!cr0.eq) goto loc_821EB828;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8064
	ctx.r4.s64 = r11.s64 + 8064;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB828:
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
	// beq 0x821eb858
	if (cr0.eq) goto loc_821EB858;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,64
	ctx.r3.s64 = r26.s64 + 64;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EB858:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12436
	r29.s64 = ctx.r10.s64 + 12436;
	// bne 0x821eb884
	if (!cr0.eq) goto loc_821EB884;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8048
	ctx.r4.s64 = r11.s64 + 8048;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB884:
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
	// beq 0x821eb8b8
	if (cr0.eq) goto loc_821EB8B8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,68
	ctx.r3.s64 = r26.s64 + 68;
loc_821EB8B0:
	// bl 0x821eaef0
	sub_821EAEF0(ctx, base);
	// b 0x821ebfb8
	goto loc_821EBFB8;
loc_821EB8B8:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12432
	r29.s64 = ctx.r10.s64 + 12432;
	// bne 0x821eb8e4
	if (!cr0.eq) goto loc_821EB8E4;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8036
	ctx.r4.s64 = r11.s64 + 8036;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB8E4:
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
	// beq 0x821eb918
	if (cr0.eq) goto loc_821EB918;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,100
	ctx.r3.s64 = r26.s64 + 100;
loc_821EB910:
	// bl 0x823275f8
	sub_823275F8(ctx, base);
	// b 0x821ebfb8
	goto loc_821EBFB8;
loc_821EB918:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12428
	r29.s64 = ctx.r10.s64 + 12428;
	// bne 0x821eb944
	if (!cr0.eq) goto loc_821EB944;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8024
	ctx.r4.s64 = r11.s64 + 8024;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB944:
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
	// beq 0x821eb974
	if (cr0.eq) goto loc_821EB974;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,148
	ctx.r3.s64 = r26.s64 + 148;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EB974:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12424
	r29.s64 = ctx.r10.s64 + 12424;
	// bne 0x821eb9a0
	if (!cr0.eq) goto loc_821EB9A0;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8012
	ctx.r4.s64 = r11.s64 + 8012;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB9A0:
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
	// beq 0x821eb9d0
	if (cr0.eq) goto loc_821EB9D0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,116
	ctx.r3.s64 = r26.s64 + 116;
	// b 0x821eb910
	goto loc_821EB910;
loc_821EB9D0:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12420
	r29.s64 = ctx.r10.s64 + 12420;
	// bne 0x821eb9fc
	if (!cr0.eq) goto loc_821EB9FC;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8000
	ctx.r4.s64 = r11.s64 + 8000;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB9FC:
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
	// beq 0x821eba2c
	if (cr0.eq) goto loc_821EBA2C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,152
	ctx.r3.s64 = r26.s64 + 152;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EBA2C:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12416
	r29.s64 = ctx.r10.s64 + 12416;
	// bne 0x821eba58
	if (!cr0.eq) goto loc_821EBA58;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7988
	ctx.r4.s64 = r11.s64 + 7988;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBA58:
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
	// beq 0x821eba88
	if (cr0.eq) goto loc_821EBA88;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,132
	ctx.r3.s64 = r26.s64 + 132;
	// b 0x821eb910
	goto loc_821EB910;
loc_821EBA88:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12412
	r29.s64 = ctx.r10.s64 + 12412;
	// bne 0x821ebab4
	if (!cr0.eq) goto loc_821EBAB4;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7976
	ctx.r4.s64 = r11.s64 + 7976;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBAB4:
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
	// beq 0x821ebae4
	if (cr0.eq) goto loc_821EBAE4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,156
	ctx.r3.s64 = r26.s64 + 156;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EBAE4:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12408
	r29.s64 = ctx.r10.s64 + 12408;
	// bne 0x821ebb10
	if (!cr0.eq) goto loc_821EBB10;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7972
	ctx.r4.s64 = r11.s64 + 7972;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBB10:
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
	// beq 0x821ebb64
	if (cr0.eq) goto loc_821EBB64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,80
	ctx.r3.s64 = r26.s64 + 80;
loc_821EBB3C:
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ebfb4
	if (cr0.eq) goto loc_821EBFB4;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821ebb5c
	if (!cr0.eq) goto loc_821EBB5C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821eaa70
	sub_821EAA70(ctx, base);
loc_821EBB5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821ebfb8
	goto loc_821EBFB8;
loc_821EBB64:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12404
	r29.s64 = ctx.r10.s64 + 12404;
	// bne 0x821ebb90
	if (!cr0.eq) goto loc_821EBB90;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7960
	ctx.r4.s64 = r11.s64 + 7960;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBB90:
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
	// beq 0x821ebbc0
	if (cr0.eq) goto loc_821EBBC0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,84
	ctx.r3.s64 = r26.s64 + 84;
	// b 0x821ebb3c
	goto loc_821EBB3C;
loc_821EBBC0:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12400
	r29.s64 = ctx.r10.s64 + 12400;
	// bne 0x821ebbec
	if (!cr0.eq) goto loc_821EBBEC;
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7948
	ctx.r4.s64 = r11.s64 + 7948;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBBEC:
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
	// beq 0x821ebc1c
	if (cr0.eq) goto loc_821EBC1C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,88
	ctx.r3.s64 = r26.s64 + 88;
	// b 0x821ebb3c
	goto loc_821EBB3C;
loc_821EBC1C:
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12396
	r29.s64 = ctx.r10.s64 + 12396;
	// bne 0x821ebc48
	if (!cr0.eq) goto loc_821EBC48;
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7936
	ctx.r4.s64 = r11.s64 + 7936;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBC48:
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
	// beq 0x821ebc78
	if (cr0.eq) goto loc_821EBC78;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,96
	ctx.r3.s64 = r26.s64 + 96;
	// b 0x821ebb3c
	goto loc_821EBB3C;
loc_821EBC78:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12392
	r29.s64 = ctx.r10.s64 + 12392;
	// bne 0x821ebca4
	if (!cr0.eq) goto loc_821EBCA4;
	// oris r11,r11,4
	r11.u64 = r11.u64 | 262144;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7924
	ctx.r4.s64 = r11.s64 + 7924;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBCA4:
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
	// beq 0x821ebcd4
	if (cr0.eq) goto loc_821EBCD4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,92
	ctx.r3.s64 = r26.s64 + 92;
	// b 0x821ebb3c
	goto loc_821EBB3C;
loc_821EBCD4:
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12388
	r29.s64 = ctx.r10.s64 + 12388;
	// bne 0x821ebd00
	if (!cr0.eq) goto loc_821EBD00;
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7912
	ctx.r4.s64 = r11.s64 + 7912;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBD00:
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
	// beq 0x821ebd30
	if (cr0.eq) goto loc_821EBD30;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,168
	ctx.r3.s64 = r26.s64 + 168;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EBD30:
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12384
	r29.s64 = ctx.r10.s64 + 12384;
	// bne 0x821ebd5c
	if (!cr0.eq) goto loc_821EBD5C;
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7900
	ctx.r4.s64 = r11.s64 + 7900;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBD5C:
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
	// beq 0x821ebd90
	if (cr0.eq) goto loc_821EBD90;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,172
	ctx.r3.s64 = r26.s64 + 172;
loc_821EBD88:
	// bl 0x82327480
	sub_82327480(ctx, base);
	// b 0x821ebfb8
	goto loc_821EBFB8;
loc_821EBD90:
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12380
	r29.s64 = ctx.r10.s64 + 12380;
	// bne 0x821ebdbc
	if (!cr0.eq) goto loc_821EBDBC;
	// oris r11,r11,32
	r11.u64 = r11.u64 | 2097152;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7880
	ctx.r4.s64 = r11.s64 + 7880;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBDBC:
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
	// beq 0x821ebdec
	if (cr0.eq) goto loc_821EBDEC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,200
	ctx.r3.s64 = r26.s64 + 200;
	// b 0x821ebd88
	goto loc_821EBD88;
loc_821EBDEC:
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12376
	r29.s64 = ctx.r10.s64 + 12376;
	// bne 0x821ebe18
	if (!cr0.eq) goto loc_821EBE18;
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7864
	ctx.r4.s64 = r11.s64 + 7864;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBE18:
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
	// beq 0x821ebe48
	if (cr0.eq) goto loc_821EBE48;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,212
	ctx.r3.s64 = r26.s64 + 212;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EBE48:
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12372
	r29.s64 = ctx.r10.s64 + 12372;
	// bne 0x821ebe74
	if (!cr0.eq) goto loc_821EBE74;
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7852
	ctx.r4.s64 = r11.s64 + 7852;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBE74:
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
	// beq 0x821ebea4
	if (cr0.eq) goto loc_821EBEA4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,216
	ctx.r3.s64 = r26.s64 + 216;
	// b 0x821eb8b0
	goto loc_821EB8B0;
loc_821EBEA4:
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12368
	r29.s64 = ctx.r10.s64 + 12368;
	// bne 0x821ebed0
	if (!cr0.eq) goto loc_821EBED0;
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7840
	ctx.r4.s64 = r11.s64 + 7840;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBED0:
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
	// beq 0x821ebf00
	if (cr0.eq) goto loc_821EBF00;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,228
	ctx.r3.s64 = r26.s64 + 228;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EBF00:
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12364
	r29.s64 = ctx.r10.s64 + 12364;
	// bne 0x821ebf2c
	if (!cr0.eq) goto loc_821EBF2C;
	// oris r11,r11,512
	r11.u64 = r11.u64 | 33554432;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7828
	ctx.r4.s64 = r11.s64 + 7828;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBF2C:
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
	// beq 0x821ebf5c
	if (cr0.eq) goto loc_821EBF5C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,232
	ctx.r3.s64 = r26.s64 + 232;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EBF5C:
	// rlwinm. r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12360
	r29.s64 = ctx.r10.s64 + 12360;
	// bne 0x821ebf84
	if (!cr0.eq) goto loc_821EBF84;
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7816
	ctx.r4.s64 = r11.s64 + 7816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821EBF84:
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
	// beq 0x821ebfb4
	if (cr0.eq) goto loc_821EBFB4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,256
	ctx.r3.s64 = r26.s64 + 256;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EBFB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EBFB8:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821EB598"))) PPC_WEAK_FUNC(sub_821EB598);
PPC_FUNC_IMPL(__imp__sub_821EB598) {
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
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12464
	r29.s64 = ctx.r10.s64 + 12464;
	// bne 0x821eb5fc
	if (!cr0.eq) goto loc_821EB5FC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8188
	ctx.r4.s64 = r11.s64 + 8188;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB5FC:
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
	// beq 0x821eb630
	if (cr0.eq) goto loc_821EB630;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,40
	ctx.r3.s64 = r26.s64 + 40;
loc_821EB628:
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x821ebfb8
	goto loc_821EBFB8;
loc_821EB630:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12460
	r29.s64 = ctx.r10.s64 + 12460;
	// bne 0x821eb65c
	if (!cr0.eq) goto loc_821EB65C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8164
	ctx.r4.s64 = r11.s64 + 8164;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB65C:
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
	// beq 0x821eb68c
	if (cr0.eq) goto loc_821EB68C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,44
	ctx.r3.s64 = r26.s64 + 44;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EB68C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12456
	r29.s64 = ctx.r10.s64 + 12456;
	// bne 0x821eb6b8
	if (!cr0.eq) goto loc_821EB6B8;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8140
	ctx.r4.s64 = r11.s64 + 8140;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB6B8:
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
	// beq 0x821eb6e8
	if (cr0.eq) goto loc_821EB6E8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,48
	ctx.r3.s64 = r26.s64 + 48;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EB6E8:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12452
	r29.s64 = ctx.r10.s64 + 12452;
	// bne 0x821eb714
	if (!cr0.eq) goto loc_821EB714;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8116
	ctx.r4.s64 = r11.s64 + 8116;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB714:
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
	// beq 0x821eb744
	if (cr0.eq) goto loc_821EB744;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,52
	ctx.r3.s64 = r26.s64 + 52;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EB744:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12448
	r29.s64 = ctx.r10.s64 + 12448;
	// bne 0x821eb770
	if (!cr0.eq) goto loc_821EB770;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8092
	ctx.r4.s64 = r11.s64 + 8092;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB770:
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
	// beq 0x821eb7a0
	if (cr0.eq) goto loc_821EB7A0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,56
	ctx.r3.s64 = r26.s64 + 56;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EB7A0:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12444
	r29.s64 = ctx.r10.s64 + 12444;
	// bne 0x821eb7cc
	if (!cr0.eq) goto loc_821EB7CC;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8080
	ctx.r4.s64 = r11.s64 + 8080;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB7CC:
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
	// beq 0x821eb7fc
	if (cr0.eq) goto loc_821EB7FC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,60
	ctx.r3.s64 = r26.s64 + 60;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EB7FC:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12440
	r29.s64 = ctx.r10.s64 + 12440;
	// bne 0x821eb828
	if (!cr0.eq) goto loc_821EB828;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8064
	ctx.r4.s64 = r11.s64 + 8064;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB828:
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
	// beq 0x821eb858
	if (cr0.eq) goto loc_821EB858;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,64
	ctx.r3.s64 = r26.s64 + 64;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EB858:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12436
	r29.s64 = ctx.r10.s64 + 12436;
	// bne 0x821eb884
	if (!cr0.eq) goto loc_821EB884;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8048
	ctx.r4.s64 = r11.s64 + 8048;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB884:
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
	// beq 0x821eb8b8
	if (cr0.eq) goto loc_821EB8B8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,68
	ctx.r3.s64 = r26.s64 + 68;
loc_821EB8B0:
	// bl 0x821eaef0
	sub_821EAEF0(ctx, base);
	// b 0x821ebfb8
	goto loc_821EBFB8;
loc_821EB8B8:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12432
	r29.s64 = ctx.r10.s64 + 12432;
	// bne 0x821eb8e4
	if (!cr0.eq) goto loc_821EB8E4;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8036
	ctx.r4.s64 = r11.s64 + 8036;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB8E4:
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
	// beq 0x821eb918
	if (cr0.eq) goto loc_821EB918;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,100
	ctx.r3.s64 = r26.s64 + 100;
loc_821EB910:
	// bl 0x823275f8
	sub_823275F8(ctx, base);
	// b 0x821ebfb8
	goto loc_821EBFB8;
loc_821EB918:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12428
	r29.s64 = ctx.r10.s64 + 12428;
	// bne 0x821eb944
	if (!cr0.eq) goto loc_821EB944;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8024
	ctx.r4.s64 = r11.s64 + 8024;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB944:
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
	// beq 0x821eb974
	if (cr0.eq) goto loc_821EB974;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,148
	ctx.r3.s64 = r26.s64 + 148;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EB974:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12424
	r29.s64 = ctx.r10.s64 + 12424;
	// bne 0x821eb9a0
	if (!cr0.eq) goto loc_821EB9A0;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8012
	ctx.r4.s64 = r11.s64 + 8012;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB9A0:
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
	// beq 0x821eb9d0
	if (cr0.eq) goto loc_821EB9D0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,116
	ctx.r3.s64 = r26.s64 + 116;
	// b 0x821eb910
	goto loc_821EB910;
loc_821EB9D0:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12420
	r29.s64 = ctx.r10.s64 + 12420;
	// bne 0x821eb9fc
	if (!cr0.eq) goto loc_821EB9FC;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8000
	ctx.r4.s64 = r11.s64 + 8000;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EB9FC:
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
	// beq 0x821eba2c
	if (cr0.eq) goto loc_821EBA2C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,152
	ctx.r3.s64 = r26.s64 + 152;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EBA2C:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12416
	r29.s64 = ctx.r10.s64 + 12416;
	// bne 0x821eba58
	if (!cr0.eq) goto loc_821EBA58;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7988
	ctx.r4.s64 = r11.s64 + 7988;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBA58:
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
	// beq 0x821eba88
	if (cr0.eq) goto loc_821EBA88;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,132
	ctx.r3.s64 = r26.s64 + 132;
	// b 0x821eb910
	goto loc_821EB910;
loc_821EBA88:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12412
	r29.s64 = ctx.r10.s64 + 12412;
	// bne 0x821ebab4
	if (!cr0.eq) goto loc_821EBAB4;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7976
	ctx.r4.s64 = r11.s64 + 7976;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBAB4:
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
	// beq 0x821ebae4
	if (cr0.eq) goto loc_821EBAE4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,156
	ctx.r3.s64 = r26.s64 + 156;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EBAE4:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12408
	r29.s64 = ctx.r10.s64 + 12408;
	// bne 0x821ebb10
	if (!cr0.eq) goto loc_821EBB10;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7972
	ctx.r4.s64 = r11.s64 + 7972;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBB10:
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
	// beq 0x821ebb64
	if (cr0.eq) goto loc_821EBB64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,80
	ctx.r3.s64 = r26.s64 + 80;
loc_821EBB3C:
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ebfb4
	if (cr0.eq) goto loc_821EBFB4;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821ebb5c
	if (!cr0.eq) goto loc_821EBB5C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821eaa70
	sub_821EAA70(ctx, base);
loc_821EBB5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821ebfb8
	goto loc_821EBFB8;
loc_821EBB64:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12404
	r29.s64 = ctx.r10.s64 + 12404;
	// bne 0x821ebb90
	if (!cr0.eq) goto loc_821EBB90;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7960
	ctx.r4.s64 = r11.s64 + 7960;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBB90:
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
	// beq 0x821ebbc0
	if (cr0.eq) goto loc_821EBBC0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,84
	ctx.r3.s64 = r26.s64 + 84;
	// b 0x821ebb3c
	goto loc_821EBB3C;
loc_821EBBC0:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12400
	r29.s64 = ctx.r10.s64 + 12400;
	// bne 0x821ebbec
	if (!cr0.eq) goto loc_821EBBEC;
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7948
	ctx.r4.s64 = r11.s64 + 7948;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBBEC:
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
	// beq 0x821ebc1c
	if (cr0.eq) goto loc_821EBC1C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,88
	ctx.r3.s64 = r26.s64 + 88;
	// b 0x821ebb3c
	goto loc_821EBB3C;
loc_821EBC1C:
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12396
	r29.s64 = ctx.r10.s64 + 12396;
	// bne 0x821ebc48
	if (!cr0.eq) goto loc_821EBC48;
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7936
	ctx.r4.s64 = r11.s64 + 7936;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBC48:
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
	// beq 0x821ebc78
	if (cr0.eq) goto loc_821EBC78;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,96
	ctx.r3.s64 = r26.s64 + 96;
	// b 0x821ebb3c
	goto loc_821EBB3C;
loc_821EBC78:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12392
	r29.s64 = ctx.r10.s64 + 12392;
	// bne 0x821ebca4
	if (!cr0.eq) goto loc_821EBCA4;
	// oris r11,r11,4
	r11.u64 = r11.u64 | 262144;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7924
	ctx.r4.s64 = r11.s64 + 7924;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBCA4:
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
	// beq 0x821ebcd4
	if (cr0.eq) goto loc_821EBCD4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,92
	ctx.r3.s64 = r26.s64 + 92;
	// b 0x821ebb3c
	goto loc_821EBB3C;
loc_821EBCD4:
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12388
	r29.s64 = ctx.r10.s64 + 12388;
	// bne 0x821ebd00
	if (!cr0.eq) goto loc_821EBD00;
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7912
	ctx.r4.s64 = r11.s64 + 7912;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBD00:
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
	// beq 0x821ebd30
	if (cr0.eq) goto loc_821EBD30;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,168
	ctx.r3.s64 = r26.s64 + 168;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EBD30:
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12384
	r29.s64 = ctx.r10.s64 + 12384;
	// bne 0x821ebd5c
	if (!cr0.eq) goto loc_821EBD5C;
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7900
	ctx.r4.s64 = r11.s64 + 7900;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBD5C:
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
	// beq 0x821ebd90
	if (cr0.eq) goto loc_821EBD90;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,172
	ctx.r3.s64 = r26.s64 + 172;
loc_821EBD88:
	// bl 0x82327480
	sub_82327480(ctx, base);
	// b 0x821ebfb8
	goto loc_821EBFB8;
loc_821EBD90:
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12380
	r29.s64 = ctx.r10.s64 + 12380;
	// bne 0x821ebdbc
	if (!cr0.eq) goto loc_821EBDBC;
	// oris r11,r11,32
	r11.u64 = r11.u64 | 2097152;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7880
	ctx.r4.s64 = r11.s64 + 7880;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBDBC:
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
	// beq 0x821ebdec
	if (cr0.eq) goto loc_821EBDEC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,200
	ctx.r3.s64 = r26.s64 + 200;
	// b 0x821ebd88
	goto loc_821EBD88;
loc_821EBDEC:
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12376
	r29.s64 = ctx.r10.s64 + 12376;
	// bne 0x821ebe18
	if (!cr0.eq) goto loc_821EBE18;
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7864
	ctx.r4.s64 = r11.s64 + 7864;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBE18:
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
	// beq 0x821ebe48
	if (cr0.eq) goto loc_821EBE48;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,212
	ctx.r3.s64 = r26.s64 + 212;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EBE48:
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12372
	r29.s64 = ctx.r10.s64 + 12372;
	// bne 0x821ebe74
	if (!cr0.eq) goto loc_821EBE74;
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7852
	ctx.r4.s64 = r11.s64 + 7852;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBE74:
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
	// beq 0x821ebea4
	if (cr0.eq) goto loc_821EBEA4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,216
	ctx.r3.s64 = r26.s64 + 216;
	// b 0x821eb8b0
	goto loc_821EB8B0;
loc_821EBEA4:
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12368
	r29.s64 = ctx.r10.s64 + 12368;
	// bne 0x821ebed0
	if (!cr0.eq) goto loc_821EBED0;
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7840
	ctx.r4.s64 = r11.s64 + 7840;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBED0:
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
	// beq 0x821ebf00
	if (cr0.eq) goto loc_821EBF00;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,228
	ctx.r3.s64 = r26.s64 + 228;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EBF00:
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12364
	r29.s64 = ctx.r10.s64 + 12364;
	// bne 0x821ebf2c
	if (!cr0.eq) goto loc_821EBF2C;
	// oris r11,r11,512
	r11.u64 = r11.u64 | 33554432;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7828
	ctx.r4.s64 = r11.s64 + 7828;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12468);
loc_821EBF2C:
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
	// beq 0x821ebf5c
	if (cr0.eq) goto loc_821EBF5C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,232
	ctx.r3.s64 = r26.s64 + 232;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EBF5C:
	// rlwinm. r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12360
	r29.s64 = ctx.r10.s64 + 12360;
	// bne 0x821ebf84
	if (!cr0.eq) goto loc_821EBF84;
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// stw r11,12468(r30)
	PPC_STORE_U32(r30.u32 + 12468, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7816
	ctx.r4.s64 = r11.s64 + 7816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821EBF84:
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
	// beq 0x821ebfb4
	if (cr0.eq) goto loc_821EBFB4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,256
	ctx.r3.s64 = r26.s64 + 256;
	// b 0x821eb628
	goto loc_821EB628;
loc_821EBFB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EBFB8:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821EBFC0"))) PPC_WEAK_FUNC(sub_821EBFC0);
PPC_FUNC_IMPL(__imp__sub_821EBFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBFE8"))) PPC_WEAK_FUNC(sub_821EBFE8);
PPC_FUNC_IMPL(__imp__sub_821EBFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC010"))) PPC_WEAK_FUNC(sub_821EC010);
PPC_FUNC_IMPL(__imp__sub_821EC010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC038"))) PPC_WEAK_FUNC(sub_821EC038);
PPC_FUNC_IMPL(__imp__sub_821EC038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC060"))) PPC_WEAK_FUNC(sub_821EC060);
PPC_FUNC_IMPL(__imp__sub_821EC060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC088"))) PPC_WEAK_FUNC(sub_821EC088);
PPC_FUNC_IMPL(__imp__sub_821EC088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC0B0"))) PPC_WEAK_FUNC(sub_821EC0B0);
PPC_FUNC_IMPL(__imp__sub_821EC0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC0D8"))) PPC_WEAK_FUNC(sub_821EC0D8);
PPC_FUNC_IMPL(__imp__sub_821EC0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC100"))) PPC_WEAK_FUNC(sub_821EC100);
PPC_FUNC_IMPL(__imp__sub_821EC100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC128"))) PPC_WEAK_FUNC(sub_821EC128);
PPC_FUNC_IMPL(__imp__sub_821EC128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC150"))) PPC_WEAK_FUNC(sub_821EC150);
PPC_FUNC_IMPL(__imp__sub_821EC150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC178"))) PPC_WEAK_FUNC(sub_821EC178);
PPC_FUNC_IMPL(__imp__sub_821EC178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC1A0"))) PPC_WEAK_FUNC(sub_821EC1A0);
PPC_FUNC_IMPL(__imp__sub_821EC1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC1C8"))) PPC_WEAK_FUNC(sub_821EC1C8);
PPC_FUNC_IMPL(__imp__sub_821EC1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC1F0"))) PPC_WEAK_FUNC(sub_821EC1F0);
PPC_FUNC_IMPL(__imp__sub_821EC1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC218"))) PPC_WEAK_FUNC(sub_821EC218);
PPC_FUNC_IMPL(__imp__sub_821EC218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,17,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC240"))) PPC_WEAK_FUNC(sub_821EC240);
PPC_FUNC_IMPL(__imp__sub_821EC240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,16,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC268"))) PPC_WEAK_FUNC(sub_821EC268);
PPC_FUNC_IMPL(__imp__sub_821EC268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,15,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC290"))) PPC_WEAK_FUNC(sub_821EC290);
PPC_FUNC_IMPL(__imp__sub_821EC290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,14,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC2B8"))) PPC_WEAK_FUNC(sub_821EC2B8);
PPC_FUNC_IMPL(__imp__sub_821EC2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,13,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC2E0"))) PPC_WEAK_FUNC(sub_821EC2E0);
PPC_FUNC_IMPL(__imp__sub_821EC2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,12,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC308"))) PPC_WEAK_FUNC(sub_821EC308);
PPC_FUNC_IMPL(__imp__sub_821EC308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,11,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC330"))) PPC_WEAK_FUNC(sub_821EC330);
PPC_FUNC_IMPL(__imp__sub_821EC330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,10,8
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC358"))) PPC_WEAK_FUNC(sub_821EC358);
PPC_FUNC_IMPL(__imp__sub_821EC358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,9,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC380"))) PPC_WEAK_FUNC(sub_821EC380);
PPC_FUNC_IMPL(__imp__sub_821EC380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,8,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC3A8"))) PPC_WEAK_FUNC(sub_821EC3A8);
PPC_FUNC_IMPL(__imp__sub_821EC3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,7,5
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC3D0"))) PPC_WEAK_FUNC(sub_821EC3D0);
PPC_FUNC_IMPL(__imp__sub_821EC3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12468
	r11.s64 = r11.s64 + 12468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,6,4
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC3F8"))) PPC_WEAK_FUNC(sub_821EC3F8);
PPC_FUNC_IMPL(__imp__sub_821EC3F8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82315258
	sub_82315258(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,9580
	ctx.r6.s64 = r11.s64 + 9580;
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
	// beq 0x821ec540
	if (cr0.eq) goto loc_821EC540;
	// addi r11,r30,40
	r11.s64 = r30.s64 + 40;
	// lfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 64);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// addi r10,r31,40
	ctx.r10.s64 = r31.s64 + 40;
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	f0.f64 = double(temp.f32);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// bl 0x821c55d0
	sub_821C55D0(ctx, base);
	// addi r4,r30,100
	ctx.r4.s64 = r30.s64 + 100;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// addi r11,r30,164
	r11.s64 = r30.s64 + 164;
	// lfs f0,84(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 84);
	f0.f64 = double(temp.f32);
	// addi r10,r31,164
	ctx.r10.s64 = r31.s64 + 164;
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// addi r9,r30,172
	ctx.r9.s64 = r30.s64 + 172;
	// lfs f0,88(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 88);
	f0.f64 = double(temp.f32);
	// addi r8,r31,172
	ctx.r8.s64 = r31.s64 + 172;
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// addi r7,r30,200
	ctx.r7.s64 = r30.s64 + 200;
	// lfs f0,92(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 92);
	f0.f64 = double(temp.f32);
	// addi r6,r31,200
	ctx.r6.s64 = r31.s64 + 200;
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// lfs f0,96(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// lfs f0,208(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 208);
	f0.f64 = double(temp.f32);
	// stfs f0,208(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// lfs f0,212(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 212);
	f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// lwz r4,224(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// bl 0x821c55d0
	sub_821C55D0(ctx, base);
	// lfs f0,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 232);
	f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// lfs f0,228(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 228);
	f0.f64 = double(temp.f32);
	// stfs f0,228(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// lfs f0,256(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 256);
	f0.f64 = double(temp.f32);
	// stfs f0,256(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
loc_821EC540:
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

__attribute__((alias("__imp__sub_821EC558"))) PPC_WEAK_FUNC(sub_821EC558);
PPC_FUNC_IMPL(__imp__sub_821EC558) {
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
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bgt cr6,0x821ec5ac
	if (cr6.gt) goto loc_821EC5AC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821eb3d0
	sub_821EB3D0(ctx, base);
loc_821EC5AC:
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

__attribute__((alias("__imp__sub_821EC5C4"))) PPC_WEAK_FUNC(sub_821EC5C4);
PPC_FUNC_IMPL(__imp__sub_821EC5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC5C8"))) PPC_WEAK_FUNC(sub_821EC5C8);
PPC_FUNC_IMPL(__imp__sub_821EC5C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x821ec5dc
	if (!cr6.eq) goto loc_821EC5DC;
loc_821EC5D4:
	// li r11,2
	r11.s64 = 2;
	// b 0x821ec6c4
	goto loc_821EC6C4;
loc_821EC5DC:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x821ec600
	if (!cr6.eq) goto loc_821EC600;
	// li r11,2
	r11.s64 = 2;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r11.u8);
	// blr 
	return;
loc_821EC600:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x821ec610
	if (!cr6.eq) goto loc_821EC610;
loc_821EC608:
	// li r11,3
	r11.s64 = 3;
	// b 0x821ec6c4
	goto loc_821EC6C4;
loc_821EC610:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x821ec620
	if (!cr6.eq) goto loc_821EC620;
	// li r11,4
	r11.s64 = 4;
	// b 0x821ec6c4
	goto loc_821EC6C4;
loc_821EC620:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x821ec5d4
	if (cr6.eq) goto loc_821EC5D4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x821ec608
	if (cr6.eq) goto loc_821EC608;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x821ec640
	if (!cr6.eq) goto loc_821EC640;
loc_821EC638:
	// li r11,1
	r11.s64 = 1;
	// b 0x821ec6c4
	goto loc_821EC6C4;
loc_821EC640:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// beq cr6,0x821ec638
	if (cr6.eq) goto loc_821EC638;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// beq cr6,0x821ec608
	if (cr6.eq) goto loc_821EC608;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x821ec6a0
	if (!cr6.eq) goto loc_821EC6A0;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r11,12472(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12472);
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(r11.s32, 14, xer);
	// bge cr6,0x821ec684
	if (!cr6.lt) goto loc_821EC684;
	// li r11,3
	r11.s64 = 3;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// blr 
	return;
loc_821EC684:
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r11.u8);
	// blr 
	return;
loc_821EC6A0:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bne cr6,0x821ec6b0
	if (!cr6.eq) goto loc_821EC6B0;
	// li r11,5
	r11.s64 = 5;
	// b 0x821ec6c4
	goto loc_821EC6C4;
loc_821EC6B0:
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(r11.s32, 14, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cntlzw r11,r4
	r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_821EC6C4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC6CC"))) PPC_WEAK_FUNC(sub_821EC6CC);
PPC_FUNC_IMPL(__imp__sub_821EC6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC6D0"))) PPC_WEAK_FUNC(sub_821EC6D0);
PPC_FUNC_IMPL(__imp__sub_821EC6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, r11.u8);
	// stb r11,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, r11.u8);
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC6F8"))) PPC_WEAK_FUNC(sub_821EC6F8);
PPC_FUNC_IMPL(__imp__sub_821EC6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
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
	// lwz r16,8928(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 8928);
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,8908
	r11.s64 = r11.s64 + 8908;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821ec740
	if (cr0.eq) goto loc_821EC740;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_821EC740:
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

__attribute__((alias("__imp__sub_821EC700"))) PPC_WEAK_FUNC(sub_821EC700);
PPC_FUNC_IMPL(__imp__sub_821EC700) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,8908
	r11.s64 = r11.s64 + 8908;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821ec740
	if (cr0.eq) goto loc_821EC740;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_821EC740:
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

__attribute__((alias("__imp__sub_821EC764"))) PPC_WEAK_FUNC(sub_821EC764);
PPC_FUNC_IMPL(__imp__sub_821EC764) {
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

__attribute__((alias("__imp__sub_821EC78C"))) PPC_WEAK_FUNC(sub_821EC78C);
PPC_FUNC_IMPL(__imp__sub_821EC78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC790"))) PPC_WEAK_FUNC(sub_821EC790);
PPC_FUNC_IMPL(__imp__sub_821EC790) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC798"))) PPC_WEAK_FUNC(sub_821EC798);
PPC_FUNC_IMPL(__imp__sub_821EC798) {
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
	// bl 0x821ec700
	sub_821EC700(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ec7c8
	if (cr0.eq) goto loc_821EC7C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_821EC7C8:
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

__attribute__((alias("__imp__sub_821EC7E4"))) PPC_WEAK_FUNC(sub_821EC7E4);
PPC_FUNC_IMPL(__imp__sub_821EC7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC7E8"))) PPC_WEAK_FUNC(sub_821EC7E8);
PPC_FUNC_IMPL(__imp__sub_821EC7E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,8984(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 8984);
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r4,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// addi r11,r11,8908
	r11.s64 = r11.s64 + 8908;
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x821ec838
	if (cr6.eq) goto loc_821EC838;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_821EC838:
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

__attribute__((alias("__imp__sub_821EC7F0"))) PPC_WEAK_FUNC(sub_821EC7F0);
PPC_FUNC_IMPL(__imp__sub_821EC7F0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r4,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// addi r11,r11,8908
	r11.s64 = r11.s64 + 8908;
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x821ec838
	if (cr6.eq) goto loc_821EC838;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_821EC838:
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

__attribute__((alias("__imp__sub_821EC854"))) PPC_WEAK_FUNC(sub_821EC854);
PPC_FUNC_IMPL(__imp__sub_821EC854) {
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

__attribute__((alias("__imp__sub_821EC87C"))) PPC_WEAK_FUNC(sub_821EC87C);
PPC_FUNC_IMPL(__imp__sub_821EC87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC880"))) PPC_WEAK_FUNC(sub_821EC880);
PPC_FUNC_IMPL(__imp__sub_821EC880) {
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
	// beq cr6,0x821ec8d0
	if (cr6.eq) goto loc_821EC8D0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821ec8b8
	if (cr6.eq) goto loc_821EC8B8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_821EC8B8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq cr6,0x821ec8d0
	if (cr6.eq) goto loc_821EC8D0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_821EC8D0:
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

__attribute__((alias("__imp__sub_821EC8E8"))) PPC_WEAK_FUNC(sub_821EC8E8);
PPC_FUNC_IMPL(__imp__sub_821EC8E8) {
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
	// bl 0x82357518
	sub_82357518(ctx, base);
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

__attribute__((alias("__imp__sub_821EC944"))) PPC_WEAK_FUNC(sub_821EC944);
PPC_FUNC_IMPL(__imp__sub_821EC944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC948"))) PPC_WEAK_FUNC(sub_821EC948);
PPC_FUNC_IMPL(__imp__sub_821EC948) {
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
	// bne cr6,0x821ec994
	if (!cr6.eq) goto loc_821EC994;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,12236
	ctx.r6.s64 = r11.s64 + 12236;
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
	// bl 0x821ec880
	sub_821EC880(ctx, base);
loc_821EC994:
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

__attribute__((alias("__imp__sub_821EC9A8"))) PPC_WEAK_FUNC(sub_821EC9A8);
PPC_FUNC_IMPL(__imp__sub_821EC9A8) {
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
	// bl 0x821ec700
	sub_821EC700(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ec9d8
	if (cr0.eq) goto loc_821EC9D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_821EC9D8:
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

__attribute__((alias("__imp__sub_821EC9F4"))) PPC_WEAK_FUNC(sub_821EC9F4);
PPC_FUNC_IMPL(__imp__sub_821EC9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC9F8"))) PPC_WEAK_FUNC(sub_821EC9F8);
PPC_FUNC_IMPL(__imp__sub_821EC9F8) {
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
	// beq 0x821eca20
	if (cr0.eq) goto loc_821ECA20;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x821eca28
	goto loc_821ECA28;
loc_821ECA20:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
loc_821ECA28:
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

__attribute__((alias("__imp__sub_821ECA44"))) PPC_WEAK_FUNC(sub_821ECA44);
PPC_FUNC_IMPL(__imp__sub_821ECA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ECA48"))) PPC_WEAK_FUNC(sub_821ECA48);
PPC_FUNC_IMPL(__imp__sub_821ECA48) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ecac0
	if (cr0.eq) goto loc_821ECAC0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821ecac0
	if (cr0.eq) goto loc_821ECAC0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,12236
	r30.s64 = r11.s64 + 12236;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ec880
	sub_821EC880(ctx, base);
	// b 0x821ecadc
	goto loc_821ECADC;
loc_821ECAC0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821ecadc
	if (cr0.eq) goto loc_821ECADC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_821ECADC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821ECAE8"))) PPC_WEAK_FUNC(sub_821ECAE8);
PPC_FUNC_IMPL(__imp__sub_821ECAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,9056(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 9056);
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
	// bne cr6,0x821ecb40
	if (!cr6.eq) goto loc_821ECB40;
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
	// beq 0x821ecb78
	if (cr0.eq) goto loc_821ECB78;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821ecb78
	goto loc_821ECB78;
loc_821ECB40:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,12236
	r30.s64 = r11.s64 + 12236;
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
	// bl 0x821ec880
	sub_821EC880(ctx, base);
loc_821ECB78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821ECAF0"))) PPC_WEAK_FUNC(sub_821ECAF0);
PPC_FUNC_IMPL(__imp__sub_821ECAF0) {
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
	// bne cr6,0x821ecb40
	if (!cr6.eq) goto loc_821ECB40;
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
	// beq 0x821ecb78
	if (cr0.eq) goto loc_821ECB78;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821ecb78
	goto loc_821ECB78;
loc_821ECB40:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,12236
	r30.s64 = r11.s64 + 12236;
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
	// bl 0x821ec880
	sub_821EC880(ctx, base);
loc_821ECB78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821ECB84"))) PPC_WEAK_FUNC(sub_821ECB84);
PPC_FUNC_IMPL(__imp__sub_821ECB84) {
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

__attribute__((alias("__imp__sub_821ECBAC"))) PPC_WEAK_FUNC(sub_821ECBAC);
PPC_FUNC_IMPL(__imp__sub_821ECBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ECBB0"))) PPC_WEAK_FUNC(sub_821ECBB0);
PPC_FUNC_IMPL(__imp__sub_821ECBB0) {
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
	// bl 0x82275ef0
	sub_82275EF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,9120
	r11.s64 = r11.s64 + 9120;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x821ecc64
	if (!cr0.eq) goto loc_821ECC64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82275ef0
	sub_82275EF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x821ecc64
	if (!cr0.eq) goto loc_821ECC64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r29,r11,15600
	r29.s64 = r11.s64 + 15600;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r27,13(r29)
	r27.u64 = PPC_LOAD_U8(r29.u32 + 13);
	// bl 0x823599f0
	sub_823599F0(ctx, base);
	// bl 0x821e2368
	sub_821E2368(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x821ecc58
	if (cr6.eq) goto loc_821ECC58;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821ECC58:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823599f0
	sub_823599F0(ctx, base);
loc_821ECC64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821ECC70"))) PPC_WEAK_FUNC(sub_821ECC70);
PPC_FUNC_IMPL(__imp__sub_821ECC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r2{};
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
	// lwz r16,9248(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 9248);
	// mflr r12
	// bl 0x8239bcf0
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r27,1
	r27.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// addi r26,r30,148
	r26.s64 = r30.s64 + 148;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f30,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r27,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r27.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,9132
	r11.s64 = r11.s64 + 9132;
	// stb r29,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r29.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stfs f30,48(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 48, temp.u32);
	// stfs f30,52(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// stfs f30,56(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// stfs f30,60(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
	// stb r27,64(r30)
	PPC_STORE_U8(r30.u32 + 64, r27.u8);
	// stw r27,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r27.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// stw r27,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r27.u32);
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r28,r11,-7284
	r28.s64 = r11.s64 + -7284;
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
	// addi r26,r30,164
	r26.s64 = r30.s64 + 164;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,160(r30)
	PPC_STORE_U8(r30.u32 + 160, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r29,161(r30)
	PPC_STORE_U8(r30.u32 + 161, r29.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r29,162(r30)
	PPC_STORE_U8(r30.u32 + 162, r29.u8);
	// bl 0x82126aa8
	sub_82126AA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8860
	r11.s64 = r11.s64 + 8860;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r26,r30,200
	r26.s64 = r30.s64 + 200;
	// stfs f30,180(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 180, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r27,176(r30)
	PPC_STORE_U8(r30.u32 + 176, r27.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r27,177(r30)
	PPC_STORE_U8(r30.u32 + 177, r27.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r29,178(r30)
	PPC_STORE_U8(r30.u32 + 178, r29.u8);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,184(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 184, temp.u32);
	// stfs f31,188(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 188, temp.u32);
	// stfs f31,192(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 192, temp.u32);
	// lfs f0,29204(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29204);
	f0.f64 = double(temp.f32);
	// stfs f0,196(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 196, temp.u32);
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
	// addi r29,r30,212
	r29.s64 = r30.s64 + 212;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// addi r29,r30,224
	r29.s64 = r30.s64 + 224;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// addi r29,r30,236
	r29.s64 = r30.s64 + 236;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// addi r29,r30,248
	r29.s64 = r30.s64 + 248;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821ec7f0
	sub_821EC7F0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r10,r10,9036
	ctx.r10.s64 = ctx.r10.s64 + 9036;
	// addi r11,r30,84
	r11.s64 = r30.s64 + 84;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r9,260(r30)
	PPC_STORE_U32(r30.u32 + 260, ctx.r9.u32);
	// stfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f30,20(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f31,32(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f31,36(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stfs f30,40(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821ECC78"))) PPC_WEAK_FUNC(sub_821ECC78);
PPC_FUNC_IMPL(__imp__sub_821ECC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// bl 0x8239bcf0
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r27,1
	r27.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// addi r26,r30,148
	r26.s64 = r30.s64 + 148;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f30,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r27,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r27.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,9132
	r11.s64 = r11.s64 + 9132;
	// stb r29,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r29.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stfs f30,48(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 48, temp.u32);
	// stfs f30,52(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// stfs f30,56(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// stfs f30,60(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
	// stb r27,64(r30)
	PPC_STORE_U8(r30.u32 + 64, r27.u8);
	// stw r27,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r27.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// stw r27,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r27.u32);
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r28,r11,-7284
	r28.s64 = r11.s64 + -7284;
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
	// addi r26,r30,164
	r26.s64 = r30.s64 + 164;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,160(r30)
	PPC_STORE_U8(r30.u32 + 160, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r29,161(r30)
	PPC_STORE_U8(r30.u32 + 161, r29.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r29,162(r30)
	PPC_STORE_U8(r30.u32 + 162, r29.u8);
	// bl 0x82126aa8
	sub_82126AA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8860
	r11.s64 = r11.s64 + 8860;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r26,r30,200
	r26.s64 = r30.s64 + 200;
	// stfs f30,180(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 180, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r27,176(r30)
	PPC_STORE_U8(r30.u32 + 176, r27.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r27,177(r30)
	PPC_STORE_U8(r30.u32 + 177, r27.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r29,178(r30)
	PPC_STORE_U8(r30.u32 + 178, r29.u8);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,184(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 184, temp.u32);
	// stfs f31,188(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 188, temp.u32);
	// stfs f31,192(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 192, temp.u32);
	// lfs f0,29204(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29204);
	f0.f64 = double(temp.f32);
	// stfs f0,196(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 196, temp.u32);
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
	// addi r29,r30,212
	r29.s64 = r30.s64 + 212;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// addi r29,r30,224
	r29.s64 = r30.s64 + 224;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// addi r29,r30,236
	r29.s64 = r30.s64 + 236;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// addi r29,r30,248
	r29.s64 = r30.s64 + 248;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821ec7f0
	sub_821EC7F0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r10,r10,9036
	ctx.r10.s64 = ctx.r10.s64 + 9036;
	// addi r11,r30,84
	r11.s64 = r30.s64 + 84;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r9,260(r30)
	PPC_STORE_U32(r30.u32 + 260, ctx.r9.u32);
	// stfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f30,20(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f31,32(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f31,36(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stfs f30,40(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821ECE30"))) PPC_WEAK_FUNC(sub_821ECE30);
PPC_FUNC_IMPL(__imp__sub_821ECE30) {
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
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
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

__attribute__((alias("__imp__sub_821ECE58"))) PPC_WEAK_FUNC(sub_821ECE58);
PPC_FUNC_IMPL(__imp__sub_821ECE58) {
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
	// addi r3,r11,148
	ctx.r3.s64 = r11.s64 + 148;
	// bl 0x821c7408
	sub_821C7408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECE84"))) PPC_WEAK_FUNC(sub_821ECE84);
PPC_FUNC_IMPL(__imp__sub_821ECE84) {
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
	// addi r3,r11,164
	ctx.r3.s64 = r11.s64 + 164;
	// bl 0x82126e78
	sub_82126E78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECEB0"))) PPC_WEAK_FUNC(sub_821ECEB0);
PPC_FUNC_IMPL(__imp__sub_821ECEB0) {
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
	// addi r3,r11,200
	ctx.r3.s64 = r11.s64 + 200;
	// bl 0x821c7408
	sub_821C7408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECEDC"))) PPC_WEAK_FUNC(sub_821ECEDC);
PPC_FUNC_IMPL(__imp__sub_821ECEDC) {
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
	// addi r3,r11,212
	ctx.r3.s64 = r11.s64 + 212;
	// bl 0x821c7408
	sub_821C7408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECF08"))) PPC_WEAK_FUNC(sub_821ECF08);
PPC_FUNC_IMPL(__imp__sub_821ECF08) {
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
	// addi r3,r11,224
	ctx.r3.s64 = r11.s64 + 224;
	// bl 0x821c7408
	sub_821C7408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECF34"))) PPC_WEAK_FUNC(sub_821ECF34);
PPC_FUNC_IMPL(__imp__sub_821ECF34) {
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
	// addi r3,r11,236
	ctx.r3.s64 = r11.s64 + 236;
	// bl 0x821c7408
	sub_821C7408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECF60"))) PPC_WEAK_FUNC(sub_821ECF60);
PPC_FUNC_IMPL(__imp__sub_821ECF60) {
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
	// bl 0x821e1088
	sub_821E1088(ctx, base);
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

__attribute__((alias("__imp__sub_821ECF90"))) PPC_WEAK_FUNC(sub_821ECF90);
PPC_FUNC_IMPL(__imp__sub_821ECF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
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
	// lwz r16,9360(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 9360);
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
	// lwz r11,12480(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12480);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x821ed014
	if (!cr0.eq) goto loc_821ED014;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12480, r11.u32);
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
	// bl 0x821e1088
	sub_821E1088(ctx, base);
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
	// stw r3,12476(r28)
	PPC_STORE_U32(r28.u32 + 12476, ctx.r3.u32);
	// b 0x821ed018
	goto loc_821ED018;
loc_821ED014:
	// lwz r3,12476(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12476);
loc_821ED018:
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
	// beq 0x821ed048
	if (cr0.eq) goto loc_821ED048;
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
	// b 0x821ed090
	goto loc_821ED090;
loc_821ED048:
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
	// bne 0x821ed084
	if (!cr0.eq) goto loc_821ED084;
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
loc_821ED084:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_821ED090:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821ECF98"))) PPC_WEAK_FUNC(sub_821ECF98);
PPC_FUNC_IMPL(__imp__sub_821ECF98) {
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
	// lwz r11,12480(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12480);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x821ed014
	if (!cr0.eq) goto loc_821ED014;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12480, r11.u32);
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
	// bl 0x821e1088
	sub_821E1088(ctx, base);
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
	// stw r3,12476(r28)
	PPC_STORE_U32(r28.u32 + 12476, ctx.r3.u32);
	// b 0x821ed018
	goto loc_821ED018;
loc_821ED014:
	// lwz r3,12476(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12476);
loc_821ED018:
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
	// beq 0x821ed048
	if (cr0.eq) goto loc_821ED048;
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
	// b 0x821ed090
	goto loc_821ED090;
loc_821ED048:
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
	// bne 0x821ed084
	if (!cr0.eq) goto loc_821ED084;
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
loc_821ED084:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_821ED090:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821ED09C"))) PPC_WEAK_FUNC(sub_821ED09C);
PPC_FUNC_IMPL(__imp__sub_821ED09C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12480
	r11.s64 = r11.s64 + 12480;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12480
	ctx.r10.s64 = ctx.r10.s64 + 12480;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED0C4"))) PPC_WEAK_FUNC(sub_821ED0C4);
PPC_FUNC_IMPL(__imp__sub_821ED0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ED0C8"))) PPC_WEAK_FUNC(sub_821ED0C8);
PPC_FUNC_IMPL(__imp__sub_821ED0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r2{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,9480(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 9480);
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
	// addi r3,r30,248
	ctx.r3.s64 = r30.s64 + 248;
	// bl 0x821ec700
	sub_821EC700(ctx, base);
	// addi r3,r30,236
	ctx.r3.s64 = r30.s64 + 236;
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
	// addi r3,r30,212
	ctx.r3.s64 = r30.s64 + 212;
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
	// addi r3,r30,200
	ctx.r3.s64 = r30.s64 + 200;
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
	// addi r3,r30,164
	ctx.r3.s64 = r30.s64 + 164;
	// bl 0x821266e8
	sub_821266E8(ctx, base);
	// addi r3,r30,148
	ctx.r3.s64 = r30.s64 + 148;
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
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

__attribute__((alias("__imp__sub_821ED0D0"))) PPC_WEAK_FUNC(sub_821ED0D0);
PPC_FUNC_IMPL(__imp__sub_821ED0D0) {
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
	// addi r3,r30,248
	ctx.r3.s64 = r30.s64 + 248;
	// bl 0x821ec700
	sub_821EC700(ctx, base);
	// addi r3,r30,236
	ctx.r3.s64 = r30.s64 + 236;
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
	// addi r3,r30,212
	ctx.r3.s64 = r30.s64 + 212;
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
	// addi r3,r30,200
	ctx.r3.s64 = r30.s64 + 200;
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
	// addi r3,r30,164
	ctx.r3.s64 = r30.s64 + 164;
	// bl 0x821266e8
	sub_821266E8(ctx, base);
	// addi r3,r30,148
	ctx.r3.s64 = r30.s64 + 148;
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
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

__attribute__((alias("__imp__sub_821ED148"))) PPC_WEAK_FUNC(sub_821ED148);
PPC_FUNC_IMPL(__imp__sub_821ED148) {
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

__attribute__((alias("__imp__sub_821ED170"))) PPC_WEAK_FUNC(sub_821ED170);
PPC_FUNC_IMPL(__imp__sub_821ED170) {
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
	// addi r3,r11,148
	ctx.r3.s64 = r11.s64 + 148;
	// bl 0x821c7408
	sub_821C7408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED19C"))) PPC_WEAK_FUNC(sub_821ED19C);
PPC_FUNC_IMPL(__imp__sub_821ED19C) {
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
	// addi r3,r11,164
	ctx.r3.s64 = r11.s64 + 164;
	// bl 0x82126e78
	sub_82126E78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED1C8"))) PPC_WEAK_FUNC(sub_821ED1C8);
PPC_FUNC_IMPL(__imp__sub_821ED1C8) {
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
	// addi r3,r11,200
	ctx.r3.s64 = r11.s64 + 200;
	// bl 0x821c7408
	sub_821C7408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED1F4"))) PPC_WEAK_FUNC(sub_821ED1F4);
PPC_FUNC_IMPL(__imp__sub_821ED1F4) {
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
	// addi r3,r11,212
	ctx.r3.s64 = r11.s64 + 212;
	// bl 0x821c7408
	sub_821C7408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED220"))) PPC_WEAK_FUNC(sub_821ED220);
PPC_FUNC_IMPL(__imp__sub_821ED220) {
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
	// addi r3,r11,224
	ctx.r3.s64 = r11.s64 + 224;
	// bl 0x821c7408
	sub_821C7408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED24C"))) PPC_WEAK_FUNC(sub_821ED24C);
PPC_FUNC_IMPL(__imp__sub_821ED24C) {
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
	// addi r3,r11,236
	ctx.r3.s64 = r11.s64 + 236;
	// bl 0x821c7408
	sub_821C7408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED278"))) PPC_WEAK_FUNC(sub_821ED278);
PPC_FUNC_IMPL(__imp__sub_821ED278) {
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
	// bl 0x821ed0d0
	sub_821ED0D0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ed2a8
	if (cr0.eq) goto loc_821ED2A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821ED2A8:
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

__attribute__((alias("__imp__sub_821ED2C4"))) PPC_WEAK_FUNC(sub_821ED2C4);
PPC_FUNC_IMPL(__imp__sub_821ED2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ED2C8"))) PPC_WEAK_FUNC(sub_821ED2C8);
PPC_FUNC_IMPL(__imp__sub_821ED2C8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,12148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12148);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// lbz r28,64(r31)
	r28.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82132e90
	sub_82132E90(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// lbz r11,160(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 160);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lbz r11,161(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 161);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// lbz r11,162(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 162);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r29,r31,84
	r29.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r29,32
	r28.s64 = r29.s64 + 32;
	// addi r27,r29,16
	r27.s64 = r29.s64 + 16;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r31,164
	r29.s64 = r31.s64 + 164;
	// bl 0x821d78e0
	sub_821D78E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82127738
	sub_82127738(ctx, base);
	// lbz r11,40(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// lbz r11,176(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 176);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	f0.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r31,200
	r29.s64 = r31.s64 + 200;
	// bl 0x82132e90
	sub_82132E90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821d78e0
	sub_821D78E0(ctx, base);
	// addi r4,r31,212
	ctx.r4.s64 = r31.s64 + 212;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r31,248
	r29.s64 = r31.s64 + 248;
	// addi r28,r31,236
	r28.s64 = r31.s64 + 236;
	// addi r27,r31,224
	r27.s64 = r31.s64 + 224;
	// bl 0x821d78e0
	sub_821D78E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x821d78e0
	sub_821D78E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821d78e0
	sub_821D78E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821ec9f8
	sub_821EC9F8(ctx, base);
	// lbz r11,177(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 177);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// lbz r11,178(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 178);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821ED4FC"))) PPC_WEAK_FUNC(sub_821ED4FC);
PPC_FUNC_IMPL(__imp__sub_821ED4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ED500"))) PPC_WEAK_FUNC(sub_821ED500);
PPC_FUNC_IMPL(__imp__sub_821ED500) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32136
	r27.s64 = -2106064896;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,12472(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12472);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(r11.s32, 19, xer);
	// ble cr6,0x821ed53c
	if (!cr6.gt) goto loc_821ED53C;
	// addi r4,r28,44
	ctx.r4.s64 = r28.s64 + 44;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// b 0x821ed628
	goto loc_821ED628;
loc_821ED53C:
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(r11.s32, 14, xer);
	// ble cr6,0x821ed588
	if (!cr6.gt) goto loc_821ED588;
	// addi r31,r28,44
	r31.s64 = r28.s64 + 44;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x821ed564
	if (!cr6.eq) goto loc_821ED564;
	// li r11,2
	r11.s64 = 2;
	// b 0x821ed580
	goto loc_821ED580;
loc_821ED564:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x821ed574
	if (!cr6.gt) goto loc_821ED574;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// b 0x821ed580
	goto loc_821ED580;
loc_821ED574:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x821ed628
	if (!cr6.gt) goto loc_821ED628;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_821ED580:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x821ed628
	goto loc_821ED628;
loc_821ED588:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x821ed5b4
	if (!cr6.gt) goto loc_821ED5B4;
	// addi r31,r28,44
	r31.s64 = r28.s64 + 44;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r6,r28,40
	ctx.r6.s64 = r28.s64 + 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ec5c8
	sub_821EC5C8(ctx, base);
	// b 0x821ed628
	goto loc_821ED628;
loc_821ED5B4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x821ed5e0
	if (!cr6.eq) goto loc_821ED5E0;
	// stw r26,44(r28)
	PPC_STORE_U32(r28.u32 + 44, r26.u32);
	// b 0x821ed628
	goto loc_821ED628;
loc_821ED5E0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x821ed620
	if (cr6.eq) goto loc_821ED620;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x821ed5f8
	if (!cr6.eq) goto loc_821ED5F8;
loc_821ED5F0:
	// li r11,2
	r11.s64 = 2;
	// b 0x821ed624
	goto loc_821ED624;
loc_821ED5F8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x821ed5f0
	if (cr6.eq) goto loc_821ED5F0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x821ed620
	if (cr6.eq) goto loc_821ED620;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x821ed618
	if (!cr6.eq) goto loc_821ED618;
	// li r11,3
	r11.s64 = 3;
	// b 0x821ed624
	goto loc_821ED624;
loc_821ED618:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x821ed628
	if (!cr6.eq) goto loc_821ED628;
loc_821ED620:
	// li r11,1
	r11.s64 = 1;
loc_821ED624:
	// stw r11,44(r28)
	PPC_STORE_U32(r28.u32 + 44, r11.u32);
loc_821ED628:
	// lwz r11,12472(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12472);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bge cr6,0x821ed648
	if (!cr6.lt) goto loc_821ED648;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,12472(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12472);
loc_821ED648:
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(r11.s32, 14, xer);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ble cr6,0x821ed668
	if (!cr6.gt) goto loc_821ED668;
	// addi r30,r28,76
	r30.s64 = r28.s64 + 76;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// b 0x821ed6a8
	goto loc_821ED6A8;
loc_821ED668:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// srawi r10,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r10.s64 = r11.s32 >> 2;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x821ed690
	if (!cr0.lt) goto loc_821ED690;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821ED690:
	// addi r30,r28,76
	r30.s64 = r28.s64 + 76;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bne cr6,0x821ed6a8
	if (!cr6.eq) goto loc_821ED6A8;
	// li r11,5
	r11.s64 = 5;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_821ED6A8:
	// addi r31,r28,84
	r31.s64 = r28.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r25,r31,32
	r25.s64 = r31.s64 + 32;
	// addi r24,r31,16
	r24.s64 = r31.s64 + 16;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,12472(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12472);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bge cr6,0x821ed754
	if (!cr6.lt) goto loc_821ED754;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821ed754
	if (!cr0.eq) goto loc_821ED754;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x821ed714
	if (!cr6.eq) goto loc_821ED714;
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// b 0x821ed754
	goto loc_821ED754;
loc_821ED714:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
loc_821ED754:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r28,80
	ctx.r4.s64 = r28.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,12472(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12472);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x821ed780
	if (!cr6.lt) goto loc_821ED780;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
loc_821ED780:
	// addi r4,r28,148
	ctx.r4.s64 = r28.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d7930
	sub_821D7930(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_821ED794"))) PPC_WEAK_FUNC(sub_821ED794);
PPC_FUNC_IMPL(__imp__sub_821ED794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ED798"))) PPC_WEAK_FUNC(sub_821ED798);
PPC_FUNC_IMPL(__imp__sub_821ED798) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x821ed7d0
	if (!cr6.eq) goto loc_821ED7D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821ed920
	goto loc_821ED920;
loc_821ED7D0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r26,r11,15600
	r26.s64 = r11.s64 + 15600;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lbz r22,13(r26)
	r22.u64 = PPC_LOAD_U8(r26.u32 + 13);
	// bl 0x823599f0
	sub_823599F0(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// lwz r23,44(r30)
	r23.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r27,r30
	r27.u64 = r30.u64;
	// li r29,1
	r29.s64 = 1;
	// mr r24,r28
	r24.u64 = r28.u64;
	// addi r25,r11,9584
	r25.s64 = r11.s64 + 9584;
loc_821ED804:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821ed500
	sub_821ED500(ctx, base);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x821ed868
	if (!cr6.eq) goto loc_821ED868;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821ed844
	if (!cr0.eq) goto loc_821ED844;
	// addi r31,r30,148
	r31.s64 = r30.s64 + 148;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821ed864
	if (cr0.eq) goto loc_821ED864;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// b 0x821ed864
	goto loc_821ED864;
loc_821ED844:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x821ed854
	if (!cr6.eq) goto loc_821ED854;
	// li r24,1
	r24.s64 = 1;
	// b 0x821ed864
	goto loc_821ED864;
loc_821ED854:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x821ed864
	if (!cr6.eq) goto loc_821ED864;
	// li r11,1
	r11.s64 = 1;
	// stb r11,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r11.u8);
loc_821ED864:
	// stw r23,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r23.u32);
loc_821ED868:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x821ed910
	if (cr6.eq) goto loc_821ED910;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x82275ef0
	sub_82275EF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821ec8e8
	sub_821EC8E8(ctx, base);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x821ecbb0
	sub_821ECBB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stb r28,161(r31)
	PPC_STORE_U8(r31.u32 + 161, r28.u8);
	// stb r28,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r28.u8);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// beq cr6,0x821ed8ec
	if (cr6.eq) goto loc_821ED8EC;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// beq cr6,0x821ed8ec
	if (cr6.eq) goto loc_821ED8EC;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x821ed8fc
	if (!cr6.eq) goto loc_821ED8FC;
	// stw r28,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r28.u32);
	// b 0x821ed8f4
	goto loc_821ED8F4;
loc_821ED8EC:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
loc_821ED8F4:
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
loc_821ED8FC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r27,164
	ctx.r3.s64 = r27.s64 + 164;
	// bl 0x82126b38
	sub_82126B38(ctx, base);
	// mr r27,r31
	r27.u64 = r31.u64;
	// b 0x821ed804
	goto loc_821ED804;
loc_821ED910:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823599f0
	sub_823599F0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821ED920:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_821ED928"))) PPC_WEAK_FUNC(sub_821ED928);
PPC_FUNC_IMPL(__imp__sub_821ED928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
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
	// lwz r16,10104(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 10104);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12584
	r29.s64 = ctx.r10.s64 + 12584;
	// bne 0x821ed994
	if (!cr0.eq) goto loc_821ED994;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9880
	ctx.r4.s64 = r11.s64 + 9880;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821ED994:
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
	// beq 0x821ed9c8
	if (cr0.eq) goto loc_821ED9C8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,40
	ctx.r3.s64 = r28.s64 + 40;
loc_821ED9C0:
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x821ee2f8
	goto loc_821EE2F8;
loc_821ED9C8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12580
	r29.s64 = ctx.r10.s64 + 12580;
	// bne 0x821ed9f4
	if (!cr0.eq) goto loc_821ED9F4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6488
	ctx.r4.s64 = r11.s64 + 6488;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821ED9F4:
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
	// beq 0x821eda28
	if (cr0.eq) goto loc_821EDA28;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,44
	ctx.r3.s64 = r28.s64 + 44;
loc_821EDA20:
	// bl 0x82126dc0
	sub_82126DC0(ctx, base);
	// b 0x821ee2f8
	goto loc_821EE2F8;
loc_821EDA28:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12576
	r29.s64 = ctx.r10.s64 + 12576;
	// bne 0x821eda54
	if (!cr0.eq) goto loc_821EDA54;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19376
	ctx.r4.s64 = r11.s64 + 19376;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDA54:
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
	// beq 0x821edaa4
	if (cr0.eq) goto loc_821EDAA4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,48
	ctx.r3.s64 = r28.s64 + 48;
loc_821EDA80:
	// bl 0x82326c00
	sub_82326C00(ctx, base);
loc_821EDA84:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ee320
	if (cr0.eq) goto loc_821EE320;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821ee318
	if (!cr0.eq) goto loc_821EE318;
	// lwz r11,260(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 260);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// b 0x821ee314
	goto loc_821EE314;
loc_821EDAA4:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12572
	r29.s64 = ctx.r10.s64 + 12572;
	// bne 0x821edad0
	if (!cr0.eq) goto loc_821EDAD0;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19368
	ctx.r4.s64 = r11.s64 + 19368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDAD0:
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
	// beq 0x821edb04
	if (cr0.eq) goto loc_821EDB04;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,60
	ctx.r3.s64 = r28.s64 + 60;
loc_821EDAFC:
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x821eda84
	goto loc_821EDA84;
loc_821EDB04:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12568
	r29.s64 = ctx.r10.s64 + 12568;
	// bne 0x821edb30
	if (!cr0.eq) goto loc_821EDB30;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9868
	ctx.r4.s64 = r11.s64 + 9868;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDB30:
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
	// beq 0x821edb60
	if (cr0.eq) goto loc_821EDB60;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,64
	ctx.r3.s64 = r28.s64 + 64;
	// b 0x821ed9c0
	goto loc_821ED9C0;
loc_821EDB60:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12564
	r29.s64 = ctx.r10.s64 + 12564;
	// bne 0x821edb8c
	if (!cr0.eq) goto loc_821EDB8C;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9860
	ctx.r4.s64 = r11.s64 + 9860;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDB8C:
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
	// beq 0x821edbbc
	if (cr0.eq) goto loc_821EDBBC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,68
	ctx.r3.s64 = r28.s64 + 68;
	// b 0x821eda20
	goto loc_821EDA20;
loc_821EDBBC:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12560
	r29.s64 = ctx.r10.s64 + 12560;
	// bne 0x821edbe8
	if (!cr0.eq) goto loc_821EDBE8;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9844
	ctx.r4.s64 = r11.s64 + 9844;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDBE8:
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
	// beq 0x821edc18
	if (cr0.eq) goto loc_821EDC18;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,72
	ctx.r3.s64 = r28.s64 + 72;
	// b 0x821eda20
	goto loc_821EDA20;
loc_821EDC18:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12556
	r29.s64 = ctx.r10.s64 + 12556;
	// bne 0x821edc44
	if (!cr0.eq) goto loc_821EDC44;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9836
	ctx.r4.s64 = r11.s64 + 9836;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDC44:
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
	// beq 0x821edc74
	if (cr0.eq) goto loc_821EDC74;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,76
	ctx.r3.s64 = r28.s64 + 76;
	// b 0x821eda20
	goto loc_821EDA20;
loc_821EDC74:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12552
	r29.s64 = ctx.r10.s64 + 12552;
	// bne 0x821edca0
	if (!cr0.eq) goto loc_821EDCA0;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9824
	ctx.r4.s64 = r11.s64 + 9824;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDCA0:
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
	// beq 0x821edcd0
	if (cr0.eq) goto loc_821EDCD0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,80
	ctx.r3.s64 = r28.s64 + 80;
	// b 0x821eda20
	goto loc_821EDA20;
loc_821EDCD0:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12548
	r29.s64 = ctx.r10.s64 + 12548;
	// bne 0x821edcfc
	if (!cr0.eq) goto loc_821EDCFC;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9816
	ctx.r4.s64 = r11.s64 + 9816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDCFC:
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
	// beq 0x821edd30
	if (cr0.eq) goto loc_821EDD30;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,84
	ctx.r3.s64 = r28.s64 + 84;
	// bl 0x82327a78
	sub_82327A78(ctx, base);
	// b 0x821ee2f8
	goto loc_821EE2F8;
loc_821EDD30:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12544
	r29.s64 = ctx.r10.s64 + 12544;
	// bne 0x821edd5c
	if (!cr0.eq) goto loc_821EDD5C;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9804
	ctx.r4.s64 = r11.s64 + 9804;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDD5C:
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
	// beq 0x821edd90
	if (cr0.eq) goto loc_821EDD90;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,148
	ctx.r3.s64 = r28.s64 + 148;
loc_821EDD88:
	// bl 0x821eaef0
	sub_821EAEF0(ctx, base);
	// b 0x821ee2f8
	goto loc_821EE2F8;
loc_821EDD90:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12540
	r29.s64 = ctx.r10.s64 + 12540;
	// bne 0x821eddbc
	if (!cr0.eq) goto loc_821EDDBC;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9796
	ctx.r4.s64 = r11.s64 + 9796;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDDBC:
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
	// beq 0x821eddec
	if (cr0.eq) goto loc_821EDDEC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,160
	ctx.r3.s64 = r28.s64 + 160;
	// b 0x821ed9c0
	goto loc_821ED9C0;
loc_821EDDEC:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12536
	r29.s64 = ctx.r10.s64 + 12536;
	// bne 0x821ede18
	if (!cr0.eq) goto loc_821EDE18;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9784
	ctx.r4.s64 = r11.s64 + 9784;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDE18:
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
	// beq 0x821ede48
	if (cr0.eq) goto loc_821EDE48;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,161
	ctx.r3.s64 = r28.s64 + 161;
	// b 0x821ed9c0
	goto loc_821ED9C0;
loc_821EDE48:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12532
	r29.s64 = ctx.r10.s64 + 12532;
	// bne 0x821ede74
	if (!cr0.eq) goto loc_821EDE74;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9772
	ctx.r4.s64 = r11.s64 + 9772;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDE74:
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
	// beq 0x821edea4
	if (cr0.eq) goto loc_821EDEA4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,162
	ctx.r3.s64 = r28.s64 + 162;
	// b 0x821ed9c0
	goto loc_821ED9C0;
loc_821EDEA4:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12528
	r29.s64 = ctx.r10.s64 + 12528;
	// bne 0x821eded0
	if (!cr0.eq) goto loc_821EDED0;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9760
	ctx.r4.s64 = r11.s64 + 9760;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDED0:
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
	// beq 0x821edf04
	if (cr0.eq) goto loc_821EDF04;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,164
	ctx.r3.s64 = r28.s64 + 164;
	// bl 0x821275c8
	sub_821275C8(ctx, base);
	// b 0x821ee324
	goto loc_821EE324;
loc_821EDF04:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12524
	r29.s64 = ctx.r10.s64 + 12524;
	// bne 0x821edf30
	if (!cr0.eq) goto loc_821EDF30;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9752
	ctx.r4.s64 = r11.s64 + 9752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDF30:
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
	// beq 0x821edf60
	if (cr0.eq) goto loc_821EDF60;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,176
	ctx.r3.s64 = r28.s64 + 176;
	// b 0x821ed9c0
	goto loc_821ED9C0;
loc_821EDF60:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12520
	r29.s64 = ctx.r10.s64 + 12520;
	// bne 0x821edf8c
	if (!cr0.eq) goto loc_821EDF8C;
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9736
	ctx.r4.s64 = r11.s64 + 9736;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDF8C:
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
	// beq 0x821edfbc
	if (cr0.eq) goto loc_821EDFBC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,177
	ctx.r3.s64 = r28.s64 + 177;
	// b 0x821ed9c0
	goto loc_821ED9C0;
loc_821EDFBC:
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12516
	r29.s64 = ctx.r10.s64 + 12516;
	// bne 0x821edfe8
	if (!cr0.eq) goto loc_821EDFE8;
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9724
	ctx.r4.s64 = r11.s64 + 9724;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDFE8:
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
	// beq 0x821ee018
	if (cr0.eq) goto loc_821EE018;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,178
	ctx.r3.s64 = r28.s64 + 178;
	// b 0x821ed9c0
	goto loc_821ED9C0;
loc_821EE018:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12512
	r29.s64 = ctx.r10.s64 + 12512;
	// bne 0x821ee044
	if (!cr0.eq) goto loc_821EE044;
	// oris r11,r11,4
	r11.u64 = r11.u64 | 262144;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9704
	ctx.r4.s64 = r11.s64 + 9704;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EE044:
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
	// beq 0x821ee078
	if (cr0.eq) goto loc_821EE078;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,180
	ctx.r3.s64 = r28.s64 + 180;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x821ee2f8
	goto loc_821EE2F8;
loc_821EE078:
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12508
	r29.s64 = ctx.r10.s64 + 12508;
	// bne 0x821ee0a4
	if (!cr0.eq) goto loc_821EE0A4;
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9688
	ctx.r4.s64 = r11.s64 + 9688;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EE0A4:
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
	// beq 0x821ee0d4
	if (cr0.eq) goto loc_821EE0D4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,184
	ctx.r3.s64 = r28.s64 + 184;
	// b 0x821eda80
	goto loc_821EDA80;
loc_821EE0D4:
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12504
	r29.s64 = ctx.r10.s64 + 12504;
	// bne 0x821ee100
	if (!cr0.eq) goto loc_821EE100;
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9672
	ctx.r4.s64 = r11.s64 + 9672;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EE100:
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
	// beq 0x821ee130
	if (cr0.eq) goto loc_821EE130;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,196
	ctx.r3.s64 = r28.s64 + 196;
	// b 0x821edafc
	goto loc_821EDAFC;
loc_821EE130:
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12500
	r29.s64 = ctx.r10.s64 + 12500;
	// bne 0x821ee15c
	if (!cr0.eq) goto loc_821EE15C;
	// oris r11,r11,32
	r11.u64 = r11.u64 | 2097152;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9660
	ctx.r4.s64 = r11.s64 + 9660;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EE15C:
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
	// beq 0x821ee18c
	if (cr0.eq) goto loc_821EE18C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,200
	ctx.r3.s64 = r28.s64 + 200;
	// b 0x821edd88
	goto loc_821EDD88;
loc_821EE18C:
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12496
	r29.s64 = ctx.r10.s64 + 12496;
	// bne 0x821ee1b8
	if (!cr0.eq) goto loc_821EE1B8;
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9644
	ctx.r4.s64 = r11.s64 + 9644;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EE1B8:
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
	// beq 0x821ee1e8
	if (cr0.eq) goto loc_821EE1E8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,212
	ctx.r3.s64 = r28.s64 + 212;
	// b 0x821edd88
	goto loc_821EDD88;
loc_821EE1E8:
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12492
	r29.s64 = ctx.r10.s64 + 12492;
	// bne 0x821ee214
	if (!cr0.eq) goto loc_821EE214;
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9628
	ctx.r4.s64 = r11.s64 + 9628;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EE214:
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
	// beq 0x821ee244
	if (cr0.eq) goto loc_821EE244;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,224
	ctx.r3.s64 = r28.s64 + 224;
	// b 0x821edd88
	goto loc_821EDD88;
loc_821EE244:
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12488
	r29.s64 = ctx.r10.s64 + 12488;
	// bne 0x821ee270
	if (!cr0.eq) goto loc_821EE270;
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9608
	ctx.r4.s64 = r11.s64 + 9608;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EE270:
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
	// beq 0x821ee2a0
	if (cr0.eq) goto loc_821EE2A0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,236
	ctx.r3.s64 = r28.s64 + 236;
	// b 0x821edd88
	goto loc_821EDD88;
loc_821EE2A0:
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12484
	r29.s64 = ctx.r10.s64 + 12484;
	// bne 0x821ee2c8
	if (!cr0.eq) goto loc_821EE2C8;
	// oris r11,r11,512
	r11.u64 = r11.u64 | 33554432;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9596
	ctx.r4.s64 = r11.s64 + 9596;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821EE2C8:
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
	// beq 0x821ee320
	if (cr0.eq) goto loc_821EE320;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,248
	ctx.r3.s64 = r28.s64 + 248;
	// bl 0x821ecaf0
	sub_821ECAF0(ctx, base);
loc_821EE2F8:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ee320
	if (cr0.eq) goto loc_821EE320;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821ee318
	if (!cr0.eq) goto loc_821EE318;
	// lwz r11,260(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
loc_821EE314:
	// stw r11,260(r28)
	PPC_STORE_U32(r28.u32 + 260, r11.u32);
loc_821EE318:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821ee324
	goto loc_821EE324;
loc_821EE320:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EE324:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821ED930"))) PPC_WEAK_FUNC(sub_821ED930);
PPC_FUNC_IMPL(__imp__sub_821ED930) {
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12584
	r29.s64 = ctx.r10.s64 + 12584;
	// bne 0x821ed994
	if (!cr0.eq) goto loc_821ED994;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9880
	ctx.r4.s64 = r11.s64 + 9880;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821ED994:
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
	// beq 0x821ed9c8
	if (cr0.eq) goto loc_821ED9C8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,40
	ctx.r3.s64 = r28.s64 + 40;
loc_821ED9C0:
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x821ee2f8
	goto loc_821EE2F8;
loc_821ED9C8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12580
	r29.s64 = ctx.r10.s64 + 12580;
	// bne 0x821ed9f4
	if (!cr0.eq) goto loc_821ED9F4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6488
	ctx.r4.s64 = r11.s64 + 6488;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821ED9F4:
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
	// beq 0x821eda28
	if (cr0.eq) goto loc_821EDA28;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,44
	ctx.r3.s64 = r28.s64 + 44;
loc_821EDA20:
	// bl 0x82126dc0
	sub_82126DC0(ctx, base);
	// b 0x821ee2f8
	goto loc_821EE2F8;
loc_821EDA28:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12576
	r29.s64 = ctx.r10.s64 + 12576;
	// bne 0x821eda54
	if (!cr0.eq) goto loc_821EDA54;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19376
	ctx.r4.s64 = r11.s64 + 19376;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDA54:
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
	// beq 0x821edaa4
	if (cr0.eq) goto loc_821EDAA4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,48
	ctx.r3.s64 = r28.s64 + 48;
loc_821EDA80:
	// bl 0x82326c00
	sub_82326C00(ctx, base);
loc_821EDA84:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ee320
	if (cr0.eq) goto loc_821EE320;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821ee318
	if (!cr0.eq) goto loc_821EE318;
	// lwz r11,260(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 260);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// b 0x821ee314
	goto loc_821EE314;
loc_821EDAA4:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12572
	r29.s64 = ctx.r10.s64 + 12572;
	// bne 0x821edad0
	if (!cr0.eq) goto loc_821EDAD0;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19368
	ctx.r4.s64 = r11.s64 + 19368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDAD0:
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
	// beq 0x821edb04
	if (cr0.eq) goto loc_821EDB04;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,60
	ctx.r3.s64 = r28.s64 + 60;
loc_821EDAFC:
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x821eda84
	goto loc_821EDA84;
loc_821EDB04:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12568
	r29.s64 = ctx.r10.s64 + 12568;
	// bne 0x821edb30
	if (!cr0.eq) goto loc_821EDB30;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9868
	ctx.r4.s64 = r11.s64 + 9868;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDB30:
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
	// beq 0x821edb60
	if (cr0.eq) goto loc_821EDB60;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,64
	ctx.r3.s64 = r28.s64 + 64;
	// b 0x821ed9c0
	goto loc_821ED9C0;
loc_821EDB60:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12564
	r29.s64 = ctx.r10.s64 + 12564;
	// bne 0x821edb8c
	if (!cr0.eq) goto loc_821EDB8C;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9860
	ctx.r4.s64 = r11.s64 + 9860;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDB8C:
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
	// beq 0x821edbbc
	if (cr0.eq) goto loc_821EDBBC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,68
	ctx.r3.s64 = r28.s64 + 68;
	// b 0x821eda20
	goto loc_821EDA20;
loc_821EDBBC:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12560
	r29.s64 = ctx.r10.s64 + 12560;
	// bne 0x821edbe8
	if (!cr0.eq) goto loc_821EDBE8;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9844
	ctx.r4.s64 = r11.s64 + 9844;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDBE8:
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
	// beq 0x821edc18
	if (cr0.eq) goto loc_821EDC18;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,72
	ctx.r3.s64 = r28.s64 + 72;
	// b 0x821eda20
	goto loc_821EDA20;
loc_821EDC18:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12556
	r29.s64 = ctx.r10.s64 + 12556;
	// bne 0x821edc44
	if (!cr0.eq) goto loc_821EDC44;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9836
	ctx.r4.s64 = r11.s64 + 9836;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDC44:
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
	// beq 0x821edc74
	if (cr0.eq) goto loc_821EDC74;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,76
	ctx.r3.s64 = r28.s64 + 76;
	// b 0x821eda20
	goto loc_821EDA20;
loc_821EDC74:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12552
	r29.s64 = ctx.r10.s64 + 12552;
	// bne 0x821edca0
	if (!cr0.eq) goto loc_821EDCA0;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9824
	ctx.r4.s64 = r11.s64 + 9824;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDCA0:
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
	// beq 0x821edcd0
	if (cr0.eq) goto loc_821EDCD0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,80
	ctx.r3.s64 = r28.s64 + 80;
	// b 0x821eda20
	goto loc_821EDA20;
loc_821EDCD0:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12548
	r29.s64 = ctx.r10.s64 + 12548;
	// bne 0x821edcfc
	if (!cr0.eq) goto loc_821EDCFC;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9816
	ctx.r4.s64 = r11.s64 + 9816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDCFC:
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
	// beq 0x821edd30
	if (cr0.eq) goto loc_821EDD30;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,84
	ctx.r3.s64 = r28.s64 + 84;
	// bl 0x82327a78
	sub_82327A78(ctx, base);
	// b 0x821ee2f8
	goto loc_821EE2F8;
loc_821EDD30:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12544
	r29.s64 = ctx.r10.s64 + 12544;
	// bne 0x821edd5c
	if (!cr0.eq) goto loc_821EDD5C;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9804
	ctx.r4.s64 = r11.s64 + 9804;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDD5C:
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
	// beq 0x821edd90
	if (cr0.eq) goto loc_821EDD90;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,148
	ctx.r3.s64 = r28.s64 + 148;
loc_821EDD88:
	// bl 0x821eaef0
	sub_821EAEF0(ctx, base);
	// b 0x821ee2f8
	goto loc_821EE2F8;
loc_821EDD90:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12540
	r29.s64 = ctx.r10.s64 + 12540;
	// bne 0x821eddbc
	if (!cr0.eq) goto loc_821EDDBC;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9796
	ctx.r4.s64 = r11.s64 + 9796;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDDBC:
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
	// beq 0x821eddec
	if (cr0.eq) goto loc_821EDDEC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,160
	ctx.r3.s64 = r28.s64 + 160;
	// b 0x821ed9c0
	goto loc_821ED9C0;
loc_821EDDEC:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12536
	r29.s64 = ctx.r10.s64 + 12536;
	// bne 0x821ede18
	if (!cr0.eq) goto loc_821EDE18;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9784
	ctx.r4.s64 = r11.s64 + 9784;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDE18:
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
	// beq 0x821ede48
	if (cr0.eq) goto loc_821EDE48;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,161
	ctx.r3.s64 = r28.s64 + 161;
	// b 0x821ed9c0
	goto loc_821ED9C0;
loc_821EDE48:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12532
	r29.s64 = ctx.r10.s64 + 12532;
	// bne 0x821ede74
	if (!cr0.eq) goto loc_821EDE74;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9772
	ctx.r4.s64 = r11.s64 + 9772;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDE74:
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
	// beq 0x821edea4
	if (cr0.eq) goto loc_821EDEA4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,162
	ctx.r3.s64 = r28.s64 + 162;
	// b 0x821ed9c0
	goto loc_821ED9C0;
loc_821EDEA4:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12528
	r29.s64 = ctx.r10.s64 + 12528;
	// bne 0x821eded0
	if (!cr0.eq) goto loc_821EDED0;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9760
	ctx.r4.s64 = r11.s64 + 9760;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDED0:
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
	// beq 0x821edf04
	if (cr0.eq) goto loc_821EDF04;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,164
	ctx.r3.s64 = r28.s64 + 164;
	// bl 0x821275c8
	sub_821275C8(ctx, base);
	// b 0x821ee324
	goto loc_821EE324;
loc_821EDF04:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12524
	r29.s64 = ctx.r10.s64 + 12524;
	// bne 0x821edf30
	if (!cr0.eq) goto loc_821EDF30;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9752
	ctx.r4.s64 = r11.s64 + 9752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDF30:
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
	// beq 0x821edf60
	if (cr0.eq) goto loc_821EDF60;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,176
	ctx.r3.s64 = r28.s64 + 176;
	// b 0x821ed9c0
	goto loc_821ED9C0;
loc_821EDF60:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12520
	r29.s64 = ctx.r10.s64 + 12520;
	// bne 0x821edf8c
	if (!cr0.eq) goto loc_821EDF8C;
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9736
	ctx.r4.s64 = r11.s64 + 9736;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDF8C:
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
	// beq 0x821edfbc
	if (cr0.eq) goto loc_821EDFBC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,177
	ctx.r3.s64 = r28.s64 + 177;
	// b 0x821ed9c0
	goto loc_821ED9C0;
loc_821EDFBC:
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12516
	r29.s64 = ctx.r10.s64 + 12516;
	// bne 0x821edfe8
	if (!cr0.eq) goto loc_821EDFE8;
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9724
	ctx.r4.s64 = r11.s64 + 9724;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EDFE8:
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
	// beq 0x821ee018
	if (cr0.eq) goto loc_821EE018;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,178
	ctx.r3.s64 = r28.s64 + 178;
	// b 0x821ed9c0
	goto loc_821ED9C0;
loc_821EE018:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12512
	r29.s64 = ctx.r10.s64 + 12512;
	// bne 0x821ee044
	if (!cr0.eq) goto loc_821EE044;
	// oris r11,r11,4
	r11.u64 = r11.u64 | 262144;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9704
	ctx.r4.s64 = r11.s64 + 9704;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EE044:
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
	// beq 0x821ee078
	if (cr0.eq) goto loc_821EE078;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,180
	ctx.r3.s64 = r28.s64 + 180;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x821ee2f8
	goto loc_821EE2F8;
loc_821EE078:
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12508
	r29.s64 = ctx.r10.s64 + 12508;
	// bne 0x821ee0a4
	if (!cr0.eq) goto loc_821EE0A4;
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9688
	ctx.r4.s64 = r11.s64 + 9688;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EE0A4:
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
	// beq 0x821ee0d4
	if (cr0.eq) goto loc_821EE0D4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,184
	ctx.r3.s64 = r28.s64 + 184;
	// b 0x821eda80
	goto loc_821EDA80;
loc_821EE0D4:
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12504
	r29.s64 = ctx.r10.s64 + 12504;
	// bne 0x821ee100
	if (!cr0.eq) goto loc_821EE100;
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9672
	ctx.r4.s64 = r11.s64 + 9672;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EE100:
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
	// beq 0x821ee130
	if (cr0.eq) goto loc_821EE130;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,196
	ctx.r3.s64 = r28.s64 + 196;
	// b 0x821edafc
	goto loc_821EDAFC;
loc_821EE130:
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12500
	r29.s64 = ctx.r10.s64 + 12500;
	// bne 0x821ee15c
	if (!cr0.eq) goto loc_821EE15C;
	// oris r11,r11,32
	r11.u64 = r11.u64 | 2097152;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9660
	ctx.r4.s64 = r11.s64 + 9660;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EE15C:
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
	// beq 0x821ee18c
	if (cr0.eq) goto loc_821EE18C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,200
	ctx.r3.s64 = r28.s64 + 200;
	// b 0x821edd88
	goto loc_821EDD88;
loc_821EE18C:
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12496
	r29.s64 = ctx.r10.s64 + 12496;
	// bne 0x821ee1b8
	if (!cr0.eq) goto loc_821EE1B8;
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9644
	ctx.r4.s64 = r11.s64 + 9644;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EE1B8:
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
	// beq 0x821ee1e8
	if (cr0.eq) goto loc_821EE1E8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,212
	ctx.r3.s64 = r28.s64 + 212;
	// b 0x821edd88
	goto loc_821EDD88;
loc_821EE1E8:
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12492
	r29.s64 = ctx.r10.s64 + 12492;
	// bne 0x821ee214
	if (!cr0.eq) goto loc_821EE214;
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9628
	ctx.r4.s64 = r11.s64 + 9628;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EE214:
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
	// beq 0x821ee244
	if (cr0.eq) goto loc_821EE244;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,224
	ctx.r3.s64 = r28.s64 + 224;
	// b 0x821edd88
	goto loc_821EDD88;
loc_821EE244:
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12488
	r29.s64 = ctx.r10.s64 + 12488;
	// bne 0x821ee270
	if (!cr0.eq) goto loc_821EE270;
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9608
	ctx.r4.s64 = r11.s64 + 9608;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12588);
loc_821EE270:
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
	// beq 0x821ee2a0
	if (cr0.eq) goto loc_821EE2A0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,236
	ctx.r3.s64 = r28.s64 + 236;
	// b 0x821edd88
	goto loc_821EDD88;
loc_821EE2A0:
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12484
	r29.s64 = ctx.r10.s64 + 12484;
	// bne 0x821ee2c8
	if (!cr0.eq) goto loc_821EE2C8;
	// oris r11,r11,512
	r11.u64 = r11.u64 | 33554432;
	// stw r11,12588(r30)
	PPC_STORE_U32(r30.u32 + 12588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9596
	ctx.r4.s64 = r11.s64 + 9596;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821EE2C8:
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
	// beq 0x821ee320
	if (cr0.eq) goto loc_821EE320;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,248
	ctx.r3.s64 = r28.s64 + 248;
	// bl 0x821ecaf0
	sub_821ECAF0(ctx, base);
loc_821EE2F8:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ee320
	if (cr0.eq) goto loc_821EE320;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821ee318
	if (!cr0.eq) goto loc_821EE318;
	// lwz r11,260(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
loc_821EE314:
	// stw r11,260(r28)
	PPC_STORE_U32(r28.u32 + 260, r11.u32);
loc_821EE318:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821ee324
	goto loc_821EE324;
loc_821EE320:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EE324:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821EE32C"))) PPC_WEAK_FUNC(sub_821EE32C);
PPC_FUNC_IMPL(__imp__sub_821EE32C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE354"))) PPC_WEAK_FUNC(sub_821EE354);
PPC_FUNC_IMPL(__imp__sub_821EE354) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE37C"))) PPC_WEAK_FUNC(sub_821EE37C);
PPC_FUNC_IMPL(__imp__sub_821EE37C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE3A4"))) PPC_WEAK_FUNC(sub_821EE3A4);
PPC_FUNC_IMPL(__imp__sub_821EE3A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE3CC"))) PPC_WEAK_FUNC(sub_821EE3CC);
PPC_FUNC_IMPL(__imp__sub_821EE3CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE3F4"))) PPC_WEAK_FUNC(sub_821EE3F4);
PPC_FUNC_IMPL(__imp__sub_821EE3F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE41C"))) PPC_WEAK_FUNC(sub_821EE41C);
PPC_FUNC_IMPL(__imp__sub_821EE41C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE444"))) PPC_WEAK_FUNC(sub_821EE444);
PPC_FUNC_IMPL(__imp__sub_821EE444) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE46C"))) PPC_WEAK_FUNC(sub_821EE46C);
PPC_FUNC_IMPL(__imp__sub_821EE46C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE494"))) PPC_WEAK_FUNC(sub_821EE494);
PPC_FUNC_IMPL(__imp__sub_821EE494) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE4BC"))) PPC_WEAK_FUNC(sub_821EE4BC);
PPC_FUNC_IMPL(__imp__sub_821EE4BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE4E4"))) PPC_WEAK_FUNC(sub_821EE4E4);
PPC_FUNC_IMPL(__imp__sub_821EE4E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE50C"))) PPC_WEAK_FUNC(sub_821EE50C);
PPC_FUNC_IMPL(__imp__sub_821EE50C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE534"))) PPC_WEAK_FUNC(sub_821EE534);
PPC_FUNC_IMPL(__imp__sub_821EE534) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE55C"))) PPC_WEAK_FUNC(sub_821EE55C);
PPC_FUNC_IMPL(__imp__sub_821EE55C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE584"))) PPC_WEAK_FUNC(sub_821EE584);
PPC_FUNC_IMPL(__imp__sub_821EE584) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,17,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE5AC"))) PPC_WEAK_FUNC(sub_821EE5AC);
PPC_FUNC_IMPL(__imp__sub_821EE5AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,16,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE5D4"))) PPC_WEAK_FUNC(sub_821EE5D4);
PPC_FUNC_IMPL(__imp__sub_821EE5D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,15,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE5FC"))) PPC_WEAK_FUNC(sub_821EE5FC);
PPC_FUNC_IMPL(__imp__sub_821EE5FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,14,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE624"))) PPC_WEAK_FUNC(sub_821EE624);
PPC_FUNC_IMPL(__imp__sub_821EE624) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,13,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE64C"))) PPC_WEAK_FUNC(sub_821EE64C);
PPC_FUNC_IMPL(__imp__sub_821EE64C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,12,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE674"))) PPC_WEAK_FUNC(sub_821EE674);
PPC_FUNC_IMPL(__imp__sub_821EE674) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12588
	r11.s64 = r11.s64 + 12588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,11,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12588
	ctx.r10.s64 = ctx.r10.s64 + 12588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

