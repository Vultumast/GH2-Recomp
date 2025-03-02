#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8269BDEC"))) PPC_WEAK_FUNC(sub_8269BDEC);
PPC_FUNC_IMPL(__imp__sub_8269BDEC) {
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

__attribute__((alias("__imp__sub_8269BE14"))) PPC_WEAK_FUNC(sub_8269BE14);
PPC_FUNC_IMPL(__imp__sub_8269BE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269BE18"))) PPC_WEAK_FUNC(sub_8269BE18);
PPC_FUNC_IMPL(__imp__sub_8269BE18) {
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
	// b 0x8269be68
	goto loc_8269BE68;
loc_8269BE34:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269be64
	if (cr0.eq) goto loc_8269BE64;
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
loc_8269BE64:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8269BE68:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8269be34
	if (!cr6.eq) goto loc_8269BE34;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269BE7C"))) PPC_WEAK_FUNC(sub_8269BE7C);
PPC_FUNC_IMPL(__imp__sub_8269BE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269BE80"))) PPC_WEAK_FUNC(sub_8269BE80);
PPC_FUNC_IMPL(__imp__sub_8269BE80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r11,r3,156
	r11.s64 = ctx.r3.s64 + 156;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8269bea0
	if (cr0.eq) goto loc_8269BEA0;
	// b 0x8269bd90
	sub_8269BD90(ctx, base);
	return;
loc_8269BEA0:
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// lwz r3,-4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269BEB8"))) PPC_WEAK_FUNC(sub_8269BEB8);
PPC_FUNC_IMPL(__imp__sub_8269BEB8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x826974e8
	sub_826974E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82122018
	sub_82122018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269BEF8"))) PPC_WEAK_FUNC(sub_8269BEF8);
PPC_FUNC_IMPL(__imp__sub_8269BEF8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8268df08
	sub_8268DF08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82122018
	sub_82122018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269BF38"))) PPC_WEAK_FUNC(sub_8269BF38);
PPC_FUNC_IMPL(__imp__sub_8269BF38) {
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
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x8269bae0
	sub_8269BAE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269BF64"))) PPC_WEAK_FUNC(sub_8269BF64);
PPC_FUNC_IMPL(__imp__sub_8269BF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269BF68"))) PPC_WEAK_FUNC(sub_8269BF68);
PPC_FUNC_IMPL(__imp__sub_8269BF68) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8269bfa8
	if (cr6.eq) goto loc_8269BFA8;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x8269a690
	sub_8269A690(ctx, base);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x826900e0
	sub_826900E0(ctx, base);
loc_8269BFA8:
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

__attribute__((alias("__imp__sub_8269BFBC"))) PPC_WEAK_FUNC(sub_8269BFBC);
PPC_FUNC_IMPL(__imp__sub_8269BFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269BFC0"))) PPC_WEAK_FUNC(sub_8269BFC0);
PPC_FUNC_IMPL(__imp__sub_8269BFC0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x8269c078
	if (!cr6.lt) goto loc_8269C078;
	// lis r11,16383
	r11.s64 = 1073676288;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x8269c00c
	if (!cr6.gt) goto loc_8269C00C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_8269C00C:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r5,r6
	r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// srawi r27,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r27.s64 = r11.s32 >> 2;
	// beq cr6,0x8269c04c
	if (cr6.eq) goto loc_8269C04C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269beb8
	sub_8269BEB8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x8269c05c
	goto loc_8269C05C;
loc_8269C04C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826974e8
	sub_826974E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8269C05C:
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_8269C078:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8269C080"))) PPC_WEAK_FUNC(sub_8269C080);
PPC_FUNC_IMPL(__imp__sub_8269C080) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x8269c138
	if (!cr6.lt) goto loc_8269C138;
	// lis r11,16383
	r11.s64 = 1073676288;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x8269c0cc
	if (!cr6.gt) goto loc_8269C0CC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_8269C0CC:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r5,r6
	r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// srawi r27,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r27.s64 = r11.s32 >> 2;
	// beq cr6,0x8269c10c
	if (cr6.eq) goto loc_8269C10C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269bef8
	sub_8269BEF8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x8269c11c
	goto loc_8269C11C;
loc_8269C10C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8268df08
	sub_8268DF08(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8269C11C:
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_8269C138:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8269C140"))) PPC_WEAK_FUNC(sub_8269C140);
PPC_FUNC_IMPL(__imp__sub_8269C140) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8269be18
	sub_8269BE18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82690250
	sub_82690250(ctx, base);
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

__attribute__((alias("__imp__sub_8269C194"))) PPC_WEAK_FUNC(sub_8269C194);
PPC_FUNC_IMPL(__imp__sub_8269C194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269C198"))) PPC_WEAK_FUNC(sub_8269C198);
PPC_FUNC_IMPL(__imp__sub_8269C198) {
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
	// lwz r16,-32064(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -32064);
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
	// stw r28,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r28.u32);
	// addi r29,r28,156
	r29.s64 = r28.s64 + 156;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269bc98
	sub_8269BC98(ctx, base);
	// addi r30,r28,168
	r30.s64 = r28.s64 + 168;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269c140
	sub_8269C140(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269c1f0
	if (cr0.eq) goto loc_8269C1F0;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269C1F0:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269c210
	if (cr0.eq) goto loc_8269C210;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269C210:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269f6f8
	sub_8269F6F8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269C1A0"))) PPC_WEAK_FUNC(sub_8269C1A0);
PPC_FUNC_IMPL(__imp__sub_8269C1A0) {
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
	// stw r28,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r28.u32);
	// addi r29,r28,156
	r29.s64 = r28.s64 + 156;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269bc98
	sub_8269BC98(ctx, base);
	// addi r30,r28,168
	r30.s64 = r28.s64 + 168;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269c140
	sub_8269C140(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269c1f0
	if (cr0.eq) goto loc_8269C1F0;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269C1F0:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269c210
	if (cr0.eq) goto loc_8269C210;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269C210:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269f6f8
	sub_8269F6F8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269C220"))) PPC_WEAK_FUNC(sub_8269C220);
PPC_FUNC_IMPL(__imp__sub_8269C220) {
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
	// bl 0x8269f6f8
	sub_8269F6F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269C248"))) PPC_WEAK_FUNC(sub_8269C248);
PPC_FUNC_IMPL(__imp__sub_8269C248) {
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
	// addi r3,r11,156
	ctx.r3.s64 = r11.s64 + 156;
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

__attribute__((alias("__imp__sub_8269C274"))) PPC_WEAK_FUNC(sub_8269C274);
PPC_FUNC_IMPL(__imp__sub_8269C274) {
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
	// addi r3,r11,168
	ctx.r3.s64 = r11.s64 + 168;
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

__attribute__((alias("__imp__sub_8269C2A0"))) PPC_WEAK_FUNC(sub_8269C2A0);
PPC_FUNC_IMPL(__imp__sub_8269C2A0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r21,144(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lwz r25,132(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r20,r21,-1
	r20.s64 = r21.s64 + -1;
	// bl 0x82140908
	sub_82140908(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mullw r10,r20,r25
	ctx.r10.s64 = int64_t(r20.s32) * int64_t(r25.s32);
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,264(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 264);
	// li r11,31
	r11.s64 = 31;
	// li r23,0
	r23.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 272, r11.u32);
	// lwz r11,264(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 264);
	// sth r23,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r23.u16);
	// addi r22,r11,224
	r22.s64 = r11.s64 + 224;
	// sth r23,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r23.u16);
	// sth r23,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, r23.u16);
	// addi r24,r11,216
	r24.s64 = r11.s64 + 216;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821c1840
	sub_821C1840(ctx, base);
	// addi r30,r25,1
	r30.s64 = r25.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mullw r4,r30,r21
	ctx.r4.s64 = int64_t(r30.s32) * int64_t(r21.s32);
	// bl 0x821bce48
	sub_821BCE48(ctx, base);
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x8269c370
	if (!cr6.gt) goto loc_8269C370;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
loc_8269C320:
	// mr r27,r23
	r27.u64 = r23.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8269c368
	if (!cr6.gt) goto loc_8269C368;
	// mr r28,r23
	r28.u64 = r23.u64;
	// rlwinm r29,r26,6,0,25
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 6) & 0xFFFFFFC0;
loc_8269C334:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// add r4,r28,r10
	ctx.r4.u64 = r28.u64 + ctx.r10.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x8269c334
	if (cr6.lt) goto loc_8269C334;
loc_8269C368:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8269c320
	if (!cr0.eq) goto loc_8269C320;
loc_8269C370:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x8269c408
	if (!cr6.gt) goto loc_8269C408;
loc_8269C37C:
	// clrlwi r8,r23,16
	ctx.r8.u64 = r23.u32 & 0xFFFF;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// add r11,r8,r21
	r11.u64 = ctx.r8.u64 + r21.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// ble cr6,0x8269c3fc
	if (!cr6.gt) goto loc_8269C3FC;
	// mulli r6,r4,6
	ctx.r6.s64 = ctx.r4.s64 * 6;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
loc_8269C398:
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r6,r6,6
	ctx.r6.s64 = ctx.r6.s64 + 6;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, r11.u16);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// addi r6,r6,6
	ctx.r6.s64 = ctx.r6.s64 + 6;
	// sth r3,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r3.u16);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// sth r5,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r5.u16);
	// bne 0x8269c398
	if (!cr0.eq) goto loc_8269C398;
loc_8269C3FC:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// add r23,r23,r21
	r23.u64 = r23.u64 + r21.u64;
	// bne 0x8269c37c
	if (!cr0.eq) goto loc_8269C37C;
loc_8269C408:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// li r4,319
	ctx.r4.s64 = 319;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_8269C42C"))) PPC_WEAK_FUNC(sub_8269C42C);
PPC_FUNC_IMPL(__imp__sub_8269C42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269C430"))) PPC_WEAK_FUNC(sub_8269C430);
PPC_FUNC_IMPL(__imp__sub_8269C430) {
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
	// lwz r16,-31936(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -31936);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r28.u32);
	// bl 0x826a0270
	sub_826A0270(ctx, base);
	// addi r30,r28,156
	r30.s64 = r28.s64 + 156;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r29,r28,168
	r29.s64 = r28.s64 + 168;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-31972
	ctx.r4.s64 = r11.s64 + -31972;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r26,r10,27816
	r26.s64 = ctx.r10.s64 + 27816;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8269bfc0
	sub_8269BFC0(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x8269c500
	if (!cr6.gt) goto loc_8269C500;
loc_8269C4E0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269bd90
	sub_8269BD90(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269bae0
	sub_8269BAE0(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x8269c4e0
	if (!cr0.eq) goto loc_8269C4E0;
loc_8269C500:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-31984
	ctx.r4.s64 = r11.s64 + -31984;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8269c080
	sub_8269C080(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x8269c580
	if (!cr6.gt) goto loc_8269C580;
loc_8269C560:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269c2a0
	sub_8269C2A0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826900e0
	sub_826900E0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8269c560
	if (!cr0.eq) goto loc_8269C560;
loc_8269C580:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8269C438"))) PPC_WEAK_FUNC(sub_8269C438);
PPC_FUNC_IMPL(__imp__sub_8269C438) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r28.u32);
	// bl 0x826a0270
	sub_826A0270(ctx, base);
	// addi r30,r28,156
	r30.s64 = r28.s64 + 156;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r29,r28,168
	r29.s64 = r28.s64 + 168;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-31972
	ctx.r4.s64 = r11.s64 + -31972;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r26,r10,27816
	r26.s64 = ctx.r10.s64 + 27816;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8269bfc0
	sub_8269BFC0(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x8269c500
	if (!cr6.gt) goto loc_8269C500;
loc_8269C4E0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269bd90
	sub_8269BD90(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269bae0
	sub_8269BAE0(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x8269c4e0
	if (!cr0.eq) goto loc_8269C4E0;
loc_8269C500:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-31984
	ctx.r4.s64 = r11.s64 + -31984;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8269c080
	sub_8269C080(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x8269c580
	if (!cr6.gt) goto loc_8269C580;
loc_8269C560:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269c2a0
	sub_8269C2A0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826900e0
	sub_826900E0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8269c560
	if (!cr0.eq) goto loc_8269C560;
loc_8269C580:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8269C58C"))) PPC_WEAK_FUNC(sub_8269C58C);
PPC_FUNC_IMPL(__imp__sub_8269C58C) {
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
	// bl 0x8269f6f8
	sub_8269F6F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269C5B4"))) PPC_WEAK_FUNC(sub_8269C5B4);
PPC_FUNC_IMPL(__imp__sub_8269C5B4) {
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
	// addi r3,r11,156
	ctx.r3.s64 = r11.s64 + 156;
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

__attribute__((alias("__imp__sub_8269C5E0"))) PPC_WEAK_FUNC(sub_8269C5E0);
PPC_FUNC_IMPL(__imp__sub_8269C5E0) {
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
	// addi r3,r11,168
	ctx.r3.s64 = r11.s64 + 168;
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

__attribute__((alias("__imp__sub_8269C60C"))) PPC_WEAK_FUNC(sub_8269C60C);
PPC_FUNC_IMPL(__imp__sub_8269C60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269C610"))) PPC_WEAK_FUNC(sub_8269C610);
PPC_FUNC_IMPL(__imp__sub_8269C610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r11,r3,168
	r11.s64 = ctx.r3.s64 + 168;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8269c630
	if (cr0.eq) goto loc_8269C630;
	// b 0x8269c2a0
	sub_8269C2A0(ctx, base);
	return;
loc_8269C630:
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// lwz r3,-4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269C648"))) PPC_WEAK_FUNC(sub_8269C648);
PPC_FUNC_IMPL(__imp__sub_8269C648) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x826a08b8
	sub_826A08B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269C650"))) PPC_WEAK_FUNC(sub_8269C650);
PPC_FUNC_IMPL(__imp__sub_8269C650) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x826a08b0
	sub_826A08B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269C658"))) PPC_WEAK_FUNC(sub_8269C658);
PPC_FUNC_IMPL(__imp__sub_8269C658) {
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
	// beq 0x8269c698
	if (cr0.eq) goto loc_8269C698;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,8772
	ctx.r3.s64 = r11.s64 + 8772;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8269c6a0
	goto loc_8269C6A0;
loc_8269C698:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8269C6A0:
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

__attribute__((alias("__imp__sub_8269C6BC"))) PPC_WEAK_FUNC(sub_8269C6BC);
PPC_FUNC_IMPL(__imp__sub_8269C6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269C6C0"))) PPC_WEAK_FUNC(sub_8269C6C0);
PPC_FUNC_IMPL(__imp__sub_8269C6C0) {
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
	// li r31,0
	r31.s64 = 0;
loc_8269C6DC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x8269e088
	sub_8269E088(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r31,12
	cr6.compare<int32_t>(r31.s32, 12, xer);
	// blt cr6,0x8269c6dc
	if (cr6.lt) goto loc_8269C6DC;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x826a0860
	sub_826A0860(ctx, base);
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

__attribute__((alias("__imp__sub_8269C71C"))) PPC_WEAK_FUNC(sub_8269C71C);
PPC_FUNC_IMPL(__imp__sub_8269C71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269C720"))) PPC_WEAK_FUNC(sub_8269C720);
PPC_FUNC_IMPL(__imp__sub_8269C720) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8269c6c0
	sub_8269C6C0(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269c750
	if (cr0.eq) goto loc_8269C750;
	// li r11,2
	r11.s64 = 2;
	// b 0x8269c760
	goto loc_8269C760;
loc_8269C750:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
loc_8269C760:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x8269e000
	sub_8269E000(ctx, base);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269c794
	if (cr0.eq) goto loc_8269C794;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x826a0858
	sub_826A0858(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x826a08b8
	sub_826A08B8(ctx, base);
loc_8269C794:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269C79C"))) PPC_WEAK_FUNC(sub_8269C79C);
PPC_FUNC_IMPL(__imp__sub_8269C79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269C7A0"))) PPC_WEAK_FUNC(sub_8269C7A0);
PPC_FUNC_IMPL(__imp__sub_8269C7A0) {
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
	// blt cr6,0x8269c7e8
	if (cr6.lt) goto loc_8269C7E8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8269C7E8:
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
	// bl 0x8269c658
	sub_8269C658(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8269c820
	if (cr0.eq) goto loc_8269C820;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_8269C820:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8269c840
	if (cr6.eq) goto loc_8269C840;
loc_8269C82C:
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
	// bne 0x8269c82c
	if (!cr0.eq) goto loc_8269C82C;
loc_8269C840:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x8269c868
	if (!cr0.eq) goto loc_8269C868;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8269c868
	if (cr0.eq) goto loc_8269C868;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_8269C868:
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

__attribute__((alias("__imp__sub_8269C89C"))) PPC_WEAK_FUNC(sub_8269C89C);
PPC_FUNC_IMPL(__imp__sub_8269C89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269C8A0"))) PPC_WEAK_FUNC(sub_8269C8A0);
PPC_FUNC_IMPL(__imp__sub_8269C8A0) {
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
	// beq cr6,0x8269c8e0
	if (cr6.eq) goto loc_8269C8E0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269c8d0
	if (cr0.eq) goto loc_8269C8D0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8269C8D0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8269c8f4
	goto loc_8269C8F4;
loc_8269C8E0:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x8269c7a0
	sub_8269C7A0(ctx, base);
loc_8269C8F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269C904"))) PPC_WEAK_FUNC(sub_8269C904);
PPC_FUNC_IMPL(__imp__sub_8269C904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269C908"))) PPC_WEAK_FUNC(sub_8269C908);
PPC_FUNC_IMPL(__imp__sub_8269C908) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x8269c950
	if (cr6.eq) goto loc_8269C950;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8269c948
	if (cr0.eq) goto loc_8269C948;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x8269c94c
	goto loc_8269C94C;
loc_8269C948:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8269C94C:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_8269C950:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269C95C"))) PPC_WEAK_FUNC(sub_8269C95C);
PPC_FUNC_IMPL(__imp__sub_8269C95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269C960"))) PPC_WEAK_FUNC(sub_8269C960);
PPC_FUNC_IMPL(__imp__sub_8269C960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,-31832(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -31832);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,3460
	ctx.r4.s64 = r11.s64 + 3460;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,27816
	ctx.r4.s64 = r11.s64 + 27816;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// bl 0x82150688
	sub_82150688(ctx, base);
	// addi r25,r30,8
	r25.s64 = r30.s64 + 8;
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// li r23,0
	r23.s64 = 0;
	// stw r23,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r23.u32);
	// stw r23,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r23.u32);
	// stw r23,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r23.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x8269ca20
	if (cr0.eq) goto loc_8269CA20;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-31864
	ctx.r4.s64 = r11.s64 + -31864;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x826a08c8
	sub_826A08C8(ctx, base);
	// b 0x8269ca24
	goto loc_8269CA24;
loc_8269CA20:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8269CA24:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// addi r4,r11,-31872
	ctx.r4.s64 = r11.s64 + -31872;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,6212
	r11.s64 = r11.s64 + 6212;
	// addi r10,r10,32752
	ctx.r10.s64 = ctx.r10.s64 + 32752;
	// addi r9,r9,-31880
	ctx.r9.s64 = ctx.r9.s64 + -31880;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
	// li r26,3
	r26.s64 = 3;
loc_8269CA7C:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// beq 0x8269cae4
	if (cr0.eq) goto loc_8269CAE4;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
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
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8269e0e0
	sub_8269E0E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8269cae8
	goto loc_8269CAE8;
loc_8269CAE4:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8269CAE8:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8269c8a0
	sub_8269C8A0(ctx, base);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x8269ca7c
	if (!cr0.eq) goto loc_8269CA7C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8269C968"))) PPC_WEAK_FUNC(sub_8269C968);
PPC_FUNC_IMPL(__imp__sub_8269C968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,3460
	ctx.r4.s64 = r11.s64 + 3460;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,27816
	ctx.r4.s64 = r11.s64 + 27816;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// bl 0x82150688
	sub_82150688(ctx, base);
	// addi r25,r30,8
	r25.s64 = r30.s64 + 8;
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// li r23,0
	r23.s64 = 0;
	// stw r23,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r23.u32);
	// stw r23,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r23.u32);
	// stw r23,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r23.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x8269ca20
	if (cr0.eq) goto loc_8269CA20;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-31864
	ctx.r4.s64 = r11.s64 + -31864;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x826a08c8
	sub_826A08C8(ctx, base);
	// b 0x8269ca24
	goto loc_8269CA24;
loc_8269CA20:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8269CA24:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// addi r4,r11,-31872
	ctx.r4.s64 = r11.s64 + -31872;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,6212
	r11.s64 = r11.s64 + 6212;
	// addi r10,r10,32752
	ctx.r10.s64 = ctx.r10.s64 + 32752;
	// addi r9,r9,-31880
	ctx.r9.s64 = ctx.r9.s64 + -31880;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
	// li r26,3
	r26.s64 = 3;
loc_8269CA7C:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// beq 0x8269cae4
	if (cr0.eq) goto loc_8269CAE4;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
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
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8269e0e0
	sub_8269E0E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8269cae8
	goto loc_8269CAE8;
loc_8269CAE4:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8269CAE8:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8269c8a0
	sub_8269C8A0(ctx, base);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x8269ca7c
	if (!cr0.eq) goto loc_8269CA7C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8269CB10"))) PPC_WEAK_FUNC(sub_8269CB10);
PPC_FUNC_IMPL(__imp__sub_8269CB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
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

__attribute__((alias("__imp__sub_8269CB3C"))) PPC_WEAK_FUNC(sub_8269CB3C);
PPC_FUNC_IMPL(__imp__sub_8269CB3C) {
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

__attribute__((alias("__imp__sub_8269CB64"))) PPC_WEAK_FUNC(sub_8269CB64);
PPC_FUNC_IMPL(__imp__sub_8269CB64) {
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

__attribute__((alias("__imp__sub_8269CB8C"))) PPC_WEAK_FUNC(sub_8269CB8C);
PPC_FUNC_IMPL(__imp__sub_8269CB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269CB90"))) PPC_WEAK_FUNC(sub_8269CB90);
PPC_FUNC_IMPL(__imp__sub_8269CB90) {
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
	// lwz r16,-31744(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -31744);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269cbe0
	if (cr0.eq) goto loc_8269CBE0;
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
loc_8269CBE0:
	// li r28,0
	r28.s64 = 0;
	// lwz r30,20(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// beq 0x8269cc04
	if (cr0.eq) goto loc_8269CC04;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a0820
	sub_826A0820(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8269CC04:
	// addi r30,r29,8
	r30.s64 = r29.s64 + 8;
	// stw r28,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r28.u32);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x8269cc24
	goto loc_8269CC24;
loc_8269CC18:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_8269CC24:
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// bne cr6,0x8269cc18
	if (!cr6.eq) goto loc_8269CC18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8269c908
	sub_8269C908(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269cc5c
	if (cr0.eq) goto loc_8269CC5C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269CC5C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269CB98"))) PPC_WEAK_FUNC(sub_8269CB98);
PPC_FUNC_IMPL(__imp__sub_8269CB98) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269cbe0
	if (cr0.eq) goto loc_8269CBE0;
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
loc_8269CBE0:
	// li r28,0
	r28.s64 = 0;
	// lwz r30,20(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// beq 0x8269cc04
	if (cr0.eq) goto loc_8269CC04;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a0820
	sub_826A0820(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8269CC04:
	// addi r30,r29,8
	r30.s64 = r29.s64 + 8;
	// stw r28,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r28.u32);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x8269cc24
	goto loc_8269CC24;
loc_8269CC18:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_8269CC24:
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// bne cr6,0x8269cc18
	if (!cr6.eq) goto loc_8269CC18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8269c908
	sub_8269C908(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269cc5c
	if (cr0.eq) goto loc_8269CC5C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269CC5C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269CC64"))) PPC_WEAK_FUNC(sub_8269CC64);
PPC_FUNC_IMPL(__imp__sub_8269CC64) {
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

__attribute__((alias("__imp__sub_8269CC90"))) PPC_WEAK_FUNC(sub_8269CC90);
PPC_FUNC_IMPL(__imp__sub_8269CC90) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r10,-31680
	ctx.r4.s64 = ctx.r10.s64 + -31680;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
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
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82699ec0
	sub_82699EC0(ctx, base);
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

__attribute__((alias("__imp__sub_8269CD24"))) PPC_WEAK_FUNC(sub_8269CD24);
PPC_FUNC_IMPL(__imp__sub_8269CD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269CD28"))) PPC_WEAK_FUNC(sub_8269CD28);
PPC_FUNC_IMPL(__imp__sub_8269CD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r4,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269CD34"))) PPC_WEAK_FUNC(sub_8269CD34);
PPC_FUNC_IMPL(__imp__sub_8269CD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269CD38"))) PPC_WEAK_FUNC(sub_8269CD38);
PPC_FUNC_IMPL(__imp__sub_8269CD38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x821bd9e8
	sub_821BD9E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269CD60"))) PPC_WEAK_FUNC(sub_8269CD60);
PPC_FUNC_IMPL(__imp__sub_8269CD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,44(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	f0.f64 = double(temp.f32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - f0.f64));
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lfs f2,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	f0.f64 = double(temp.f32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8269CDA0"))) PPC_WEAK_FUNC(sub_8269CDA0);
PPC_FUNC_IMPL(__imp__sub_8269CDA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269CDA4"))) PPC_WEAK_FUNC(sub_8269CDA4);
PPC_FUNC_IMPL(__imp__sub_8269CDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269CDA8"))) PPC_WEAK_FUNC(sub_8269CDA8);
PPC_FUNC_IMPL(__imp__sub_8269CDA8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r10,-31680
	ctx.r4.s64 = ctx.r10.s64 + -31680;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
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
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,9120
	ctx.r3.s64 = r11.s64 + 9120;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x82141298
	sub_82141298(ctx, base);
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

__attribute__((alias("__imp__sub_8269CE48"))) PPC_WEAK_FUNC(sub_8269CE48);
PPC_FUNC_IMPL(__imp__sub_8269CE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stfs f1,48(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f2,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// stb r11,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r11.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269cea4
	if (!cr0.eq) goto loc_8269CEA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8269ceb4
	goto loc_8269CEB4;
loc_8269CEA4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269CEB4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x821dbc00
	sub_821DBC00(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269ced4
	if (!cr0.eq) goto loc_8269CED4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8269cee4
	goto loc_8269CEE4;
loc_8269CED4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269CEE4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x821dbc00
	sub_821DBC00(ctx, base);
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

__attribute__((alias("__imp__sub_8269CF00"))) PPC_WEAK_FUNC(sub_8269CF00);
PPC_FUNC_IMPL(__imp__sub_8269CF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
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
	// bl 0x8269ce48
	sub_8269CE48(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stb r11,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r11.u8);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269cf44
	if (!cr0.eq) goto loc_8269CF44;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8269cf54
	goto loc_8269CF54;
loc_8269CF44:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269CF54:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
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

__attribute__((alias("__imp__sub_8269CF78"))) PPC_WEAK_FUNC(sub_8269CF78);
PPC_FUNC_IMPL(__imp__sub_8269CF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
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
	// bl 0x8269ce48
	sub_8269CE48(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stb r11,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r11.u8);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269cfbc
	if (!cr0.eq) goto loc_8269CFBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8269cfcc
	goto loc_8269CFCC;
loc_8269CFBC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269CFCC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
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

__attribute__((alias("__imp__sub_8269CFF0"))) PPC_WEAK_FUNC(sub_8269CFF0);
PPC_FUNC_IMPL(__imp__sub_8269CFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,1384
	r30.s64 = r11.s64 + 1384;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r11,920
	r28.s64 = r11.s64 + 920;
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823173f0
	sub_823173F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
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
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,36
	ctx.r4.s64 = r11.s64 + 36;
	// bne 0x8269d0c4
	if (!cr0.eq) goto loc_8269D0C4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8269D0C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b4ad8
	sub_821B4AD8(ctx, base);
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
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,24
	ctx.r3.s64 = r29.s64 + 24;
	// bl 0x826966f0
	sub_826966F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269D104"))) PPC_WEAK_FUNC(sub_8269D104);
PPC_FUNC_IMPL(__imp__sub_8269D104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269D108"))) PPC_WEAK_FUNC(sub_8269D108);
PPC_FUNC_IMPL(__imp__sub_8269D108) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-31552(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -31552);
	// mflr r12
	// bl 0x8239bce8
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r4,r11,-31568
	ctx.r4.s64 = r11.s64 + -31568;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,27816
	ctx.r4.s64 = r11.s64 + 27816;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// li r25,0
	r25.s64 = 0;
	// stw r26,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r26.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r25,44(r30)
	PPC_STORE_U8(r30.u32 + 44, r25.u8);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// stfs f31,48(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 48, temp.u32);
	// bl 0x82150688
	sub_82150688(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// bl 0x82140908
	sub_82140908(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// bl 0x82140908
	sub_82140908(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-31588
	ctx.r4.s64 = r11.s64 + -31588;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-31608
	ctx.r4.s64 = r11.s64 + -31608;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8269d1fc
	if (!cr6.eq) goto loc_8269D1FC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8269d20c
	goto loc_8269D20C;
loc_8269D1FC:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269D20C:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8269d244
	if (!cr6.eq) goto loc_8269D244;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8269d254
	goto loc_8269D254;
loc_8269D244:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269D254:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-31628
	ctx.r4.s64 = r11.s64 + -31628;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8269d2a0
	if (!cr0.eq) goto loc_8269D2A0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x8269d2b0
	goto loc_8269D2B0;
loc_8269D2A0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8269D2B0:
	// bl 0x8269a648
	sub_8269A648(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-31644
	ctx.r4.s64 = r11.s64 + -31644;
	// bl 0x8269cff0
	sub_8269CFF0(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-31664
	ctx.r4.s64 = r11.s64 + -31664;
	// bl 0x8269cff0
	sub_8269CFF0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82699e78
	sub_82699E78(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// stfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// addi r3,r10,52
	ctx.r3.s64 = ctx.r10.s64 + 52;
	// stfs f31,100(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f31,104(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269d334
	if (!cr0.eq) goto loc_8269D334;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8269d344
	goto loc_8269D344;
loc_8269D334:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269D344:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bne 0x8269d364
	if (!cr0.eq) goto loc_8269D364;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_8269D364:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269d388
	if (!cr0.eq) goto loc_8269D388;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8269d398
	goto loc_8269D398;
loc_8269D388:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269D398:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bne 0x8269d3b8
	if (!cr0.eq) goto loc_8269D3B8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_8269D3B8:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269d3dc
	if (!cr0.eq) goto loc_8269D3DC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8269d3ec
	goto loc_8269D3EC;
loc_8269D3DC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269D3EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// addi r4,r24,52
	ctx.r4.s64 = r24.s64 + 52;
	// bne cr6,0x8269d408
	if (!cr6.eq) goto loc_8269D408;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_8269D408:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,6212
	ctx.r4.s64 = r11.s64 + 6212;
	// bl 0x8269cda8
	sub_8269CDA8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-31672
	ctx.r4.s64 = r11.s64 + -31672;
	// stw r10,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// bl 0x8269cc90
	sub_8269CC90(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,28996
	ctx.r4.s64 = r11.s64 + 28996;
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// bl 0x8269cc90
	sub_8269CC90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x821bd9e8
	sub_821BD9E8(ctx, base);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x821bd9e8
	sub_821BD9E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8269D110"))) PPC_WEAK_FUNC(sub_8269D110);
PPC_FUNC_IMPL(__imp__sub_8269D110) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r4,r11,-31568
	ctx.r4.s64 = r11.s64 + -31568;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,27816
	ctx.r4.s64 = r11.s64 + 27816;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// li r25,0
	r25.s64 = 0;
	// stw r26,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r26.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r25,44(r30)
	PPC_STORE_U8(r30.u32 + 44, r25.u8);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// stfs f31,48(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 48, temp.u32);
	// bl 0x82150688
	sub_82150688(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// bl 0x82140908
	sub_82140908(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// bl 0x82140908
	sub_82140908(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-31588
	ctx.r4.s64 = r11.s64 + -31588;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-31608
	ctx.r4.s64 = r11.s64 + -31608;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8269d1fc
	if (!cr6.eq) goto loc_8269D1FC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8269d20c
	goto loc_8269D20C;
loc_8269D1FC:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269D20C:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8269d244
	if (!cr6.eq) goto loc_8269D244;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8269d254
	goto loc_8269D254;
loc_8269D244:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269D254:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-31628
	ctx.r4.s64 = r11.s64 + -31628;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8269d2a0
	if (!cr0.eq) goto loc_8269D2A0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x8269d2b0
	goto loc_8269D2B0;
loc_8269D2A0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8269D2B0:
	// bl 0x8269a648
	sub_8269A648(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-31644
	ctx.r4.s64 = r11.s64 + -31644;
	// bl 0x8269cff0
	sub_8269CFF0(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-31664
	ctx.r4.s64 = r11.s64 + -31664;
	// bl 0x8269cff0
	sub_8269CFF0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82699e78
	sub_82699E78(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// stfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// addi r3,r10,52
	ctx.r3.s64 = ctx.r10.s64 + 52;
	// stfs f31,100(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f31,104(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269d334
	if (!cr0.eq) goto loc_8269D334;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8269d344
	goto loc_8269D344;
loc_8269D334:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269D344:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bne 0x8269d364
	if (!cr0.eq) goto loc_8269D364;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_8269D364:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269d388
	if (!cr0.eq) goto loc_8269D388;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8269d398
	goto loc_8269D398;
loc_8269D388:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269D398:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bne 0x8269d3b8
	if (!cr0.eq) goto loc_8269D3B8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_8269D3B8:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269d3dc
	if (!cr0.eq) goto loc_8269D3DC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8269d3ec
	goto loc_8269D3EC;
loc_8269D3DC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269D3EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// addi r4,r24,52
	ctx.r4.s64 = r24.s64 + 52;
	// bne cr6,0x8269d408
	if (!cr6.eq) goto loc_8269D408;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_8269D408:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,6212
	ctx.r4.s64 = r11.s64 + 6212;
	// bl 0x8269cda8
	sub_8269CDA8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-31672
	ctx.r4.s64 = r11.s64 + -31672;
	// stw r10,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// bl 0x8269cc90
	sub_8269CC90(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,28996
	ctx.r4.s64 = r11.s64 + 28996;
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// bl 0x8269cc90
	sub_8269CC90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x821bd9e8
	sub_821BD9E8(ctx, base);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x821bd9e8
	sub_821BD9E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8269D480"))) PPC_WEAK_FUNC(sub_8269D480);
PPC_FUNC_IMPL(__imp__sub_8269D480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
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

__attribute__((alias("__imp__sub_8269D4AC"))) PPC_WEAK_FUNC(sub_8269D4AC);
PPC_FUNC_IMPL(__imp__sub_8269D4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269D4B0"))) PPC_WEAK_FUNC(sub_8269D4B0);
PPC_FUNC_IMPL(__imp__sub_8269D4B0) {
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
	// lwz r16,-31496(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -31496);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269d500
	if (cr0.eq) goto loc_8269D500;
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
loc_8269D500:
	// li r28,0
	r28.s64 = 0;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r28,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r28.u32);
	// beq 0x8269d538
	if (cr0.eq) goto loc_8269D538;
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
loc_8269D538:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// stw r28,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269d56c
	if (cr0.eq) goto loc_8269D56C;
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
loc_8269D56C:
	// addi r30,r29,24
	r30.s64 = r29.s64 + 24;
	// stw r28,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82697100
	sub_82697100(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269d59c
	if (cr0.eq) goto loc_8269D59C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269D59C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269D4B8"))) PPC_WEAK_FUNC(sub_8269D4B8);
PPC_FUNC_IMPL(__imp__sub_8269D4B8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269d500
	if (cr0.eq) goto loc_8269D500;
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
loc_8269D500:
	// li r28,0
	r28.s64 = 0;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r28,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r28.u32);
	// beq 0x8269d538
	if (cr0.eq) goto loc_8269D538;
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
loc_8269D538:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// stw r28,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269d56c
	if (cr0.eq) goto loc_8269D56C;
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
loc_8269D56C:
	// addi r30,r29,24
	r30.s64 = r29.s64 + 24;
	// stw r28,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82697100
	sub_82697100(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269d59c
	if (cr0.eq) goto loc_8269D59C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269D59C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269D5A4"))) PPC_WEAK_FUNC(sub_8269D5A4);
PPC_FUNC_IMPL(__imp__sub_8269D5A4) {
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
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
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

__attribute__((alias("__imp__sub_8269D5D0"))) PPC_WEAK_FUNC(sub_8269D5D0);
PPC_FUNC_IMPL(__imp__sub_8269D5D0) {
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
	// b 0x8269d620
	goto loc_8269D620;
loc_8269D5EC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269d61c
	if (cr0.eq) goto loc_8269D61C;
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
loc_8269D61C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8269D620:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8269d5ec
	if (!cr6.eq) goto loc_8269D5EC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269D634"))) PPC_WEAK_FUNC(sub_8269D634);
PPC_FUNC_IMPL(__imp__sub_8269D634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269D638"))) PPC_WEAK_FUNC(sub_8269D638);
PPC_FUNC_IMPL(__imp__sub_8269D638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
loc_8269D64C:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8269d6f4
	if (cr6.eq) goto loc_8269D6F4;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + ctx.r9.u32);
	// lwzx r11,r8,r31
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	// addi r3,r10,52
	ctx.r3.s64 = ctx.r10.s64 + 52;
	// addi r29,r11,80
	r29.s64 = r11.s64 + 80;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8216db48
	sub_8216DB48(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821af870
	sub_821AF870(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8269D6F4:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r31,20
	cr6.compare<int32_t>(r31.s32, 20, xer);
	// blt cr6,0x8269d64c
	if (cr6.lt) goto loc_8269D64C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269D708"))) PPC_WEAK_FUNC(sub_8269D708);
PPC_FUNC_IMPL(__imp__sub_8269D708) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r7.u32);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r8,84(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stfsx f1,r10,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, temp.u32);
	// stfsx f2,r11,r9
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
	// stfsx f3,r8,r11
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269D740"))) PPC_WEAK_FUNC(sub_8269D740);
PPC_FUNC_IMPL(__imp__sub_8269D740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269D754"))) PPC_WEAK_FUNC(sub_8269D754);
PPC_FUNC_IMPL(__imp__sub_8269D754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269D758"))) PPC_WEAK_FUNC(sub_8269D758);
PPC_FUNC_IMPL(__imp__sub_8269D758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8269d7ac
	if (cr6.eq) goto loc_8269D7AC;
	// b 0x8269d798
	goto loc_8269D798;
loc_8269D788:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8269d79c
	if (!cr6.lt) goto loc_8269D79C;
loc_8269D798:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8269D79C:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8269d788
	if (!cr6.eq) goto loc_8269D788;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8269D7AC:
	// lfs f28,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f28.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// lis r30,-32252
	r30.s64 = -2113667072;
	// lfs f29,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f29.f64 = double(temp.f32);
	// lfs f30,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
loc_8269D7C8:
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8269d824
	if (cr6.eq) goto loc_8269D824;
	// fsubs f13,f27,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f27.f64 - f28.f64));
	// lfs f0,2148(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2148);
	f0.f64 = double(temp.f32);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// lfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r31.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// beq cr6,0x8269d824
	if (cr6.eq) goto loc_8269D824;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x8269d824
	if (!cr6.gt) goto loc_8269D824;
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r10.u32);
loc_8269D824:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r31,20
	cr6.compare<int32_t>(r31.s32, 20, xer);
	// blt cr6,0x8269d7c8
	if (cr6.lt) goto loc_8269D7C8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8239d630
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269D840"))) PPC_WEAK_FUNC(sub_8269D840);
PPC_FUNC_IMPL(__imp__sub_8269D840) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269D864"))) PPC_WEAK_FUNC(sub_8269D864);
PPC_FUNC_IMPL(__imp__sub_8269D864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269D868"))) PPC_WEAK_FUNC(sub_8269D868);
PPC_FUNC_IMPL(__imp__sub_8269D868) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x8269d8b0
	if (cr6.eq) goto loc_8269D8B0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8269d8a8
	if (cr0.eq) goto loc_8269D8A8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x8269d8ac
	goto loc_8269D8AC;
loc_8269D8A8:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8269D8AC:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_8269D8B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269D8BC"))) PPC_WEAK_FUNC(sub_8269D8BC);
PPC_FUNC_IMPL(__imp__sub_8269D8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269D8C0"))) PPC_WEAK_FUNC(sub_8269D8C0);
PPC_FUNC_IMPL(__imp__sub_8269D8C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	// lwz r16,-31248(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -31248);
	// mflr r12
	// bl 0x8239bcd8
	// stfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, f29.u64);
	// stfd f30,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// li r29,0
	r29.s64 = 0;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r30,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x8269d958
	if (cr6.eq) goto loc_8269D958;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-31312
	r11.s64 = r11.s64 + -31312;
	// addi r10,r10,-31320
	ctx.r10.s64 = ctx.r10.s64 + -31320;
	// addi r3,r30,100
	ctx.r3.s64 = r30.s64 + 100;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,148(r30)
	PPC_STORE_U32(r30.u32 + 148, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,144
	r11.s64 = r30.s64 + 144;
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
loc_8269D958:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-31356
	r11.s64 = r11.s64 + -31356;
	// addi r10,r10,-31420
	ctx.r10.s64 = ctx.r10.s64 + -31420;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r28,r30,36
	r28.s64 = r30.s64 + 36;
	// addi r9,r9,-31428
	ctx.r9.s64 = ctx.r9.s64 + -31428;
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
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-96
	ctx.r10.s64 = r11.s64 + -96;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-140
	ctx.r10.s64 = r11.s64 + -140;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// stw r29,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r29.u32);
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// addi r27,r30,48
	r27.s64 = r30.s64 + 48;
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// stw r29,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r29.u32);
	// stw r29,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r29.u32);
	// addi r26,r30,60
	r26.s64 = r30.s64 + 60;
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// stw r29,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r29.u32);
	// stw r29,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r29.u32);
	// addi r25,r30,72
	r25.s64 = r30.s64 + 72;
	// stw r29,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r29.u32);
	// stw r29,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r29.u32);
	// stw r29,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r29.u32);
	// addi r24,r30,84
	r24.s64 = r30.s64 + 84;
	// stw r29,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r29.u32);
	// stw r29,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r29.u32);
	// stw r29,8(r24)
	PPC_STORE_U32(r24.u32 + 8, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r23,r29
	r23.u64 = r29.u64;
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// stfs f31,88(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
loc_8269DA2C:
	// bl 0x82150688
	sub_82150688(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r22,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r22.u32);
	// bl 0x821ca3b0
	sub_821CA3B0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82699e78
	sub_82699E78(ctx, base);
	// addi r10,r23,-2
	ctx.r10.s64 = r23.s64 + -2;
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// stfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// stfs f31,116(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// addi r10,r31,176
	ctx.r10.s64 = r31.s64 + 176;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// std r9,104(r31)
	PPC_STORE_U64(r31.u32 + 104, ctx.r9.u64);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// lfd f0,104(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f30,f0,f29
	f30.f64 = double(float(f0.f64 * f29.f64));
	// bl 0x82699d68
	sub_82699D68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269dad0
	if (cr0.eq) goto loc_8269DAD0;
	// fneg f30,f30
	ctx.fpscr.disableFlushMode();
	f30.u64 = f30.u64 ^ 0x8000000000000000;
loc_8269DAD0:
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x8214c240
	sub_8214C240(ctx, base);
	// addi r22,r22,52
	r22.s64 = r22.s64 + 52;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r22,28
	ctx.r3.s64 = r22.s64 + 28;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// addi r4,r20,52
	ctx.r4.s64 = r20.s64 + 52;
	// bne cr6,0x8269db08
	if (!cr6.eq) goto loc_8269DB08;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8269DB08:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82193c90
	sub_82193C90(ctx, base);
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82193c90
	sub_82193C90(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821ca3b0
	sub_821CA3B0(ctx, base);
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82193c90
	sub_82193C90(ctx, base);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmpwi cr6,r23,5
	cr6.compare<int32_t>(r23.s32, 5, xer);
	// blt cr6,0x8269da2c
	if (cr6.lt) goto loc_8269DA2C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
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

__attribute__((alias("__imp__sub_8269D8C8"))) PPC_WEAK_FUNC(sub_8269D8C8);
PPC_FUNC_IMPL(__imp__sub_8269D8C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// li r29,0
	r29.s64 = 0;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r30,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x8269d958
	if (cr6.eq) goto loc_8269D958;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-31312
	r11.s64 = r11.s64 + -31312;
	// addi r10,r10,-31320
	ctx.r10.s64 = ctx.r10.s64 + -31320;
	// addi r3,r30,100
	ctx.r3.s64 = r30.s64 + 100;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,148(r30)
	PPC_STORE_U32(r30.u32 + 148, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,144
	r11.s64 = r30.s64 + 144;
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
loc_8269D958:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-31356
	r11.s64 = r11.s64 + -31356;
	// addi r10,r10,-31420
	ctx.r10.s64 = ctx.r10.s64 + -31420;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r28,r30,36
	r28.s64 = r30.s64 + 36;
	// addi r9,r9,-31428
	ctx.r9.s64 = ctx.r9.s64 + -31428;
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
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-96
	ctx.r10.s64 = r11.s64 + -96;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-140
	ctx.r10.s64 = r11.s64 + -140;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// stw r29,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r29.u32);
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// addi r27,r30,48
	r27.s64 = r30.s64 + 48;
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// stw r29,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r29.u32);
	// stw r29,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r29.u32);
	// addi r26,r30,60
	r26.s64 = r30.s64 + 60;
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// stw r29,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r29.u32);
	// stw r29,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r29.u32);
	// addi r25,r30,72
	r25.s64 = r30.s64 + 72;
	// stw r29,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r29.u32);
	// stw r29,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r29.u32);
	// stw r29,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r29.u32);
	// addi r24,r30,84
	r24.s64 = r30.s64 + 84;
	// stw r29,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r29.u32);
	// stw r29,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r29.u32);
	// stw r29,8(r24)
	PPC_STORE_U32(r24.u32 + 8, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r23,r29
	r23.u64 = r29.u64;
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// stfs f31,88(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
loc_8269DA2C:
	// bl 0x82150688
	sub_82150688(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r22,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r22.u32);
	// bl 0x821ca3b0
	sub_821CA3B0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82699e78
	sub_82699E78(ctx, base);
	// addi r10,r23,-2
	ctx.r10.s64 = r23.s64 + -2;
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// stfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// stfs f31,116(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// addi r10,r31,176
	ctx.r10.s64 = r31.s64 + 176;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// std r9,104(r31)
	PPC_STORE_U64(r31.u32 + 104, ctx.r9.u64);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// lfd f0,104(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f30,f0,f29
	f30.f64 = double(float(f0.f64 * f29.f64));
	// bl 0x82699d68
	sub_82699D68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269dad0
	if (cr0.eq) goto loc_8269DAD0;
	// fneg f30,f30
	ctx.fpscr.disableFlushMode();
	f30.u64 = f30.u64 ^ 0x8000000000000000;
loc_8269DAD0:
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x8214c240
	sub_8214C240(ctx, base);
	// addi r22,r22,52
	r22.s64 = r22.s64 + 52;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r22,28
	ctx.r3.s64 = r22.s64 + 28;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// addi r4,r20,52
	ctx.r4.s64 = r20.s64 + 52;
	// bne cr6,0x8269db08
	if (!cr6.eq) goto loc_8269DB08;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8269DB08:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82193c90
	sub_82193C90(ctx, base);
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82193c90
	sub_82193C90(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821ca3b0
	sub_821CA3B0(ctx, base);
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82193c90
	sub_82193C90(ctx, base);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmpwi cr6,r23,5
	cr6.compare<int32_t>(r23.s32, 5, xer);
	// blt cr6,0x8269da2c
	if (cr6.lt) goto loc_8269DA2C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
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

__attribute__((alias("__imp__sub_8269DB68"))) PPC_WEAK_FUNC(sub_8269DB68);
PPC_FUNC_IMPL(__imp__sub_8269DB68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
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
	// beq 0x8269db9c
	if (cr0.eq) goto loc_8269DB9C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,340(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_8269DB9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269DBAC"))) PPC_WEAK_FUNC(sub_8269DBAC);
PPC_FUNC_IMPL(__imp__sub_8269DBAC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
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

__attribute__((alias("__imp__sub_8269DBD8"))) PPC_WEAK_FUNC(sub_8269DBD8);
PPC_FUNC_IMPL(__imp__sub_8269DBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
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

__attribute__((alias("__imp__sub_8269DC04"))) PPC_WEAK_FUNC(sub_8269DC04);
PPC_FUNC_IMPL(__imp__sub_8269DC04) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
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

__attribute__((alias("__imp__sub_8269DC30"))) PPC_WEAK_FUNC(sub_8269DC30);
PPC_FUNC_IMPL(__imp__sub_8269DC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
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

__attribute__((alias("__imp__sub_8269DC5C"))) PPC_WEAK_FUNC(sub_8269DC5C);
PPC_FUNC_IMPL(__imp__sub_8269DC5C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// addi r3,r11,84
	ctx.r3.s64 = r11.s64 + 84;
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

__attribute__((alias("__imp__sub_8269DC88"))) PPC_WEAK_FUNC(sub_8269DC88);
PPC_FUNC_IMPL(__imp__sub_8269DC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-60
	ctx.r3.s64 = ctx.r3.s64 + -60;
	// b 0x821b3420
	sub_821B3420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269DC98"))) PPC_WEAK_FUNC(sub_8269DC98);
PPC_FUNC_IMPL(__imp__sub_8269DC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-60
	ctx.r3.s64 = ctx.r3.s64 + -60;
	// b 0x821b36c0
	sub_821B36C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269DCA8"))) PPC_WEAK_FUNC(sub_8269DCA8);
PPC_FUNC_IMPL(__imp__sub_8269DCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8269dfb8
	sub_8269DFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269DCB4"))) PPC_WEAK_FUNC(sub_8269DCB4);
PPC_FUNC_IMPL(__imp__sub_8269DCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269DCB8"))) PPC_WEAK_FUNC(sub_8269DCB8);
PPC_FUNC_IMPL(__imp__sub_8269DCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// addi r4,r4,-60
	ctx.r4.s64 = ctx.r4.s64 + -60;
	// b 0x821b2fb0
	sub_821B2FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269DCC8"))) PPC_WEAK_FUNC(sub_8269DCC8);
PPC_FUNC_IMPL(__imp__sub_8269DCC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-60
	ctx.r3.s64 = ctx.r3.s64 + -60;
	// b 0x821b2a18
	sub_821B2A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269DCD8"))) PPC_WEAK_FUNC(sub_8269DCD8);
PPC_FUNC_IMPL(__imp__sub_8269DCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// addi r4,r4,-60
	ctx.r4.s64 = ctx.r4.s64 + -60;
	// b 0x821b3888
	sub_821B3888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269DCE8"))) PPC_WEAK_FUNC(sub_8269DCE8);
PPC_FUNC_IMPL(__imp__sub_8269DCE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-60
	ctx.r3.s64 = ctx.r3.s64 + -60;
	// b 0x821b2938
	sub_821B2938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269DCF8"))) PPC_WEAK_FUNC(sub_8269DCF8);
PPC_FUNC_IMPL(__imp__sub_8269DCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-60
	ctx.r3.s64 = ctx.r3.s64 + -60;
	// b 0x821b2890
	sub_821B2890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269DD08"))) PPC_WEAK_FUNC(sub_8269DD08);
PPC_FUNC_IMPL(__imp__sub_8269DD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-60
	ctx.r3.s64 = ctx.r3.s64 + -60;
	// b 0x821b3038
	sub_821B3038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269DD18"))) PPC_WEAK_FUNC(sub_8269DD18);
PPC_FUNC_IMPL(__imp__sub_8269DD18) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8269d5d0
	sub_8269D5D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d868
	sub_8269D868(ctx, base);
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

__attribute__((alias("__imp__sub_8269DD6C"))) PPC_WEAK_FUNC(sub_8269DD6C);
PPC_FUNC_IMPL(__imp__sub_8269DD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269DD70"))) PPC_WEAK_FUNC(sub_8269DD70);
PPC_FUNC_IMPL(__imp__sub_8269DD70) {
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
	// lwz r16,-31144(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -31144);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-31356
	r11.s64 = r11.s64 + -31356;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r10,r10,-31420
	ctx.r10.s64 = ctx.r10.s64 + -31420;
	// addi r9,r9,-31428
	ctx.r9.s64 = ctx.r9.s64 + -31428;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-100(r30)
	PPC_STORE_U32(r30.u32 + -100, r11.u32);
	// lwz r11,-96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -96);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-96(r11)
	PPC_STORE_U32(r11.u32 + -96, ctx.r10.u32);
	// lwz r11,-96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -96);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-96(r11)
	PPC_STORE_U32(r11.u32 + -96, ctx.r9.u32);
	// lwz r11,-96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -96);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-96
	ctx.r10.s64 = r11.s64 + -96;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-100(r11)
	PPC_STORE_U32(r11.u32 + -100, ctx.r10.u32);
	// lwz r11,-96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -96);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-140
	ctx.r10.s64 = r11.s64 + -140;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-100(r11)
	PPC_STORE_U32(r11.u32 + -100, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
loc_8269DDF8:
	// lwz r10,-52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -52);
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// blt cr6,0x8269ddf8
	if (cr6.lt) goto loc_8269DDF8;
	// addi r29,r30,-64
	r29.s64 = r30.s64 + -64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269dd18
	sub_8269DD18(ctx, base);
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269de3c
	if (cr0.eq) goto loc_8269DE3C;
	// lwz r11,-8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269DE3C:
	// lwz r4,-28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269de5c
	if (cr0.eq) goto loc_8269DE5C;
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269DE5C:
	// lwz r4,-40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -40);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269de7c
	if (cr0.eq) goto loc_8269DE7C;
	// lwz r11,-32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -32);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269DE7C:
	// lwz r4,-52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -52);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269de9c
	if (cr0.eq) goto loc_8269DE9C;
	// lwz r11,-44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -44);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269DE9C:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269debc
	if (cr0.eq) goto loc_8269DEBC;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269DEBC:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269DD78"))) PPC_WEAK_FUNC(sub_8269DD78);
PPC_FUNC_IMPL(__imp__sub_8269DD78) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-31356
	r11.s64 = r11.s64 + -31356;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r10,r10,-31420
	ctx.r10.s64 = ctx.r10.s64 + -31420;
	// addi r9,r9,-31428
	ctx.r9.s64 = ctx.r9.s64 + -31428;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-100(r30)
	PPC_STORE_U32(r30.u32 + -100, r11.u32);
	// lwz r11,-96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -96);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-96(r11)
	PPC_STORE_U32(r11.u32 + -96, ctx.r10.u32);
	// lwz r11,-96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -96);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-96(r11)
	PPC_STORE_U32(r11.u32 + -96, ctx.r9.u32);
	// lwz r11,-96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -96);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-96
	ctx.r10.s64 = r11.s64 + -96;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-100(r11)
	PPC_STORE_U32(r11.u32 + -100, ctx.r10.u32);
	// lwz r11,-96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -96);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-140
	ctx.r10.s64 = r11.s64 + -140;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-100(r11)
	PPC_STORE_U32(r11.u32 + -100, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
loc_8269DDF8:
	// lwz r10,-52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -52);
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// blt cr6,0x8269ddf8
	if (cr6.lt) goto loc_8269DDF8;
	// addi r29,r30,-64
	r29.s64 = r30.s64 + -64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269dd18
	sub_8269DD18(ctx, base);
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269de3c
	if (cr0.eq) goto loc_8269DE3C;
	// lwz r11,-8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269DE3C:
	// lwz r4,-28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269de5c
	if (cr0.eq) goto loc_8269DE5C;
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269DE5C:
	// lwz r4,-40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -40);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269de7c
	if (cr0.eq) goto loc_8269DE7C;
	// lwz r11,-32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -32);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269DE7C:
	// lwz r4,-52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -52);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269de9c
	if (cr0.eq) goto loc_8269DE9C;
	// lwz r11,-44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -44);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269DE9C:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269debc
	if (cr0.eq) goto loc_8269DEBC;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269DEBC:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269DEC4"))) PPC_WEAK_FUNC(sub_8269DEC4);
PPC_FUNC_IMPL(__imp__sub_8269DEC4) {
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
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
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

__attribute__((alias("__imp__sub_8269DEF4"))) PPC_WEAK_FUNC(sub_8269DEF4);
PPC_FUNC_IMPL(__imp__sub_8269DEF4) {
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
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
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

__attribute__((alias("__imp__sub_8269DF24"))) PPC_WEAK_FUNC(sub_8269DF24);
PPC_FUNC_IMPL(__imp__sub_8269DF24) {
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
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
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

__attribute__((alias("__imp__sub_8269DF54"))) PPC_WEAK_FUNC(sub_8269DF54);
PPC_FUNC_IMPL(__imp__sub_8269DF54) {
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
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
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

__attribute__((alias("__imp__sub_8269DF84"))) PPC_WEAK_FUNC(sub_8269DF84);
PPC_FUNC_IMPL(__imp__sub_8269DF84) {
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
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
	// addi r3,r11,84
	ctx.r3.s64 = r11.s64 + 84;
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

__attribute__((alias("__imp__sub_8269DFB4"))) PPC_WEAK_FUNC(sub_8269DFB4);
PPC_FUNC_IMPL(__imp__sub_8269DFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269DFB8"))) PPC_WEAK_FUNC(sub_8269DFB8);
PPC_FUNC_IMPL(__imp__sub_8269DFB8) {
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
	// bl 0x8269dd78
	sub_8269DD78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269dff0
	if (cr0.eq) goto loc_8269DFF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_8269DFF0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269DFFC"))) PPC_WEAK_FUNC(sub_8269DFFC);
PPC_FUNC_IMPL(__imp__sub_8269DFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269E000"))) PPC_WEAK_FUNC(sub_8269E000);
PPC_FUNC_IMPL(__imp__sub_8269E000) {
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269e030
	if (!cr0.eq) goto loc_8269E030;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8269e040
	goto loc_8269E040;
loc_8269E030:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269E040:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// bne cr6,0x8269e05c
	if (!cr6.eq) goto loc_8269E05C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8269E05C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
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

__attribute__((alias("__imp__sub_8269E084"))) PPC_WEAK_FUNC(sub_8269E084);
PPC_FUNC_IMPL(__imp__sub_8269E084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269E088"))) PPC_WEAK_FUNC(sub_8269E088);
PPC_FUNC_IMPL(__imp__sub_8269E088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8269e0c0
	if (cr6.eq) goto loc_8269E0C0;
	// bne 0x8269e0ac
	if (!cr0.eq) goto loc_8269E0AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8269e0bc
	goto loc_8269E0BC;
loc_8269E0AC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269E0BC:
	// b 0x821dbc00
	sub_821DBC00(ctx, base);
	return;
loc_8269E0C0:
	// bne 0x8269e0cc
	if (!cr0.eq) goto loc_8269E0CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8269e0dc
	goto loc_8269E0DC;
loc_8269E0CC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8269E0DC:
	// b 0x8269a690
	sub_8269A690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269E0E0"))) PPC_WEAK_FUNC(sub_8269E0E0);
PPC_FUNC_IMPL(__imp__sub_8269E0E0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// lfs f1,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r10.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269e13c
	if (!cr0.eq) goto loc_8269E13C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8269e14c
	goto loc_8269E14C;
loc_8269E13C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8269E14C:
	// bl 0x8269a690
	sub_8269A690(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,8340
	ctx.r6.s64 = r11.s64 + 8340;
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
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r31,240(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269e1ec
	if (cr0.eq) goto loc_8269E1EC;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,10624
	r28.s64 = r11.s64 + 10624;
loc_8269E1AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8269e1d4
	if (cr0.eq) goto loc_8269E1D4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82691520
	sub_82691520(ctx, base);
loc_8269E1D4:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269e1ac
	if (!cr0.eq) goto loc_8269E1AC;
loc_8269E1EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8269E1F8"))) PPC_WEAK_FUNC(sub_8269E1F8);
PPC_FUNC_IMPL(__imp__sub_8269E1F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269e228
	if (cr0.eq) goto loc_8269E228;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823663b0
	sub_823663B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8269E228:
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

__attribute__((alias("__imp__sub_8269E23C"))) PPC_WEAK_FUNC(sub_8269E23C);
PPC_FUNC_IMPL(__imp__sub_8269E23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269E240"))) PPC_WEAK_FUNC(sub_8269E240);
PPC_FUNC_IMPL(__imp__sub_8269E240) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269e2b0
	if (cr0.eq) goto loc_8269E2B0;
	// lwz r3,460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 460);
	// bl 0x8269bf68
	sub_8269BF68(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stb r30,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r30.u8);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269e2ac
	if (cr0.eq) goto loc_8269E2AC;
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
loc_8269E2AC:
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
loc_8269E2B0:
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

__attribute__((alias("__imp__sub_8269E2C8"))) PPC_WEAK_FUNC(sub_8269E2C8);
PPC_FUNC_IMPL(__imp__sub_8269E2C8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,2
	r11.s64 = 2;
	// stw r11,448(r31)
	PPC_STORE_U32(r31.u32 + 448, r11.u32);
	// bl 0x8269e1f8
	sub_8269E1F8(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8269e32c
	if (cr6.eq) goto loc_8269E32C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// lwz r11,464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lfs f0,116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 116);
	f0.f64 = double(temp.f32);
	// stfs f0,216(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 216, temp.u32);
	// lwz r11,444(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8269e32c
	if (!cr6.eq) goto loc_8269E32C;
	// lwz r11,464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// bl 0x821f87b8
	sub_821F87B8(ctx, base);
loc_8269E32C:
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

__attribute__((alias("__imp__sub_8269E340"))) PPC_WEAK_FUNC(sub_8269E340);
PPC_FUNC_IMPL(__imp__sub_8269E340) {
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
	// li r11,3
	r11.s64 = 3;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r11,448(r31)
	PPC_STORE_U32(r31.u32 + 448, r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269e380
	if (cr0.eq) goto loc_8269E380;
	// lwz r11,464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// bl 0x821bd9e8
	sub_821BD9E8(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
loc_8269E380:
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

__attribute__((alias("__imp__sub_8269E394"))) PPC_WEAK_FUNC(sub_8269E394);
PPC_FUNC_IMPL(__imp__sub_8269E394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269E398"))) PPC_WEAK_FUNC(sub_8269E398);
PPC_FUNC_IMPL(__imp__sub_8269E398) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
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

__attribute__((alias("__imp__sub_8269E3DC"))) PPC_WEAK_FUNC(sub_8269E3DC);
PPC_FUNC_IMPL(__imp__sub_8269E3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269E3E0"))) PPC_WEAK_FUNC(sub_8269E3E0);
PPC_FUNC_IMPL(__imp__sub_8269E3E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// b 0x8269e44c
	goto loc_8269E44C;
loc_8269E3E4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f2
	f0.f64 = double(float(f0.f64 * ctx.f2.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f3
	f0.f64 = double(float(f0.f64 * ctx.f3.f64));
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	f0.f64 = double(temp.f32);
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// stfs f0,44(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_8269E44C:
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x8269e3e4
	if (!cr6.eq) goto loc_8269E3E4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269E458"))) PPC_WEAK_FUNC(sub_8269E458);
PPC_FUNC_IMPL(__imp__sub_8269E458) {
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
	// bl 0x821e15d8
	sub_821E15D8(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r11,10708
	r31.s64 = r11.s64 + 10708;
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

__attribute__((alias("__imp__sub_8269E4B8"))) PPC_WEAK_FUNC(sub_8269E4B8);
PPC_FUNC_IMPL(__imp__sub_8269E4B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r11,10624
	r30.s64 = r11.s64 + 10624;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// bl 0x823173f0
	sub_823173F0(ctx, base);
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
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
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269E55C"))) PPC_WEAK_FUNC(sub_8269E55C);
PPC_FUNC_IMPL(__imp__sub_8269E55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269E560"))) PPC_WEAK_FUNC(sub_8269E560);
PPC_FUNC_IMPL(__imp__sub_8269E560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r6,r11,8340
	ctx.r6.s64 = r11.s64 + 8340;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r5,r11,1688
	ctx.r5.s64 = r11.s64 + 1688;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 148);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// li r5,400
	ctx.r5.s64 = 400;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stw r30,400(r11)
	PPC_STORE_U32(r11.u32 + 400, r30.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,444(r31)
	PPC_STORE_U32(r31.u32 + 444, r30.u32);
	// stw r28,460(r31)
	PPC_STORE_U32(r31.u32 + 460, r28.u32);
	// stw r29,464(r31)
	PPC_STORE_U32(r31.u32 + 464, r29.u32);
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// li r11,-1
	r11.s64 = -1;
	// stfs f0,440(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 440, temp.u32);
	// stw r11,452(r31)
	PPC_STORE_U32(r31.u32 + 452, r11.u32);
	// lbz r11,456(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 456);
	// rlwimi r11,r10,6,0,25
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFC0) | (r11.u64 & 0xFFFFFFFF0000003F);
	// stb r11,456(r31)
	PPC_STORE_U8(r31.u32 + 456, r11.u8);
	// bl 0x82150688
	sub_82150688(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x8269e458
	sub_8269E458(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// bl 0x821f9568
	sub_821F9568(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lfs f0,116(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 116);
	f0.f64 = double(temp.f32);
	// stfs f0,216(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 216, temp.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269e63c
	if (!cr0.eq) goto loc_8269E63C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8269e64c
	goto loc_8269E64C;
loc_8269E63C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269E64C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bne 0x8269e66c
	if (!cr0.eq) goto loc_8269E66C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8269E66C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269E688"))) PPC_WEAK_FUNC(sub_8269E688);
PPC_FUNC_IMPL(__imp__sub_8269E688) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8269e1f8
	sub_8269E1F8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269e6d4
	if (cr0.eq) goto loc_8269E6D4;
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
loc_8269E6D4:
	// li r30,0
	r30.s64 = 0;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// beq 0x8269e70c
	if (cr0.eq) goto loc_8269E70C;
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
loc_8269E70C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269e740
	if (cr0.eq) goto loc_8269E740;
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
loc_8269E740:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269e774
	if (cr0.eq) goto loc_8269E774;
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
loc_8269E774:
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
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

__attribute__((alias("__imp__sub_8269E790"))) PPC_WEAK_FUNC(sub_8269E790);
PPC_FUNC_IMPL(__imp__sub_8269E790) {
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
	// bl 0x8269e1f8
	sub_8269E1F8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269e7bc
	if (!cr0.eq) goto loc_8269E7BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8269e7cc
	goto loc_8269E7CC;
loc_8269E7BC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8269E7CC:
	// bl 0x8269a690
	sub_8269A690(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269e240
	sub_8269E240(ctx, base);
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

__attribute__((alias("__imp__sub_8269E7EC"))) PPC_WEAK_FUNC(sub_8269E7EC);
PPC_FUNC_IMPL(__imp__sub_8269E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269E7F0"))) PPC_WEAK_FUNC(sub_8269E7F0);
PPC_FUNC_IMPL(__imp__sub_8269E7F0) {
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
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r11,448(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 448);
	// clrlwi r30,r10,24
	r30.u64 = ctx.r10.u32 & 0xFF;
	// lbz r10,456(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 456);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r4,444(r31)
	PPC_STORE_U32(r31.u32 + 444, ctx.r4.u32);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r10,456(r31)
	PPC_STORE_U8(r31.u32 + 456, ctx.r10.u8);
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// bl 0x8269e1f8
	sub_8269E1F8(ctx, base);
	// lbz r11,456(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 456);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,452(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 452);
	// rlwinm r8,r11,25,7,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x826912e0
	sub_826912E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,452(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 452);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lfs f2,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82367438
	sub_82367438(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269e93c
	if (cr0.eq) goto loc_8269E93C;
	// lwz r11,448(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8269e8b4
	if (!cr6.eq) goto loc_8269E8B4;
	// lwz r11,464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// bl 0x821bd9e8
	sub_821BD9E8(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
	// b 0x8269e93c
	goto loc_8269E93C;
loc_8269E8B4:
	// clrlwi. r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8269e8c8
	if (cr0.eq) goto loc_8269E8C8;
	// lwz r11,464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// b 0x8269e8d8
	goto loc_8269E8D8;
loc_8269E8C8:
	// lwz r11,452(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 452);
	// lwz r10,464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_8269E8D8:
	// bl 0x821bd9e8
	sub_821BD9E8(ctx, base);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269e90c
	if (cr0.eq) goto loc_8269E90C;
	// lwz r11,464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
	// lwz r11,464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lfs f0,120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 120);
	f0.f64 = double(temp.f32);
	// stfs f0,216(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 216, temp.u32);
	// b 0x8269e934
	goto loc_8269E934;
loc_8269E90C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8269e920
	if (cr6.eq) goto loc_8269E920;
	// lwz r11,464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// b 0x8269e934
	goto loc_8269E934;
loc_8269E920:
	// lwz r11,452(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 452);
	// lwz r10,464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_8269E934:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x821f87b8
	sub_821F87B8(ctx, base);
loc_8269E93C:
	// lwz r11,448(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8269e950
	if (!cr6.eq) goto loc_8269E950;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269e2c8
	sub_8269E2C8(ctx, base);
loc_8269E950:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269E958"))) PPC_WEAK_FUNC(sub_8269E958);
PPC_FUNC_IMPL(__imp__sub_8269E958) {
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
	// lwz r3,460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 460);
	// bl 0x8269c610
	sub_8269C610(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// bne 0x8269e988
	if (!cr0.eq) goto loc_8269E988;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8269e998
	goto loc_8269E998;
loc_8269E988:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269E998:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bne 0x8269e9b8
	if (!cr0.eq) goto loc_8269E9B8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8269E9B8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// li r5,400
	ctx.r5.s64 = 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,400(r31)
	PPC_STORE_U32(r31.u32 + 400, r11.u32);
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

__attribute__((alias("__imp__sub_8269E9F8"))) PPC_WEAK_FUNC(sub_8269E9F8);
PPC_FUNC_IMPL(__imp__sub_8269E9F8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f2,212(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bne cr6,0x8269ea28
	if (!cr6.eq) goto loc_8269EA28;
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	cr6.compare(f0.f64, ctx.f2.f64);
	// beq cr6,0x8269ea34
	if (cr6.eq) goto loc_8269EA34;
loc_8269EA28:
	// lbz r11,456(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 456);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stb r11,456(r31)
	PPC_STORE_U8(r31.u32 + 456, r11.u8);
loc_8269EA34:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// stfs f2,32(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,-27476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27476);
	f0.f64 = double(temp.f32);
	// lfs f13,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f0,f3
	f0.f64 = double(float(-(ctx.f13.f64 * f0.f64 - ctx.f3.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f2
	cr6.compare(f0.f64, ctx.f2.f64);
	// blt cr6,0x8269ea64
	if (cr6.lt) goto loc_8269EA64;
	// addi r29,r1,212
	r29.s64 = ctx.r1.s64 + 212;
loc_8269EA64:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r30,-32242
	r30.s64 = -2113011712;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lfs f0,-31048(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -31048);
	f0.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821f72f0
	sub_821F72F0(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,-31048(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -31048);
	f0.f64 = double(temp.f32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x821f72f0
	sub_821F72F0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269EABC"))) PPC_WEAK_FUNC(sub_8269EABC);
PPC_FUNC_IMPL(__imp__sub_8269EABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269EAC0"))) PPC_WEAK_FUNC(sub_8269EAC0);
PPC_FUNC_IMPL(__imp__sub_8269EAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// lwz r4,444(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, r11.u32);
	// b 0x8269e7f0
	sub_8269E7F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269EAD0"))) PPC_WEAK_FUNC(sub_8269EAD0);
PPC_FUNC_IMPL(__imp__sub_8269EAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x8239d5d8
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f3
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f3.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f30,f4
	f30.f64 = ctx.f4.f64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f29,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f29.f64 = double(temp.f32);
	// lwz r11,464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,124(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 * ctx.f1.f64));
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8269f0f4
	if (cr6.eq) goto loc_8269F0F4;
	// lwz r11,448(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8269eb40
	if (cr6.eq) goto loc_8269EB40;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8269eb44
	if (!cr6.eq) goto loc_8269EB44;
loc_8269EB40:
	// li r11,1
	r11.s64 = 1;
loc_8269EB44:
	// clrlwi. r23,r11,24
	r23.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// beq 0x8269eb84
	if (cr0.eq) goto loc_8269EB84;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// lfs f0,11012(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11012);
	f0.f64 = double(temp.f32);
	// lwz r10,400(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 400);
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// stw r10,400(r11)
	PPC_STORE_U32(r11.u32 + 400, ctx.r10.u32);
	// blt cr6,0x8269eb78
	if (cr6.lt) goto loc_8269EB78;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,400(r11)
	PPC_STORE_U32(r11.u32 + 400, ctx.r10.u32);
loc_8269EB78:
	// lwz r10,400(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 400);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, temp.u32);
loc_8269EB84:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,456(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 456);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// fmr f25,f29
	ctx.fpscr.disableFlushMode();
	f25.f64 = f29.f64;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// rlwinm. r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f24,5736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5736);
	f24.f64 = double(temp.f32);
	// lfs f26,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f26.f64 = double(temp.f32);
	// bne 0x8269ebe8
	if (!cr0.eq) goto loc_8269EBE8;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8269efd8
	if (cr6.eq) goto loc_8269EFD8;
loc_8269EBE8:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// addi r3,r10,36
	ctx.r3.s64 = ctx.r10.s64 + 36;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f26,96(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f26,104(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// andi. r10,r9,191
	ctx.r10.u64 = ctx.r9.u64 & 191;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stb r10,456(r31)
	PPC_STORE_U8(r31.u32 + 456, ctx.r10.u8);
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// lwz r11,464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f27,136(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 136);
	f27.f64 = double(temp.f32);
	// lwz r9,264(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// fdivs f13,f0,f27
	ctx.f13.f64 = double(float(f0.f64 / f27.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f13.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x8269ec70
	if (!cr6.lt) goto loc_8269EC70;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8269EC70:
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r28,132(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// addi r30,r31,36
	r30.s64 = r31.s64 + 36;
	// lwz r9,216(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 216);
	// lwz r7,144(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// li r24,100
	r24.s64 = 100;
	// lwz r27,140(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// subf r8,r10,r28
	ctx.r8.s64 = r28.s64 - ctx.r10.s64;
	// lwz r10,400(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 400);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// addi r6,r10,100
	ctx.r6.s64 = ctx.r10.s64 + 100;
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// divw r7,r6,r24
	ctx.r7.s32 = ctx.r6.s32 / r24.s32;
	// add r26,r10,r9
	r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r10,r7,100
	ctx.r10.s64 = ctx.r7.s64 * 100;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fnmsubs f31,f13,f27,f0
	f31.f64 = double(float(-(ctx.f13.f64 * f27.f64 - f0.f64)));
	// lfsx f0,r10,r30
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	f0.f64 = double(temp.f32);
	// fadds f25,f0,f29
	f25.f64 = double(float(f0.f64 + f29.f64));
	// beq cr6,0x8269ed40
	if (cr6.eq) goto loc_8269ED40;
	// lwz r10,444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8269ed40
	if (!cr6.eq) goto loc_8269ED40;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// lfs f13,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f7,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmadds f0,f10,f30,f0
	f0.f64 = double(float(ctx.f10.f64 * f30.f64 + f0.f64));
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f13,f9,f30,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * f30.f64 + ctx.f13.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f12,f8,f30,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * f30.f64 + ctx.f12.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f11,f7,f30,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * f30.f64 + ctx.f11.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_8269ED40:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8269ed78
	if (!cr6.gt) goto loc_8269ED78;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
loc_8269ED50:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmr f2,f25
	ctx.f2.f64 = f25.f64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8269e3e0
	sub_8269E3E0(ctx, base);
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// bne 0x8269ed50
	if (!cr0.eq) goto loc_8269ED50;
loc_8269ED78:
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x8269edfc
	if (!cr6.lt) goto loc_8269EDFC;
	// subf r25,r29,r11
	r25.s64 = r11.s64 - r29.s64;
	// add r29,r25,r29
	r29.u64 = r25.u64 + r29.u64;
loc_8269ED8C:
	// fmuls f0,f31,f24
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 * f24.f64));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,400(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 400);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r11,r11,100
	r11.s64 = r11.s64 + 100;
	// divw r10,r11,r24
	ctx.r10.s32 = r11.s32 / r24.s32;
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r30
	temp.u32 = PPC_LOAD_U32(r11.u32 + r30.u32);
	f0.f64 = double(temp.f32);
	// fadds f28,f0,f29
	f28.f64 = double(float(f0.f64 + f29.f64));
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// bl 0x8269e3e0
	sub_8269E3E0(ctx, base);
	// fadds f31,f31,f27
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 + f27.f64));
	// fcmpu cr6,f25,f28
	cr6.compare(f25.f64, f28.f64);
	// bge cr6,0x8269edf4
	if (!cr6.lt) goto loc_8269EDF4;
	// fmr f25,f28
	f25.f64 = f28.f64;
loc_8269EDF4:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// bne 0x8269ed8c
	if (!cr0.eq) goto loc_8269ED8C;
loc_8269EDFC:
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// bge cr6,0x8269ee64
	if (!cr6.lt) goto loc_8269EE64;
	// fmuls f13,f31,f24
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 * f24.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lfs f0,11004(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11004);
	f0.f64 = double(temp.f32);
	// lwz r11,400(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 400);
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 + f0.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f13
	f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,100
	r11.s64 = r11.s64 + 100;
	// divw r10,r11,r24
	ctx.r10.s32 = r11.s32 / r24.s32;
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r30
	temp.u32 = PPC_LOAD_U32(r11.u32 + r30.u32);
	f0.f64 = double(temp.f32);
	// fmadds f2,f0,f24,f29
	ctx.f2.f64 = double(float(f0.f64 * f24.f64 + f29.f64));
	// bl 0x8269e3e0
	sub_8269E3E0(ctx, base);
	// fadds f31,f31,f27
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 + f27.f64));
loc_8269EE64:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8269e3e0
	sub_8269E3E0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8269efd8
	if (cr6.eq) goto loc_8269EFD8;
	// lwz r11,444(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8269efd8
	if (!cr6.eq) goto loc_8269EFD8;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8269ef28
	if (!cr6.eq) goto loc_8269EF28;
	// lwz r11,464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// bl 0x8269e4b8
	sub_8269E4B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// bne 0x8269eedc
	if (!cr0.eq) goto loc_8269EEDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8269eeec
	goto loc_8269EEEC;
loc_8269EEDC:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269EEEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bne 0x8269ef0c
	if (!cr0.eq) goto loc_8269EF0C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8269EF0C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,212(r11)
	PPC_STORE_U8(r11.u32 + 212, ctx.r10.u8);
loc_8269EF28:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f26,96(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r3,76
	ctx.r8.s64 = ctx.r3.s64 + 76;
	// stfs f26,104(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fadds f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lwz r4,240(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269efc0
	if (cr0.eq) goto loc_8269EFC0;
loc_8269EF98:
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x8269efb4
	if (!cr6.gt) goto loc_8269EFB4;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82212448
	sub_82212448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8269efb8
	goto loc_8269EFB8;
loc_8269EFB4:
	// lwz r4,116(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
loc_8269EFB8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8269ef98
	if (!cr6.eq) goto loc_8269EF98;
loc_8269EFC0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	f0.f64 = double(temp.f32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// fmuls f0,f30,f0
	f0.f64 = double(float(f30.f64 * f0.f64));
	// stfs f0,348(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 348, temp.u32);
	// stfs f0,352(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 352, temp.u32);
loc_8269EFD8:
	// lwz r11,444(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8269f040
	if (!cr6.eq) goto loc_8269F040;
	// lwz r10,464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r11,52(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lfs f13,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// fsubs f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f10,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - f0.f64));
	// fmadds f13,f9,f30,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * f30.f64 + ctx.f13.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f12,f8,f30,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * f30.f64 + ctx.f12.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f11,f7,f30,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * f30.f64 + ctx.f11.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f0,f10,f30,f0
	f0.f64 = double(float(ctx.f10.f64 * f30.f64 + f0.f64));
	// b 0x8269f080
	goto loc_8269F080;
loc_8269F040:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
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
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
loc_8269F080:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f13,-31044(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31044);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x821f7320
	sub_821F7320(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x821f7320
	sub_821F7320(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8269f0f0
	if (cr6.eq) goto loc_8269F0F0;
	// fsubs f0,f25,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f25.f64 - f29.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lfs f13,-27416(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f24,f29
	ctx.f12.f64 = double(float(f0.f64 * f24.f64 + f29.f64));
	// lfs f0,440(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 440);
	f0.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fmadds f0,f12,f13,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + f0.f64));
	// stfs f0,440(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 440, temp.u32);
	// lfs f13,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,216(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 216, temp.u32);
	// b 0x8269f0f4
	goto loc_8269F0F4;
loc_8269F0F0:
	// stfs f29,440(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 440, temp.u32);
loc_8269F0F4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8239d624
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8269F104"))) PPC_WEAK_FUNC(sub_8269F104);
PPC_FUNC_IMPL(__imp__sub_8269F104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269F108"))) PPC_WEAK_FUNC(sub_8269F108);
PPC_FUNC_IMPL(__imp__sub_8269F108) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x8269e1f8
	sub_8269E1F8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x823632d8
	sub_823632D8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r26,0
	r26.s64 = 0;
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,452(r31)
	PPC_STORE_U32(r31.u32 + 452, r30.u32);
	// lfs f3,-20180(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20180);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r26,448(r31)
	PPC_STORE_U32(r31.u32 + 448, r26.u32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lbz r11,456(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 456);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// rlwimi r11,r28,7,17,24
	r11.u64 = (__builtin_rotateleft32(r28.u32, 7) & 0x7F80) | (r11.u64 & 0xFFFFFFFFFFFF807F);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stb r11,456(r31)
	PPC_STORE_U8(r31.u32 + 456, r11.u8);
	// bl 0x8269e9f8
	sub_8269E9F8(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269f19c
	if (cr0.eq) goto loc_8269F19C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269e958
	sub_8269E958(ctx, base);
loc_8269F19C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r26,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r26.u8);
	// bl 0x8269e7f0
	sub_8269E7F0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r10,52
	ctx.r3.s64 = ctx.r10.s64 + 52;
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r3,76
	ctx.r8.s64 = ctx.r3.s64 + 76;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269f208
	if (!cr0.eq) goto loc_8269F208;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// b 0x8269f218
	goto loc_8269F218;
loc_8269F208:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8269F218:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// addi r4,r25,52
	ctx.r4.s64 = r25.s64 + 52;
	// bne cr6,0x8269f234
	if (!cr6.eq) goto loc_8269F234;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8269F234:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
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
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8269F278"))) PPC_WEAK_FUNC(sub_8269F278);
PPC_FUNC_IMPL(__imp__sub_8269F278) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r10,-31040
	ctx.r4.s64 = ctx.r10.s64 + -31040;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
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
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82699ec0
	sub_82699EC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269F2F8"))) PPC_WEAK_FUNC(sub_8269F2F8);
PPC_FUNC_IMPL(__imp__sub_8269F2F8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f12,24112(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x8269f324
	if (!cr6.lt) goto loc_8269F324;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
loc_8269F324:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8269f330
	if (cr6.lt) goto loc_8269F330;
	// li r11,0
	r11.s64 = 0;
loc_8269F330:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269F338"))) PPC_WEAK_FUNC(sub_8269F338);
PPC_FUNC_IMPL(__imp__sub_8269F338) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r11,2116
	r30.s64 = r11.s64 + 2116;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// bl 0x823173f0
	sub_823173F0(ctx, base);
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
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
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269F3DC"))) PPC_WEAK_FUNC(sub_8269F3DC);
PPC_FUNC_IMPL(__imp__sub_8269F3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269F3E0"))) PPC_WEAK_FUNC(sub_8269F3E0);
PPC_FUNC_IMPL(__imp__sub_8269F3E0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r11,1384
	r30.s64 = r11.s64 + 1384;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// bl 0x823173f0
	sub_823173F0(ctx, base);
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
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
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269F484"))) PPC_WEAK_FUNC(sub_8269F484);
PPC_FUNC_IMPL(__imp__sub_8269F484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269F488"))) PPC_WEAK_FUNC(sub_8269F488);
PPC_FUNC_IMPL(__imp__sub_8269F488) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r11,2516
	r30.s64 = r11.s64 + 2516;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// bl 0x823173f0
	sub_823173F0(ctx, base);
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
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
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269F52C"))) PPC_WEAK_FUNC(sub_8269F52C);
PPC_FUNC_IMPL(__imp__sub_8269F52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269F530"))) PPC_WEAK_FUNC(sub_8269F530);
PPC_FUNC_IMPL(__imp__sub_8269F530) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269f59c
	if (cr0.eq) goto loc_8269F59C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8269f5cc
	if (!cr0.eq) goto loc_8269F5CC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269f594
	if (cr0.eq) goto loc_8269F594;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8269f5d0
	goto loc_8269F5D0;
loc_8269F594:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8269f5d0
	goto loc_8269F5D0;
loc_8269F59C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8269f594
	if (!cr0.eq) goto loc_8269F594;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne 0x8269f5d0
	if (!cr0.eq) goto loc_8269F5D0;
loc_8269F5CC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8269F5D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269F5D8"))) PPC_WEAK_FUNC(sub_8269F5D8);
PPC_FUNC_IMPL(__imp__sub_8269F5D8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r29,212(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// addi r31,r30,-64
	r31.s64 = r30.s64 + -64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// b 0x8269f620
	goto loc_8269F620;
loc_8269F610:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r30,r31
	r30.u64 = r31.u64;
	// addi r31,r31,-64
	r31.s64 = r31.s64 + -64;
loc_8269F620:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne 0x8269f610
	if (!cr0.eq) goto loc_8269F610;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269F650"))) PPC_WEAK_FUNC(sub_8269F650);
PPC_FUNC_IMPL(__imp__sub_8269F650) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
	// b 0x8269f6c4
	goto loc_8269F6C4;
loc_8269F684:
	// rlwinm r11,r30,6,0,25
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// add r28,r11,r29
	r28.u64 = r11.u64 + r29.u64;
	// lwz r11,244(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269f6d4
	if (cr0.eq) goto loc_8269F6D4;
	// rlwinm r11,r31,6,0,25
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0xFFFFFFC0;
	// li r5,64
	ctx.r5.s64 = 64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
loc_8269F6C4:
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(r31.s32, r27.s32, xer);
	// addze r30,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r30.s64 = temp.s64;
	// bgt cr6,0x8269f684
	if (cr6.gt) goto loc_8269F684;
loc_8269F6D4:
	// rlwinm r11,r31,6,0,25
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8269F6F0"))) PPC_WEAK_FUNC(sub_8269F6F0);
PPC_FUNC_IMPL(__imp__sub_8269F6F0) {
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
	// lwz r16,-31016(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -31016);
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
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269f740
	if (cr0.eq) goto loc_8269F740;
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
loc_8269F740:
	// li r29,0
	r29.s64 = 0;
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// beq 0x8269f778
	if (cr0.eq) goto loc_8269F778;
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
loc_8269F778:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269f7ac
	if (cr0.eq) goto loc_8269F7AC;
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
loc_8269F7AC:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269f7d0
	if (cr0.eq) goto loc_8269F7D0;
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
loc_8269F7D0:
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269f804
	if (cr0.eq) goto loc_8269F804;
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
loc_8269F804:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269f838
	if (cr0.eq) goto loc_8269F838;
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
loc_8269F838:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269f86c
	if (cr0.eq) goto loc_8269F86C;
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
loc_8269F86C:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269f890
	if (cr0.eq) goto loc_8269F890;
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
loc_8269F890:
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// stw r29,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269f8c4
	if (cr0.eq) goto loc_8269F8C4;
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
loc_8269F8C4:
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// stw r29,100(r30)
	PPC_STORE_U32(r30.u32 + 100, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269f8f8
	if (cr0.eq) goto loc_8269F8F8;
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
loc_8269F8F8:
	// stw r29,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,140
	ctx.r3.s64 = r30.s64 + 140;
	// bl 0x821bce48
	sub_821BCE48(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269F6F8"))) PPC_WEAK_FUNC(sub_8269F6F8);
PPC_FUNC_IMPL(__imp__sub_8269F6F8) {
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
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269f740
	if (cr0.eq) goto loc_8269F740;
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
loc_8269F740:
	// li r29,0
	r29.s64 = 0;
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// beq 0x8269f778
	if (cr0.eq) goto loc_8269F778;
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
loc_8269F778:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269f7ac
	if (cr0.eq) goto loc_8269F7AC;
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
loc_8269F7AC:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269f7d0
	if (cr0.eq) goto loc_8269F7D0;
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
loc_8269F7D0:
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269f804
	if (cr0.eq) goto loc_8269F804;
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
loc_8269F804:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269f838
	if (cr0.eq) goto loc_8269F838;
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
loc_8269F838:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269f86c
	if (cr0.eq) goto loc_8269F86C;
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
loc_8269F86C:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269f890
	if (cr0.eq) goto loc_8269F890;
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
loc_8269F890:
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// stw r29,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269f8c4
	if (cr0.eq) goto loc_8269F8C4;
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
loc_8269F8C4:
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// stw r29,100(r30)
	PPC_STORE_U32(r30.u32 + 100, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269f8f8
	if (cr0.eq) goto loc_8269F8F8;
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
loc_8269F8F8:
	// stw r29,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,140
	ctx.r3.s64 = r30.s64 + 140;
	// bl 0x821bce48
	sub_821BCE48(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269F910"))) PPC_WEAK_FUNC(sub_8269F910);
PPC_FUNC_IMPL(__imp__sub_8269F910) {
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
	// addi r3,r11,140
	ctx.r3.s64 = r11.s64 + 140;
	// bl 0x821be2e0
	sub_821BE2E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269F93C"))) PPC_WEAK_FUNC(sub_8269F93C);
PPC_FUNC_IMPL(__imp__sub_8269F93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269F940"))) PPC_WEAK_FUNC(sub_8269F940);
PPC_FUNC_IMPL(__imp__sub_8269F940) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x8269f99c
	if (cr6.eq) goto loc_8269F99C;
loc_8269F960:
	// ld r11,56(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// ld r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 48);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// bl 0x8269f5d8
	sub_8269F5D8(ctx, base);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8269f960
	if (!cr6.eq) goto loc_8269F960;
loc_8269F99C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269F9A4"))) PPC_WEAK_FUNC(sub_8269F9A4);
PPC_FUNC_IMPL(__imp__sub_8269F9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269F9A8"))) PPC_WEAK_FUNC(sub_8269F9A8);
PPC_FUNC_IMPL(__imp__sub_8269F9A8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r21,340(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// std r27,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, r27.u64);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r26,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, r26.u64);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// std r25,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, r25.u64);
	// std r24,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, r24.u64);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// std r23,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, r23.u64);
	// mr r22,r30
	r22.u64 = r30.u64;
	// b 0x8269fa38
	goto loc_8269FA38;
loc_8269F9F8:
	// rlwinm r11,r31,6,0,25
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// addi r4,r3,-64
	ctx.r4.s64 = ctx.r3.s64 + -64;
	// mtctr r21
	ctr.u64 = r21.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269fa18
	if (cr0.eq) goto loc_8269FA18;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_8269FA18:
	// rlwinm r10,r31,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r30,6,0,25
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8269FA38:
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x8269f9f8
	if (cr6.lt) goto loc_8269F9F8;
	// bne cr6,0x8269fa68
	if (!cr6.eq) goto loc_8269FA68;
	// rlwinm r11,r31,6,0,25
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r30,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + r29.u64;
	// addi r4,r11,-64
	ctx.r4.s64 = r11.s64 + -64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r30,r31,-1
	r30.s64 = r31.s64 + -1;
loc_8269FA68:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r21.u32);
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269f650
	sub_8269F650(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_8269FAA8"))) PPC_WEAK_FUNC(sub_8269FAA8);
PPC_FUNC_IMPL(__imp__sub_8269FAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r29,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, r29.u64);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// std r28,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, r28.u64);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// std r27,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, r27.u64);
	// li r5,64
	ctx.r5.s64 = 64;
	// std r26,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, r26.u64);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// std r25,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, r25.u64);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,308(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// srawi r5,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r5.s64 = r11.s32 >> 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269f9a8
	sub_8269F9A8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8269FB3C"))) PPC_WEAK_FUNC(sub_8269FB3C);
PPC_FUNC_IMPL(__imp__sub_8269FB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269FB40"))) PPC_WEAK_FUNC(sub_8269FB40);
PPC_FUNC_IMPL(__imp__sub_8269FB40) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// subf r11,r29,r4
	r11.s64 = ctx.r4.s64 - r29.s64;
	// srawi r28,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r28.s64 = r11.s32 >> 6;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// blt cr6,0x8269fbfc
	if (cr6.lt) goto loc_8269FBFC;
	// addi r11,r28,-2
	r11.s64 = r28.s64 + -2;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// li r5,24
	ctx.r5.s64 = 24;
	// addze r30,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r30.s64 = temp.s64;
	// rlwinm r11,r30,6,0,25
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// bl 0x8269f9a8
	sub_8269F9A8(ctx, base);
	// b 0x8269fbf4
	goto loc_8269FBF4;
loc_8269FBB4:
	// addi r31,r31,-64
	r31.s64 = r31.s64 + -64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// bl 0x8269f9a8
	sub_8269F9A8(ctx, base);
loc_8269FBF4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x8269fbb4
	if (!cr6.eq) goto loc_8269FBB4;
loc_8269FBFC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8269FC04"))) PPC_WEAK_FUNC(sub_8269FC04);
PPC_FUNC_IMPL(__imp__sub_8269FC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269FC08"))) PPC_WEAK_FUNC(sub_8269FC08);
PPC_FUNC_IMPL(__imp__sub_8269FC08) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// addi r31,r4,-64
	r31.s64 = ctx.r4.s64 + -64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// bl 0x8269faa8
	sub_8269FAA8(ctx, base);
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

__attribute__((alias("__imp__sub_8269FC7C"))) PPC_WEAK_FUNC(sub_8269FC7C);
PPC_FUNC_IMPL(__imp__sub_8269FC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269FC80"))) PPC_WEAK_FUNC(sub_8269FC80);
PPC_FUNC_IMPL(__imp__sub_8269FC80) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,276(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// std r5,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r5.u64);
	// std r6,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
	// std r7,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// std r8,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// std r9,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// std r10,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r10.u64);
	// b 0x8269fcb8
	goto loc_8269FCB8;
loc_8269FCB4:
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
loc_8269FCB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8269fcb4
	if (!cr0.eq) goto loc_8269FCB4;
loc_8269FCD0:
	// addi r30,r30,-64
	r30.s64 = r30.s64 + -64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8269fcd0
	if (!cr0.eq) goto loc_8269FCD0;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x8269fd28
	if (!cr6.lt) goto loc_8269FD28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// b 0x8269fcb4
	goto loc_8269FCB4;
loc_8269FD28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269FD34"))) PPC_WEAK_FUNC(sub_8269FD34);
PPC_FUNC_IMPL(__imp__sub_8269FD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269FD38"))) PPC_WEAK_FUNC(sub_8269FD38);
PPC_FUNC_IMPL(__imp__sub_8269FD38) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r30,244(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// std r7,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// std r8,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r8.u64);
	// std r9,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// std r10,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r10.u64);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269fdc8
	if (cr0.eq) goto loc_8269FDC8;
	// subf r11,r28,r31
	r11.s64 = r31.s64 - r28.s64;
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// srawi. r30,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r30.s64 = r11.s32 >> 6;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x8269fdb4
	if (!cr0.gt) goto loc_8269FDB4;
	// addi r29,r31,-64
	r29.s64 = r31.s64 + -64;
loc_8269FD94:
	// addi r31,r31,-64
	r31.s64 = r31.s64 + -64;
	// addi r29,r29,-64
	r29.s64 = r29.s64 + -64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bgt 0x8269fd94
	if (cr0.gt) goto loc_8269FD94;
loc_8269FDB4:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// b 0x8269fdf8
	goto loc_8269FDF8;
loc_8269FDC8:
	// ld r11,232(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// ld r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// ld r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// ld r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// ld r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// bl 0x8269f5d8
	sub_8269F5D8(ctx, base);
loc_8269FDF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269FE00"))) PPC_WEAK_FUNC(sub_8269FE00);
PPC_FUNC_IMPL(__imp__sub_8269FE00) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x8269fe6c
	if (cr6.eq) goto loc_8269FE6C;
	// addi r31,r30,64
	r31.s64 = r30.s64 + 64;
	// b 0x8269fe64
	goto loc_8269FE64;
loc_8269FE28:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// ld r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// ld r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// ld r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// bl 0x8269fd38
	sub_8269FD38(ctx, base);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
loc_8269FE64:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x8269fe28
	if (!cr6.eq) goto loc_8269FE28;
loc_8269FE6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269FE74"))) PPC_WEAK_FUNC(sub_8269FE74);
PPC_FUNC_IMPL(__imp__sub_8269FE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269FE78"))) PPC_WEAK_FUNC(sub_8269FE78);
PPC_FUNC_IMPL(__imp__sub_8269FE78) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8269fb40
	sub_8269FB40(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bge cr6,0x8269ff14
	if (!cr6.lt) goto loc_8269FF14;
loc_8269FEB0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269ff08
	if (cr0.eq) goto loc_8269FF08;
	// li r11,0
	r11.s64 = 0;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// bl 0x8269faa8
	sub_8269FAA8(ctx, base);
loc_8269FF08:
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// blt cr6,0x8269feb0
	if (cr6.lt) goto loc_8269FEB0;
loc_8269FF14:
	// subf r31,r29,r30
	r31.s64 = r30.s64 - r29.s64;
	// b 0x8269ff38
	goto loc_8269FF38;
loc_8269FF1C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269fc08
	sub_8269FC08(ctx, base);
	// addi r31,r31,-64
	r31.s64 = r31.s64 + -64;
	// addi r30,r30,-64
	r30.s64 = r30.s64 + -64;
loc_8269FF38:
	// rlwinm r11,r31,0,0,25
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFC0;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// bgt cr6,0x8269ff1c
	if (cr6.gt) goto loc_8269FF1C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8269FF4C"))) PPC_WEAK_FUNC(sub_8269FF4C);
PPC_FUNC_IMPL(__imp__sub_8269FF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269FF50"))) PPC_WEAK_FUNC(sub_8269FF50);
PPC_FUNC_IMPL(__imp__sub_8269FF50) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// subf r11,r3,r30
	r11.s64 = r30.s64 - ctx.r3.s64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// rlwinm r11,r11,0,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,1024
	cr6.compare<int32_t>(r11.s32, 1024, xer);
	// ble cr6,0x8269ffa0
	if (!cr6.gt) goto loc_8269FFA0;
	// addi r29,r3,1024
	r29.s64 = ctx.r3.s64 + 1024;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8269fe00
	sub_8269FE00(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269f940
	sub_8269F940(ctx, base);
	// b 0x8269ffa8
	goto loc_8269FFA8;
loc_8269FFA0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8269fe00
	sub_8269FE00(ctx, base);
loc_8269FFA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269FFB0"))) PPC_WEAK_FUNC(sub_8269FFB0);
PPC_FUNC_IMPL(__imp__sub_8269FFB0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// subf r11,r29,r30
	r11.s64 = r30.s64 - r29.s64;
	// b 0x826a0064
	goto loc_826A0064;
loc_8269FFD4:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq cr6,0x826a0074
	if (cr6.eq) goto loc_826A0074;
	// subf r11,r29,r30
	r11.s64 = r30.s64 - r29.s64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// addi r5,r30,-64
	ctx.r5.s64 = r30.s64 + -64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x8269f530
	sub_8269F530(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// ld r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// ld r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// ld r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// bl 0x8269fc80
	sub_8269FC80(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8269ffb0
	sub_8269FFB0(ctx, base);
	// subf r11,r29,r31
	r11.s64 = r31.s64 - r29.s64;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_826A0064:
	// rlwinm r11,r11,0,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmpwi cr6,r11,1024
	cr6.compare<int32_t>(r11.s32, 1024, xer);
	// bgt cr6,0x8269ffd4
	if (cr6.gt) goto loc_8269FFD4;
	// b 0x826a0088
	goto loc_826A0088;
loc_826A0074:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8269fe78
	sub_8269FE78(ctx, base);
loc_826A0088:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826A0090"))) PPC_WEAK_FUNC(sub_826A0090);
PPC_FUNC_IMPL(__imp__sub_826A0090) {
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
	// beq cr6,0x826a00f8
	if (cr6.eq) goto loc_826A00F8;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// b 0x826a00c8
	goto loc_826A00C8;
loc_826A00C0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
loc_826A00C8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x826a00c0
	if (!cr6.eq) goto loc_826A00C0;
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
	// bl 0x8269ffb0
	sub_8269FFB0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ff50
	sub_8269FF50(ctx, base);
loc_826A00F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A0100"))) PPC_WEAK_FUNC(sub_826A0100);
PPC_FUNC_IMPL(__imp__sub_826A0100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30948
	ctx.r4.s64 = r11.s64 + -30948;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// lwz r11,264(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// addi r30,r31,140
	r30.s64 = r31.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,216
	ctx.r4.s64 = r11.s64 + 216;
	// bl 0x821bbf80
	sub_821BBF80(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r11,-3336
	ctx.r5.s64 = r11.s64 + -3336;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x826a0090
	sub_826A0090(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r4,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x821bce48
	sub_821BCE48(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b37d8
	sub_822B37D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,20
	r11.s64 = 20;
	// bne 0x826a018c
	if (!cr0.eq) goto loc_826A018C;
	// li r11,30
	r11.s64 = 30;
loc_826A018C:
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32336
	ctx.r4.s64 = r11.s64 + 32336;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r30,r10,27816
	r30.s64 = ctx.r10.s64 + 27816;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r4,r11,32324
	ctx.r4.s64 = r11.s64 + 32324;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lwa r11,132(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 132));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f13,-30952(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30952);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A0264"))) PPC_WEAK_FUNC(sub_826A0264);
PPC_FUNC_IMPL(__imp__sub_826A0264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A0268"))) PPC_WEAK_FUNC(sub_826A0268);
PPC_FUNC_IMPL(__imp__sub_826A0268) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-30536(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -30536);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-31028
	ctx.r4.s64 = r11.s64 + -31028;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,27816
	ctx.r4.s64 = r11.s64 + 27816;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-30560
	ctx.r4.s64 = r11.s64 + -30560;
	// stw r10,112(r30)
	PPC_STORE_U32(r30.u32 + 112, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stfs f1,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 116, temp.u32);
	// addi r4,r11,-30584
	ctx.r4.s64 = r11.s64 + -30584;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stfs f1,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 120, temp.u32);
	// addi r4,r11,-30588
	ctx.r4.s64 = r11.s64 + -30588;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-30600
	ctx.r4.s64 = r11.s64 + -30600;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,124(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 124, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
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
	// li r24,0
	r24.s64 = 0;
	// stfs f1,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 128, temp.u32);
	// stw r24,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r24.u32);
	// stw r24,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r24.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r28,152(r30)
	PPC_STORE_U32(r30.u32 + 152, r28.u32);
	// mr r27,r24
	r27.u64 = r24.u64;
	// addi r28,r11,-30612
	r28.s64 = r11.s64 + -30612;
	// stw r29,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r29.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r26,r30
	r26.u64 = r30.u64;
	// addi r25,r11,32668
	r25.s64 = r11.s64 + 32668;
loc_826A03E0:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269f278
	sub_8269F278(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// bl 0x8269f278
	sub_8269F278(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stw r3,20(r26)
	PPC_STORE_U32(r26.u32 + 20, ctx.r3.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpwi cr6,r27,5
	cr6.compare<int32_t>(r27.s32, 5, xer);
	// blt cr6,0x826a03e0
	if (cr6.lt) goto loc_826A03E0;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30628
	ctx.r4.s64 = r11.s64 + -30628;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30644
	ctx.r4.s64 = r11.s64 + -30644;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30660
	ctx.r4.s64 = r11.s64 + -30660;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r10.u32);
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30680
	ctx.r4.s64 = r11.s64 + -30680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30700
	ctx.r4.s64 = r11.s64 + -30700;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30720
	ctx.r4.s64 = r11.s64 + -30720;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30744
	ctx.r4.s64 = r11.s64 + -30744;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r10.u32);
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30764
	ctx.r4.s64 = r11.s64 + -30764;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// bl 0x8269f338
	sub_8269F338(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30780
	ctx.r4.s64 = r11.s64 + -30780;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r10.u32);
	// bl 0x82124710
	sub_82124710(ctx, base);
	// bl 0x8269f3e0
	sub_8269F3E0(ctx, base);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// stw r3,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,36
	ctx.r4.s64 = r11.s64 + 36;
	// bne 0x826a0530
	if (!cr0.eq) goto loc_826A0530;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_826A0530:
	// bl 0x821b4ad8
	sub_821B4AD8(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30804
	ctx.r4.s64 = r11.s64 + -30804;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// bl 0x8269f338
	sub_8269F338(ctx, base);
	// stw r3,76(r30)
	PPC_STORE_U32(r30.u32 + 76, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r26,r11,2016
	r26.s64 = r11.s64 + 2016;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r25,r11,920
	r25.s64 = r11.s64 + 920;
	// bl 0x823173f0
	sub_823173F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r27.u32);
	// addi r4,r11,-30828
	ctx.r4.s64 = r11.s64 + -30828;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82124710
	sub_82124710(ctx, base);
	// bl 0x8269f3e0
	sub_8269F3E0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30852
	ctx.r4.s64 = r11.s64 + -30852;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r10.u32);
	// bl 0x822ac138
	sub_822AC138(ctx, base);
	// bl 0x8269f488
	sub_8269F488(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r11,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r11.u32);
	// bl 0x821bd9e8
	sub_821BD9E8(ctx, base);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,36
	ctx.r4.s64 = r11.s64 + 36;
	// bne 0x826a0628
	if (!cr0.eq) goto loc_826A0628;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_826A0628:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x821b4ad8
	sub_821B4AD8(ctx, base);
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// bl 0x82202350
	sub_82202350(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30876
	ctx.r4.s64 = r11.s64 + -30876;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// bl 0x8269f338
	sub_8269F338(ctx, base);
	// stw r3,92(r30)
	PPC_STORE_U32(r30.u32 + 92, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823173f0
	sub_823173F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r27.u32);
	// addi r4,r11,-30900
	ctx.r4.s64 = r11.s64 + -30900;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822ac138
	sub_822AC138(ctx, base);
	// bl 0x8269f488
	sub_8269F488(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// stw r11,100(r30)
	PPC_STORE_U32(r30.u32 + 100, r11.u32);
	// bl 0x821bd9e8
	sub_821BD9E8(ctx, base);
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x82202350
	sub_82202350(ctx, base);
	// bl 0x82150688
	sub_82150688(ctx, base);
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// stw r3,108(r30)
	PPC_STORE_U32(r30.u32 + 108, ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a0714
	if (!cr0.eq) goto loc_826A0714;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x826a0724
	goto loc_826A0724;
loc_826A0714:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_826A0724:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a0740
	if (!cr0.eq) goto loc_826A0740;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x826a0750
	goto loc_826A0750;
loc_826A0740:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_826A0750:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a0770
	if (!cr0.eq) goto loc_826A0770;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x826a0780
	goto loc_826A0780;
loc_826A0770:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_826A0780:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30916
	ctx.r4.s64 = r11.s64 + -30916;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82251eb8
	sub_82251EB8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r11.u32);
	// bl 0x826a0100
	sub_826A0100(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30936
	ctx.r4.s64 = r11.s64 + -30936;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x826a07d4
	if (!cr0.eq) goto loc_826A07D4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x826a07e4
	goto loc_826A07E4;
loc_826A07D4:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_826A07E4:
	// bl 0x8269a690
	sub_8269A690(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_826A0270"))) PPC_WEAK_FUNC(sub_826A0270);
PPC_FUNC_IMPL(__imp__sub_826A0270) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-31028
	ctx.r4.s64 = r11.s64 + -31028;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,27816
	ctx.r4.s64 = r11.s64 + 27816;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-30560
	ctx.r4.s64 = r11.s64 + -30560;
	// stw r10,112(r30)
	PPC_STORE_U32(r30.u32 + 112, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stfs f1,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 116, temp.u32);
	// addi r4,r11,-30584
	ctx.r4.s64 = r11.s64 + -30584;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stfs f1,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 120, temp.u32);
	// addi r4,r11,-30588
	ctx.r4.s64 = r11.s64 + -30588;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-30600
	ctx.r4.s64 = r11.s64 + -30600;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,124(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 124, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
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
	// li r24,0
	r24.s64 = 0;
	// stfs f1,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 128, temp.u32);
	// stw r24,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r24.u32);
	// stw r24,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r24.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r28,152(r30)
	PPC_STORE_U32(r30.u32 + 152, r28.u32);
	// mr r27,r24
	r27.u64 = r24.u64;
	// addi r28,r11,-30612
	r28.s64 = r11.s64 + -30612;
	// stw r29,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r29.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r26,r30
	r26.u64 = r30.u64;
	// addi r25,r11,32668
	r25.s64 = r11.s64 + 32668;
loc_826A03E0:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269f278
	sub_8269F278(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// bl 0x8269f278
	sub_8269F278(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stw r3,20(r26)
	PPC_STORE_U32(r26.u32 + 20, ctx.r3.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpwi cr6,r27,5
	cr6.compare<int32_t>(r27.s32, 5, xer);
	// blt cr6,0x826a03e0
	if (cr6.lt) goto loc_826A03E0;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30628
	ctx.r4.s64 = r11.s64 + -30628;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30644
	ctx.r4.s64 = r11.s64 + -30644;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30660
	ctx.r4.s64 = r11.s64 + -30660;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r10.u32);
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30680
	ctx.r4.s64 = r11.s64 + -30680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30700
	ctx.r4.s64 = r11.s64 + -30700;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30720
	ctx.r4.s64 = r11.s64 + -30720;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30744
	ctx.r4.s64 = r11.s64 + -30744;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r10.u32);
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30764
	ctx.r4.s64 = r11.s64 + -30764;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// bl 0x8269f338
	sub_8269F338(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30780
	ctx.r4.s64 = r11.s64 + -30780;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r10.u32);
	// bl 0x82124710
	sub_82124710(ctx, base);
	// bl 0x8269f3e0
	sub_8269F3E0(ctx, base);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// stw r3,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,36
	ctx.r4.s64 = r11.s64 + 36;
	// bne 0x826a0530
	if (!cr0.eq) goto loc_826A0530;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_826A0530:
	// bl 0x821b4ad8
	sub_821B4AD8(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30804
	ctx.r4.s64 = r11.s64 + -30804;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// bl 0x8269f338
	sub_8269F338(ctx, base);
	// stw r3,76(r30)
	PPC_STORE_U32(r30.u32 + 76, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r26,r11,2016
	r26.s64 = r11.s64 + 2016;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r25,r11,920
	r25.s64 = r11.s64 + 920;
	// bl 0x823173f0
	sub_823173F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r27.u32);
	// addi r4,r11,-30828
	ctx.r4.s64 = r11.s64 + -30828;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82124710
	sub_82124710(ctx, base);
	// bl 0x8269f3e0
	sub_8269F3E0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30852
	ctx.r4.s64 = r11.s64 + -30852;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r10.u32);
	// bl 0x822ac138
	sub_822AC138(ctx, base);
	// bl 0x8269f488
	sub_8269F488(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r11,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r11.u32);
	// bl 0x821bd9e8
	sub_821BD9E8(ctx, base);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,36
	ctx.r4.s64 = r11.s64 + 36;
	// bne 0x826a0628
	if (!cr0.eq) goto loc_826A0628;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_826A0628:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x821b4ad8
	sub_821B4AD8(ctx, base);
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// bl 0x82202350
	sub_82202350(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30876
	ctx.r4.s64 = r11.s64 + -30876;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// bl 0x8269f338
	sub_8269F338(ctx, base);
	// stw r3,92(r30)
	PPC_STORE_U32(r30.u32 + 92, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823173f0
	sub_823173F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r27.u32);
	// addi r4,r11,-30900
	ctx.r4.s64 = r11.s64 + -30900;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822ac138
	sub_822AC138(ctx, base);
	// bl 0x8269f488
	sub_8269F488(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// stw r11,100(r30)
	PPC_STORE_U32(r30.u32 + 100, r11.u32);
	// bl 0x821bd9e8
	sub_821BD9E8(ctx, base);
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x82202350
	sub_82202350(ctx, base);
	// bl 0x82150688
	sub_82150688(ctx, base);
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// stw r3,108(r30)
	PPC_STORE_U32(r30.u32 + 108, ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a0714
	if (!cr0.eq) goto loc_826A0714;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x826a0724
	goto loc_826A0724;
loc_826A0714:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_826A0724:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a0740
	if (!cr0.eq) goto loc_826A0740;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x826a0750
	goto loc_826A0750;
loc_826A0740:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_826A0750:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a0770
	if (!cr0.eq) goto loc_826A0770;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x826a0780
	goto loc_826A0780;
loc_826A0770:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_826A0780:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30916
	ctx.r4.s64 = r11.s64 + -30916;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82251eb8
	sub_82251EB8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r11.u32);
	// bl 0x826a0100
	sub_826A0100(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30936
	ctx.r4.s64 = r11.s64 + -30936;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x826a07d4
	if (!cr0.eq) goto loc_826A07D4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x826a07e4
	goto loc_826A07E4;
loc_826A07D4:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_826A07E4:
	// bl 0x8269a690
	sub_8269A690(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_826A07F4"))) PPC_WEAK_FUNC(sub_826A07F4);
PPC_FUNC_IMPL(__imp__sub_826A07F4) {
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
	// addi r3,r11,140
	ctx.r3.s64 = r11.s64 + 140;
	// bl 0x821be2e0
	sub_821BE2E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0820"))) PPC_WEAK_FUNC(sub_826A0820);
PPC_FUNC_IMPL(__imp__sub_826A0820) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// li r11,0
	r11.s64 = 0;
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

__attribute__((alias("__imp__sub_826A0858"))) PPC_WEAK_FUNC(sub_826A0858);
PPC_FUNC_IMPL(__imp__sub_826A0858) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8269e000
	sub_8269E000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A0860"))) PPC_WEAK_FUNC(sub_826A0860);
PPC_FUNC_IMPL(__imp__sub_826A0860) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8269e088
	sub_8269E088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A0868"))) PPC_WEAK_FUNC(sub_826A0868);
PPC_FUNC_IMPL(__imp__sub_826A0868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a087c
	if (cr0.eq) goto loc_826A087C;
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// b 0x826a0894
	goto loc_826A0894;
loc_826A087C:
	// lbz r11,1(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a0890
	if (cr0.eq) goto loc_826A0890;
	// lfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// b 0x826a0894
	goto loc_826A0894;
loc_826A0890:
	// lfs f1,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
loc_826A0894:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
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
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826A08B0"))) PPC_WEAK_FUNC(sub_826A08B0);
PPC_FUNC_IMPL(__imp__sub_826A08B0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// b 0x826a0868
	sub_826A0868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A08B8"))) PPC_WEAK_FUNC(sub_826A08B8);
PPC_FUNC_IMPL(__imp__sub_826A08B8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r4.u8);
	// b 0x826a0868
	sub_826A0868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A08C0"))) PPC_WEAK_FUNC(sub_826A08C0);
PPC_FUNC_IMPL(__imp__sub_826A08C0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-30432(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -30432);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stb r26,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r26.u8);
	// stb r26,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r26.u8);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x826a092c
	if (cr0.eq) goto loc_826A092C;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30456
	ctx.r4.s64 = r11.s64 + -30456;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269e0e0
	sub_8269E0E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x826a0930
	goto loc_826A0930;
loc_826A092C:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_826A0930:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r4,r10,-30480
	ctx.r4.s64 = ctx.r10.s64 + -30480;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826909a8
	sub_826909A8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// bne 0x826a095c
	if (!cr0.eq) goto loc_826A095C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x826a096c
	goto loc_826A096C;
loc_826A095C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_826A096C:
	// bl 0x8269a648
	sub_8269A648(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-30488
	ctx.r4.s64 = r11.s64 + -30488;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// addi r4,r11,-31880
	ctx.r4.s64 = r11.s64 + -31880;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// addi r4,r11,6212
	ctx.r4.s64 = r11.s64 + 6212;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// stfs f1,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826A08C8"))) PPC_WEAK_FUNC(sub_826A08C8);
PPC_FUNC_IMPL(__imp__sub_826A08C8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stb r26,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r26.u8);
	// stb r26,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r26.u8);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x826a092c
	if (cr0.eq) goto loc_826A092C;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30456
	ctx.r4.s64 = r11.s64 + -30456;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269e0e0
	sub_8269E0E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x826a0930
	goto loc_826A0930;
loc_826A092C:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_826A0930:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r4,r10,-30480
	ctx.r4.s64 = ctx.r10.s64 + -30480;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826909a8
	sub_826909A8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// bne 0x826a095c
	if (!cr0.eq) goto loc_826A095C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x826a096c
	goto loc_826A096C;
loc_826A095C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_826A096C:
	// bl 0x8269a648
	sub_8269A648(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-30488
	ctx.r4.s64 = r11.s64 + -30488;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// addi r4,r11,-31880
	ctx.r4.s64 = r11.s64 + -31880;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// addi r4,r11,6212
	ctx.r4.s64 = r11.s64 + 6212;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// stfs f1,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826A0A24"))) PPC_WEAK_FUNC(sub_826A0A24);
PPC_FUNC_IMPL(__imp__sub_826A0A24) {
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

__attribute__((alias("__imp__sub_826A0A4C"))) PPC_WEAK_FUNC(sub_826A0A4C);
PPC_FUNC_IMPL(__imp__sub_826A0A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A0A50"))) PPC_WEAK_FUNC(sub_826A0A50);
PPC_FUNC_IMPL(__imp__sub_826A0A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x826a0a68
	if (cr6.gt) goto loc_826A0A68;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_826A0A68:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwa r10,0(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 0));
	// lwa r11,4(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 4));
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r11.u64);
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

__attribute__((alias("__imp__sub_826A0A9C"))) PPC_WEAK_FUNC(sub_826A0A9C);
PPC_FUNC_IMPL(__imp__sub_826A0A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A0AA0"))) PPC_WEAK_FUNC(sub_826A0AA0);
PPC_FUNC_IMPL(__imp__sub_826A0AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0AB0"))) PPC_WEAK_FUNC(sub_826A0AB0);
PPC_FUNC_IMPL(__imp__sub_826A0AB0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826a0b84
	if (!cr6.gt) goto loc_826A0B84;
	// li r28,0
	r28.s64 = 0;
	// li r26,0
	r26.s64 = 0;
loc_826A0AE0:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x826a0afc
	if (!cr6.eq) goto loc_826A0AFC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_826A0AFC:
	// cmpw cr6,r10,r24
	cr6.compare<int32_t>(ctx.r10.s32, r24.s32, xer);
	// bne cr6,0x826a0b6c
	if (!cr6.eq) goto loc_826A0B6C;
	// lbz r11,14(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 14);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a0b20
	if (cr0.eq) goto loc_826A0B20;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r25
	ctx.r10.u64 = r25.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r25.u8 & 0x3F));
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a0b6c
	if (cr0.eq) goto loc_826A0B6C;
loc_826A0B20:
	// lbz r11,13(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 13);
	// lwz r29,16(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a0b38
	if (cr0.eq) goto loc_826A0B38;
	// li r30,0
	r30.s64 = 0;
	// b 0x826a0b4c
	goto loc_826A0B4C;
loc_826A0B38:
	// lhz r11,10(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 10);
	// li r10,480
	ctx.r10.s64 = 480;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// divw r30,r11,r10
	r30.s32 = r11.s32 / ctx.r10.s32;
loc_826A0B4C:
	// lbz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U8(r27.u32 + 12);
	// bl 0x823476b0
	sub_823476B0(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// lwzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, ctx.r10.u32);
loc_826A0B6C:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,24
	r26.s64 = r26.s64 + 24;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x826a0ae0
	if (cr6.lt) goto loc_826A0AE0;
loc_826A0B84:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_826A0B8C"))) PPC_WEAK_FUNC(sub_826A0B8C);
PPC_FUNC_IMPL(__imp__sub_826A0B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A0B90"))) PPC_WEAK_FUNC(sub_826A0B90);
PPC_FUNC_IMPL(__imp__sub_826A0B90) {
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
	// lwz r16,-30328(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -30328);
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r10,r30,24
	ctx.r10.s64 = r30.s64 + 24;
	// addi r9,r11,-30364
	ctx.r9.s64 = r11.s64 + -30364;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r8,r11,9120
	ctx.r8.s64 = r11.s64 + 9120;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// addi r4,r10,9280
	ctx.r4.s64 = ctx.r10.s64 + 9280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-424
	ctx.r4.s64 = r11.s64 + -424;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,32676
	ctx.r4.s64 = r11.s64 + 32676;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,32668
	ctx.r4.s64 = r11.s64 + 32668;
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A0B98"))) PPC_WEAK_FUNC(sub_826A0B98);
PPC_FUNC_IMPL(__imp__sub_826A0B98) {
	PPC_FUNC_PROLOGUE();
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r10,r30,24
	ctx.r10.s64 = r30.s64 + 24;
	// addi r9,r11,-30364
	ctx.r9.s64 = r11.s64 + -30364;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r8,r11,9120
	ctx.r8.s64 = r11.s64 + 9120;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// addi r4,r10,9280
	ctx.r4.s64 = ctx.r10.s64 + 9280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-424
	ctx.r4.s64 = r11.s64 + -424;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,32676
	ctx.r4.s64 = r11.s64 + 32676;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,32668
	ctx.r4.s64 = r11.s64 + 32668;
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A0C9C"))) PPC_WEAK_FUNC(sub_826A0C9C);
PPC_FUNC_IMPL(__imp__sub_826A0C9C) {
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
	// bl 0x822bb2c8
	sub_822BB2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0CC4"))) PPC_WEAK_FUNC(sub_826A0CC4);
PPC_FUNC_IMPL(__imp__sub_826A0CC4) {
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
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
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

__attribute__((alias("__imp__sub_826A0CF0"))) PPC_WEAK_FUNC(sub_826A0CF0);
PPC_FUNC_IMPL(__imp__sub_826A0CF0) {
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
	// lwz r16,-30264(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -30264);
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
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x826a0d38
	if (cr0.eq) goto loc_826A0D38;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A0D38:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,11588
	r11.s64 = r11.s64 + 11588;
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

__attribute__((alias("__imp__sub_826A0CF8"))) PPC_WEAK_FUNC(sub_826A0CF8);
PPC_FUNC_IMPL(__imp__sub_826A0CF8) {
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
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x826a0d38
	if (cr0.eq) goto loc_826A0D38;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A0D38:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,11588
	r11.s64 = r11.s64 + 11588;
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

__attribute__((alias("__imp__sub_826A0D5C"))) PPC_WEAK_FUNC(sub_826A0D5C);
PPC_FUNC_IMPL(__imp__sub_826A0D5C) {
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
	// bl 0x822bb2c8
	sub_822BB2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0D84"))) PPC_WEAK_FUNC(sub_826A0D84);
PPC_FUNC_IMPL(__imp__sub_826A0D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A0D88"))) PPC_WEAK_FUNC(sub_826A0D88);
PPC_FUNC_IMPL(__imp__sub_826A0D88) {
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
	// bl 0x826a0cf8
	sub_826A0CF8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a0db8
	if (cr0.eq) goto loc_826A0DB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_826A0DB8:
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

__attribute__((alias("__imp__sub_826A0DD4"))) PPC_WEAK_FUNC(sub_826A0DD4);
PPC_FUNC_IMPL(__imp__sub_826A0DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A0DD8"))) PPC_WEAK_FUNC(sub_826A0DD8);
PPC_FUNC_IMPL(__imp__sub_826A0DD8) {
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
	// li r11,24
	r11.s64 = 24;
	// li r30,0
	r30.s64 = 0;
	// stw r4,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r4.u32);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// ble 0x826a0e30
	if (!cr0.gt) goto loc_826A0E30;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
loc_826A0E14:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822a2280
	sub_822A2280(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x826a0e14
	if (cr6.lt) goto loc_826A0E14;
loc_826A0E30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A0E38"))) PPC_WEAK_FUNC(sub_826A0E38);
PPC_FUNC_IMPL(__imp__sub_826A0E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// addi r4,r10,-30216
	ctx.r4.s64 = ctx.r10.s64 + -30216;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stb r9,24(r31)
	PPC_STORE_U8(r31.u32 + 24, ctx.r9.u8);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r10,-22064
	ctx.r4.s64 = ctx.r10.s64 + -22064;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-8716
	ctx.r4.s64 = r11.s64 + -8716;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// b 0x826a0ef0
	goto loc_826A0EF0;
loc_826A0ED4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_826A0EF0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x826a0ed4
	if (!cr6.eq) goto loc_826A0ED4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A0F04"))) PPC_WEAK_FUNC(sub_826A0F04);
PPC_FUNC_IMPL(__imp__sub_826A0F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A0F08"))) PPC_WEAK_FUNC(sub_826A0F08);
PPC_FUNC_IMPL(__imp__sub_826A0F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r11,0
	r11.s64 = 0;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stb r11,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r11.u8);
	// b 0x826a0f4c
	goto loc_826A0F4C;
loc_826A0F30:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_826A0F4C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x826a0f30
	if (!cr6.eq) goto loc_826A0F30;
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

__attribute__((alias("__imp__sub_826A0F70"))) PPC_WEAK_FUNC(sub_826A0F70);
PPC_FUNC_IMPL(__imp__sub_826A0F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x826a0fb8
	goto loc_826A0FB8;
loc_826A0F98:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_826A0FB8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x826a0f98
	if (!cr6.eq) goto loc_826A0F98;
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

__attribute__((alias("__imp__sub_826A0FE0"))) PPC_WEAK_FUNC(sub_826A0FE0);
PPC_FUNC_IMPL(__imp__sub_826A0FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x826a1028
	goto loc_826A1028;
loc_826A1008:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_826A1028:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x826a1008
	if (!cr6.eq) goto loc_826A1008;
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

__attribute__((alias("__imp__sub_826A1050"))) PPC_WEAK_FUNC(sub_826A1050);
PPC_FUNC_IMPL(__imp__sub_826A1050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,132(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826A1070"))) PPC_WEAK_FUNC(sub_826A1070);
PPC_FUNC_IMPL(__imp__sub_826A1070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x826a10c8
	if (cr6.eq) goto loc_826A10C8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x826a10c8
	if (!cr6.gt) goto loc_826A10C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a0f08
	sub_826A0F08(ctx, base);
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
loc_826A10C8:
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

__attribute__((alias("__imp__sub_826A10E0"))) PPC_WEAK_FUNC(sub_826A10E0);
PPC_FUNC_IMPL(__imp__sub_826A10E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fsubs f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 - ctx.f1.f64));
	// bl 0x826a0fe0
	sub_826A0FE0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
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

__attribute__((alias("__imp__sub_826A113C"))) PPC_WEAK_FUNC(sub_826A113C);
PPC_FUNC_IMPL(__imp__sub_826A113C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A1140"))) PPC_WEAK_FUNC(sub_826A1140);
PPC_FUNC_IMPL(__imp__sub_826A1140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// fsubs f0,f0,f31
	f0.f64 = double(float(f0.f64 - f31.f64));
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// bl 0x826a10e0
	sub_826A10E0(ctx, base);
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

__attribute__((alias("__imp__sub_826A11B0"))) PPC_WEAK_FUNC(sub_826A11B0);
PPC_FUNC_IMPL(__imp__sub_826A11B0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a10e0
	sub_826A10E0(ctx, base);
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

__attribute__((alias("__imp__sub_826A1200"))) PPC_WEAK_FUNC(sub_826A1200);
PPC_FUNC_IMPL(__imp__sub_826A1200) {
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
	// lwz r16,-30192(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -30192);
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
	// stw r5,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// bl 0x822a2280
	sub_822A2280(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a0e38
	sub_826A0E38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A1208"))) PPC_WEAK_FUNC(sub_826A1208);
PPC_FUNC_IMPL(__imp__sub_826A1208) {
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
	// stw r5,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// bl 0x822a2280
	sub_822A2280(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a0e38
	sub_826A0E38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A125C"))) PPC_WEAK_FUNC(sub_826A125C);
PPC_FUNC_IMPL(__imp__sub_826A125C) {
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

__attribute__((alias("__imp__sub_826A1288"))) PPC_WEAK_FUNC(sub_826A1288);
PPC_FUNC_IMPL(__imp__sub_826A1288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x826a12a8
	if (cr6.eq) goto loc_826A12A8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x826a12a8
	if (cr6.eq) goto loc_826A12A8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x826a12ac
	if (!cr6.eq) goto loc_826A12AC;
loc_826A12A8:
	// li r11,1
	r11.s64 = 1;
loc_826A12AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A12B4"))) PPC_WEAK_FUNC(sub_826A12B4);
PPC_FUNC_IMPL(__imp__sub_826A12B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A12B8"))) PPC_WEAK_FUNC(sub_826A12B8);
PPC_FUNC_IMPL(__imp__sub_826A12B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A12D0"))) PPC_WEAK_FUNC(sub_826A12D0);
PPC_FUNC_IMPL(__imp__sub_826A12D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-5
	r11.s64 = r11.s64 + -5;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A12E8"))) PPC_WEAK_FUNC(sub_826A12E8);
PPC_FUNC_IMPL(__imp__sub_826A12E8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r30,r31,140
	r30.s64 = r31.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f2,136(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// bl 0x82353618
	sub_82353618(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a134c
	if (!cr0.eq) goto loc_826A134C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,22044
	ctx.r4.s64 = r11.s64 + 22044;
	// bl 0x82352e80
	sub_82352E80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// bl 0x82352e80
	sub_82352E80(ctx, base);
loc_826A134C:
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

__attribute__((alias("__imp__sub_826A1364"))) PPC_WEAK_FUNC(sub_826A1364);
PPC_FUNC_IMPL(__imp__sub_826A1364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A1368"))) PPC_WEAK_FUNC(sub_826A1368);
PPC_FUNC_IMPL(__imp__sub_826A1368) {
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
	// stfs f0,132(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1378"))) PPC_WEAK_FUNC(sub_826A1378);
PPC_FUNC_IMPL(__imp__sub_826A1378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826A138C"))) PPC_WEAK_FUNC(sub_826A138C);
PPC_FUNC_IMPL(__imp__sub_826A138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A1390"))) PPC_WEAK_FUNC(sub_826A1390);
PPC_FUNC_IMPL(__imp__sub_826A1390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,164(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1398"))) PPC_WEAK_FUNC(sub_826A1398);
PPC_FUNC_IMPL(__imp__sub_826A1398) {
	PPC_FUNC_PROLOGUE();
	// stw r4,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A13A0"))) PPC_WEAK_FUNC(sub_826A13A0);
PPC_FUNC_IMPL(__imp__sub_826A13A0) {
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
	// beq 0x826a13e0
	if (cr0.eq) goto loc_826A13E0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,8896
	ctx.r3.s64 = r11.s64 + 8896;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826a13e8
	goto loc_826A13E8;
loc_826A13E0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_826A13E8:
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

__attribute__((alias("__imp__sub_826A1404"))) PPC_WEAK_FUNC(sub_826A1404);
PPC_FUNC_IMPL(__imp__sub_826A1404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A1408"))) PPC_WEAK_FUNC(sub_826A1408);
PPC_FUNC_IMPL(__imp__sub_826A1408) {
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
	// beq 0x826a1448
	if (cr0.eq) goto loc_826A1448;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,8928
	ctx.r3.s64 = r11.s64 + 8928;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826a1450
	goto loc_826A1450;
loc_826A1448:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_826A1450:
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

__attribute__((alias("__imp__sub_826A146C"))) PPC_WEAK_FUNC(sub_826A146C);
PPC_FUNC_IMPL(__imp__sub_826A146C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A1470"))) PPC_WEAK_FUNC(sub_826A1470);
PPC_FUNC_IMPL(__imp__sub_826A1470) {
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
	// beq 0x826a14b0
	if (cr0.eq) goto loc_826A14B0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,8976
	ctx.r3.s64 = r11.s64 + 8976;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826a14b8
	goto loc_826A14B8;
loc_826A14B0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_826A14B8:
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

__attribute__((alias("__imp__sub_826A14D4"))) PPC_WEAK_FUNC(sub_826A14D4);
PPC_FUNC_IMPL(__imp__sub_826A14D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A14D8"))) PPC_WEAK_FUNC(sub_826A14D8);
PPC_FUNC_IMPL(__imp__sub_826A14D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r12,0(r3)
	r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r12)
	r11.u64 = PPC_LOAD_U32(r12.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826A14E8"))) PPC_WEAK_FUNC(sub_826A14E8);
PPC_FUNC_IMPL(__imp__sub_826A14E8) {
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
	// lwz r16,-30128(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -30128);
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
	// addi r3,r30,76
	ctx.r3.s64 = r30.s64 + 76;
	// bl 0x822eb8d0
	sub_822EB8D0(ctx, base);
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x822f7ea0
	sub_822F7EA0(ctx, base);
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

__attribute__((alias("__imp__sub_826A14F0"))) PPC_WEAK_FUNC(sub_826A14F0);
PPC_FUNC_IMPL(__imp__sub_826A14F0) {
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
	// addi r3,r30,76
	ctx.r3.s64 = r30.s64 + 76;
	// bl 0x822eb8d0
	sub_822EB8D0(ctx, base);
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x822f7ea0
	sub_822F7EA0(ctx, base);
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

__attribute__((alias("__imp__sub_826A1538"))) PPC_WEAK_FUNC(sub_826A1538);
PPC_FUNC_IMPL(__imp__sub_826A1538) {
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
	// bl 0x822f7ea0
	sub_822F7EA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1564"))) PPC_WEAK_FUNC(sub_826A1564);
PPC_FUNC_IMPL(__imp__sub_826A1564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A1568"))) PPC_WEAK_FUNC(sub_826A1568);
PPC_FUNC_IMPL(__imp__sub_826A1568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r3,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r3.s64 = r11.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A157C"))) PPC_WEAK_FUNC(sub_826A157C);
PPC_FUNC_IMPL(__imp__sub_826A157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A1580"))) PPC_WEAK_FUNC(sub_826A1580);
PPC_FUNC_IMPL(__imp__sub_826A1580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a169c
	if (!cr0.eq) goto loc_826A169C;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a15cc
	if (cr0.eq) goto loc_826A15CC;
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
loc_826A15CC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a15ec
	if (cr0.eq) goto loc_826A15EC;
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
loc_826A15EC:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-30072
	ctx.r4.s64 = r11.s64 + -30072;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-8716
	ctx.r4.s64 = r11.s64 + -8716;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm r11,r11,18,11,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x1C0000;
	// ori r4,r11,2
	ctx.r4.u64 = r11.u64 | 2;
	// bl 0x822767f8
	sub_822767F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r6,224(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r4,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// lwz r3,-7564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7564);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 156);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 136);
	f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x826a1714
	goto loc_826A1714;
loc_826A169C:
	// lwa r8,40(r31)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 40));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 136);
	f0.f64 = double(temp.f32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f31.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 136);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// addi r10,r31,160
	ctx.r10.s64 = r31.s64 + 160;
	// lwa r11,40(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 40));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
loc_826A1714:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A1720"))) PPC_WEAK_FUNC(sub_826A1720);
PPC_FUNC_IMPL(__imp__sub_826A1720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a18ac
	if (!cr0.eq) goto loc_826A18AC;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826a18ac
	if (cr6.eq) goto loc_826A18AC;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826a6990
	sub_826A6990(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r3,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,17324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// clrldi r11,r9,32
	r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lwa r10,40(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 40));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmadds f31,f12,f0,f13
	f31.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// bl 0x8235d2b8
	sub_8235D2B8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,116(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,164(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// lfs f13,17320(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17320);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x826a1870
	if (cr6.gt) goto loc_826A1870;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f13,-30044(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30044);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x826a1870
	if (cr6.lt) goto loc_826A1870;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,-15224(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15224);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x826a1808
	if (!cr6.gt) goto loc_826A1808;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f0,-31044(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31044);
	f0.f64 = double(temp.f32);
loc_826A1800:
	// fmuls f1,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f11.f64 * f0.f64));
	// b 0x826a1848
	goto loc_826A1848;
loc_826A1808:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f13,28440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28440);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x826a1824
	if (!cr6.lt) goto loc_826A1824;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f0,-30952(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30952);
	f0.f64 = double(temp.f32);
	// b 0x826a1800
	goto loc_826A1800;
loc_826A1824:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bge cr6,0x826a1854
	if (!cr6.lt) goto loc_826A1854;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f13,-30048(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x826a1854
	if (!cr6.lt) goto loc_826A1854;
loc_826A1844:
	// fmr f1,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f11.f64;
loc_826A1848:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235d218
	sub_8235D218(ctx, base);
	// b 0x826a187c
	goto loc_826A187C;
loc_826A1854:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x826a187c
	if (!cr6.gt) goto loc_826A187C;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f0,-30052(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30052);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// ble cr6,0x826a187c
	if (!cr6.gt) goto loc_826A187C;
	// b 0x826a1844
	goto loc_826A1844;
loc_826A1870:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8235d198
	sub_8235D198(ctx, base);
loc_826A187C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235d2b8
	sub_8235D2B8(ctx, base);
	// addi r11,r31,56
	r11.s64 = r31.s64 + 56;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// blt cr6,0x826a18a0
	if (cr6.lt) goto loc_826A18A0;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_826A18A0:
	// lfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// b 0x826a18b0
	goto loc_826A18B0;
loc_826A18AC:
	// lfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
loc_826A18B0:
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

__attribute__((alias("__imp__sub_826A18CC"))) PPC_WEAK_FUNC(sub_826A18CC);
PPC_FUNC_IMPL(__imp__sub_826A18CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A18D0"))) PPC_WEAK_FUNC(sub_826A18D0);
PPC_FUNC_IMPL(__imp__sub_826A18D0) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-30032(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -30032);
	// mflr r12
	// bl 0x8239bcf8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,-13392(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13392);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r30,r9,-13396
	r30.s64 = ctx.r9.s64 + -13396;
	// bne 0x826a1928
	if (!cr0.eq) goto loc_826A1928;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13392, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-16408
	ctx.r4.s64 = r11.s64 + -16408;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_826A1928:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x822f6ff0
	sub_822F6FF0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A18D8"))) PPC_WEAK_FUNC(sub_826A18D8);
PPC_FUNC_IMPL(__imp__sub_826A18D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,-13392(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13392);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r30,r9,-13396
	r30.s64 = ctx.r9.s64 + -13396;
	// bne 0x826a1928
	if (!cr0.eq) goto loc_826A1928;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13392, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-16408
	ctx.r4.s64 = r11.s64 + -16408;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_826A1928:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x822f6ff0
	sub_822F6FF0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A1958"))) PPC_WEAK_FUNC(sub_826A1958);
PPC_FUNC_IMPL(__imp__sub_826A1958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13392
	r11.s64 = r11.s64 + -13392;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13392
	ctx.r10.s64 = ctx.r10.s64 + -13392;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1980"))) PPC_WEAK_FUNC(sub_826A1980);
PPC_FUNC_IMPL(__imp__sub_826A1980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826A19C0"))) PPC_WEAK_FUNC(sub_826A19C0);
PPC_FUNC_IMPL(__imp__sub_826A19C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A19C4"))) PPC_WEAK_FUNC(sub_826A19C4);
PPC_FUNC_IMPL(__imp__sub_826A19C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A19C8"))) PPC_WEAK_FUNC(sub_826A19C8);
PPC_FUNC_IMPL(__imp__sub_826A19C8) {
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
	// rlwinm r29,r4,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a1a2c
	if (!cr0.eq) goto loc_826A1A2C;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826A1A2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A1A34"))) PPC_WEAK_FUNC(sub_826A1A34);
PPC_FUNC_IMPL(__imp__sub_826A1A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

