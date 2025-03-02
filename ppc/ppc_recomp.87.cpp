#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822D98EC"))) PPC_WEAK_FUNC(sub_822D98EC);
PPC_FUNC_IMPL(__imp__sub_822D98EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D98F0"))) PPC_WEAK_FUNC(sub_822D98F0);
PPC_FUNC_IMPL(__imp__sub_822D98F0) {
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
	// lwz r16,-31752(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -31752);
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
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r30,52
	ctx.r10.s64 = r30.s64 + 52;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stb r11,48(r30)
	PPC_STORE_U8(r30.u32 + 48, r11.u8);
	// stw r9,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// std r11,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r11.u64);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// stw r9,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r9.u32);
	// stw r9,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r9.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmpldi cr6,r5,0
	cr6.compare<uint64_t>(ctx.r5.u64, 0, xer);
	// stw r4,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r4.u32);
	// addi r10,r10,-32112
	ctx.r10.s64 = ctx.r10.s64 + -32112;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x822d9968
	if (!cr6.eq) goto loc_822D9968;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_822D9968:
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,84(r30)
	PPC_STORE_U8(r30.u32 + 84, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r11.u32);
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
	// std r5,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r5.u64);
	// bl 0x822d9400
	sub_822D9400(ctx, base);
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

__attribute__((alias("__imp__sub_822D98F8"))) PPC_WEAK_FUNC(sub_822D98F8);
PPC_FUNC_IMPL(__imp__sub_822D98F8) {
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
	// li r11,0
	r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r30,52
	ctx.r10.s64 = r30.s64 + 52;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stb r11,48(r30)
	PPC_STORE_U8(r30.u32 + 48, r11.u8);
	// stw r9,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// std r11,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r11.u64);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// stw r9,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r9.u32);
	// stw r9,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r9.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmpldi cr6,r5,0
	cr6.compare<uint64_t>(ctx.r5.u64, 0, xer);
	// stw r4,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r4.u32);
	// addi r10,r10,-32112
	ctx.r10.s64 = ctx.r10.s64 + -32112;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x822d9968
	if (!cr6.eq) goto loc_822D9968;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_822D9968:
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,84(r30)
	PPC_STORE_U8(r30.u32 + 84, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r11.u32);
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
	// std r5,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r5.u64);
	// bl 0x822d9400
	sub_822D9400(ctx, base);
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

__attribute__((alias("__imp__sub_822D99A0"))) PPC_WEAK_FUNC(sub_822D99A0);
PPC_FUNC_IMPL(__imp__sub_822D99A0) {
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
	// bl 0x822d8bb0
	sub_822D8BB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D99C8"))) PPC_WEAK_FUNC(sub_822D99C8);
PPC_FUNC_IMPL(__imp__sub_822D99C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d9a64
	if (cr0.eq) goto loc_822D9A64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x822d9a64
	if (cr6.eq) goto loc_822D9A64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d94f8
	sub_822D94F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
	// bl 0x822d7f18
	sub_822D7F18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d9a64
	if (cr0.eq) goto loc_822D9A64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x822d9a64
	if (cr0.eq) goto loc_822D9A64;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r8,8
	r11.s64 = ctx.r8.s64 + 8;
loc_822D9A48:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, xer);
	// beq cr6,0x822d9a80
	if (cr6.eq) goto loc_822D9A80;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x822d9a48
	if (cr6.lt) goto loc_822D9A48;
loc_822D9A64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D9A68:
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
loc_822D9A80:
	// mulli r11,r10,48
	r11.s64 = ctx.r10.s64 * 48;
	// ldx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U64(r11.u32 + ctx.r8.u32);
	// b 0x822d9a68
	goto loc_822D9A68;
}

__attribute__((alias("__imp__sub_822D9A8C"))) PPC_WEAK_FUNC(sub_822D9A8C);
PPC_FUNC_IMPL(__imp__sub_822D9A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D9A90"))) PPC_WEAK_FUNC(sub_822D9A90);
PPC_FUNC_IMPL(__imp__sub_822D9A90) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d9b2c
	if (cr0.eq) goto loc_822D9B2C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x822d9b2c
	if (cr6.eq) goto loc_822D9B2C;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d94f8
	sub_822D94F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
	// bl 0x822d7f18
	sub_822D7F18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d9b2c
	if (cr0.eq) goto loc_822D9B2C;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x822d9b2c
	if (cr0.eq) goto loc_822D9B2C;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r9,8
	r11.s64 = ctx.r9.s64 + 8;
loc_822D9B10:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, xer);
	// beq cr6,0x822d9b48
	if (cr6.eq) goto loc_822D9B48;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x822d9b10
	if (cr6.lt) goto loc_822D9B10;
loc_822D9B2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D9B30:
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
loc_822D9B48:
	// mulli r11,r10,48
	r11.s64 = ctx.r10.s64 * 48;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// ld r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// b 0x822d9b30
	goto loc_822D9B30;
}

__attribute__((alias("__imp__sub_822D9B58"))) PPC_WEAK_FUNC(sub_822D9B58);
PPC_FUNC_IMPL(__imp__sub_822D9B58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d9bb8
	if (!cr0.eq) goto loc_822D9BB8;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-31704
	ctx.r4.s64 = r11.s64 + -31704;
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
	// b 0x822d9c24
	goto loc_822D9C24;
loc_822D9BB8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x822d9c20
	if (cr6.eq) goto loc_822D9C20;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d94f8
	sub_822D94F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
	// bl 0x822d7f18
	sub_822D7F18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d9c20
	if (cr0.eq) goto loc_822D9C20;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x822d9c20
	if (cr0.eq) goto loc_822D9C20;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_822D9C04:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, xer);
	// beq cr6,0x822d9c3c
	if (cr6.eq) goto loc_822D9C3C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x822d9c04
	if (cr6.lt) goto loc_822D9C04;
loc_822D9C20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D9C24:
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
loc_822D9C3C:
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// b 0x822d9c24
	goto loc_822D9C24;
}

__attribute__((alias("__imp__sub_822D9C4C"))) PPC_WEAK_FUNC(sub_822D9C4C);
PPC_FUNC_IMPL(__imp__sub_822D9C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D9C50"))) PPC_WEAK_FUNC(sub_822D9C50);
PPC_FUNC_IMPL(__imp__sub_822D9C50) {
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
	// lbz r11,84(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 84);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d9cf0
	if (cr0.eq) goto loc_822D9CF0;
	// li r11,0
	r11.s64 = 0;
	// stb r11,84(r31)
	PPC_STORE_U8(r31.u32 + 84, r11.u8);
	// bl 0x822d7f18
	sub_822D7F18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d9cf0
	if (cr0.eq) goto loc_822D9CF0;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d9cb8
	if (cr6.eq) goto loc_822D9CB8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x822d9cb8
	if (!cr6.eq) goto loc_822D9CB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d8c48
	sub_822D8C48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d9400
	sub_822D9400(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d9cf4
	goto loc_822D9CF4;
loc_822D9CB8:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d9cf0
	if (cr6.eq) goto loc_822D9CF0;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bge cr6,0x822d9cf0
	if (!cr6.lt) goto loc_822D9CF0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// bl 0x822d6d78
	sub_822D6D78(ctx, base);
loc_822D9CF0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822D9CF4:
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

__attribute__((alias("__imp__sub_822D9D08"))) PPC_WEAK_FUNC(sub_822D9D08);
PPC_FUNC_IMPL(__imp__sub_822D9D08) {
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
	// lbz r11,48(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822d9d34
	if (!cr0.eq) goto loc_822D9D34;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822d9d70
	goto loc_822D9D70;
loc_822D9D34:
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-997
	r11.s64 = r11.s64 + -997;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r30,r11,1
	r30.u64 = r11.u64 ^ 1;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d9d6c
	if (cr0.eq) goto loc_822D9D6C;
	// bl 0x823b6720
	sub_823B6720(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x822d9d88
	if (cr0.eq) goto loc_822D9D88;
	// bl 0x822d8c48
	sub_822D8C48(ctx, base);
loc_822D9D6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_822D9D70:
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
loc_822D9D88:
	// li r11,0
	r11.s64 = 0;
	// stb r11,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r11.u8);
	// bl 0x822d6e58
	sub_822D6E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d9c50
	sub_822D9C50(ctx, base);
	// b 0x822d9d70
	goto loc_822D9D70;
}

__attribute__((alias("__imp__sub_822D9DA0"))) PPC_WEAK_FUNC(sub_822D9DA0);
PPC_FUNC_IMPL(__imp__sub_822D9DA0) {
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
	// lwz r16,-31656(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -31656);
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
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d7090
	sub_822D7090(ctx, base);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d9e10
	if (!cr0.eq) goto loc_822D9E10;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d9e04
	if (cr0.eq) goto loc_822D9E04;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822d98f8
	sub_822D98F8(ctx, base);
	// b 0x822d9e08
	goto loc_822D9E08;
loc_822D9E04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D9E08:
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// b 0x822d9e80
	goto loc_822D9E80;
loc_822D9E10:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x822d9e48
	if (!cr6.eq) goto loc_822D9E48;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d9e3c
	if (cr0.eq) goto loc_822D9E3C;
	// ld r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822d98f8
	sub_822D98F8(ctx, base);
	// b 0x822d9e40
	goto loc_822D9E40;
loc_822D9E3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D9E40:
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// b 0x822d9e80
	goto loc_822D9E80;
loc_822D9E48:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x822d9e98
	if (!cr6.eq) goto loc_822D9E98;
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d9e78
	if (cr0.eq) goto loc_822D9E78;
	// ld r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822d9608
	sub_822D9608(ctx, base);
	// b 0x822d9e7c
	goto loc_822D9E7C;
loc_822D9E78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D9E7C:
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
loc_822D9E80:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822d9e9c
	goto loc_822D9E9C;
loc_822D9E98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D9E9C:
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

__attribute__((alias("__imp__sub_822D9DA8"))) PPC_WEAK_FUNC(sub_822D9DA8);
PPC_FUNC_IMPL(__imp__sub_822D9DA8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d7090
	sub_822D7090(ctx, base);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d9e10
	if (!cr0.eq) goto loc_822D9E10;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d9e04
	if (cr0.eq) goto loc_822D9E04;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822d98f8
	sub_822D98F8(ctx, base);
	// b 0x822d9e08
	goto loc_822D9E08;
loc_822D9E04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D9E08:
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// b 0x822d9e80
	goto loc_822D9E80;
loc_822D9E10:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x822d9e48
	if (!cr6.eq) goto loc_822D9E48;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d9e3c
	if (cr0.eq) goto loc_822D9E3C;
	// ld r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822d98f8
	sub_822D98F8(ctx, base);
	// b 0x822d9e40
	goto loc_822D9E40;
loc_822D9E3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D9E40:
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// b 0x822d9e80
	goto loc_822D9E80;
loc_822D9E48:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x822d9e98
	if (!cr6.eq) goto loc_822D9E98;
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d9e78
	if (cr0.eq) goto loc_822D9E78;
	// ld r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822d9608
	sub_822D9608(ctx, base);
	// b 0x822d9e7c
	goto loc_822D9E7C;
loc_822D9E78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D9E7C:
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
loc_822D9E80:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822d9e9c
	goto loc_822D9E9C;
loc_822D9E98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D9E9C:
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

__attribute__((alias("__imp__sub_822D9EB4"))) PPC_WEAK_FUNC(sub_822D9EB4);
PPC_FUNC_IMPL(__imp__sub_822D9EB4) {
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

__attribute__((alias("__imp__sub_822D9EDC"))) PPC_WEAK_FUNC(sub_822D9EDC);
PPC_FUNC_IMPL(__imp__sub_822D9EDC) {
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

__attribute__((alias("__imp__sub_822D9F04"))) PPC_WEAK_FUNC(sub_822D9F04);
PPC_FUNC_IMPL(__imp__sub_822D9F04) {
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

__attribute__((alias("__imp__sub_822D9F2C"))) PPC_WEAK_FUNC(sub_822D9F2C);
PPC_FUNC_IMPL(__imp__sub_822D9F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D9F30"))) PPC_WEAK_FUNC(sub_822D9F30);
PPC_FUNC_IMPL(__imp__sub_822D9F30) {
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
	// beq cr6,0x822d9f80
	if (cr6.eq) goto loc_822D9F80;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d9f70
	if (cr0.eq) goto loc_822D9F70;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_822D9F70:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x822d9f94
	goto loc_822D9F94;
loc_822D9F80:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x822d91d8
	sub_822D91D8(ctx, base);
loc_822D9F94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D9FA4"))) PPC_WEAK_FUNC(sub_822D9FA4);
PPC_FUNC_IMPL(__imp__sub_822D9FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D9FA8"))) PPC_WEAK_FUNC(sub_822D9FA8);
PPC_FUNC_IMPL(__imp__sub_822D9FA8) {
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
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x822da018
	if (cr6.eq) goto loc_822DA018;
	// li r10,48
	ctx.r10.s64 = 48;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822d9fec
	goto loc_822D9FEC;
loc_822D9FE4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
loc_822D9FEC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x822d9fe4
	if (!cr6.eq) goto loc_822D9FE4;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d9818
	sub_822D9818(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x822d9398
	sub_822D9398(ctx, base);
loc_822DA018:
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

__attribute__((alias("__imp__sub_822DA030"))) PPC_WEAK_FUNC(sub_822DA030);
PPC_FUNC_IMPL(__imp__sub_822DA030) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x822d8020
	sub_822D8020(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x822da090
	if (cr0.eq) goto loc_822DA090;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r4,r11,r3
	ctx.r4.u64 = r11.u64 + ctx.r3.u64;
	// bl 0x822d8a70
	sub_822D8A70(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r10,48
	ctx.r10.s64 = 48;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x822d9fa8
	sub_822D9FA8(ctx, base);
	// b 0x822da098
	goto loc_822DA098;
loc_822DA090:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x822d8c48
	sub_822D8C48(ctx, base);
loc_822DA098:
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

__attribute__((alias("__imp__sub_822DA0AC"))) PPC_WEAK_FUNC(sub_822DA0AC);
PPC_FUNC_IMPL(__imp__sub_822DA0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DA0B0"))) PPC_WEAK_FUNC(sub_822DA0B0);
PPC_FUNC_IMPL(__imp__sub_822DA0B0) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-31480(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -31480);
	// mflr r12
	// bl 0x8239bcd0
	// addi r31,r1,-336
	r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r21,-32127
	r21.s64 = -2105475072;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r11,-8064(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + -8064);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r30,r10,-8068
	r30.s64 = ctx.r10.s64 + -8068;
	// bne 0x822da104
	if (!cr0.eq) goto loc_822DA104;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8064(r21)
	PPC_STORE_U32(r21.u32 + -8064, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-31540
	ctx.r4.s64 = r11.s64 + -31540;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822DA104:
	// lis r23,-32127
	r23.s64 = -2105475072;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-9608(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -9608);
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822da4e4
	if (cr0.eq) goto loc_822DA4E4;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// ble cr6,0x822da4e4
	if (!cr6.gt) goto loc_822DA4E4;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r30,r11,18888
	r30.s64 = r11.s64 + 18888;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822da4e4
	if (cr0.eq) goto loc_822DA4E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82272ff0
	sub_82272FF0(ctx, base);
	// li r20,1
	r20.s64 = 1;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// slw r10,r20,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r3.u8 & 0x3F));
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822da4e4
	if (cr0.eq) goto loc_822DA4E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82272ff0
	sub_82272FF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,44(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// bl 0x822d6d18
	sub_822D6D18(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,44(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// bl 0x822d6d18
	sub_822D6D18(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x822da4e4
	if (cr6.eq) goto loc_822DA4E4;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b56a0
	sub_823B56A0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x822da1e8
	if (cr0.eq) goto loc_822DA1E8;
	// li r11,-1
	r11.s64 = -1;
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r30.u8);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x822da1ec
	goto loc_822DA1EC;
loc_822DA1E8:
	// mr r18,r30
	r18.u64 = r30.u64;
loc_822DA1EC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r18,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r18.u32);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x822d73f0
	sub_822D73F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822da210
	if (cr0.eq) goto loc_822DA210;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// b 0x822da4e4
	goto loc_822DA4E4;
loc_822DA210:
	// lwz r11,-8064(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + -8064);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8072
	r29.s64 = ctx.r10.s64 + -8072;
	// bne 0x822da23c
	if (!cr0.eq) goto loc_822DA23C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8064(r21)
	PPC_STORE_U32(r21.u32 + -8064, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-32248
	ctx.r4.s64 = r11.s64 + -32248;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822DA23C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,44(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8227bd18
	sub_8227BD18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-9608(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -9608);
	// bl 0x822b4098
	sub_822B4098(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-9608(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -9608);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// extsw r11,r22
	r11.s64 = r22.s32;
	// clrldi r10,r29,56
	ctx.r10.u64 = r29.u64 & 0xFF;
	// stw r26,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r26.u32);
	// rldicr r11,r11,1,62
	r11.u64 = __builtin_rotateleft64(r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// li r22,2
	r22.s64 = 2;
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// rldicr r11,r11,2,61
	r11.u64 = __builtin_rotateleft64(r11.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r22,136(r31)
	PPC_STORE_U8(r31.u32 + 136, r22.u8);
	// std r11,144(r31)
	PPC_STORE_U64(r31.u32 + 144, r11.u64);
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// stw r20,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r20.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// bl 0x822d9f30
	sub_822D9F30(ctx, base);
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// beq cr6,0x822da2f0
	if (cr6.eq) goto loc_822DA2F0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stw r24,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r24.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822d9f30
	sub_822D9F30(ctx, base);
loc_822DA2F0:
	// lwz r28,112(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// li r19,12
	r19.s64 = 12;
	// lwz r24,116(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r3,4(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// subf r11,r28,r24
	r11.s64 = r24.s64 - r28.s64;
	// divw r30,r11,r19
	r30.s32 = r11.s32 / r19.s32;
	// bl 0x823b58f0
	sub_823B58F0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// ld r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8267aea0
	sub_8267AEA0(ctx, base);
	// lwz r11,-8064(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + -8064);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r30,r10,-8076
	r30.s64 = ctx.r10.s64 + -8076;
	// bne 0x822da354
	if (!cr0.eq) goto loc_822DA354;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8064(r21)
	PPC_STORE_U32(r21.u32 + -8064, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-31568
	ctx.r4.s64 = r11.s64 + -31568;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822DA354:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,-9608(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -9608);
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822da4ac
	if (cr0.eq) goto loc_822DA4AC;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r4,24440(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24440);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,44(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822d6d18
	sub_822D6D18(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r4,24444(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24444);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,44(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822d6d18
	sub_822D6D18(ctx, base);
	// lis r30,-32128
	r30.s64 = -2105540608;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,23616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 23616);
	// bl 0x82287310
	sub_82287310(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,23616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 23616);
	// bl 0x82287310
	sub_82287310(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8218b408
	sub_8218B408(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x822da430
	if (!cr6.gt) goto loc_822DA430;
	// extsw r11,r29
	r11.s64 = r29.s32;
	// stw r26,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r26.u32);
	// addi r10,r31,160
	ctx.r10.s64 = r31.s64 + 160;
	// stb r22,168(r31)
	PPC_STORE_U8(r31.u32 + 168, r22.u8);
	// rldicr r11,r11,3,60
	r11.u64 = __builtin_rotateleft64(r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stw r20,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r20.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// std r11,176(r31)
	PPC_STORE_U64(r31.u32 + 176, r11.u64);
	// bl 0x822d9f30
	sub_822D9F30(ctx, base);
loc_822DA430:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x822da468
	if (!cr6.gt) goto loc_822DA468;
	// extsw r11,r30
	r11.s64 = r30.s32;
	// stw r26,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r26.u32);
	// addi r10,r31,192
	ctx.r10.s64 = r31.s64 + 192;
	// stb r22,200(r31)
	PPC_STORE_U8(r31.u32 + 200, r22.u8);
	// rldicr r11,r11,3,60
	r11.u64 = __builtin_rotateleft64(r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
	// stw r25,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r25.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stw r20,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r20.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// std r11,208(r31)
	PPC_STORE_U64(r31.u32 + 208, r11.u64);
	// bl 0x822d9f30
	sub_822D9F30(ctx, base);
loc_822DA468:
	// lwz r30,112(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// subf r10,r30,r11
	ctx.r10.s64 = r11.s64 - r30.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822da4ac
	if (!cr0.eq) goto loc_822DA4AC;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// lwz r3,4(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// divw r29,r11,r19
	r29.s32 = r11.s32 / r19.s32;
	// bl 0x823b58f0
	sub_823B58F0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ld r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// bl 0x8267aea0
	sub_8267AEA0(ctx, base);
loc_822DA4AC:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r4,r11,-8092
	ctx.r4.s64 = r11.s64 + -8092;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x822d8110
	sub_822D8110(ctx, base);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32210
	r11.s64 = -2110914560;
	// addi r4,r10,-29832
	ctx.r4.s64 = ctx.r10.s64 + -29832;
	// addi r3,r11,-31728
	ctx.r3.s64 = r11.s64 + -31728;
	// bl 0x82279fb0
	sub_82279FB0(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82686ff8
	sub_82686FF8(ctx, base);
loc_822DA4E4:
	// addi r1,r31,336
	ctx.r1.s64 = r31.s64 + 336;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_822DA0B8"))) PPC_WEAK_FUNC(sub_822DA0B8);
PPC_FUNC_IMPL(__imp__sub_822DA0B8) {
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
	// addi r31,r1,-336
	r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r21,-32127
	r21.s64 = -2105475072;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r11,-8064(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + -8064);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r30,r10,-8068
	r30.s64 = ctx.r10.s64 + -8068;
	// bne 0x822da104
	if (!cr0.eq) goto loc_822DA104;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8064(r21)
	PPC_STORE_U32(r21.u32 + -8064, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-31540
	ctx.r4.s64 = r11.s64 + -31540;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822DA104:
	// lis r23,-32127
	r23.s64 = -2105475072;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-9608(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -9608);
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822da4e4
	if (cr0.eq) goto loc_822DA4E4;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// ble cr6,0x822da4e4
	if (!cr6.gt) goto loc_822DA4E4;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r30,r11,18888
	r30.s64 = r11.s64 + 18888;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822da4e4
	if (cr0.eq) goto loc_822DA4E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82272ff0
	sub_82272FF0(ctx, base);
	// li r20,1
	r20.s64 = 1;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// slw r10,r20,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r3.u8 & 0x3F));
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822da4e4
	if (cr0.eq) goto loc_822DA4E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82272ff0
	sub_82272FF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,44(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// bl 0x822d6d18
	sub_822D6D18(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,44(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// bl 0x822d6d18
	sub_822D6D18(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x822da4e4
	if (cr6.eq) goto loc_822DA4E4;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b56a0
	sub_823B56A0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x822da1e8
	if (cr0.eq) goto loc_822DA1E8;
	// li r11,-1
	r11.s64 = -1;
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r30.u8);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x822da1ec
	goto loc_822DA1EC;
loc_822DA1E8:
	// mr r18,r30
	r18.u64 = r30.u64;
loc_822DA1EC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r18,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r18.u32);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x822d73f0
	sub_822D73F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822da210
	if (cr0.eq) goto loc_822DA210;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// b 0x822da4e4
	goto loc_822DA4E4;
loc_822DA210:
	// lwz r11,-8064(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + -8064);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8072
	r29.s64 = ctx.r10.s64 + -8072;
	// bne 0x822da23c
	if (!cr0.eq) goto loc_822DA23C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8064(r21)
	PPC_STORE_U32(r21.u32 + -8064, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-32248
	ctx.r4.s64 = r11.s64 + -32248;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822DA23C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,44(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8227bd18
	sub_8227BD18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-9608(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -9608);
	// bl 0x822b4098
	sub_822B4098(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-9608(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -9608);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// extsw r11,r22
	r11.s64 = r22.s32;
	// clrldi r10,r29,56
	ctx.r10.u64 = r29.u64 & 0xFF;
	// stw r26,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r26.u32);
	// rldicr r11,r11,1,62
	r11.u64 = __builtin_rotateleft64(r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// li r22,2
	r22.s64 = 2;
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// rldicr r11,r11,2,61
	r11.u64 = __builtin_rotateleft64(r11.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r22,136(r31)
	PPC_STORE_U8(r31.u32 + 136, r22.u8);
	// std r11,144(r31)
	PPC_STORE_U64(r31.u32 + 144, r11.u64);
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// stw r20,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r20.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// bl 0x822d9f30
	sub_822D9F30(ctx, base);
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// beq cr6,0x822da2f0
	if (cr6.eq) goto loc_822DA2F0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stw r24,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r24.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822d9f30
	sub_822D9F30(ctx, base);
loc_822DA2F0:
	// lwz r28,112(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// li r19,12
	r19.s64 = 12;
	// lwz r24,116(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r3,4(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// subf r11,r28,r24
	r11.s64 = r24.s64 - r28.s64;
	// divw r30,r11,r19
	r30.s32 = r11.s32 / r19.s32;
	// bl 0x823b58f0
	sub_823B58F0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// ld r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8267aea0
	sub_8267AEA0(ctx, base);
	// lwz r11,-8064(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + -8064);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r30,r10,-8076
	r30.s64 = ctx.r10.s64 + -8076;
	// bne 0x822da354
	if (!cr0.eq) goto loc_822DA354;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8064(r21)
	PPC_STORE_U32(r21.u32 + -8064, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-31568
	ctx.r4.s64 = r11.s64 + -31568;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822DA354:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,-9608(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -9608);
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822da4ac
	if (cr0.eq) goto loc_822DA4AC;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r4,24440(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24440);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,44(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822d6d18
	sub_822D6D18(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r4,24444(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24444);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,44(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822d6d18
	sub_822D6D18(ctx, base);
	// lis r30,-32128
	r30.s64 = -2105540608;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,23616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 23616);
	// bl 0x82287310
	sub_82287310(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,23616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 23616);
	// bl 0x82287310
	sub_82287310(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8218b408
	sub_8218B408(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x822da430
	if (!cr6.gt) goto loc_822DA430;
	// extsw r11,r29
	r11.s64 = r29.s32;
	// stw r26,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r26.u32);
	// addi r10,r31,160
	ctx.r10.s64 = r31.s64 + 160;
	// stb r22,168(r31)
	PPC_STORE_U8(r31.u32 + 168, r22.u8);
	// rldicr r11,r11,3,60
	r11.u64 = __builtin_rotateleft64(r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stw r20,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r20.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// std r11,176(r31)
	PPC_STORE_U64(r31.u32 + 176, r11.u64);
	// bl 0x822d9f30
	sub_822D9F30(ctx, base);
loc_822DA430:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x822da468
	if (!cr6.gt) goto loc_822DA468;
	// extsw r11,r30
	r11.s64 = r30.s32;
	// stw r26,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r26.u32);
	// addi r10,r31,192
	ctx.r10.s64 = r31.s64 + 192;
	// stb r22,200(r31)
	PPC_STORE_U8(r31.u32 + 200, r22.u8);
	// rldicr r11,r11,3,60
	r11.u64 = __builtin_rotateleft64(r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
	// stw r25,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r25.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stw r20,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r20.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// std r11,208(r31)
	PPC_STORE_U64(r31.u32 + 208, r11.u64);
	// bl 0x822d9f30
	sub_822D9F30(ctx, base);
loc_822DA468:
	// lwz r30,112(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// subf r10,r30,r11
	ctx.r10.s64 = r11.s64 - r30.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822da4ac
	if (!cr0.eq) goto loc_822DA4AC;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// lwz r3,4(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// divw r29,r11,r19
	r29.s32 = r11.s32 / r19.s32;
	// bl 0x823b58f0
	sub_823B58F0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ld r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// bl 0x8267aea0
	sub_8267AEA0(ctx, base);
loc_822DA4AC:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r4,r11,-8092
	ctx.r4.s64 = r11.s64 + -8092;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x822d8110
	sub_822D8110(ctx, base);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32210
	r11.s64 = -2110914560;
	// addi r4,r10,-29832
	ctx.r4.s64 = ctx.r10.s64 + -29832;
	// addi r3,r11,-31728
	ctx.r3.s64 = r11.s64 + -31728;
	// bl 0x82279fb0
	sub_82279FB0(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82686ff8
	sub_82686FF8(ctx, base);
loc_822DA4E4:
	// addi r1,r31,336
	ctx.r1.s64 = r31.s64 + 336;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_822DA4EC"))) PPC_WEAK_FUNC(sub_822DA4EC);
PPC_FUNC_IMPL(__imp__sub_822DA4EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8064
	r11.s64 = r11.s64 + -8064;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8064
	ctx.r10.s64 = ctx.r10.s64 + -8064;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DA514"))) PPC_WEAK_FUNC(sub_822DA514);
PPC_FUNC_IMPL(__imp__sub_822DA514) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8064
	r11.s64 = r11.s64 + -8064;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8064
	ctx.r10.s64 = ctx.r10.s64 + -8064;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DA53C"))) PPC_WEAK_FUNC(sub_822DA53C);
PPC_FUNC_IMPL(__imp__sub_822DA53C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_822DA564"))) PPC_WEAK_FUNC(sub_822DA564);
PPC_FUNC_IMPL(__imp__sub_822DA564) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8064
	r11.s64 = r11.s64 + -8064;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8064
	ctx.r10.s64 = ctx.r10.s64 + -8064;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DA58C"))) PPC_WEAK_FUNC(sub_822DA58C);
PPC_FUNC_IMPL(__imp__sub_822DA58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DA590"))) PPC_WEAK_FUNC(sub_822DA590);
PPC_FUNC_IMPL(__imp__sub_822DA590) {
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
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822da0b8
	sub_822DA0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822DA5FC"))) PPC_WEAK_FUNC(sub_822DA5FC);
PPC_FUNC_IMPL(__imp__sub_822DA5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DA600"))) PPC_WEAK_FUNC(sub_822DA600);
PPC_FUNC_IMPL(__imp__sub_822DA600) {
	PPC_FUNC_PROLOGUE();
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
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d70e0
	sub_822D70E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r31.u32);
	// stw r26,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r26.u32);
	// stw r27,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r27.u32);
	// bl 0x822d9da8
	sub_822D9DA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822DA690"))) PPC_WEAK_FUNC(sub_822DA690);
PPC_FUNC_IMPL(__imp__sub_822DA690) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822da850
	if (cr0.eq) goto loc_822DA850;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-31368
	ctx.r4.s64 = r11.s64 + -31368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822d70e0
	sub_822D70E0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// bl 0x822d9da8
	sub_822D9DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d70e0
	sub_822D70E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r29.u32);
	// bl 0x822d9da8
	sub_822D9DA8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
	// li r11,10
	r11.s64 = 10;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// blt cr6,0x822da774
	if (cr6.lt) goto loc_822DA774;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_822DA774:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x822da850
	if (!cr0.gt) goto loc_822DA850;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_822DA784:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822da844
	if (cr0.eq) goto loc_822DA844;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822DA844:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bne 0x822da784
	if (!cr0.eq) goto loc_822DA784;
loc_822DA850:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// stw r29,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822DA864"))) PPC_WEAK_FUNC(sub_822DA864);
PPC_FUNC_IMPL(__imp__sub_822DA864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DA868"))) PPC_WEAK_FUNC(sub_822DA868);
PPC_FUNC_IMPL(__imp__sub_822DA868) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x822da954
	if (cr6.eq) goto loc_822DA954;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x822da8e0
	if (cr6.eq) goto loc_822DA8E0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x822da8a4
	if (cr6.eq) goto loc_822DA8A4;
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// b 0x822da9c8
	goto loc_822DA9C8;
loc_822DA8A4:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x822da030
	sub_822DA030(ctx, base);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x822da9c8
	if (!cr6.lt) goto loc_822DA9C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// bl 0x822d8020
	sub_822D8020(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x822d6d78
	sub_822D6D78(ctx, base);
	// b 0x822da9c8
	goto loc_822DA9C8;
loc_822DA8E0:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x822da940
	if (cr0.eq) goto loc_822DA940;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - r11.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x822da920
	if (!cr6.lt) goto loc_822DA920;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x822d80b8
	sub_822D80B8(ctx, base);
	// b 0x822da934
	goto loc_822DA934;
loc_822DA920:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x822d8e80
	sub_822D8E80(ctx, base);
loc_822DA934:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d7f90
	sub_822D7F90(ctx, base);
	// b 0x822da9c8
	goto loc_822DA9C8;
loc_822DA940:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d8c48
	sub_822D8C48(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x822da9c8
	goto loc_822DA9C8;
loc_822DA954:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x823b6660
	sub_823B6660(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x822da9b8
	if (!cr0.eq) goto loc_822DA9B8;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822da9b8
	if (cr6.eq) goto loc_822DA9B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d6e58
	sub_822D6E58(ctx, base);
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,52(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x822da9ac
	if (!cr6.gt) goto loc_822DA9AC;
	// addi r28,r31,88
	r28.s64 = r31.s64 + 88;
loc_822DA994:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d8dc0
	sub_822D8DC0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,196
	r29.s64 = r29.s64 + 196;
	// bne 0x822da994
	if (!cr0.eq) goto loc_822DA994;
loc_822DA9AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d7ea8
	sub_822D7EA8(ctx, base);
	// b 0x822da9c8
	goto loc_822DA9C8;
loc_822DA9B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d8c48
	sub_822D8C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d9778
	sub_822D9778(ctx, base);
loc_822DA9C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822DA9D0"))) PPC_WEAK_FUNC(sub_822DA9D0);
PPC_FUNC_IMPL(__imp__sub_822DA9D0) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x822daa04
	if (cr6.eq) goto loc_822DAA04;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r30
	r11.u64 = r30.u64;
	// bne cr6,0x822daa08
	if (!cr6.eq) goto loc_822DAA08;
loc_822DAA04:
	// li r11,1
	r11.s64 = 1;
loc_822DAA08:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822daa18
	if (cr0.eq) goto loc_822DAA18;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822daa84
	goto loc_822DAA84;
loc_822DAA18:
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// beq cr6,0x822daa64
	if (cr6.eq) goto loc_822DAA64;
	// stb r30,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r30.u8);
	// bl 0x823b6720
	sub_823B6720(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x822daa44
	if (!cr0.eq) goto loc_822DAA44;
	// bl 0x822da868
	sub_822DA868(ctx, base);
	// b 0x822daa64
	goto loc_822DAA64;
loc_822DAA44:
	// bl 0x822d8c48
	sub_822D8C48(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x822daa60
	if (!cr6.eq) goto loc_822DAA60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d9778
	sub_822D9778(ctx, base);
	// b 0x822daa64
	goto loc_822DAA64;
loc_822DAA60:
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_822DAA64:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x822daa7c
	if (cr6.eq) goto loc_822DAA7C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r30
	r11.u64 = r30.u64;
	// bne cr6,0x822daa80
	if (!cr6.eq) goto loc_822DAA80;
loc_822DAA7C:
	// li r11,1
	r11.s64 = 1;
loc_822DAA80:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_822DAA84:
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

__attribute__((alias("__imp__sub_822DAA9C"))) PPC_WEAK_FUNC(sub_822DAA9C);
PPC_FUNC_IMPL(__imp__sub_822DAA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DAAA0"))) PPC_WEAK_FUNC(sub_822DAAA0);
PPC_FUNC_IMPL(__imp__sub_822DAAA0) {
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
	// lwz r16,-31080(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -31080);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8016
	r29.s64 = ctx.r10.s64 + -8016;
	// bne 0x822dab10
	if (!cr0.eq) goto loc_822DAB10;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31260
	ctx.r4.s64 = r11.s64 + -31260;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAB10:
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
	// beq 0x822dab6c
	if (cr0.eq) goto loc_822DAB6C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822da590
	sub_822DA590(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822dab68
	if (cr6.eq) goto loc_822DAB68;
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
	// beq 0x822db0c8
	if (cr0.eq) goto loc_822DB0C8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_822DAB60:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822db0c8
	goto loc_822DB0C8;
loc_822DAB68:
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAB6C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8020
	r29.s64 = ctx.r10.s64 + -8020;
	// bne 0x822dab98
	if (!cr0.eq) goto loc_822DAB98;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14424
	ctx.r4.s64 = r11.s64 + -14424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAB98:
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
	// beq 0x822dabf0
	if (cr0.eq) goto loc_822DABF0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822da600
	sub_822DA600(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822dabec
	if (cr6.eq) goto loc_822DABEC;
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
	// beq 0x822db0c8
	if (cr0.eq) goto loc_822DB0C8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822dab60
	goto loc_822DAB60;
loc_822DABEC:
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DABF0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8024
	r29.s64 = ctx.r10.s64 + -8024;
	// bne 0x822dac1c
	if (!cr0.eq) goto loc_822DAC1C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31268
	ctx.r4.s64 = r11.s64 + -31268;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAC1C:
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
	// beq 0x822dac5c
	if (cr0.eq) goto loc_822DAC5C;
	// addi r3,r26,-4
	ctx.r3.s64 = r26.s64 + -4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r25,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r25.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822db0c8
	goto loc_822DB0C8;
loc_822DAC5C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8028
	r29.s64 = ctx.r10.s64 + -8028;
	// bne 0x822dac88
	if (!cr0.eq) goto loc_822DAC88;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31016
	ctx.r4.s64 = r11.s64 + 31016;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAC88:
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
	// beq 0x822dacc4
	if (cr0.eq) goto loc_822DACC4;
	// addi r3,r26,-4
	ctx.r3.s64 = r26.s64 + -4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822DACB0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_822DACB8:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r25,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r25.u32);
	// b 0x822db0c8
	goto loc_822DB0C8;
loc_822DACC4:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8032
	r29.s64 = ctx.r10.s64 + -8032;
	// bne 0x822dacf0
	if (!cr0.eq) goto loc_822DACF0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31284
	ctx.r4.s64 = r11.s64 + -31284;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DACF0:
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
	// beq 0x822dad48
	if (cr0.eq) goto loc_822DAD48;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x822d7a00
	sub_822D7A00(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822dad44
	if (cr6.eq) goto loc_822DAD44;
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
	// beq 0x822db0c8
	if (cr0.eq) goto loc_822DB0C8;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x822dab60
	goto loc_822DAB60;
loc_822DAD44:
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAD48:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8036
	r29.s64 = ctx.r10.s64 + -8036;
	// bne 0x822dad74
	if (!cr0.eq) goto loc_822DAD74;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31296
	ctx.r4.s64 = r11.s64 + -31296;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAD74:
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
	// beq 0x822dadc0
	if (cr0.eq) goto loc_822DADC0;
	// addi r11,r26,-4
	r11.s64 = r26.s64 + -4;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x822dadb4
	if (cr6.eq) goto loc_822DADB4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822dadb8
	goto loc_822DADB8;
loc_822DADB4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_822DADB8:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x822dacb8
	goto loc_822DACB8;
loc_822DADC0:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8040
	r29.s64 = ctx.r10.s64 + -8040;
	// bne 0x822dadec
	if (!cr0.eq) goto loc_822DADEC;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31308
	ctx.r4.s64 = r11.s64 + -31308;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DADEC:
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
	// beq 0x822dae44
	if (cr0.eq) goto loc_822DAE44;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822d77f8
	sub_822D77F8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822dae40
	if (cr6.eq) goto loc_822DAE40;
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
	// beq 0x822db0c8
	if (cr0.eq) goto loc_822DB0C8;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x822dab60
	goto loc_822DAB60;
loc_822DAE40:
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAE44:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8044
	r29.s64 = ctx.r10.s64 + -8044;
	// bne 0x822dae70
	if (!cr0.eq) goto loc_822DAE70;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31328
	ctx.r4.s64 = r11.s64 + -31328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAE70:
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
	// beq 0x822daeb4
	if (cr0.eq) goto loc_822DAEB4;
	// addi r11,r26,-4
	r11.s64 = r26.s64 + -4;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x822daeac
	if (cr6.eq) goto loc_822DAEAC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822dacb0
	goto loc_822DACB0;
loc_822DAEAC:
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x822dacb8
	goto loc_822DACB8;
loc_822DAEB4:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8048
	r29.s64 = ctx.r10.s64 + -8048;
	// bne 0x822daee0
	if (!cr0.eq) goto loc_822DAEE0;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31348
	ctx.r4.s64 = r11.s64 + -31348;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAEE0:
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
	// beq 0x822daf38
	if (cr0.eq) goto loc_822DAF38;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x822d7998
	sub_822D7998(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822daf34
	if (cr6.eq) goto loc_822DAF34;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822db0c8
	if (cr0.eq) goto loc_822DB0C8;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x822dab60
	goto loc_822DAB60;
loc_822DAF34:
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAF38:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8052
	r29.s64 = ctx.r10.s64 + -8052;
	// bne 0x822daf64
	if (!cr0.eq) goto loc_822DAF64;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14416
	ctx.r4.s64 = r11.s64 + -14416;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAF64:
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
	// beq 0x822dafbc
	if (cr0.eq) goto loc_822DAFBC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x822d7a90
	sub_822D7A90(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822dafb8
	if (cr6.eq) goto loc_822DAFB8;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822db0c8
	if (cr0.eq) goto loc_822DB0C8;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x822dab60
	goto loc_822DAB60;
loc_822DAFB8:
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAFBC:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8056
	r29.s64 = ctx.r10.s64 + -8056;
	// bne 0x822dafe8
	if (!cr0.eq) goto loc_822DAFE8;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31360
	ctx.r4.s64 = r11.s64 + -31360;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAFE8:
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
	// beq 0x822db040
	if (cr0.eq) goto loc_822DB040;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x822d7b50
	sub_822D7B50(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822db03c
	if (cr6.eq) goto loc_822DB03C;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822db0c8
	if (cr0.eq) goto loc_822DB0C8;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x822dab60
	goto loc_822DAB60;
loc_822DB03C:
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DB040:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8060
	r29.s64 = ctx.r10.s64 + -8060;
	// bne 0x822db068
	if (!cr0.eq) goto loc_822DB068;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24144
	ctx.r4.s64 = r11.s64 + -24144;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822DB068:
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
	// beq 0x822db0bc
	if (cr0.eq) goto loc_822DB0BC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x822da690
	sub_822DA690(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822db0bc
	if (cr6.eq) goto loc_822DB0BC;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822db0c8
	if (cr0.eq) goto loc_822DB0C8;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x822dab60
	goto loc_822DAB60;
loc_822DB0BC:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r25.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822DB0C8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822DAAA8"))) PPC_WEAK_FUNC(sub_822DAAA8);
PPC_FUNC_IMPL(__imp__sub_822DAAA8) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8016
	r29.s64 = ctx.r10.s64 + -8016;
	// bne 0x822dab10
	if (!cr0.eq) goto loc_822DAB10;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31260
	ctx.r4.s64 = r11.s64 + -31260;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAB10:
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
	// beq 0x822dab6c
	if (cr0.eq) goto loc_822DAB6C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822da590
	sub_822DA590(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822dab68
	if (cr6.eq) goto loc_822DAB68;
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
	// beq 0x822db0c8
	if (cr0.eq) goto loc_822DB0C8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_822DAB60:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822db0c8
	goto loc_822DB0C8;
loc_822DAB68:
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAB6C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8020
	r29.s64 = ctx.r10.s64 + -8020;
	// bne 0x822dab98
	if (!cr0.eq) goto loc_822DAB98;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14424
	ctx.r4.s64 = r11.s64 + -14424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAB98:
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
	// beq 0x822dabf0
	if (cr0.eq) goto loc_822DABF0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822da600
	sub_822DA600(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822dabec
	if (cr6.eq) goto loc_822DABEC;
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
	// beq 0x822db0c8
	if (cr0.eq) goto loc_822DB0C8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822dab60
	goto loc_822DAB60;
loc_822DABEC:
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DABF0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8024
	r29.s64 = ctx.r10.s64 + -8024;
	// bne 0x822dac1c
	if (!cr0.eq) goto loc_822DAC1C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31268
	ctx.r4.s64 = r11.s64 + -31268;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAC1C:
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
	// beq 0x822dac5c
	if (cr0.eq) goto loc_822DAC5C;
	// addi r3,r26,-4
	ctx.r3.s64 = r26.s64 + -4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r25,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r25.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822db0c8
	goto loc_822DB0C8;
loc_822DAC5C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8028
	r29.s64 = ctx.r10.s64 + -8028;
	// bne 0x822dac88
	if (!cr0.eq) goto loc_822DAC88;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31016
	ctx.r4.s64 = r11.s64 + 31016;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAC88:
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
	// beq 0x822dacc4
	if (cr0.eq) goto loc_822DACC4;
	// addi r3,r26,-4
	ctx.r3.s64 = r26.s64 + -4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822DACB0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_822DACB8:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r25,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r25.u32);
	// b 0x822db0c8
	goto loc_822DB0C8;
loc_822DACC4:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8032
	r29.s64 = ctx.r10.s64 + -8032;
	// bne 0x822dacf0
	if (!cr0.eq) goto loc_822DACF0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31284
	ctx.r4.s64 = r11.s64 + -31284;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DACF0:
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
	// beq 0x822dad48
	if (cr0.eq) goto loc_822DAD48;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x822d7a00
	sub_822D7A00(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822dad44
	if (cr6.eq) goto loc_822DAD44;
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
	// beq 0x822db0c8
	if (cr0.eq) goto loc_822DB0C8;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x822dab60
	goto loc_822DAB60;
loc_822DAD44:
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAD48:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8036
	r29.s64 = ctx.r10.s64 + -8036;
	// bne 0x822dad74
	if (!cr0.eq) goto loc_822DAD74;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31296
	ctx.r4.s64 = r11.s64 + -31296;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAD74:
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
	// beq 0x822dadc0
	if (cr0.eq) goto loc_822DADC0;
	// addi r11,r26,-4
	r11.s64 = r26.s64 + -4;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x822dadb4
	if (cr6.eq) goto loc_822DADB4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822dadb8
	goto loc_822DADB8;
loc_822DADB4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_822DADB8:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x822dacb8
	goto loc_822DACB8;
loc_822DADC0:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8040
	r29.s64 = ctx.r10.s64 + -8040;
	// bne 0x822dadec
	if (!cr0.eq) goto loc_822DADEC;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31308
	ctx.r4.s64 = r11.s64 + -31308;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DADEC:
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
	// beq 0x822dae44
	if (cr0.eq) goto loc_822DAE44;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822d77f8
	sub_822D77F8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822dae40
	if (cr6.eq) goto loc_822DAE40;
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
	// beq 0x822db0c8
	if (cr0.eq) goto loc_822DB0C8;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x822dab60
	goto loc_822DAB60;
loc_822DAE40:
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAE44:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8044
	r29.s64 = ctx.r10.s64 + -8044;
	// bne 0x822dae70
	if (!cr0.eq) goto loc_822DAE70;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31328
	ctx.r4.s64 = r11.s64 + -31328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAE70:
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
	// beq 0x822daeb4
	if (cr0.eq) goto loc_822DAEB4;
	// addi r11,r26,-4
	r11.s64 = r26.s64 + -4;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x822daeac
	if (cr6.eq) goto loc_822DAEAC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822dacb0
	goto loc_822DACB0;
loc_822DAEAC:
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x822dacb8
	goto loc_822DACB8;
loc_822DAEB4:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8048
	r29.s64 = ctx.r10.s64 + -8048;
	// bne 0x822daee0
	if (!cr0.eq) goto loc_822DAEE0;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31348
	ctx.r4.s64 = r11.s64 + -31348;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAEE0:
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
	// beq 0x822daf38
	if (cr0.eq) goto loc_822DAF38;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x822d7998
	sub_822D7998(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822daf34
	if (cr6.eq) goto loc_822DAF34;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822db0c8
	if (cr0.eq) goto loc_822DB0C8;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x822dab60
	goto loc_822DAB60;
loc_822DAF34:
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAF38:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8052
	r29.s64 = ctx.r10.s64 + -8052;
	// bne 0x822daf64
	if (!cr0.eq) goto loc_822DAF64;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14416
	ctx.r4.s64 = r11.s64 + -14416;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAF64:
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
	// beq 0x822dafbc
	if (cr0.eq) goto loc_822DAFBC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x822d7a90
	sub_822D7A90(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822dafb8
	if (cr6.eq) goto loc_822DAFB8;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822db0c8
	if (cr0.eq) goto loc_822DB0C8;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x822dab60
	goto loc_822DAB60;
loc_822DAFB8:
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAFBC:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8056
	r29.s64 = ctx.r10.s64 + -8056;
	// bne 0x822dafe8
	if (!cr0.eq) goto loc_822DAFE8;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31360
	ctx.r4.s64 = r11.s64 + -31360;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DAFE8:
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
	// beq 0x822db040
	if (cr0.eq) goto loc_822DB040;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x822d7b50
	sub_822D7B50(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822db03c
	if (cr6.eq) goto loc_822DB03C;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822db0c8
	if (cr0.eq) goto loc_822DB0C8;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x822dab60
	goto loc_822DAB60;
loc_822DB03C:
	// lwz r11,-8012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8012);
loc_822DB040:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-8060
	r29.s64 = ctx.r10.s64 + -8060;
	// bne 0x822db068
	if (!cr0.eq) goto loc_822DB068;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,-8012(r30)
	PPC_STORE_U32(r30.u32 + -8012, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24144
	ctx.r4.s64 = r11.s64 + -24144;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822DB068:
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
	// beq 0x822db0bc
	if (cr0.eq) goto loc_822DB0BC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x822da690
	sub_822DA690(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822db0bc
	if (cr6.eq) goto loc_822DB0BC;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822db0c8
	if (cr0.eq) goto loc_822DB0C8;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x822dab60
	goto loc_822DAB60;
loc_822DB0BC:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r25.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822DB0C8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822DB0D4"))) PPC_WEAK_FUNC(sub_822DB0D4);
PPC_FUNC_IMPL(__imp__sub_822DB0D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8012
	r11.s64 = r11.s64 + -8012;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8012
	ctx.r10.s64 = ctx.r10.s64 + -8012;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB0FC"))) PPC_WEAK_FUNC(sub_822DB0FC);
PPC_FUNC_IMPL(__imp__sub_822DB0FC) {
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

__attribute__((alias("__imp__sub_822DB124"))) PPC_WEAK_FUNC(sub_822DB124);
PPC_FUNC_IMPL(__imp__sub_822DB124) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8012
	r11.s64 = r11.s64 + -8012;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8012
	ctx.r10.s64 = ctx.r10.s64 + -8012;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB14C"))) PPC_WEAK_FUNC(sub_822DB14C);
PPC_FUNC_IMPL(__imp__sub_822DB14C) {
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

__attribute__((alias("__imp__sub_822DB174"))) PPC_WEAK_FUNC(sub_822DB174);
PPC_FUNC_IMPL(__imp__sub_822DB174) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8012
	r11.s64 = r11.s64 + -8012;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8012
	ctx.r10.s64 = ctx.r10.s64 + -8012;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB19C"))) PPC_WEAK_FUNC(sub_822DB19C);
PPC_FUNC_IMPL(__imp__sub_822DB19C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8012
	r11.s64 = r11.s64 + -8012;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8012
	ctx.r10.s64 = ctx.r10.s64 + -8012;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB1C4"))) PPC_WEAK_FUNC(sub_822DB1C4);
PPC_FUNC_IMPL(__imp__sub_822DB1C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8012
	r11.s64 = r11.s64 + -8012;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8012
	ctx.r10.s64 = ctx.r10.s64 + -8012;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB1EC"))) PPC_WEAK_FUNC(sub_822DB1EC);
PPC_FUNC_IMPL(__imp__sub_822DB1EC) {
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

__attribute__((alias("__imp__sub_822DB214"))) PPC_WEAK_FUNC(sub_822DB214);
PPC_FUNC_IMPL(__imp__sub_822DB214) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8012
	r11.s64 = r11.s64 + -8012;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8012
	ctx.r10.s64 = ctx.r10.s64 + -8012;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB23C"))) PPC_WEAK_FUNC(sub_822DB23C);
PPC_FUNC_IMPL(__imp__sub_822DB23C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8012
	r11.s64 = r11.s64 + -8012;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8012
	ctx.r10.s64 = ctx.r10.s64 + -8012;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB264"))) PPC_WEAK_FUNC(sub_822DB264);
PPC_FUNC_IMPL(__imp__sub_822DB264) {
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

__attribute__((alias("__imp__sub_822DB28C"))) PPC_WEAK_FUNC(sub_822DB28C);
PPC_FUNC_IMPL(__imp__sub_822DB28C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8012
	r11.s64 = r11.s64 + -8012;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8012
	ctx.r10.s64 = ctx.r10.s64 + -8012;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB2B4"))) PPC_WEAK_FUNC(sub_822DB2B4);
PPC_FUNC_IMPL(__imp__sub_822DB2B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8012
	r11.s64 = r11.s64 + -8012;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8012
	ctx.r10.s64 = ctx.r10.s64 + -8012;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB2DC"))) PPC_WEAK_FUNC(sub_822DB2DC);
PPC_FUNC_IMPL(__imp__sub_822DB2DC) {
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

__attribute__((alias("__imp__sub_822DB304"))) PPC_WEAK_FUNC(sub_822DB304);
PPC_FUNC_IMPL(__imp__sub_822DB304) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8012
	r11.s64 = r11.s64 + -8012;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8012
	ctx.r10.s64 = ctx.r10.s64 + -8012;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB32C"))) PPC_WEAK_FUNC(sub_822DB32C);
PPC_FUNC_IMPL(__imp__sub_822DB32C) {
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

__attribute__((alias("__imp__sub_822DB354"))) PPC_WEAK_FUNC(sub_822DB354);
PPC_FUNC_IMPL(__imp__sub_822DB354) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8012
	r11.s64 = r11.s64 + -8012;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8012
	ctx.r10.s64 = ctx.r10.s64 + -8012;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB37C"))) PPC_WEAK_FUNC(sub_822DB37C);
PPC_FUNC_IMPL(__imp__sub_822DB37C) {
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

__attribute__((alias("__imp__sub_822DB3A4"))) PPC_WEAK_FUNC(sub_822DB3A4);
PPC_FUNC_IMPL(__imp__sub_822DB3A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8012
	r11.s64 = r11.s64 + -8012;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8012
	ctx.r10.s64 = ctx.r10.s64 + -8012;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB3CC"))) PPC_WEAK_FUNC(sub_822DB3CC);
PPC_FUNC_IMPL(__imp__sub_822DB3CC) {
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

__attribute__((alias("__imp__sub_822DB3F4"))) PPC_WEAK_FUNC(sub_822DB3F4);
PPC_FUNC_IMPL(__imp__sub_822DB3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DB3F8"))) PPC_WEAK_FUNC(sub_822DB3F8);
PPC_FUNC_IMPL(__imp__sub_822DB3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// lwa r9,8(r3)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 8));
	// lwa r8,4(r3)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 4));
	// lwa r10,12(r3)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 12));
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// std r9,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r9.u64);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// std r10,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r10.u64);
	// mulli r10,r11,480
	ctx.r10.s64 = r11.s64 * 480;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lfd f13,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r11,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-32(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfd f10,-24(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fdivs f0,f0,f11
	f0.f64 = double(float(f0.f64 / ctx.f11.f64));
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fadds f1,f0,f12
	ctx.f1.f64 = double(float(f0.f64 + ctx.f12.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB478"))) PPC_WEAK_FUNC(sub_822DB478);
PPC_FUNC_IMPL(__imp__sub_822DB478) {
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
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB48C"))) PPC_WEAK_FUNC(sub_822DB48C);
PPC_FUNC_IMPL(__imp__sub_822DB48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DB490"))) PPC_WEAK_FUNC(sub_822DB490);
PPC_FUNC_IMPL(__imp__sub_822DB490) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-30640(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30640);
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-30708
	r11.s64 = r11.s64 + -30708;
	// addi r4,r10,12688
	ctx.r4.s64 = ctx.r10.s64 + 12688;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,-9608(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9608);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r29,41(r30)
	PPC_STORE_U8(r30.u32 + 41, r29.u8);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r11.u8);
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r28,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r28.u32);
	// stw r27,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r27.u32);
	// stb r29,72(r30)
	PPC_STORE_U8(r30.u32 + 72, r29.u8);
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// stw r29,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r29.u32);
	// stb r29,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r29.u8);
	// stw r11,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r11.u32);
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// addi r11,r3,36
	r11.s64 = ctx.r3.s64 + 36;
	// stw r29,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r29.u32);
	// stw r11,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822DB498"))) PPC_WEAK_FUNC(sub_822DB498);
PPC_FUNC_IMPL(__imp__sub_822DB498) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-30708
	r11.s64 = r11.s64 + -30708;
	// addi r4,r10,12688
	ctx.r4.s64 = ctx.r10.s64 + 12688;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,-9608(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9608);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r29,41(r30)
	PPC_STORE_U8(r30.u32 + 41, r29.u8);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r11.u8);
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r28,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r28.u32);
	// stw r27,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r27.u32);
	// stb r29,72(r30)
	PPC_STORE_U8(r30.u32 + 72, r29.u8);
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// stw r29,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r29.u32);
	// stb r29,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r29.u8);
	// stw r11,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r11.u32);
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// addi r11,r3,36
	r11.s64 = ctx.r3.s64 + 36;
	// stw r29,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r29.u32);
	// stw r11,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822DB578"))) PPC_WEAK_FUNC(sub_822DB578);
PPC_FUNC_IMPL(__imp__sub_822DB578) {
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

__attribute__((alias("__imp__sub_822DB5A0"))) PPC_WEAK_FUNC(sub_822DB5A0);
PPC_FUNC_IMPL(__imp__sub_822DB5A0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB5A8"))) PPC_WEAK_FUNC(sub_822DB5A8);
PPC_FUNC_IMPL(__imp__sub_822DB5A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB5B0"))) PPC_WEAK_FUNC(sub_822DB5B0);
PPC_FUNC_IMPL(__imp__sub_822DB5B0) {
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
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x822db600
	if (cr6.eq) goto loc_822DB600;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x822bb768
	sub_822BB768(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822db5fc
	if (cr0.eq) goto loc_822DB5FC;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
loc_822DB5FC:
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
loc_822DB600:
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

__attribute__((alias("__imp__sub_822DB618"))) PPC_WEAK_FUNC(sub_822DB618);
PPC_FUNC_IMPL(__imp__sub_822DB618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822db62c
	if (!cr0.eq) goto loc_822DB62C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822DB62C:
	// lbz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB634"))) PPC_WEAK_FUNC(sub_822DB634);
PPC_FUNC_IMPL(__imp__sub_822DB634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DB638"))) PPC_WEAK_FUNC(sub_822DB638);
PPC_FUNC_IMPL(__imp__sub_822DB638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x822db668
	if (cr6.gt) goto loc_822DB668;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x822db668
	if (cr6.lt) goto loc_822DB668;
	// fmr f0,f1
	f0.f64 = ctx.f1.f64;
loc_822DB668:
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB678"))) PPC_WEAK_FUNC(sub_822DB678);
PPC_FUNC_IMPL(__imp__sub_822DB678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// stb r4,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB68C"))) PPC_WEAK_FUNC(sub_822DB68C);
PPC_FUNC_IMPL(__imp__sub_822DB68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DB690"))) PPC_WEAK_FUNC(sub_822DB690);
PPC_FUNC_IMPL(__imp__sub_822DB690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822db6b4
	if (cr0.eq) goto loc_822DB6B4;
	// lbz r11,41(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822db6b4
	if (cr0.eq) goto loc_822DB6B4;
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// blr 
	return;
loc_822DB6B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB6BC"))) PPC_WEAK_FUNC(sub_822DB6BC);
PPC_FUNC_IMPL(__imp__sub_822DB6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DB6C0"))) PPC_WEAK_FUNC(sub_822DB6C0);
PPC_FUNC_IMPL(__imp__sub_822DB6C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822db6e4
	if (cr0.eq) goto loc_822DB6E4;
	// lbz r11,41(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822db6e4
	if (cr0.eq) goto loc_822DB6E4;
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lfs f1,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_822DB6E4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB6F0"))) PPC_WEAK_FUNC(sub_822DB6F0);
PPC_FUNC_IMPL(__imp__sub_822DB6F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// stfs f1,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB704"))) PPC_WEAK_FUNC(sub_822DB704);
PPC_FUNC_IMPL(__imp__sub_822DB704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DB708"))) PPC_WEAK_FUNC(sub_822DB708);
PPC_FUNC_IMPL(__imp__sub_822DB708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// stfs f1,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB71C"))) PPC_WEAK_FUNC(sub_822DB71C);
PPC_FUNC_IMPL(__imp__sub_822DB71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DB720"))) PPC_WEAK_FUNC(sub_822DB720);
PPC_FUNC_IMPL(__imp__sub_822DB720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,-1
	r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB734"))) PPC_WEAK_FUNC(sub_822DB734);
PPC_FUNC_IMPL(__imp__sub_822DB734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DB738"))) PPC_WEAK_FUNC(sub_822DB738);
PPC_FUNC_IMPL(__imp__sub_822DB738) {
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
	// beq 0x822db768
	if (cr0.eq) goto loc_822DB768;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822DB768:
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

__attribute__((alias("__imp__sub_822DB784"))) PPC_WEAK_FUNC(sub_822DB784);
PPC_FUNC_IMPL(__imp__sub_822DB784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DB788"))) PPC_WEAK_FUNC(sub_822DB788);
PPC_FUNC_IMPL(__imp__sub_822DB788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	f0.f64 = double(float(f0.f64 + ctx.f1.f64));
	// lfs f13,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x822db7c0
	if (cr6.gt) goto loc_822DB7C0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x822db7c4
	if (!cr6.lt) goto loc_822DB7C4;
loc_822DB7C0:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64;
loc_822DB7C4:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB7D0"))) PPC_WEAK_FUNC(sub_822DB7D0);
PPC_FUNC_IMPL(__imp__sub_822DB7D0) {
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
	// lwz r16,-30584(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30584);
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
	// li r26,0
	r26.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r4,64(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r11,176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822db898
	if (cr0.eq) goto loc_822DB898;
	// lwz r4,64(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
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
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822db898
	if (cr6.eq) goto loc_822DB898;
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
	// beq 0x822db8a4
	if (cr0.eq) goto loc_822DB8A4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822db8a4
	goto loc_822DB8A4;
loc_822DB898:
	// li r11,6
	r11.s64 = 6;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_822DB8A4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822DB7D8"))) PPC_WEAK_FUNC(sub_822DB7D8);
PPC_FUNC_IMPL(__imp__sub_822DB7D8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r4,64(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r11,176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822db898
	if (cr0.eq) goto loc_822DB898;
	// lwz r4,64(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
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
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822db898
	if (cr6.eq) goto loc_822DB898;
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
	// beq 0x822db8a4
	if (cr0.eq) goto loc_822DB8A4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822db8a4
	goto loc_822DB8A4;
loc_822DB898:
	// li r11,6
	r11.s64 = 6;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_822DB8A4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822DB8B0"))) PPC_WEAK_FUNC(sub_822DB8B0);
PPC_FUNC_IMPL(__imp__sub_822DB8B0) {
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

__attribute__((alias("__imp__sub_822DB8D8"))) PPC_WEAK_FUNC(sub_822DB8D8);
PPC_FUNC_IMPL(__imp__sub_822DB8D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lbz r11,41(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822db788
	sub_822DB788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822DB8FC"))) PPC_WEAK_FUNC(sub_822DB8FC);
PPC_FUNC_IMPL(__imp__sub_822DB8FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DB900"))) PPC_WEAK_FUNC(sub_822DB900);
PPC_FUNC_IMPL(__imp__sub_822DB900) {
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
	// lwz r16,-30480(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30480);
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
	// lbz r11,40(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822dba08
	if (cr0.eq) goto loc_822DBA08;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,-8000(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8000);
	// stw r9,84(r28)
	PPC_STORE_U32(r28.u32 + 84, ctx.r9.u32);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-8008
	r30.s64 = ctx.r9.s64 + -8008;
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x822db9a0
	if (!cr0.eq) goto loc_822DB9A0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8000, r11.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-30520
	ctx.r4.s64 = r11.s64 + -30520;
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
	// beq 0x822db994
	if (cr0.eq) goto loc_822DB994;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DB994:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14768
	ctx.r3.s64 = r11.s64 + 14768;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DB9A0:
	// lwz r11,88(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 88);
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
	// beq 0x822db9d4
	if (cr0.eq) goto loc_822DB9D4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DB9D4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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
	// beq 0x822dba08
	if (cr0.eq) goto loc_822DBA08;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBA08:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822DB908"))) PPC_WEAK_FUNC(sub_822DB908);
PPC_FUNC_IMPL(__imp__sub_822DB908) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r11,40(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822dba08
	if (cr0.eq) goto loc_822DBA08;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,-8000(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8000);
	// stw r9,84(r28)
	PPC_STORE_U32(r28.u32 + 84, ctx.r9.u32);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-8008
	r30.s64 = ctx.r9.s64 + -8008;
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x822db9a0
	if (!cr0.eq) goto loc_822DB9A0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8000, r11.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-30520
	ctx.r4.s64 = r11.s64 + -30520;
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
	// beq 0x822db994
	if (cr0.eq) goto loc_822DB994;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DB994:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14768
	ctx.r3.s64 = r11.s64 + 14768;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DB9A0:
	// lwz r11,88(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 88);
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
	// beq 0x822db9d4
	if (cr0.eq) goto loc_822DB9D4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DB9D4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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
	// beq 0x822dba08
	if (cr0.eq) goto loc_822DBA08;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBA08:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822DBA10"))) PPC_WEAK_FUNC(sub_822DBA10);
PPC_FUNC_IMPL(__imp__sub_822DBA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8000
	r11.s64 = r11.s64 + -8000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8000
	ctx.r10.s64 = ctx.r10.s64 + -8000;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DBA38"))) PPC_WEAK_FUNC(sub_822DBA38);
PPC_FUNC_IMPL(__imp__sub_822DBA38) {
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

__attribute__((alias("__imp__sub_822DBA60"))) PPC_WEAK_FUNC(sub_822DBA60);
PPC_FUNC_IMPL(__imp__sub_822DBA60) {
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

__attribute__((alias("__imp__sub_822DBA88"))) PPC_WEAK_FUNC(sub_822DBA88);
PPC_FUNC_IMPL(__imp__sub_822DBA88) {
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
	// lwz r16,-30328(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30328);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r11,40(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822dbc60
	if (cr0.eq) goto loc_822DBC60;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// stb r4,41(r28)
	PPC_STORE_U8(r28.u32 + 41, ctx.r4.u8);
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,-7980(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7980);
	// beq 0x822dbb94
	if (cr0.eq) goto loc_822DBB94;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-7988
	r29.s64 = ctx.r9.s64 + -7988;
	// bne 0x822dbb2c
	if (!cr0.eq) goto loc_822DBB2C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7980, r11.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-30388
	ctx.r4.s64 = r11.s64 + -30388;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dbb20
	if (cr0.eq) goto loc_822DBB20;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBB20:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14832
	ctx.r3.s64 = r11.s64 + 14832;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DBB2C:
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
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
	// beq 0x822dbb60
	if (cr0.eq) goto loc_822DBB60;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBB60:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
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
	// beq 0x822dbc60
	if (cr0.eq) goto loc_822DBC60;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x822dbc5c
	goto loc_822DBC5C;
loc_822DBB94:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-7996
	r29.s64 = ctx.r9.s64 + -7996;
	// bne 0x822dbbf8
	if (!cr0.eq) goto loc_822DBBF8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7980, r11.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-30400
	ctx.r4.s64 = r11.s64 + -30400;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dbbec
	if (cr0.eq) goto loc_822DBBEC;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBBEC:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14800
	ctx.r3.s64 = r11.s64 + 14800;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DBBF8:
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dbc2c
	if (cr0.eq) goto loc_822DBC2C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBC2C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dbc60
	if (cr0.eq) goto loc_822DBC60;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
loc_822DBC5C:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBC60:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822DBA90"))) PPC_WEAK_FUNC(sub_822DBA90);
PPC_FUNC_IMPL(__imp__sub_822DBA90) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r11,40(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822dbc60
	if (cr0.eq) goto loc_822DBC60;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// stb r4,41(r28)
	PPC_STORE_U8(r28.u32 + 41, ctx.r4.u8);
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,-7980(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7980);
	// beq 0x822dbb94
	if (cr0.eq) goto loc_822DBB94;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-7988
	r29.s64 = ctx.r9.s64 + -7988;
	// bne 0x822dbb2c
	if (!cr0.eq) goto loc_822DBB2C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7980, r11.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-30388
	ctx.r4.s64 = r11.s64 + -30388;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dbb20
	if (cr0.eq) goto loc_822DBB20;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBB20:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14832
	ctx.r3.s64 = r11.s64 + 14832;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DBB2C:
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
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
	// beq 0x822dbb60
	if (cr0.eq) goto loc_822DBB60;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBB60:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
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
	// beq 0x822dbc60
	if (cr0.eq) goto loc_822DBC60;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x822dbc5c
	goto loc_822DBC5C;
loc_822DBB94:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-7996
	r29.s64 = ctx.r9.s64 + -7996;
	// bne 0x822dbbf8
	if (!cr0.eq) goto loc_822DBBF8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7980, r11.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-30400
	ctx.r4.s64 = r11.s64 + -30400;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dbbec
	if (cr0.eq) goto loc_822DBBEC;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBBEC:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14800
	ctx.r3.s64 = r11.s64 + 14800;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DBBF8:
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dbc2c
	if (cr0.eq) goto loc_822DBC2C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBC2C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dbc60
	if (cr0.eq) goto loc_822DBC60;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
loc_822DBC5C:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBC60:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822DBC68"))) PPC_WEAK_FUNC(sub_822DBC68);
PPC_FUNC_IMPL(__imp__sub_822DBC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7980
	r11.s64 = r11.s64 + -7980;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7980
	ctx.r10.s64 = ctx.r10.s64 + -7980;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DBC90"))) PPC_WEAK_FUNC(sub_822DBC90);
PPC_FUNC_IMPL(__imp__sub_822DBC90) {
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

__attribute__((alias("__imp__sub_822DBCB8"))) PPC_WEAK_FUNC(sub_822DBCB8);
PPC_FUNC_IMPL(__imp__sub_822DBCB8) {
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

__attribute__((alias("__imp__sub_822DBCE0"))) PPC_WEAK_FUNC(sub_822DBCE0);
PPC_FUNC_IMPL(__imp__sub_822DBCE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7980
	r11.s64 = r11.s64 + -7980;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7980
	ctx.r10.s64 = ctx.r10.s64 + -7980;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DBD08"))) PPC_WEAK_FUNC(sub_822DBD08);
PPC_FUNC_IMPL(__imp__sub_822DBD08) {
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

__attribute__((alias("__imp__sub_822DBD30"))) PPC_WEAK_FUNC(sub_822DBD30);
PPC_FUNC_IMPL(__imp__sub_822DBD30) {
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

__attribute__((alias("__imp__sub_822DBD58"))) PPC_WEAK_FUNC(sub_822DBD58);
PPC_FUNC_IMPL(__imp__sub_822DBD58) {
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
	// lwz r16,-30168(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30168);
	// mflr r12
	// bl 0x8239bcf0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lbz r11,40(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822dbfd8
	if (cr0.eq) goto loc_822DBFD8;
	// lbz r11,41(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 41);
	// li r26,0
	r26.s64 = 0;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822dbe6c
	if (cr0.eq) goto loc_822DBE6C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822db3f8
	sub_822DB3F8(ctx, base);
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x822db3f8
	sub_822DB3F8(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lfs f13,76(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x822db788
	sub_822DB788(ctx, base);
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x822dbea4
	if (!cr6.eq) goto loc_822DBEA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822dba90
	sub_822DBA90(ctx, base);
	// lwz r11,-7960(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -7960);
	// stb r26,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r26.u8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7968
	r29.s64 = ctx.r10.s64 + -7968;
	// bne 0x822dbe34
	if (!cr0.eq) goto loc_822DBE34;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7960(r28)
	PPC_STORE_U32(r28.u32 + -7960, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-30216
	ctx.r4.s64 = r11.s64 + -30216;
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
	// addi r3,r11,14672
	ctx.r3.s64 = r11.s64 + 14672;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DBE34:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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
	// beq 0x822dbea4
	if (cr0.eq) goto loc_822DBEA4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822dbea4
	goto loc_822DBEA4;
loc_822DBE6C:
	// lbz r11,72(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822dbea4
	if (cr0.eq) goto loc_822DBEA4;
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// lfs f13,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,-4904(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64));
	// bl 0x822db788
	sub_822DB788(ctx, base);
loc_822DBEA4:
	// addi r10,r30,44
	ctx.r10.s64 = r30.s64 + 44;
	// mr r11,r27
	r11.u64 = r27.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_822DBEB4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822dbeb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_822DBEB4;
	// lbz r11,100(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 100);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822dbfd8
	if (!cr0.eq) goto loc_822DBFD8;
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x822dbfd8
	if (cr6.lt) goto loc_822DBFD8;
	// lwz r11,-7960(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -7960);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,100(r30)
	PPC_STORE_U8(r30.u32 + 100, ctx.r10.u8);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7976
	r29.s64 = ctx.r10.s64 + -7976;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822dbf5c
	if (!cr0.eq) goto loc_822DBF5C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7960(r28)
	PPC_STORE_U32(r28.u32 + -7960, r11.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,20684
	ctx.r4.s64 = r11.s64 + 20684;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dbf50
	if (cr0.eq) goto loc_822DBF50;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBF50:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14640
	ctx.r3.s64 = r11.s64 + 14640;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DBF5C:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// stw r26,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r26.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
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
	// beq 0x822dbf90
	if (cr0.eq) goto loc_822DBF90;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBF90:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
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
	// beq 0x822dbfd8
	if (cr0.eq) goto loc_822DBFD8;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBFD8:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822DBD60"))) PPC_WEAK_FUNC(sub_822DBD60);
PPC_FUNC_IMPL(__imp__sub_822DBD60) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lbz r11,40(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822dbfd8
	if (cr0.eq) goto loc_822DBFD8;
	// lbz r11,41(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 41);
	// li r26,0
	r26.s64 = 0;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822dbe6c
	if (cr0.eq) goto loc_822DBE6C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822db3f8
	sub_822DB3F8(ctx, base);
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x822db3f8
	sub_822DB3F8(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lfs f13,76(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x822db788
	sub_822DB788(ctx, base);
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x822dbea4
	if (!cr6.eq) goto loc_822DBEA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822dba90
	sub_822DBA90(ctx, base);
	// lwz r11,-7960(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -7960);
	// stb r26,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r26.u8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7968
	r29.s64 = ctx.r10.s64 + -7968;
	// bne 0x822dbe34
	if (!cr0.eq) goto loc_822DBE34;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7960(r28)
	PPC_STORE_U32(r28.u32 + -7960, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-30216
	ctx.r4.s64 = r11.s64 + -30216;
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
	// addi r3,r11,14672
	ctx.r3.s64 = r11.s64 + 14672;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DBE34:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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
	// beq 0x822dbea4
	if (cr0.eq) goto loc_822DBEA4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822dbea4
	goto loc_822DBEA4;
loc_822DBE6C:
	// lbz r11,72(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822dbea4
	if (cr0.eq) goto loc_822DBEA4;
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// lfs f13,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,-4904(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64));
	// bl 0x822db788
	sub_822DB788(ctx, base);
loc_822DBEA4:
	// addi r10,r30,44
	ctx.r10.s64 = r30.s64 + 44;
	// mr r11,r27
	r11.u64 = r27.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_822DBEB4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822dbeb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_822DBEB4;
	// lbz r11,100(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 100);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822dbfd8
	if (!cr0.eq) goto loc_822DBFD8;
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x822dbfd8
	if (cr6.lt) goto loc_822DBFD8;
	// lwz r11,-7960(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -7960);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,100(r30)
	PPC_STORE_U8(r30.u32 + 100, ctx.r10.u8);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7976
	r29.s64 = ctx.r10.s64 + -7976;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822dbf5c
	if (!cr0.eq) goto loc_822DBF5C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7960(r28)
	PPC_STORE_U32(r28.u32 + -7960, r11.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,20684
	ctx.r4.s64 = r11.s64 + 20684;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dbf50
	if (cr0.eq) goto loc_822DBF50;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBF50:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14640
	ctx.r3.s64 = r11.s64 + 14640;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DBF5C:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// stw r26,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r26.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
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
	// beq 0x822dbf90
	if (cr0.eq) goto loc_822DBF90;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBF90:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
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
	// beq 0x822dbfd8
	if (cr0.eq) goto loc_822DBFD8;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DBFD8:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822DBFE4"))) PPC_WEAK_FUNC(sub_822DBFE4);
PPC_FUNC_IMPL(__imp__sub_822DBFE4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7960
	r11.s64 = r11.s64 + -7960;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7960
	ctx.r10.s64 = ctx.r10.s64 + -7960;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DC00C"))) PPC_WEAK_FUNC(sub_822DC00C);
PPC_FUNC_IMPL(__imp__sub_822DC00C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7960
	r11.s64 = r11.s64 + -7960;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7960
	ctx.r10.s64 = ctx.r10.s64 + -7960;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DC034"))) PPC_WEAK_FUNC(sub_822DC034);
PPC_FUNC_IMPL(__imp__sub_822DC034) {
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

__attribute__((alias("__imp__sub_822DC05C"))) PPC_WEAK_FUNC(sub_822DC05C);
PPC_FUNC_IMPL(__imp__sub_822DC05C) {
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

__attribute__((alias("__imp__sub_822DC084"))) PPC_WEAK_FUNC(sub_822DC084);
PPC_FUNC_IMPL(__imp__sub_822DC084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DC088"))) PPC_WEAK_FUNC(sub_822DC088);
PPC_FUNC_IMPL(__imp__sub_822DC088) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-30008(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30008);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lbz r11,40(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822dc2c0
	if (cr0.eq) goto loc_822DC2C0;
	// bl 0x822db5b0
	sub_822DB5B0(ctx, base);
	// lis r26,-32127
	r26.s64 = -2105475072;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r3,-9288(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -9288);
	// bl 0x822bb788
	sub_822BB788(ctx, base);
	// lbz r11,41(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 41);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bc 20,lt,0x822dc0f8
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dc2b8
	if (cr0.eq) goto loc_822DC2B8;
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x822dc2c0
	if (cr6.eq) goto loc_822DC2C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822db908
	sub_822DB908(ctx, base);
	// b 0x822dc2c0
	goto loc_822DC2C0;
loc_822DC0F8:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dc2b8
	if (cr0.eq) goto loc_822DC2B8;
	// lis r27,-32127
	r27.s64 = -2105475072;
	// lwz r11,-7940(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -7940);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7948
	r29.s64 = ctx.r10.s64 + -7948;
	// bne 0x822dc14c
	if (!cr0.eq) goto loc_822DC14C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7940(r27)
	PPC_STORE_U32(r27.u32 + -7940, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-30056
	ctx.r4.s64 = r11.s64 + -30056;
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
	// addi r3,r11,14736
	ctx.r3.s64 = r11.s64 + 14736;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DC14C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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
	// beq 0x822dc180
	if (cr0.eq) goto loc_822DC180;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DC180:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r3,-9288(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -9288);
	// bl 0x822bb768
	sub_822BB768(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dc1a0
	if (cr0.eq) goto loc_822DC1A0;
	// li r11,2
	r11.s64 = 2;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
loc_822DC1A0:
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x822dc2c0
	if (!cr6.eq) goto loc_822DC2C0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,-9288(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -9288);
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// bl 0x822bb7a8
	sub_822BB7A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dc2c0
	if (cr0.eq) goto loc_822DC2C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822db788
	sub_822DB788(ctx, base);
	// lwz r11,-7940(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -7940);
	// li r28,0
	r28.s64 = 0;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r30)
	PPC_STORE_U32(r30.u32 + 92, ctx.r10.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7956
	r29.s64 = ctx.r10.s64 + -7956;
	// bne 0x822dc248
	if (!cr0.eq) goto loc_822DC248;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7940(r27)
	PPC_STORE_U32(r27.u32 + -7940, r11.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-30072
	ctx.r4.s64 = r11.s64 + -30072;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dc23c
	if (cr0.eq) goto loc_822DC23C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DC23C:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14704
	ctx.r3.s64 = r11.s64 + 14704;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DC248:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
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
	// beq 0x822dc27c
	if (cr0.eq) goto loc_822DC27C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DC27C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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
	// beq 0x822dc2b0
	if (cr0.eq) goto loc_822DC2B0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DC2B0:
	// li r11,3
	r11.s64 = 3;
	// b 0x822dc2bc
	goto loc_822DC2BC;
loc_822DC2B8:
	// li r11,0
	r11.s64 = 0;
loc_822DC2BC:
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
loc_822DC2C0:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822DC090"))) PPC_WEAK_FUNC(sub_822DC090);
PPC_FUNC_IMPL(__imp__sub_822DC090) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lbz r11,40(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822dc2c0
	if (cr0.eq) goto loc_822DC2C0;
	// bl 0x822db5b0
	sub_822DB5B0(ctx, base);
	// lis r26,-32127
	r26.s64 = -2105475072;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r3,-9288(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -9288);
	// bl 0x822bb788
	sub_822BB788(ctx, base);
	// lbz r11,41(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 41);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bc 20,lt,0x822dc0f8
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dc2b8
	if (cr0.eq) goto loc_822DC2B8;
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x822dc2c0
	if (cr6.eq) goto loc_822DC2C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822db908
	sub_822DB908(ctx, base);
	// b 0x822dc2c0
	goto loc_822DC2C0;
loc_822DC0F8:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dc2b8
	if (cr0.eq) goto loc_822DC2B8;
	// lis r27,-32127
	r27.s64 = -2105475072;
	// lwz r11,-7940(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -7940);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7948
	r29.s64 = ctx.r10.s64 + -7948;
	// bne 0x822dc14c
	if (!cr0.eq) goto loc_822DC14C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7940(r27)
	PPC_STORE_U32(r27.u32 + -7940, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-30056
	ctx.r4.s64 = r11.s64 + -30056;
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
	// addi r3,r11,14736
	ctx.r3.s64 = r11.s64 + 14736;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DC14C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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
	// beq 0x822dc180
	if (cr0.eq) goto loc_822DC180;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DC180:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r3,-9288(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -9288);
	// bl 0x822bb768
	sub_822BB768(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dc1a0
	if (cr0.eq) goto loc_822DC1A0;
	// li r11,2
	r11.s64 = 2;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
loc_822DC1A0:
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x822dc2c0
	if (!cr6.eq) goto loc_822DC2C0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,-9288(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -9288);
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// bl 0x822bb7a8
	sub_822BB7A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dc2c0
	if (cr0.eq) goto loc_822DC2C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822db788
	sub_822DB788(ctx, base);
	// lwz r11,-7940(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -7940);
	// li r28,0
	r28.s64 = 0;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r30)
	PPC_STORE_U32(r30.u32 + 92, ctx.r10.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7956
	r29.s64 = ctx.r10.s64 + -7956;
	// bne 0x822dc248
	if (!cr0.eq) goto loc_822DC248;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7940(r27)
	PPC_STORE_U32(r27.u32 + -7940, r11.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-30072
	ctx.r4.s64 = r11.s64 + -30072;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dc23c
	if (cr0.eq) goto loc_822DC23C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DC23C:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14704
	ctx.r3.s64 = r11.s64 + 14704;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DC248:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
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
	// beq 0x822dc27c
	if (cr0.eq) goto loc_822DC27C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DC27C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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
	// beq 0x822dc2b0
	if (cr0.eq) goto loc_822DC2B0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DC2B0:
	// li r11,3
	r11.s64 = 3;
	// b 0x822dc2bc
	goto loc_822DC2BC;
loc_822DC2B8:
	// li r11,0
	r11.s64 = 0;
loc_822DC2BC:
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
loc_822DC2C0:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822DC2C8"))) PPC_WEAK_FUNC(sub_822DC2C8);
PPC_FUNC_IMPL(__imp__sub_822DC2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7940
	r11.s64 = r11.s64 + -7940;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7940
	ctx.r10.s64 = ctx.r10.s64 + -7940;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DC2F0"))) PPC_WEAK_FUNC(sub_822DC2F0);
PPC_FUNC_IMPL(__imp__sub_822DC2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7940
	r11.s64 = r11.s64 + -7940;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7940
	ctx.r10.s64 = ctx.r10.s64 + -7940;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DC318"))) PPC_WEAK_FUNC(sub_822DC318);
PPC_FUNC_IMPL(__imp__sub_822DC318) {
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

__attribute__((alias("__imp__sub_822DC340"))) PPC_WEAK_FUNC(sub_822DC340);
PPC_FUNC_IMPL(__imp__sub_822DC340) {
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

__attribute__((alias("__imp__sub_822DC368"))) PPC_WEAK_FUNC(sub_822DC368);
PPC_FUNC_IMPL(__imp__sub_822DC368) {
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
	// lbz r11,40(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822dc414
	if (cr0.eq) goto loc_822DC414;
	// bl 0x822db5b0
	sub_822DB5B0(ctx, base);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// bne cr6,0x822dc3ac
	if (!cr6.eq) goto loc_822DC3AC;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x822dc414
	if (!cr6.eq) goto loc_822DC414;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db908
	sub_822DB908(ctx, base);
	// b 0x822dc414
	goto loc_822DC414;
loc_822DC3AC:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,-9288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// bl 0x822bb788
	sub_822BB788(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dc40c
	if (cr0.eq) goto loc_822DC40C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,-9288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// bl 0x822bb768
	sub_822BB768(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822dc3ec
	if (!cr0.eq) goto loc_822DC3EC;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x822dc3f4
	if (cr6.eq) goto loc_822DC3F4;
loc_822DC3EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db908
	sub_822DB908(ctx, base);
loc_822DC3F4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r3,-9288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// bl 0x822bb7a8
	sub_822BB7A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dc414
	if (cr0.eq) goto loc_822DC414;
loc_822DC40C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_822DC414:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822DC41C"))) PPC_WEAK_FUNC(sub_822DC41C);
PPC_FUNC_IMPL(__imp__sub_822DC41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DC420"))) PPC_WEAK_FUNC(sub_822DC420);
PPC_FUNC_IMPL(__imp__sub_822DC420) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822dc464
	if (!cr0.eq) goto loc_822DC464;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822dc464
	if (cr0.eq) goto loc_822DC464;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// stfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// b 0x822dc494
	goto loc_822DC494;
loc_822DC464:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822dc498
	if (cr6.eq) goto loc_822DC498;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822dc498
	if (!cr0.eq) goto loc_822DC498;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 - f0.f64));
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
loc_822DC494:
	// stb r30,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r30.u8);
loc_822DC498:
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

__attribute__((alias("__imp__sub_822DC4B0"))) PPC_WEAK_FUNC(sub_822DC4B0);
PPC_FUNC_IMPL(__imp__sub_822DC4B0) {
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
	// beq 0x822dc4f0
	if (cr0.eq) goto loc_822DC4F0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,24724
	ctx.r3.s64 = r11.s64 + 24724;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822dc4f8
	goto loc_822DC4F8;
loc_822DC4F0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_822DC4F8:
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

__attribute__((alias("__imp__sub_822DC514"))) PPC_WEAK_FUNC(sub_822DC514);
PPC_FUNC_IMPL(__imp__sub_822DC514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DC518"))) PPC_WEAK_FUNC(sub_822DC518);
PPC_FUNC_IMPL(__imp__sub_822DC518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x822dc538
	if (cr6.lt) goto loc_822DC538;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_822DC538:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DC54C"))) PPC_WEAK_FUNC(sub_822DC54C);
PPC_FUNC_IMPL(__imp__sub_822DC54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DC550"))) PPC_WEAK_FUNC(sub_822DC550);
PPC_FUNC_IMPL(__imp__sub_822DC550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_822DC558:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822dc578
	if (cr6.eq) goto loc_822DC578;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_822DC578:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bne 0x822dc558
	if (!cr0.eq) goto loc_822DC558;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DC588"))) PPC_WEAK_FUNC(sub_822DC588);
PPC_FUNC_IMPL(__imp__sub_822DC588) {
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
	// blt cr6,0x822dc5c0
	if (cr6.lt) goto loc_822DC5C0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x822dc5c4
	if (cr6.lt) goto loc_822DC5C4;
loc_822DC5C0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822DC5C4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822dc60c
	if (cr0.eq) goto loc_822DC60C;
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
	// bl 0x822dc588
	sub_822DC588(ctx, base);
	// b 0x822dc720
	goto loc_822DC720;
loc_822DC60C:
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
	// ble cr6,0x822dc6b8
	if (!cr6.gt) goto loc_822DC6B8;
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
	// ble 0x822dc680
	if (!cr0.gt) goto loc_822DC680;
loc_822DC658:
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
	// bgt 0x822dc658
	if (cr0.gt) goto loc_822DC658;
loc_822DC680:
	// add r10,r27,r29
	ctx.r10.u64 = r27.u64 + r29.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x822dc720
	if (cr6.eq) goto loc_822DC720;
loc_822DC690:
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
	// bne cr6,0x822dc690
	if (!cr6.eq) goto loc_822DC690;
	// b 0x822dc720
	goto loc_822DC720;
loc_822DC6B8:
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
	// beq cr6,0x822dc720
	if (cr6.eq) goto loc_822DC720;
loc_822DC6FC:
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
	// bne cr6,0x822dc6fc
	if (!cr6.eq) goto loc_822DC6FC;
loc_822DC720:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822DC728"))) PPC_WEAK_FUNC(sub_822DC728);
PPC_FUNC_IMPL(__imp__sub_822DC728) {
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
	// lwz r16,-29860(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -29860);
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
	// blt cr6,0x822dc788
	if (cr6.lt) goto loc_822DC788;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_822DC788:
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
	// bl 0x822dc4b0
	sub_822DC4B0(ctx, base);
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
	// bne cr6,0x822dc7f4
	if (!cr6.eq) goto loc_822DC7F4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822dc7ec
	if (cr6.eq) goto loc_822DC7EC;
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
loc_822DC7EC:
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// b 0x822dc80c
	goto loc_822DC80C;
loc_822DC7F4:
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
loc_822DC80C:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822dc830
	if (!cr0.eq) goto loc_822DC830;
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
loc_822DC830:
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
	// b 0x822dc878
	goto loc_822DC878;
loc_822DC858:
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
loc_822DC878:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822dc858
	if (!cr0.eq) goto loc_822DC858;
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

__attribute__((alias("__imp__sub_822DC730"))) PPC_WEAK_FUNC(sub_822DC730);
PPC_FUNC_IMPL(__imp__sub_822DC730) {
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
	// blt cr6,0x822dc788
	if (cr6.lt) goto loc_822DC788;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_822DC788:
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
	// bl 0x822dc4b0
	sub_822DC4B0(ctx, base);
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
	// bne cr6,0x822dc7f4
	if (!cr6.eq) goto loc_822DC7F4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822dc7ec
	if (cr6.eq) goto loc_822DC7EC;
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
loc_822DC7EC:
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// b 0x822dc80c
	goto loc_822DC80C;
loc_822DC7F4:
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
loc_822DC80C:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822dc830
	if (!cr0.eq) goto loc_822DC830;
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
loc_822DC830:
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
	// b 0x822dc878
	goto loc_822DC878;
loc_822DC858:
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
loc_822DC878:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822dc858
	if (!cr0.eq) goto loc_822DC858;
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

__attribute__((alias("__imp__sub_822DC8B8"))) PPC_WEAK_FUNC(sub_822DC8B8);
PPC_FUNC_IMPL(__imp__sub_822DC8B8) {
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
	// lwz r16,-29860(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -29860);
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

__attribute__((alias("__imp__sub_822DC8C0"))) PPC_WEAK_FUNC(sub_822DC8C0);
PPC_FUNC_IMPL(__imp__sub_822DC8C0) {
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

__attribute__((alias("__imp__sub_822DC8F0"))) PPC_WEAK_FUNC(sub_822DC8F0);
PPC_FUNC_IMPL(__imp__sub_822DC8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, r11.u8);
	// lwz r10,-9608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9608);
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DC944"))) PPC_WEAK_FUNC(sub_822DC944);
PPC_FUNC_IMPL(__imp__sub_822DC944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DC948"))) PPC_WEAK_FUNC(sub_822DC948);
PPC_FUNC_IMPL(__imp__sub_822DC948) {
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
	// beq cr6,0x822dc99c
	if (cr6.eq) goto loc_822DC99C;
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
	// blt cr6,0x822dc988
	if (cr6.lt) goto loc_822DC988;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x822dc588
	sub_822DC588(ctx, base);
	// b 0x822dc99c
	goto loc_822DC99C;
loc_822DC988:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x822dc730
	sub_822DC730(ctx, base);
loc_822DC99C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DC9AC"))) PPC_WEAK_FUNC(sub_822DC9AC);
PPC_FUNC_IMPL(__imp__sub_822DC9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DC9B0"))) PPC_WEAK_FUNC(sub_822DC9B0);
PPC_FUNC_IMPL(__imp__sub_822DC9B0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x822c1b68
	sub_822C1B68(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x822dcaa0
	if (cr6.eq) goto loc_822DCAA0;
	// addi r31,r30,40
	r31.s64 = r30.s64 + 40;
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bgt cr6,0x822dca94
	if (cr6.gt) goto loc_822DCA94;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r8,24
	ctx.r8.s64 = 24;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,18972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// divw r11,r11,r8
	r11.s32 = r11.s32 / ctx.r8.s32;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r8,r10,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r10.s64;
	// divw r8,r8,r9
	ctx.r8.s32 = ctx.r8.s32 / ctx.r9.s32;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x822dca54
	if (!cr6.lt) goto loc_822DCA54;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8218b408
	sub_8218B408(ctx, base);
	// b 0x822dca94
	goto loc_822DCA94;
loc_822DCA54:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x822dc948
	sub_822DC948(ctx, base);
	// b 0x822dca94
	goto loc_822DCA94;
loc_822DCA70:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mulli r29,r4,12
	r29.s64 = ctx.r4.s64 * 12;
	// stw r4,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r4.u32);
	// bl 0x822c1b48
	sub_822C1B48(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stwx r11,r29,r28
	PPC_STORE_U32(r29.u32 + r28.u32, r11.u32);
loc_822DCA94:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// blt cr6,0x822dca70
	if (cr6.lt) goto loc_822DCA70;
loc_822DCAA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822DCAA8"))) PPC_WEAK_FUNC(sub_822DCAA8);
PPC_FUNC_IMPL(__imp__sub_822DCAA8) {
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
	// bl 0x822dc9b0
	sub_822DC9B0(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x822dcb00
	if (cr6.eq) goto loc_822DCB00;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_822DCB00:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_822DCB2C"))) PPC_WEAK_FUNC(sub_822DCB2C);
PPC_FUNC_IMPL(__imp__sub_822DCB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DCB30"))) PPC_WEAK_FUNC(sub_822DCB30);
PPC_FUNC_IMPL(__imp__sub_822DCB30) {
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
	// bl 0x822dc9b0
	sub_822DC9B0(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x822dcb6c
	if (cr6.eq) goto loc_822DCB6C;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_822DCB6C:
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

__attribute__((alias("__imp__sub_822DCB80"))) PPC_WEAK_FUNC(sub_822DCB80);
PPC_FUNC_IMPL(__imp__sub_822DCB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DCB98"))) PPC_WEAK_FUNC(sub_822DCB98);
PPC_FUNC_IMPL(__imp__sub_822DCB98) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,-9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822dcc00
	if (!cr0.gt) goto loc_822DCC00;
	// lis r28,-32127
	r28.s64 = -2105475072;
loc_822DCBC8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,-9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// bl 0x822b5728
	sub_822B5728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,-9288(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9288);
	// bl 0x822bb7c8
	sub_822BB7C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x822dcbc8
	if (cr6.lt) goto loc_822DCBC8;
loc_822DCC00:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r11,r29
	r11.s64 = r29.s32;
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822DCC64"))) PPC_WEAK_FUNC(sub_822DCC64);
PPC_FUNC_IMPL(__imp__sub_822DCC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DCC68"))) PPC_WEAK_FUNC(sub_822DCC68);
PPC_FUNC_IMPL(__imp__sub_822DCC68) {
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
	// lwz r31,12(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d66b0
	sub_822D66B0(ctx, base);
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

__attribute__((alias("__imp__sub_822DCC9C"))) PPC_WEAK_FUNC(sub_822DCC9C);
PPC_FUNC_IMPL(__imp__sub_822DCC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DCCA0"))) PPC_WEAK_FUNC(sub_822DCCA0);
PPC_FUNC_IMPL(__imp__sub_822DCCA0) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
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
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mullw r3,r3,r30
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(r30.s32);
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

__attribute__((alias("__imp__sub_822DCCFC"))) PPC_WEAK_FUNC(sub_822DCCFC);
PPC_FUNC_IMPL(__imp__sub_822DCCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DCD00"))) PPC_WEAK_FUNC(sub_822DCD00);
PPC_FUNC_IMPL(__imp__sub_822DCD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DCD08"))) PPC_WEAK_FUNC(sub_822DCD08);
PPC_FUNC_IMPL(__imp__sub_822DCD08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// b 0x822de530
	sub_822DE530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822DCD10"))) PPC_WEAK_FUNC(sub_822DCD10);
PPC_FUNC_IMPL(__imp__sub_822DCD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
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
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,5
	r11.s64 = 5;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822DCD7C:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bdnz 0x822dcd7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_822DCD7C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822DCD98"))) PPC_WEAK_FUNC(sub_822DCD98);
PPC_FUNC_IMPL(__imp__sub_822DCD98) {
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
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x822de4f0
	sub_822DE4F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dcdcc
	if (cr0.eq) goto loc_822DCDCC;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b37f8
	sub_822B37F8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x822dcdd0
	if (cr0.eq) goto loc_822DCDD0;
loc_822DCDCC:
	// li r11,0
	r11.s64 = 0;
loc_822DCDD0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DCDE4"))) PPC_WEAK_FUNC(sub_822DCDE4);
PPC_FUNC_IMPL(__imp__sub_822DCDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DCDE8"))) PPC_WEAK_FUNC(sub_822DCDE8);
PPC_FUNC_IMPL(__imp__sub_822DCDE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DCDF0"))) PPC_WEAK_FUNC(sub_822DCDF0);
PPC_FUNC_IMPL(__imp__sub_822DCDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x822ce5d8
	sub_822CE5D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DCE20"))) PPC_WEAK_FUNC(sub_822DCE20);
PPC_FUNC_IMPL(__imp__sub_822DCE20) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822d64b0
	sub_822D64B0(ctx, base);
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

__attribute__((alias("__imp__sub_822DCE80"))) PPC_WEAK_FUNC(sub_822DCE80);
PPC_FUNC_IMPL(__imp__sub_822DCE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x822dced4
	if (!cr6.eq) goto loc_822DCED4;
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,23440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 23440);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x822dced8
	if (cr6.gt) goto loc_822DCED8;
loc_822DCED4:
	// li r11,0
	r11.s64 = 0;
loc_822DCED8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_822DCEF0"))) PPC_WEAK_FUNC(sub_822DCEF0);
PPC_FUNC_IMPL(__imp__sub_822DCEF0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822dce80
	sub_822DCE80(ctx, base);
	// lbz r11,120(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 120);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822dcf2c
	if (!cr0.eq) goto loc_822DCF2C;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822dcf2c
	if (cr0.eq) goto loc_822DCF2C;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822dcf40
	goto loc_822DCF40;
loc_822DCF2C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822dcf54
	if (cr6.eq) goto loc_822DCF54;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822dcf54
	if (!cr0.eq) goto loc_822DCF54;
	// li r4,0
	ctx.r4.s64 = 0;
loc_822DCF40:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822DCF54:
	// stb r30,120(r31)
	PPC_STORE_U8(r31.u32 + 120, r30.u8);
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

__attribute__((alias("__imp__sub_822DCF70"))) PPC_WEAK_FUNC(sub_822DCF70);
PPC_FUNC_IMPL(__imp__sub_822DCF70) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311988
	sub_82311988(ctx, base);
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	f0.f64 = double(temp.f32);
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 / ctx.f1.f64));
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

__attribute__((alias("__imp__sub_822DCFAC"))) PPC_WEAK_FUNC(sub_822DCFAC);
PPC_FUNC_IMPL(__imp__sub_822DCFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DCFB0"))) PPC_WEAK_FUNC(sub_822DCFB0);
PPC_FUNC_IMPL(__imp__sub_822DCFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// lfs f13,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
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
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
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

__attribute__((alias("__imp__sub_822DD018"))) PPC_WEAK_FUNC(sub_822DD018);
PPC_FUNC_IMPL(__imp__sub_822DD018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_822DD028"))) PPC_WEAK_FUNC(sub_822DD028);
PPC_FUNC_IMPL(__imp__sub_822DD028) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x822dc518
	sub_822DC518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822DD030"))) PPC_WEAK_FUNC(sub_822DD030);
PPC_FUNC_IMPL(__imp__sub_822DD030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,112(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822dd0ec
	if (!cr0.eq) goto loc_822DD0EC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dd0ec
	if (cr0.eq) goto loc_822DD0EC;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x822dd0d4
	if (!cr6.gt) goto loc_822DD0D4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2816
	ctx.r4.s64 = r11.s64 + 2816;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-9608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x822dd0b8
	if (cr0.eq) goto loc_822DD0B8;
	// bl 0x822ce400
	sub_822CE400(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x822dd0c8
	goto loc_822DD0C8;
loc_822DD0B8:
	// bl 0x822ce3a8
	sub_822CE3A8(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_822DD0C8:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
loc_822DD0D4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-8684(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// bl 0x822cb5b8
	sub_822CB5B8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,112(r31)
	PPC_STORE_U8(r31.u32 + 112, r11.u8);
loc_822DD0EC:
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

__attribute__((alias("__imp__sub_822DD104"))) PPC_WEAK_FUNC(sub_822DD104);
PPC_FUNC_IMPL(__imp__sub_822DD104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DD108"))) PPC_WEAK_FUNC(sub_822DD108);
PPC_FUNC_IMPL(__imp__sub_822DD108) {
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
	// lbz r11,112(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822dd160
	if (!cr0.eq) goto loc_822DD160;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dd160
	if (cr0.eq) goto loc_822DD160;
	// li r11,0
	r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,68(r31)
	PPC_STORE_U8(r31.u32 + 68, r11.u8);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-8684(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// bl 0x822cb5b8
	sub_822CB5B8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,112(r31)
	PPC_STORE_U8(r31.u32 + 112, r11.u8);
loc_822DD160:
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

__attribute__((alias("__imp__sub_822DD174"))) PPC_WEAK_FUNC(sub_822DD174);
PPC_FUNC_IMPL(__imp__sub_822DD174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DD178"))) PPC_WEAK_FUNC(sub_822DD178);
PPC_FUNC_IMPL(__imp__sub_822DD178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DD1B8"))) PPC_WEAK_FUNC(sub_822DD1B8);
PPC_FUNC_IMPL(__imp__sub_822DD1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DD1F8"))) PPC_WEAK_FUNC(sub_822DD1F8);
PPC_FUNC_IMPL(__imp__sub_822DD1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DD238"))) PPC_WEAK_FUNC(sub_822DD238);
PPC_FUNC_IMPL(__imp__sub_822DD238) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x82391830
	sub_82391830(ctx, base);
	// lfs f13,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fdivs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x822dd280
	if (cr6.lt) goto loc_822DD280;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_822DD280:
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_822DD298"))) PPC_WEAK_FUNC(sub_822DD298);
PPC_FUNC_IMPL(__imp__sub_822DD298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x82391830
	sub_82391830(ctx, base);
	// fcmpu cr6,f30,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, ctx.f1.f64);
	// ble cr6,0x822dd2dc
	if (!cr6.gt) goto loc_822DD2DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dd030
	sub_822DD030(ctx, base);
loc_822DD2DC:
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-5056
	r11.s64 = r11.s64 + -5056;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// bl 0x82311998
	sub_82311998(ctx, base);
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	f0.f64 = double(temp.f32);
	// lbz r11,128(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 128);
	// fmadds f0,f1,f31,f0
	f0.f64 = double(float(ctx.f1.f64 * f31.f64 + f0.f64));
	// stfs f30,104(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822dd3c0
	if (!cr0.eq) goto loc_822DD3C0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822dd360
	if (!cr0.eq) goto loc_822DD360;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x822dd3c0
	if (!cr6.eq) goto loc_822DD3C0;
loc_822DD360:
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
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x822dd3c0
	if (!cr6.eq) goto loc_822DD3C0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-29784
	ctx.r4.s64 = r11.s64 + -29784;
	// stb r10,128(r31)
	PPC_STORE_U8(r31.u32 + 128, ctx.r10.u8);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,24412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24412);
	// bl 0x8229df30
	sub_8229DF30(ctx, base);
loc_822DD3C0:
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

__attribute__((alias("__imp__sub_822DD3E0"))) PPC_WEAK_FUNC(sub_822DD3E0);
PPC_FUNC_IMPL(__imp__sub_822DD3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// lbz r11,68(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 68);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822dd4a4
	if (cr0.eq) goto loc_822DD4A4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822dd4a4
	if (!cr0.eq) goto loc_822DD4A4;
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// ble cr6,0x822dd450
	if (!cr6.gt) goto loc_822DD450;
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
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * f31.f64));
loc_822DD450:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// bl 0x822dd238
	sub_822DD238(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x822de570
	sub_822DE570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dcef0
	sub_822DCEF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822de510
	sub_822DE510(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dd4a4
	if (cr0.eq) goto loc_822DD4A4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b37f8
	sub_822B37F8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822dd4a4
	if (!cr0.eq) goto loc_822DD4A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dd108
	sub_822DD108(ctx, base);
loc_822DD4A4:
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

__attribute__((alias("__imp__sub_822DD4C4"))) PPC_WEAK_FUNC(sub_822DD4C4);
PPC_FUNC_IMPL(__imp__sub_822DD4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DD4C8"))) PPC_WEAK_FUNC(sub_822DD4C8);
PPC_FUNC_IMPL(__imp__sub_822DD4C8) {
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
	// lwz r16,-29472(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -29472);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7876
	r29.s64 = ctx.r10.s64 + -7876;
	// bne 0x822dd538
	if (!cr0.eq) goto loc_822DD538;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,13576
	ctx.r4.s64 = r11.s64 + 13576;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD538:
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
	// beq 0x822dd574
	if (cr0.eq) goto loc_822DD574;
	// addi r3,r27,-136
	ctx.r3.s64 = r27.s64 + -136;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822DD560:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822DD564:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822ddb54
	goto loc_822DDB54;
loc_822DD574:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7880
	r29.s64 = ctx.r10.s64 + -7880;
	// bne 0x822dd5a0
	if (!cr0.eq) goto loc_822DD5A0;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20656
	ctx.r4.s64 = r11.s64 + 20656;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD5A0:
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
	// beq 0x822dd5c4
	if (cr0.eq) goto loc_822DD5C4;
	// addi r3,r27,-136
	ctx.r3.s64 = r27.s64 + -136;
	// bl 0x822dcb98
	sub_822DCB98(ctx, base);
	// b 0x822dd564
	goto loc_822DD564;
loc_822DD5C4:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7884
	r29.s64 = ctx.r10.s64 + -7884;
	// bne 0x822dd5f0
	if (!cr0.eq) goto loc_822DD5F0;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29632
	ctx.r4.s64 = r11.s64 + -29632;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD5F0:
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
	// beq 0x822dd62c
	if (cr0.eq) goto loc_822DD62C;
	// addi r3,r27,-136
	ctx.r3.s64 = r27.s64 + -136;
	// bl 0x822dd238
	sub_822DD238(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// lfs f0,17320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17320);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r28
	PPC_STORE_U32(r28.u32, f0.u32);
	// b 0x822ddb54
	goto loc_822DDB54;
loc_822DD62C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7888
	r29.s64 = ctx.r10.s64 + -7888;
	// bne 0x822dd658
	if (!cr0.eq) goto loc_822DD658;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29648
	ctx.r4.s64 = r11.s64 + -29648;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD658:
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
	// beq 0x822dd684
	if (cr0.eq) goto loc_822DD684;
	// lwz r11,-124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -124);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822ddb58
	goto loc_822DDB58;
loc_822DD684:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7892
	r29.s64 = ctx.r10.s64 + -7892;
	// bne 0x822dd6b0
	if (!cr0.eq) goto loc_822DD6B0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29664
	ctx.r4.s64 = r11.s64 + -29664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD6B0:
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
	// beq 0x822dd6fc
	if (cr0.eq) goto loc_822DD6FC;
	// addi r11,r27,-128
	r11.s64 = r27.s64 + -128;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bge cr6,0x822dd6e8
	if (!cr6.lt) goto loc_822DD6E8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_822DD6E8:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822ddb58
	goto loc_822DDB58;
loc_822DD6FC:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7896
	r29.s64 = ctx.r10.s64 + -7896;
	// bne 0x822dd728
	if (!cr0.eq) goto loc_822DD728;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29680
	ctx.r4.s64 = r11.s64 + -29680;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD728:
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
	// beq 0x822dd754
	if (cr0.eq) goto loc_822DD754;
	// lwz r11,-116(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822ddb58
	goto loc_822DDB58;
loc_822DD754:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7900
	r29.s64 = ctx.r10.s64 + -7900;
	// bne 0x822dd780
	if (!cr0.eq) goto loc_822DD780;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29696
	ctx.r4.s64 = r11.s64 + -29696;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD780:
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
	// beq 0x822dd7ac
	if (cr0.eq) goto loc_822DD7AC;
	// addi r3,r27,-136
	ctx.r3.s64 = r27.s64 + -136;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822dd560
	goto loc_822DD560;
loc_822DD7AC:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7904
	r29.s64 = ctx.r10.s64 + -7904;
	// bne 0x822dd7d8
	if (!cr0.eq) goto loc_822DD7D8;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6348
	ctx.r4.s64 = r11.s64 + 6348;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD7D8:
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
	// beq 0x822dd814
	if (cr0.eq) goto loc_822DD814;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r27,-136
	ctx.r3.s64 = r27.s64 + -136;
	// bl 0x822dd030
	sub_822DD030(ctx, base);
loc_822DD80C:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x822ddb50
	goto loc_822DDB50;
loc_822DD814:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7908
	r29.s64 = ctx.r10.s64 + -7908;
	// bne 0x822dd840
	if (!cr0.eq) goto loc_822DD840;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6220
	ctx.r4.s64 = r11.s64 + 6220;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD840:
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
	// beq 0x822dd864
	if (cr0.eq) goto loc_822DD864;
	// addi r3,r27,-136
	ctx.r3.s64 = r27.s64 + -136;
	// bl 0x822dd108
	sub_822DD108(ctx, base);
	// b 0x822dd80c
	goto loc_822DD80C;
loc_822DD864:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7912
	r29.s64 = ctx.r10.s64 + -7912;
	// bne 0x822dd890
	if (!cr0.eq) goto loc_822DD890;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,22648
	ctx.r4.s64 = r11.s64 + 22648;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD890:
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
	// beq 0x822dd8bc
	if (cr0.eq) goto loc_822DD8BC;
	// lbz r11,-68(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + -68);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822ddb58
	goto loc_822DDB58;
loc_822DD8BC:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7916
	r29.s64 = ctx.r10.s64 + -7916;
	// bne 0x822dd8e8
	if (!cr0.eq) goto loc_822DD8E8;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29712
	ctx.r4.s64 = r11.s64 + -29712;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD8E8:
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
	// beq 0x822dd918
	if (cr0.eq) goto loc_822DD918;
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-60(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + -60);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// b 0x822ddb58
	goto loc_822DDB58;
loc_822DD918:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7920
	r29.s64 = ctx.r10.s64 + -7920;
	// bne 0x822dd944
	if (!cr0.eq) goto loc_822DD944;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29732
	ctx.r4.s64 = r11.s64 + -29732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD944:
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
	// beq 0x822dd974
	if (cr0.eq) goto loc_822DD974;
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-64(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + -64);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// b 0x822ddb58
	goto loc_822DDB58;
loc_822DD974:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7924
	r29.s64 = ctx.r10.s64 + -7924;
	// bne 0x822dd9a0
	if (!cr0.eq) goto loc_822DD9A0;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29756
	ctx.r4.s64 = r11.s64 + -29756;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD9A0:
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
	// beq 0x822dd9dc
	if (cr0.eq) goto loc_822DD9DC;
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
	// stb r11,-68(r27)
	PPC_STORE_U8(r27.u32 + -68, r11.u8);
	// b 0x822dd80c
	goto loc_822DD80C;
loc_822DD9DC:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7928
	r29.s64 = ctx.r10.s64 + -7928;
	// bne 0x822dda08
	if (!cr0.eq) goto loc_822DDA08;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29776
	ctx.r4.s64 = r11.s64 + -29776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DDA08:
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
	// beq 0x822dda3c
	if (cr0.eq) goto loc_822DDA3C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r27,-72
	ctx.r3.s64 = r27.s64 + -72;
	// bl 0x822de530
	sub_822DE530(ctx, base);
	// b 0x822dd80c
	goto loc_822DD80C;
loc_822DDA3C:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7932
	r29.s64 = ctx.r10.s64 + -7932;
	// bne 0x822dda68
	if (!cr0.eq) goto loc_822DDA68;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25260
	ctx.r4.s64 = r11.s64 + 25260;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DDA68:
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
	// beq 0x822dda94
	if (cr0.eq) goto loc_822DDA94;
	// addi r3,r27,-136
	ctx.r3.s64 = r27.s64 + -136;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822dd560
	goto loc_822DD560;
loc_822DDA94:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7936
	r29.s64 = ctx.r10.s64 + -7936;
	// bne 0x822ddabc
	if (!cr0.eq) goto loc_822DDABC;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25248
	ctx.r4.s64 = r11.s64 + 25248;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822DDABC:
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
	// beq 0x822ddaf8
	if (cr0.eq) goto loc_822DDAF8;
	// addi r4,r27,-136
	ctx.r4.s64 = r27.s64 + -136;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822dce20
	sub_822DCE20(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822ddb54
	goto loc_822DDB54;
loc_822DDAF8:
	// lwz r11,-132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -132);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,-132
	ctx.r4.s64 = r11.s64 + -132;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822ddb48
	if (cr6.eq) goto loc_822DDB48;
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
	// beq 0x822ddb54
	if (cr0.eq) goto loc_822DDB54;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822ddb54
	goto loc_822DDB54;
loc_822DDB48:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822DDB50:
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
loc_822DDB54:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822DDB58:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822DD4D0"))) PPC_WEAK_FUNC(sub_822DD4D0);
PPC_FUNC_IMPL(__imp__sub_822DD4D0) {
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
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7876
	r29.s64 = ctx.r10.s64 + -7876;
	// bne 0x822dd538
	if (!cr0.eq) goto loc_822DD538;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,13576
	ctx.r4.s64 = r11.s64 + 13576;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD538:
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
	// beq 0x822dd574
	if (cr0.eq) goto loc_822DD574;
	// addi r3,r27,-136
	ctx.r3.s64 = r27.s64 + -136;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822DD560:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822DD564:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822ddb54
	goto loc_822DDB54;
loc_822DD574:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7880
	r29.s64 = ctx.r10.s64 + -7880;
	// bne 0x822dd5a0
	if (!cr0.eq) goto loc_822DD5A0;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20656
	ctx.r4.s64 = r11.s64 + 20656;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD5A0:
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
	// beq 0x822dd5c4
	if (cr0.eq) goto loc_822DD5C4;
	// addi r3,r27,-136
	ctx.r3.s64 = r27.s64 + -136;
	// bl 0x822dcb98
	sub_822DCB98(ctx, base);
	// b 0x822dd564
	goto loc_822DD564;
loc_822DD5C4:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7884
	r29.s64 = ctx.r10.s64 + -7884;
	// bne 0x822dd5f0
	if (!cr0.eq) goto loc_822DD5F0;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29632
	ctx.r4.s64 = r11.s64 + -29632;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD5F0:
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
	// beq 0x822dd62c
	if (cr0.eq) goto loc_822DD62C;
	// addi r3,r27,-136
	ctx.r3.s64 = r27.s64 + -136;
	// bl 0x822dd238
	sub_822DD238(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// lfs f0,17320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17320);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r28
	PPC_STORE_U32(r28.u32, f0.u32);
	// b 0x822ddb54
	goto loc_822DDB54;
loc_822DD62C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7888
	r29.s64 = ctx.r10.s64 + -7888;
	// bne 0x822dd658
	if (!cr0.eq) goto loc_822DD658;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29648
	ctx.r4.s64 = r11.s64 + -29648;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD658:
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
	// beq 0x822dd684
	if (cr0.eq) goto loc_822DD684;
	// lwz r11,-124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -124);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822ddb58
	goto loc_822DDB58;
loc_822DD684:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7892
	r29.s64 = ctx.r10.s64 + -7892;
	// bne 0x822dd6b0
	if (!cr0.eq) goto loc_822DD6B0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29664
	ctx.r4.s64 = r11.s64 + -29664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD6B0:
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
	// beq 0x822dd6fc
	if (cr0.eq) goto loc_822DD6FC;
	// addi r11,r27,-128
	r11.s64 = r27.s64 + -128;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bge cr6,0x822dd6e8
	if (!cr6.lt) goto loc_822DD6E8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_822DD6E8:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822ddb58
	goto loc_822DDB58;
loc_822DD6FC:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7896
	r29.s64 = ctx.r10.s64 + -7896;
	// bne 0x822dd728
	if (!cr0.eq) goto loc_822DD728;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29680
	ctx.r4.s64 = r11.s64 + -29680;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD728:
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
	// beq 0x822dd754
	if (cr0.eq) goto loc_822DD754;
	// lwz r11,-116(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -116);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822ddb58
	goto loc_822DDB58;
loc_822DD754:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7900
	r29.s64 = ctx.r10.s64 + -7900;
	// bne 0x822dd780
	if (!cr0.eq) goto loc_822DD780;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29696
	ctx.r4.s64 = r11.s64 + -29696;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD780:
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
	// beq 0x822dd7ac
	if (cr0.eq) goto loc_822DD7AC;
	// addi r3,r27,-136
	ctx.r3.s64 = r27.s64 + -136;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822dd560
	goto loc_822DD560;
loc_822DD7AC:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7904
	r29.s64 = ctx.r10.s64 + -7904;
	// bne 0x822dd7d8
	if (!cr0.eq) goto loc_822DD7D8;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6348
	ctx.r4.s64 = r11.s64 + 6348;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD7D8:
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
	// beq 0x822dd814
	if (cr0.eq) goto loc_822DD814;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r27,-136
	ctx.r3.s64 = r27.s64 + -136;
	// bl 0x822dd030
	sub_822DD030(ctx, base);
loc_822DD80C:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x822ddb50
	goto loc_822DDB50;
loc_822DD814:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7908
	r29.s64 = ctx.r10.s64 + -7908;
	// bne 0x822dd840
	if (!cr0.eq) goto loc_822DD840;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6220
	ctx.r4.s64 = r11.s64 + 6220;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD840:
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
	// beq 0x822dd864
	if (cr0.eq) goto loc_822DD864;
	// addi r3,r27,-136
	ctx.r3.s64 = r27.s64 + -136;
	// bl 0x822dd108
	sub_822DD108(ctx, base);
	// b 0x822dd80c
	goto loc_822DD80C;
loc_822DD864:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7912
	r29.s64 = ctx.r10.s64 + -7912;
	// bne 0x822dd890
	if (!cr0.eq) goto loc_822DD890;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,22648
	ctx.r4.s64 = r11.s64 + 22648;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD890:
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
	// beq 0x822dd8bc
	if (cr0.eq) goto loc_822DD8BC;
	// lbz r11,-68(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + -68);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822ddb58
	goto loc_822DDB58;
loc_822DD8BC:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7916
	r29.s64 = ctx.r10.s64 + -7916;
	// bne 0x822dd8e8
	if (!cr0.eq) goto loc_822DD8E8;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29712
	ctx.r4.s64 = r11.s64 + -29712;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD8E8:
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
	// beq 0x822dd918
	if (cr0.eq) goto loc_822DD918;
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-60(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + -60);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// b 0x822ddb58
	goto loc_822DDB58;
loc_822DD918:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7920
	r29.s64 = ctx.r10.s64 + -7920;
	// bne 0x822dd944
	if (!cr0.eq) goto loc_822DD944;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29732
	ctx.r4.s64 = r11.s64 + -29732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD944:
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
	// beq 0x822dd974
	if (cr0.eq) goto loc_822DD974;
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-64(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + -64);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// b 0x822ddb58
	goto loc_822DDB58;
loc_822DD974:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7924
	r29.s64 = ctx.r10.s64 + -7924;
	// bne 0x822dd9a0
	if (!cr0.eq) goto loc_822DD9A0;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29756
	ctx.r4.s64 = r11.s64 + -29756;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DD9A0:
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
	// beq 0x822dd9dc
	if (cr0.eq) goto loc_822DD9DC;
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
	// stb r11,-68(r27)
	PPC_STORE_U8(r27.u32 + -68, r11.u8);
	// b 0x822dd80c
	goto loc_822DD80C;
loc_822DD9DC:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7928
	r29.s64 = ctx.r10.s64 + -7928;
	// bne 0x822dda08
	if (!cr0.eq) goto loc_822DDA08;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-29776
	ctx.r4.s64 = r11.s64 + -29776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DDA08:
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
	// beq 0x822dda3c
	if (cr0.eq) goto loc_822DDA3C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r27,-72
	ctx.r3.s64 = r27.s64 + -72;
	// bl 0x822de530
	sub_822DE530(ctx, base);
	// b 0x822dd80c
	goto loc_822DD80C;
loc_822DDA3C:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7932
	r29.s64 = ctx.r10.s64 + -7932;
	// bne 0x822dda68
	if (!cr0.eq) goto loc_822DDA68;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25260
	ctx.r4.s64 = r11.s64 + 25260;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7872);
loc_822DDA68:
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
	// beq 0x822dda94
	if (cr0.eq) goto loc_822DDA94;
	// addi r3,r27,-136
	ctx.r3.s64 = r27.s64 + -136;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822dd560
	goto loc_822DD560;
loc_822DDA94:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7936
	r29.s64 = ctx.r10.s64 + -7936;
	// bne 0x822ddabc
	if (!cr0.eq) goto loc_822DDABC;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,-7872(r30)
	PPC_STORE_U32(r30.u32 + -7872, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25248
	ctx.r4.s64 = r11.s64 + 25248;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822DDABC:
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
	// beq 0x822ddaf8
	if (cr0.eq) goto loc_822DDAF8;
	// addi r4,r27,-136
	ctx.r4.s64 = r27.s64 + -136;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822dce20
	sub_822DCE20(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822ddb54
	goto loc_822DDB54;
loc_822DDAF8:
	// lwz r11,-132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -132);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,-132
	ctx.r4.s64 = r11.s64 + -132;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822ddb48
	if (cr6.eq) goto loc_822DDB48;
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
	// beq 0x822ddb54
	if (cr0.eq) goto loc_822DDB54;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822ddb54
	goto loc_822DDB54;
loc_822DDB48:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822DDB50:
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
loc_822DDB54:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822DDB58:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822DDB60"))) PPC_WEAK_FUNC(sub_822DDB60);
PPC_FUNC_IMPL(__imp__sub_822DDB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7872
	r11.s64 = r11.s64 + -7872;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDB88"))) PPC_WEAK_FUNC(sub_822DDB88);
PPC_FUNC_IMPL(__imp__sub_822DDB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7872
	r11.s64 = r11.s64 + -7872;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDBB0"))) PPC_WEAK_FUNC(sub_822DDBB0);
PPC_FUNC_IMPL(__imp__sub_822DDBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7872
	r11.s64 = r11.s64 + -7872;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDBD8"))) PPC_WEAK_FUNC(sub_822DDBD8);
PPC_FUNC_IMPL(__imp__sub_822DDBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7872
	r11.s64 = r11.s64 + -7872;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDC00"))) PPC_WEAK_FUNC(sub_822DDC00);
PPC_FUNC_IMPL(__imp__sub_822DDC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7872
	r11.s64 = r11.s64 + -7872;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDC28"))) PPC_WEAK_FUNC(sub_822DDC28);
PPC_FUNC_IMPL(__imp__sub_822DDC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7872
	r11.s64 = r11.s64 + -7872;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDC50"))) PPC_WEAK_FUNC(sub_822DDC50);
PPC_FUNC_IMPL(__imp__sub_822DDC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7872
	r11.s64 = r11.s64 + -7872;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDC78"))) PPC_WEAK_FUNC(sub_822DDC78);
PPC_FUNC_IMPL(__imp__sub_822DDC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7872
	r11.s64 = r11.s64 + -7872;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDCA0"))) PPC_WEAK_FUNC(sub_822DDCA0);
PPC_FUNC_IMPL(__imp__sub_822DDCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7872
	r11.s64 = r11.s64 + -7872;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDCC8"))) PPC_WEAK_FUNC(sub_822DDCC8);
PPC_FUNC_IMPL(__imp__sub_822DDCC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7872
	r11.s64 = r11.s64 + -7872;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDCF0"))) PPC_WEAK_FUNC(sub_822DDCF0);
PPC_FUNC_IMPL(__imp__sub_822DDCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7872
	r11.s64 = r11.s64 + -7872;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDD18"))) PPC_WEAK_FUNC(sub_822DDD18);
PPC_FUNC_IMPL(__imp__sub_822DDD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7872
	r11.s64 = r11.s64 + -7872;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDD40"))) PPC_WEAK_FUNC(sub_822DDD40);
PPC_FUNC_IMPL(__imp__sub_822DDD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7872
	r11.s64 = r11.s64 + -7872;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDD68"))) PPC_WEAK_FUNC(sub_822DDD68);
PPC_FUNC_IMPL(__imp__sub_822DDD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7872
	r11.s64 = r11.s64 + -7872;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDD90"))) PPC_WEAK_FUNC(sub_822DDD90);
PPC_FUNC_IMPL(__imp__sub_822DDD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7872
	r11.s64 = r11.s64 + -7872;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDDB8"))) PPC_WEAK_FUNC(sub_822DDDB8);
PPC_FUNC_IMPL(__imp__sub_822DDDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7872
	r11.s64 = r11.s64 + -7872;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,17,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDDE0"))) PPC_WEAK_FUNC(sub_822DDDE0);
PPC_FUNC_IMPL(__imp__sub_822DDDE0) {
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

__attribute__((alias("__imp__sub_822DDE08"))) PPC_WEAK_FUNC(sub_822DDE08);
PPC_FUNC_IMPL(__imp__sub_822DDE08) {
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
	// lwz r16,-29184(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -29184);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,-7852(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7852);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7860
	r28.s64 = ctx.r10.s64 + -7860;
	// bne 0x822dde74
	if (!cr0.eq) goto loc_822DDE74;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7852(r30)
	PPC_STORE_U32(r30.u32 + -7852, r11.u32);
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
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14896
	ctx.r3.s64 = r11.s64 + 14896;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// lwz r11,-7852(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7852);
loc_822DDE74:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7868
	r29.s64 = ctx.r10.s64 + -7868;
	// bne 0x822ddeb8
	if (!cr0.eq) goto loc_822DDEB8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7852(r30)
	PPC_STORE_U32(r30.u32 + -7852, r11.u32);
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
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14864
	ctx.r3.s64 = r11.s64 + 14864;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DDEB8:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ddec4
	if (cr0.eq) goto loc_822DDEC4;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_822DDEC4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ddf0c
	if (cr0.eq) goto loc_822DDF0C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DDF0C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822DDE10"))) PPC_WEAK_FUNC(sub_822DDE10);
PPC_FUNC_IMPL(__imp__sub_822DDE10) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,-7852(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7852);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7860
	r28.s64 = ctx.r10.s64 + -7860;
	// bne 0x822dde74
	if (!cr0.eq) goto loc_822DDE74;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7852(r30)
	PPC_STORE_U32(r30.u32 + -7852, r11.u32);
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
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14896
	ctx.r3.s64 = r11.s64 + 14896;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// lwz r11,-7852(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7852);
loc_822DDE74:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7868
	r29.s64 = ctx.r10.s64 + -7868;
	// bne 0x822ddeb8
	if (!cr0.eq) goto loc_822DDEB8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7852(r30)
	PPC_STORE_U32(r30.u32 + -7852, r11.u32);
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
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,14864
	ctx.r3.s64 = r11.s64 + 14864;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DDEB8:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ddec4
	if (cr0.eq) goto loc_822DDEC4;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_822DDEC4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822ddf0c
	if (cr0.eq) goto loc_822DDF0C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DDF0C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822DDF14"))) PPC_WEAK_FUNC(sub_822DDF14);
PPC_FUNC_IMPL(__imp__sub_822DDF14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7852
	r11.s64 = r11.s64 + -7852;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7852
	ctx.r10.s64 = ctx.r10.s64 + -7852;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDF3C"))) PPC_WEAK_FUNC(sub_822DDF3C);
PPC_FUNC_IMPL(__imp__sub_822DDF3C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7852
	r11.s64 = r11.s64 + -7852;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7852
	ctx.r10.s64 = ctx.r10.s64 + -7852;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DDF64"))) PPC_WEAK_FUNC(sub_822DDF64);
PPC_FUNC_IMPL(__imp__sub_822DDF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DDF68"))) PPC_WEAK_FUNC(sub_822DDF68);
PPC_FUNC_IMPL(__imp__sub_822DDF68) {
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
	// lwz r16,-29088(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -29088);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x822dcaa8
	sub_822DCAA8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, r28.s32, xer);
	// ble cr6,0x822de058
	if (!cr6.gt) goto loc_822DE058;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-7840(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7840);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7848
	r30.s64 = ctx.r9.s64 + -7848;
	// bne 0x822de010
	if (!cr0.eq) goto loc_822DE010;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7840, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-29112
	ctx.r4.s64 = r11.s64 + -29112;
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
	// addi r3,r11,14928
	ctx.r3.s64 = r11.s64 + 14928;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DE010:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822de058
	if (cr0.eq) goto loc_822DE058;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DE058:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822de088
	if (!cr0.eq) goto loc_822DE088;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x822de0c4
	if (!cr6.eq) goto loc_822DE0C4;
loc_822DE088:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,124(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x822de0c4
	if (!cr6.eq) goto loc_822DE0C4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,124(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// lwz r3,24412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24412);
	// bl 0x8229dd60
	sub_8229DD60(ctx, base);
	// stw r3,124(r29)
	PPC_STORE_U32(r29.u32 + 124, ctx.r3.u32);
loc_822DE0C4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822DDF70"))) PPC_WEAK_FUNC(sub_822DDF70);
PPC_FUNC_IMPL(__imp__sub_822DDF70) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x822dcaa8
	sub_822DCAA8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, r28.s32, xer);
	// ble cr6,0x822de058
	if (!cr6.gt) goto loc_822DE058;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-7840(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7840);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7848
	r30.s64 = ctx.r9.s64 + -7848;
	// bne 0x822de010
	if (!cr0.eq) goto loc_822DE010;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7840, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-29112
	ctx.r4.s64 = r11.s64 + -29112;
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
	// addi r3,r11,14928
	ctx.r3.s64 = r11.s64 + 14928;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822DE010:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822de058
	if (cr0.eq) goto loc_822DE058;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DE058:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822de088
	if (!cr0.eq) goto loc_822DE088;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x822de0c4
	if (!cr6.eq) goto loc_822DE0C4;
loc_822DE088:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,124(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x822de0c4
	if (!cr6.eq) goto loc_822DE0C4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,124(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// lwz r3,24412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24412);
	// bl 0x8229dd60
	sub_8229DD60(ctx, base);
	// stw r3,124(r29)
	PPC_STORE_U32(r29.u32 + 124, ctx.r3.u32);
loc_822DE0C4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822DE0CC"))) PPC_WEAK_FUNC(sub_822DE0CC);
PPC_FUNC_IMPL(__imp__sub_822DE0CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7840
	r11.s64 = r11.s64 + -7840;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7840
	ctx.r10.s64 = ctx.r10.s64 + -7840;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DE0F4"))) PPC_WEAK_FUNC(sub_822DE0F4);
PPC_FUNC_IMPL(__imp__sub_822DE0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DE0F8"))) PPC_WEAK_FUNC(sub_822DE0F8);
PPC_FUNC_IMPL(__imp__sub_822DE0F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// b 0x82686ff8
	sub_82686FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822DE100"))) PPC_WEAK_FUNC(sub_822DE100);
PPC_FUNC_IMPL(__imp__sub_822DE100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,-28956
	ctx.r10.s64 = ctx.r10.s64 + -28956;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r3,r11,-88
	ctx.r3.s64 = r11.s64 + -88;
	// addi r9,r9,-29020
	ctx.r9.s64 = ctx.r9.s64 + -29020;
	// stw r10,-136(r11)
	PPC_STORE_U32(r11.u32 + -136, ctx.r10.u32);
	// lwz r10,-132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -132);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,-132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -132, ctx.r9.u32);
	// lwz r10,-132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -132);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-132
	ctx.r9.s64 = ctx.r10.s64 + -132;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,-136(r11)
	PPC_STORE_U32(r11.u32 + -136, ctx.r9.u32);
	// b 0x82686ff8
	sub_82686FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822DE144"))) PPC_WEAK_FUNC(sub_822DE144);
PPC_FUNC_IMPL(__imp__sub_822DE144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DE148"))) PPC_WEAK_FUNC(sub_822DE148);
PPC_FUNC_IMPL(__imp__sub_822DE148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822de2a8
	sub_822DE2A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822DE154"))) PPC_WEAK_FUNC(sub_822DE154);
PPC_FUNC_IMPL(__imp__sub_822DE154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DE158"))) PPC_WEAK_FUNC(sub_822DE158);
PPC_FUNC_IMPL(__imp__sub_822DE158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x822dd4d0
	sub_822DD4D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822DE164"))) PPC_WEAK_FUNC(sub_822DE164);
PPC_FUNC_IMPL(__imp__sub_822DE164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DE168"))) PPC_WEAK_FUNC(sub_822DE168);
PPC_FUNC_IMPL(__imp__sub_822DE168) {
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
	// lwz r16,-28840(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28840);
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
	// beq cr6,0x822de1b4
	if (cr6.eq) goto loc_822DE1B4;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r30,136
	ctx.r3.s64 = r30.s64 + 136;
	// addi r11,r11,-28864
	r11.s64 = r11.s64 + -28864;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822DE1B4:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28956
	r11.s64 = r11.s64 + -28956;
	// addi r10,r10,-29020
	ctx.r10.s64 = ctx.r10.s64 + -29020;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
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
	// addi r10,r11,-132
	ctx.r10.s64 = r11.s64 + -132;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// bl 0x822dc8f0
	sub_822DC8F0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r29,112(r30)
	PPC_STORE_U8(r30.u32 + 112, r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,120(r30)
	PPC_STORE_U8(r30.u32 + 120, r29.u8);
	// stb r29,128(r30)
	PPC_STORE_U8(r30.u32 + 128, r29.u8);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// stfs f0,104(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 104, temp.u32);
	// stfs f0,108(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 108, temp.u32);
	// stfs f0,116(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 116, temp.u32);
	// lwz r3,24412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24412);
	// bl 0x8229dd60
	sub_8229DD60(ctx, base);
	// stw r3,124(r30)
	PPC_STORE_U32(r30.u32 + 124, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822DE170"))) PPC_WEAK_FUNC(sub_822DE170);
PPC_FUNC_IMPL(__imp__sub_822DE170) {
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
	// beq cr6,0x822de1b4
	if (cr6.eq) goto loc_822DE1B4;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r30,136
	ctx.r3.s64 = r30.s64 + 136;
	// addi r11,r11,-28864
	r11.s64 = r11.s64 + -28864;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822DE1B4:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28956
	r11.s64 = r11.s64 + -28956;
	// addi r10,r10,-29020
	ctx.r10.s64 = ctx.r10.s64 + -29020;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
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
	// addi r10,r11,-132
	ctx.r10.s64 = r11.s64 + -132;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// bl 0x822dc8f0
	sub_822DC8F0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r29,112(r30)
	PPC_STORE_U8(r30.u32 + 112, r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,120(r30)
	PPC_STORE_U8(r30.u32 + 120, r29.u8);
	// stb r29,128(r30)
	PPC_STORE_U8(r30.u32 + 128, r29.u8);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// stfs f0,104(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 104, temp.u32);
	// stfs f0,108(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 108, temp.u32);
	// stfs f0,116(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 116, temp.u32);
	// lwz r3,24412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24412);
	// bl 0x8229dd60
	sub_8229DD60(ctx, base);
	// stw r3,124(r30)
	PPC_STORE_U32(r30.u32 + 124, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822DE234"))) PPC_WEAK_FUNC(sub_822DE234);
PPC_FUNC_IMPL(__imp__sub_822DE234) {
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
	// beq 0x822de268
	if (cr0.eq) goto loc_822DE268;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,136
	ctx.r3.s64 = r11.s64 + 136;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_822DE268:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DE278"))) PPC_WEAK_FUNC(sub_822DE278);
PPC_FUNC_IMPL(__imp__sub_822DE278) {
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
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x822de0f8
	sub_822DE0F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DE2A4"))) PPC_WEAK_FUNC(sub_822DE2A4);
PPC_FUNC_IMPL(__imp__sub_822DE2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DE2A8"))) PPC_WEAK_FUNC(sub_822DE2A8);
PPC_FUNC_IMPL(__imp__sub_822DE2A8) {
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
	// addi r30,r3,-136
	r30.s64 = ctx.r3.s64 + -136;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,136
	r31.s64 = r30.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822de100
	sub_822DE100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822de2e0
	if (cr0.eq) goto loc_822DE2E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822DE2E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822DE2EC"))) PPC_WEAK_FUNC(sub_822DE2EC);
PPC_FUNC_IMPL(__imp__sub_822DE2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DE2F0"))) PPC_WEAK_FUNC(sub_822DE2F0);
PPC_FUNC_IMPL(__imp__sub_822DE2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DE30C"))) PPC_WEAK_FUNC(sub_822DE30C);
PPC_FUNC_IMPL(__imp__sub_822DE30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DE310"))) PPC_WEAK_FUNC(sub_822DE310);
PPC_FUNC_IMPL(__imp__sub_822DE310) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lhz r30,10(r5)
	r30.u64 = PPC_LOAD_U16(ctx.r5.u32 + 10);
	// bl 0x82334630
	sub_82334630(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d62b0
	sub_822D62B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mullw r11,r11,r29
	r11.s64 = int64_t(r11.s32) * int64_t(r29.s32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822DE364"))) PPC_WEAK_FUNC(sub_822DE364);
PPC_FUNC_IMPL(__imp__sub_822DE364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DE368"))) PPC_WEAK_FUNC(sub_822DE368);
PPC_FUNC_IMPL(__imp__sub_822DE368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DE384"))) PPC_WEAK_FUNC(sub_822DE384);
PPC_FUNC_IMPL(__imp__sub_822DE384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DE388"))) PPC_WEAK_FUNC(sub_822DE388);
PPC_FUNC_IMPL(__imp__sub_822DE388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
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
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
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

__attribute__((alias("__imp__sub_822DE3F4"))) PPC_WEAK_FUNC(sub_822DE3F4);
PPC_FUNC_IMPL(__imp__sub_822DE3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DE3F8"))) PPC_WEAK_FUNC(sub_822DE3F8);
PPC_FUNC_IMPL(__imp__sub_822DE3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// lwa r11,8(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 8));
	// lwa r10,12(r3)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 12));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f13,-8(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DE428"))) PPC_WEAK_FUNC(sub_822DE428);
PPC_FUNC_IMPL(__imp__sub_822DE428) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f0,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x822de454
	if (cr6.gt) goto loc_822DE454;
	// addi r10,r1,-8
	ctx.r10.s64 = ctx.r1.s64 + -8;
loc_822DE454:
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// extsw r11,r9
	r11.s64 = ctx.r9.s32;
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r1,-8
	r11.s64 = ctx.r1.s64 + -8;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x822de494
	if (cr6.gt) goto loc_822DE494;
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
loc_822DE494:
	// lwa r10,12(r3)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 12));
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r11.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// ble cr6,0x822de4d0
	if (!cr6.gt) goto loc_822DE4D0;
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// b 0x822de4d4
	goto loc_822DE4D4;
loc_822DE4D0:
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
loc_822DE4D4:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DE4F0"))) PPC_WEAK_FUNC(sub_822DE4F0);
PPC_FUNC_IMPL(__imp__sub_822DE4F0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x822de508
	if (cr6.lt) goto loc_822DE508;
	// li r11,0
	r11.s64 = 0;
loc_822DE508:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DE510"))) PPC_WEAK_FUNC(sub_822DE510);
PPC_FUNC_IMPL(__imp__sub_822DE510) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x822de528
	if (cr6.lt) goto loc_822DE528;
	// li r11,0
	r11.s64 = 0;
loc_822DE528:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DE530"))) PPC_WEAK_FUNC(sub_822DE530);
PPC_FUNC_IMPL(__imp__sub_822DE530) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x822de554
	if (cr6.gt) goto loc_822DE554;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x822de554
	if (cr6.lt) goto loc_822DE554;
	// fmr f0,f1
	f0.f64 = ctx.f1.f64;
loc_822DE554:
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DE570"))) PPC_WEAK_FUNC(sub_822DE570);
PPC_FUNC_IMPL(__imp__sub_822DE570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f0,f0,f2
	f0.f64 = double(float(f0.f64 * ctx.f2.f64));
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fsubs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + f0.f64));
	// lfs f13,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x822de5a8
	if (!cr6.lt) goto loc_822DE5A8;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x822de5b4
	goto loc_822DE5B4;
loc_822DE5A8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x822de5b4
	if (!cr6.gt) goto loc_822DE5B4;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_822DE5B4:
	// lfs f12,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x822de5e0
	if (!cr6.gt) goto loc_822DE5E0;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x822de5d4
	if (cr6.lt) goto loc_822DE5D4;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x822de5e0
	goto loc_822DE5E0;
loc_822DE5D4:
	// fsubs f11,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f0.f64 - ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
loc_822DE5E0:
	// lfs f12,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x822de5f4
	if (cr6.gt) goto loc_822DE5F4;
	// li r11,0
	r11.s64 = 0;
loc_822DE5F4:
	// lfs f11,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x822de608
	if (cr6.gt) goto loc_822DE608;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
loc_822DE608:
	// lfs f12,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f3,f12
	cr6.compare(ctx.f3.f64, ctx.f12.f64);
	// bgt cr6,0x822de61c
	if (cr6.gt) goto loc_822DE61C;
	// li r11,0
	r11.s64 = 0;
loc_822DE61C:
	// lfs f12,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x822de630
	if (cr6.gt) goto loc_822DE630;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
loc_822DE630:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DE63C"))) PPC_WEAK_FUNC(sub_822DE63C);
PPC_FUNC_IMPL(__imp__sub_822DE63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DE640"))) PPC_WEAK_FUNC(sub_822DE640);
PPC_FUNC_IMPL(__imp__sub_822DE640) {
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
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d6320
	sub_822D6320(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r30,r11,31076
	r30.s64 = r11.s64 + 31076;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// addi r4,r11,-28752
	ctx.r4.s64 = r11.s64 + -28752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// addi r4,r11,32492
	ctx.r4.s64 = r11.s64 + 32492;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// addi r4,r11,-28764
	ctx.r4.s64 = r11.s64 + -28764;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// addi r4,r11,-28776
	ctx.r4.s64 = r11.s64 + -28776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f1,36(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f13,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// fmadds f0,f12,f13,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
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

__attribute__((alias("__imp__sub_822DE800"))) PPC_WEAK_FUNC(sub_822DE800);
PPC_FUNC_IMPL(__imp__sub_822DE800) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// bge cr6,0x822de83c
	if (!cr6.lt) goto loc_822DE83C;
	// li r11,0
	r11.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x822de844
	goto loc_822DE844;
loc_822DE83C:
	// li r11,1
	r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_822DE844:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// bl 0x822de640
	sub_822DE640(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x822de864
	if (cr6.lt) goto loc_822DE864;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_822DE864:
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d6320
	sub_822D6320(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-28752
	ctx.r4.s64 = r11.s64 + -28752;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r29,r11,31076
	r29.s64 = r11.s64 + 31076;
	// fdivs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 / f0.f64));
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 * ctx.f13.f64));
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f1,f31
	f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// fmsubs f13,f1,f12,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 - ctx.f13.f64));
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / f0.f64));
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// stfs f0,0(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822DE968"))) PPC_WEAK_FUNC(sub_822DE968);
PPC_FUNC_IMPL(__imp__sub_822DE968) {
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
	// lwz r16,-28552(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28552);
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
	// li r11,0
	r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq cr6,0x822de9cc
	if (cr6.eq) goto loc_822DE9CC;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28568
	r11.s64 = r11.s64 + -28568;
	// addi r10,r10,-28576
	ctx.r10.s64 = ctx.r10.s64 + -28576;
	// addi r3,r30,296
	ctx.r3.s64 = r30.s64 + 296;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822DE9CC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9720
	sub_822C9720(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-28668
	r11.s64 = r11.s64 + -28668;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r10,r10,-28732
	ctx.r10.s64 = ctx.r10.s64 + -28732;
	// lfs f0,2552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	f0.f64 = double(temp.f32);
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
	// addi r10,r11,-292
	ctx.r10.s64 = r11.s64 + -292;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stfs f13,280(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 280, temp.u32);
	// stfs f0,284(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 284, temp.u32);
	// stw r27,276(r30)
	PPC_STORE_U32(r30.u32 + 276, r27.u32);
	// stfs f0,288(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 288, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822DE970"))) PPC_WEAK_FUNC(sub_822DE970);
PPC_FUNC_IMPL(__imp__sub_822DE970) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq cr6,0x822de9cc
	if (cr6.eq) goto loc_822DE9CC;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28568
	r11.s64 = r11.s64 + -28568;
	// addi r10,r10,-28576
	ctx.r10.s64 = ctx.r10.s64 + -28576;
	// addi r3,r30,296
	ctx.r3.s64 = r30.s64 + 296;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822DE9CC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9720
	sub_822C9720(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-28668
	r11.s64 = r11.s64 + -28668;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r10,r10,-28732
	ctx.r10.s64 = ctx.r10.s64 + -28732;
	// lfs f0,2552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	f0.f64 = double(temp.f32);
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
	// addi r10,r11,-292
	ctx.r10.s64 = r11.s64 + -292;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stfs f13,280(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 280, temp.u32);
	// stfs f0,284(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 284, temp.u32);
	// stw r27,276(r30)
	PPC_STORE_U32(r30.u32 + 276, r27.u32);
	// stfs f0,288(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 288, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822DEA40"))) PPC_WEAK_FUNC(sub_822DEA40);
PPC_FUNC_IMPL(__imp__sub_822DEA40) {
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
	// beq 0x822dea74
	if (cr0.eq) goto loc_822DEA74;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,296
	ctx.r3.s64 = r11.s64 + 296;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_822DEA74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DEA84"))) PPC_WEAK_FUNC(sub_822DEA84);
PPC_FUNC_IMPL(__imp__sub_822DEA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DEA88"))) PPC_WEAK_FUNC(sub_822DEA88);
PPC_FUNC_IMPL(__imp__sub_822DEA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,-28668
	ctx.r10.s64 = ctx.r10.s64 + -28668;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// addi r9,r9,-28732
	ctx.r9.s64 = ctx.r9.s64 + -28732;
	// stw r10,-296(r11)
	PPC_STORE_U32(r11.u32 + -296, ctx.r10.u32);
	// lwz r10,-292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -292);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,-292(r10)
	PPC_STORE_U32(ctx.r10.u32 + -292, ctx.r9.u32);
	// lwz r10,-292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -292);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-292
	ctx.r9.s64 = ctx.r10.s64 + -292;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,-296(r11)
	PPC_STORE_U32(r11.u32 + -296, ctx.r9.u32);
	// b 0x822c9098
	sub_822C9098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822DEACC"))) PPC_WEAK_FUNC(sub_822DEACC);
PPC_FUNC_IMPL(__imp__sub_822DEACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DEAD0"))) PPC_WEAK_FUNC(sub_822DEAD0);
PPC_FUNC_IMPL(__imp__sub_822DEAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x822c9260
	sub_822C9260(ctx, base);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
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

__attribute__((alias("__imp__sub_822DEB30"))) PPC_WEAK_FUNC(sub_822DEB30);
PPC_FUNC_IMPL(__imp__sub_822DEB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x822c6a58
	sub_822C6A58(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-9608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lbz r11,613(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 613);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822deb78
	if (cr0.eq) goto loc_822DEB78;
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
loc_822DEB78:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_822DEBA8"))) PPC_WEAK_FUNC(sub_822DEBA8);
PPC_FUNC_IMPL(__imp__sub_822DEBA8) {
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
	// bl 0x822ddf70
	sub_822DDF70(ctx, base);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
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

__attribute__((alias("__imp__sub_822DEBF8"))) PPC_WEAK_FUNC(sub_822DEBF8);
PPC_FUNC_IMPL(__imp__sub_822DEBF8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// ble cr6,0x822dec38
	if (!cr6.gt) goto loc_822DEC38;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_822DEC38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dd028
	sub_822DD028(ctx, base);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
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

__attribute__((alias("__imp__sub_822DEC68"))) PPC_WEAK_FUNC(sub_822DEC68);
PPC_FUNC_IMPL(__imp__sub_822DEC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f2,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822dd3e0
	sub_822DD3E0(ctx, base);
	// lfs f0,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 280);
	f0.f64 = double(temp.f32);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f2,288(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 288);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// fmadds f1,f13,f31,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_822DECD0"))) PPC_WEAK_FUNC(sub_822DECD0);
PPC_FUNC_IMPL(__imp__sub_822DECD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,280(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stfs f2,284(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// stfs f3,288(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DECE0"))) PPC_WEAK_FUNC(sub_822DECE0);
PPC_FUNC_IMPL(__imp__sub_822DECE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-136
	ctx.r3.s64 = ctx.r3.s64 + -136;
	// b 0x82325ac8
	sub_82325AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822DECF0"))) PPC_WEAK_FUNC(sub_822DECF0);
PPC_FUNC_IMPL(__imp__sub_822DECF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822deee0
	sub_822DEEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822DECFC"))) PPC_WEAK_FUNC(sub_822DECFC);
PPC_FUNC_IMPL(__imp__sub_822DECFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DED00"))) PPC_WEAK_FUNC(sub_822DED00);
PPC_FUNC_IMPL(__imp__sub_822DED00) {
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
	// lwz r16,-28480(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28480);
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
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
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-7828(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7828);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-7832
	r27.s64 = ctx.r10.s64 + -7832;
	// bne 0x822ded70
	if (!cr0.eq) goto loc_822DED70;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7828(r30)
	PPC_STORE_U32(r30.u32 + -7828, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,6348
	ctx.r4.s64 = r11.s64 + 6348;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7828(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7828);
loc_822DED70:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822dedac
	if (cr0.eq) goto loc_822DEDAC;
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
	// lwz r3,-20(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -20);
	// bl 0x822dd030
	sub_822DD030(ctx, base);
loc_822DEDA4:
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// b 0x822dee44
	goto loc_822DEE44;
loc_822DEDAC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-7836
	r27.s64 = ctx.r10.s64 + -7836;
	// bne 0x822dedd4
	if (!cr0.eq) goto loc_822DEDD4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7828(r30)
	PPC_STORE_U32(r30.u32 + -7828, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,6220
	ctx.r4.s64 = r11.s64 + 6220;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822DEDD4:
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
	// beq 0x822dedf8
	if (cr0.eq) goto loc_822DEDF8;
	// lwz r3,-20(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -20);
	// bl 0x822dd108
	sub_822DD108(ctx, base);
	// b 0x822deda4
	goto loc_822DEDA4;
loc_822DEDF8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r25,-16
	ctx.r4.s64 = r25.s64 + -16;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822c7060
	sub_822C7060(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822dee3c
	if (cr6.eq) goto loc_822DEE3C;
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
	// beq 0x822dee48
	if (cr0.eq) goto loc_822DEE48;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822dee48
	goto loc_822DEE48;
loc_822DEE3C:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822DEE44:
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
loc_822DEE48:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822DED08"))) PPC_WEAK_FUNC(sub_822DED08);
PPC_FUNC_IMPL(__imp__sub_822DED08) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
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
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-7828(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7828);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-7832
	r27.s64 = ctx.r10.s64 + -7832;
	// bne 0x822ded70
	if (!cr0.eq) goto loc_822DED70;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7828(r30)
	PPC_STORE_U32(r30.u32 + -7828, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,6348
	ctx.r4.s64 = r11.s64 + 6348;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7828(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7828);
loc_822DED70:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822dedac
	if (cr0.eq) goto loc_822DEDAC;
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
	// lwz r3,-20(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -20);
	// bl 0x822dd030
	sub_822DD030(ctx, base);
loc_822DEDA4:
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// b 0x822dee44
	goto loc_822DEE44;
loc_822DEDAC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-7836
	r27.s64 = ctx.r10.s64 + -7836;
	// bne 0x822dedd4
	if (!cr0.eq) goto loc_822DEDD4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7828(r30)
	PPC_STORE_U32(r30.u32 + -7828, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,6220
	ctx.r4.s64 = r11.s64 + 6220;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822DEDD4:
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
	// beq 0x822dedf8
	if (cr0.eq) goto loc_822DEDF8;
	// lwz r3,-20(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -20);
	// bl 0x822dd108
	sub_822DD108(ctx, base);
	// b 0x822deda4
	goto loc_822DEDA4;
loc_822DEDF8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r25,-16
	ctx.r4.s64 = r25.s64 + -16;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822c7060
	sub_822C7060(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822dee3c
	if (cr6.eq) goto loc_822DEE3C;
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
	// beq 0x822dee48
	if (cr0.eq) goto loc_822DEE48;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822dee48
	goto loc_822DEE48;
loc_822DEE3C:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822DEE44:
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
loc_822DEE48:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822DEE54"))) PPC_WEAK_FUNC(sub_822DEE54);
PPC_FUNC_IMPL(__imp__sub_822DEE54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7828
	r11.s64 = r11.s64 + -7828;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7828
	ctx.r10.s64 = ctx.r10.s64 + -7828;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DEE7C"))) PPC_WEAK_FUNC(sub_822DEE7C);
PPC_FUNC_IMPL(__imp__sub_822DEE7C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7828
	r11.s64 = r11.s64 + -7828;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7828
	ctx.r10.s64 = ctx.r10.s64 + -7828;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DEEA4"))) PPC_WEAK_FUNC(sub_822DEEA4);
PPC_FUNC_IMPL(__imp__sub_822DEEA4) {
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

__attribute__((alias("__imp__sub_822DEECC"))) PPC_WEAK_FUNC(sub_822DEECC);
PPC_FUNC_IMPL(__imp__sub_822DEECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DEED0"))) PPC_WEAK_FUNC(sub_822DEED0);
PPC_FUNC_IMPL(__imp__sub_822DEED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x822ded08
	sub_822DED08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822DEEDC"))) PPC_WEAK_FUNC(sub_822DEEDC);
PPC_FUNC_IMPL(__imp__sub_822DEEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DEEE0"))) PPC_WEAK_FUNC(sub_822DEEE0);
PPC_FUNC_IMPL(__imp__sub_822DEEE0) {
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
	// addi r30,r3,-296
	r30.s64 = ctx.r3.s64 + -296;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,296
	r31.s64 = r30.s64 + 296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dea88
	sub_822DEA88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822def18
	if (cr0.eq) goto loc_822DEF18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822DEF18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822DEF24"))) PPC_WEAK_FUNC(sub_822DEF24);
PPC_FUNC_IMPL(__imp__sub_822DEF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DEF28"))) PPC_WEAK_FUNC(sub_822DEF28);
PPC_FUNC_IMPL(__imp__sub_822DEF28) {
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
	// lwz r16,-28376(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28376);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,18448
	r11.s64 = r11.s64 + 18448;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r5,r10,18432
	ctx.r5.s64 = ctx.r10.s64 + 18432;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822def88
	if (cr0.eq) goto loc_822DEF88;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// b 0x822def8c
	goto loc_822DEF8C;
loc_822DEF88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DEF8C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

