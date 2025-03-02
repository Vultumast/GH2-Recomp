#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8216A68C"))) PPC_WEAK_FUNC(sub_8216A68C);
PPC_FUNC_IMPL(__imp__sub_8216A68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216A690"))) PPC_WEAK_FUNC(sub_8216A690);
PPC_FUNC_IMPL(__imp__sub_8216A690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
loc_8216A6A4:
	// lfs f13,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8216a6a4
	if (!cr0.eq) goto loc_8216A6A4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216A6C0"))) PPC_WEAK_FUNC(sub_8216A6C0);
PPC_FUNC_IMPL(__imp__sub_8216A6C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216a6d4
	if (cr0.eq) goto loc_8216A6D4;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// blr 
	return;
loc_8216A6D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216A6DC"))) PPC_WEAK_FUNC(sub_8216A6DC);
PPC_FUNC_IMPL(__imp__sub_8216A6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216A6E0"))) PPC_WEAK_FUNC(sub_8216A6E0);
PPC_FUNC_IMPL(__imp__sub_8216A6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216a71c
	if (cr0.eq) goto loc_8216A71C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
loc_8216A6F4:
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x8216a70c
	if (!cr6.eq) goto loc_8216A70C;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216a6f4
	if (!cr0.eq) goto loc_8216A6F4;
loc_8216A70C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8216a71c
	if (cr6.eq) goto loc_8216A71C;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// blr 
	return;
loc_8216A71C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216A724"))) PPC_WEAK_FUNC(sub_8216A724);
PPC_FUNC_IMPL(__imp__sub_8216A724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216A728"))) PPC_WEAK_FUNC(sub_8216A728);
PPC_FUNC_IMPL(__imp__sub_8216A728) {
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
	// lwz r11,-92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -92);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
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

__attribute__((alias("__imp__sub_8216A7A0"))) PPC_WEAK_FUNC(sub_8216A7A0);
PPC_FUNC_IMPL(__imp__sub_8216A7A0) {
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
	// lwz r16,-5264(0)
	r16.u64 = PPC_LOAD_U32(-5264);
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r10,r10,27500
	ctx.r10.s64 = ctx.r10.s64 + 27500;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8216a804
	if (cr6.eq) goto loc_8216A804;
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
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_8216A804:
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

__attribute__((alias("__imp__sub_8216A7A8"))) PPC_WEAK_FUNC(sub_8216A7A8);
PPC_FUNC_IMPL(__imp__sub_8216A7A8) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r10,r10,27500
	ctx.r10.s64 = ctx.r10.s64 + 27500;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8216a804
	if (cr6.eq) goto loc_8216A804;
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
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_8216A804:
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

__attribute__((alias("__imp__sub_8216A820"))) PPC_WEAK_FUNC(sub_8216A820);
PPC_FUNC_IMPL(__imp__sub_8216A820) {
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

__attribute__((alias("__imp__sub_8216A848"))) PPC_WEAK_FUNC(sub_8216A848);
PPC_FUNC_IMPL(__imp__sub_8216A848) {
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
	// addi r31,r11,3824
	r31.s64 = r11.s64 + 3824;
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

__attribute__((alias("__imp__sub_8216A8A0"))) PPC_WEAK_FUNC(sub_8216A8A0);
PPC_FUNC_IMPL(__imp__sub_8216A8A0) {
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
	// addi r31,r11,3852
	r31.s64 = r11.s64 + 3852;
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

__attribute__((alias("__imp__sub_8216A8F4"))) PPC_WEAK_FUNC(sub_8216A8F4);
PPC_FUNC_IMPL(__imp__sub_8216A8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216A8F8"))) PPC_WEAK_FUNC(sub_8216A8F8);
PPC_FUNC_IMPL(__imp__sub_8216A8F8) {
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
	// addi r31,r11,4704
	r31.s64 = r11.s64 + 4704;
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

__attribute__((alias("__imp__sub_8216A94C"))) PPC_WEAK_FUNC(sub_8216A94C);
PPC_FUNC_IMPL(__imp__sub_8216A94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216A950"))) PPC_WEAK_FUNC(sub_8216A950);
PPC_FUNC_IMPL(__imp__sub_8216A950) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-5208(0)
	r16.u64 = PPC_LOAD_U32(-5208);
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
	// lwz r29,52(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8216a98c
	if (cr0.eq) goto loc_8216A98C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821a48e8
	sub_821A48E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_8216A98C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216a9bc
	if (cr0.eq) goto loc_8216A9BC;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8216A9BC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,-20976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,80(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// bl 0x821b3f78
	sub_821B3F78(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216A958"))) PPC_WEAK_FUNC(sub_8216A958);
PPC_FUNC_IMPL(__imp__sub_8216A958) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r29,52(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8216a98c
	if (cr0.eq) goto loc_8216A98C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821a48e8
	sub_821A48E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_8216A98C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216a9bc
	if (cr0.eq) goto loc_8216A9BC;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8216A9BC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,-20976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,80(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// bl 0x821b3f78
	sub_821B3F78(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216A9E4"))) PPC_WEAK_FUNC(sub_8216A9E4);
PPC_FUNC_IMPL(__imp__sub_8216A9E4) {
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

__attribute__((alias("__imp__sub_8216AA0C"))) PPC_WEAK_FUNC(sub_8216AA0C);
PPC_FUNC_IMPL(__imp__sub_8216AA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216AA10"))) PPC_WEAK_FUNC(sub_8216AA10);
PPC_FUNC_IMPL(__imp__sub_8216AA10) {
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
	// lwz r16,-5136(0)
	r16.u64 = PPC_LOAD_U32(-5136);
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
	// lwz r28,52(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x8216aa50
	if (cr0.eq) goto loc_8216AA50;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821a48e8
	sub_821A48E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_8216AA50:
	// li r11,0
	r11.s64 = 0;
	// addi r4,r29,72
	ctx.r4.s64 = r29.s64 + 72;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lbz r11,84(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 84);
	// stb r11,84(r30)
	PPC_STORE_U8(r30.u32 + 84, r11.u8);
	// lfs f0,88(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8216aac4
	if (cr6.eq) goto loc_8216AAC4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r5,r11,-5288
	ctx.r5.s64 = r11.s64 + -5288;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8216aabc
	if (cr0.eq) goto loc_8216AABC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r4,52(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// bl 0x821a47d8
	sub_821A47D8(ctx, base);
	// b 0x8216aac0
	goto loc_8216AAC0;
loc_8216AABC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216AAC0:
	// stw r3,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r3.u32);
loc_8216AAC4:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8216AA18"))) PPC_WEAK_FUNC(sub_8216AA18);
PPC_FUNC_IMPL(__imp__sub_8216AA18) {
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
	// lwz r28,52(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x8216aa50
	if (cr0.eq) goto loc_8216AA50;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821a48e8
	sub_821A48E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_8216AA50:
	// li r11,0
	r11.s64 = 0;
	// addi r4,r29,72
	ctx.r4.s64 = r29.s64 + 72;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lbz r11,84(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 84);
	// stb r11,84(r30)
	PPC_STORE_U8(r30.u32 + 84, r11.u8);
	// lfs f0,88(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8216aac4
	if (cr6.eq) goto loc_8216AAC4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r5,r11,-5288
	ctx.r5.s64 = r11.s64 + -5288;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8216aabc
	if (cr0.eq) goto loc_8216AABC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r4,52(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// bl 0x821a47d8
	sub_821A47D8(ctx, base);
	// b 0x8216aac0
	goto loc_8216AAC0;
loc_8216AABC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216AAC0:
	// stw r3,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r3.u32);
loc_8216AAC4:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8216AACC"))) PPC_WEAK_FUNC(sub_8216AACC);
PPC_FUNC_IMPL(__imp__sub_8216AACC) {
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
	// bl 0x8216a460
	sub_8216A460(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216AAF4"))) PPC_WEAK_FUNC(sub_8216AAF4);
PPC_FUNC_IMPL(__imp__sub_8216AAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216AAF8"))) PPC_WEAK_FUNC(sub_8216AAF8);
PPC_FUNC_IMPL(__imp__sub_8216AAF8) {
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
	// lwz r16,-5072(0)
	r16.u64 = PPC_LOAD_U32(-5072);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82165460
	sub_82165460(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x8216ab90
	if (!cr0.eq) goto loc_8216AB90;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216ab90
	if (cr0.eq) goto loc_8216AB90;
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
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82318240
	sub_82318240(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_8216AB90:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8216AB00"))) PPC_WEAK_FUNC(sub_8216AB00);
PPC_FUNC_IMPL(__imp__sub_8216AB00) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82165460
	sub_82165460(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x8216ab90
	if (!cr0.eq) goto loc_8216AB90;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216ab90
	if (cr0.eq) goto loc_8216AB90;
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
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82318240
	sub_82318240(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_8216AB90:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8216AB9C"))) PPC_WEAK_FUNC(sub_8216AB9C);
PPC_FUNC_IMPL(__imp__sub_8216AB9C) {
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

__attribute__((alias("__imp__sub_8216ABC4"))) PPC_WEAK_FUNC(sub_8216ABC4);
PPC_FUNC_IMPL(__imp__sub_8216ABC4) {
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

__attribute__((alias("__imp__sub_8216ABEC"))) PPC_WEAK_FUNC(sub_8216ABEC);
PPC_FUNC_IMPL(__imp__sub_8216ABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216ABF0"))) PPC_WEAK_FUNC(sub_8216ABF0);
PPC_FUNC_IMPL(__imp__sub_8216ABF0) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-4976(0)
	r16.u64 = PPC_LOAD_U32(-4976);
	// mflr r12
	// bl 0x8239bcf8
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8216ac50
	if (!cr6.eq) goto loc_8216AC50;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8216ac44
	if (cr6.eq) goto loc_8216AC44;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
loc_8216AC44:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8216ace0
	goto loc_8216ACE0;
loc_8216AC50:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216ac8c
	if (cr0.eq) goto loc_8216AC8C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8216AC8C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r5,r11,-5288
	ctx.r5.s64 = r11.s64 + -5288;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8216acd8
	if (cr0.eq) goto loc_8216ACD8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// bl 0x821a4ba8
	sub_821A4BA8(ctx, base);
	// b 0x8216acdc
	goto loc_8216ACDC;
loc_8216ACD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216ACDC:
	// stw r3,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r3.u32);
loc_8216ACE0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8216ABF8"))) PPC_WEAK_FUNC(sub_8216ABF8);
PPC_FUNC_IMPL(__imp__sub_8216ABF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8216ac50
	if (!cr6.eq) goto loc_8216AC50;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8216ac44
	if (cr6.eq) goto loc_8216AC44;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
loc_8216AC44:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8216ace0
	goto loc_8216ACE0;
loc_8216AC50:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216ac8c
	if (cr0.eq) goto loc_8216AC8C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8216AC8C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r5,r11,-5288
	ctx.r5.s64 = r11.s64 + -5288;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8216acd8
	if (cr0.eq) goto loc_8216ACD8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// bl 0x821a4ba8
	sub_821A4BA8(ctx, base);
	// b 0x8216acdc
	goto loc_8216ACDC;
loc_8216ACD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216ACDC:
	// stw r3,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r3.u32);
loc_8216ACE0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8216ACF0"))) PPC_WEAK_FUNC(sub_8216ACF0);
PPC_FUNC_IMPL(__imp__sub_8216ACF0) {
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

__attribute__((alias("__imp__sub_8216AD18"))) PPC_WEAK_FUNC(sub_8216AD18);
PPC_FUNC_IMPL(__imp__sub_8216AD18) {
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
	// bl 0x8216a460
	sub_8216A460(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216AD40"))) PPC_WEAK_FUNC(sub_8216AD40);
PPC_FUNC_IMPL(__imp__sub_8216AD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216ab00
	sub_8216AB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x8216abf8
	sub_8216ABF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216ADA8"))) PPC_WEAK_FUNC(sub_8216ADA8);
PPC_FUNC_IMPL(__imp__sub_8216ADA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82175ab8
	sub_82175AB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x8216abf8
	sub_8216ABF8(ctx, base);
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

__attribute__((alias("__imp__sub_8216AE14"))) PPC_WEAK_FUNC(sub_8216AE14);
PPC_FUNC_IMPL(__imp__sub_8216AE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216AE18"))) PPC_WEAK_FUNC(sub_8216AE18);
PPC_FUNC_IMPL(__imp__sub_8216AE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// bl 0x82175ab8
	sub_82175AB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x8216abf8
	sub_8216ABF8(ctx, base);
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

__attribute__((alias("__imp__sub_8216AE8C"))) PPC_WEAK_FUNC(sub_8216AE8C);
PPC_FUNC_IMPL(__imp__sub_8216AE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216AE90"))) PPC_WEAK_FUNC(sub_8216AE90);
PPC_FUNC_IMPL(__imp__sub_8216AE90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216af48
	if (cr0.eq) goto loc_8216AF48;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f2,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f2.f64 = double(temp.f32);
loc_8216AEC0:
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	cr6.compare(f0.f64, ctx.f2.f64);
	// bne cr6,0x8216aed8
	if (!cr6.eq) goto loc_8216AED8;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216aec0
	if (!cr0.eq) goto loc_8216AEC0;
loc_8216AED8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8216af48
	if (cr6.eq) goto loc_8216AF48;
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// fdivs f0,f0,f31
	f0.f64 = double(float(f0.f64 / f31.f64));
loc_8216AEEC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// andi. r9,r9,62976
	ctx.r9.u64 = ctx.r9.u64 & 62976;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// cmpwi cr6,r9,512
	cr6.compare<int32_t>(ctx.r9.s32, 512, xer);
	// beq cr6,0x8216af14
	if (cr6.eq) goto loc_8216AF14;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f13,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// rlwinm r9,r9,0,20,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8216AF14:
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8216aeec
	if (!cr0.eq) goto loc_8216AEEC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// andi. r10,r10,62976
	ctx.r10.u64 = ctx.r10.u64 & 62976;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi cr6,r10,512
	cr6.compare<int32_t>(ctx.r10.s32, 512, xer);
	// beq cr6,0x8216af48
	if (cr6.eq) goto loc_8216AF48;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,-20976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8216abf8
	sub_8216ABF8(ctx, base);
loc_8216AF48:
	// stfs f31,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
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

__attribute__((alias("__imp__sub_8216AF64"))) PPC_WEAK_FUNC(sub_8216AF64);
PPC_FUNC_IMPL(__imp__sub_8216AF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216AF68"))) PPC_WEAK_FUNC(sub_8216AF68);
PPC_FUNC_IMPL(__imp__sub_8216AF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,-4888(0)
	r16.u64 = PPC_LOAD_U32(-4888);
	// mflr r12
	// bl 0x8239bcf0
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d5e0
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8216b364
	if (cr6.eq) goto loc_8216B364;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r26,r11,-5056
	r26.s64 = r11.s64 + -5056;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82311988
	sub_82311988(ctx, base);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 88);
	f0.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f31,f0
	f31.f64 = f0.f64;
	// fmuls f30,f1,f0
	f30.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x82311998
	sub_82311998(ctx, base);
	// lbz r11,84(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 84);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmuls f26,f1,f31
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(ctx.f1.f64 * f31.f64));
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f28,-20976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20976);
	f28.f64 = double(temp.f32);
	// lfs f27,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f27.f64 = double(temp.f32);
	// beq 0x8216b150
	if (cr0.eq) goto loc_8216B150;
	// fcmpu cr6,f30,f27
	cr6.compare(f30.f64, f27.f64);
	// ble cr6,0x8216b150
	if (!cr6.gt) goto loc_8216B150;
	// lwa r10,56(r26)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r26.u32 + 56));
	// lfs f13,80(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwa r9,52(r26)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(r26.u32 + 52));
	// fcmpu cr6,f13,f28
	cr6.compare(ctx.f13.f64, f28.f64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// std r10,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// std r9,104(r31)
	PPC_STORE_U64(r31.u32 + 104, ctx.r9.u64);
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	f0.f64 = double(temp.f32);
	// lfd f13,80(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// lfd f12,104(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f0,f13,f0,f12
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// fmuls f30,f0,f31
	f30.f64 = double(float(f0.f64 * f31.f64));
	// bne cr6,0x8216b02c
	if (!cr6.eq) goto loc_8216B02C;
	// stfs f30,80(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
loc_8216B02C:
	// lfs f1,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239da30
	sub_8239DA30(ctx, base);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// frsp f29,f1
	f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8239da30
	sub_8239DA30(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// beq cr6,0x8216b150
	if (cr6.eq) goto loc_8216B150;
	// lwz r28,52(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x8216b150
	if (cr0.eq) goto loc_8216B150;
loc_8216B05C:
	// lfs f0,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 24);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// bne cr6,0x8216b074
	if (!cr6.eq) goto loc_8216B074;
	// lwz r28,40(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x8216b05c
	if (!cr0.eq) goto loc_8216B05C;
loc_8216B074:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8216b150
	if (cr6.eq) goto loc_8216B150;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// srawi r10,r10,12
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// clrlwi r27,r10,28
	r27.u64 = ctx.r10.u32 & 0xF;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x8216b0b0
	goto loc_8216B0B0;
loc_8216B094:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// srawi r9,r9,12
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 12;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x8216b0ac
	if (!cr6.lt) goto loc_8216B0AC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8216B0AC:
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
loc_8216B0B0:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216b094
	if (!cr0.eq) goto loc_8216B094;
	// addic. r29,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r29.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x8216b150
	if (!cr0.gt) goto loc_8216B150;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8239da30
	sub_8239DA30(ctx, base);
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 80);
	f0.f64 = double(temp.f32);
	// frsp f31,f1
	f31.f64 = double(float(ctx.f1.f64));
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// bl 0x8239da30
	sub_8239DA30(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// fctiwz f0,f31
	f0.s64 = (f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f31.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(r11.u32, ctx.f13.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// xor r10,r11,r10
	ctx.r10.u64 = r11.u64 ^ ctx.r10.u64;
	// and. r11,r10,r29
	r11.u64 = ctx.r10.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216b150
	if (cr0.eq) goto loc_8216B150;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8216B110:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,20,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216b110
	if (!cr0.eq) goto loc_8216B110;
	// addic. r11,r27,-1
	xer.ca = r27.u32 > 0;
	r11.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8216b150
	if (!cr0.gt) goto loc_8216B150;
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216b150
	if (cr0.eq) goto loc_8216B150;
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r4,36(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f27.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x8216abf8
	sub_8216ABF8(ctx, base);
loc_8216B150:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// stfs f30,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r28,r10,0,24,27
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0;
	// beq 0x8216b178
	if (cr0.eq) goto loc_8216B178;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne 0x8216b17c
	if (!cr0.eq) goto loc_8216B17C;
loc_8216B178:
	// li r11,1
	r11.s64 = 1;
loc_8216B17C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216b210
	if (cr0.eq) goto loc_8216B210;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8216b210
	if (!cr0.eq) goto loc_8216B210;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r29,36(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
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
	// beq 0x8216b1fc
	if (cr0.eq) goto loc_8216B1FC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8216B1FC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8216B210:
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8216b22c
	if (cr0.eq) goto loc_8216B22C;
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8216b230
	if (!cr6.eq) goto loc_8216B230;
loc_8216B22C:
	// li r11,1
	r11.s64 = 1;
loc_8216B230:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216b260
	if (cr0.eq) goto loc_8216B260;
	// cmpwi cr6,r28,48
	cr6.compare<int32_t>(r28.s32, 48, xer);
	// bne cr6,0x8216b260
	if (!cr6.eq) goto loc_8216B260;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,36(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwimi r5,r11,2,28,31
	ctx.r5.u64 = (__builtin_rotateleft32(r11.u32, 2) & 0xF) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF0);
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f27.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x8216abf8
	sub_8216ABF8(ctx, base);
loc_8216B260:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216b27c
	if (cr0.eq) goto loc_8216B27C;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8216b280
	if (!cr6.eq) goto loc_8216B280;
loc_8216B27C:
	// li r11,1
	r11.s64 = 1;
loc_8216B280:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216b2a8
	if (cr0.eq) goto loc_8216B2A8;
	// cmpwi cr6,r28,64
	cr6.compare<int32_t>(r28.s32, 64, xer);
	// bne cr6,0x8216b2a8
	if (!cr6.eq) goto loc_8216B2A8;
	// li r5,68
	ctx.r5.s64 = 68;
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f27.f64;
	// addi r4,r30,72
	ctx.r4.s64 = r30.s64 + 72;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216ad40
	sub_8216AD40(ctx, base);
loc_8216B2A8:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8216b364
	if (cr6.eq) goto loc_8216B364;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f31.f64 = double(temp.f32);
	// bl 0x82311970
	sub_82311970(ctx, base);
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821a4e30
	sub_821A4E30(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fnmsubs f1,f1,f31,f0
	ctx.f1.f64 = double(float(-(ctx.f1.f64 * f31.f64 - f0.f64)));
	// beq 0x8216b364
	if (cr0.eq) goto loc_8216B364;
	// lwz r29,92(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8216b330
	if (cr0.eq) goto loc_8216B330;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215d680
	sub_8215D680(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x8215da18
	sub_8215DA18(ctx, base);
	// lwz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821a4988
	sub_821A4988(ctx, base);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// bl 0x8215e3c0
	sub_8215E3C0(ctx, base);
	// b 0x8216b364
	goto loc_8216B364;
loc_8216B330:
	// lbz r11,85(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 85);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216b358
	if (!cr0.eq) goto loc_8216B358;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
loc_8216B358:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821a4988
	sub_821A4988(ctx, base);
loc_8216B364:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d62c
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8216AF70"))) PPC_WEAK_FUNC(sub_8216AF70);
PPC_FUNC_IMPL(__imp__sub_8216AF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x8239bcf0
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d5e0
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8216b364
	if (cr6.eq) goto loc_8216B364;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r26,r11,-5056
	r26.s64 = r11.s64 + -5056;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82311988
	sub_82311988(ctx, base);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 88);
	f0.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f31,f0
	f31.f64 = f0.f64;
	// fmuls f30,f1,f0
	f30.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x82311998
	sub_82311998(ctx, base);
	// lbz r11,84(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 84);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmuls f26,f1,f31
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(ctx.f1.f64 * f31.f64));
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f28,-20976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20976);
	f28.f64 = double(temp.f32);
	// lfs f27,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f27.f64 = double(temp.f32);
	// beq 0x8216b150
	if (cr0.eq) goto loc_8216B150;
	// fcmpu cr6,f30,f27
	cr6.compare(f30.f64, f27.f64);
	// ble cr6,0x8216b150
	if (!cr6.gt) goto loc_8216B150;
	// lwa r10,56(r26)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r26.u32 + 56));
	// lfs f13,80(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwa r9,52(r26)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(r26.u32 + 52));
	// fcmpu cr6,f13,f28
	cr6.compare(ctx.f13.f64, f28.f64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// std r10,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// std r9,104(r31)
	PPC_STORE_U64(r31.u32 + 104, ctx.r9.u64);
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	f0.f64 = double(temp.f32);
	// lfd f13,80(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// lfd f12,104(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f0,f13,f0,f12
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// fmuls f30,f0,f31
	f30.f64 = double(float(f0.f64 * f31.f64));
	// bne cr6,0x8216b02c
	if (!cr6.eq) goto loc_8216B02C;
	// stfs f30,80(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
loc_8216B02C:
	// lfs f1,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239da30
	sub_8239DA30(ctx, base);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// frsp f29,f1
	f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8239da30
	sub_8239DA30(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// beq cr6,0x8216b150
	if (cr6.eq) goto loc_8216B150;
	// lwz r28,52(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x8216b150
	if (cr0.eq) goto loc_8216B150;
loc_8216B05C:
	// lfs f0,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 24);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// bne cr6,0x8216b074
	if (!cr6.eq) goto loc_8216B074;
	// lwz r28,40(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x8216b05c
	if (!cr0.eq) goto loc_8216B05C;
loc_8216B074:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8216b150
	if (cr6.eq) goto loc_8216B150;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// srawi r10,r10,12
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// clrlwi r27,r10,28
	r27.u64 = ctx.r10.u32 & 0xF;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x8216b0b0
	goto loc_8216B0B0;
loc_8216B094:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// srawi r9,r9,12
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 12;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x8216b0ac
	if (!cr6.lt) goto loc_8216B0AC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8216B0AC:
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
loc_8216B0B0:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216b094
	if (!cr0.eq) goto loc_8216B094;
	// addic. r29,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r29.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x8216b150
	if (!cr0.gt) goto loc_8216B150;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8239da30
	sub_8239DA30(ctx, base);
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 80);
	f0.f64 = double(temp.f32);
	// frsp f31,f1
	f31.f64 = double(float(ctx.f1.f64));
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// bl 0x8239da30
	sub_8239DA30(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// fctiwz f0,f31
	f0.s64 = (f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f31.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(r11.u32, ctx.f13.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// xor r10,r11,r10
	ctx.r10.u64 = r11.u64 ^ ctx.r10.u64;
	// and. r11,r10,r29
	r11.u64 = ctx.r10.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216b150
	if (cr0.eq) goto loc_8216B150;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8216B110:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,20,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216b110
	if (!cr0.eq) goto loc_8216B110;
	// addic. r11,r27,-1
	xer.ca = r27.u32 > 0;
	r11.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8216b150
	if (!cr0.gt) goto loc_8216B150;
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216b150
	if (cr0.eq) goto loc_8216B150;
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r4,36(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f27.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x8216abf8
	sub_8216ABF8(ctx, base);
loc_8216B150:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// stfs f30,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r28,r10,0,24,27
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0;
	// beq 0x8216b178
	if (cr0.eq) goto loc_8216B178;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne 0x8216b17c
	if (!cr0.eq) goto loc_8216B17C;
loc_8216B178:
	// li r11,1
	r11.s64 = 1;
loc_8216B17C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216b210
	if (cr0.eq) goto loc_8216B210;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8216b210
	if (!cr0.eq) goto loc_8216B210;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r29,36(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
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
	// beq 0x8216b1fc
	if (cr0.eq) goto loc_8216B1FC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8216B1FC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8216B210:
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8216b22c
	if (cr0.eq) goto loc_8216B22C;
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8216b230
	if (!cr6.eq) goto loc_8216B230;
loc_8216B22C:
	// li r11,1
	r11.s64 = 1;
loc_8216B230:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216b260
	if (cr0.eq) goto loc_8216B260;
	// cmpwi cr6,r28,48
	cr6.compare<int32_t>(r28.s32, 48, xer);
	// bne cr6,0x8216b260
	if (!cr6.eq) goto loc_8216B260;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,36(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwimi r5,r11,2,28,31
	ctx.r5.u64 = (__builtin_rotateleft32(r11.u32, 2) & 0xF) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF0);
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f27.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x8216abf8
	sub_8216ABF8(ctx, base);
loc_8216B260:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216b27c
	if (cr0.eq) goto loc_8216B27C;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8216b280
	if (!cr6.eq) goto loc_8216B280;
loc_8216B27C:
	// li r11,1
	r11.s64 = 1;
loc_8216B280:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216b2a8
	if (cr0.eq) goto loc_8216B2A8;
	// cmpwi cr6,r28,64
	cr6.compare<int32_t>(r28.s32, 64, xer);
	// bne cr6,0x8216b2a8
	if (!cr6.eq) goto loc_8216B2A8;
	// li r5,68
	ctx.r5.s64 = 68;
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f27.f64;
	// addi r4,r30,72
	ctx.r4.s64 = r30.s64 + 72;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216ad40
	sub_8216AD40(ctx, base);
loc_8216B2A8:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8216b364
	if (cr6.eq) goto loc_8216B364;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f31.f64 = double(temp.f32);
	// bl 0x82311970
	sub_82311970(ctx, base);
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821a4e30
	sub_821A4E30(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fnmsubs f1,f1,f31,f0
	ctx.f1.f64 = double(float(-(ctx.f1.f64 * f31.f64 - f0.f64)));
	// beq 0x8216b364
	if (cr0.eq) goto loc_8216B364;
	// lwz r29,92(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8216b330
	if (cr0.eq) goto loc_8216B330;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215d680
	sub_8215D680(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x8215da18
	sub_8215DA18(ctx, base);
	// lwz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821a4988
	sub_821A4988(ctx, base);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// bl 0x8215e3c0
	sub_8215E3C0(ctx, base);
	// b 0x8216b364
	goto loc_8216B364;
loc_8216B330:
	// lbz r11,85(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 85);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216b358
	if (!cr0.eq) goto loc_8216B358;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
loc_8216B358:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821a4988
	sub_821A4988(ctx, base);
loc_8216B364:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d62c
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8216B374"))) PPC_WEAK_FUNC(sub_8216B374);
PPC_FUNC_IMPL(__imp__sub_8216B374) {
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
	// bl 0x82273620
	sub_82273620(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216B39C"))) PPC_WEAK_FUNC(sub_8216B39C);
PPC_FUNC_IMPL(__imp__sub_8216B39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216B3A0"))) PPC_WEAK_FUNC(sub_8216B3A0);
PPC_FUNC_IMPL(__imp__sub_8216B3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r11
	r30.u64 = r11.u64;
	// lfs f29,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f29.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f26,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f26.f64 = double(temp.f32);
	// fmr f30,f26
	f30.f64 = f26.f64;
	// mr. r31,r11
	r31.u64 = r11.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8216b444
	if (cr0.eq) goto loc_8216B444;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f31,5736(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5736);
	f31.f64 = double(temp.f32);
	// lfs f27,-25408(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25408);
	f27.f64 = double(temp.f32);
	// lfs f28,-10024(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -10024);
	f28.f64 = double(temp.f32);
loc_8216B3F8:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// fmadds f1,f0,f28,f27
	ctx.f1.f64 = double(float(f0.f64 * f28.f64 + f27.f64));
	// bl 0x8226e050
	sub_8226E050(ctx, base);
	// fnmsubs f13,f1,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(-(ctx.f1.f64 * f31.f64 - f31.f64)));
	// fmuls f0,f13,f30
	f0.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// bge cr6,0x8216b420
	if (!cr6.lt) goto loc_8216B420;
	// fmr f29,f0
	f29.f64 = f0.f64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8216b424
	goto loc_8216B424;
loc_8216B420:
	// li r11,0
	r11.s64 = 0;
loc_8216B424:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216b430
	if (cr0.eq) goto loc_8216B430;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8216B430:
	// fsubs f0,f26,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f26.f64 - ctx.f13.f64));
	// lwz r31,40(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// fmuls f30,f0,f30
	f30.f64 = double(float(f0.f64 * f30.f64));
	// bne 0x8216b3f8
	if (!cr0.eq) goto loc_8216B3F8;
loc_8216B444:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_8216B468"))) PPC_WEAK_FUNC(sub_8216B468);
PPC_FUNC_IMPL(__imp__sub_8216B468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x8216b4ac
	if (!cr6.gt) goto loc_8216B4AC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8216b4b0
	goto loc_8216B4B0;
loc_8216B4AC:
	// li r5,4
	ctx.r5.s64 = 4;
loc_8216B4B0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f2,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8216ad40
	sub_8216AD40(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8216B4F0"))) PPC_WEAK_FUNC(sub_8216B4F0);
PPC_FUNC_IMPL(__imp__sub_8216B4F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x8216b534
	if (!cr6.gt) goto loc_8216B534;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8216b538
	goto loc_8216B538;
loc_8216B534:
	// li r29,4
	r29.s64 = 4;
loc_8216B538:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f2,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f1,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8216ae18
	sub_8216AE18(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r27.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8216B588"))) PPC_WEAK_FUNC(sub_8216B588);
PPC_FUNC_IMPL(__imp__sub_8216B588) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x8216a6e0
	sub_8216A6E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8216b5b8
	if (cr0.eq) goto loc_8216B5B8;
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x8216b5bc
	goto loc_8216B5BC;
loc_8216B5B8:
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_8216B5BC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216B5D8"))) PPC_WEAK_FUNC(sub_8216B5D8);
PPC_FUNC_IMPL(__imp__sub_8216B5D8) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x8216a6e0
	sub_8216A6E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8216b608
	if (cr0.eq) goto loc_8216B608;
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x8216b60c
	goto loc_8216B60C;
loc_8216B608:
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_8216B60C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216B628"))) PPC_WEAK_FUNC(sub_8216B628);
PPC_FUNC_IMPL(__imp__sub_8216B628) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8216b690
	if (cr0.eq) goto loc_8216B690;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,15600
	ctx.r3.s64 = r11.s64 + 15600;
	// bl 0x8235a0b8
	sub_8235A0B8(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r11,3852
	r30.s64 = r11.s64 + 3852;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,1688
	r29.s64 = r11.s64 + 1688;
	// bl 0x82322c68
	sub_82322C68(ctx, base);
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
	// li r11,0
	r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x8213dba8
	sub_8213DBA8(ctx, base);
loc_8216B690:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216B698"))) PPC_WEAK_FUNC(sub_8216B698);
PPC_FUNC_IMPL(__imp__sub_8216B698) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8213dba8
	sub_8213DBA8(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,15600
	r30.s64 = r11.s64 + 15600;
	// beq 0x8216b708
	if (cr0.eq) goto loc_8216B708;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a608
	sub_8235A608(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8216b708
	if (cr0.eq) goto loc_8216B708;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8216b71c
	if (!cr0.eq) goto loc_8216B71C;
	// b 0x8216b774
	goto loc_8216B774;
loc_8216B708:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359d00
	sub_82359D00(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8216B71C:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,6556
	ctx.r6.s64 = r11.s64 + 6556;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,6532
	ctx.r5.s64 = r11.s64 + 6532;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// beq 0x8216b75c
	if (cr0.eq) goto loc_8216B75C;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8216b794
	if (!cr0.eq) goto loc_8216B794;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216b628
	sub_8216B628(ctx, base);
	// b 0x8216b794
	goto loc_8216B794;
loc_8216B75C:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8216b794
	if (!cr0.eq) goto loc_8216B794;
loc_8216B774:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_8216B794:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8216B79C"))) PPC_WEAK_FUNC(sub_8216B79C);
PPC_FUNC_IMPL(__imp__sub_8216B79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216B7A0"))) PPC_WEAK_FUNC(sub_8216B7A0);
PPC_FUNC_IMPL(__imp__sub_8216B7A0) {
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
	// beq 0x8216b7d4
	if (cr0.eq) goto loc_8216B7D4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// b 0x8216b7dc
	goto loc_8216B7DC;
loc_8216B7D4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
loc_8216B7DC:
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

__attribute__((alias("__imp__sub_8216B7F8"))) PPC_WEAK_FUNC(sub_8216B7F8);
PPC_FUNC_IMPL(__imp__sub_8216B7F8) {
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
	// lwz r16,-4800(0)
	r16.u64 = PPC_LOAD_U32(-4800);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82132d78
	sub_82132D78(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216b698
	sub_8216B698(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216B800"))) PPC_WEAK_FUNC(sub_8216B800);
PPC_FUNC_IMPL(__imp__sub_8216B800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82132d78
	sub_82132D78(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216b698
	sub_8216B698(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216B864"))) PPC_WEAK_FUNC(sub_8216B864);
PPC_FUNC_IMPL(__imp__sub_8216B864) {
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

__attribute__((alias("__imp__sub_8216B88C"))) PPC_WEAK_FUNC(sub_8216B88C);
PPC_FUNC_IMPL(__imp__sub_8216B88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216B890"))) PPC_WEAK_FUNC(sub_8216B890);
PPC_FUNC_IMPL(__imp__sub_8216B890) {
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
	// lwz r16,-4728(0)
	r16.u64 = PPC_LOAD_U32(-4728);
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
	// bne cr6,0x8216b900
	if (!cr6.eq) goto loc_8216B900;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216b8d4
	if (cr0.eq) goto loc_8216B8D4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8216B8D4:
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
	// beq 0x8216b938
	if (cr0.eq) goto loc_8216B938;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8216b938
	goto loc_8216B938;
loc_8216B900:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,6108
	r30.s64 = r11.s64 + 6108;
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
	// bl 0x821642f0
	sub_821642F0(ctx, base);
loc_8216B938:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8216B898"))) PPC_WEAK_FUNC(sub_8216B898);
PPC_FUNC_IMPL(__imp__sub_8216B898) {
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
	// bne cr6,0x8216b900
	if (!cr6.eq) goto loc_8216B900;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216b8d4
	if (cr0.eq) goto loc_8216B8D4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8216B8D4:
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
	// beq 0x8216b938
	if (cr0.eq) goto loc_8216B938;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8216b938
	goto loc_8216B938;
loc_8216B900:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,6108
	r30.s64 = r11.s64 + 6108;
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
	// bl 0x821642f0
	sub_821642F0(ctx, base);
loc_8216B938:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8216B944"))) PPC_WEAK_FUNC(sub_8216B944);
PPC_FUNC_IMPL(__imp__sub_8216B944) {
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

__attribute__((alias("__imp__sub_8216B96C"))) PPC_WEAK_FUNC(sub_8216B96C);
PPC_FUNC_IMPL(__imp__sub_8216B96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216B970"))) PPC_WEAK_FUNC(sub_8216B970);
PPC_FUNC_IMPL(__imp__sub_8216B970) {
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
	// lwz r16,-4536(0)
	r16.u64 = PPC_LOAD_U32(-4536);
	// mflr r12
	// bl 0x8239bcf8
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
	// addi r11,r11,-4596
	r11.s64 = r11.s64 + -4596;
	// addi r28,r30,-92
	r28.s64 = r30.s64 + -92;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-4660
	ctx.r10.s64 = ctx.r10.s64 + -4660;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,-100(r30)
	PPC_STORE_U32(r30.u32 + -100, r11.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-92(r11)
	PPC_STORE_U32(r11.u32 + -92, ctx.r10.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-92
	ctx.r10.s64 = r11.s64 + -92;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-96(r11)
	PPC_STORE_U32(r11.u32 + -96, ctx.r10.u32);
	// lwz r29,-48(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + -48);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8216b9ec
	if (cr0.eq) goto loc_8216B9EC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821a48e8
	sub_821A48E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_8216B9EC:
	// lwz r11,-8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216ba1c
	if (cr0.eq) goto loc_8216BA1C;
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
loc_8216BA1C:
	// lwz r11,-24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -24);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216ba30
	if (cr0.eq) goto loc_8216BA30;
	// lwz r3,-28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8216BA30:
	// addi r3,r30,-44
	ctx.r3.s64 = r30.s64 + -44;
	// bl 0x82162218
	sub_82162218(ctx, base);
	// addi r3,r30,-60
	ctx.r3.s64 = r30.s64 + -60;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// addi r3,r30,-72
	ctx.r3.s64 = r30.s64 + -72;
	// bl 0x82160b00
	sub_82160B00(ctx, base);
	// addic. r11,r30,-100
	xer.ca = r30.u32 > 99;
	r11.s64 = r30.s64 + -100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8216ba54
	if (!cr0.eq) goto loc_8216BA54;
	// li r28,0
	r28.s64 = 0;
loc_8216BA54:
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x821698c8
	sub_821698C8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8216B978"))) PPC_WEAK_FUNC(sub_8216B978);
PPC_FUNC_IMPL(__imp__sub_8216B978) {
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
	// addi r11,r11,-4596
	r11.s64 = r11.s64 + -4596;
	// addi r28,r30,-92
	r28.s64 = r30.s64 + -92;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-4660
	ctx.r10.s64 = ctx.r10.s64 + -4660;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,-100(r30)
	PPC_STORE_U32(r30.u32 + -100, r11.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-92(r11)
	PPC_STORE_U32(r11.u32 + -92, ctx.r10.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-92
	ctx.r10.s64 = r11.s64 + -92;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-96(r11)
	PPC_STORE_U32(r11.u32 + -96, ctx.r10.u32);
	// lwz r29,-48(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + -48);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8216b9ec
	if (cr0.eq) goto loc_8216B9EC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821a48e8
	sub_821A48E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_8216B9EC:
	// lwz r11,-8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216ba1c
	if (cr0.eq) goto loc_8216BA1C;
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
loc_8216BA1C:
	// lwz r11,-24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -24);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216ba30
	if (cr0.eq) goto loc_8216BA30;
	// lwz r3,-28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8216BA30:
	// addi r3,r30,-44
	ctx.r3.s64 = r30.s64 + -44;
	// bl 0x82162218
	sub_82162218(ctx, base);
	// addi r3,r30,-60
	ctx.r3.s64 = r30.s64 + -60;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// addi r3,r30,-72
	ctx.r3.s64 = r30.s64 + -72;
	// bl 0x82160b00
	sub_82160B00(ctx, base);
	// addic. r11,r30,-100
	xer.ca = r30.u32 > 99;
	r11.s64 = r30.s64 + -100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8216ba54
	if (!cr0.eq) goto loc_8216BA54;
	// li r28,0
	r28.s64 = 0;
loc_8216BA54:
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x821698c8
	sub_821698C8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8216BA64"))) PPC_WEAK_FUNC(sub_8216BA64);
PPC_FUNC_IMPL(__imp__sub_8216BA64) {
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
	// addic. r11,r11,-100
	xer.ca = r11.u32 > 99;
	r11.s64 = r11.s64 + -100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216ba94
	if (cr0.eq) goto loc_8216BA94;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x8216ba9c
	goto loc_8216BA9C;
loc_8216BA94:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8216BA9C:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x8216a068
	sub_8216A068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216BAB8"))) PPC_WEAK_FUNC(sub_8216BAB8);
PPC_FUNC_IMPL(__imp__sub_8216BAB8) {
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
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
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

__attribute__((alias("__imp__sub_8216BAE8"))) PPC_WEAK_FUNC(sub_8216BAE8);
PPC_FUNC_IMPL(__imp__sub_8216BAE8) {
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
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
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

__attribute__((alias("__imp__sub_8216BB18"))) PPC_WEAK_FUNC(sub_8216BB18);
PPC_FUNC_IMPL(__imp__sub_8216BB18) {
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
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x82162370
	sub_82162370(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216BB48"))) PPC_WEAK_FUNC(sub_8216BB48);
PPC_FUNC_IMPL(__imp__sub_8216BB48) {
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
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
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

__attribute__((alias("__imp__sub_8216BB78"))) PPC_WEAK_FUNC(sub_8216BB78);
PPC_FUNC_IMPL(__imp__sub_8216BB78) {
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
	// bl 0x8214d368
	sub_8214D368(ctx, base);
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

__attribute__((alias("__imp__sub_8216BBA8"))) PPC_WEAK_FUNC(sub_8216BBA8);
PPC_FUNC_IMPL(__imp__sub_8216BBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8216bb78
	sub_8216BB78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216BBB4"))) PPC_WEAK_FUNC(sub_8216BBB4);
PPC_FUNC_IMPL(__imp__sub_8216BBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216BBB8"))) PPC_WEAK_FUNC(sub_8216BBB8);
PPC_FUNC_IMPL(__imp__sub_8216BBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8216c620
	sub_8216C620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216BBC4"))) PPC_WEAK_FUNC(sub_8216BBC4);
PPC_FUNC_IMPL(__imp__sub_8216BBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216BBC8"))) PPC_WEAK_FUNC(sub_8216BBC8);
PPC_FUNC_IMPL(__imp__sub_8216BBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8216a728
	sub_8216A728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216BBD4"))) PPC_WEAK_FUNC(sub_8216BBD4);
PPC_FUNC_IMPL(__imp__sub_8216BBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216BBD8"))) PPC_WEAK_FUNC(sub_8216BBD8);
PPC_FUNC_IMPL(__imp__sub_8216BBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-68
	ctx.r3.s64 = ctx.r3.s64 + -68;
	// b 0x8216a090
	sub_8216A090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216BBE8"))) PPC_WEAK_FUNC(sub_8216BBE8);
PPC_FUNC_IMPL(__imp__sub_8216BBE8) {
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
	// lwz r16,-4432(0)
	r16.u64 = PPC_LOAD_U32(-4432);
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
	// lwz r11,9076(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9076);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8216bc6c
	if (!cr0.eq) goto loc_8216BC6C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,9076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9076, r11.u32);
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
	// bl 0x8214d368
	sub_8214D368(ctx, base);
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
	// stw r3,9072(r27)
	PPC_STORE_U32(r27.u32 + 9072, ctx.r3.u32);
	// b 0x8216bc70
	goto loc_8216BC70;
loc_8216BC6C:
	// lwz r3,9072(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 9072);
loc_8216BC70:
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
	// beq 0x8216bcac
	if (cr0.eq) goto loc_8216BCAC;
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8216bd28
	goto loc_8216BD28;
loc_8216BCAC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8216bd0c
	if (!cr0.eq) goto loc_8216BD0C;
	// addic. r11,r30,-100
	xer.ca = r30.u32 > 99;
	r11.s64 = r30.s64 + -100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8216bcd0
	if (!cr0.eq) goto loc_8216BCD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8216bce0
	goto loc_8216BCE0;
loc_8216BCD0:
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
loc_8216BCE0:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-92
	ctx.r4.s64 = r11.s64 + -92;
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
loc_8216BD0C:
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8216BD28:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8216BBF0"))) PPC_WEAK_FUNC(sub_8216BBF0);
PPC_FUNC_IMPL(__imp__sub_8216BBF0) {
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
	// lwz r11,9076(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9076);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8216bc6c
	if (!cr0.eq) goto loc_8216BC6C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,9076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9076, r11.u32);
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
	// bl 0x8214d368
	sub_8214D368(ctx, base);
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
	// stw r3,9072(r27)
	PPC_STORE_U32(r27.u32 + 9072, ctx.r3.u32);
	// b 0x8216bc70
	goto loc_8216BC70;
loc_8216BC6C:
	// lwz r3,9072(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 9072);
loc_8216BC70:
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
	// beq 0x8216bcac
	if (cr0.eq) goto loc_8216BCAC;
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8216bd28
	goto loc_8216BD28;
loc_8216BCAC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8216bd0c
	if (!cr0.eq) goto loc_8216BD0C;
	// addic. r11,r30,-100
	xer.ca = r30.u32 > 99;
	r11.s64 = r30.s64 + -100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8216bcd0
	if (!cr0.eq) goto loc_8216BCD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8216bce0
	goto loc_8216BCE0;
loc_8216BCD0:
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
loc_8216BCE0:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-92
	ctx.r4.s64 = r11.s64 + -92;
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
loc_8216BD0C:
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8216BD28:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8216BD34"))) PPC_WEAK_FUNC(sub_8216BD34);
PPC_FUNC_IMPL(__imp__sub_8216BD34) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9076
	r11.s64 = r11.s64 + 9076;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9076
	ctx.r10.s64 = ctx.r10.s64 + 9076;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216BD5C"))) PPC_WEAK_FUNC(sub_8216BD5C);
PPC_FUNC_IMPL(__imp__sub_8216BD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216BD60"))) PPC_WEAK_FUNC(sub_8216BD60);
PPC_FUNC_IMPL(__imp__sub_8216BD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8216bbf0
	sub_8216BBF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216BD6C"))) PPC_WEAK_FUNC(sub_8216BD6C);
PPC_FUNC_IMPL(__imp__sub_8216BD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216BD70"))) PPC_WEAK_FUNC(sub_8216BD70);
PPC_FUNC_IMPL(__imp__sub_8216BD70) {
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
	// li r11,5
	r11.s64 = 5;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
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
	// lwz r11,-92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-68
	ctx.r3.s64 = r31.s64 + -68;
	// bl 0x8216a120
	sub_8216A120(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = r31.s64 + -72;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82161418
	sub_82161418(ctx, base);
	// lwz r11,-56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216bdec
	if (cr0.eq) goto loc_8216BDEC;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
loc_8216BDE4:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x8216be00
	goto loc_8216BE00;
loc_8216BDEC:
	// lwz r11,-52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216bde4
	if (!cr0.eq) goto loc_8216BDE4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-2080
	r11.s64 = r11.s64 + -2080;
loc_8216BE00:
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823594a8
	sub_823594A8(ctx, base);
	// lbz r11,-16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -16);
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
	// lbz r11,-15(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -15);
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
	// addi r4,r31,-44
	ctx.r4.s64 = r31.s64 + -44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216b7a0
	sub_8216B7A0(ctx, base);
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

__attribute__((alias("__imp__sub_8216BE74"))) PPC_WEAK_FUNC(sub_8216BE74);
PPC_FUNC_IMPL(__imp__sub_8216BE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216BE78"))) PPC_WEAK_FUNC(sub_8216BE78);
PPC_FUNC_IMPL(__imp__sub_8216BE78) {
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
	// lwz r16,-4344(0)
	r16.u64 = PPC_LOAD_U32(-4344);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r28,r11,9092
	r28.s64 = r11.s64 + 9092;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-68
	ctx.r3.s64 = r30.s64 + -68;
	// bl 0x8216a190
	sub_8216A190(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x8216bef0
	if (!cr6.lt) goto loc_8216BEF0;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_8216BEF0:
	// addi r4,r30,-72
	ctx.r4.s64 = r30.s64 + -72;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82161470
	sub_82161470(ctx, base);
	// addi r4,r30,-60
	ctx.r4.s64 = r30.s64 + -60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216b800
	sub_8216B800(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8216bf28
	if (!cr6.gt) goto loc_8216BF28;
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x8216bf2c
	goto loc_8216BF2C;
loc_8216BF28:
	// stb r27,-16(r30)
	PPC_STORE_U8(r30.u32 + -16, r27.u8);
loc_8216BF2C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x8216bf48
	if (!cr6.gt) goto loc_8216BF48;
	// addi r4,r30,-15
	ctx.r4.s64 = r30.s64 + -15;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x8216bf4c
	goto loc_8216BF4C;
loc_8216BF48:
	// stb r27,-15(r30)
	PPC_STORE_U8(r30.u32 + -15, r27.u8);
loc_8216BF4C:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,9088(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9088);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r29,r9,9080
	r29.s64 = ctx.r9.s64 + 9080;
	// bne 0x8216bf98
	if (!cr0.eq) goto loc_8216BF98;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,9088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9088, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-4368
	ctx.r4.s64 = r11.s64 + -4368;
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
	// addi r3,r11,11768
	ctx.r3.s64 = r11.s64 + 11768;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_8216BF98:
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-92
	ctx.r4.s64 = r11.s64 + -92;
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
	// beq 0x8216bfd8
	if (cr0.eq) goto loc_8216BFD8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8216BFD8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8216BE80"))) PPC_WEAK_FUNC(sub_8216BE80);
PPC_FUNC_IMPL(__imp__sub_8216BE80) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r28,r11,9092
	r28.s64 = r11.s64 + 9092;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-68
	ctx.r3.s64 = r30.s64 + -68;
	// bl 0x8216a190
	sub_8216A190(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x8216bef0
	if (!cr6.lt) goto loc_8216BEF0;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_8216BEF0:
	// addi r4,r30,-72
	ctx.r4.s64 = r30.s64 + -72;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82161470
	sub_82161470(ctx, base);
	// addi r4,r30,-60
	ctx.r4.s64 = r30.s64 + -60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216b800
	sub_8216B800(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8216bf28
	if (!cr6.gt) goto loc_8216BF28;
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x8216bf2c
	goto loc_8216BF2C;
loc_8216BF28:
	// stb r27,-16(r30)
	PPC_STORE_U8(r30.u32 + -16, r27.u8);
loc_8216BF2C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x8216bf48
	if (!cr6.gt) goto loc_8216BF48;
	// addi r4,r30,-15
	ctx.r4.s64 = r30.s64 + -15;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x8216bf4c
	goto loc_8216BF4C;
loc_8216BF48:
	// stb r27,-15(r30)
	PPC_STORE_U8(r30.u32 + -15, r27.u8);
loc_8216BF4C:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,9088(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9088);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r29,r9,9080
	r29.s64 = ctx.r9.s64 + 9080;
	// bne 0x8216bf98
	if (!cr0.eq) goto loc_8216BF98;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,9088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9088, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-4368
	ctx.r4.s64 = r11.s64 + -4368;
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
	// addi r3,r11,11768
	ctx.r3.s64 = r11.s64 + 11768;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_8216BF98:
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-92
	ctx.r4.s64 = r11.s64 + -92;
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
	// beq 0x8216bfd8
	if (cr0.eq) goto loc_8216BFD8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8216BFD8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8216BFE0"))) PPC_WEAK_FUNC(sub_8216BFE0);
PPC_FUNC_IMPL(__imp__sub_8216BFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9088
	r11.s64 = r11.s64 + 9088;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9088
	ctx.r10.s64 = ctx.r10.s64 + 9088;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216C008"))) PPC_WEAK_FUNC(sub_8216C008);
PPC_FUNC_IMPL(__imp__sub_8216C008) {
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
	// lwz r16,-4272(0)
	r16.u64 = PPC_LOAD_U32(-4272);
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,27500
	r11.s64 = r11.s64 + 27500;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bl 0x8216b698
	sub_8216B698(ctx, base);
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

__attribute__((alias("__imp__sub_8216C010"))) PPC_WEAK_FUNC(sub_8216C010);
PPC_FUNC_IMPL(__imp__sub_8216C010) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,27500
	r11.s64 = r11.s64 + 27500;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bl 0x8216b698
	sub_8216B698(ctx, base);
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

__attribute__((alias("__imp__sub_8216C074"))) PPC_WEAK_FUNC(sub_8216C074);
PPC_FUNC_IMPL(__imp__sub_8216C074) {
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

__attribute__((alias("__imp__sub_8216C09C"))) PPC_WEAK_FUNC(sub_8216C09C);
PPC_FUNC_IMPL(__imp__sub_8216C09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216C0A0"))) PPC_WEAK_FUNC(sub_8216C0A0);
PPC_FUNC_IMPL(__imp__sub_8216C0A0) {
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
	// addi r30,r3,140
	r30.s64 = ctx.r3.s64 + 140;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8216c0d4
	goto loc_8216C0D4;
loc_8216C0BC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8216a498
	sub_8216A498(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8216c0f8
	if (!cr0.eq) goto loc_8216C0F8;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8216C0D4:
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
	// bne 0x8216c0bc
	if (!cr0.eq) goto loc_8216C0BC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216C0F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
loc_8216C0F8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x8216c0f0
	goto loc_8216C0F0;
}

__attribute__((alias("__imp__sub_8216C11C"))) PPC_WEAK_FUNC(sub_8216C11C);
PPC_FUNC_IMPL(__imp__sub_8216C11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216C120"))) PPC_WEAK_FUNC(sub_8216C120);
PPC_FUNC_IMPL(__imp__sub_8216C120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8216bd70
	sub_8216BD70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216C12C"))) PPC_WEAK_FUNC(sub_8216C12C);
PPC_FUNC_IMPL(__imp__sub_8216C12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216C130"))) PPC_WEAK_FUNC(sub_8216C130);
PPC_FUNC_IMPL(__imp__sub_8216C130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8216be80
	sub_8216BE80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216C13C"))) PPC_WEAK_FUNC(sub_8216C13C);
PPC_FUNC_IMPL(__imp__sub_8216C13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216C140"))) PPC_WEAK_FUNC(sub_8216C140);
PPC_FUNC_IMPL(__imp__sub_8216C140) {
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
	// lwz r16,-4160(0)
	r16.u64 = PPC_LOAD_U32(-4160);
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
	// beq cr6,0x8216c198
	if (cr6.eq) goto loc_8216C198;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-4216
	r11.s64 = r11.s64 + -4216;
	// addi r10,r10,-4224
	ctx.r10.s64 = ctx.r10.s64 + -4224;
	// addi r3,r30,100
	ctx.r3.s64 = r30.s64 + 100;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8216C198:
	// addi r28,r30,8
	r28.s64 = r30.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82169db0
	sub_82169DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821609d0
	sub_821609D0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-4596
	r11.s64 = r11.s64 + -4596;
	// addi r10,r10,-4660
	ctx.r10.s64 = ctx.r10.s64 + -4660;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-92
	ctx.r10.s64 = r11.s64 + -92;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r29.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-10372
	r11.s64 = r11.s64 + -10372;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x8216a7a8
	sub_8216A7A8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-20976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-8244
	r11.s64 = r11.s64 + -8244;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r11.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// stfs f0,80(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// stfs f13,88(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// stb r29,84(r30)
	PPC_STORE_U8(r30.u32 + 84, r29.u8);
	// stb r29,85(r30)
	PPC_STORE_U8(r30.u32 + 85, r29.u8);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8216C148"))) PPC_WEAK_FUNC(sub_8216C148);
PPC_FUNC_IMPL(__imp__sub_8216C148) {
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
	// beq cr6,0x8216c198
	if (cr6.eq) goto loc_8216C198;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-4216
	r11.s64 = r11.s64 + -4216;
	// addi r10,r10,-4224
	ctx.r10.s64 = ctx.r10.s64 + -4224;
	// addi r3,r30,100
	ctx.r3.s64 = r30.s64 + 100;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8216C198:
	// addi r28,r30,8
	r28.s64 = r30.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82169db0
	sub_82169DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821609d0
	sub_821609D0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-4596
	r11.s64 = r11.s64 + -4596;
	// addi r10,r10,-4660
	ctx.r10.s64 = ctx.r10.s64 + -4660;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-92
	ctx.r10.s64 = r11.s64 + -92;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r29.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-10372
	r11.s64 = r11.s64 + -10372;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x8216a7a8
	sub_8216A7A8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-20976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-8244
	r11.s64 = r11.s64 + -8244;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r11.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// stfs f0,80(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// stfs f13,88(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// stb r29,84(r30)
	PPC_STORE_U8(r30.u32 + 84, r29.u8);
	// stb r29,85(r30)
	PPC_STORE_U8(r30.u32 + 85, r29.u8);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8216C288"))) PPC_WEAK_FUNC(sub_8216C288);
PPC_FUNC_IMPL(__imp__sub_8216C288) {
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
	// beq 0x8216c2bc
	if (cr0.eq) goto loc_8216C2BC;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_8216C2BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216C2CC"))) PPC_WEAK_FUNC(sub_8216C2CC);
PPC_FUNC_IMPL(__imp__sub_8216C2CC) {
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
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x8216a068
	sub_8216A068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216C2F8"))) PPC_WEAK_FUNC(sub_8216C2F8);
PPC_FUNC_IMPL(__imp__sub_8216C2F8) {
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

__attribute__((alias("__imp__sub_8216C320"))) PPC_WEAK_FUNC(sub_8216C320);
PPC_FUNC_IMPL(__imp__sub_8216C320) {
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
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
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

__attribute__((alias("__imp__sub_8216C34C"))) PPC_WEAK_FUNC(sub_8216C34C);
PPC_FUNC_IMPL(__imp__sub_8216C34C) {
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
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
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

__attribute__((alias("__imp__sub_8216C378"))) PPC_WEAK_FUNC(sub_8216C378);
PPC_FUNC_IMPL(__imp__sub_8216C378) {
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

__attribute__((alias("__imp__sub_8216C3A0"))) PPC_WEAK_FUNC(sub_8216C3A0);
PPC_FUNC_IMPL(__imp__sub_8216C3A0) {
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
	// lwz r16,-4064(0)
	r16.u64 = PPC_LOAD_U32(-4064);
	// mflr r12
	// bl 0x8239bcf0
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f30,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f30.f64 = double(temp.f32);
	// beq 0x8216c424
	if (cr0.eq) goto loc_8216C424;
loc_8216C3F0:
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x8216c408
	if (!cr6.eq) goto loc_8216C408;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216c3f0
	if (!cr0.eq) goto loc_8216C3F0;
loc_8216C408:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8216c424
	if (cr6.eq) goto loc_8216C424;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fsubs f31,f31,f0
	f31.f64 = double(float(f31.f64 - f0.f64));
loc_8216C424:
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stfs f31,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// bl 0x8216c0a0
	sub_8216C0A0(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x8216c4a0
	if (!cr0.eq) goto loc_8216C4A0;
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
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82318240
	sub_82318240(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r29,r11,8
	r29.s64 = r11.s64 + 8;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_8216C4A0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r5,r11,-5288
	ctx.r5.s64 = r11.s64 + -5288;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8216c4f0
	if (cr0.eq) goto loc_8216C4F0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// lfs f1,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// bl 0x821a4ba8
	sub_821A4BA8(ctx, base);
	// b 0x8216c4f4
	goto loc_8216C4F4;
loc_8216C4F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216C4F4:
	// stw r3,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r3.u32);
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8216C3A8"))) PPC_WEAK_FUNC(sub_8216C3A8);
PPC_FUNC_IMPL(__imp__sub_8216C3A8) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f30,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f30.f64 = double(temp.f32);
	// beq 0x8216c424
	if (cr0.eq) goto loc_8216C424;
loc_8216C3F0:
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x8216c408
	if (!cr6.eq) goto loc_8216C408;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216c3f0
	if (!cr0.eq) goto loc_8216C3F0;
loc_8216C408:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8216c424
	if (cr6.eq) goto loc_8216C424;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fsubs f31,f31,f0
	f31.f64 = double(float(f31.f64 - f0.f64));
loc_8216C424:
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stfs f31,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// bl 0x8216c0a0
	sub_8216C0A0(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x8216c4a0
	if (!cr0.eq) goto loc_8216C4A0;
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
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82318240
	sub_82318240(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r29,r11,8
	r29.s64 = r11.s64 + 8;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_8216C4A0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r5,r11,-5288
	ctx.r5.s64 = r11.s64 + -5288;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8216c4f0
	if (cr0.eq) goto loc_8216C4F0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// lfs f1,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// bl 0x821a4ba8
	sub_821A4BA8(ctx, base);
	// b 0x8216c4f4
	goto loc_8216C4F4;
loc_8216C4F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216C4F4:
	// stw r3,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r3.u32);
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8216C508"))) PPC_WEAK_FUNC(sub_8216C508);
PPC_FUNC_IMPL(__imp__sub_8216C508) {
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

__attribute__((alias("__imp__sub_8216C530"))) PPC_WEAK_FUNC(sub_8216C530);
PPC_FUNC_IMPL(__imp__sub_8216C530) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_8216C558"))) PPC_WEAK_FUNC(sub_8216C558);
PPC_FUNC_IMPL(__imp__sub_8216C558) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8216a460
	sub_8216A460(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216C580"))) PPC_WEAK_FUNC(sub_8216C580);
PPC_FUNC_IMPL(__imp__sub_8216C580) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
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
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216c3a8
	sub_8216C3A8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r27,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r27.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8216C61C"))) PPC_WEAK_FUNC(sub_8216C61C);
PPC_FUNC_IMPL(__imp__sub_8216C61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216C620"))) PPC_WEAK_FUNC(sub_8216C620);
PPC_FUNC_IMPL(__imp__sub_8216C620) {
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
	// addi r30,r3,-100
	r30.s64 = ctx.r3.s64 + -100;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,100
	r31.s64 = r30.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216b978
	sub_8216B978(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216c658
	if (cr0.eq) goto loc_8216C658;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_8216C658:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216C664"))) PPC_WEAK_FUNC(sub_8216C664);
PPC_FUNC_IMPL(__imp__sub_8216C664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216C668"))) PPC_WEAK_FUNC(sub_8216C668);
PPC_FUNC_IMPL(__imp__sub_8216C668) {
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
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216c694
	if (cr0.eq) goto loc_8216C694;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8216C694:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821529c0
	sub_821529C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216C6BC"))) PPC_WEAK_FUNC(sub_8216C6BC);
PPC_FUNC_IMPL(__imp__sub_8216C6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216C6C0"))) PPC_WEAK_FUNC(sub_8216C6C0);
PPC_FUNC_IMPL(__imp__sub_8216C6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,-3968(0)
	r16.u64 = PPC_LOAD_U32(-3968);
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
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8216c700
	if (cr0.eq) goto loc_8216C700;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8216c700
	if (cr0.eq) goto loc_8216C700;
	// bl 0x82167d30
	sub_82167D30(ctx, base);
loc_8216C700:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216c748
	if (cr0.eq) goto loc_8216C748;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8216c748
	if (!cr0.eq) goto loc_8216C748;
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
	// b 0x8216c79c
	goto loc_8216C79C;
loc_8216C748:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8216c79c
	if (!cr6.eq) goto loc_8216C79C;
	// lbz r11,85(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 85);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216c79c
	if (!cr0.eq) goto loc_8216C79C;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216c79c
	if (cr0.eq) goto loc_8216C79C;
	// lbz r11,228(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 228);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216c79c
	if (cr0.eq) goto loc_8216C79C;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8216c794
	if (cr0.eq) goto loc_8216C794;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82161a00
	sub_82161A00(ctx, base);
	// b 0x8216c798
	goto loc_8216C798;
loc_8216C794:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216C798:
	// stw r3,92(r30)
	PPC_STORE_U32(r30.u32 + 92, ctx.r3.u32);
loc_8216C79C:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8216c7b8
	if (cr0.eq) goto loc_8216C7B8;
	// bl 0x8215f638
	sub_8215F638(ctx, base);
	// lwz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82167d30
	sub_82167D30(ctx, base);
loc_8216C7B8:
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

__attribute__((alias("__imp__sub_8216C6C8"))) PPC_WEAK_FUNC(sub_8216C6C8);
PPC_FUNC_IMPL(__imp__sub_8216C6C8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8216c700
	if (cr0.eq) goto loc_8216C700;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8216c700
	if (cr0.eq) goto loc_8216C700;
	// bl 0x82167d30
	sub_82167D30(ctx, base);
loc_8216C700:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216c748
	if (cr0.eq) goto loc_8216C748;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8216c748
	if (!cr0.eq) goto loc_8216C748;
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
	// b 0x8216c79c
	goto loc_8216C79C;
loc_8216C748:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8216c79c
	if (!cr6.eq) goto loc_8216C79C;
	// lbz r11,85(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 85);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216c79c
	if (!cr0.eq) goto loc_8216C79C;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216c79c
	if (cr0.eq) goto loc_8216C79C;
	// lbz r11,228(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 228);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216c79c
	if (cr0.eq) goto loc_8216C79C;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8216c794
	if (cr0.eq) goto loc_8216C794;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82161a00
	sub_82161A00(ctx, base);
	// b 0x8216c798
	goto loc_8216C798;
loc_8216C794:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216C798:
	// stw r3,92(r30)
	PPC_STORE_U32(r30.u32 + 92, ctx.r3.u32);
loc_8216C79C:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8216c7b8
	if (cr0.eq) goto loc_8216C7B8;
	// bl 0x8215f638
	sub_8215F638(ctx, base);
	// lwz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82167d30
	sub_82167D30(ctx, base);
loc_8216C7B8:
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

__attribute__((alias("__imp__sub_8216C7D0"))) PPC_WEAK_FUNC(sub_8216C7D0);
PPC_FUNC_IMPL(__imp__sub_8216C7D0) {
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

__attribute__((alias("__imp__sub_8216C7F8"))) PPC_WEAK_FUNC(sub_8216C7F8);
PPC_FUNC_IMPL(__imp__sub_8216C7F8) {
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
	// lwz r16,-3896(0)
	r16.u64 = PPC_LOAD_U32(-3896);
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
	// addi r3,r30,-60
	ctx.r3.s64 = r30.s64 + -60;
	// bl 0x8216b628
	sub_8216B628(ctx, base);
	// addi r3,r30,-100
	ctx.r3.s64 = r30.s64 + -100;
	// bl 0x8216c6c8
	sub_8216C6C8(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r11,9092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 9092);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x8216c890
	if (!cr6.gt) goto loc_8216C890;
	// lwz r11,-56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216c854
	if (cr0.eq) goto loc_8216C854;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8216C854:
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-8244
	r11.s64 = r11.s64 + -8244;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82165228
	sub_82165228(ctx, base);
	// addi r3,r30,-44
	ctx.r3.s64 = r30.s64 + -44;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x821642f0
	sub_821642F0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82162218
	sub_82162218(ctx, base);
	// b 0x8216c89c
	goto loc_8216C89C;
loc_8216C890:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,-44
	ctx.r3.s64 = r30.s64 + -44;
	// bl 0x821642f0
	sub_821642F0(ctx, base);
loc_8216C89C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216C800"))) PPC_WEAK_FUNC(sub_8216C800);
PPC_FUNC_IMPL(__imp__sub_8216C800) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r30,-60
	ctx.r3.s64 = r30.s64 + -60;
	// bl 0x8216b628
	sub_8216B628(ctx, base);
	// addi r3,r30,-100
	ctx.r3.s64 = r30.s64 + -100;
	// bl 0x8216c6c8
	sub_8216C6C8(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r11,9092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 9092);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x8216c890
	if (!cr6.gt) goto loc_8216C890;
	// lwz r11,-56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216c854
	if (cr0.eq) goto loc_8216C854;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8216C854:
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-8244
	r11.s64 = r11.s64 + -8244;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82165228
	sub_82165228(ctx, base);
	// addi r3,r30,-44
	ctx.r3.s64 = r30.s64 + -44;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x821642f0
	sub_821642F0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82162218
	sub_82162218(ctx, base);
	// b 0x8216c89c
	goto loc_8216C89C;
loc_8216C890:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,-44
	ctx.r3.s64 = r30.s64 + -44;
	// bl 0x821642f0
	sub_821642F0(ctx, base);
loc_8216C89C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216C8A4"))) PPC_WEAK_FUNC(sub_8216C8A4);
PPC_FUNC_IMPL(__imp__sub_8216C8A4) {
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

__attribute__((alias("__imp__sub_8216C8CC"))) PPC_WEAK_FUNC(sub_8216C8CC);
PPC_FUNC_IMPL(__imp__sub_8216C8CC) {
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
	// bl 0x82162370
	sub_82162370(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216C8F4"))) PPC_WEAK_FUNC(sub_8216C8F4);
PPC_FUNC_IMPL(__imp__sub_8216C8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216C8F8"))) PPC_WEAK_FUNC(sub_8216C8F8);
PPC_FUNC_IMPL(__imp__sub_8216C8F8) {
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
	// lwz r11,-92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -92);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-68
	ctx.r3.s64 = r31.s64 + -68;
	// bl 0x8216a3e0
	sub_8216A3E0(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,4704
	ctx.r6.s64 = r11.s64 + 4704;
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
	// beq 0x8216c9b8
	if (cr0.eq) goto loc_8216C9B8;
	// addi r3,r31,-72
	ctx.r3.s64 = r31.s64 + -72;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x82160bf0
	sub_82160BF0(ctx, base);
	// addi r3,r31,-60
	ctx.r3.s64 = r31.s64 + -60;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x8213dba8
	sub_8213DBA8(ctx, base);
	// lbz r11,84(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 84);
	// addi r3,r31,-44
	ctx.r3.s64 = r31.s64 + -44;
	// stb r11,-16(r31)
	PPC_STORE_U8(r31.u32 + -16, r11.u8);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,-12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -12, temp.u32);
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// bl 0x821642f0
	sub_821642F0(ctx, base);
	// lbz r11,85(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 85);
	// lwz r10,-64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -64);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,-15(r31)
	PPC_STORE_U8(r31.u32 + -15, r11.u8);
	// beq cr6,0x8216c9b8
	if (cr6.eq) goto loc_8216C9B8;
	// lwz r11,-56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8216c9b8
	if (cr6.eq) goto loc_8216C9B8;
	// addi r3,r31,-100
	ctx.r3.s64 = r31.s64 + -100;
	// bl 0x8216c6c8
	sub_8216C6C8(ctx, base);
loc_8216C9B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216C9C0"))) PPC_WEAK_FUNC(sub_8216C9C0);
PPC_FUNC_IMPL(__imp__sub_8216C9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8216c8f8
	sub_8216C8F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216C9CC"))) PPC_WEAK_FUNC(sub_8216C9CC);
PPC_FUNC_IMPL(__imp__sub_8216C9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216C9D0"))) PPC_WEAK_FUNC(sub_8216C9D0);
PPC_FUNC_IMPL(__imp__sub_8216C9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8216c800
	sub_8216C800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216C9DC"))) PPC_WEAK_FUNC(sub_8216C9DC);
PPC_FUNC_IMPL(__imp__sub_8216C9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216C9E0"))) PPC_WEAK_FUNC(sub_8216C9E0);
PPC_FUNC_IMPL(__imp__sub_8216C9E0) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-3824(0)
	r16.u64 = PPC_LOAD_U32(-3824);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r29.u32);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8216ca24
	if (cr6.eq) goto loc_8216CA24;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x8213dba8
	sub_8213DBA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216c6c8
	sub_8216C6C8(ctx, base);
loc_8216CA24:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216C9E8"))) PPC_WEAK_FUNC(sub_8216C9E8);
PPC_FUNC_IMPL(__imp__sub_8216C9E8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r29.u32);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8216ca24
	if (cr6.eq) goto loc_8216CA24;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x8213dba8
	sub_8213DBA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216c6c8
	sub_8216C6C8(ctx, base);
loc_8216CA24:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216CA34"))) PPC_WEAK_FUNC(sub_8216CA34);
PPC_FUNC_IMPL(__imp__sub_8216CA34) {
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
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
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

__attribute__((alias("__imp__sub_8216CA5C"))) PPC_WEAK_FUNC(sub_8216CA5C);
PPC_FUNC_IMPL(__imp__sub_8216CA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216CA60"))) PPC_WEAK_FUNC(sub_8216CA60);
PPC_FUNC_IMPL(__imp__sub_8216CA60) {
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
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8216ca90
	if (cr6.eq) goto loc_8216CA90;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82160bf0
	sub_82160BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216c6c8
	sub_8216C6C8(ctx, base);
loc_8216CA90:
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

__attribute__((alias("__imp__sub_8216CAA4"))) PPC_WEAK_FUNC(sub_8216CAA4);
PPC_FUNC_IMPL(__imp__sub_8216CAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216CAA8"))) PPC_WEAK_FUNC(sub_8216CAA8);
PPC_FUNC_IMPL(__imp__sub_8216CAA8) {
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
	// lwz r16,-3448(0)
	r16.u64 = PPC_LOAD_U32(-3448);
	// mflr r12
	// bl 0x8239bcec
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
	// clrlwi. r11,r7,31
	r11.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9144
	r29.s64 = r11.s64 + 9144;
	// bne 0x8216cb1c
	if (!cr0.eq) goto loc_8216CB1C;
	// ori r11,r7,1
	r11.u64 = ctx.r7.u64 | 1;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3612
	ctx.r4.s64 = r11.s64 + -3612;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CB1C:
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
	// beq 0x8216cb78
	if (cr0.eq) goto loc_8216CB78;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r26,-100
	ctx.r4.s64 = r26.s64 + -100;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8216b468
	sub_8216B468(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8216cb74
	if (cr6.eq) goto loc_8216CB74;
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
	// beq 0x8216d17c
	if (cr0.eq) goto loc_8216D17C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8216CB6C:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8216d17c
	goto loc_8216D17C;
loc_8216CB74:
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CB78:
	// rlwinm. r11,r7,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9140
	r29.s64 = r11.s64 + 9140;
	// bne 0x8216cba4
	if (!cr0.eq) goto loc_8216CBA4;
	// ori r11,r7,2
	r11.u64 = ctx.r7.u64 | 2;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,28248
	ctx.r4.s64 = r11.s64 + 28248;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CBA4:
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
	// beq 0x8216cbfc
	if (cr0.eq) goto loc_8216CBFC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r26,-100
	ctx.r4.s64 = r26.s64 + -100;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8216b4f0
	sub_8216B4F0(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8216cbf8
	if (cr6.eq) goto loc_8216CBF8;
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
	// beq 0x8216d17c
	if (cr0.eq) goto loc_8216D17C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8216cb6c
	goto loc_8216CB6C;
loc_8216CBF8:
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CBFC:
	// rlwinm. r11,r7,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9136
	r29.s64 = r11.s64 + 9136;
	// bne 0x8216cc28
	if (!cr0.eq) goto loc_8216CC28;
	// ori r11,r7,4
	r11.u64 = ctx.r7.u64 | 4;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3628
	ctx.r4.s64 = r11.s64 + -3628;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CC28:
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
	// beq 0x8216cc80
	if (cr0.eq) goto loc_8216CC80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r26,-100
	ctx.r4.s64 = r26.s64 + -100;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8216c580
	sub_8216C580(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8216cc7c
	if (cr6.eq) goto loc_8216CC7C;
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
	// beq 0x8216d17c
	if (cr0.eq) goto loc_8216D17C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8216cb6c
	goto loc_8216CB6C;
loc_8216CC7C:
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CC80:
	// rlwinm. r11,r7,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9132
	r29.s64 = r11.s64 + 9132;
	// bne 0x8216ccac
	if (!cr0.eq) goto loc_8216CCAC;
	// ori r11,r7,8
	r11.u64 = ctx.r7.u64 | 8;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3636
	ctx.r4.s64 = r11.s64 + -3636;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CCAC:
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
	// beq 0x8216cd24
	if (cr0.eq) goto loc_8216CD24;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r11,r26,-100
	r11.s64 = r26.s64 + -100;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8216cd1c
	if (cr6.eq) goto loc_8216CD1C;
	// rotlwi r30,r10,0
	r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
loc_8216CD1C:
	// stw r25,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r25.u32);
	// b 0x8216d178
	goto loc_8216D178;
loc_8216CD24:
	// rlwinm. r11,r7,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9128
	r29.s64 = r11.s64 + 9128;
	// bne 0x8216cd50
	if (!cr0.eq) goto loc_8216CD50;
	// ori r11,r7,16
	r11.u64 = ctx.r7.u64 | 16;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3660
	ctx.r4.s64 = r11.s64 + -3660;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CD50:
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
	// beq 0x8216cda4
	if (cr0.eq) goto loc_8216CDA4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r26,-100
	ctx.r4.s64 = r26.s64 + -100;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8216b588
	sub_8216B588(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8216cda4
	if (cr6.eq) goto loc_8216CDA4;
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
	// beq 0x8216d17c
	if (cr0.eq) goto loc_8216D17C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8216cb6c
	goto loc_8216CB6C;
loc_8216CDA4:
	// rlwinm. r11,r7,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9124
	r29.s64 = r11.s64 + 9124;
	// bne 0x8216cdd0
	if (!cr0.eq) goto loc_8216CDD0;
	// ori r11,r7,32
	r11.u64 = ctx.r7.u64 | 32;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3676
	ctx.r4.s64 = r11.s64 + -3676;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CDD0:
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
	// beq 0x8216ce24
	if (cr0.eq) goto loc_8216CE24;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r26,-100
	ctx.r4.s64 = r26.s64 + -100;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8216b5d8
	sub_8216B5D8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8216ce24
	if (cr6.eq) goto loc_8216CE24;
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
	// beq 0x8216d17c
	if (cr0.eq) goto loc_8216D17C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x8216cb6c
	goto loc_8216CB6C;
loc_8216CE24:
	// rlwinm. r11,r7,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9120
	r29.s64 = r11.s64 + 9120;
	// bne 0x8216ce50
	if (!cr0.eq) goto loc_8216CE50;
	// ori r11,r7,64
	r11.u64 = ctx.r7.u64 | 64;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3688
	ctx.r4.s64 = r11.s64 + -3688;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CE50:
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
	// beq 0x8216ceb4
	if (cr0.eq) goto loc_8216CEB4;
	// lwz r11,-48(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216ce7c
	if (cr0.eq) goto loc_8216CE7C;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// b 0x8216ce80
	goto loc_8216CE80;
loc_8216CE7C:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8216CE80:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216ce90
	if (!cr0.eq) goto loc_8216CE90;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x8216cea0
	goto loc_8216CEA0;
loc_8216CE90:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8216CEA0:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// b 0x8216d180
	goto loc_8216D180;
loc_8216CEB4:
	// rlwinm. r11,r7,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9116
	r29.s64 = r11.s64 + 9116;
	// bne 0x8216cee0
	if (!cr0.eq) goto loc_8216CEE0;
	// ori r11,r7,128
	r11.u64 = ctx.r7.u64 | 128;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3700
	ctx.r4.s64 = r11.s64 + -3700;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CEE0:
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
	// beq 0x8216cf30
	if (cr0.eq) goto loc_8216CF30;
	// lwz r11,-56(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216cf0c
	if (!cr0.eq) goto loc_8216CF0C;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x8216cf1c
	goto loc_8216CF1C;
loc_8216CF0C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8216CF1C:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// b 0x8216d180
	goto loc_8216D180;
loc_8216CF30:
	// rlwinm. r11,r7,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9112
	r29.s64 = r11.s64 + 9112;
	// bne 0x8216cf5c
	if (!cr0.eq) goto loc_8216CF5C;
	// ori r11,r7,256
	r11.u64 = ctx.r7.u64 | 256;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3712
	ctx.r4.s64 = r11.s64 + -3712;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CF5C:
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
	// beq 0x8216cfa0
	if (cr0.eq) goto loc_8216CFA0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x8216a8a0
	sub_8216A8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x8216a7a8
	sub_8216A7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r26,-100
	ctx.r3.s64 = r26.s64 + -100;
	// bl 0x8216c9e8
	sub_8216C9E8(ctx, base);
	// b 0x8216cd1c
	goto loc_8216CD1C;
loc_8216CFA0:
	// rlwinm. r11,r7,0,22,22
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9108
	r29.s64 = r11.s64 + 9108;
	// bne 0x8216cfcc
	if (!cr0.eq) goto loc_8216CFCC;
	// ori r11,r7,512
	r11.u64 = ctx.r7.u64 | 512;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3724
	ctx.r4.s64 = r11.s64 + -3724;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CFCC:
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
	// beq 0x8216d004
	if (cr0.eq) goto loc_8216D004;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,-32(r26)
	PPC_STORE_U32(r26.u32 + -32, r11.u32);
	// b 0x8216cd1c
	goto loc_8216CD1C;
loc_8216D004:
	// rlwinm. r11,r7,0,21,21
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9104
	r29.s64 = r11.s64 + 9104;
	// bne 0x8216d030
	if (!cr0.eq) goto loc_8216D030;
	// ori r11,r7,1024
	r11.u64 = ctx.r7.u64 | 1024;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3740
	ctx.r4.s64 = r11.s64 + -3740;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216D030:
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
	// beq 0x8216d068
	if (cr0.eq) goto loc_8216D068;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r26,-100
	ctx.r3.s64 = r26.s64 + -100;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8216ae90
	sub_8216AE90(ctx, base);
	// b 0x8216cd1c
	goto loc_8216CD1C;
loc_8216D068:
	// rlwinm. r11,r7,0,20,20
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9100
	r29.s64 = r11.s64 + 9100;
	// bne 0x8216d094
	if (!cr0.eq) goto loc_8216D094;
	// ori r11,r7,2048
	r11.u64 = ctx.r7.u64 | 2048;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3752
	ctx.r4.s64 = r11.s64 + -3752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216D094:
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
	// beq 0x8216d0cc
	if (cr0.eq) goto loc_8216D0CC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x8216a8f8
	sub_8216A8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r26,-100
	ctx.r3.s64 = r26.s64 + -100;
	// bl 0x8216aa18
	sub_8216AA18(ctx, base);
	// b 0x8216cd1c
	goto loc_8216CD1C;
loc_8216D0CC:
	// rlwinm. r11,r7,0,19,19
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9096
	r29.s64 = r11.s64 + 9096;
	// bne 0x8216d0f4
	if (!cr0.eq) goto loc_8216D0F4;
	// ori r11,r7,4096
	r11.u64 = ctx.r7.u64 | 4096;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3760
	ctx.r4.s64 = r11.s64 + -3760;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8216D0F4:
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
	// beq 0x8216d124
	if (cr0.eq) goto loc_8216D124;
	// addi r3,r26,-100
	ctx.r3.s64 = r26.s64 + -100;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8216cd1c
	goto loc_8216CD1C;
loc_8216D124:
	// lwz r11,-92(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -92);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r4,r11,-92
	ctx.r4.s64 = r11.s64 + -92;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8216d170
	if (cr6.eq) goto loc_8216D170;
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
	// beq 0x8216d17c
	if (cr0.eq) goto loc_8216D17C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x8216cb6c
	goto loc_8216CB6C;
loc_8216D170:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_8216D178:
	// stw r25,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r25.u32);
loc_8216D17C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8216D180:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8216CAB0"))) PPC_WEAK_FUNC(sub_8216CAB0);
PPC_FUNC_IMPL(__imp__sub_8216CAB0) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
	// clrlwi. r11,r7,31
	r11.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9144
	r29.s64 = r11.s64 + 9144;
	// bne 0x8216cb1c
	if (!cr0.eq) goto loc_8216CB1C;
	// ori r11,r7,1
	r11.u64 = ctx.r7.u64 | 1;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3612
	ctx.r4.s64 = r11.s64 + -3612;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CB1C:
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
	// beq 0x8216cb78
	if (cr0.eq) goto loc_8216CB78;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r26,-100
	ctx.r4.s64 = r26.s64 + -100;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8216b468
	sub_8216B468(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8216cb74
	if (cr6.eq) goto loc_8216CB74;
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
	// beq 0x8216d17c
	if (cr0.eq) goto loc_8216D17C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8216CB6C:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8216d17c
	goto loc_8216D17C;
loc_8216CB74:
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CB78:
	// rlwinm. r11,r7,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9140
	r29.s64 = r11.s64 + 9140;
	// bne 0x8216cba4
	if (!cr0.eq) goto loc_8216CBA4;
	// ori r11,r7,2
	r11.u64 = ctx.r7.u64 | 2;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,28248
	ctx.r4.s64 = r11.s64 + 28248;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CBA4:
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
	// beq 0x8216cbfc
	if (cr0.eq) goto loc_8216CBFC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r26,-100
	ctx.r4.s64 = r26.s64 + -100;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8216b4f0
	sub_8216B4F0(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8216cbf8
	if (cr6.eq) goto loc_8216CBF8;
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
	// beq 0x8216d17c
	if (cr0.eq) goto loc_8216D17C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8216cb6c
	goto loc_8216CB6C;
loc_8216CBF8:
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CBFC:
	// rlwinm. r11,r7,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9136
	r29.s64 = r11.s64 + 9136;
	// bne 0x8216cc28
	if (!cr0.eq) goto loc_8216CC28;
	// ori r11,r7,4
	r11.u64 = ctx.r7.u64 | 4;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3628
	ctx.r4.s64 = r11.s64 + -3628;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CC28:
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
	// beq 0x8216cc80
	if (cr0.eq) goto loc_8216CC80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r26,-100
	ctx.r4.s64 = r26.s64 + -100;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8216c580
	sub_8216C580(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8216cc7c
	if (cr6.eq) goto loc_8216CC7C;
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
	// beq 0x8216d17c
	if (cr0.eq) goto loc_8216D17C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8216cb6c
	goto loc_8216CB6C;
loc_8216CC7C:
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CC80:
	// rlwinm. r11,r7,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9132
	r29.s64 = r11.s64 + 9132;
	// bne 0x8216ccac
	if (!cr0.eq) goto loc_8216CCAC;
	// ori r11,r7,8
	r11.u64 = ctx.r7.u64 | 8;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3636
	ctx.r4.s64 = r11.s64 + -3636;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CCAC:
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
	// beq 0x8216cd24
	if (cr0.eq) goto loc_8216CD24;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r11,r26,-100
	r11.s64 = r26.s64 + -100;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8216cd1c
	if (cr6.eq) goto loc_8216CD1C;
	// rotlwi r30,r10,0
	r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
loc_8216CD1C:
	// stw r25,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r25.u32);
	// b 0x8216d178
	goto loc_8216D178;
loc_8216CD24:
	// rlwinm. r11,r7,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9128
	r29.s64 = r11.s64 + 9128;
	// bne 0x8216cd50
	if (!cr0.eq) goto loc_8216CD50;
	// ori r11,r7,16
	r11.u64 = ctx.r7.u64 | 16;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3660
	ctx.r4.s64 = r11.s64 + -3660;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CD50:
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
	// beq 0x8216cda4
	if (cr0.eq) goto loc_8216CDA4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r26,-100
	ctx.r4.s64 = r26.s64 + -100;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8216b588
	sub_8216B588(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8216cda4
	if (cr6.eq) goto loc_8216CDA4;
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
	// beq 0x8216d17c
	if (cr0.eq) goto loc_8216D17C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8216cb6c
	goto loc_8216CB6C;
loc_8216CDA4:
	// rlwinm. r11,r7,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9124
	r29.s64 = r11.s64 + 9124;
	// bne 0x8216cdd0
	if (!cr0.eq) goto loc_8216CDD0;
	// ori r11,r7,32
	r11.u64 = ctx.r7.u64 | 32;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3676
	ctx.r4.s64 = r11.s64 + -3676;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CDD0:
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
	// beq 0x8216ce24
	if (cr0.eq) goto loc_8216CE24;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r26,-100
	ctx.r4.s64 = r26.s64 + -100;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8216b5d8
	sub_8216B5D8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8216ce24
	if (cr6.eq) goto loc_8216CE24;
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
	// beq 0x8216d17c
	if (cr0.eq) goto loc_8216D17C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x8216cb6c
	goto loc_8216CB6C;
loc_8216CE24:
	// rlwinm. r11,r7,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9120
	r29.s64 = r11.s64 + 9120;
	// bne 0x8216ce50
	if (!cr0.eq) goto loc_8216CE50;
	// ori r11,r7,64
	r11.u64 = ctx.r7.u64 | 64;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3688
	ctx.r4.s64 = r11.s64 + -3688;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CE50:
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
	// beq 0x8216ceb4
	if (cr0.eq) goto loc_8216CEB4;
	// lwz r11,-48(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216ce7c
	if (cr0.eq) goto loc_8216CE7C;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// b 0x8216ce80
	goto loc_8216CE80;
loc_8216CE7C:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8216CE80:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216ce90
	if (!cr0.eq) goto loc_8216CE90;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x8216cea0
	goto loc_8216CEA0;
loc_8216CE90:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8216CEA0:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// b 0x8216d180
	goto loc_8216D180;
loc_8216CEB4:
	// rlwinm. r11,r7,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9116
	r29.s64 = r11.s64 + 9116;
	// bne 0x8216cee0
	if (!cr0.eq) goto loc_8216CEE0;
	// ori r11,r7,128
	r11.u64 = ctx.r7.u64 | 128;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3700
	ctx.r4.s64 = r11.s64 + -3700;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CEE0:
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
	// beq 0x8216cf30
	if (cr0.eq) goto loc_8216CF30;
	// lwz r11,-56(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216cf0c
	if (!cr0.eq) goto loc_8216CF0C;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x8216cf1c
	goto loc_8216CF1C;
loc_8216CF0C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8216CF1C:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// b 0x8216d180
	goto loc_8216D180;
loc_8216CF30:
	// rlwinm. r11,r7,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9112
	r29.s64 = r11.s64 + 9112;
	// bne 0x8216cf5c
	if (!cr0.eq) goto loc_8216CF5C;
	// ori r11,r7,256
	r11.u64 = ctx.r7.u64 | 256;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3712
	ctx.r4.s64 = r11.s64 + -3712;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CF5C:
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
	// beq 0x8216cfa0
	if (cr0.eq) goto loc_8216CFA0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x8216a8a0
	sub_8216A8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x8216a7a8
	sub_8216A7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r26,-100
	ctx.r3.s64 = r26.s64 + -100;
	// bl 0x8216c9e8
	sub_8216C9E8(ctx, base);
	// b 0x8216cd1c
	goto loc_8216CD1C;
loc_8216CFA0:
	// rlwinm. r11,r7,0,22,22
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9108
	r29.s64 = r11.s64 + 9108;
	// bne 0x8216cfcc
	if (!cr0.eq) goto loc_8216CFCC;
	// ori r11,r7,512
	r11.u64 = ctx.r7.u64 | 512;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3724
	ctx.r4.s64 = r11.s64 + -3724;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216CFCC:
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
	// beq 0x8216d004
	if (cr0.eq) goto loc_8216D004;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,-32(r26)
	PPC_STORE_U32(r26.u32 + -32, r11.u32);
	// b 0x8216cd1c
	goto loc_8216CD1C;
loc_8216D004:
	// rlwinm. r11,r7,0,21,21
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9104
	r29.s64 = r11.s64 + 9104;
	// bne 0x8216d030
	if (!cr0.eq) goto loc_8216D030;
	// ori r11,r7,1024
	r11.u64 = ctx.r7.u64 | 1024;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3740
	ctx.r4.s64 = r11.s64 + -3740;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216D030:
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
	// beq 0x8216d068
	if (cr0.eq) goto loc_8216D068;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r26,-100
	ctx.r3.s64 = r26.s64 + -100;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8216ae90
	sub_8216AE90(ctx, base);
	// b 0x8216cd1c
	goto loc_8216CD1C;
loc_8216D068:
	// rlwinm. r11,r7,0,20,20
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9100
	r29.s64 = r11.s64 + 9100;
	// bne 0x8216d094
	if (!cr0.eq) goto loc_8216D094;
	// ori r11,r7,2048
	r11.u64 = ctx.r7.u64 | 2048;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3752
	ctx.r4.s64 = r11.s64 + -3752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r7,9148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 9148);
loc_8216D094:
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
	// beq 0x8216d0cc
	if (cr0.eq) goto loc_8216D0CC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x8216a8f8
	sub_8216A8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r26,-100
	ctx.r3.s64 = r26.s64 + -100;
	// bl 0x8216aa18
	sub_8216AA18(ctx, base);
	// b 0x8216cd1c
	goto loc_8216CD1C;
loc_8216D0CC:
	// rlwinm. r11,r7,0,19,19
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,9096
	r29.s64 = r11.s64 + 9096;
	// bne 0x8216d0f4
	if (!cr0.eq) goto loc_8216D0F4;
	// ori r11,r7,4096
	r11.u64 = ctx.r7.u64 | 4096;
	// stw r11,9148(r30)
	PPC_STORE_U32(r30.u32 + 9148, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3760
	ctx.r4.s64 = r11.s64 + -3760;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8216D0F4:
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
	// beq 0x8216d124
	if (cr0.eq) goto loc_8216D124;
	// addi r3,r26,-100
	ctx.r3.s64 = r26.s64 + -100;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8216cd1c
	goto loc_8216CD1C;
loc_8216D124:
	// lwz r11,-92(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -92);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r4,r11,-92
	ctx.r4.s64 = r11.s64 + -92;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8216d170
	if (cr6.eq) goto loc_8216D170;
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
	// beq 0x8216d17c
	if (cr0.eq) goto loc_8216D17C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x8216cb6c
	goto loc_8216CB6C;
loc_8216D170:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_8216D178:
	// stw r25,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r25.u32);
loc_8216D17C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8216D180:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8216D18C"))) PPC_WEAK_FUNC(sub_8216D18C);
PPC_FUNC_IMPL(__imp__sub_8216D18C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9148
	r11.s64 = r11.s64 + 9148;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9148
	ctx.r10.s64 = ctx.r10.s64 + 9148;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D1B4"))) PPC_WEAK_FUNC(sub_8216D1B4);
PPC_FUNC_IMPL(__imp__sub_8216D1B4) {
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

__attribute__((alias("__imp__sub_8216D1DC"))) PPC_WEAK_FUNC(sub_8216D1DC);
PPC_FUNC_IMPL(__imp__sub_8216D1DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9148
	r11.s64 = r11.s64 + 9148;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9148
	ctx.r10.s64 = ctx.r10.s64 + 9148;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D204"))) PPC_WEAK_FUNC(sub_8216D204);
PPC_FUNC_IMPL(__imp__sub_8216D204) {
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

__attribute__((alias("__imp__sub_8216D22C"))) PPC_WEAK_FUNC(sub_8216D22C);
PPC_FUNC_IMPL(__imp__sub_8216D22C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9148
	r11.s64 = r11.s64 + 9148;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9148
	ctx.r10.s64 = ctx.r10.s64 + 9148;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D254"))) PPC_WEAK_FUNC(sub_8216D254);
PPC_FUNC_IMPL(__imp__sub_8216D254) {
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

__attribute__((alias("__imp__sub_8216D27C"))) PPC_WEAK_FUNC(sub_8216D27C);
PPC_FUNC_IMPL(__imp__sub_8216D27C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9148
	r11.s64 = r11.s64 + 9148;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9148
	ctx.r10.s64 = ctx.r10.s64 + 9148;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D2A4"))) PPC_WEAK_FUNC(sub_8216D2A4);
PPC_FUNC_IMPL(__imp__sub_8216D2A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9148
	r11.s64 = r11.s64 + 9148;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9148
	ctx.r10.s64 = ctx.r10.s64 + 9148;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D2CC"))) PPC_WEAK_FUNC(sub_8216D2CC);
PPC_FUNC_IMPL(__imp__sub_8216D2CC) {
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

__attribute__((alias("__imp__sub_8216D2F4"))) PPC_WEAK_FUNC(sub_8216D2F4);
PPC_FUNC_IMPL(__imp__sub_8216D2F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9148
	r11.s64 = r11.s64 + 9148;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9148
	ctx.r10.s64 = ctx.r10.s64 + 9148;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D31C"))) PPC_WEAK_FUNC(sub_8216D31C);
PPC_FUNC_IMPL(__imp__sub_8216D31C) {
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

__attribute__((alias("__imp__sub_8216D344"))) PPC_WEAK_FUNC(sub_8216D344);
PPC_FUNC_IMPL(__imp__sub_8216D344) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9148
	r11.s64 = r11.s64 + 9148;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9148
	ctx.r10.s64 = ctx.r10.s64 + 9148;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D36C"))) PPC_WEAK_FUNC(sub_8216D36C);
PPC_FUNC_IMPL(__imp__sub_8216D36C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9148
	r11.s64 = r11.s64 + 9148;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9148
	ctx.r10.s64 = ctx.r10.s64 + 9148;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D394"))) PPC_WEAK_FUNC(sub_8216D394);
PPC_FUNC_IMPL(__imp__sub_8216D394) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9148
	r11.s64 = r11.s64 + 9148;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9148
	ctx.r10.s64 = ctx.r10.s64 + 9148;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D3BC"))) PPC_WEAK_FUNC(sub_8216D3BC);
PPC_FUNC_IMPL(__imp__sub_8216D3BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9148
	r11.s64 = r11.s64 + 9148;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9148
	ctx.r10.s64 = ctx.r10.s64 + 9148;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D3E4"))) PPC_WEAK_FUNC(sub_8216D3E4);
PPC_FUNC_IMPL(__imp__sub_8216D3E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9148
	r11.s64 = r11.s64 + 9148;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9148
	ctx.r10.s64 = ctx.r10.s64 + 9148;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D40C"))) PPC_WEAK_FUNC(sub_8216D40C);
PPC_FUNC_IMPL(__imp__sub_8216D40C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9148
	r11.s64 = r11.s64 + 9148;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9148
	ctx.r10.s64 = ctx.r10.s64 + 9148;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D434"))) PPC_WEAK_FUNC(sub_8216D434);
PPC_FUNC_IMPL(__imp__sub_8216D434) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9148
	r11.s64 = r11.s64 + 9148;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9148
	ctx.r10.s64 = ctx.r10.s64 + 9148;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D45C"))) PPC_WEAK_FUNC(sub_8216D45C);
PPC_FUNC_IMPL(__imp__sub_8216D45C) {
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

__attribute__((alias("__imp__sub_8216D484"))) PPC_WEAK_FUNC(sub_8216D484);
PPC_FUNC_IMPL(__imp__sub_8216D484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216D488"))) PPC_WEAK_FUNC(sub_8216D488);
PPC_FUNC_IMPL(__imp__sub_8216D488) {
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
	// lwz r16,-2976(0)
	r16.u64 = PPC_LOAD_U32(-2976);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,9180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9180);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9176
	r29.s64 = ctx.r10.s64 + 9176;
	// bne 0x8216d4f4
	if (!cr0.eq) goto loc_8216D4F4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,9180(r30)
	PPC_STORE_U32(r30.u32 + 9180, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-11768
	ctx.r4.s64 = r11.s64 + -11768;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9180);
loc_8216D4F4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216d598
	if (cr0.eq) goto loc_8216D598;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x8216d548
	if (!cr6.eq) goto loc_8216D548;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82160c78
	sub_82160C78(ctx, base);
	// addi r30,r28,-100
	r30.s64 = r28.s64 + -100;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8216d590
	if (cr6.eq) goto loc_8216D590;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x82160bf0
	sub_82160BF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8216D540:
	// bl 0x8216c6c8
	sub_8216C6C8(ctx, base);
	// b 0x8216d590
	goto loc_8216D590;
loc_8216D548:
	// lwz r11,-64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -64);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216d564
	if (cr0.eq) goto loc_8216D564;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8216D564:
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
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
	// beq 0x8216d590
	if (cr0.eq) goto loc_8216D590;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8216D58C:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8216D590:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8216d93c
	goto loc_8216D93C;
loc_8216D598:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9172
	r29.s64 = ctx.r10.s64 + 9172;
	// bne 0x8216d5c4
	if (!cr0.eq) goto loc_8216D5C4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,9180(r30)
	PPC_STORE_U32(r30.u32 + 9180, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3080
	ctx.r4.s64 = r11.s64 + -3080;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9180);
loc_8216D5C4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216d68c
	if (cr0.eq) goto loc_8216D68C;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x8216d620
	if (!cr6.eq) goto loc_8216D620;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8216c010
	sub_8216C010(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,-100
	ctx.r3.s64 = r28.s64 + -100;
	// bl 0x8216c9e8
	sub_8216C9E8(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x8216d590
	goto loc_8216D590;
loc_8216D620:
	// lwz r11,-56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216d638
	if (cr0.eq) goto loc_8216D638;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
loc_8216D630:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x8216d64c
	goto loc_8216D64C;
loc_8216D638:
	// lwz r11,-52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216d630
	if (!cr0.eq) goto loc_8216D630;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-2080
	r11.s64 = r11.s64 + -2080;
loc_8216D64C:
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
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
	// beq 0x8216d590
	if (cr0.eq) goto loc_8216D590;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8216d58c
	goto loc_8216D58C;
loc_8216D68C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9168
	r29.s64 = ctx.r10.s64 + 9168;
	// bne 0x8216d6b8
	if (!cr0.eq) goto loc_8216D6B8;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,9180(r30)
	PPC_STORE_U32(r30.u32 + 9180, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3092
	ctx.r4.s64 = r11.s64 + -3092;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9180);
loc_8216D6B8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216d748
	if (cr0.eq) goto loc_8216D748;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x8216d700
	if (!cr6.eq) goto loc_8216D700;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8216a8a0
	sub_8216A8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8216a7a8
	sub_8216A7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,-100
	ctx.r3.s64 = r28.s64 + -100;
	// bl 0x8216c9e8
	sub_8216C9E8(ctx, base);
	// b 0x8216d590
	goto loc_8216D590;
loc_8216D700:
	// lwz r11,-56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216d71c
	if (cr0.eq) goto loc_8216D71C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8216D71C:
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r11,4
	r11.s64 = 4;
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
	// beq 0x8216d590
	if (cr0.eq) goto loc_8216D590;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8216d58c
	goto loc_8216D58C;
loc_8216D748:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9164
	r29.s64 = ctx.r10.s64 + 9164;
	// bne 0x8216d774
	if (!cr0.eq) goto loc_8216D774;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,9180(r30)
	PPC_STORE_U32(r30.u32 + 9180, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3100
	ctx.r4.s64 = r11.s64 + -3100;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9180);
loc_8216D774:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216d7a8
	if (cr0.eq) goto loc_8216D7A8;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,-16
	ctx.r3.s64 = r28.s64 + -16;
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x8216d93c
	goto loc_8216D93C;
loc_8216D7A8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9160
	r29.s64 = ctx.r10.s64 + 9160;
	// bne 0x8216d7d4
	if (!cr0.eq) goto loc_8216D7D4;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,9180(r30)
	PPC_STORE_U32(r30.u32 + 9180, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3104
	ctx.r4.s64 = r11.s64 + -3104;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9180);
loc_8216D7D4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216d85c
	if (cr0.eq) goto loc_8216D85C;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x8216d82c
	if (!cr6.eq) goto loc_8216D82C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r11,r28,-100
	r11.s64 = r28.s64 + -100;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// lbz r8,85(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 85);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x8216d590
	if (cr6.eq) goto loc_8216D590;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stb r10,85(r11)
	PPC_STORE_U8(r11.u32 + 85, ctx.r10.u8);
	// b 0x8216d540
	goto loc_8216D540;
loc_8216D82C:
	// lbz r11,-15(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + -15);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216d590
	if (cr0.eq) goto loc_8216D590;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8216d58c
	goto loc_8216D58C;
loc_8216D85C:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9156
	r29.s64 = ctx.r10.s64 + 9156;
	// bne 0x8216d888
	if (!cr0.eq) goto loc_8216D888;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,9180(r30)
	PPC_STORE_U32(r30.u32 + 9180, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3116
	ctx.r4.s64 = r11.s64 + -3116;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9180);
loc_8216D888:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216d8bc
	if (cr0.eq) goto loc_8216D8BC;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,-12
	ctx.r3.s64 = r28.s64 + -12;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x8216d93c
	goto loc_8216D93C;
loc_8216D8BC:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9152
	r29.s64 = ctx.r10.s64 + 9152;
	// bne 0x8216d8e4
	if (!cr0.eq) goto loc_8216D8E4;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,9180(r30)
	PPC_STORE_U32(r30.u32 + 9180, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3128
	ctx.r4.s64 = r11.s64 + -3128;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8216D8E4:
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
	// beq 0x8216d918
	if (cr0.eq) goto loc_8216D918;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,-44
	ctx.r3.s64 = r28.s64 + -44;
	// bl 0x8216b898
	sub_8216B898(ctx, base);
	// b 0x8216d93c
	goto loc_8216D93C;
loc_8216D918:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-68
	ctx.r3.s64 = r28.s64 + -68;
	// bl 0x8216a1f8
	sub_8216A1F8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_8216D93C:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8216D490"))) PPC_WEAK_FUNC(sub_8216D490);
PPC_FUNC_IMPL(__imp__sub_8216D490) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,9180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9180);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9176
	r29.s64 = ctx.r10.s64 + 9176;
	// bne 0x8216d4f4
	if (!cr0.eq) goto loc_8216D4F4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,9180(r30)
	PPC_STORE_U32(r30.u32 + 9180, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-11768
	ctx.r4.s64 = r11.s64 + -11768;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9180);
loc_8216D4F4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216d598
	if (cr0.eq) goto loc_8216D598;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x8216d548
	if (!cr6.eq) goto loc_8216D548;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82160c78
	sub_82160C78(ctx, base);
	// addi r30,r28,-100
	r30.s64 = r28.s64 + -100;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8216d590
	if (cr6.eq) goto loc_8216D590;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x82160bf0
	sub_82160BF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8216D540:
	// bl 0x8216c6c8
	sub_8216C6C8(ctx, base);
	// b 0x8216d590
	goto loc_8216D590;
loc_8216D548:
	// lwz r11,-64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -64);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216d564
	if (cr0.eq) goto loc_8216D564;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8216D564:
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
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
	// beq 0x8216d590
	if (cr0.eq) goto loc_8216D590;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8216D58C:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8216D590:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8216d93c
	goto loc_8216D93C;
loc_8216D598:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9172
	r29.s64 = ctx.r10.s64 + 9172;
	// bne 0x8216d5c4
	if (!cr0.eq) goto loc_8216D5C4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,9180(r30)
	PPC_STORE_U32(r30.u32 + 9180, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3080
	ctx.r4.s64 = r11.s64 + -3080;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9180);
loc_8216D5C4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216d68c
	if (cr0.eq) goto loc_8216D68C;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x8216d620
	if (!cr6.eq) goto loc_8216D620;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8216c010
	sub_8216C010(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,-100
	ctx.r3.s64 = r28.s64 + -100;
	// bl 0x8216c9e8
	sub_8216C9E8(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x8216d590
	goto loc_8216D590;
loc_8216D620:
	// lwz r11,-56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216d638
	if (cr0.eq) goto loc_8216D638;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
loc_8216D630:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x8216d64c
	goto loc_8216D64C;
loc_8216D638:
	// lwz r11,-52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216d630
	if (!cr0.eq) goto loc_8216D630;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-2080
	r11.s64 = r11.s64 + -2080;
loc_8216D64C:
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
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
	// beq 0x8216d590
	if (cr0.eq) goto loc_8216D590;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8216d58c
	goto loc_8216D58C;
loc_8216D68C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9168
	r29.s64 = ctx.r10.s64 + 9168;
	// bne 0x8216d6b8
	if (!cr0.eq) goto loc_8216D6B8;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,9180(r30)
	PPC_STORE_U32(r30.u32 + 9180, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3092
	ctx.r4.s64 = r11.s64 + -3092;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9180);
loc_8216D6B8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216d748
	if (cr0.eq) goto loc_8216D748;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x8216d700
	if (!cr6.eq) goto loc_8216D700;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8216a8a0
	sub_8216A8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8216a7a8
	sub_8216A7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,-100
	ctx.r3.s64 = r28.s64 + -100;
	// bl 0x8216c9e8
	sub_8216C9E8(ctx, base);
	// b 0x8216d590
	goto loc_8216D590;
loc_8216D700:
	// lwz r11,-56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216d71c
	if (cr0.eq) goto loc_8216D71C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8216D71C:
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r11,4
	r11.s64 = 4;
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
	// beq 0x8216d590
	if (cr0.eq) goto loc_8216D590;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8216d58c
	goto loc_8216D58C;
loc_8216D748:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9164
	r29.s64 = ctx.r10.s64 + 9164;
	// bne 0x8216d774
	if (!cr0.eq) goto loc_8216D774;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,9180(r30)
	PPC_STORE_U32(r30.u32 + 9180, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3100
	ctx.r4.s64 = r11.s64 + -3100;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9180);
loc_8216D774:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216d7a8
	if (cr0.eq) goto loc_8216D7A8;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,-16
	ctx.r3.s64 = r28.s64 + -16;
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x8216d93c
	goto loc_8216D93C;
loc_8216D7A8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9160
	r29.s64 = ctx.r10.s64 + 9160;
	// bne 0x8216d7d4
	if (!cr0.eq) goto loc_8216D7D4;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,9180(r30)
	PPC_STORE_U32(r30.u32 + 9180, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3104
	ctx.r4.s64 = r11.s64 + -3104;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9180);
loc_8216D7D4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216d85c
	if (cr0.eq) goto loc_8216D85C;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x8216d82c
	if (!cr6.eq) goto loc_8216D82C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r11,r28,-100
	r11.s64 = r28.s64 + -100;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// lbz r8,85(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 85);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x8216d590
	if (cr6.eq) goto loc_8216D590;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stb r10,85(r11)
	PPC_STORE_U8(r11.u32 + 85, ctx.r10.u8);
	// b 0x8216d540
	goto loc_8216D540;
loc_8216D82C:
	// lbz r11,-15(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + -15);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216d590
	if (cr0.eq) goto loc_8216D590;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8216d58c
	goto loc_8216D58C;
loc_8216D85C:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9156
	r29.s64 = ctx.r10.s64 + 9156;
	// bne 0x8216d888
	if (!cr0.eq) goto loc_8216D888;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,9180(r30)
	PPC_STORE_U32(r30.u32 + 9180, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3116
	ctx.r4.s64 = r11.s64 + -3116;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9180);
loc_8216D888:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216d8bc
	if (cr0.eq) goto loc_8216D8BC;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,-12
	ctx.r3.s64 = r28.s64 + -12;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x8216d93c
	goto loc_8216D93C;
loc_8216D8BC:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9152
	r29.s64 = ctx.r10.s64 + 9152;
	// bne 0x8216d8e4
	if (!cr0.eq) goto loc_8216D8E4;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,9180(r30)
	PPC_STORE_U32(r30.u32 + 9180, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3128
	ctx.r4.s64 = r11.s64 + -3128;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8216D8E4:
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
	// beq 0x8216d918
	if (cr0.eq) goto loc_8216D918;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,-44
	ctx.r3.s64 = r28.s64 + -44;
	// bl 0x8216b898
	sub_8216B898(ctx, base);
	// b 0x8216d93c
	goto loc_8216D93C;
loc_8216D918:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-68
	ctx.r3.s64 = r28.s64 + -68;
	// bl 0x8216a1f8
	sub_8216A1F8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_8216D93C:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8216D944"))) PPC_WEAK_FUNC(sub_8216D944);
PPC_FUNC_IMPL(__imp__sub_8216D944) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9180
	r11.s64 = r11.s64 + 9180;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9180
	ctx.r10.s64 = ctx.r10.s64 + 9180;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D96C"))) PPC_WEAK_FUNC(sub_8216D96C);
PPC_FUNC_IMPL(__imp__sub_8216D96C) {
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

__attribute__((alias("__imp__sub_8216D994"))) PPC_WEAK_FUNC(sub_8216D994);
PPC_FUNC_IMPL(__imp__sub_8216D994) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9180
	r11.s64 = r11.s64 + 9180;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9180
	ctx.r10.s64 = ctx.r10.s64 + 9180;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D9BC"))) PPC_WEAK_FUNC(sub_8216D9BC);
PPC_FUNC_IMPL(__imp__sub_8216D9BC) {
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

__attribute__((alias("__imp__sub_8216D9E4"))) PPC_WEAK_FUNC(sub_8216D9E4);
PPC_FUNC_IMPL(__imp__sub_8216D9E4) {
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

__attribute__((alias("__imp__sub_8216DA0C"))) PPC_WEAK_FUNC(sub_8216DA0C);
PPC_FUNC_IMPL(__imp__sub_8216DA0C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9180
	r11.s64 = r11.s64 + 9180;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9180
	ctx.r10.s64 = ctx.r10.s64 + 9180;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216DA34"))) PPC_WEAK_FUNC(sub_8216DA34);
PPC_FUNC_IMPL(__imp__sub_8216DA34) {
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

__attribute__((alias("__imp__sub_8216DA5C"))) PPC_WEAK_FUNC(sub_8216DA5C);
PPC_FUNC_IMPL(__imp__sub_8216DA5C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9180
	r11.s64 = r11.s64 + 9180;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9180
	ctx.r10.s64 = ctx.r10.s64 + 9180;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216DA84"))) PPC_WEAK_FUNC(sub_8216DA84);
PPC_FUNC_IMPL(__imp__sub_8216DA84) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9180
	r11.s64 = r11.s64 + 9180;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9180
	ctx.r10.s64 = ctx.r10.s64 + 9180;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216DAAC"))) PPC_WEAK_FUNC(sub_8216DAAC);
PPC_FUNC_IMPL(__imp__sub_8216DAAC) {
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

__attribute__((alias("__imp__sub_8216DAD4"))) PPC_WEAK_FUNC(sub_8216DAD4);
PPC_FUNC_IMPL(__imp__sub_8216DAD4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9180
	r11.s64 = r11.s64 + 9180;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9180
	ctx.r10.s64 = ctx.r10.s64 + 9180;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216DAFC"))) PPC_WEAK_FUNC(sub_8216DAFC);
PPC_FUNC_IMPL(__imp__sub_8216DAFC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9180
	r11.s64 = r11.s64 + 9180;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9180
	ctx.r10.s64 = ctx.r10.s64 + 9180;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216DB24"))) PPC_WEAK_FUNC(sub_8216DB24);
PPC_FUNC_IMPL(__imp__sub_8216DB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216DB28"))) PPC_WEAK_FUNC(sub_8216DB28);
PPC_FUNC_IMPL(__imp__sub_8216DB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8216d490
	sub_8216D490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216DB34"))) PPC_WEAK_FUNC(sub_8216DB34);
PPC_FUNC_IMPL(__imp__sub_8216DB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216DB38"))) PPC_WEAK_FUNC(sub_8216DB38);
PPC_FUNC_IMPL(__imp__sub_8216DB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8216cab0
	sub_8216CAB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216DB44"))) PPC_WEAK_FUNC(sub_8216DB44);
PPC_FUNC_IMPL(__imp__sub_8216DB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216DB48"))) PPC_WEAK_FUNC(sub_8216DB48);
PPC_FUNC_IMPL(__imp__sub_8216DB48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mflr r12
	// bl 0x8239bcf0
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d5e0
	// lfs f9,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x8216dc84
	if (cr6.eq) goto loc_8216DC84;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(f0.f64 * ctx.f9.f64));
	// lfs f10,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f4,f13,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// lfs f7,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f13,f7,f13,f9
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f10,f12,f8,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f9,f3,f0,f4
	ctx.f9.f64 = double(float(ctx.f3.f64 * f0.f64 + ctx.f4.f64));
	// fmadds f13,f12,f5,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f13.f64));
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmadds f0,f0,f6,f10
	f0.f64 = double(float(f0.f64 * ctx.f6.f64 + ctx.f10.f64));
	// stfs f0,8(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmadds f12,f12,f11,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f10,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(f0.f64 * ctx.f10.f64));
	// lfs f11,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f5,f13,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f8,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f13,f8,f13,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f11,f12,f9,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f10,f4,f0,f5
	ctx.f10.f64 = double(float(ctx.f4.f64 * f0.f64 + ctx.f5.f64));
	// fmadds f13,f12,f6,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f13.f64));
	// stfs f13,20(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// fmadds f0,f0,f7,f11
	f0.f64 = double(float(f0.f64 * ctx.f7.f64 + ctx.f11.f64));
	// stfs f0,24(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// fmadds f12,f12,f3,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f10.f64));
	// stfs f12,16(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	f0.f64 = double(temp.f32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(f0.f64 * ctx.f9.f64));
	// fmuls f5,f13,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f12,f11,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f13,f8,f13,f9
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f10,f4,f0,f5
	ctx.f10.f64 = double(float(ctx.f4.f64 * f0.f64 + ctx.f5.f64));
	// fmadds f0,f0,f7,f11
	f0.f64 = double(float(f0.f64 * ctx.f7.f64 + ctx.f11.f64));
	// stfs f0,40(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// fmadds f13,f12,f6,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f13.f64));
	// stfs f13,36(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// fmadds f12,f12,f3,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f10.f64));
	// stfs f12,32(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// b 0x8216ddcc
	goto loc_8216DDCC;
loc_8216DC84:
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	f0.f64 = double(temp.f32);
	// addi r11,r1,-160
	r11.s64 = ctx.r1.s64 + -160;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// fmuls f27,f13,f0
	f27.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f26,f9,f13
	f26.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// lfs f6,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r5,16
	ctx.r8.s64 = ctx.r5.s64 + 16;
	// lfs f3,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r7,r5,32
	ctx.r7.s64 = ctx.r5.s64 + 32;
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f28,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f28.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f29,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	f29.f64 = double(temp.f32);
	// fmadds f27,f11,f12,f27
	f27.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + f27.f64));
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f26,f8,f12,f26
	f26.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + f26.f64));
	// lfs f2,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f13,f6,f12,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfs f31,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f31.f64 = double(temp.f32);
	// lfs f30,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	f30.f64 = double(temp.f32);
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f10,f3,f27
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + f27.f64));
	// stfs f12,-160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// fmuls f27,f28,f10
	f27.f64 = double(float(f28.f64 * ctx.f10.f64));
	// fmadds f12,f7,f3,f26
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + f26.f64));
	// stfs f12,-156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// fmuls f26,f29,f8
	f26.f64 = double(float(f29.f64 * ctx.f8.f64));
	// fmadds f13,f5,f3,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f13.f64));
	// stfs f13,-152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * f0.f64));
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// fmuls f12,f31,f7
	ctx.f12.f64 = double(float(f31.f64 * ctx.f7.f64));
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// fmuls f3,f1,f6
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// fmuls f6,f29,f6
	ctx.f6.f64 = double(float(f29.f64 * ctx.f6.f64));
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// fmadds f0,f30,f0,f27
	f0.f64 = double(float(f30.f64 * f0.f64 + f27.f64));
	// stw r3,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// stw r29,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r29.u32);
	// fmadds f7,f28,f7,f26
	ctx.f7.f64 = double(float(f28.f64 * ctx.f7.f64 + f26.f64));
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r11.u32);
	// fmadds f13,f1,f11,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f12,f2,f9,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmadds f3,f31,f5,f3
	ctx.f3.f64 = double(float(f31.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fmadds f0,f29,f11,f0
	f0.f64 = double(float(f29.f64 * ctx.f11.f64 + f0.f64));
	// stfs f0,-128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// fmadds f0,f30,f9,f7
	f0.f64 = double(float(f30.f64 * ctx.f9.f64 + ctx.f7.f64));
	// stfs f0,-124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// fmadds f0,f28,f5,f6
	f0.f64 = double(float(f28.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmadds f13,f31,f10,f13
	ctx.f13.f64 = double(float(f31.f64 * ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,-144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// fmadds f13,f1,f8,f12
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f12.f64));
	// stfs f13,-140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// fmadds f13,f2,f4,f3
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f3.f64));
	// stfs f13,-136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r31,4(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r28,8(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// fmadds f0,f30,f4,f0
	f0.f64 = double(float(f30.f64 * ctx.f4.f64 + f0.f64));
	// stfs f0,-120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// lwz r30,0(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r27,4(r9)
	r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r31,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r31.u32);
	// lwz r26,8(r9)
	r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r28,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r28.u32);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r27,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r27.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// stw r26,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r26.u32);
	// stw r9,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r9.u32);
loc_8216DDCC:
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d62c
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8216DDD8"))) PPC_WEAK_FUNC(sub_8216DDD8);
PPC_FUNC_IMPL(__imp__sub_8216DDD8) {
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
	// stfs f0,104(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216DDF0"))) PPC_WEAK_FUNC(sub_8216DDF0);
PPC_FUNC_IMPL(__imp__sub_8216DDF0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,-2732(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -2732);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f12,76(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// lfs f0,-2736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -2736);
	f0.f64 = double(temp.f32);
	// bge cr6,0x8216de2c
	if (!cr6.lt) goto loc_8216DE2C;
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// b 0x8216de3c
	goto loc_8216DE3C;
loc_8216DE2C:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x8216de3c
	if (!cr6.gt) goto loc_8216DE3C;
	// stfs f0,76(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lfs f0,-2736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -2736);
	f0.f64 = double(temp.f32);
loc_8216DE3C:
	// lfs f12,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8216de50
	if (!cr6.lt) goto loc_8216DE50;
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// b 0x8216de5c
	goto loc_8216DE5C;
loc_8216DE50:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x8216de60
	if (!cr6.gt) goto loc_8216DE60;
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
loc_8216DE5C:
	// lfs f0,-2736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -2736);
	f0.f64 = double(temp.f32);
loc_8216DE60:
	// lfs f12,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8216de74
	if (!cr6.lt) goto loc_8216DE74;
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// b 0x8216de80
	goto loc_8216DE80;
loc_8216DE74:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x8216de84
	if (!cr6.gt) goto loc_8216DE84;
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
loc_8216DE80:
	// lfs f0,-2736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -2736);
	f0.f64 = double(temp.f32);
loc_8216DE84:
	// lfs f12,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8216de98
	if (!cr6.lt) goto loc_8216DE98;
	// stfs f13,88(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// b 0x8216dea4
	goto loc_8216DEA4;
loc_8216DE98:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x8216dea4
	if (!cr6.gt) goto loc_8216DEA4;
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
loc_8216DEA4:
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,76(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8216decc
	if (cr6.lt) goto loc_8216DECC;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8216DECC:
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8216defc
	if (cr6.lt) goto loc_8216DEFC;
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
loc_8216DEFC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// blt cr6,0x8216df14
	if (cr6.lt) goto loc_8216DF14;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8216DF14:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f31,-25404(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25404);
	f31.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x8239de90
	sub_8239DE90(ctx, base);
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// lfs f13,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// bl 0x8239d8c0
	sub_8239D8C0(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// lfs f12,128(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// fmuls f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,132(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// bl 0x8239d8c0
	sub_8239D8C0(ctx, base);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// lfs f12,128(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// fmuls f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,148(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// bl 0x8239d8c0
	sub_8239D8C0(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// lfs f12,128(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// fmuls f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,124(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// bl 0x8239d8c0
	sub_8239D8C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,128(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,140(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8216DFD4"))) PPC_WEAK_FUNC(sub_8216DFD4);
PPC_FUNC_IMPL(__imp__sub_8216DFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216DFD8"))) PPC_WEAK_FUNC(sub_8216DFD8);
PPC_FUNC_IMPL(__imp__sub_8216DFD8) {
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
	// lwz r16,-2720(0)
	r16.u64 = PPC_LOAD_U32(-2720);
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
	// lwz r11,-160(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -160);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,-160
	ctx.r4.s64 = r11.s64 + -160;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8216e064
	if (cr6.eq) goto loc_8216E064;
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
	// beq 0x8216e070
	if (cr0.eq) goto loc_8216E070;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8216e070
	goto loc_8216E070;
loc_8216E064:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_8216E070:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8216DFE0"))) PPC_WEAK_FUNC(sub_8216DFE0);
PPC_FUNC_IMPL(__imp__sub_8216DFE0) {
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
	// lwz r11,-160(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -160);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,-160
	ctx.r4.s64 = r11.s64 + -160;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8216e064
	if (cr6.eq) goto loc_8216E064;
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
	// beq 0x8216e070
	if (cr0.eq) goto loc_8216E070;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8216e070
	goto loc_8216E070;
loc_8216E064:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_8216E070:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8216E07C"))) PPC_WEAK_FUNC(sub_8216E07C);
PPC_FUNC_IMPL(__imp__sub_8216E07C) {
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

__attribute__((alias("__imp__sub_8216E0A4"))) PPC_WEAK_FUNC(sub_8216E0A4);
PPC_FUNC_IMPL(__imp__sub_8216E0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E0A8"))) PPC_WEAK_FUNC(sub_8216E0A8);
PPC_FUNC_IMPL(__imp__sub_8216E0A8) {
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
	// lwz r16,-2648(0)
	r16.u64 = PPC_LOAD_U32(-2648);
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
	// bne cr6,0x8216e118
	if (!cr6.eq) goto loc_8216E118;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216e0ec
	if (cr0.eq) goto loc_8216E0EC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8216E0EC:
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
	// beq 0x8216e150
	if (cr0.eq) goto loc_8216E150;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8216e150
	goto loc_8216E150;
loc_8216E118:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,1232
	r30.s64 = r11.s64 + 1232;
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
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
loc_8216E150:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8216E0B0"))) PPC_WEAK_FUNC(sub_8216E0B0);
PPC_FUNC_IMPL(__imp__sub_8216E0B0) {
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
	// bne cr6,0x8216e118
	if (!cr6.eq) goto loc_8216E118;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216e0ec
	if (cr0.eq) goto loc_8216E0EC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8216E0EC:
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
	// beq 0x8216e150
	if (cr0.eq) goto loc_8216E150;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8216e150
	goto loc_8216E150;
loc_8216E118:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,1232
	r30.s64 = r11.s64 + 1232;
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
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
loc_8216E150:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8216E15C"))) PPC_WEAK_FUNC(sub_8216E15C);
PPC_FUNC_IMPL(__imp__sub_8216E15C) {
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

__attribute__((alias("__imp__sub_8216E184"))) PPC_WEAK_FUNC(sub_8216E184);
PPC_FUNC_IMPL(__imp__sub_8216E184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E188"))) PPC_WEAK_FUNC(sub_8216E188);
PPC_FUNC_IMPL(__imp__sub_8216E188) {
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
	// lwz r16,-2464(0)
	r16.u64 = PPC_LOAD_U32(-2464);
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
	// addi r11,r11,-2492
	r11.s64 = r11.s64 + -2492;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-2516
	ctx.r10.s64 = ctx.r10.s64 + -2516;
	// addi r9,r9,-2580
	ctx.r9.s64 = ctx.r9.s64 + -2580;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-164(r30)
	PPC_STORE_U32(r30.u32 + -164, r11.u32);
	// lwz r11,-160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -160);
	// stw r10,-156(r30)
	PPC_STORE_U32(r30.u32 + -156, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-160(r11)
	PPC_STORE_U32(r11.u32 + -160, ctx.r9.u32);
	// lwz r11,-160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -160);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-160
	ctx.r10.s64 = r11.s64 + -160;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-164(r11)
	PPC_STORE_U32(r11.u32 + -164, ctx.r10.u32);
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r3,r30,-116
	ctx.r3.s64 = r30.s64 + -116;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r3,r30,-128
	ctx.r3.s64 = r30.s64 + -128;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addic. r11,r30,-164
	xer.ca = r30.u32 > 163;
	r11.s64 = r30.s64 + -164;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r30,-148
	r11.s64 = r30.s64 + -148;
	// bne 0x8216e21c
	if (!cr0.eq) goto loc_8216E21C;
	// li r11,0
	r11.s64 = 0;
loc_8216E21C:
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x821698c8
	sub_821698C8(ctx, base);
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

__attribute__((alias("__imp__sub_8216E190"))) PPC_WEAK_FUNC(sub_8216E190);
PPC_FUNC_IMPL(__imp__sub_8216E190) {
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
	// addi r11,r11,-2492
	r11.s64 = r11.s64 + -2492;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-2516
	ctx.r10.s64 = ctx.r10.s64 + -2516;
	// addi r9,r9,-2580
	ctx.r9.s64 = ctx.r9.s64 + -2580;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-164(r30)
	PPC_STORE_U32(r30.u32 + -164, r11.u32);
	// lwz r11,-160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -160);
	// stw r10,-156(r30)
	PPC_STORE_U32(r30.u32 + -156, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-160(r11)
	PPC_STORE_U32(r11.u32 + -160, ctx.r9.u32);
	// lwz r11,-160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -160);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-160
	ctx.r10.s64 = r11.s64 + -160;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-164(r11)
	PPC_STORE_U32(r11.u32 + -164, ctx.r10.u32);
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r3,r30,-116
	ctx.r3.s64 = r30.s64 + -116;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r3,r30,-128
	ctx.r3.s64 = r30.s64 + -128;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addic. r11,r30,-164
	xer.ca = r30.u32 > 163;
	r11.s64 = r30.s64 + -164;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r30,-148
	r11.s64 = r30.s64 + -148;
	// bne 0x8216e21c
	if (!cr0.eq) goto loc_8216E21C;
	// li r11,0
	r11.s64 = 0;
loc_8216E21C:
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x821698c8
	sub_821698C8(ctx, base);
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

__attribute__((alias("__imp__sub_8216E23C"))) PPC_WEAK_FUNC(sub_8216E23C);
PPC_FUNC_IMPL(__imp__sub_8216E23C) {
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
	// addic. r11,r11,-164
	xer.ca = r11.u32 > 163;
	r11.s64 = r11.s64 + -164;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216e26c
	if (cr0.eq) goto loc_8216E26C;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,-164
	r11.s64 = r11.s64 + -164;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x8216e274
	goto loc_8216E274;
loc_8216E26C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8216E274:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x8216a068
	sub_8216A068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216E290"))) PPC_WEAK_FUNC(sub_8216E290);
PPC_FUNC_IMPL(__imp__sub_8216E290) {
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
	// addi r11,r11,-164
	r11.s64 = r11.s64 + -164;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
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

__attribute__((alias("__imp__sub_8216E2C0"))) PPC_WEAK_FUNC(sub_8216E2C0);
PPC_FUNC_IMPL(__imp__sub_8216E2C0) {
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
	// addi r11,r11,-164
	r11.s64 = r11.s64 + -164;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
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

__attribute__((alias("__imp__sub_8216E2F0"))) PPC_WEAK_FUNC(sub_8216E2F0);
PPC_FUNC_IMPL(__imp__sub_8216E2F0) {
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
	// bl 0x8214d3f0
	sub_8214D3F0(ctx, base);
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

__attribute__((alias("__imp__sub_8216E320"))) PPC_WEAK_FUNC(sub_8216E320);
PPC_FUNC_IMPL(__imp__sub_8216E320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-124
	ctx.r3.s64 = ctx.r3.s64 + -124;
	// b 0x8216a090
	sub_8216A090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216E330"))) PPC_WEAK_FUNC(sub_8216E330);
PPC_FUNC_IMPL(__imp__sub_8216E330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8216e2f0
	sub_8216E2F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216E33C"))) PPC_WEAK_FUNC(sub_8216E33C);
PPC_FUNC_IMPL(__imp__sub_8216E33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E340"))) PPC_WEAK_FUNC(sub_8216E340);
PPC_FUNC_IMPL(__imp__sub_8216E340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8216f9c0
	sub_8216F9C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216E34C"))) PPC_WEAK_FUNC(sub_8216E34C);
PPC_FUNC_IMPL(__imp__sub_8216E34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E350"))) PPC_WEAK_FUNC(sub_8216E350);
PPC_FUNC_IMPL(__imp__sub_8216E350) {
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
	// lwz r16,-2384(0)
	r16.u64 = PPC_LOAD_U32(-2384);
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
	// lwz r11,9188(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9188);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8216e3d4
	if (!cr0.eq) goto loc_8216E3D4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,9188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9188, r11.u32);
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
	// bl 0x8214d3f0
	sub_8214D3F0(ctx, base);
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
	// stw r3,9184(r27)
	PPC_STORE_U32(r27.u32 + 9184, ctx.r3.u32);
	// b 0x8216e3d8
	goto loc_8216E3D8;
loc_8216E3D4:
	// lwz r3,9184(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 9184);
loc_8216E3D8:
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
	// beq 0x8216e414
	if (cr0.eq) goto loc_8216E414;
	// lwz r11,-160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -160);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-160
	ctx.r3.s64 = r11.s64 + -160;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8216e490
	goto loc_8216E490;
loc_8216E414:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8216e474
	if (!cr0.eq) goto loc_8216E474;
	// addic. r11,r30,-164
	xer.ca = r30.u32 > 163;
	r11.s64 = r30.s64 + -164;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8216e438
	if (!cr0.eq) goto loc_8216E438;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8216e448
	goto loc_8216E448;
loc_8216E438:
	// lwz r11,-160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -160);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-160
	ctx.r3.s64 = r11.s64 + -160;
loc_8216E448:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -160);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-160
	ctx.r4.s64 = r11.s64 + -160;
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
loc_8216E474:
	// lwz r11,-160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -160);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-160
	ctx.r3.s64 = r11.s64 + -160;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8216E490:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8216E358"))) PPC_WEAK_FUNC(sub_8216E358);
PPC_FUNC_IMPL(__imp__sub_8216E358) {
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
	// lwz r11,9188(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9188);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8216e3d4
	if (!cr0.eq) goto loc_8216E3D4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,9188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9188, r11.u32);
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
	// bl 0x8214d3f0
	sub_8214D3F0(ctx, base);
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
	// stw r3,9184(r27)
	PPC_STORE_U32(r27.u32 + 9184, ctx.r3.u32);
	// b 0x8216e3d8
	goto loc_8216E3D8;
loc_8216E3D4:
	// lwz r3,9184(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 9184);
loc_8216E3D8:
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
	// beq 0x8216e414
	if (cr0.eq) goto loc_8216E414;
	// lwz r11,-160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -160);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-160
	ctx.r3.s64 = r11.s64 + -160;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8216e490
	goto loc_8216E490;
loc_8216E414:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8216e474
	if (!cr0.eq) goto loc_8216E474;
	// addic. r11,r30,-164
	xer.ca = r30.u32 > 163;
	r11.s64 = r30.s64 + -164;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8216e438
	if (!cr0.eq) goto loc_8216E438;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8216e448
	goto loc_8216E448;
loc_8216E438:
	// lwz r11,-160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -160);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-160
	ctx.r3.s64 = r11.s64 + -160;
loc_8216E448:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -160);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-160
	ctx.r4.s64 = r11.s64 + -160;
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
loc_8216E474:
	// lwz r11,-160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -160);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-160
	ctx.r3.s64 = r11.s64 + -160;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8216E490:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8216E49C"))) PPC_WEAK_FUNC(sub_8216E49C);
PPC_FUNC_IMPL(__imp__sub_8216E49C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9188
	r11.s64 = r11.s64 + 9188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9188
	ctx.r10.s64 = ctx.r10.s64 + 9188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216E4C4"))) PPC_WEAK_FUNC(sub_8216E4C4);
PPC_FUNC_IMPL(__imp__sub_8216E4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E4C8"))) PPC_WEAK_FUNC(sub_8216E4C8);
PPC_FUNC_IMPL(__imp__sub_8216E4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8216dfe0
	sub_8216DFE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216E4D4"))) PPC_WEAK_FUNC(sub_8216E4D4);
PPC_FUNC_IMPL(__imp__sub_8216E4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E4D8"))) PPC_WEAK_FUNC(sub_8216E4D8);
PPC_FUNC_IMPL(__imp__sub_8216E4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8216e358
	sub_8216E358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216E4E4"))) PPC_WEAK_FUNC(sub_8216E4E4);
PPC_FUNC_IMPL(__imp__sub_8216E4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E4E8"))) PPC_WEAK_FUNC(sub_8216E4E8);
PPC_FUNC_IMPL(__imp__sub_8216E4E8) {
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
	// bl 0x8239d5e4
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,60(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi r28,0
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8216ea30
	if (cr0.eq) goto loc_8216EA30;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8216ea30
	if (cr6.eq) goto loc_8216EA30;
	// addi r11,r31,-8
	r11.s64 = r31.s64 + -8;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8216e530
	if (cr6.eq) goto loc_8216E530;
	// addi r11,r11,36
	r11.s64 = r11.s64 + 36;
	// b 0x8216e534
	goto loc_8216E534;
loc_8216E530:
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
loc_8216E534:
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	f0.f64 = double(temp.f32);
	// lfs f12,48(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, f31.f64);
	// lfs f11,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 - f0.f64));
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r27,r11,-5056
	r27.s64 = r11.s64 + -5056;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f28,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f28.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f27,-25364(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25364);
	f27.f64 = double(temp.f32);
	// lfs f29,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f29.f64 = double(temp.f32);
	// blt cr6,0x8216e6c0
	if (cr6.lt) goto loc_8216E6C0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// fmadds f12,f0,f0,f12
	ctx.f12.f64 = double(float(f0.f64 * f0.f64 + ctx.f12.f64));
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lfs f11,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fsqrts f10,f12
	ctx.f10.f64 = double(float(sqrt(ctx.f12.f64)));
	// lfs f12,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f9
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fsqrts f13,f11
	ctx.f13.f64 = double(float(sqrt(ctx.f11.f64)));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// ble cr6,0x8216e628
	if (!cr6.gt) goto loc_8216E628;
	// fmr f0,f29
	f0.f64 = f29.f64;
	// b 0x8216e634
	goto loc_8216E634;
loc_8216E628:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f27.f64);
	// bge cr6,0x8216e634
	if (!cr6.lt) goto loc_8216E634;
	// fmr f0,f27
	f0.f64 = f27.f64;
loc_8216E634:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// bl 0x8239ddb8
	sub_8239DDB8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// lfs f12,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 - ctx.f12.f64));
	// lfs f13,-12484(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12484);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fdivs f30,f0,f12
	f30.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fcmpu cr6,f30,f29
	cr6.compare(f30.f64, f29.f64);
	// ble cr6,0x8216e670
	if (!cr6.gt) goto loc_8216E670;
	// fmr f30,f29
	f30.f64 = f29.f64;
	// b 0x8216e67c
	goto loc_8216E67C;
loc_8216E670:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f31.f64);
	// bge cr6,0x8216e67c
	if (!cr6.lt) goto loc_8216E67C;
	// fmr f30,f31
	f30.f64 = f31.f64;
loc_8216E67C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82311970
	sub_82311970(ctx, base);
	// lfs f13,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f30,f13
	f0.f64 = double(float(f30.f64 - ctx.f13.f64));
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	f0.f64 = double(float(f0.f64 / ctx.f1.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x8216e6a8
	if (!cr6.lt) goto loc_8216E6A8;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8216e6ac
	goto loc_8216E6AC;
loc_8216E6A8:
	// li r11,0
	r11.s64 = 0;
loc_8216E6AC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216e6b8
	if (cr0.eq) goto loc_8216E6B8;
	// fmadds f30,f0,f1,f13
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
loc_8216E6B8:
	// stfs f30,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// fmuls f28,f30,f28
	f28.f64 = double(float(f30.f64 * f28.f64));
loc_8216E6C0:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f28.f64, f31.f64);
	// beq cr6,0x8216ea30
	if (cr6.eq) goto loc_8216EA30;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x8216e6e4
	if (!cr6.eq) goto loc_8216E6E4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// b 0x8216e818
	goto loc_8216E818;
loc_8216E6E4:
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r1,176
	r30.s64 = ctx.r1.s64 + 176;
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8226a448
	sub_8226A448(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8226a190
	sub_8226A190(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8216db48
	sub_8216DB48(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x821af870
	sub_821AF870(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r28,60(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// lfs f12,48(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r1,176
	r30.s64 = ctx.r1.s64 + 176;
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f10,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8226a448
	sub_8226A448(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8226a190
	sub_8226A190(ctx, base);
	// lfs f13,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f7,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f13,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f0,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	f0.f64 = double(temp.f32);
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f11.f64));
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f10,f0,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f9.f64));
	// fmadds f0,f0,f8,f7
	f0.f64 = double(float(f0.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f12,f6,f13,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f12,f5,f13,f10
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f0,f11,f13,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8216E818:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f11,f10,f0,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f11.f64));
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f8,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f11,f9,f13,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f11,f8,f0,f10
	ctx.f11.f64 = double(float(ctx.f8.f64 * f0.f64 + ctx.f10.f64));
	// fmadds f12,f7,f0,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * f0.f64 + ctx.f12.f64));
	// fmadds f0,f6,f13,f11
	f0.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f13,f5,f13,f12
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8226be50
	sub_8226BE50(ctx, base);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x8216e8f8
	if (cr6.eq) goto loc_8216E8F8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82311970
	sub_82311970(ctx, base);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	f0.f64 = double(float(f0.f64 + ctx.f1.f64));
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fdivs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 / f0.f64));
	// bl 0x82122100
	sub_82122100(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
loc_8216E8F8:
	// lbz r11,149(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 149);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216e96c
	if (cr0.eq) goto loc_8216E96C;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x8226a448
	sub_8226A448(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// stfs f29,108(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82269cc8
	sub_82269CC8(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8226a190
	sub_8226A190(ctx, base);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r5,r30,28
	ctx.r5.s64 = r30.s64 + 28;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x8216db48
	sub_8216DB48(ctx, base);
	// b 0x8216ea30
	goto loc_8216EA30;
loc_8216E96C:
	// lwz r31,48(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82122100
	sub_82122100(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f27,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f31,36(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f31,40(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// lfs f12,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	f0.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f0,f13,f0,f8
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 - ctx.f8.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fmsubs f12,f9,f12,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fmsubs f13,f10,f11,f7
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f7.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
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
loc_8216EA30:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d630
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8216EA40"))) PPC_WEAK_FUNC(sub_8216EA40);
PPC_FUNC_IMPL(__imp__sub_8216EA40) {
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
	// li r11,3
	r11.s64 = 3;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
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
	// lwz r11,-160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -160);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-160
	ctx.r3.s64 = r11.s64 + -160;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-124
	ctx.r3.s64 = r31.s64 + -124;
	// bl 0x8216a120
	sub_8216A120(ctx, base);
	// addi r4,r31,-128
	ctx.r4.s64 = r31.s64 + -128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213e3e8
	sub_8213E3E8(ctx, base);
	// addi r4,r31,-116
	ctx.r4.s64 = r31.s64 + -116;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213e3e8
	sub_8213E3E8(ctx, base);
	// addi r4,r31,-104
	ctx.r4.s64 = r31.s64 + -104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213e3e8
	sub_8213E3E8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -92);
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -88);
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -84);
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -80);
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -76);
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -72);
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -68);
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -64);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lbz r11,-7(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -7);
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

__attribute__((alias("__imp__sub_8216EBAC"))) PPC_WEAK_FUNC(sub_8216EBAC);
PPC_FUNC_IMPL(__imp__sub_8216EBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216EBB0"))) PPC_WEAK_FUNC(sub_8216EBB0);
PPC_FUNC_IMPL(__imp__sub_8216EBB0) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r11,9192
	r29.s64 = r11.s64 + 9192;
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
	// lwz r11,-160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -160);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-160
	ctx.r3.s64 = r11.s64 + -160;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-124
	ctx.r3.s64 = r31.s64 + -124;
	// bl 0x8216a190
	sub_8216A190(ctx, base);
	// addi r4,r31,-128
	ctx.r4.s64 = r31.s64 + -128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// addi r4,r31,-116
	ctx.r4.s64 = r31.s64 + -116;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// addi r4,r31,-104
	ctx.r4.s64 = r31.s64 + -104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-92
	ctx.r4.s64 = r31.s64 + -92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-88
	ctx.r4.s64 = r31.s64 + -88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-84
	ctx.r4.s64 = r31.s64 + -84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-80
	ctx.r4.s64 = r31.s64 + -80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-76
	ctx.r4.s64 = r31.s64 + -76;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8216ecb4
	if (!cr6.gt) goto loc_8216ECB4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-72
	ctx.r4.s64 = r31.s64 + -72;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-68
	ctx.r4.s64 = r31.s64 + -68;
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
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8216ECB4:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x8216ecc8
	if (!cr6.lt) goto loc_8216ECC8;
	// li r11,1
	r11.s64 = 1;
	// stb r11,-7(r31)
	PPC_STORE_U8(r31.u32 + -7, r11.u8);
	// b 0x8216ecd4
	goto loc_8216ECD4;
loc_8216ECC8:
	// addi r4,r31,-7
	ctx.r4.s64 = r31.s64 + -7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
loc_8216ECD4:
	// addi r3,r31,-164
	ctx.r3.s64 = r31.s64 + -164;
	// bl 0x8216ddf0
	sub_8216DDF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216ECE4"))) PPC_WEAK_FUNC(sub_8216ECE4);
PPC_FUNC_IMPL(__imp__sub_8216ECE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216ECE8"))) PPC_WEAK_FUNC(sub_8216ECE8);
PPC_FUNC_IMPL(__imp__sub_8216ECE8) {
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
	// lwz r16,-2040(0)
	r16.u64 = PPC_LOAD_U32(-2040);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9244
	r29.s64 = ctx.r10.s64 + 9244;
	// bne 0x8216ed54
	if (!cr0.eq) goto loc_8216ED54;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2184
	ctx.r4.s64 = r11.s64 + -2184;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216ED54:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216ed88
	if (cr0.eq) goto loc_8216ED88;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-128
	ctx.r3.s64 = r28.s64 + -128;
loc_8216ED80:
	// bl 0x8216e0b0
	sub_8216E0B0(ctx, base);
	// b 0x8216f2f0
	goto loc_8216F2F0;
loc_8216ED88:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9240
	r29.s64 = ctx.r10.s64 + 9240;
	// bne 0x8216edb4
	if (!cr0.eq) goto loc_8216EDB4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2192
	ctx.r4.s64 = r11.s64 + -2192;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216EDB4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216ede4
	if (cr0.eq) goto loc_8216EDE4;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-116
	ctx.r3.s64 = r28.s64 + -116;
	// b 0x8216ed80
	goto loc_8216ED80;
loc_8216EDE4:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9236
	r29.s64 = ctx.r10.s64 + 9236;
	// bne 0x8216ee10
	if (!cr0.eq) goto loc_8216EE10;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-10280
	ctx.r4.s64 = r11.s64 + -10280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216EE10:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216ee40
	if (cr0.eq) goto loc_8216EE40;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-104
	ctx.r3.s64 = r28.s64 + -104;
	// b 0x8216ed80
	goto loc_8216ED80;
loc_8216EE40:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9232
	r29.s64 = ctx.r10.s64 + 9232;
	// bne 0x8216ee6c
	if (!cr0.eq) goto loc_8216EE6C;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2204
	ctx.r4.s64 = r11.s64 + -2204;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216EE6C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216eea0
	if (cr0.eq) goto loc_8216EEA0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-92
	ctx.r3.s64 = r28.s64 + -92;
loc_8216EE98:
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x8216f2f0
	goto loc_8216F2F0;
loc_8216EEA0:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9228
	r29.s64 = ctx.r10.s64 + 9228;
	// bne 0x8216eecc
	if (!cr0.eq) goto loc_8216EECC;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2212
	ctx.r4.s64 = r11.s64 + -2212;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216EECC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216ef44
	if (cr0.eq) goto loc_8216EF44;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8216ef0c
	if (!cr6.eq) goto loc_8216EF0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r30,r28,-164
	r30.s64 = r28.s64 + -164;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
loc_8216EF00:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216ddf0
	sub_8216DDF0(ctx, base);
	// b 0x8216ef3c
	goto loc_8216EF3C;
loc_8216EF0C:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-88(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -88);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
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
	// beq 0x8216ef3c
	if (cr0.eq) goto loc_8216EF3C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8216EF38:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8216EF3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8216f2f0
	goto loc_8216F2F0;
loc_8216EF44:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9224
	r29.s64 = ctx.r10.s64 + 9224;
	// bne 0x8216ef70
	if (!cr0.eq) goto loc_8216EF70;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2220
	ctx.r4.s64 = r11.s64 + -2220;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216EF70:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216efd8
	if (cr0.eq) goto loc_8216EFD8;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8216efa8
	if (!cr6.eq) goto loc_8216EFA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r30,r28,-164
	r30.s64 = r28.s64 + -164;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// b 0x8216ef00
	goto loc_8216EF00;
loc_8216EFA8:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-84(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -84);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216ef3c
	if (cr0.eq) goto loc_8216EF3C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8216ef38
	goto loc_8216EF38;
loc_8216EFD8:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9220
	r29.s64 = ctx.r10.s64 + 9220;
	// bne 0x8216f004
	if (!cr0.eq) goto loc_8216F004;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2232
	ctx.r4.s64 = r11.s64 + -2232;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216F004:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216f06c
	if (cr0.eq) goto loc_8216F06C;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8216f03c
	if (!cr6.eq) goto loc_8216F03C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r30,r28,-164
	r30.s64 = r28.s64 + -164;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 84, temp.u32);
	// b 0x8216ef00
	goto loc_8216EF00;
loc_8216F03C:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-80(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -80);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216ef3c
	if (cr0.eq) goto loc_8216EF3C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8216ef38
	goto loc_8216EF38;
loc_8216F06C:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9216
	r29.s64 = ctx.r10.s64 + 9216;
	// bne 0x8216f098
	if (!cr0.eq) goto loc_8216F098;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2244
	ctx.r4.s64 = r11.s64 + -2244;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216F098:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216f100
	if (cr0.eq) goto loc_8216F100;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8216f0d0
	if (!cr6.eq) goto loc_8216F0D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r30,r28,-164
	r30.s64 = r28.s64 + -164;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// b 0x8216ef00
	goto loc_8216EF00;
loc_8216F0D0:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-76(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -76);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216ef3c
	if (cr0.eq) goto loc_8216EF3C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8216ef38
	goto loc_8216EF38;
loc_8216F100:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9212
	r29.s64 = ctx.r10.s64 + 9212;
	// bne 0x8216f12c
	if (!cr0.eq) goto loc_8216F12C;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2260
	ctx.r4.s64 = r11.s64 + -2260;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216F12C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216f15c
	if (cr0.eq) goto loc_8216F15C;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-72
	ctx.r3.s64 = r28.s64 + -72;
	// b 0x8216ee98
	goto loc_8216EE98;
loc_8216F15C:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9208
	r29.s64 = ctx.r10.s64 + 9208;
	// bne 0x8216f188
	if (!cr0.eq) goto loc_8216F188;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2276
	ctx.r4.s64 = r11.s64 + -2276;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216F188:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216f1b8
	if (cr0.eq) goto loc_8216F1B8;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-68
	ctx.r3.s64 = r28.s64 + -68;
	// b 0x8216ee98
	goto loc_8216EE98;
loc_8216F1B8:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9204
	r29.s64 = ctx.r10.s64 + 9204;
	// bne 0x8216f1e4
	if (!cr0.eq) goto loc_8216F1E4;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2296
	ctx.r4.s64 = r11.s64 + -2296;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216F1E4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216f214
	if (cr0.eq) goto loc_8216F214;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-64
	ctx.r3.s64 = r28.s64 + -64;
	// b 0x8216ee98
	goto loc_8216EE98;
loc_8216F214:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9200
	r29.s64 = ctx.r10.s64 + 9200;
	// bne 0x8216f240
	if (!cr0.eq) goto loc_8216F240;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2308
	ctx.r4.s64 = r11.s64 + -2308;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216F240:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216f274
	if (cr0.eq) goto loc_8216F274;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-7
	ctx.r3.s64 = r28.s64 + -7;
loc_8216F26C:
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x8216f2f0
	goto loc_8216F2F0;
loc_8216F274:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9196
	r29.s64 = ctx.r10.s64 + 9196;
	// bne 0x8216f29c
	if (!cr0.eq) goto loc_8216F29C;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2320
	ctx.r4.s64 = r11.s64 + -2320;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8216F29C:
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
	// beq 0x8216f2cc
	if (cr0.eq) goto loc_8216F2CC;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-8
	ctx.r3.s64 = r28.s64 + -8;
	// b 0x8216f26c
	goto loc_8216F26C;
loc_8216F2CC:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-124
	ctx.r3.s64 = r28.s64 + -124;
	// bl 0x8216a1f8
	sub_8216A1F8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_8216F2F0:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8216ECF0"))) PPC_WEAK_FUNC(sub_8216ECF0);
PPC_FUNC_IMPL(__imp__sub_8216ECF0) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9244
	r29.s64 = ctx.r10.s64 + 9244;
	// bne 0x8216ed54
	if (!cr0.eq) goto loc_8216ED54;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2184
	ctx.r4.s64 = r11.s64 + -2184;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216ED54:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216ed88
	if (cr0.eq) goto loc_8216ED88;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-128
	ctx.r3.s64 = r28.s64 + -128;
loc_8216ED80:
	// bl 0x8216e0b0
	sub_8216E0B0(ctx, base);
	// b 0x8216f2f0
	goto loc_8216F2F0;
loc_8216ED88:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9240
	r29.s64 = ctx.r10.s64 + 9240;
	// bne 0x8216edb4
	if (!cr0.eq) goto loc_8216EDB4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2192
	ctx.r4.s64 = r11.s64 + -2192;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216EDB4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216ede4
	if (cr0.eq) goto loc_8216EDE4;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-116
	ctx.r3.s64 = r28.s64 + -116;
	// b 0x8216ed80
	goto loc_8216ED80;
loc_8216EDE4:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9236
	r29.s64 = ctx.r10.s64 + 9236;
	// bne 0x8216ee10
	if (!cr0.eq) goto loc_8216EE10;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-10280
	ctx.r4.s64 = r11.s64 + -10280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216EE10:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216ee40
	if (cr0.eq) goto loc_8216EE40;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-104
	ctx.r3.s64 = r28.s64 + -104;
	// b 0x8216ed80
	goto loc_8216ED80;
loc_8216EE40:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9232
	r29.s64 = ctx.r10.s64 + 9232;
	// bne 0x8216ee6c
	if (!cr0.eq) goto loc_8216EE6C;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2204
	ctx.r4.s64 = r11.s64 + -2204;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216EE6C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216eea0
	if (cr0.eq) goto loc_8216EEA0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-92
	ctx.r3.s64 = r28.s64 + -92;
loc_8216EE98:
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x8216f2f0
	goto loc_8216F2F0;
loc_8216EEA0:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9228
	r29.s64 = ctx.r10.s64 + 9228;
	// bne 0x8216eecc
	if (!cr0.eq) goto loc_8216EECC;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2212
	ctx.r4.s64 = r11.s64 + -2212;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216EECC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216ef44
	if (cr0.eq) goto loc_8216EF44;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8216ef0c
	if (!cr6.eq) goto loc_8216EF0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r30,r28,-164
	r30.s64 = r28.s64 + -164;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
loc_8216EF00:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216ddf0
	sub_8216DDF0(ctx, base);
	// b 0x8216ef3c
	goto loc_8216EF3C;
loc_8216EF0C:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-88(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -88);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
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
	// beq 0x8216ef3c
	if (cr0.eq) goto loc_8216EF3C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8216EF38:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8216EF3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8216f2f0
	goto loc_8216F2F0;
loc_8216EF44:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9224
	r29.s64 = ctx.r10.s64 + 9224;
	// bne 0x8216ef70
	if (!cr0.eq) goto loc_8216EF70;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2220
	ctx.r4.s64 = r11.s64 + -2220;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216EF70:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216efd8
	if (cr0.eq) goto loc_8216EFD8;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8216efa8
	if (!cr6.eq) goto loc_8216EFA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r30,r28,-164
	r30.s64 = r28.s64 + -164;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// b 0x8216ef00
	goto loc_8216EF00;
loc_8216EFA8:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-84(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -84);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216ef3c
	if (cr0.eq) goto loc_8216EF3C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8216ef38
	goto loc_8216EF38;
loc_8216EFD8:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9220
	r29.s64 = ctx.r10.s64 + 9220;
	// bne 0x8216f004
	if (!cr0.eq) goto loc_8216F004;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2232
	ctx.r4.s64 = r11.s64 + -2232;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216F004:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216f06c
	if (cr0.eq) goto loc_8216F06C;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8216f03c
	if (!cr6.eq) goto loc_8216F03C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r30,r28,-164
	r30.s64 = r28.s64 + -164;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 84, temp.u32);
	// b 0x8216ef00
	goto loc_8216EF00;
loc_8216F03C:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-80(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -80);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216ef3c
	if (cr0.eq) goto loc_8216EF3C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8216ef38
	goto loc_8216EF38;
loc_8216F06C:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9216
	r29.s64 = ctx.r10.s64 + 9216;
	// bne 0x8216f098
	if (!cr0.eq) goto loc_8216F098;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2244
	ctx.r4.s64 = r11.s64 + -2244;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216F098:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216f100
	if (cr0.eq) goto loc_8216F100;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8216f0d0
	if (!cr6.eq) goto loc_8216F0D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r30,r28,-164
	r30.s64 = r28.s64 + -164;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// b 0x8216ef00
	goto loc_8216EF00;
loc_8216F0D0:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-76(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -76);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216ef3c
	if (cr0.eq) goto loc_8216EF3C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8216ef38
	goto loc_8216EF38;
loc_8216F100:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9212
	r29.s64 = ctx.r10.s64 + 9212;
	// bne 0x8216f12c
	if (!cr0.eq) goto loc_8216F12C;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2260
	ctx.r4.s64 = r11.s64 + -2260;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216F12C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216f15c
	if (cr0.eq) goto loc_8216F15C;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-72
	ctx.r3.s64 = r28.s64 + -72;
	// b 0x8216ee98
	goto loc_8216EE98;
loc_8216F15C:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9208
	r29.s64 = ctx.r10.s64 + 9208;
	// bne 0x8216f188
	if (!cr0.eq) goto loc_8216F188;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2276
	ctx.r4.s64 = r11.s64 + -2276;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216F188:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216f1b8
	if (cr0.eq) goto loc_8216F1B8;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-68
	ctx.r3.s64 = r28.s64 + -68;
	// b 0x8216ee98
	goto loc_8216EE98;
loc_8216F1B8:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9204
	r29.s64 = ctx.r10.s64 + 9204;
	// bne 0x8216f1e4
	if (!cr0.eq) goto loc_8216F1E4;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2296
	ctx.r4.s64 = r11.s64 + -2296;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216F1E4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216f214
	if (cr0.eq) goto loc_8216F214;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-64
	ctx.r3.s64 = r28.s64 + -64;
	// b 0x8216ee98
	goto loc_8216EE98;
loc_8216F214:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9200
	r29.s64 = ctx.r10.s64 + 9200;
	// bne 0x8216f240
	if (!cr0.eq) goto loc_8216F240;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2308
	ctx.r4.s64 = r11.s64 + -2308;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,9248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 9248);
loc_8216F240:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8216f274
	if (cr0.eq) goto loc_8216F274;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-7
	ctx.r3.s64 = r28.s64 + -7;
loc_8216F26C:
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x8216f2f0
	goto loc_8216F2F0;
loc_8216F274:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,9196
	r29.s64 = ctx.r10.s64 + 9196;
	// bne 0x8216f29c
	if (!cr0.eq) goto loc_8216F29C;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,9248(r30)
	PPC_STORE_U32(r30.u32 + 9248, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-2320
	ctx.r4.s64 = r11.s64 + -2320;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8216F29C:
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
	// beq 0x8216f2cc
	if (cr0.eq) goto loc_8216F2CC;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-8
	ctx.r3.s64 = r28.s64 + -8;
	// b 0x8216f26c
	goto loc_8216F26C;
loc_8216F2CC:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-124
	ctx.r3.s64 = r28.s64 + -124;
	// bl 0x8216a1f8
	sub_8216A1F8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_8216F2F0:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8216F2F8"))) PPC_WEAK_FUNC(sub_8216F2F8);
PPC_FUNC_IMPL(__imp__sub_8216F2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9248
	r11.s64 = r11.s64 + 9248;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9248
	ctx.r10.s64 = ctx.r10.s64 + 9248;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216F320"))) PPC_WEAK_FUNC(sub_8216F320);
PPC_FUNC_IMPL(__imp__sub_8216F320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9248
	r11.s64 = r11.s64 + 9248;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9248
	ctx.r10.s64 = ctx.r10.s64 + 9248;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216F348"))) PPC_WEAK_FUNC(sub_8216F348);
PPC_FUNC_IMPL(__imp__sub_8216F348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9248
	r11.s64 = r11.s64 + 9248;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9248
	ctx.r10.s64 = ctx.r10.s64 + 9248;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216F370"))) PPC_WEAK_FUNC(sub_8216F370);
PPC_FUNC_IMPL(__imp__sub_8216F370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9248
	r11.s64 = r11.s64 + 9248;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9248
	ctx.r10.s64 = ctx.r10.s64 + 9248;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216F398"))) PPC_WEAK_FUNC(sub_8216F398);
PPC_FUNC_IMPL(__imp__sub_8216F398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9248
	r11.s64 = r11.s64 + 9248;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9248
	ctx.r10.s64 = ctx.r10.s64 + 9248;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216F3C0"))) PPC_WEAK_FUNC(sub_8216F3C0);
PPC_FUNC_IMPL(__imp__sub_8216F3C0) {
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

__attribute__((alias("__imp__sub_8216F3E8"))) PPC_WEAK_FUNC(sub_8216F3E8);
PPC_FUNC_IMPL(__imp__sub_8216F3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9248
	r11.s64 = r11.s64 + 9248;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9248
	ctx.r10.s64 = ctx.r10.s64 + 9248;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216F410"))) PPC_WEAK_FUNC(sub_8216F410);
PPC_FUNC_IMPL(__imp__sub_8216F410) {
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

__attribute__((alias("__imp__sub_8216F438"))) PPC_WEAK_FUNC(sub_8216F438);
PPC_FUNC_IMPL(__imp__sub_8216F438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9248
	r11.s64 = r11.s64 + 9248;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9248
	ctx.r10.s64 = ctx.r10.s64 + 9248;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216F460"))) PPC_WEAK_FUNC(sub_8216F460);
PPC_FUNC_IMPL(__imp__sub_8216F460) {
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

__attribute__((alias("__imp__sub_8216F488"))) PPC_WEAK_FUNC(sub_8216F488);
PPC_FUNC_IMPL(__imp__sub_8216F488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9248
	r11.s64 = r11.s64 + 9248;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9248
	ctx.r10.s64 = ctx.r10.s64 + 9248;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216F4B0"))) PPC_WEAK_FUNC(sub_8216F4B0);
PPC_FUNC_IMPL(__imp__sub_8216F4B0) {
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

__attribute__((alias("__imp__sub_8216F4D8"))) PPC_WEAK_FUNC(sub_8216F4D8);
PPC_FUNC_IMPL(__imp__sub_8216F4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9248
	r11.s64 = r11.s64 + 9248;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9248
	ctx.r10.s64 = ctx.r10.s64 + 9248;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216F500"))) PPC_WEAK_FUNC(sub_8216F500);
PPC_FUNC_IMPL(__imp__sub_8216F500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9248
	r11.s64 = r11.s64 + 9248;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9248
	ctx.r10.s64 = ctx.r10.s64 + 9248;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216F528"))) PPC_WEAK_FUNC(sub_8216F528);
PPC_FUNC_IMPL(__imp__sub_8216F528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9248
	r11.s64 = r11.s64 + 9248;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9248
	ctx.r10.s64 = ctx.r10.s64 + 9248;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216F550"))) PPC_WEAK_FUNC(sub_8216F550);
PPC_FUNC_IMPL(__imp__sub_8216F550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9248
	r11.s64 = r11.s64 + 9248;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9248
	ctx.r10.s64 = ctx.r10.s64 + 9248;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216F578"))) PPC_WEAK_FUNC(sub_8216F578);
PPC_FUNC_IMPL(__imp__sub_8216F578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,9248
	r11.s64 = r11.s64 + 9248;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,9248
	ctx.r10.s64 = ctx.r10.s64 + 9248;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216F5A0"))) PPC_WEAK_FUNC(sub_8216F5A0);
PPC_FUNC_IMPL(__imp__sub_8216F5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8216ecf0
	sub_8216ECF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216F5AC"))) PPC_WEAK_FUNC(sub_8216F5AC);
PPC_FUNC_IMPL(__imp__sub_8216F5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216F5B0"))) PPC_WEAK_FUNC(sub_8216F5B0);
PPC_FUNC_IMPL(__imp__sub_8216F5B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8216ea40
	sub_8216EA40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216F5BC"))) PPC_WEAK_FUNC(sub_8216F5BC);
PPC_FUNC_IMPL(__imp__sub_8216F5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216F5C0"))) PPC_WEAK_FUNC(sub_8216F5C0);
PPC_FUNC_IMPL(__imp__sub_8216F5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8216ebb0
	sub_8216EBB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216F5CC"))) PPC_WEAK_FUNC(sub_8216F5CC);
PPC_FUNC_IMPL(__imp__sub_8216F5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216F5D0"))) PPC_WEAK_FUNC(sub_8216F5D0);
PPC_FUNC_IMPL(__imp__sub_8216F5D0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,-1640(0)
	r16.u64 = PPC_LOAD_U32(-1640);
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
	// beq cr6,0x8216f634
	if (cr6.eq) goto loc_8216F634;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-1704
	r11.s64 = r11.s64 + -1704;
	// addi r10,r10,-1712
	ctx.r10.s64 = ctx.r10.s64 + -1712;
	// addi r9,r9,-1720
	ctx.r9.s64 = ctx.r9.s64 + -1720;
	// addi r3,r30,164
	ctx.r3.s64 = r30.s64 + 164;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
loc_8216F634:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,5260
	r11.s64 = r11.s64 + 5260;
	// addi r10,r10,5196
	ctx.r10.s64 = ctx.r10.s64 + 5196;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
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
	// bl 0x82169db0
	sub_82169DB0(ctx, base);
	// addi r28,r30,8
	r28.s64 = r30.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821609d0
	sub_821609D0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-2492
	r11.s64 = r11.s64 + -2492;
	// addi r10,r10,-2516
	ctx.r10.s64 = ctx.r10.s64 + -2516;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r9,r9,-2580
	ctx.r9.s64 = ctx.r9.s64 + -2580;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-160
	ctx.r10.s64 = r11.s64 + -160;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-20968
	r11.s64 = r11.s64 + -20968;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r10.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-2732(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2732);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,-2736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2736);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,-25364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25364);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,29188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29188);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f13,76(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
	// stfs f13,84(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 84, temp.u32);
	// stfs f0,72(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 72, temp.u32);
	// stfs f12,80(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// stfs f12,88(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// stfs f11,92(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 92, temp.u32);
	// stfs f11,96(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 96, temp.u32);
	// stfs f10,100(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 100, temp.u32);
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,104(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 104, temp.u32);
	// stfs f0,108(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 108, temp.u32);
	// stfs f0,112(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 112, temp.u32);
	// stb r29,156(r30)
	PPC_STORE_U8(r30.u32 + 156, r29.u8);
	// stfs f13,120(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 120, temp.u32);
	// stb r27,157(r30)
	PPC_STORE_U8(r30.u32 + 157, r27.u8);
	// bl 0x8216ddf0
	sub_8216DDF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8216F5D8"))) PPC_WEAK_FUNC(sub_8216F5D8);
PPC_FUNC_IMPL(__imp__sub_8216F5D8) {
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
	// beq cr6,0x8216f634
	if (cr6.eq) goto loc_8216F634;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-1704
	r11.s64 = r11.s64 + -1704;
	// addi r10,r10,-1712
	ctx.r10.s64 = ctx.r10.s64 + -1712;
	// addi r9,r9,-1720
	ctx.r9.s64 = ctx.r9.s64 + -1720;
	// addi r3,r30,164
	ctx.r3.s64 = r30.s64 + 164;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
loc_8216F634:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,5260
	r11.s64 = r11.s64 + 5260;
	// addi r10,r10,5196
	ctx.r10.s64 = ctx.r10.s64 + 5196;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
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
	// bl 0x82169db0
	sub_82169DB0(ctx, base);
	// addi r28,r30,8
	r28.s64 = r30.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821609d0
	sub_821609D0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-2492
	r11.s64 = r11.s64 + -2492;
	// addi r10,r10,-2516
	ctx.r10.s64 = ctx.r10.s64 + -2516;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r9,r9,-2580
	ctx.r9.s64 = ctx.r9.s64 + -2580;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-160
	ctx.r10.s64 = r11.s64 + -160;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-20968
	r11.s64 = r11.s64 + -20968;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r10.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-2732(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2732);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,-2736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2736);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,-25364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25364);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,29188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29188);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f13,76(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
	// stfs f13,84(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 84, temp.u32);
	// stfs f0,72(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 72, temp.u32);
	// stfs f12,80(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// stfs f12,88(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// stfs f11,92(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 92, temp.u32);
	// stfs f11,96(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 96, temp.u32);
	// stfs f10,100(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 100, temp.u32);
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,104(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 104, temp.u32);
	// stfs f0,108(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 108, temp.u32);
	// stfs f0,112(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 112, temp.u32);
	// stb r29,156(r30)
	PPC_STORE_U8(r30.u32 + 156, r29.u8);
	// stfs f13,120(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 120, temp.u32);
	// stb r27,157(r30)
	PPC_STORE_U8(r30.u32 + 157, r27.u8);
	// bl 0x8216ddf0
	sub_8216DDF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8216F78C"))) PPC_WEAK_FUNC(sub_8216F78C);
PPC_FUNC_IMPL(__imp__sub_8216F78C) {
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
	// beq 0x8216f7c0
	if (cr0.eq) goto loc_8216F7C0;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,164
	ctx.r3.s64 = r11.s64 + 164;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_8216F7C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216F7D0"))) PPC_WEAK_FUNC(sub_8216F7D0);
PPC_FUNC_IMPL(__imp__sub_8216F7D0) {
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
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x8216a068
	sub_8216A068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216F7FC"))) PPC_WEAK_FUNC(sub_8216F7FC);
PPC_FUNC_IMPL(__imp__sub_8216F7FC) {
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

__attribute__((alias("__imp__sub_8216F824"))) PPC_WEAK_FUNC(sub_8216F824);
PPC_FUNC_IMPL(__imp__sub_8216F824) {
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
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
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

__attribute__((alias("__imp__sub_8216F850"))) PPC_WEAK_FUNC(sub_8216F850);
PPC_FUNC_IMPL(__imp__sub_8216F850) {
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

__attribute__((alias("__imp__sub_8216F878"))) PPC_WEAK_FUNC(sub_8216F878);
PPC_FUNC_IMPL(__imp__sub_8216F878) {
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
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
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

__attribute__((alias("__imp__sub_8216F8A4"))) PPC_WEAK_FUNC(sub_8216F8A4);
PPC_FUNC_IMPL(__imp__sub_8216F8A4) {
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
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
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

__attribute__((alias("__imp__sub_8216F8CC"))) PPC_WEAK_FUNC(sub_8216F8CC);
PPC_FUNC_IMPL(__imp__sub_8216F8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216F8D0"))) PPC_WEAK_FUNC(sub_8216F8D0);
PPC_FUNC_IMPL(__imp__sub_8216F8D0) {
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
	// lwz r11,-160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -160);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-160
	ctx.r3.s64 = r11.s64 + -160;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-124
	ctx.r3.s64 = r31.s64 + -124;
	// bl 0x8216a3e0
	sub_8216A3E0(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,6584
	ctx.r6.s64 = r11.s64 + 6584;
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
	// beq 0x8216f9a0
	if (cr0.eq) goto loc_8216F9A0;
	// addi r3,r31,-128
	ctx.r3.s64 = r31.s64 + -128;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// addi r3,r31,-116
	ctx.r3.s64 = r31.s64 + -116;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// addi r3,r31,-104
	ctx.r3.s64 = r31.s64 + -104;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// lfs f0,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 72);
	f0.f64 = double(temp.f32);
	// stfs f0,-92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -92, temp.u32);
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 76);
	f0.f64 = double(temp.f32);
	// stfs f0,-88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -88, temp.u32);
	// lfs f0,80(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,-84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -84, temp.u32);
	// lfs f0,84(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,-80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -80, temp.u32);
	// lfs f0,88(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,-76(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -76, temp.u32);
	// lfs f0,92(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 92);
	f0.f64 = double(temp.f32);
	// stfs f0,-72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -72, temp.u32);
	// lfs f0,96(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,-68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -68, temp.u32);
	// lfs f0,100(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 100);
	f0.f64 = double(temp.f32);
	// stfs f0,-64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -64, temp.u32);
	// lbz r11,157(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 157);
	// stb r11,-7(r31)
	PPC_STORE_U8(r31.u32 + -7, r11.u8);
loc_8216F9A0:
	// addi r3,r31,-164
	ctx.r3.s64 = r31.s64 + -164;
	// bl 0x8216ddf0
	sub_8216DDF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216F9B0"))) PPC_WEAK_FUNC(sub_8216F9B0);
PPC_FUNC_IMPL(__imp__sub_8216F9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8216f8d0
	sub_8216F8D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216F9BC"))) PPC_WEAK_FUNC(sub_8216F9BC);
PPC_FUNC_IMPL(__imp__sub_8216F9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216F9C0"))) PPC_WEAK_FUNC(sub_8216F9C0);
PPC_FUNC_IMPL(__imp__sub_8216F9C0) {
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
	// addi r30,r3,-164
	r30.s64 = ctx.r3.s64 + -164;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,164
	r31.s64 = r30.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216e190
	sub_8216E190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8216f9f8
	if (cr0.eq) goto loc_8216F9F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_8216F9F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216FA04"))) PPC_WEAK_FUNC(sub_8216FA04);
PPC_FUNC_IMPL(__imp__sub_8216FA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216FA08"))) PPC_WEAK_FUNC(sub_8216FA08);
PPC_FUNC_IMPL(__imp__sub_8216FA08) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r11,r31,-8
	r11.s64 = r31.s64 + -8;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8216fa34
	if (cr6.eq) goto loc_8216FA34;
	// addi r11,r11,36
	r11.s64 = r11.s64 + 36;
	// b 0x8216fa38
	goto loc_8216FA38;
loc_8216FA34:
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
loc_8216FA38:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216fa50
	if (!cr0.eq) goto loc_8216FA50;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// b 0x8216fa64
	goto loc_8216FA64;
loc_8216FA50:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_8216FA64:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821529c0
	sub_821529C0(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8216fa8c
	if (!cr0.eq) goto loc_8216FA8C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// b 0x8216faa0
	goto loc_8216FAA0;
loc_8216FA8C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_8216FAA0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821529c0
	sub_821529C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216FAC0"))) PPC_WEAK_FUNC(sub_8216FAC0);
PPC_FUNC_IMPL(__imp__sub_8216FAC0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216fafc
	if (cr0.eq) goto loc_8216FAFC;
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
loc_8216FAFC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// beq cr6,0x8216fb20
	if (cr6.eq) goto loc_8216FB20;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_8216FB20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8216FB28"))) PPC_WEAK_FUNC(sub_8216FB28);
PPC_FUNC_IMPL(__imp__sub_8216FB28) {
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216fb68
	if (cr0.eq) goto loc_8216FB68;
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
loc_8216FB68:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8216fba4
	if (!cr6.eq) goto loc_8216FBA4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8216fb94
	if (cr0.eq) goto loc_8216FB94;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8216fb98
	goto loc_8216FB98;
loc_8216FB94:
	// li r11,0
	r11.s64 = 0;
loc_8216FB98:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x8216fbf4
	goto loc_8216FBF4;
loc_8216FBA4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x8216fbd8
	if (!cr6.eq) goto loc_8216FBD8;
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
	// b 0x8216fbf4
	goto loc_8216FBF4;
loc_8216FBD8:
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
loc_8216FBF4:
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

__attribute__((alias("__imp__sub_8216FC18"))) PPC_WEAK_FUNC(sub_8216FC18);
PPC_FUNC_IMPL(__imp__sub_8216FC18) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8216fc54
	if (cr0.eq) goto loc_8216FC54;
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
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_8216FC54:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x8216fc8c
	if (!cr6.eq) goto loc_8216FC8C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8216fc80
	if (cr6.eq) goto loc_8216FC80;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// b 0x8216fc84
	goto loc_8216FC84;
loc_8216FC80:
	// stw r31,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r31.u32);
loc_8216FC84:
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// b 0x8216fcc8
	goto loc_8216FCC8;
loc_8216FC8C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8216fcb4
	if (!cr6.eq) goto loc_8216FCB4;
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
	// b 0x8216fcc8
	goto loc_8216FCC8;
loc_8216FCB4:
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
loc_8216FCC8:
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

__attribute__((alias("__imp__sub_8216FCDC"))) PPC_WEAK_FUNC(sub_8216FCDC);
PPC_FUNC_IMPL(__imp__sub_8216FCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

