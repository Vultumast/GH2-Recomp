#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821E2DB0"))) PPC_WEAK_FUNC(sub_821E2DB0);
PPC_FUNC_IMPL(__imp__sub_821E2DB0) {
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
	// bl 0x821e1330
	sub_821E1330(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e2df8
	if (cr0.eq) goto loc_821E2DF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822053f8
	sub_822053F8(ctx, base);
	// b 0x821e2dfc
	goto loc_821E2DFC;
loc_821E2DF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E2DFC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e2e14
	if (cr6.eq) goto loc_821E2E14;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E2E14:
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

__attribute__((alias("__imp__sub_821E2E28"))) PPC_WEAK_FUNC(sub_821E2E28);
PPC_FUNC_IMPL(__imp__sub_821E2E28) {
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

__attribute__((alias("__imp__sub_821E2E50"))) PPC_WEAK_FUNC(sub_821E2E50);
PPC_FUNC_IMPL(__imp__sub_821E2E50) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,1672(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 1672);
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
	// bl 0x821e13b8
	sub_821E13B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,312
	ctx.r3.s64 = 312;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e2ea0
	if (cr0.eq) goto loc_821E2EA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8220deb0
	sub_8220DEB0(ctx, base);
	// b 0x821e2ea4
	goto loc_821E2EA4;
loc_821E2EA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E2EA4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e2ebc
	if (cr6.eq) goto loc_821E2EBC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E2EBC:
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

__attribute__((alias("__imp__sub_821E2E58"))) PPC_WEAK_FUNC(sub_821E2E58);
PPC_FUNC_IMPL(__imp__sub_821E2E58) {
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
	// bl 0x821e13b8
	sub_821E13B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,312
	ctx.r3.s64 = 312;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e2ea0
	if (cr0.eq) goto loc_821E2EA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8220deb0
	sub_8220DEB0(ctx, base);
	// b 0x821e2ea4
	goto loc_821E2EA4;
loc_821E2EA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E2EA4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e2ebc
	if (cr6.eq) goto loc_821E2EBC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E2EBC:
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

__attribute__((alias("__imp__sub_821E2ED0"))) PPC_WEAK_FUNC(sub_821E2ED0);
PPC_FUNC_IMPL(__imp__sub_821E2ED0) {
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

__attribute__((alias("__imp__sub_821E2EF8"))) PPC_WEAK_FUNC(sub_821E2EF8);
PPC_FUNC_IMPL(__imp__sub_821E2EF8) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,1728(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 1728);
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
	// bl 0x821e1440
	sub_821E1440(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,160
	ctx.r3.s64 = 160;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e2f48
	if (cr0.eq) goto loc_821E2F48;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822033f8
	sub_822033F8(ctx, base);
	// b 0x821e2f4c
	goto loc_821E2F4C;
loc_821E2F48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E2F4C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e2f64
	if (cr6.eq) goto loc_821E2F64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E2F64:
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

__attribute__((alias("__imp__sub_821E2F00"))) PPC_WEAK_FUNC(sub_821E2F00);
PPC_FUNC_IMPL(__imp__sub_821E2F00) {
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
	// bl 0x821e1440
	sub_821E1440(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,160
	ctx.r3.s64 = 160;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e2f48
	if (cr0.eq) goto loc_821E2F48;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822033f8
	sub_822033F8(ctx, base);
	// b 0x821e2f4c
	goto loc_821E2F4C;
loc_821E2F48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E2F4C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e2f64
	if (cr6.eq) goto loc_821E2F64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E2F64:
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

__attribute__((alias("__imp__sub_821E2F78"))) PPC_WEAK_FUNC(sub_821E2F78);
PPC_FUNC_IMPL(__imp__sub_821E2F78) {
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

__attribute__((alias("__imp__sub_821E2FA0"))) PPC_WEAK_FUNC(sub_821E2FA0);
PPC_FUNC_IMPL(__imp__sub_821E2FA0) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,1784(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 1784);
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
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e2ff0
	if (cr0.eq) goto loc_821E2FF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8220e940
	sub_8220E940(ctx, base);
	// b 0x821e2ff4
	goto loc_821E2FF4;
loc_821E2FF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E2FF4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e300c
	if (cr6.eq) goto loc_821E300C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E300C:
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

__attribute__((alias("__imp__sub_821E2FA8"))) PPC_WEAK_FUNC(sub_821E2FA8);
PPC_FUNC_IMPL(__imp__sub_821E2FA8) {
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
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e2ff0
	if (cr0.eq) goto loc_821E2FF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8220e940
	sub_8220E940(ctx, base);
	// b 0x821e2ff4
	goto loc_821E2FF4;
loc_821E2FF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E2FF4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e300c
	if (cr6.eq) goto loc_821E300C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E300C:
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

__attribute__((alias("__imp__sub_821E3020"))) PPC_WEAK_FUNC(sub_821E3020);
PPC_FUNC_IMPL(__imp__sub_821E3020) {
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

__attribute__((alias("__imp__sub_821E3048"))) PPC_WEAK_FUNC(sub_821E3048);
PPC_FUNC_IMPL(__imp__sub_821E3048) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,1840(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 1840);
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
	// bl 0x821223e8
	sub_821223E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,128
	ctx.r3.s64 = 128;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3098
	if (cr0.eq) goto loc_821E3098;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821b5920
	sub_821B5920(ctx, base);
	// b 0x821e309c
	goto loc_821E309C;
loc_821E3098:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E309C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e30b4
	if (cr6.eq) goto loc_821E30B4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E30B4:
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

__attribute__((alias("__imp__sub_821E3050"))) PPC_WEAK_FUNC(sub_821E3050);
PPC_FUNC_IMPL(__imp__sub_821E3050) {
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
	// bl 0x821223e8
	sub_821223E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,128
	ctx.r3.s64 = 128;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3098
	if (cr0.eq) goto loc_821E3098;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821b5920
	sub_821B5920(ctx, base);
	// b 0x821e309c
	goto loc_821E309C;
loc_821E3098:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E309C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e30b4
	if (cr6.eq) goto loc_821E30B4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E30B4:
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

__attribute__((alias("__imp__sub_821E30C8"))) PPC_WEAK_FUNC(sub_821E30C8);
PPC_FUNC_IMPL(__imp__sub_821E30C8) {
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

__attribute__((alias("__imp__sub_821E30F0"))) PPC_WEAK_FUNC(sub_821E30F0);
PPC_FUNC_IMPL(__imp__sub_821E30F0) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,1896(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 1896);
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
	// bl 0x821e1550
	sub_821E1550(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,288
	ctx.r3.s64 = 288;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3140
	if (cr0.eq) goto loc_821E3140;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82210d90
	sub_82210D90(ctx, base);
	// b 0x821e3144
	goto loc_821E3144;
loc_821E3140:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3144:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e315c
	if (cr6.eq) goto loc_821E315C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E315C:
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

__attribute__((alias("__imp__sub_821E30F8"))) PPC_WEAK_FUNC(sub_821E30F8);
PPC_FUNC_IMPL(__imp__sub_821E30F8) {
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
	// bl 0x821e1550
	sub_821E1550(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,288
	ctx.r3.s64 = 288;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3140
	if (cr0.eq) goto loc_821E3140;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82210d90
	sub_82210D90(ctx, base);
	// b 0x821e3144
	goto loc_821E3144;
loc_821E3140:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3144:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e315c
	if (cr6.eq) goto loc_821E315C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E315C:
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

__attribute__((alias("__imp__sub_821E3170"))) PPC_WEAK_FUNC(sub_821E3170);
PPC_FUNC_IMPL(__imp__sub_821E3170) {
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

__attribute__((alias("__imp__sub_821E3198"))) PPC_WEAK_FUNC(sub_821E3198);
PPC_FUNC_IMPL(__imp__sub_821E3198) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,1952(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 1952);
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
	// bl 0x821e15d8
	sub_821E15D8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,316
	ctx.r3.s64 = 316;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e31e8
	if (cr0.eq) goto loc_821E31E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821f9be8
	sub_821F9BE8(ctx, base);
	// b 0x821e31ec
	goto loc_821E31EC;
loc_821E31E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E31EC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e3204
	if (cr6.eq) goto loc_821E3204;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E3204:
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

__attribute__((alias("__imp__sub_821E31A0"))) PPC_WEAK_FUNC(sub_821E31A0);
PPC_FUNC_IMPL(__imp__sub_821E31A0) {
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
	// bl 0x821e15d8
	sub_821E15D8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,316
	ctx.r3.s64 = 316;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e31e8
	if (cr0.eq) goto loc_821E31E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821f9be8
	sub_821F9BE8(ctx, base);
	// b 0x821e31ec
	goto loc_821E31EC;
loc_821E31E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E31EC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e3204
	if (cr6.eq) goto loc_821E3204;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E3204:
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

__attribute__((alias("__imp__sub_821E3218"))) PPC_WEAK_FUNC(sub_821E3218);
PPC_FUNC_IMPL(__imp__sub_821E3218) {
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

__attribute__((alias("__imp__sub_821E3240"))) PPC_WEAK_FUNC(sub_821E3240);
PPC_FUNC_IMPL(__imp__sub_821E3240) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2008(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2008);
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
	// bl 0x821e1660
	sub_821E1660(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,112
	ctx.r3.s64 = 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3290
	if (cr0.eq) goto loc_821E3290;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821f43f0
	sub_821F43F0(ctx, base);
	// b 0x821e3294
	goto loc_821E3294;
loc_821E3290:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3294:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e32ac
	if (cr6.eq) goto loc_821E32AC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E32AC:
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

__attribute__((alias("__imp__sub_821E3248"))) PPC_WEAK_FUNC(sub_821E3248);
PPC_FUNC_IMPL(__imp__sub_821E3248) {
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
	// bl 0x821e1660
	sub_821E1660(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,112
	ctx.r3.s64 = 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3290
	if (cr0.eq) goto loc_821E3290;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821f43f0
	sub_821F43F0(ctx, base);
	// b 0x821e3294
	goto loc_821E3294;
loc_821E3290:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3294:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e32ac
	if (cr6.eq) goto loc_821E32AC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E32AC:
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

__attribute__((alias("__imp__sub_821E32C0"))) PPC_WEAK_FUNC(sub_821E32C0);
PPC_FUNC_IMPL(__imp__sub_821E32C0) {
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

__attribute__((alias("__imp__sub_821E32E8"))) PPC_WEAK_FUNC(sub_821E32E8);
PPC_FUNC_IMPL(__imp__sub_821E32E8) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2064(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2064);
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
	// li r3,756
	ctx.r3.s64 = 756;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3338
	if (cr0.eq) goto loc_821E3338;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82214c78
	sub_82214C78(ctx, base);
	// b 0x821e333c
	goto loc_821E333C;
loc_821E3338:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E333C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e3354
	if (cr6.eq) goto loc_821E3354;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E3354:
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

__attribute__((alias("__imp__sub_821E32F0"))) PPC_WEAK_FUNC(sub_821E32F0);
PPC_FUNC_IMPL(__imp__sub_821E32F0) {
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
	// li r3,756
	ctx.r3.s64 = 756;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3338
	if (cr0.eq) goto loc_821E3338;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82214c78
	sub_82214C78(ctx, base);
	// b 0x821e333c
	goto loc_821E333C;
loc_821E3338:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E333C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e3354
	if (cr6.eq) goto loc_821E3354;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E3354:
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

__attribute__((alias("__imp__sub_821E3368"))) PPC_WEAK_FUNC(sub_821E3368);
PPC_FUNC_IMPL(__imp__sub_821E3368) {
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

__attribute__((alias("__imp__sub_821E3390"))) PPC_WEAK_FUNC(sub_821E3390);
PPC_FUNC_IMPL(__imp__sub_821E3390) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2120(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2120);
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
	// bl 0x821e1770
	sub_821E1770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,392
	ctx.r3.s64 = 392;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e33e0
	if (cr0.eq) goto loc_821E33E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82218a18
	sub_82218A18(ctx, base);
	// b 0x821e33e4
	goto loc_821E33E4;
loc_821E33E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E33E4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e33fc
	if (cr6.eq) goto loc_821E33FC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E33FC:
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

__attribute__((alias("__imp__sub_821E3398"))) PPC_WEAK_FUNC(sub_821E3398);
PPC_FUNC_IMPL(__imp__sub_821E3398) {
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
	// bl 0x821e1770
	sub_821E1770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,392
	ctx.r3.s64 = 392;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e33e0
	if (cr0.eq) goto loc_821E33E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82218a18
	sub_82218A18(ctx, base);
	// b 0x821e33e4
	goto loc_821E33E4;
loc_821E33E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E33E4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e33fc
	if (cr6.eq) goto loc_821E33FC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E33FC:
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

__attribute__((alias("__imp__sub_821E3410"))) PPC_WEAK_FUNC(sub_821E3410);
PPC_FUNC_IMPL(__imp__sub_821E3410) {
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

__attribute__((alias("__imp__sub_821E3438"))) PPC_WEAK_FUNC(sub_821E3438);
PPC_FUNC_IMPL(__imp__sub_821E3438) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2176(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2176);
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
	// bl 0x821e17f8
	sub_821E17F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,156
	ctx.r3.s64 = 156;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3488
	if (cr0.eq) goto loc_821E3488;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822007a0
	sub_822007A0(ctx, base);
	// b 0x821e348c
	goto loc_821E348C;
loc_821E3488:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E348C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e34a4
	if (cr6.eq) goto loc_821E34A4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E34A4:
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

__attribute__((alias("__imp__sub_821E3440"))) PPC_WEAK_FUNC(sub_821E3440);
PPC_FUNC_IMPL(__imp__sub_821E3440) {
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
	// bl 0x821e17f8
	sub_821E17F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,156
	ctx.r3.s64 = 156;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3488
	if (cr0.eq) goto loc_821E3488;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822007a0
	sub_822007A0(ctx, base);
	// b 0x821e348c
	goto loc_821E348C;
loc_821E3488:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E348C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e34a4
	if (cr6.eq) goto loc_821E34A4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E34A4:
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

__attribute__((alias("__imp__sub_821E34B8"))) PPC_WEAK_FUNC(sub_821E34B8);
PPC_FUNC_IMPL(__imp__sub_821E34B8) {
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

__attribute__((alias("__imp__sub_821E34E0"))) PPC_WEAK_FUNC(sub_821E34E0);
PPC_FUNC_IMPL(__imp__sub_821E34E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2232(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2232);
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
	// bl 0x821b8258
	sub_821B8258(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,264
	ctx.r3.s64 = 264;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e352c
	if (cr0.eq) goto loc_821E352C;
	// bl 0x821eafb8
	sub_821EAFB8(ctx, base);
	// b 0x821e3530
	goto loc_821E3530;
loc_821E352C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3530:
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

__attribute__((alias("__imp__sub_821E34E8"))) PPC_WEAK_FUNC(sub_821E34E8);
PPC_FUNC_IMPL(__imp__sub_821E34E8) {
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
	// bl 0x821b8258
	sub_821B8258(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,264
	ctx.r3.s64 = 264;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e352c
	if (cr0.eq) goto loc_821E352C;
	// bl 0x821eafb8
	sub_821EAFB8(ctx, base);
	// b 0x821e3530
	goto loc_821E3530;
loc_821E352C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3530:
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

__attribute__((alias("__imp__sub_821E3544"))) PPC_WEAK_FUNC(sub_821E3544);
PPC_FUNC_IMPL(__imp__sub_821E3544) {
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

__attribute__((alias("__imp__sub_821E356C"))) PPC_WEAK_FUNC(sub_821E356C);
PPC_FUNC_IMPL(__imp__sub_821E356C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E3570"))) PPC_WEAK_FUNC(sub_821E3570);
PPC_FUNC_IMPL(__imp__sub_821E3570) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2288(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2288);
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
	// bl 0x821e1880
	sub_821E1880(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,288
	ctx.r3.s64 = 288;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e35c0
	if (cr0.eq) goto loc_821E35C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82219d38
	sub_82219D38(ctx, base);
	// b 0x821e35c4
	goto loc_821E35C4;
loc_821E35C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E35C4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e35dc
	if (cr6.eq) goto loc_821E35DC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E35DC:
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

__attribute__((alias("__imp__sub_821E3578"))) PPC_WEAK_FUNC(sub_821E3578);
PPC_FUNC_IMPL(__imp__sub_821E3578) {
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
	// bl 0x821e1880
	sub_821E1880(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,288
	ctx.r3.s64 = 288;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e35c0
	if (cr0.eq) goto loc_821E35C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82219d38
	sub_82219D38(ctx, base);
	// b 0x821e35c4
	goto loc_821E35C4;
loc_821E35C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E35C4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e35dc
	if (cr6.eq) goto loc_821E35DC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E35DC:
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

__attribute__((alias("__imp__sub_821E35F0"))) PPC_WEAK_FUNC(sub_821E35F0);
PPC_FUNC_IMPL(__imp__sub_821E35F0) {
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

__attribute__((alias("__imp__sub_821E3618"))) PPC_WEAK_FUNC(sub_821E3618);
PPC_FUNC_IMPL(__imp__sub_821E3618) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2344(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2344);
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
	// bl 0x821e1908
	sub_821E1908(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,140
	ctx.r3.s64 = 140;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3668
	if (cr0.eq) goto loc_821E3668;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8221a560
	sub_8221A560(ctx, base);
	// b 0x821e366c
	goto loc_821E366C;
loc_821E3668:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E366C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e3684
	if (cr6.eq) goto loc_821E3684;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E3684:
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

__attribute__((alias("__imp__sub_821E3620"))) PPC_WEAK_FUNC(sub_821E3620);
PPC_FUNC_IMPL(__imp__sub_821E3620) {
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
	// bl 0x821e1908
	sub_821E1908(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,140
	ctx.r3.s64 = 140;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3668
	if (cr0.eq) goto loc_821E3668;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8221a560
	sub_8221A560(ctx, base);
	// b 0x821e366c
	goto loc_821E366C;
loc_821E3668:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E366C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e3684
	if (cr6.eq) goto loc_821E3684;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E3684:
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

__attribute__((alias("__imp__sub_821E3698"))) PPC_WEAK_FUNC(sub_821E3698);
PPC_FUNC_IMPL(__imp__sub_821E3698) {
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

__attribute__((alias("__imp__sub_821E36C0"))) PPC_WEAK_FUNC(sub_821E36C0);
PPC_FUNC_IMPL(__imp__sub_821E36C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2400(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2400);
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
	// bl 0x821e1990
	sub_821E1990(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e370c
	if (cr0.eq) goto loc_821E370C;
	// bl 0x8221bb38
	sub_8221BB38(ctx, base);
	// b 0x821e3710
	goto loc_821E3710;
loc_821E370C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3710:
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

__attribute__((alias("__imp__sub_821E36C8"))) PPC_WEAK_FUNC(sub_821E36C8);
PPC_FUNC_IMPL(__imp__sub_821E36C8) {
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
	// bl 0x821e1990
	sub_821E1990(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e370c
	if (cr0.eq) goto loc_821E370C;
	// bl 0x8221bb38
	sub_8221BB38(ctx, base);
	// b 0x821e3710
	goto loc_821E3710;
loc_821E370C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3710:
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

__attribute__((alias("__imp__sub_821E3724"))) PPC_WEAK_FUNC(sub_821E3724);
PPC_FUNC_IMPL(__imp__sub_821E3724) {
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

__attribute__((alias("__imp__sub_821E374C"))) PPC_WEAK_FUNC(sub_821E374C);
PPC_FUNC_IMPL(__imp__sub_821E374C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E3750"))) PPC_WEAK_FUNC(sub_821E3750);
PPC_FUNC_IMPL(__imp__sub_821E3750) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2456(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2456);
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
	// bl 0x821e1a18
	sub_821E1A18(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e37a0
	if (cr0.eq) goto loc_821E37A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8221dde8
	sub_8221DDE8(ctx, base);
	// b 0x821e37a4
	goto loc_821E37A4;
loc_821E37A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E37A4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e37bc
	if (cr6.eq) goto loc_821E37BC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E37BC:
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

__attribute__((alias("__imp__sub_821E3758"))) PPC_WEAK_FUNC(sub_821E3758);
PPC_FUNC_IMPL(__imp__sub_821E3758) {
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
	// bl 0x821e1a18
	sub_821E1A18(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e37a0
	if (cr0.eq) goto loc_821E37A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8221dde8
	sub_8221DDE8(ctx, base);
	// b 0x821e37a4
	goto loc_821E37A4;
loc_821E37A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E37A4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e37bc
	if (cr6.eq) goto loc_821E37BC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E37BC:
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

__attribute__((alias("__imp__sub_821E37D0"))) PPC_WEAK_FUNC(sub_821E37D0);
PPC_FUNC_IMPL(__imp__sub_821E37D0) {
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

__attribute__((alias("__imp__sub_821E37F8"))) PPC_WEAK_FUNC(sub_821E37F8);
PPC_FUNC_IMPL(__imp__sub_821E37F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2512(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2512);
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
	// bl 0x821debc8
	sub_821DEBC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,148
	ctx.r3.s64 = 148;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3844
	if (cr0.eq) goto loc_821E3844;
	// bl 0x821df068
	sub_821DF068(ctx, base);
	// b 0x821e3848
	goto loc_821E3848;
loc_821E3844:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3848:
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

__attribute__((alias("__imp__sub_821E3800"))) PPC_WEAK_FUNC(sub_821E3800);
PPC_FUNC_IMPL(__imp__sub_821E3800) {
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
	// bl 0x821debc8
	sub_821DEBC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,148
	ctx.r3.s64 = 148;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3844
	if (cr0.eq) goto loc_821E3844;
	// bl 0x821df068
	sub_821DF068(ctx, base);
	// b 0x821e3848
	goto loc_821E3848;
loc_821E3844:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3848:
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

__attribute__((alias("__imp__sub_821E385C"))) PPC_WEAK_FUNC(sub_821E385C);
PPC_FUNC_IMPL(__imp__sub_821E385C) {
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

__attribute__((alias("__imp__sub_821E3884"))) PPC_WEAK_FUNC(sub_821E3884);
PPC_FUNC_IMPL(__imp__sub_821E3884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E3888"))) PPC_WEAK_FUNC(sub_821E3888);
PPC_FUNC_IMPL(__imp__sub_821E3888) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2568(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2568);
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
	// bl 0x821e1aa0
	sub_821E1AA0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e38d8
	if (cr0.eq) goto loc_821E38D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82206878
	sub_82206878(ctx, base);
	// b 0x821e38dc
	goto loc_821E38DC;
loc_821E38D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E38DC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e38f4
	if (cr6.eq) goto loc_821E38F4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E38F4:
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

__attribute__((alias("__imp__sub_821E3890"))) PPC_WEAK_FUNC(sub_821E3890);
PPC_FUNC_IMPL(__imp__sub_821E3890) {
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
	// bl 0x821e1aa0
	sub_821E1AA0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e38d8
	if (cr0.eq) goto loc_821E38D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82206878
	sub_82206878(ctx, base);
	// b 0x821e38dc
	goto loc_821E38DC;
loc_821E38D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E38DC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e38f4
	if (cr6.eq) goto loc_821E38F4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E38F4:
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

__attribute__((alias("__imp__sub_821E3908"))) PPC_WEAK_FUNC(sub_821E3908);
PPC_FUNC_IMPL(__imp__sub_821E3908) {
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

__attribute__((alias("__imp__sub_821E3930"))) PPC_WEAK_FUNC(sub_821E3930);
PPC_FUNC_IMPL(__imp__sub_821E3930) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2624(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2624);
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
	// bl 0x821e1b28
	sub_821E1B28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,120
	ctx.r3.s64 = 120;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3980
	if (cr0.eq) goto loc_821E3980;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8221f298
	sub_8221F298(ctx, base);
	// b 0x821e3984
	goto loc_821E3984;
loc_821E3980:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3984:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e399c
	if (cr6.eq) goto loc_821E399C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E399C:
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

__attribute__((alias("__imp__sub_821E3938"))) PPC_WEAK_FUNC(sub_821E3938);
PPC_FUNC_IMPL(__imp__sub_821E3938) {
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
	// bl 0x821e1b28
	sub_821E1B28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,120
	ctx.r3.s64 = 120;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3980
	if (cr0.eq) goto loc_821E3980;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8221f298
	sub_8221F298(ctx, base);
	// b 0x821e3984
	goto loc_821E3984;
loc_821E3980:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3984:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e399c
	if (cr6.eq) goto loc_821E399C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E399C:
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

__attribute__((alias("__imp__sub_821E39B0"))) PPC_WEAK_FUNC(sub_821E39B0);
PPC_FUNC_IMPL(__imp__sub_821E39B0) {
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

__attribute__((alias("__imp__sub_821E39D8"))) PPC_WEAK_FUNC(sub_821E39D8);
PPC_FUNC_IMPL(__imp__sub_821E39D8) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2680(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2680);
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
	// bl 0x8214faf0
	sub_8214FAF0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,352
	ctx.r3.s64 = 352;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3a28
	if (cr0.eq) goto loc_821E3A28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821dc038
	sub_821DC038(ctx, base);
	// b 0x821e3a2c
	goto loc_821E3A2C;
loc_821E3A28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3A2C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e3a44
	if (cr6.eq) goto loc_821E3A44;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E3A44:
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

__attribute__((alias("__imp__sub_821E39E0"))) PPC_WEAK_FUNC(sub_821E39E0);
PPC_FUNC_IMPL(__imp__sub_821E39E0) {
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
	// bl 0x8214faf0
	sub_8214FAF0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,352
	ctx.r3.s64 = 352;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3a28
	if (cr0.eq) goto loc_821E3A28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821dc038
	sub_821DC038(ctx, base);
	// b 0x821e3a2c
	goto loc_821E3A2C;
loc_821E3A28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3A2C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e3a44
	if (cr6.eq) goto loc_821E3A44;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E3A44:
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

__attribute__((alias("__imp__sub_821E3A58"))) PPC_WEAK_FUNC(sub_821E3A58);
PPC_FUNC_IMPL(__imp__sub_821E3A58) {
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

__attribute__((alias("__imp__sub_821E3A80"))) PPC_WEAK_FUNC(sub_821E3A80);
PPC_FUNC_IMPL(__imp__sub_821E3A80) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2736(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2736);
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
	// bl 0x821e1bb0
	sub_821E1BB0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,140
	ctx.r3.s64 = 140;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3ad0
	if (cr0.eq) goto loc_821E3AD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8221ffa8
	sub_8221FFA8(ctx, base);
	// b 0x821e3ad4
	goto loc_821E3AD4;
loc_821E3AD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3AD4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e3aec
	if (cr6.eq) goto loc_821E3AEC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E3AEC:
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

__attribute__((alias("__imp__sub_821E3A88"))) PPC_WEAK_FUNC(sub_821E3A88);
PPC_FUNC_IMPL(__imp__sub_821E3A88) {
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
	// bl 0x821e1bb0
	sub_821E1BB0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,140
	ctx.r3.s64 = 140;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3ad0
	if (cr0.eq) goto loc_821E3AD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8221ffa8
	sub_8221FFA8(ctx, base);
	// b 0x821e3ad4
	goto loc_821E3AD4;
loc_821E3AD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3AD4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e3aec
	if (cr6.eq) goto loc_821E3AEC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E3AEC:
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

__attribute__((alias("__imp__sub_821E3B00"))) PPC_WEAK_FUNC(sub_821E3B00);
PPC_FUNC_IMPL(__imp__sub_821E3B00) {
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

__attribute__((alias("__imp__sub_821E3B28"))) PPC_WEAK_FUNC(sub_821E3B28);
PPC_FUNC_IMPL(__imp__sub_821E3B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2792(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2792);
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
	// bl 0x821e1c38
	sub_821E1C38(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3b74
	if (cr0.eq) goto loc_821E3B74;
	// bl 0x82220fd8
	sub_82220FD8(ctx, base);
	// b 0x821e3b78
	goto loc_821E3B78;
loc_821E3B74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3B78:
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

__attribute__((alias("__imp__sub_821E3B30"))) PPC_WEAK_FUNC(sub_821E3B30);
PPC_FUNC_IMPL(__imp__sub_821E3B30) {
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
	// bl 0x821e1c38
	sub_821E1C38(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3b74
	if (cr0.eq) goto loc_821E3B74;
	// bl 0x82220fd8
	sub_82220FD8(ctx, base);
	// b 0x821e3b78
	goto loc_821E3B78;
loc_821E3B74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3B78:
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

__attribute__((alias("__imp__sub_821E3B8C"))) PPC_WEAK_FUNC(sub_821E3B8C);
PPC_FUNC_IMPL(__imp__sub_821E3B8C) {
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

__attribute__((alias("__imp__sub_821E3BB4"))) PPC_WEAK_FUNC(sub_821E3BB4);
PPC_FUNC_IMPL(__imp__sub_821E3BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E3BB8"))) PPC_WEAK_FUNC(sub_821E3BB8);
PPC_FUNC_IMPL(__imp__sub_821E3BB8) {
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
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2848(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2848);
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
	// bl 0x821e1cc0
	sub_821E1CC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3c08
	if (cr0.eq) goto loc_821E3C08;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82222630
	sub_82222630(ctx, base);
	// b 0x821e3c0c
	goto loc_821E3C0C;
loc_821E3C08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3C0C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e3c24
	if (cr6.eq) goto loc_821E3C24;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E3C24:
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

__attribute__((alias("__imp__sub_821E3BC0"))) PPC_WEAK_FUNC(sub_821E3BC0);
PPC_FUNC_IMPL(__imp__sub_821E3BC0) {
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
	// bl 0x821e1cc0
	sub_821E1CC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e3c08
	if (cr0.eq) goto loc_821E3C08;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82222630
	sub_82222630(ctx, base);
	// b 0x821e3c0c
	goto loc_821E3C0C;
loc_821E3C08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E3C0C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e3c24
	if (cr6.eq) goto loc_821E3C24;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_821E3C24:
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

__attribute__((alias("__imp__sub_821E3C38"))) PPC_WEAK_FUNC(sub_821E3C38);
PPC_FUNC_IMPL(__imp__sub_821E3C38) {
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

__attribute__((alias("__imp__sub_821E3C60"))) PPC_WEAK_FUNC(sub_821E3C60);
PPC_FUNC_IMPL(__imp__sub_821E3C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,2920(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 2920);
	// mflr r12
	// bl 0x8239bce4
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r4,r11,2896
	ctx.r4.s64 = r11.s64 + 2896;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-24112
	ctx.r4.s64 = r11.s64 + -24112;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,192(r24)
	PPC_STORE_U32(r24.u32 + 192, ctx.r3.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r25,784
	r25.s64 = 784;
	// lfs f30,9196(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9196);
	f30.f64 = double(temp.f32);
	// lfs f31,9192(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9192);
	f31.f64 = double(temp.f32);
loc_821E3CCC:
	// lwz r4,192(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 192);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// addi r3,r11,-256
	ctx.r3.s64 = r11.s64 + -256;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8231a3c8
	sub_8231A3C8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x821e3d94
	if (!cr0.gt) goto loc_821E3D94;
	// li r26,0
	r26.s64 = 0;
loc_821E3D00:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r26,r11
	ctx.r3.u64 = r26.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r27,1
	r27.s64 = 1;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x821e3d80
	if (!cr6.gt) goto loc_821E3D80;
	// li r28,8
	r28.s64 = 8;
loc_821E3D28:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// fmadds f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f31.f64 + f30.f64));
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e3d6c
	if (cr0.eq) goto loc_821E3D6C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E3D6C:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x821e3d28
	if (cr6.lt) goto loc_821E3D28;
loc_821E3D80:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// blt cr6,0x821e3d00
	if (cr6.lt) goto loc_821E3D00;
loc_821E3D94:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// lwz r11,192(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 192);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r3,r25,r11
	ctx.r3.u64 = r25.u64 + r11.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e3dcc
	if (cr0.eq) goto loc_821E3DCC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E3DCC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// cmpwi cr6,r25,992
	cr6.compare<int32_t>(r25.s32, 992, xer);
	// blt cr6,0x821e3ccc
	if (cr6.lt) goto loc_821E3CCC;
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_821E3C68"))) PPC_WEAK_FUNC(sub_821E3C68);
PPC_FUNC_IMPL(__imp__sub_821E3C68) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r4,r11,2896
	ctx.r4.s64 = r11.s64 + 2896;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-24112
	ctx.r4.s64 = r11.s64 + -24112;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,192(r24)
	PPC_STORE_U32(r24.u32 + 192, ctx.r3.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r25,784
	r25.s64 = 784;
	// lfs f30,9196(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9196);
	f30.f64 = double(temp.f32);
	// lfs f31,9192(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9192);
	f31.f64 = double(temp.f32);
loc_821E3CCC:
	// lwz r4,192(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 192);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// addi r3,r11,-256
	ctx.r3.s64 = r11.s64 + -256;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8231a3c8
	sub_8231A3C8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x821e3d94
	if (!cr0.gt) goto loc_821E3D94;
	// li r26,0
	r26.s64 = 0;
loc_821E3D00:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r26,r11
	ctx.r3.u64 = r26.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r27,1
	r27.s64 = 1;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x821e3d80
	if (!cr6.gt) goto loc_821E3D80;
	// li r28,8
	r28.s64 = 8;
loc_821E3D28:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// fmadds f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f31.f64 + f30.f64));
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e3d6c
	if (cr0.eq) goto loc_821E3D6C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E3D6C:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x821e3d28
	if (cr6.lt) goto loc_821E3D28;
loc_821E3D80:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// blt cr6,0x821e3d00
	if (cr6.lt) goto loc_821E3D00;
loc_821E3D94:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// lwz r11,192(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 192);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r3,r25,r11
	ctx.r3.u64 = r25.u64 + r11.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e3dcc
	if (cr0.eq) goto loc_821E3DCC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E3DCC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// cmpwi cr6,r25,992
	cr6.compare<int32_t>(r25.s32, 992, xer);
	// blt cr6,0x821e3ccc
	if (cr6.lt) goto loc_821E3CCC;
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_821E3DF0"))) PPC_WEAK_FUNC(sub_821E3DF0);
PPC_FUNC_IMPL(__imp__sub_821E3DF0) {
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

__attribute__((alias("__imp__sub_821E3E18"))) PPC_WEAK_FUNC(sub_821E3E18);
PPC_FUNC_IMPL(__imp__sub_821E3E18) {
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

__attribute__((alias("__imp__sub_821E3E40"))) PPC_WEAK_FUNC(sub_821E3E40);
PPC_FUNC_IMPL(__imp__sub_821E3E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
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
	// lwz r16,3072(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 3072);
	// mflr r12
	// bl 0x8239bce4
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8239d5d4
	// addi r31,r1,-352
	r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	f23.f64 = ctx.f1.f64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lis r29,-32136
	r29.s64 = -2106064896;
	// lwz r11,12080(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12080);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x821e3ecc
	if (!cr0.eq) goto loc_821E3ECC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12080, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,3044
	ctx.r4.s64 = r11.s64 + 3044;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-24112
	ctx.r4.s64 = r11.s64 + -24112;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,12076(r29)
	PPC_STORE_U32(r29.u32 + 12076, ctx.r4.u32);
	// b 0x821e3ed0
	goto loc_821E3ED0;
loc_821E3ECC:
	// lwz r4,12076(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12076);
loc_821E3ED0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821e3f04
	if (cr6.eq) goto loc_821E3F04;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8231ae98
	sub_8231AE98(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e3f04
	if (cr0.eq) goto loc_821E3F04;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E3F04:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// fmr f25,f23
	ctx.fpscr.disableFlushMode();
	f25.f64 = f23.f64;
	// li r29,48
	r29.s64 = 48;
	// lwz r6,156(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 156);
	// addi r30,r11,18816
	r30.s64 = r11.s64 + 18816;
	// stfs f25,116(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// divw r10,r10,r29
	ctx.r10.s32 = ctx.r10.s32 / r29.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfs f28,3040(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3040);
	f28.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmr f27,f28
	f27.f64 = f28.f64;
	// stfs f27,112(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// std r10,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// lfs f0,3036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3036);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// lfd f0,88(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f30,144(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f30,148(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f30,152(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f31,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f31.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f31,156(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// lfs f24,3032(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3032);
	f24.f64 = double(temp.f32);
	// fmuls f0,f0,f24
	f0.f64 = double(float(f0.f64 * f24.f64));
	// stfs f0,124(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// bl 0x821e1d90
	sub_821E1D90(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stfs f31,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// li r28,0
	r28.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f30,164(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f30,168(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f30,176(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// stfs f31,180(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f31,184(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// divw. r8,r9,r29
	ctx.r8.s32 = ctx.r9.s32 / r29.s32;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f29,2552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	f29.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f29,140(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f29,172(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// stfs f29,188(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// lfs f0,3028(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3028);
	f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// ble 0x821e410c
	if (!cr0.gt) goto loc_821E410C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r26,0
	r26.s64 = 0;
	// lfs f26,3024(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3024);
	f26.f64 = double(temp.f32);
loc_821E400C:
	// add r27,r26,r11
	r27.u64 = r26.u64 + r11.u64;
	// lfs f0,40(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 40);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// beq cr6,0x821e402c
	if (cr6.eq) goto loc_821E402C;
	// lfs f13,16(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x821e4030
	if (cr6.gt) goto loc_821E4030;
loc_821E402C:
	// li r11,0
	r11.s64 = 0;
loc_821E4030:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// beq 0x821e408c
	if (cr0.eq) goto loc_821E408C;
	// fmuls f31,f0,f26
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f0.f64 * f26.f64));
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// bl 0x821e1d90
	sub_821E1D90(ctx, base);
	// lfs f0,40(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 40);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f27,f31,f28
	f27.f64 = double(float(f31.f64 + f28.f64));
	// stfs f27,112(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x821e4090
	goto loc_821E4090;
loc_821E408C:
	// lfs f0,16(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 16);
	f0.f64 = double(temp.f32);
loc_821E4090:
	// fmuls f31,f0,f26
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f0.f64 * f26.f64));
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// bl 0x821e1d90
	sub_821E1D90(ctx, base);
	// lfs f0,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x821e40dc
	if (!cr6.gt) goto loc_821E40DC;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fadds f13,f27,f31
	ctx.f13.f64 = double(float(f27.f64 + f31.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// addi r5,r31,176
	ctx.r5.s64 = r31.s64 + 176;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmuls f0,f0,f26
	f0.f64 = double(float(f0.f64 * f26.f64));
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// bl 0x821e1d90
	sub_821E1D90(ctx, base);
loc_821E40DC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// fmr f27,f28
	ctx.fpscr.disableFlushMode();
	f27.f64 = f28.f64;
	// fadds f25,f25,f24
	f25.f64 = double(float(f25.f64 + f24.f64));
	// stfs f27,112(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// stfs f25,116(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// addi r26,r26,48
	r26.s64 = r26.s64 + 48;
	// divw r9,r9,r29
	ctx.r9.s32 = ctx.r9.s32 / r29.s32;
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(r28.s32, ctx.r9.s32, xer);
	// blt cr6,0x821e400c
	if (cr6.lt) goto loc_821E400C;
loc_821E410C:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// stfs f23,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// divw r10,r10,r29
	ctx.r10.s32 = ctx.r10.s32 / r29.s32;
	// li r28,10
	r28.s64 = 10;
	// lfs f0,22976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 22976);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,128(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// extsw r11,r10
	r11.s64 = ctx.r10.s32;
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// lfd f0,88(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f31,3020(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3020);
	f31.f64 = double(temp.f32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f24
	f0.f64 = double(float(f0.f64 * f24.f64));
	// stfs f0,124(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
loc_821E4160:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821e1d90
	sub_821E1D90(ctx, base);
	// fadds f27,f27,f31
	ctx.fpscr.disableFlushMode();
	f27.f64 = double(float(f27.f64 + f31.f64));
	// stfs f27,112(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x821e4160
	if (!cr0.eq) goto loc_821E4160;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stfs f29,128(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stfs f29,132(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f29,136(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// li r28,0
	r28.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw. r9,r10,r29
	ctx.r9.s32 = ctx.r10.s32 / r29.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,3016(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3016);
	f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f0,3012(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3012);
	f0.f64 = double(temp.f32);
	// fadds f31,f23,f0
	f31.f64 = double(float(f23.f64 + f0.f64));
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// ble 0x821e424c
	if (!cr0.gt) goto loc_821E424C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r27,0
	r27.s64 = 0;
	// addi r26,r10,3000
	r26.s64 = ctx.r10.s64 + 3000;
	// lfs f30,3008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3008);
	f30.f64 = double(temp.f32);
loc_821E41E0:
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, f30.f64);
	// blt cr6,0x821e4214
	if (cr6.lt) goto loc_821E4214;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r24,r31,128
	r24.s64 = r31.s64 + 128;
	// addi r23,r31,88
	r23.s64 = r31.s64 + 88;
	// bl 0x821e2248
	sub_821E2248(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// b 0x821e421c
	goto loc_821E421C;
loc_821E4214:
	// addi r6,r31,128
	ctx.r6.s64 = r31.s64 + 128;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
loc_821E421C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821e1e18
	sub_821E1E18(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// fadds f31,f31,f24
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 + f24.f64));
	// addi r27,r27,48
	r27.s64 = r27.s64 + 48;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// divw r10,r10,r29
	ctx.r10.s32 = ctx.r10.s32 / r29.s32;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x821e41e0
	if (cr6.lt) goto loc_821E41E0;
loc_821E424C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r31,352
	ctx.r1.s64 = r31.s64 + 352;
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8239d620
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_821E3E48"))) PPC_WEAK_FUNC(sub_821E3E48);
PPC_FUNC_IMPL(__imp__sub_821E3E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f23{};
	PPCRegister f24{};
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
	// bl 0x8239bce4
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8239d5d4
	// addi r31,r1,-352
	r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	f23.f64 = ctx.f1.f64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lis r29,-32136
	r29.s64 = -2106064896;
	// lwz r11,12080(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12080);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x821e3ecc
	if (!cr0.eq) goto loc_821E3ECC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12080, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,3044
	ctx.r4.s64 = r11.s64 + 3044;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-24112
	ctx.r4.s64 = r11.s64 + -24112;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,12076(r29)
	PPC_STORE_U32(r29.u32 + 12076, ctx.r4.u32);
	// b 0x821e3ed0
	goto loc_821E3ED0;
loc_821E3ECC:
	// lwz r4,12076(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12076);
loc_821E3ED0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821e3f04
	if (cr6.eq) goto loc_821E3F04;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8231ae98
	sub_8231AE98(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e3f04
	if (cr0.eq) goto loc_821E3F04;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E3F04:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// fmr f25,f23
	ctx.fpscr.disableFlushMode();
	f25.f64 = f23.f64;
	// li r29,48
	r29.s64 = 48;
	// lwz r6,156(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 156);
	// addi r30,r11,18816
	r30.s64 = r11.s64 + 18816;
	// stfs f25,116(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// divw r10,r10,r29
	ctx.r10.s32 = ctx.r10.s32 / r29.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfs f28,3040(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3040);
	f28.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmr f27,f28
	f27.f64 = f28.f64;
	// stfs f27,112(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// std r10,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// lfs f0,3036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3036);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// lfd f0,88(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f30,144(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f30,148(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f30,152(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f31,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f31.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f31,156(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// lfs f24,3032(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3032);
	f24.f64 = double(temp.f32);
	// fmuls f0,f0,f24
	f0.f64 = double(float(f0.f64 * f24.f64));
	// stfs f0,124(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// bl 0x821e1d90
	sub_821E1D90(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stfs f31,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// li r28,0
	r28.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f30,164(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f30,168(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f30,176(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// stfs f31,180(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f31,184(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// divw. r8,r9,r29
	ctx.r8.s32 = ctx.r9.s32 / r29.s32;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f29,2552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	f29.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f29,140(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f29,172(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// stfs f29,188(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// lfs f0,3028(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3028);
	f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// ble 0x821e410c
	if (!cr0.gt) goto loc_821E410C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r26,0
	r26.s64 = 0;
	// lfs f26,3024(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3024);
	f26.f64 = double(temp.f32);
loc_821E400C:
	// add r27,r26,r11
	r27.u64 = r26.u64 + r11.u64;
	// lfs f0,40(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 40);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// beq cr6,0x821e402c
	if (cr6.eq) goto loc_821E402C;
	// lfs f13,16(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x821e4030
	if (cr6.gt) goto loc_821E4030;
loc_821E402C:
	// li r11,0
	r11.s64 = 0;
loc_821E4030:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// beq 0x821e408c
	if (cr0.eq) goto loc_821E408C;
	// fmuls f31,f0,f26
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f0.f64 * f26.f64));
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// bl 0x821e1d90
	sub_821E1D90(ctx, base);
	// lfs f0,40(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 40);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f27,f31,f28
	f27.f64 = double(float(f31.f64 + f28.f64));
	// stfs f27,112(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x821e4090
	goto loc_821E4090;
loc_821E408C:
	// lfs f0,16(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 16);
	f0.f64 = double(temp.f32);
loc_821E4090:
	// fmuls f31,f0,f26
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f0.f64 * f26.f64));
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// bl 0x821e1d90
	sub_821E1D90(ctx, base);
	// lfs f0,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x821e40dc
	if (!cr6.gt) goto loc_821E40DC;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fadds f13,f27,f31
	ctx.f13.f64 = double(float(f27.f64 + f31.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// addi r5,r31,176
	ctx.r5.s64 = r31.s64 + 176;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmuls f0,f0,f26
	f0.f64 = double(float(f0.f64 * f26.f64));
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// bl 0x821e1d90
	sub_821E1D90(ctx, base);
loc_821E40DC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// fmr f27,f28
	ctx.fpscr.disableFlushMode();
	f27.f64 = f28.f64;
	// fadds f25,f25,f24
	f25.f64 = double(float(f25.f64 + f24.f64));
	// stfs f27,112(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// stfs f25,116(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// addi r26,r26,48
	r26.s64 = r26.s64 + 48;
	// divw r9,r9,r29
	ctx.r9.s32 = ctx.r9.s32 / r29.s32;
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(r28.s32, ctx.r9.s32, xer);
	// blt cr6,0x821e400c
	if (cr6.lt) goto loc_821E400C;
loc_821E410C:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// stfs f23,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// divw r10,r10,r29
	ctx.r10.s32 = ctx.r10.s32 / r29.s32;
	// li r28,10
	r28.s64 = 10;
	// lfs f0,22976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 22976);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,128(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// extsw r11,r10
	r11.s64 = ctx.r10.s32;
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// lfd f0,88(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f31,3020(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3020);
	f31.f64 = double(temp.f32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f24
	f0.f64 = double(float(f0.f64 * f24.f64));
	// stfs f0,124(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
loc_821E4160:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821e1d90
	sub_821E1D90(ctx, base);
	// fadds f27,f27,f31
	ctx.fpscr.disableFlushMode();
	f27.f64 = double(float(f27.f64 + f31.f64));
	// stfs f27,112(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x821e4160
	if (!cr0.eq) goto loc_821E4160;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stfs f29,128(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stfs f29,132(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f29,136(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// li r28,0
	r28.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw. r9,r10,r29
	ctx.r9.s32 = ctx.r10.s32 / r29.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,3016(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3016);
	f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f0,3012(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3012);
	f0.f64 = double(temp.f32);
	// fadds f31,f23,f0
	f31.f64 = double(float(f23.f64 + f0.f64));
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// ble 0x821e424c
	if (!cr0.gt) goto loc_821E424C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r27,0
	r27.s64 = 0;
	// addi r26,r10,3000
	r26.s64 = ctx.r10.s64 + 3000;
	// lfs f30,3008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3008);
	f30.f64 = double(temp.f32);
loc_821E41E0:
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, f30.f64);
	// blt cr6,0x821e4214
	if (cr6.lt) goto loc_821E4214;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r24,r31,128
	r24.s64 = r31.s64 + 128;
	// addi r23,r31,88
	r23.s64 = r31.s64 + 88;
	// bl 0x821e2248
	sub_821E2248(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// b 0x821e421c
	goto loc_821E421C;
loc_821E4214:
	// addi r6,r31,128
	ctx.r6.s64 = r31.s64 + 128;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
loc_821E421C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821e1e18
	sub_821E1E18(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// fadds f31,f31,f24
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 + f24.f64));
	// addi r27,r27,48
	r27.s64 = r27.s64 + 48;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// divw r10,r10,r29
	ctx.r10.s32 = ctx.r10.s32 / r29.s32;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x821e41e0
	if (cr6.lt) goto loc_821E41E0;
loc_821E424C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r31,352
	ctx.r1.s64 = r31.s64 + 352;
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8239d620
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_821E4260"))) PPC_WEAK_FUNC(sub_821E4260);
PPC_FUNC_IMPL(__imp__sub_821E4260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12080
	r11.s64 = r11.s64 + 12080;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12080
	ctx.r10.s64 = ctx.r10.s64 + 12080;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E4288"))) PPC_WEAK_FUNC(sub_821E4288);
PPC_FUNC_IMPL(__imp__sub_821E4288) {
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
	// lwz r31,220(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 220);
	// lwz r30,224(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 224);
	// b 0x821e42bc
	goto loc_821E42BC;
loc_821E42A4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_821E42BC:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x821e42a4
	if (!cr6.eq) goto loc_821E42A4;
	// li r11,0
	r11.s64 = 0;
	// stb r11,198(r29)
	PPC_STORE_U8(r29.u32 + 198, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821E42D4"))) PPC_WEAK_FUNC(sub_821E42D4);
PPC_FUNC_IMPL(__imp__sub_821E42D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E42D8"))) PPC_WEAK_FUNC(sub_821E42D8);
PPC_FUNC_IMPL(__imp__sub_821E42D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r31,-32136
	r31.s64 = -2106064896;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,11844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 11844);
	// bl 0x82354090
	sub_82354090(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,11844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 11844);
	// srawi r31,r11,10
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FF) != 0);
	r31.s64 = r11.s32 >> 10;
	// lwz r29,88(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// srawi r28,r10,10
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	r28.s64 = ctx.r10.s32 >> 10;
	// bl 0x82353e08
	sub_82353E08(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,3136
	r11.s64 = r11.s64 + 3136;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x821e22a8
	sub_821E22A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821E4350"))) PPC_WEAK_FUNC(sub_821E4350);
PPC_FUNC_IMPL(__imp__sub_821E4350) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x821e43b4
	if (cr0.eq) goto loc_821E43B4;
	// lis r31,-32136
	r31.s64 = -2106064896;
	// lwz r11,11844(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11844);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,11844(r31)
	PPC_STORE_U32(r31.u32 + 11844, r11.u32);
	// bl 0x82353d88
	sub_82353D88(ctx, base);
	// lwz r11,11844(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11844);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// blt cr6,0x821e43b0
	if (cr6.lt) goto loc_821E43B0;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r11,11844(r31)
	PPC_STORE_U32(r31.u32 + 11844, r11.u32);
	// stb r29,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, r29.u8);
	// b 0x821e43bc
	goto loc_821E43BC;
loc_821E43B0:
	// lwz r11,136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 136);
loc_821E43B4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,16(r11)
	PPC_STORE_U8(r11.u32 + 16, ctx.r10.u8);
loc_821E43BC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// stw r29,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821E43D0"))) PPC_WEAK_FUNC(sub_821E43D0);
PPC_FUNC_IMPL(__imp__sub_821E43D0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// lbz r11,16(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821e447c
	if (cr0.eq) goto loc_821E447C;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r28,3
	r28.s64 = 3;
	// addi r29,r11,18840
	r29.s64 = r11.s64 + 18840;
	// lwz r27,28(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// stw r3,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r3.u32);
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x821e4478
	if (!cr6.gt) goto loc_821E4478;
	// li r30,24
	r30.s64 = 24;
loc_821E4434:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8231a748
	sub_8231A748(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e4464
	if (cr0.eq) goto loc_821E4464;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821E4464:
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x821e4434
	if (cr6.lt) goto loc_821E4434;
loc_821E4478:
	// stw r27,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r27.u32);
loc_821E447C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r25,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821E4490"))) PPC_WEAK_FUNC(sub_821E4490);
PPC_FUNC_IMPL(__imp__sub_821E4490) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,16(r11)
	PPC_STORE_U8(r11.u32 + 16, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_821E450C"))) PPC_WEAK_FUNC(sub_821E450C);
PPC_FUNC_IMPL(__imp__sub_821E450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4510"))) PPC_WEAK_FUNC(sub_821E4510);
PPC_FUNC_IMPL(__imp__sub_821E4510) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
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

__attribute__((alias("__imp__sub_821E4564"))) PPC_WEAK_FUNC(sub_821E4564);
PPC_FUNC_IMPL(__imp__sub_821E4564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4568"))) PPC_WEAK_FUNC(sub_821E4568);
PPC_FUNC_IMPL(__imp__sub_821E4568) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stb r10,16(r11)
	PPC_STORE_U8(r11.u32 + 16, ctx.r10.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
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

__attribute__((alias("__imp__sub_821E45E0"))) PPC_WEAK_FUNC(sub_821E45E0);
PPC_FUNC_IMPL(__imp__sub_821E45E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,1
	r11.s64 = 1;
	// lfs f0,44(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E45FC"))) PPC_WEAK_FUNC(sub_821E45FC);
PPC_FUNC_IMPL(__imp__sub_821E45FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4600"))) PPC_WEAK_FUNC(sub_821E4600);
PPC_FUNC_IMPL(__imp__sub_821E4600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,1
	r11.s64 = 1;
	// lfs f0,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E461C"))) PPC_WEAK_FUNC(sub_821E461C);
PPC_FUNC_IMPL(__imp__sub_821E461C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4620"))) PPC_WEAK_FUNC(sub_821E4620);
PPC_FUNC_IMPL(__imp__sub_821E4620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,1
	r11.s64 = 1;
	// lfs f0,52(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E463C"))) PPC_WEAK_FUNC(sub_821E463C);
PPC_FUNC_IMPL(__imp__sub_821E463C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4640"))) PPC_WEAK_FUNC(sub_821E4640);
PPC_FUNC_IMPL(__imp__sub_821E4640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,52(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f12,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-30144(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30144);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// fctiwz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E46B0"))) PPC_WEAK_FUNC(sub_821E46B0);
PPC_FUNC_IMPL(__imp__sub_821E46B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lwz r11,68(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821E475C"))) PPC_WEAK_FUNC(sub_821E475C);
PPC_FUNC_IMPL(__imp__sub_821E475C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4760"))) PPC_WEAK_FUNC(sub_821E4760);
PPC_FUNC_IMPL(__imp__sub_821E4760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// srawi r9,r26,8
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xFF) != 0);
	ctx.r9.s64 = r26.s32 >> 8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// srawi r11,r27,16
	xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFFFF) != 0);
	r11.s64 = r27.s32 >> 16;
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
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
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821E4854"))) PPC_WEAK_FUNC(sub_821E4854);
PPC_FUNC_IMPL(__imp__sub_821E4854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4858"))) PPC_WEAK_FUNC(sub_821E4858);
PPC_FUNC_IMPL(__imp__sub_821E4858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821E48B0"))) PPC_WEAK_FUNC(sub_821E48B0);
PPC_FUNC_IMPL(__imp__sub_821E48B0) {
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
	// bl 0x821e2178
	sub_821E2178(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e48e0
	if (cr0.eq) goto loc_821E48E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_821E48E0:
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

__attribute__((alias("__imp__sub_821E48F4"))) PPC_WEAK_FUNC(sub_821E48F4);
PPC_FUNC_IMPL(__imp__sub_821E48F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E48F8"))) PPC_WEAK_FUNC(sub_821E48F8);
PPC_FUNC_IMPL(__imp__sub_821E48F8) {
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
	// bl 0x821e21e0
	sub_821E21E0(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e4940
	if (cr0.eq) goto loc_821E4940;
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
loc_821E4940:
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

__attribute__((alias("__imp__sub_821E4954"))) PPC_WEAK_FUNC(sub_821E4954);
PPC_FUNC_IMPL(__imp__sub_821E4954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4958"))) PPC_WEAK_FUNC(sub_821E4958);
PPC_FUNC_IMPL(__imp__sub_821E4958) {
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
	// bl 0x82146d40
	sub_82146D40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x821e49a4
	if (cr6.eq) goto loc_821E49A4;
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
loc_821E49A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821E49B0"))) PPC_WEAK_FUNC(sub_821E49B0);
PPC_FUNC_IMPL(__imp__sub_821E49B0) {
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
	// bl 0x821e2490
	sub_821E2490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x821e49fc
	if (cr6.eq) goto loc_821E49FC;
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
loc_821E49FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821E4A08"))) PPC_WEAK_FUNC(sub_821E4A08);
PPC_FUNC_IMPL(__imp__sub_821E4A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f31{};
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
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x821e4a34
	if (!cr6.eq) goto loc_821E4A34;
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// bl 0x821e1f68
	sub_821E1F68(ctx, base);
	// b 0x821e4a68
	goto loc_821E4A68;
loc_821E4A34:
	// lwz r11,96(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x821e4a4c
	if (!cr6.eq) goto loc_821E4A4C;
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// bl 0x821e42d8
	sub_821E42D8(ctx, base);
	// b 0x821e4a68
	goto loc_821E4A68;
loc_821E4A4C:
	// lwz r11,88(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x821e4a68
	if (!cr6.eq) goto loc_821E4A68;
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821e3e48
	sub_821E3E48(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
loc_821E4A68:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-16(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E4A80"))) PPC_WEAK_FUNC(sub_821E4A80);
PPC_FUNC_IMPL(__imp__sub_821E4A80) {
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
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e4ab0
	if (cr0.eq) goto loc_821E4AB0;
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
loc_821E4AB0:
	// li r29,0
	r29.s64 = 0;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r29.u32);
	// beq 0x821e4ae8
	if (cr0.eq) goto loc_821E4AE8;
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
loc_821E4AE8:
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// stw r29,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e4b0c
	if (cr0.eq) goto loc_821E4B0C;
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
loc_821E4B0C:
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821e4b40
	if (cr0.eq) goto loc_821E4B40;
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
loc_821E4B40:
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// stw r29,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821e4b74
	if (cr0.eq) goto loc_821E4B74;
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
loc_821E4B74:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// stw r29,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e4b98
	if (cr0.eq) goto loc_821E4B98;
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
loc_821E4B98:
	// stw r29,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r29.u32);
	// bl 0x821e2308
	sub_821E2308(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// stw r3,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8231e980
	sub_8231E980(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// addi r4,r11,3220
	ctx.r4.s64 = r11.s64 + 3220;
	// bl 0x821e4958
	sub_821E4958(ctx, base);
	// lwz r28,152(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// stw r3,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r3.u32);
	// bl 0x821e2430
	sub_821E2430(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,3204
	ctx.r4.s64 = r11.s64 + 3204;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// addi r4,r11,3188
	ctx.r4.s64 = r11.s64 + 3188;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x821e49b0
	sub_821E49B0(ctx, base);
	// lwz r28,152(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// bl 0x821b84b8
	sub_821B84B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,3168
	ctx.r4.s64 = r11.s64 + 3168;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x821da1a8
	sub_821DA1A8(ctx, base);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x821ea0f8
	sub_821EA0F8(ctx, base);
	// bl 0x821e2368
	sub_821E2368(ctx, base);
	// stw r3,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r3.u32);
	// lwz r11,260(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, r11.u32);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r8,260(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// stb r29,64(r11)
	PPC_STORE_U8(r11.u32 + 64, r29.u8);
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stw r8,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r8.u32);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// stb r9,160(r11)
	PPC_STORE_U8(r11.u32 + 160, ctx.r9.u8);
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r9.u32);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// stw r10,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r10.u32);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821E4CB8"))) PPC_WEAK_FUNC(sub_821E4CB8);
PPC_FUNC_IMPL(__imp__sub_821E4CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// bl 0x82318130
	sub_82318130(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x821c7a20
	sub_821C7A20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
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

__attribute__((alias("__imp__sub_821E4D3C"))) PPC_WEAK_FUNC(sub_821E4D3C);
PPC_FUNC_IMPL(__imp__sub_821E4D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4D40"))) PPC_WEAK_FUNC(sub_821E4D40);
PPC_FUNC_IMPL(__imp__sub_821E4D40) {
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
	// li r3,24
	ctx.r3.s64 = 24;
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

__attribute__((alias("__imp__sub_821E4D94"))) PPC_WEAK_FUNC(sub_821E4D94);
PPC_FUNC_IMPL(__imp__sub_821E4D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4D98"))) PPC_WEAK_FUNC(sub_821E4D98);
PPC_FUNC_IMPL(__imp__sub_821E4D98) {
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
	// bl 0x821e48b0
	sub_821E48B0(ctx, base);
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

__attribute__((alias("__imp__sub_821E4DFC"))) PPC_WEAK_FUNC(sub_821E4DFC);
PPC_FUNC_IMPL(__imp__sub_821E4DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4E00"))) PPC_WEAK_FUNC(sub_821E4E00);
PPC_FUNC_IMPL(__imp__sub_821E4E00) {
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
	// bl 0x821e48f8
	sub_821E48F8(ctx, base);
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

__attribute__((alias("__imp__sub_821E4E64"))) PPC_WEAK_FUNC(sub_821E4E64);
PPC_FUNC_IMPL(__imp__sub_821E4E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4E68"))) PPC_WEAK_FUNC(sub_821E4E68);
PPC_FUNC_IMPL(__imp__sub_821E4E68) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x821e4ea4
	if (cr6.eq) goto loc_821E4EA4;
	// subf. r5,r4,r11
	ctx.r5.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x821e4ea4
	if (cr0.eq) goto loc_821E4EA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_821E4EA4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
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

__attribute__((alias("__imp__sub_821E4ECC"))) PPC_WEAK_FUNC(sub_821E4ECC);
PPC_FUNC_IMPL(__imp__sub_821E4ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4ED0"))) PPC_WEAK_FUNC(sub_821E4ED0);
PPC_FUNC_IMPL(__imp__sub_821E4ED0) {
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
	// b 0x821e4f00
	goto loc_821E4F00;
loc_821E4EF0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821E4F00:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x821e4ef0
	if (!cr6.eq) goto loc_821E4EF0;
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

__attribute__((alias("__imp__sub_821E4F28"))) PPC_WEAK_FUNC(sub_821E4F28);
PPC_FUNC_IMPL(__imp__sub_821E4F28) {
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
	// addi r31,r3,212
	r31.s64 = ctx.r3.s64 + 212;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x821e4f78
	goto loc_821E4F78;
loc_821E4F4C:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bne cr6,0x821e4f74
	if (!cr6.eq) goto loc_821E4F74;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821e4d40
	sub_821E4D40(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821e4f78
	goto loc_821E4F78;
loc_821E4F74:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_821E4F78:
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
	// bne 0x821e4f4c
	if (!cr0.eq) goto loc_821E4F4C;
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

__attribute__((alias("__imp__sub_821E4FA8"))) PPC_WEAK_FUNC(sub_821E4FA8);
PPC_FUNC_IMPL(__imp__sub_821E4FA8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// stb r11,198(r30)
	PPC_STORE_U8(r30.u32 + 198, r11.u8);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bne 0x821e4ffc
	if (!cr0.eq) goto loc_821E4FFC;
	// mftb r11
	r11.u64 = __rdtsc();
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
loc_821E4FFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82271840
	sub_82271840(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// bne 0x821e5020
	if (!cr0.eq) goto loc_821E5020;
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_821E5020:
	// lwz r3,160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r30,212
	ctx.r3.s64 = r30.s64 + 212;
	// bl 0x821e4ed0
	sub_821E4ED0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,208(r30)
	PPC_STORE_U8(r30.u32 + 208, r11.u8);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
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

__attribute__((alias("__imp__sub_821E5080"))) PPC_WEAK_FUNC(sub_821E5080);
PPC_FUNC_IMPL(__imp__sub_821E5080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,4184(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 4184);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
	// clrlwi. r11,r8,31
	r11.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12220
	r29.s64 = r11.s64 + 12220;
	// bne 0x821e50f0
	if (!cr0.eq) goto loc_821E50F0;
	// ori r11,r8,1
	r11.u64 = ctx.r8.u64 | 1;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3784
	ctx.r4.s64 = r11.s64 + 3784;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E50F0:
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
	// beq 0x821e5118
	if (cr0.eq) goto loc_821E5118;
	// lwz r3,172(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 172);
	// bl 0x821ea0f8
	sub_821EA0F8(ctx, base);
loc_821E5110:
	// stw r24,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r24.u32);
	// b 0x821e6048
	goto loc_821E6048;
loc_821E5118:
	// rlwinm. r11,r8,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12216
	r29.s64 = r11.s64 + 12216;
	// bne 0x821e5144
	if (!cr0.eq) goto loc_821E5144;
	// ori r11,r8,2
	r11.u64 = ctx.r8.u64 | 2;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3772
	ctx.r4.s64 = r11.s64 + 3772;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5144:
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
	// beq 0x821e5188
	if (cr0.eq) goto loc_821E5188;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E5188:
	// rlwinm. r11,r8,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12212
	r29.s64 = r11.s64 + 12212;
	// bne 0x821e51b4
	if (!cr0.eq) goto loc_821E51B4;
	// ori r11,r8,4
	r11.u64 = ctx.r8.u64 | 4;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3764
	ctx.r4.s64 = r11.s64 + 3764;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E51B4:
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
	// beq 0x821e51e0
	if (cr0.eq) goto loc_821E51E0;
	// lwz r11,200(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 200);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r24,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x821e6050
	goto loc_821E6050;
loc_821E51E0:
	// rlwinm. r11,r8,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12208
	r29.s64 = r11.s64 + 12208;
	// bne 0x821e520c
	if (!cr0.eq) goto loc_821E520C;
	// ori r11,r8,8
	r11.u64 = ctx.r8.u64 | 8;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3748
	ctx.r4.s64 = r11.s64 + 3748;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E520C:
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
	// beq 0x821e5238
	if (cr0.eq) goto loc_821E5238;
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r24,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x821e6050
	goto loc_821E6050;
loc_821E5238:
	// rlwinm. r11,r8,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12204
	r29.s64 = r11.s64 + 12204;
	// bne 0x821e5264
	if (!cr0.eq) goto loc_821E5264;
	// ori r11,r8,16
	r11.u64 = ctx.r8.u64 | 16;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3732
	ctx.r4.s64 = r11.s64 + 3732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5264:
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
	// beq 0x821e5290
	if (cr0.eq) goto loc_821E5290;
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r24,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x821e6050
	goto loc_821E6050;
loc_821E5290:
	// rlwinm. r11,r8,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12200
	r29.s64 = r11.s64 + 12200;
	// bne 0x821e52bc
	if (!cr0.eq) goto loc_821E52BC;
	// ori r11,r8,32
	r11.u64 = ctx.r8.u64 | 32;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3712
	ctx.r4.s64 = r11.s64 + 3712;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E52BC:
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
	// beq 0x821e52ec
	if (cr0.eq) goto loc_821E52EC;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lbz r11,10688(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 10688);
	// stw r24,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x821e6050
	goto loc_821E6050;
loc_821E52EC:
	// rlwinm. r11,r8,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12196
	r29.s64 = r11.s64 + 12196;
	// bne 0x821e5318
	if (!cr0.eq) goto loc_821E5318;
	// ori r11,r8,64
	r11.u64 = ctx.r8.u64 | 64;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3688
	ctx.r4.s64 = r11.s64 + 3688;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5318:
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
	// beq 0x821e5358
	if (cr0.eq) goto loc_821E5358;
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,10688(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10688, r11.u8);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E5358:
	// rlwinm. r11,r8,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12192
	r29.s64 = r11.s64 + 12192;
	// bne 0x821e5384
	if (!cr0.eq) goto loc_821E5384;
	// ori r11,r8,128
	r11.u64 = ctx.r8.u64 | 128;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3676
	ctx.r4.s64 = r11.s64 + 3676;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5384:
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
	// beq 0x821e53d4
	if (cr0.eq) goto loc_821E53D4;
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
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E53D4:
	// rlwinm. r11,r8,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12188
	r29.s64 = r11.s64 + 12188;
	// bne 0x821e5400
	if (!cr0.eq) goto loc_821E5400;
	// ori r11,r8,256
	r11.u64 = ctx.r8.u64 | 256;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3660
	ctx.r4.s64 = r11.s64 + 3660;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5400:
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
	// beq 0x821e545c
	if (cr0.eq) goto loc_821E545C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e4510
	sub_821E4510(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5458
	if (cr6.eq) goto loc_821E5458;
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
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_821E5450:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821e604c
	goto loc_821E604C;
loc_821E5458:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E545C:
	// rlwinm. r11,r8,0,22,22
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12184
	r29.s64 = r11.s64 + 12184;
	// bne 0x821e5488
	if (!cr0.eq) goto loc_821E5488;
	// ori r11,r8,512
	r11.u64 = ctx.r8.u64 | 512;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3644
	ctx.r4.s64 = r11.s64 + 3644;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5488:
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
	// beq 0x821e54e0
	if (cr0.eq) goto loc_821E54E0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821e4568
	sub_821E4568(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e54dc
	if (cr6.eq) goto loc_821E54DC;
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
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E54DC:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E54E0:
	// rlwinm. r11,r8,0,21,21
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12180
	r29.s64 = r11.s64 + 12180;
	// bne 0x821e550c
	if (!cr0.eq) goto loc_821E550C;
	// ori r11,r8,1024
	r11.u64 = ctx.r8.u64 | 1024;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3628
	ctx.r4.s64 = r11.s64 + 3628;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E550C:
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
	// beq 0x821e5564
	if (cr0.eq) goto loc_821E5564;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821e4490
	sub_821E4490(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5560
	if (cr6.eq) goto loc_821E5560;
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
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5560:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5564:
	// rlwinm. r11,r8,0,20,20
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12176
	r29.s64 = r11.s64 + 12176;
	// bne 0x821e5590
	if (!cr0.eq) goto loc_821E5590;
	// ori r11,r8,2048
	r11.u64 = ctx.r8.u64 | 2048;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3612
	ctx.r4.s64 = r11.s64 + 3612;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5590:
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
	// beq 0x821e55bc
	if (cr0.eq) goto loc_821E55BC;
	// lbz r11,197(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 197);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r24,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x821e6050
	goto loc_821E6050;
loc_821E55BC:
	// rlwinm. r11,r8,0,19,19
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12172
	r29.s64 = r11.s64 + 12172;
	// bne 0x821e55e8
	if (!cr0.eq) goto loc_821E55E8;
	// ori r11,r8,4096
	r11.u64 = ctx.r8.u64 | 4096;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3592
	ctx.r4.s64 = r11.s64 + 3592;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E55E8:
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
	// beq 0x821e5624
	if (cr0.eq) goto loc_821E5624;
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
	// stb r11,197(r28)
	PPC_STORE_U8(r28.u32 + 197, r11.u8);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E5624:
	// rlwinm. r11,r8,0,18,18
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12168
	r29.s64 = r11.s64 + 12168;
	// bne 0x821e5650
	if (!cr0.eq) goto loc_821E5650;
	// ori r11,r8,8192
	r11.u64 = ctx.r8.u64 | 8192;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3576
	ctx.r4.s64 = r11.s64 + 3576;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5650:
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
	// beq 0x821e56b8
	if (cr0.eq) goto loc_821E56B8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r30,r11,1
	r30.u64 = r11.u64 ^ 1;
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r30,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r30.u8);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E56B8:
	// rlwinm. r11,r8,0,17,17
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12164
	r29.s64 = r11.s64 + 12164;
	// bne 0x821e56e4
	if (!cr0.eq) goto loc_821E56E4;
	// ori r11,r8,16384
	r11.u64 = ctx.r8.u64 | 16384;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3560
	ctx.r4.s64 = r11.s64 + 3560;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E56E4:
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
	// beq 0x821e5734
	if (cr0.eq) goto loc_821E5734;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// stw r24,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x821e604c
	goto loc_821E604C;
loc_821E5734:
	// rlwinm. r11,r8,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12160
	r29.s64 = r11.s64 + 12160;
	// bne 0x821e5760
	if (!cr0.eq) goto loc_821E5760;
	// ori r11,r8,32768
	r11.u64 = ctx.r8.u64 | 32768;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3544
	ctx.r4.s64 = r11.s64 + 3544;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5760:
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
	// beq 0x821e57b4
	if (cr0.eq) goto loc_821E57B4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821e45e0
	sub_821E45E0(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e57b4
	if (cr6.eq) goto loc_821E57B4;
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
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E57B4:
	// rlwinm. r11,r8,0,15,15
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12156
	r29.s64 = r11.s64 + 12156;
	// bne 0x821e57e0
	if (!cr0.eq) goto loc_821E57E0;
	// oris r11,r8,1
	r11.u64 = ctx.r8.u64 | 65536;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3528
	ctx.r4.s64 = r11.s64 + 3528;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E57E0:
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
	// beq 0x821e5834
	if (cr0.eq) goto loc_821E5834;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x821e4600
	sub_821E4600(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5834
	if (cr6.eq) goto loc_821E5834;
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
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5834:
	// rlwinm. r11,r8,0,14,14
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12152
	r29.s64 = r11.s64 + 12152;
	// bne 0x821e5860
	if (!cr0.eq) goto loc_821E5860;
	// oris r11,r8,2
	r11.u64 = ctx.r8.u64 | 131072;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3512
	ctx.r4.s64 = r11.s64 + 3512;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5860:
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
	// beq 0x821e58b4
	if (cr0.eq) goto loc_821E58B4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821e4620
	sub_821E4620(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e58b4
	if (cr6.eq) goto loc_821E58B4;
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
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E58B4:
	// rlwinm. r11,r8,0,13,13
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12148
	r29.s64 = r11.s64 + 12148;
	// bne 0x821e58e0
	if (!cr0.eq) goto loc_821E58E0;
	// oris r11,r8,4
	r11.u64 = ctx.r8.u64 | 262144;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3492
	ctx.r4.s64 = r11.s64 + 3492;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E58E0:
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
	// beq 0x821e5934
	if (cr0.eq) goto loc_821E5934;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x821e4640
	sub_821E4640(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5934
	if (cr6.eq) goto loc_821E5934;
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
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5934:
	// rlwinm. r11,r8,0,12,12
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12144
	r29.s64 = r11.s64 + 12144;
	// bne 0x821e5960
	if (!cr0.eq) goto loc_821E5960;
	// oris r11,r8,8
	r11.u64 = ctx.r8.u64 | 524288;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3476
	ctx.r4.s64 = r11.s64 + 3476;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5960:
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
	// beq 0x821e59b8
	if (cr0.eq) goto loc_821E59B8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821e46b0
	sub_821E46B0(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e59b4
	if (cr6.eq) goto loc_821E59B4;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E59B4:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E59B8:
	// rlwinm. r11,r8,0,11,11
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12140
	r29.s64 = r11.s64 + 12140;
	// bne 0x821e59e4
	if (!cr0.eq) goto loc_821E59E4;
	// oris r11,r8,16
	r11.u64 = ctx.r8.u64 | 1048576;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3452
	ctx.r4.s64 = r11.s64 + 3452;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E59E4:
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
	// beq 0x821e5a3c
	if (cr0.eq) goto loc_821E5A3C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x821e4760
	sub_821E4760(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5a38
	if (cr6.eq) goto loc_821E5A38;
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5A38:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5A3C:
	// rlwinm. r11,r8,0,10,10
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12136
	r29.s64 = r11.s64 + 12136;
	// bne 0x821e5a68
	if (!cr0.eq) goto loc_821E5A68;
	// oris r11,r8,32
	r11.u64 = ctx.r8.u64 | 2097152;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3440
	ctx.r4.s64 = r11.s64 + 3440;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5A68:
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
	// beq 0x821e5ac0
	if (cr0.eq) goto loc_821E5AC0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821e4858
	sub_821E4858(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5abc
	if (cr6.eq) goto loc_821E5ABC;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5ABC:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5AC0:
	// rlwinm. r11,r8,0,9,9
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12132
	r29.s64 = r11.s64 + 12132;
	// bne 0x821e5aec
	if (!cr0.eq) goto loc_821E5AEC;
	// oris r11,r8,64
	r11.u64 = ctx.r8.u64 | 4194304;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3424
	ctx.r4.s64 = r11.s64 + 3424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5AEC:
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
	// beq 0x821e5b44
	if (cr0.eq) goto loc_821E5B44;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x821e4cb8
	sub_821E4CB8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5b40
	if (cr6.eq) goto loc_821E5B40;
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5B40:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5B44:
	// rlwinm. r11,r8,0,8,8
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12128
	r29.s64 = r11.s64 + 12128;
	// bne 0x821e5b70
	if (!cr0.eq) goto loc_821E5B70;
	// oris r11,r8,128
	r11.u64 = ctx.r8.u64 | 8388608;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3416
	ctx.r4.s64 = r11.s64 + 3416;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5B70:
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
	// beq 0x821e5bc8
	if (cr0.eq) goto loc_821E5BC8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x821e43d0
	sub_821E43D0(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5bc4
	if (cr6.eq) goto loc_821E5BC4;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5BC4:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5BC8:
	// rlwinm. r11,r8,0,7,7
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12124
	r29.s64 = r11.s64 + 12124;
	// bne 0x821e5bf4
	if (!cr0.eq) goto loc_821E5BF4;
	// oris r11,r8,256
	r11.u64 = ctx.r8.u64 | 16777216;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3404
	ctx.r4.s64 = r11.s64 + 3404;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5BF4:
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
	// beq 0x821e5c4c
	if (cr0.eq) goto loc_821E5C4C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x821e4350
	sub_821E4350(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5c48
	if (cr6.eq) goto loc_821E5C48;
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5C48:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5C4C:
	// rlwinm. r11,r8,0,6,6
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12120
	r29.s64 = r11.s64 + 12120;
	// bne 0x821e5c78
	if (!cr0.eq) goto loc_821E5C78;
	// oris r11,r8,512
	r11.u64 = ctx.r8.u64 | 33554432;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3388
	ctx.r4.s64 = r11.s64 + 3388;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5C78:
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
	// beq 0x821e5cc0
	if (cr0.eq) goto loc_821E5CC0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x821bc5e0
	sub_821BC5E0(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x821bc5e0
	sub_821BC5E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821c6790
	sub_821C6790(ctx, base);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E5CC0:
	// rlwinm. r11,r8,0,5,5
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12116
	r29.s64 = r11.s64 + 12116;
	// bne 0x821e5cec
	if (!cr0.eq) goto loc_821E5CEC;
	// oris r11,r8,1024
	r11.u64 = ctx.r8.u64 | 67108864;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3368
	ctx.r4.s64 = r11.s64 + 3368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5CEC:
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
	// beq 0x821e5d40
	if (cr0.eq) goto loc_821E5D40;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x821cab20
	sub_821CAB20(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5d3c
	if (cr6.eq) goto loc_821E5D3C;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5D3C:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5D40:
	// rlwinm. r11,r8,0,4,4
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12112
	r29.s64 = r11.s64 + 12112;
	// bne 0x821e5d6c
	if (!cr0.eq) goto loc_821E5D6C;
	// oris r11,r8,2048
	r11.u64 = ctx.r8.u64 | 134217728;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3348
	ctx.r4.s64 = r11.s64 + 3348;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5D6C:
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
	// beq 0x821e5dfc
	if (cr0.eq) goto loc_821E5DFC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x821c59d0
	sub_821C59D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x821c93a8
	sub_821C93A8(ctx, base);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E5DFC:
	// rlwinm. r11,r8,0,3,3
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12108
	r29.s64 = r11.s64 + 12108;
	// bne 0x821e5e28
	if (!cr0.eq) goto loc_821E5E28;
	// oris r11,r8,4096
	r11.u64 = ctx.r8.u64 | 268435456;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3328
	ctx.r4.s64 = r11.s64 + 3328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5E28:
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
	// beq 0x821e5e58
	if (cr0.eq) goto loc_821E5E58;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x821c59d0
	sub_821C59D0(ctx, base);
	// bl 0x821c9480
	sub_821C9480(ctx, base);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E5E58:
	// rlwinm. r11,r8,0,2,2
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12104
	r29.s64 = r11.s64 + 12104;
	// bne 0x821e5e84
	if (!cr0.eq) goto loc_821E5E84;
	// oris r11,r8,8192
	r11.u64 = ctx.r8.u64 | 536870912;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3304
	ctx.r4.s64 = r11.s64 + 3304;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5E84:
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
	// beq 0x821e5eb4
	if (cr0.eq) goto loc_821E5EB4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x821c59d0
	sub_821C59D0(ctx, base);
	// bl 0x821c96e8
	sub_821C96E8(ctx, base);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E5EB4:
	// rlwinm. r11,r8,0,1,1
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12100
	r29.s64 = r11.s64 + 12100;
	// bne 0x821e5ee0
	if (!cr0.eq) goto loc_821E5EE0;
	// oris r11,r8,16384
	r11.u64 = ctx.r8.u64 | 1073741824;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3288
	ctx.r4.s64 = r11.s64 + 3288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5EE0:
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
	// beq 0x821e5f10
	if (cr0.eq) goto loc_821E5F10;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// bl 0x82270f48
	sub_82270F48(ctx, base);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E5F10:
	// rlwinm. r11,r8,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12096
	r29.s64 = r11.s64 + 12096;
	// bne 0x821e5f38
	if (!cr0.eq) goto loc_821E5F38;
	// oris r11,r8,32768
	r11.u64 = ctx.r8.u64 | 2147483648;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3272
	ctx.r4.s64 = r11.s64 + 3272;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821E5F38:
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
	// beq 0x821e5f64
	if (cr0.eq) goto loc_821E5F64;
	// bl 0x82270c08
	sub_82270C08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r24,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x821e604c
	goto loc_821E604C;
loc_821E5F64:
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,12092(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12092);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12088
	r29.s64 = ctx.r10.s64 + 12088;
	// bne 0x821e5f98
	if (!cr0.eq) goto loc_821E5F98;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12092(r30)
	PPC_STORE_U32(r30.u32 + 12092, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3260
	ctx.r4.s64 = r11.s64 + 3260;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12092(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12092);
loc_821E5F98:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821e5fe8
	if (cr0.eq) goto loc_821E5FE8;
	// lwz r11,160(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 160);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821e5fc4
	if (!cr0.eq) goto loc_821E5FC4;
	// mr r11,r24
	r11.u64 = r24.u64;
	// b 0x821e5fd4
	goto loc_821E5FD4;
loc_821E5FC4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821E5FD4:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r10,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r10.u32);
	// b 0x821e6050
	goto loc_821E6050;
loc_821E5FE8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12084
	r29.s64 = ctx.r10.s64 + 12084;
	// bne 0x821e6010
	if (!cr0.eq) goto loc_821E6010;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12092(r30)
	PPC_STORE_U32(r30.u32 + 12092, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3236
	ctx.r4.s64 = r11.s64 + 3236;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821E6010:
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
	// beq 0x821e6040
	if (cr0.eq) goto loc_821E6040;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E6040:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
loc_821E6048:
	// stw r24,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r24.u32);
loc_821E604C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821E6050:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_821E5088"))) PPC_WEAK_FUNC(sub_821E5088);
PPC_FUNC_IMPL(__imp__sub_821E5088) {
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
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
	// clrlwi. r11,r8,31
	r11.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12220
	r29.s64 = r11.s64 + 12220;
	// bne 0x821e50f0
	if (!cr0.eq) goto loc_821E50F0;
	// ori r11,r8,1
	r11.u64 = ctx.r8.u64 | 1;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3784
	ctx.r4.s64 = r11.s64 + 3784;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E50F0:
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
	// beq 0x821e5118
	if (cr0.eq) goto loc_821E5118;
	// lwz r3,172(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 172);
	// bl 0x821ea0f8
	sub_821EA0F8(ctx, base);
loc_821E5110:
	// stw r24,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r24.u32);
	// b 0x821e6048
	goto loc_821E6048;
loc_821E5118:
	// rlwinm. r11,r8,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12216
	r29.s64 = r11.s64 + 12216;
	// bne 0x821e5144
	if (!cr0.eq) goto loc_821E5144;
	// ori r11,r8,2
	r11.u64 = ctx.r8.u64 | 2;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3772
	ctx.r4.s64 = r11.s64 + 3772;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5144:
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
	// beq 0x821e5188
	if (cr0.eq) goto loc_821E5188;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E5188:
	// rlwinm. r11,r8,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12212
	r29.s64 = r11.s64 + 12212;
	// bne 0x821e51b4
	if (!cr0.eq) goto loc_821E51B4;
	// ori r11,r8,4
	r11.u64 = ctx.r8.u64 | 4;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3764
	ctx.r4.s64 = r11.s64 + 3764;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E51B4:
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
	// beq 0x821e51e0
	if (cr0.eq) goto loc_821E51E0;
	// lwz r11,200(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 200);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r24,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x821e6050
	goto loc_821E6050;
loc_821E51E0:
	// rlwinm. r11,r8,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12208
	r29.s64 = r11.s64 + 12208;
	// bne 0x821e520c
	if (!cr0.eq) goto loc_821E520C;
	// ori r11,r8,8
	r11.u64 = ctx.r8.u64 | 8;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3748
	ctx.r4.s64 = r11.s64 + 3748;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E520C:
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
	// beq 0x821e5238
	if (cr0.eq) goto loc_821E5238;
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r24,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x821e6050
	goto loc_821E6050;
loc_821E5238:
	// rlwinm. r11,r8,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12204
	r29.s64 = r11.s64 + 12204;
	// bne 0x821e5264
	if (!cr0.eq) goto loc_821E5264;
	// ori r11,r8,16
	r11.u64 = ctx.r8.u64 | 16;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3732
	ctx.r4.s64 = r11.s64 + 3732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5264:
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
	// beq 0x821e5290
	if (cr0.eq) goto loc_821E5290;
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r24,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x821e6050
	goto loc_821E6050;
loc_821E5290:
	// rlwinm. r11,r8,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12200
	r29.s64 = r11.s64 + 12200;
	// bne 0x821e52bc
	if (!cr0.eq) goto loc_821E52BC;
	// ori r11,r8,32
	r11.u64 = ctx.r8.u64 | 32;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3712
	ctx.r4.s64 = r11.s64 + 3712;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E52BC:
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
	// beq 0x821e52ec
	if (cr0.eq) goto loc_821E52EC;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lbz r11,10688(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 10688);
	// stw r24,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x821e6050
	goto loc_821E6050;
loc_821E52EC:
	// rlwinm. r11,r8,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12196
	r29.s64 = r11.s64 + 12196;
	// bne 0x821e5318
	if (!cr0.eq) goto loc_821E5318;
	// ori r11,r8,64
	r11.u64 = ctx.r8.u64 | 64;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3688
	ctx.r4.s64 = r11.s64 + 3688;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5318:
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
	// beq 0x821e5358
	if (cr0.eq) goto loc_821E5358;
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,10688(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10688, r11.u8);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E5358:
	// rlwinm. r11,r8,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12192
	r29.s64 = r11.s64 + 12192;
	// bne 0x821e5384
	if (!cr0.eq) goto loc_821E5384;
	// ori r11,r8,128
	r11.u64 = ctx.r8.u64 | 128;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3676
	ctx.r4.s64 = r11.s64 + 3676;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5384:
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
	// beq 0x821e53d4
	if (cr0.eq) goto loc_821E53D4;
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
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E53D4:
	// rlwinm. r11,r8,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12188
	r29.s64 = r11.s64 + 12188;
	// bne 0x821e5400
	if (!cr0.eq) goto loc_821E5400;
	// ori r11,r8,256
	r11.u64 = ctx.r8.u64 | 256;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3660
	ctx.r4.s64 = r11.s64 + 3660;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5400:
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
	// beq 0x821e545c
	if (cr0.eq) goto loc_821E545C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e4510
	sub_821E4510(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5458
	if (cr6.eq) goto loc_821E5458;
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
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_821E5450:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821e604c
	goto loc_821E604C;
loc_821E5458:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E545C:
	// rlwinm. r11,r8,0,22,22
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12184
	r29.s64 = r11.s64 + 12184;
	// bne 0x821e5488
	if (!cr0.eq) goto loc_821E5488;
	// ori r11,r8,512
	r11.u64 = ctx.r8.u64 | 512;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3644
	ctx.r4.s64 = r11.s64 + 3644;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5488:
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
	// beq 0x821e54e0
	if (cr0.eq) goto loc_821E54E0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821e4568
	sub_821E4568(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e54dc
	if (cr6.eq) goto loc_821E54DC;
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
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E54DC:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E54E0:
	// rlwinm. r11,r8,0,21,21
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12180
	r29.s64 = r11.s64 + 12180;
	// bne 0x821e550c
	if (!cr0.eq) goto loc_821E550C;
	// ori r11,r8,1024
	r11.u64 = ctx.r8.u64 | 1024;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3628
	ctx.r4.s64 = r11.s64 + 3628;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E550C:
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
	// beq 0x821e5564
	if (cr0.eq) goto loc_821E5564;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821e4490
	sub_821E4490(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5560
	if (cr6.eq) goto loc_821E5560;
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
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5560:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5564:
	// rlwinm. r11,r8,0,20,20
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12176
	r29.s64 = r11.s64 + 12176;
	// bne 0x821e5590
	if (!cr0.eq) goto loc_821E5590;
	// ori r11,r8,2048
	r11.u64 = ctx.r8.u64 | 2048;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3612
	ctx.r4.s64 = r11.s64 + 3612;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5590:
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
	// beq 0x821e55bc
	if (cr0.eq) goto loc_821E55BC;
	// lbz r11,197(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 197);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r24,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x821e6050
	goto loc_821E6050;
loc_821E55BC:
	// rlwinm. r11,r8,0,19,19
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12172
	r29.s64 = r11.s64 + 12172;
	// bne 0x821e55e8
	if (!cr0.eq) goto loc_821E55E8;
	// ori r11,r8,4096
	r11.u64 = ctx.r8.u64 | 4096;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3592
	ctx.r4.s64 = r11.s64 + 3592;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E55E8:
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
	// beq 0x821e5624
	if (cr0.eq) goto loc_821E5624;
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
	// stb r11,197(r28)
	PPC_STORE_U8(r28.u32 + 197, r11.u8);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E5624:
	// rlwinm. r11,r8,0,18,18
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12168
	r29.s64 = r11.s64 + 12168;
	// bne 0x821e5650
	if (!cr0.eq) goto loc_821E5650;
	// ori r11,r8,8192
	r11.u64 = ctx.r8.u64 | 8192;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3576
	ctx.r4.s64 = r11.s64 + 3576;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5650:
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
	// beq 0x821e56b8
	if (cr0.eq) goto loc_821E56B8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r30,r11,1
	r30.u64 = r11.u64 ^ 1;
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r30,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r30.u8);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E56B8:
	// rlwinm. r11,r8,0,17,17
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12164
	r29.s64 = r11.s64 + 12164;
	// bne 0x821e56e4
	if (!cr0.eq) goto loc_821E56E4;
	// ori r11,r8,16384
	r11.u64 = ctx.r8.u64 | 16384;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3560
	ctx.r4.s64 = r11.s64 + 3560;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E56E4:
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
	// beq 0x821e5734
	if (cr0.eq) goto loc_821E5734;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// stw r24,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x821e604c
	goto loc_821E604C;
loc_821E5734:
	// rlwinm. r11,r8,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12160
	r29.s64 = r11.s64 + 12160;
	// bne 0x821e5760
	if (!cr0.eq) goto loc_821E5760;
	// ori r11,r8,32768
	r11.u64 = ctx.r8.u64 | 32768;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3544
	ctx.r4.s64 = r11.s64 + 3544;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5760:
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
	// beq 0x821e57b4
	if (cr0.eq) goto loc_821E57B4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821e45e0
	sub_821E45E0(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e57b4
	if (cr6.eq) goto loc_821E57B4;
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
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E57B4:
	// rlwinm. r11,r8,0,15,15
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12156
	r29.s64 = r11.s64 + 12156;
	// bne 0x821e57e0
	if (!cr0.eq) goto loc_821E57E0;
	// oris r11,r8,1
	r11.u64 = ctx.r8.u64 | 65536;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3528
	ctx.r4.s64 = r11.s64 + 3528;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E57E0:
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
	// beq 0x821e5834
	if (cr0.eq) goto loc_821E5834;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x821e4600
	sub_821E4600(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5834
	if (cr6.eq) goto loc_821E5834;
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
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5834:
	// rlwinm. r11,r8,0,14,14
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12152
	r29.s64 = r11.s64 + 12152;
	// bne 0x821e5860
	if (!cr0.eq) goto loc_821E5860;
	// oris r11,r8,2
	r11.u64 = ctx.r8.u64 | 131072;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3512
	ctx.r4.s64 = r11.s64 + 3512;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5860:
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
	// beq 0x821e58b4
	if (cr0.eq) goto loc_821E58B4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821e4620
	sub_821E4620(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e58b4
	if (cr6.eq) goto loc_821E58B4;
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
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E58B4:
	// rlwinm. r11,r8,0,13,13
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12148
	r29.s64 = r11.s64 + 12148;
	// bne 0x821e58e0
	if (!cr0.eq) goto loc_821E58E0;
	// oris r11,r8,4
	r11.u64 = ctx.r8.u64 | 262144;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3492
	ctx.r4.s64 = r11.s64 + 3492;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E58E0:
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
	// beq 0x821e5934
	if (cr0.eq) goto loc_821E5934;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x821e4640
	sub_821E4640(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5934
	if (cr6.eq) goto loc_821E5934;
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
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5934:
	// rlwinm. r11,r8,0,12,12
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12144
	r29.s64 = r11.s64 + 12144;
	// bne 0x821e5960
	if (!cr0.eq) goto loc_821E5960;
	// oris r11,r8,8
	r11.u64 = ctx.r8.u64 | 524288;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3476
	ctx.r4.s64 = r11.s64 + 3476;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5960:
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
	// beq 0x821e59b8
	if (cr0.eq) goto loc_821E59B8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821e46b0
	sub_821E46B0(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e59b4
	if (cr6.eq) goto loc_821E59B4;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E59B4:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E59B8:
	// rlwinm. r11,r8,0,11,11
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12140
	r29.s64 = r11.s64 + 12140;
	// bne 0x821e59e4
	if (!cr0.eq) goto loc_821E59E4;
	// oris r11,r8,16
	r11.u64 = ctx.r8.u64 | 1048576;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3452
	ctx.r4.s64 = r11.s64 + 3452;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E59E4:
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
	// beq 0x821e5a3c
	if (cr0.eq) goto loc_821E5A3C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x821e4760
	sub_821E4760(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5a38
	if (cr6.eq) goto loc_821E5A38;
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5A38:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5A3C:
	// rlwinm. r11,r8,0,10,10
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12136
	r29.s64 = r11.s64 + 12136;
	// bne 0x821e5a68
	if (!cr0.eq) goto loc_821E5A68;
	// oris r11,r8,32
	r11.u64 = ctx.r8.u64 | 2097152;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3440
	ctx.r4.s64 = r11.s64 + 3440;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5A68:
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
	// beq 0x821e5ac0
	if (cr0.eq) goto loc_821E5AC0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821e4858
	sub_821E4858(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5abc
	if (cr6.eq) goto loc_821E5ABC;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5ABC:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5AC0:
	// rlwinm. r11,r8,0,9,9
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12132
	r29.s64 = r11.s64 + 12132;
	// bne 0x821e5aec
	if (!cr0.eq) goto loc_821E5AEC;
	// oris r11,r8,64
	r11.u64 = ctx.r8.u64 | 4194304;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3424
	ctx.r4.s64 = r11.s64 + 3424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5AEC:
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
	// beq 0x821e5b44
	if (cr0.eq) goto loc_821E5B44;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x821e4cb8
	sub_821E4CB8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5b40
	if (cr6.eq) goto loc_821E5B40;
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5B40:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5B44:
	// rlwinm. r11,r8,0,8,8
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12128
	r29.s64 = r11.s64 + 12128;
	// bne 0x821e5b70
	if (!cr0.eq) goto loc_821E5B70;
	// oris r11,r8,128
	r11.u64 = ctx.r8.u64 | 8388608;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3416
	ctx.r4.s64 = r11.s64 + 3416;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5B70:
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
	// beq 0x821e5bc8
	if (cr0.eq) goto loc_821E5BC8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x821e43d0
	sub_821E43D0(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5bc4
	if (cr6.eq) goto loc_821E5BC4;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5BC4:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5BC8:
	// rlwinm. r11,r8,0,7,7
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12124
	r29.s64 = r11.s64 + 12124;
	// bne 0x821e5bf4
	if (!cr0.eq) goto loc_821E5BF4;
	// oris r11,r8,256
	r11.u64 = ctx.r8.u64 | 16777216;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3404
	ctx.r4.s64 = r11.s64 + 3404;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5BF4:
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
	// beq 0x821e5c4c
	if (cr0.eq) goto loc_821E5C4C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x821e4350
	sub_821E4350(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5c48
	if (cr6.eq) goto loc_821E5C48;
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5C48:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5C4C:
	// rlwinm. r11,r8,0,6,6
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12120
	r29.s64 = r11.s64 + 12120;
	// bne 0x821e5c78
	if (!cr0.eq) goto loc_821E5C78;
	// oris r11,r8,512
	r11.u64 = ctx.r8.u64 | 33554432;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3388
	ctx.r4.s64 = r11.s64 + 3388;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5C78:
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
	// beq 0x821e5cc0
	if (cr0.eq) goto loc_821E5CC0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x821bc5e0
	sub_821BC5E0(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x821bc5e0
	sub_821BC5E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821c6790
	sub_821C6790(ctx, base);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E5CC0:
	// rlwinm. r11,r8,0,5,5
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12116
	r29.s64 = r11.s64 + 12116;
	// bne 0x821e5cec
	if (!cr0.eq) goto loc_821E5CEC;
	// oris r11,r8,1024
	r11.u64 = ctx.r8.u64 | 67108864;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3368
	ctx.r4.s64 = r11.s64 + 3368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5CEC:
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
	// beq 0x821e5d40
	if (cr0.eq) goto loc_821E5D40;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x821cab20
	sub_821CAB20(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821e5d3c
	if (cr6.eq) goto loc_821E5D3C;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e604c
	if (cr0.eq) goto loc_821E604C;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// b 0x821e5450
	goto loc_821E5450;
loc_821E5D3C:
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5D40:
	// rlwinm. r11,r8,0,4,4
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12112
	r29.s64 = r11.s64 + 12112;
	// bne 0x821e5d6c
	if (!cr0.eq) goto loc_821E5D6C;
	// oris r11,r8,2048
	r11.u64 = ctx.r8.u64 | 134217728;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3348
	ctx.r4.s64 = r11.s64 + 3348;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5D6C:
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
	// beq 0x821e5dfc
	if (cr0.eq) goto loc_821E5DFC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x821c59d0
	sub_821C59D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x821c93a8
	sub_821C93A8(ctx, base);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E5DFC:
	// rlwinm. r11,r8,0,3,3
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12108
	r29.s64 = r11.s64 + 12108;
	// bne 0x821e5e28
	if (!cr0.eq) goto loc_821E5E28;
	// oris r11,r8,4096
	r11.u64 = ctx.r8.u64 | 268435456;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3328
	ctx.r4.s64 = r11.s64 + 3328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5E28:
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
	// beq 0x821e5e58
	if (cr0.eq) goto loc_821E5E58;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x821c59d0
	sub_821C59D0(ctx, base);
	// bl 0x821c9480
	sub_821C9480(ctx, base);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E5E58:
	// rlwinm. r11,r8,0,2,2
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12104
	r29.s64 = r11.s64 + 12104;
	// bne 0x821e5e84
	if (!cr0.eq) goto loc_821E5E84;
	// oris r11,r8,8192
	r11.u64 = ctx.r8.u64 | 536870912;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3304
	ctx.r4.s64 = r11.s64 + 3304;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5E84:
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
	// beq 0x821e5eb4
	if (cr0.eq) goto loc_821E5EB4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x821c59d0
	sub_821C59D0(ctx, base);
	// bl 0x821c96e8
	sub_821C96E8(ctx, base);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E5EB4:
	// rlwinm. r11,r8,0,1,1
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12100
	r29.s64 = r11.s64 + 12100;
	// bne 0x821e5ee0
	if (!cr0.eq) goto loc_821E5EE0;
	// oris r11,r8,16384
	r11.u64 = ctx.r8.u64 | 1073741824;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3288
	ctx.r4.s64 = r11.s64 + 3288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r8,12224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12224);
loc_821E5EE0:
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
	// beq 0x821e5f10
	if (cr0.eq) goto loc_821E5F10;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// bl 0x82270f48
	sub_82270F48(ctx, base);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E5F10:
	// rlwinm. r11,r8,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,12096
	r29.s64 = r11.s64 + 12096;
	// bne 0x821e5f38
	if (!cr0.eq) goto loc_821E5F38;
	// oris r11,r8,32768
	r11.u64 = ctx.r8.u64 | 2147483648;
	// stw r11,12224(r30)
	PPC_STORE_U32(r30.u32 + 12224, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3272
	ctx.r4.s64 = r11.s64 + 3272;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821E5F38:
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
	// beq 0x821e5f64
	if (cr0.eq) goto loc_821E5F64;
	// bl 0x82270c08
	sub_82270C08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r24,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x821e604c
	goto loc_821E604C;
loc_821E5F64:
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,12092(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12092);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12088
	r29.s64 = ctx.r10.s64 + 12088;
	// bne 0x821e5f98
	if (!cr0.eq) goto loc_821E5F98;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12092(r30)
	PPC_STORE_U32(r30.u32 + 12092, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3260
	ctx.r4.s64 = r11.s64 + 3260;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12092(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12092);
loc_821E5F98:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821e5fe8
	if (cr0.eq) goto loc_821E5FE8;
	// lwz r11,160(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 160);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821e5fc4
	if (!cr0.eq) goto loc_821E5FC4;
	// mr r11,r24
	r11.u64 = r24.u64;
	// b 0x821e5fd4
	goto loc_821E5FD4;
loc_821E5FC4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821E5FD4:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r10,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r10.u32);
	// b 0x821e6050
	goto loc_821E6050;
loc_821E5FE8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12084
	r29.s64 = ctx.r10.s64 + 12084;
	// bne 0x821e6010
	if (!cr0.eq) goto loc_821E6010;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12092(r30)
	PPC_STORE_U32(r30.u32 + 12092, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3236
	ctx.r4.s64 = r11.s64 + 3236;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821E6010:
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
	// beq 0x821e6040
	if (cr0.eq) goto loc_821E6040;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821e5110
	goto loc_821E5110;
loc_821E6040:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
loc_821E6048:
	// stw r24,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r24.u32);
loc_821E604C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821E6050:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_821E6058"))) PPC_WEAK_FUNC(sub_821E6058);
PPC_FUNC_IMPL(__imp__sub_821E6058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6080"))) PPC_WEAK_FUNC(sub_821E6080);
PPC_FUNC_IMPL(__imp__sub_821E6080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E60A8"))) PPC_WEAK_FUNC(sub_821E60A8);
PPC_FUNC_IMPL(__imp__sub_821E60A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E60D0"))) PPC_WEAK_FUNC(sub_821E60D0);
PPC_FUNC_IMPL(__imp__sub_821E60D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E60F8"))) PPC_WEAK_FUNC(sub_821E60F8);
PPC_FUNC_IMPL(__imp__sub_821E60F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6120"))) PPC_WEAK_FUNC(sub_821E6120);
PPC_FUNC_IMPL(__imp__sub_821E6120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6148"))) PPC_WEAK_FUNC(sub_821E6148);
PPC_FUNC_IMPL(__imp__sub_821E6148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6170"))) PPC_WEAK_FUNC(sub_821E6170);
PPC_FUNC_IMPL(__imp__sub_821E6170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6198"))) PPC_WEAK_FUNC(sub_821E6198);
PPC_FUNC_IMPL(__imp__sub_821E6198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E61C0"))) PPC_WEAK_FUNC(sub_821E61C0);
PPC_FUNC_IMPL(__imp__sub_821E61C0) {
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

__attribute__((alias("__imp__sub_821E61E8"))) PPC_WEAK_FUNC(sub_821E61E8);
PPC_FUNC_IMPL(__imp__sub_821E61E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6210"))) PPC_WEAK_FUNC(sub_821E6210);
PPC_FUNC_IMPL(__imp__sub_821E6210) {
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

__attribute__((alias("__imp__sub_821E6238"))) PPC_WEAK_FUNC(sub_821E6238);
PPC_FUNC_IMPL(__imp__sub_821E6238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6260"))) PPC_WEAK_FUNC(sub_821E6260);
PPC_FUNC_IMPL(__imp__sub_821E6260) {
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

__attribute__((alias("__imp__sub_821E6288"))) PPC_WEAK_FUNC(sub_821E6288);
PPC_FUNC_IMPL(__imp__sub_821E6288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E62B0"))) PPC_WEAK_FUNC(sub_821E62B0);
PPC_FUNC_IMPL(__imp__sub_821E62B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E62D8"))) PPC_WEAK_FUNC(sub_821E62D8);
PPC_FUNC_IMPL(__imp__sub_821E62D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6300"))) PPC_WEAK_FUNC(sub_821E6300);
PPC_FUNC_IMPL(__imp__sub_821E6300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6328"))) PPC_WEAK_FUNC(sub_821E6328);
PPC_FUNC_IMPL(__imp__sub_821E6328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,17,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6350"))) PPC_WEAK_FUNC(sub_821E6350);
PPC_FUNC_IMPL(__imp__sub_821E6350) {
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

__attribute__((alias("__imp__sub_821E6378"))) PPC_WEAK_FUNC(sub_821E6378);
PPC_FUNC_IMPL(__imp__sub_821E6378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,16,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E63A0"))) PPC_WEAK_FUNC(sub_821E63A0);
PPC_FUNC_IMPL(__imp__sub_821E63A0) {
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

__attribute__((alias("__imp__sub_821E63C8"))) PPC_WEAK_FUNC(sub_821E63C8);
PPC_FUNC_IMPL(__imp__sub_821E63C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,15,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E63F0"))) PPC_WEAK_FUNC(sub_821E63F0);
PPC_FUNC_IMPL(__imp__sub_821E63F0) {
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

__attribute__((alias("__imp__sub_821E6418"))) PPC_WEAK_FUNC(sub_821E6418);
PPC_FUNC_IMPL(__imp__sub_821E6418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,14,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6440"))) PPC_WEAK_FUNC(sub_821E6440);
PPC_FUNC_IMPL(__imp__sub_821E6440) {
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

__attribute__((alias("__imp__sub_821E6468"))) PPC_WEAK_FUNC(sub_821E6468);
PPC_FUNC_IMPL(__imp__sub_821E6468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,13,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6490"))) PPC_WEAK_FUNC(sub_821E6490);
PPC_FUNC_IMPL(__imp__sub_821E6490) {
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

__attribute__((alias("__imp__sub_821E64B8"))) PPC_WEAK_FUNC(sub_821E64B8);
PPC_FUNC_IMPL(__imp__sub_821E64B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,12,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E64E0"))) PPC_WEAK_FUNC(sub_821E64E0);
PPC_FUNC_IMPL(__imp__sub_821E64E0) {
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

__attribute__((alias("__imp__sub_821E6508"))) PPC_WEAK_FUNC(sub_821E6508);
PPC_FUNC_IMPL(__imp__sub_821E6508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,11,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6530"))) PPC_WEAK_FUNC(sub_821E6530);
PPC_FUNC_IMPL(__imp__sub_821E6530) {
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

__attribute__((alias("__imp__sub_821E6558"))) PPC_WEAK_FUNC(sub_821E6558);
PPC_FUNC_IMPL(__imp__sub_821E6558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,10,8
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6580"))) PPC_WEAK_FUNC(sub_821E6580);
PPC_FUNC_IMPL(__imp__sub_821E6580) {
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

__attribute__((alias("__imp__sub_821E65A8"))) PPC_WEAK_FUNC(sub_821E65A8);
PPC_FUNC_IMPL(__imp__sub_821E65A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,9,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E65D0"))) PPC_WEAK_FUNC(sub_821E65D0);
PPC_FUNC_IMPL(__imp__sub_821E65D0) {
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

__attribute__((alias("__imp__sub_821E65F8"))) PPC_WEAK_FUNC(sub_821E65F8);
PPC_FUNC_IMPL(__imp__sub_821E65F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,8,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6620"))) PPC_WEAK_FUNC(sub_821E6620);
PPC_FUNC_IMPL(__imp__sub_821E6620) {
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

__attribute__((alias("__imp__sub_821E6648"))) PPC_WEAK_FUNC(sub_821E6648);
PPC_FUNC_IMPL(__imp__sub_821E6648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,7,5
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6670"))) PPC_WEAK_FUNC(sub_821E6670);
PPC_FUNC_IMPL(__imp__sub_821E6670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,6,4
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6698"))) PPC_WEAK_FUNC(sub_821E6698);
PPC_FUNC_IMPL(__imp__sub_821E6698) {
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

__attribute__((alias("__imp__sub_821E66C0"))) PPC_WEAK_FUNC(sub_821E66C0);
PPC_FUNC_IMPL(__imp__sub_821E66C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,5,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E66E8"))) PPC_WEAK_FUNC(sub_821E66E8);
PPC_FUNC_IMPL(__imp__sub_821E66E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,4,2
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6710"))) PPC_WEAK_FUNC(sub_821E6710);
PPC_FUNC_IMPL(__imp__sub_821E6710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,3,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6738"))) PPC_WEAK_FUNC(sub_821E6738);
PPC_FUNC_IMPL(__imp__sub_821E6738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6760"))) PPC_WEAK_FUNC(sub_821E6760);
PPC_FUNC_IMPL(__imp__sub_821E6760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12224
	r11.s64 = r11.s64 + 12224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12224
	ctx.r10.s64 = ctx.r10.s64 + 12224;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6788"))) PPC_WEAK_FUNC(sub_821E6788);
PPC_FUNC_IMPL(__imp__sub_821E6788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12092
	r11.s64 = r11.s64 + 12092;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12092
	ctx.r10.s64 = ctx.r10.s64 + 12092;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E67B0"))) PPC_WEAK_FUNC(sub_821E67B0);
PPC_FUNC_IMPL(__imp__sub_821E67B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12092
	r11.s64 = r11.s64 + 12092;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12092
	ctx.r10.s64 = ctx.r10.s64 + 12092;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E67D8"))) PPC_WEAK_FUNC(sub_821E67D8);
PPC_FUNC_IMPL(__imp__sub_821E67D8) {
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
	// blt cr6,0x821e6820
	if (cr6.lt) goto loc_821E6820;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_821E6820:
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
	// bl 0x821e23c8
	sub_821E23C8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x821e6858
	if (cr0.eq) goto loc_821E6858;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_821E6858:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x821e6878
	if (cr6.eq) goto loc_821E6878;
loc_821E6864:
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
	// bne 0x821e6864
	if (!cr0.eq) goto loc_821E6864;
loc_821E6878:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x821e68a0
	if (!cr0.eq) goto loc_821E68A0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x821e68a0
	if (cr0.eq) goto loc_821E68A0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_821E68A0:
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

__attribute__((alias("__imp__sub_821E68D4"))) PPC_WEAK_FUNC(sub_821E68D4);
PPC_FUNC_IMPL(__imp__sub_821E68D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E68D8"))) PPC_WEAK_FUNC(sub_821E68D8);
PPC_FUNC_IMPL(__imp__sub_821E68D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
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
	// lwz r16,5000(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 5000);
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r11,-24112
	r29.s64 = r11.s64 + -24112;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,-2968(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,18840
	r11.s64 = r11.s64 + 18840;
	// addi r10,r10,7544
	ctx.r10.s64 = ctx.r10.s64 + 7544;
	// addi r4,r11,36
	ctx.r4.s64 = r11.s64 + 36;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x821e4d98
	sub_821E4D98(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-8000
	ctx.r4.s64 = r11.s64 + -8000;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,68
	ctx.r5.s64 = r30.s64 + 68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,6396
	ctx.r4.s64 = r11.s64 + 6396;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,64
	ctx.r5.s64 = r30.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,6404
	ctx.r4.s64 = r11.s64 + 6404;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,60
	ctx.r5.s64 = r30.s64 + 60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,4972
	ctx.r4.s64 = r11.s64 + 4972;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,44
	ctx.r5.s64 = r30.s64 + 44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823199b8
	sub_823199B8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,4964
	ctx.r4.s64 = r11.s64 + 4964;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,196
	ctx.r5.s64 = r30.s64 + 196;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823197b0
	sub_823197B0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4952
	ctx.r3.s64 = r11.s64 + 4952;
	// bl 0x82358018
	sub_82358018(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e6a48
	if (cr0.eq) goto loc_821E6A48;
	// li r11,2
	r11.s64 = 2;
	// stw r11,200(r30)
	PPC_STORE_U32(r30.u32 + 200, r11.u32);
loc_821E6A48:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e3c68
	sub_821E3C68(ctx, base);
	// bl 0x821c8ab8
	sub_821C8AB8(ctx, base);
	// bl 0x821b2730
	sub_821B2730(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1990
	sub_821E1990(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,14024
	ctx.r4.s64 = r11.s64 + 14024;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e0f78
	sub_821E0F78(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,9464
	ctx.r4.s64 = r11.s64 + 9464;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e13b8
	sub_821E13B8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,11864
	ctx.r4.s64 = r11.s64 + 11864;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1110
	sub_821E1110(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,10544
	ctx.r4.s64 = r11.s64 + 10544;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821469d0
	sub_821469D0(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,10712
	ctx.r4.s64 = r11.s64 + 10712;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821405c8
	sub_821405C8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,10064
	ctx.r4.s64 = r11.s64 + 10064;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821debc8
	sub_821DEBC8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,14336
	ctx.r4.s64 = r11.s64 + 14336;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82141748
	sub_82141748(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,10376
	ctx.r4.s64 = r11.s64 + 10376;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821d34e8
	sub_821D34E8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,10232
	ctx.r4.s64 = r11.s64 + 10232;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821d9ce0
	sub_821D9CE0(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,11216
	ctx.r4.s64 = r11.s64 + 11216;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1220
	sub_821E1220(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,11048
	ctx.r4.s64 = r11.s64 + 11048;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1088
	sub_821E1088(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,9920
	ctx.r4.s64 = r11.s64 + 9920;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8214fa68
	sub_8214FA68(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,9632
	ctx.r4.s64 = r11.s64 + 9632;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1000
	sub_821E1000(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,9776
	ctx.r4.s64 = r11.s64 + 9776;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e14c8
	sub_821E14C8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,12200
	ctx.r4.s64 = r11.s64 + 12200;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821223e8
	sub_821223E8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,12368
	ctx.r4.s64 = r11.s64 + 12368;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1330
	sub_821E1330(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,11696
	ctx.r4.s64 = r11.s64 + 11696;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e12a8
	sub_821E12A8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,11528
	ctx.r4.s64 = r11.s64 + 11528;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1440
	sub_821E1440(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,12032
	ctx.r4.s64 = r11.s64 + 12032;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1550
	sub_821E1550(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,12536
	ctx.r4.s64 = r11.s64 + 12536;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e15d8
	sub_821E15D8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,12704
	ctx.r4.s64 = r11.s64 + 12704;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1770
	sub_821E1770(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,13208
	ctx.r4.s64 = r11.s64 + 13208;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e16e8
	sub_821E16E8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,13040
	ctx.r4.s64 = r11.s64 + 13040;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e17f8
	sub_821E17F8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,13376
	ctx.r4.s64 = r11.s64 + 13376;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1660
	sub_821E1660(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,12872
	ctx.r4.s64 = r11.s64 + 12872;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1880
	sub_821E1880(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,13688
	ctx.r4.s64 = r11.s64 + 13688;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1198
	sub_821E1198(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,10880
	ctx.r4.s64 = r11.s64 + 10880;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1a18
	sub_821E1A18(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,14168
	ctx.r4.s64 = r11.s64 + 14168;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1aa0
	sub_821E1AA0(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,14480
	ctx.r4.s64 = r11.s64 + 14480;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1b28
	sub_821E1B28(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,14648
	ctx.r4.s64 = r11.s64 + 14648;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821294d8
	sub_821294D8(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,9872
	ctx.r4.s64 = r11.s64 + 9872;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8214faf0
	sub_8214FAF0(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,14816
	ctx.r4.s64 = r11.s64 + 14816;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821bb908
	sub_821BB908(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,11360
	ctx.r4.s64 = r11.s64 + 11360;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1bb0
	sub_821E1BB0(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,14984
	ctx.r4.s64 = r11.s64 + 14984;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1908
	sub_821E1908(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,13856
	ctx.r4.s64 = r11.s64 + 13856;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b8258
	sub_821B8258(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,13544
	ctx.r4.s64 = r11.s64 + 13544;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// bl 0x821e0d88
	sub_821E0D88(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1c38
	sub_821E1C38(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,15152
	ctx.r4.s64 = r11.s64 + 15152;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1cc0
	sub_821E1CC0(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,15296
	ctx.r4.s64 = r11.s64 + 15296;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,4944
	ctx.r4.s64 = r11.s64 + 4944;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r11,4936
	ctx.r4.s64 = r11.s64 + 4936;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,4928
	ctx.r4.s64 = r11.s64 + 4928;
	// stw r10,136(r30)
	PPC_STORE_U32(r30.u32 + 136, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,4920
	ctx.r4.s64 = r11.s64 + 4920;
	// stw r10,140(r30)
	PPC_STORE_U32(r30.u32 + 140, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// addi r11,r30,40
	r11.s64 = r30.s64 + 40;
	// stw r3,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r3.u32);
	// li r3,84
	ctx.r3.s64 = 84;
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, r11.u32);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, r11.u32);
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, r11.u32);
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e6eac
	if (cr0.eq) goto loc_821E6EAC;
	// bl 0x82206f70
	sub_82206F70(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x821e6eb0
	goto loc_821E6EB0;
loc_821E6EAC:
	// li r11,0
	r11.s64 = 0;
loc_821E6EB0:
	// li r3,104
	ctx.r3.s64 = 104;
	// stw r11,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e6ed4
	if (cr0.eq) goto loc_821E6ED4;
	// bl 0x82223bd0
	sub_82223BD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x821e6ed8
	goto loc_821E6ED8;
loc_821E6ED4:
	// li r11,0
	r11.s64 = 0;
loc_821E6ED8:
	// stw r11,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,198(r30)
	PPC_STORE_U8(r30.u32 + 198, r11.u8);
	// bl 0x821e4a80
	sub_821E4A80(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821E68E0"))) PPC_WEAK_FUNC(sub_821E68E0);
PPC_FUNC_IMPL(__imp__sub_821E68E0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r11,-24112
	r29.s64 = r11.s64 + -24112;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,-2968(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,18840
	r11.s64 = r11.s64 + 18840;
	// addi r10,r10,7544
	ctx.r10.s64 = ctx.r10.s64 + 7544;
	// addi r4,r11,36
	ctx.r4.s64 = r11.s64 + 36;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x821e4d98
	sub_821E4D98(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-8000
	ctx.r4.s64 = r11.s64 + -8000;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,68
	ctx.r5.s64 = r30.s64 + 68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,6396
	ctx.r4.s64 = r11.s64 + 6396;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,64
	ctx.r5.s64 = r30.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,6404
	ctx.r4.s64 = r11.s64 + 6404;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,60
	ctx.r5.s64 = r30.s64 + 60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,4972
	ctx.r4.s64 = r11.s64 + 4972;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,44
	ctx.r5.s64 = r30.s64 + 44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823199b8
	sub_823199B8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,4964
	ctx.r4.s64 = r11.s64 + 4964;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,196
	ctx.r5.s64 = r30.s64 + 196;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823197b0
	sub_823197B0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4952
	ctx.r3.s64 = r11.s64 + 4952;
	// bl 0x82358018
	sub_82358018(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e6a48
	if (cr0.eq) goto loc_821E6A48;
	// li r11,2
	r11.s64 = 2;
	// stw r11,200(r30)
	PPC_STORE_U32(r30.u32 + 200, r11.u32);
loc_821E6A48:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e3c68
	sub_821E3C68(ctx, base);
	// bl 0x821c8ab8
	sub_821C8AB8(ctx, base);
	// bl 0x821b2730
	sub_821B2730(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1990
	sub_821E1990(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,14024
	ctx.r4.s64 = r11.s64 + 14024;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e0f78
	sub_821E0F78(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,9464
	ctx.r4.s64 = r11.s64 + 9464;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e13b8
	sub_821E13B8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,11864
	ctx.r4.s64 = r11.s64 + 11864;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1110
	sub_821E1110(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,10544
	ctx.r4.s64 = r11.s64 + 10544;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821469d0
	sub_821469D0(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,10712
	ctx.r4.s64 = r11.s64 + 10712;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821405c8
	sub_821405C8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,10064
	ctx.r4.s64 = r11.s64 + 10064;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821debc8
	sub_821DEBC8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,14336
	ctx.r4.s64 = r11.s64 + 14336;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82141748
	sub_82141748(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,10376
	ctx.r4.s64 = r11.s64 + 10376;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821d34e8
	sub_821D34E8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,10232
	ctx.r4.s64 = r11.s64 + 10232;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821d9ce0
	sub_821D9CE0(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,11216
	ctx.r4.s64 = r11.s64 + 11216;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1220
	sub_821E1220(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,11048
	ctx.r4.s64 = r11.s64 + 11048;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1088
	sub_821E1088(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,9920
	ctx.r4.s64 = r11.s64 + 9920;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8214fa68
	sub_8214FA68(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,9632
	ctx.r4.s64 = r11.s64 + 9632;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1000
	sub_821E1000(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,9776
	ctx.r4.s64 = r11.s64 + 9776;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e14c8
	sub_821E14C8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,12200
	ctx.r4.s64 = r11.s64 + 12200;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821223e8
	sub_821223E8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,12368
	ctx.r4.s64 = r11.s64 + 12368;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1330
	sub_821E1330(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,11696
	ctx.r4.s64 = r11.s64 + 11696;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e12a8
	sub_821E12A8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,11528
	ctx.r4.s64 = r11.s64 + 11528;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1440
	sub_821E1440(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,12032
	ctx.r4.s64 = r11.s64 + 12032;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1550
	sub_821E1550(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,12536
	ctx.r4.s64 = r11.s64 + 12536;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e15d8
	sub_821E15D8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,12704
	ctx.r4.s64 = r11.s64 + 12704;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1770
	sub_821E1770(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,13208
	ctx.r4.s64 = r11.s64 + 13208;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e16e8
	sub_821E16E8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,13040
	ctx.r4.s64 = r11.s64 + 13040;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e17f8
	sub_821E17F8(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,13376
	ctx.r4.s64 = r11.s64 + 13376;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1660
	sub_821E1660(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,12872
	ctx.r4.s64 = r11.s64 + 12872;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1880
	sub_821E1880(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,13688
	ctx.r4.s64 = r11.s64 + 13688;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1198
	sub_821E1198(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,10880
	ctx.r4.s64 = r11.s64 + 10880;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1a18
	sub_821E1A18(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,14168
	ctx.r4.s64 = r11.s64 + 14168;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1aa0
	sub_821E1AA0(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,14480
	ctx.r4.s64 = r11.s64 + 14480;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1b28
	sub_821E1B28(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,14648
	ctx.r4.s64 = r11.s64 + 14648;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821294d8
	sub_821294D8(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,9872
	ctx.r4.s64 = r11.s64 + 9872;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8214faf0
	sub_8214FAF0(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,14816
	ctx.r4.s64 = r11.s64 + 14816;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821bb908
	sub_821BB908(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,11360
	ctx.r4.s64 = r11.s64 + 11360;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1bb0
	sub_821E1BB0(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,14984
	ctx.r4.s64 = r11.s64 + 14984;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1908
	sub_821E1908(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,13856
	ctx.r4.s64 = r11.s64 + 13856;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b8258
	sub_821B8258(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,13544
	ctx.r4.s64 = r11.s64 + 13544;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// bl 0x821e0d88
	sub_821E0D88(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1c38
	sub_821E1C38(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,15152
	ctx.r4.s64 = r11.s64 + 15152;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e1cc0
	sub_821E1CC0(ctx, base);
	// lis r11,-32226
	r11.s64 = -2111963136;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,15296
	ctx.r4.s64 = r11.s64 + 15296;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,4944
	ctx.r4.s64 = r11.s64 + 4944;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r11,4936
	ctx.r4.s64 = r11.s64 + 4936;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,4928
	ctx.r4.s64 = r11.s64 + 4928;
	// stw r10,136(r30)
	PPC_STORE_U32(r30.u32 + 136, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,4920
	ctx.r4.s64 = r11.s64 + 4920;
	// stw r10,140(r30)
	PPC_STORE_U32(r30.u32 + 140, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// addi r11,r30,40
	r11.s64 = r30.s64 + 40;
	// stw r3,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r3.u32);
	// li r3,84
	ctx.r3.s64 = 84;
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, r11.u32);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, r11.u32);
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, r11.u32);
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e6eac
	if (cr0.eq) goto loc_821E6EAC;
	// bl 0x82206f70
	sub_82206F70(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x821e6eb0
	goto loc_821E6EB0;
loc_821E6EAC:
	// li r11,0
	r11.s64 = 0;
loc_821E6EB0:
	// li r3,104
	ctx.r3.s64 = 104;
	// stw r11,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e6ed4
	if (cr0.eq) goto loc_821E6ED4;
	// bl 0x82223bd0
	sub_82223BD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x821e6ed8
	goto loc_821E6ED8;
loc_821E6ED4:
	// li r11,0
	r11.s64 = 0;
loc_821E6ED8:
	// stw r11,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,198(r30)
	PPC_STORE_U8(r30.u32 + 198, r11.u8);
	// bl 0x821e4a80
	sub_821E4A80(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821E6EF4"))) PPC_WEAK_FUNC(sub_821E6EF4);
PPC_FUNC_IMPL(__imp__sub_821E6EF4) {
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

__attribute__((alias("__imp__sub_821E6F1C"))) PPC_WEAK_FUNC(sub_821E6F1C);
PPC_FUNC_IMPL(__imp__sub_821E6F1C) {
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

__attribute__((alias("__imp__sub_821E6F44"))) PPC_WEAK_FUNC(sub_821E6F44);
PPC_FUNC_IMPL(__imp__sub_821E6F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6F48"))) PPC_WEAK_FUNC(sub_821E6F48);
PPC_FUNC_IMPL(__imp__sub_821E6F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r30,11556(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 11556);
	// lwz r11,736(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 736);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x821e7064
	if (!cr6.eq) goto loc_821E7064;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d7030
	sub_821D7030(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f0,692(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 692);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x821e7064
	if (cr6.lt) goto loc_821E7064;
	// lfs f0,696(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 696);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bgt cr6,0x821e7064
	if (cr6.gt) goto loc_821E7064;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// blt cr6,0x821e7064
	if (cr6.lt) goto loc_821E7064;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x821e7064
	if (cr6.lt) goto loc_821E7064;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x821e7064
	if (!cr6.lt) goto loc_821E7064;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x821e7064
	if (!cr6.lt) goto loc_821E7064;
	// addi r4,r29,212
	ctx.r4.s64 = r29.s64 + 212;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x821e4e00
	sub_821E4E00(ctx, base);
	// lwz r11,216(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lwa r10,60(r29)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r29.u32 + 60));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r31
	PPC_STORE_U32(r31.u32, f0.u32);
	// lwa r10,64(r29)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r29.u32 + 64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// b 0x821e706c
	goto loc_821E706C;
loc_821E7064:
	// li r11,0
	r11.s64 = 0;
	// stb r11,217(r28)
	PPC_STORE_U8(r28.u32 + 217, r11.u8);
loc_821E706C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821E7078"))) PPC_WEAK_FUNC(sub_821E7078);
PPC_FUNC_IMPL(__imp__sub_821E7078) {
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
	// addi r30,r3,220
	r30.s64 = ctx.r3.s64 + 220;
	// lwz r31,224(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82239570
	sub_82239570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, xer);
	// beq cr6,0x821e70c4
	if (cr6.eq) goto loc_821E70C4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e4e68
	sub_821E4E68(ctx, base);
loc_821E70C4:
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

__attribute__((alias("__imp__sub_821E70DC"))) PPC_WEAK_FUNC(sub_821E70DC);
PPC_FUNC_IMPL(__imp__sub_821E70DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E70E0"))) PPC_WEAK_FUNC(sub_821E70E0);
PPC_FUNC_IMPL(__imp__sub_821E70E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x821e4ed0
	sub_821E4ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E70E4"))) PPC_WEAK_FUNC(sub_821E70E4);
PPC_FUNC_IMPL(__imp__sub_821E70E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E70E8"))) PPC_WEAK_FUNC(sub_821E70E8);
PPC_FUNC_IMPL(__imp__sub_821E70E8) {
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
	// beq cr6,0x821e7128
	if (cr6.eq) goto loc_821E7128;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821e7118
	if (cr0.eq) goto loc_821E7118;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_821E7118:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x821e713c
	goto loc_821E713C;
loc_821E7128:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x821e67d8
	sub_821E67D8(ctx, base);
loc_821E713C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E714C"))) PPC_WEAK_FUNC(sub_821E714C);
PPC_FUNC_IMPL(__imp__sub_821E714C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7150"))) PPC_WEAK_FUNC(sub_821E7150);
PPC_FUNC_IMPL(__imp__sub_821E7150) {
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
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r6,640
	ctx.r6.s64 = 640;
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,16
	ctx.r4.s64 = 16;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f13,9196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9196);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r10,r11,26012
	ctx.r10.s64 = r11.s64 + 26012;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r7,r7,-32164
	ctx.r7.s64 = ctx.r7.s64 + -32164;
	// addi r9,r11,5092
	ctx.r9.s64 = r11.s64 + 5092;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// li r30,1
	r30.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f12,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r8,r11,5084
	ctx.r8.s64 = r11.s64 + 5084;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stw r6,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r6.u32);
	// stw r5,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r5.u32);
	// stw r4,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r4.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// lwz r10,18972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r11.u64);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// addi r10,r31,212
	ctx.r10.s64 = r31.s64 + 212;
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r3,184(r31)
	PPC_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// stfs f0,176(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// stw r7,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r7.u32);
	// stb r11,197(r31)
	PPC_STORE_U8(r31.u32 + 197, r11.u8);
	// stb r11,198(r31)
	PPC_STORE_U8(r31.u32 + 198, r11.u8);
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// stb r11,208(r31)
	PPC_STORE_U8(r31.u32 + 208, r11.u8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
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

__attribute__((alias("__imp__sub_821E7298"))) PPC_WEAK_FUNC(sub_821E7298);
PPC_FUNC_IMPL(__imp__sub_821E7298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,44
	r11.s64 = ctx.r3.s64 + 44;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E72C0"))) PPC_WEAK_FUNC(sub_821E72C0);
PPC_FUNC_IMPL(__imp__sub_821E72C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E72C8"))) PPC_WEAK_FUNC(sub_821E72C8);
PPC_FUNC_IMPL(__imp__sub_821E72C8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 196, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E72D0"))) PPC_WEAK_FUNC(sub_821E72D0);
PPC_FUNC_IMPL(__imp__sub_821E72D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E72D8"))) PPC_WEAK_FUNC(sub_821E72D8);
PPC_FUNC_IMPL(__imp__sub_821E72D8) {
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
	// lwz r16,5240(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 5240);
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
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x821e7320
	if (cr0.eq) goto loc_821E7320;
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821E7320:
	// addi r3,r30,212
	ctx.r3.s64 = r30.s64 + 212;
	// bl 0x821e4ed0
	sub_821E4ED0(ctx, base);
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

__attribute__((alias("__imp__sub_821E72E0"))) PPC_WEAK_FUNC(sub_821E72E0);
PPC_FUNC_IMPL(__imp__sub_821E72E0) {
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
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x821e7320
	if (cr0.eq) goto loc_821E7320;
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821E7320:
	// addi r3,r30,212
	ctx.r3.s64 = r30.s64 + 212;
	// bl 0x821e4ed0
	sub_821E4ED0(ctx, base);
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

__attribute__((alias("__imp__sub_821E7348"))) PPC_WEAK_FUNC(sub_821E7348);
PPC_FUNC_IMPL(__imp__sub_821E7348) {
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

__attribute__((alias("__imp__sub_821E7370"))) PPC_WEAK_FUNC(sub_821E7370);
PPC_FUNC_IMPL(__imp__sub_821E7370) {
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
	// bl 0x821e70e0
	sub_821E70E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E739C"))) PPC_WEAK_FUNC(sub_821E739C);
PPC_FUNC_IMPL(__imp__sub_821E739C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E73A0"))) PPC_WEAK_FUNC(sub_821E73A0);
PPC_FUNC_IMPL(__imp__sub_821E73A0) {
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
	// addi r3,r3,220
	ctx.r3.s64 = ctx.r3.s64 + 220;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x821e70e8
	sub_821E70E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E73CC"))) PPC_WEAK_FUNC(sub_821E73CC);
PPC_FUNC_IMPL(__imp__sub_821E73CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E73D0"))) PPC_WEAK_FUNC(sub_821E73D0);
PPC_FUNC_IMPL(__imp__sub_821E73D0) {
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
	// bl 0x821e72e0
	sub_821E72E0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821e7400
	if (cr0.eq) goto loc_821E7400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_821E7400:
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

__attribute__((alias("__imp__sub_821E741C"))) PPC_WEAK_FUNC(sub_821E741C);
PPC_FUNC_IMPL(__imp__sub_821E741C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7420"))) PPC_WEAK_FUNC(sub_821E7420);
PPC_FUNC_IMPL(__imp__sub_821E7420) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,108
	ctx.r3.s64 = 108;
	// b 0x823567c0
	sub_823567C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E742C"))) PPC_WEAK_FUNC(sub_821E742C);
PPC_FUNC_IMPL(__imp__sub_821E742C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7430"))) PPC_WEAK_FUNC(sub_821E7430);
PPC_FUNC_IMPL(__imp__sub_821E7430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
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
	// lwz r16,5328(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 5328);
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
	// lwz r11,12232(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12232);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,12228
	r30.s64 = ctx.r9.s64 + 12228;
	// bne 0x821e747c
	if (!cr0.eq) goto loc_821E747C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12232, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,5304
	ctx.r4.s64 = r11.s64 + 5304;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821E747C:
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

__attribute__((alias("__imp__sub_821E7438"))) PPC_WEAK_FUNC(sub_821E7438);
PPC_FUNC_IMPL(__imp__sub_821E7438) {
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
	// lwz r11,12232(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12232);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,12228
	r30.s64 = ctx.r9.s64 + 12228;
	// bne 0x821e747c
	if (!cr0.eq) goto loc_821E747C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12232, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,5304
	ctx.r4.s64 = r11.s64 + 5304;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821E747C:
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

__attribute__((alias("__imp__sub_821E7490"))) PPC_WEAK_FUNC(sub_821E7490);
PPC_FUNC_IMPL(__imp__sub_821E7490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12232
	r11.s64 = r11.s64 + 12232;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12232
	ctx.r10.s64 = ctx.r10.s64 + 12232;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E74B8"))) PPC_WEAK_FUNC(sub_821E74B8);
PPC_FUNC_IMPL(__imp__sub_821E74B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r11,r11,11868
	r11.s64 = r11.s64 + 11868;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E74D0"))) PPC_WEAK_FUNC(sub_821E74D0);
PPC_FUNC_IMPL(__imp__sub_821E74D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r11,r11,11884
	r11.s64 = r11.s64 + 11884;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E74E8"))) PPC_WEAK_FUNC(sub_821E74E8);
PPC_FUNC_IMPL(__imp__sub_821E74E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq cr6,0x821e7524
	if (cr6.eq) goto loc_821E7524;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// addi r11,r11,5480
	r11.s64 = r11.s64 + 5480;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
loc_821E7524:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r10,5420
	ctx.r10.s64 = ctx.r10.s64 + 5420;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,5380
	r11.s64 = r11.s64 + 5380;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-16
	ctx.r10.s64 = r11.s64 + -16;
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
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

__attribute__((alias("__imp__sub_821E7584"))) PPC_WEAK_FUNC(sub_821E7584);
PPC_FUNC_IMPL(__imp__sub_821E7584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7588"))) PPC_WEAK_FUNC(sub_821E7588);
PPC_FUNC_IMPL(__imp__sub_821E7588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
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
	// lwz r16,5504(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 5504);
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
	// lwz r11,12240(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,12236
	r30.s64 = ctx.r9.s64 + 12236;
	// bne 0x821e75d4
	if (!cr0.eq) goto loc_821E75D4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12240, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,5488
	ctx.r4.s64 = r11.s64 + 5488;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821E75D4:
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

__attribute__((alias("__imp__sub_821E7590"))) PPC_WEAK_FUNC(sub_821E7590);
PPC_FUNC_IMPL(__imp__sub_821E7590) {
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
	// lwz r11,12240(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,12236
	r30.s64 = ctx.r9.s64 + 12236;
	// bne 0x821e75d4
	if (!cr0.eq) goto loc_821E75D4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12240, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,5488
	ctx.r4.s64 = r11.s64 + 5488;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821E75D4:
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

__attribute__((alias("__imp__sub_821E75E8"))) PPC_WEAK_FUNC(sub_821E75E8);
PPC_FUNC_IMPL(__imp__sub_821E75E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12240
	r11.s64 = r11.s64 + 12240;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12240
	ctx.r10.s64 = ctx.r10.s64 + 12240;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7610"))) PPC_WEAK_FUNC(sub_821E7610);
PPC_FUNC_IMPL(__imp__sub_821E7610) {
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
	// bl 0x821e7590
	sub_821E7590(ctx, base);
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

__attribute__((alias("__imp__sub_821E7640"))) PPC_WEAK_FUNC(sub_821E7640);
PPC_FUNC_IMPL(__imp__sub_821E7640) {
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
	// lwz r11,11864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11864);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f0,-12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -12);
	f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,-8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8);
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

__attribute__((alias("__imp__sub_821E76C0"))) PPC_WEAK_FUNC(sub_821E76C0);
PPC_FUNC_IMPL(__imp__sub_821E76C0) {
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r11,1712
	ctx.r6.s64 = r11.s64 + 1712;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e770c
	if (cr0.eq) goto loc_821E770C;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,-12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -12, temp.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r11.u32);
loc_821E770C:
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

__attribute__((alias("__imp__sub_821E7720"))) PPC_WEAK_FUNC(sub_821E7720);
PPC_FUNC_IMPL(__imp__sub_821E7720) {
	PPC_FUNC_PROLOGUE();
	// b 0x82317760
	sub_82317760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7724"))) PPC_WEAK_FUNC(sub_821E7724);
PPC_FUNC_IMPL(__imp__sub_821E7724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7728"))) PPC_WEAK_FUNC(sub_821E7728);
PPC_FUNC_IMPL(__imp__sub_821E7728) {
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
	// lwz r16,5576(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 5576);
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
	// addi r11,r11,5556
	r11.s64 = r11.s64 + 5556;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e7770
	if (cr0.eq) goto loc_821E7770;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_821E7770:
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

__attribute__((alias("__imp__sub_821E7730"))) PPC_WEAK_FUNC(sub_821E7730);
PPC_FUNC_IMPL(__imp__sub_821E7730) {
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
	// addi r11,r11,5556
	r11.s64 = r11.s64 + 5556;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e7770
	if (cr0.eq) goto loc_821E7770;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_821E7770:
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

__attribute__((alias("__imp__sub_821E7794"))) PPC_WEAK_FUNC(sub_821E7794);
PPC_FUNC_IMPL(__imp__sub_821E7794) {
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

__attribute__((alias("__imp__sub_821E77BC"))) PPC_WEAK_FUNC(sub_821E77BC);
PPC_FUNC_IMPL(__imp__sub_821E77BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E77C0"))) PPC_WEAK_FUNC(sub_821E77C0);
PPC_FUNC_IMPL(__imp__sub_821E77C0) {
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
	// beq 0x821e77f0
	if (cr0.eq) goto loc_821E77F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_821E77F0:
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

__attribute__((alias("__imp__sub_821E780C"))) PPC_WEAK_FUNC(sub_821E780C);
PPC_FUNC_IMPL(__imp__sub_821E780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7810"))) PPC_WEAK_FUNC(sub_821E7810);
PPC_FUNC_IMPL(__imp__sub_821E7810) {
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
	// lwz r16,5648(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 5648);
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
	// addi r11,r11,5556
	r11.s64 = r11.s64 + 5556;
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x821e7860
	if (cr6.eq) goto loc_821E7860;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_821E7860:
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

__attribute__((alias("__imp__sub_821E7818"))) PPC_WEAK_FUNC(sub_821E7818);
PPC_FUNC_IMPL(__imp__sub_821E7818) {
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
	// addi r11,r11,5556
	r11.s64 = r11.s64 + 5556;
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x821e7860
	if (cr6.eq) goto loc_821E7860;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_821E7860:
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

__attribute__((alias("__imp__sub_821E787C"))) PPC_WEAK_FUNC(sub_821E787C);
PPC_FUNC_IMPL(__imp__sub_821E787C) {
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

__attribute__((alias("__imp__sub_821E78A4"))) PPC_WEAK_FUNC(sub_821E78A4);
PPC_FUNC_IMPL(__imp__sub_821E78A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E78A8"))) PPC_WEAK_FUNC(sub_821E78A8);
PPC_FUNC_IMPL(__imp__sub_821E78A8) {
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
	// beq cr6,0x821e78f8
	if (cr6.eq) goto loc_821E78F8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821e78e0
	if (cr6.eq) goto loc_821E78E0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_821E78E0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq cr6,0x821e78f8
	if (cr6.eq) goto loc_821E78F8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_821E78F8:
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

__attribute__((alias("__imp__sub_821E7910"))) PPC_WEAK_FUNC(sub_821E7910);
PPC_FUNC_IMPL(__imp__sub_821E7910) {
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
	// beq 0x821e7950
	if (cr0.eq) goto loc_821E7950;
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
loc_821E7950:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x821e798c
	if (!cr6.eq) goto loc_821E798C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x821e797c
	if (cr0.eq) goto loc_821E797C;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x821e7980
	goto loc_821E7980;
loc_821E797C:
	// li r11,0
	r11.s64 = 0;
loc_821E7980:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x821e79dc
	goto loc_821E79DC;
loc_821E798C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x821e79c0
	if (!cr6.eq) goto loc_821E79C0;
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
	// b 0x821e79dc
	goto loc_821E79DC;
loc_821E79C0:
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
loc_821E79DC:
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

__attribute__((alias("__imp__sub_821E7A00"))) PPC_WEAK_FUNC(sub_821E7A00);
PPC_FUNC_IMPL(__imp__sub_821E7A00) {
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
	// beq 0x821e7a3c
	if (cr0.eq) goto loc_821E7A3C;
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
loc_821E7A3C:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x821e7a74
	if (!cr6.eq) goto loc_821E7A74;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821e7a68
	if (cr6.eq) goto loc_821E7A68;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// b 0x821e7a6c
	goto loc_821E7A6C;
loc_821E7A68:
	// stw r31,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r31.u32);
loc_821E7A6C:
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// b 0x821e7ab0
	goto loc_821E7AB0;
loc_821E7A74:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x821e7a9c
	if (!cr6.eq) goto loc_821E7A9C;
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
	// b 0x821e7ab0
	goto loc_821E7AB0;
loc_821E7A9C:
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
loc_821E7AB0:
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

__attribute__((alias("__imp__sub_821E7AC4"))) PPC_WEAK_FUNC(sub_821E7AC4);
PPC_FUNC_IMPL(__imp__sub_821E7AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7AC8"))) PPC_WEAK_FUNC(sub_821E7AC8);
PPC_FUNC_IMPL(__imp__sub_821E7AC8) {
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
	// bl 0x821e0f78
	sub_821E0F78(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r11,12004
	r31.s64 = r11.s64 + 12004;
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

__attribute__((alias("__imp__sub_821E7B28"))) PPC_WEAK_FUNC(sub_821E7B28);
PPC_FUNC_IMPL(__imp__sub_821E7B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821e76c0
	sub_821E76C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7B34"))) PPC_WEAK_FUNC(sub_821E7B34);
PPC_FUNC_IMPL(__imp__sub_821E7B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7B38"))) PPC_WEAK_FUNC(sub_821E7B38);
PPC_FUNC_IMPL(__imp__sub_821E7B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x821e7610
	sub_821E7610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7B44"))) PPC_WEAK_FUNC(sub_821E7B44);
PPC_FUNC_IMPL(__imp__sub_821E7B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7B48"))) PPC_WEAK_FUNC(sub_821E7B48);
PPC_FUNC_IMPL(__imp__sub_821E7B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821e7640
	sub_821E7640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7B54"))) PPC_WEAK_FUNC(sub_821E7B54);
PPC_FUNC_IMPL(__imp__sub_821E7B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7B58"))) PPC_WEAK_FUNC(sub_821E7B58);
PPC_FUNC_IMPL(__imp__sub_821E7B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821e82e0
	sub_821E82E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7B64"))) PPC_WEAK_FUNC(sub_821E7B64);
PPC_FUNC_IMPL(__imp__sub_821E7B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7B68"))) PPC_WEAK_FUNC(sub_821E7B68);
PPC_FUNC_IMPL(__imp__sub_821E7B68) {
	PPC_FUNC_PROLOGUE();
	// b 0x82354b48
	sub_82354B48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7B6C"))) PPC_WEAK_FUNC(sub_821E7B6C);
PPC_FUNC_IMPL(__imp__sub_821E7B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7B70"))) PPC_WEAK_FUNC(sub_821E7B70);
PPC_FUNC_IMPL(__imp__sub_821E7B70) {
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
	// lwz r16,5704(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 5704);
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
	// lwz r11,12248(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12248);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x821e7bf4
	if (!cr0.eq) goto loc_821E7BF4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12248, r11.u32);
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
	// bl 0x821e7590
	sub_821E7590(ctx, base);
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
	// stw r3,12244(r27)
	PPC_STORE_U32(r27.u32 + 12244, ctx.r3.u32);
	// b 0x821e7bf8
	goto loc_821E7BF8;
loc_821E7BF4:
	// lwz r3,12244(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 12244);
loc_821E7BF8:
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
	// beq 0x821e7c34
	if (cr0.eq) goto loc_821E7C34;
	// lwz r11,-16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x821e7cb0
	goto loc_821E7CB0;
loc_821E7C34:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x821e7c94
	if (!cr0.eq) goto loc_821E7C94;
	// addic. r11,r30,-20
	xer.ca = r30.u32 > 19;
	r11.s64 = r30.s64 + -20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821e7c58
	if (!cr0.eq) goto loc_821E7C58;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821e7c68
	goto loc_821E7C68;
loc_821E7C58:
	// lwz r11,-16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
loc_821E7C68:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
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
loc_821E7C94:
	// lwz r11,-16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_821E7CB0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821E7B78"))) PPC_WEAK_FUNC(sub_821E7B78);
PPC_FUNC_IMPL(__imp__sub_821E7B78) {
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
	// lwz r11,12248(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12248);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x821e7bf4
	if (!cr0.eq) goto loc_821E7BF4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12248, r11.u32);
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
	// bl 0x821e7590
	sub_821E7590(ctx, base);
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
	// stw r3,12244(r27)
	PPC_STORE_U32(r27.u32 + 12244, ctx.r3.u32);
	// b 0x821e7bf8
	goto loc_821E7BF8;
loc_821E7BF4:
	// lwz r3,12244(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 12244);
loc_821E7BF8:
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
	// beq 0x821e7c34
	if (cr0.eq) goto loc_821E7C34;
	// lwz r11,-16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x821e7cb0
	goto loc_821E7CB0;
loc_821E7C34:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x821e7c94
	if (!cr0.eq) goto loc_821E7C94;
	// addic. r11,r30,-20
	xer.ca = r30.u32 > 19;
	r11.s64 = r30.s64 + -20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821e7c58
	if (!cr0.eq) goto loc_821E7C58;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821e7c68
	goto loc_821E7C68;
loc_821E7C58:
	// lwz r11,-16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
loc_821E7C68:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
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
loc_821E7C94:
	// lwz r11,-16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_821E7CB0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821E7CBC"))) PPC_WEAK_FUNC(sub_821E7CBC);
PPC_FUNC_IMPL(__imp__sub_821E7CBC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12248
	r11.s64 = r11.s64 + 12248;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12248
	ctx.r10.s64 = ctx.r10.s64 + 12248;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7CE4"))) PPC_WEAK_FUNC(sub_821E7CE4);
PPC_FUNC_IMPL(__imp__sub_821E7CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7CE8"))) PPC_WEAK_FUNC(sub_821E7CE8);
PPC_FUNC_IMPL(__imp__sub_821E7CE8) {
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
	// lwz r16,5776(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 5776);
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
	// lwz r11,12256(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12256);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r29,r9,12252
	r29.s64 = ctx.r9.s64 + 12252;
	// bne 0x821e7d50
	if (!cr0.eq) goto loc_821E7D50;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12256, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,4944
	ctx.r4.s64 = r11.s64 + 4944;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821E7D50:
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
	// beq 0x821e7d84
	if (cr0.eq) goto loc_821E7D84;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-8
	ctx.r3.s64 = r28.s64 + -8;
	// bl 0x82126dc0
	sub_82126DC0(ctx, base);
	// b 0x821e7d88
	goto loc_821E7D88;
loc_821E7D84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E7D88:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821E7CF0"))) PPC_WEAK_FUNC(sub_821E7CF0);
PPC_FUNC_IMPL(__imp__sub_821E7CF0) {
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
	// lwz r11,12256(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12256);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r29,r9,12252
	r29.s64 = ctx.r9.s64 + 12252;
	// bne 0x821e7d50
	if (!cr0.eq) goto loc_821E7D50;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12256, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,4944
	ctx.r4.s64 = r11.s64 + 4944;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821E7D50:
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
	// beq 0x821e7d84
	if (cr0.eq) goto loc_821E7D84;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-8
	ctx.r3.s64 = r28.s64 + -8;
	// bl 0x82126dc0
	sub_82126DC0(ctx, base);
	// b 0x821e7d88
	goto loc_821E7D88;
loc_821E7D84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E7D88:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821E7D90"))) PPC_WEAK_FUNC(sub_821E7D90);
PPC_FUNC_IMPL(__imp__sub_821E7D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12256
	r11.s64 = r11.s64 + 12256;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12256
	ctx.r10.s64 = ctx.r10.s64 + 12256;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7DB8"))) PPC_WEAK_FUNC(sub_821E7DB8);
PPC_FUNC_IMPL(__imp__sub_821E7DB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x821e7730
	sub_821E7730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7DBC"))) PPC_WEAK_FUNC(sub_821E7DBC);
PPC_FUNC_IMPL(__imp__sub_821E7DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7DC0"))) PPC_WEAK_FUNC(sub_821E7DC0);
PPC_FUNC_IMPL(__imp__sub_821E7DC0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r10,r10,11884
	ctx.r10.s64 = ctx.r10.s64 + 11884;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821e7df8
	if (!cr6.gt) goto loc_821E7DF8;
	// lfs f0,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// b 0x821e7e00
	goto loc_821E7E00;
loc_821E7DF8:
	// lfs f0,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
loc_821E7E00:
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7E0C"))) PPC_WEAK_FUNC(sub_821E7E0C);
PPC_FUNC_IMPL(__imp__sub_821E7E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7E10"))) PPC_WEAK_FUNC(sub_821E7E10);
PPC_FUNC_IMPL(__imp__sub_821E7E10) {
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
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,5944(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 5944);
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
	// addi r11,r11,5844
	r11.s64 = r11.s64 + 5844;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e7e64
	if (cr0.eq) goto loc_821E7E64;
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
loc_821E7E64:
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x821e7730
	sub_821E7730(ctx, base);
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x82146bc8
	sub_82146BC8(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x82126780
	sub_82126780(ctx, base);
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

__attribute__((alias("__imp__sub_821E7E18"))) PPC_WEAK_FUNC(sub_821E7E18);
PPC_FUNC_IMPL(__imp__sub_821E7E18) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,5844
	r11.s64 = r11.s64 + 5844;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821e7e64
	if (cr0.eq) goto loc_821E7E64;
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
loc_821E7E64:
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x821e7730
	sub_821E7730(ctx, base);
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x82146bc8
	sub_82146BC8(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x82126780
	sub_82126780(ctx, base);
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

__attribute__((alias("__imp__sub_821E7E9C"))) PPC_WEAK_FUNC(sub_821E7E9C);
PPC_FUNC_IMPL(__imp__sub_821E7E9C) {
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

