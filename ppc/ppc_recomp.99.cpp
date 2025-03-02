#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82317020"))) PPC_WEAK_FUNC(sub_82317020);
PPC_FUNC_IMPL(__imp__sub_82317020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4724
	r11.s64 = r11.s64 + -4724;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-4724
	ctx.r10.s64 = ctx.r10.s64 + -4724;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317048"))) PPC_WEAK_FUNC(sub_82317048);
PPC_FUNC_IMPL(__imp__sub_82317048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4724
	r11.s64 = r11.s64 + -4724;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-4724
	ctx.r10.s64 = ctx.r10.s64 + -4724;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317070"))) PPC_WEAK_FUNC(sub_82317070);
PPC_FUNC_IMPL(__imp__sub_82317070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4724
	r11.s64 = r11.s64 + -4724;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-4724
	ctx.r10.s64 = ctx.r10.s64 + -4724;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317098"))) PPC_WEAK_FUNC(sub_82317098);
PPC_FUNC_IMPL(__imp__sub_82317098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4724
	r11.s64 = r11.s64 + -4724;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-4724
	ctx.r10.s64 = ctx.r10.s64 + -4724;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823170C0"))) PPC_WEAK_FUNC(sub_823170C0);
PPC_FUNC_IMPL(__imp__sub_823170C0) {
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

__attribute__((alias("__imp__sub_823170E8"))) PPC_WEAK_FUNC(sub_823170E8);
PPC_FUNC_IMPL(__imp__sub_823170E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4724
	r11.s64 = r11.s64 + -4724;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,17,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-4724
	ctx.r10.s64 = ctx.r10.s64 + -4724;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317110"))) PPC_WEAK_FUNC(sub_82317110);
PPC_FUNC_IMPL(__imp__sub_82317110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4724
	r11.s64 = r11.s64 + -4724;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,16,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-4724
	ctx.r10.s64 = ctx.r10.s64 + -4724;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317138"))) PPC_WEAK_FUNC(sub_82317138);
PPC_FUNC_IMPL(__imp__sub_82317138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4724
	r11.s64 = r11.s64 + -4724;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,15,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-4724
	ctx.r10.s64 = ctx.r10.s64 + -4724;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317160"))) PPC_WEAK_FUNC(sub_82317160);
PPC_FUNC_IMPL(__imp__sub_82317160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4724
	r11.s64 = r11.s64 + -4724;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,14,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-4724
	ctx.r10.s64 = ctx.r10.s64 + -4724;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317188"))) PPC_WEAK_FUNC(sub_82317188);
PPC_FUNC_IMPL(__imp__sub_82317188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4724
	r11.s64 = r11.s64 + -4724;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,13,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-4724
	ctx.r10.s64 = ctx.r10.s64 + -4724;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823171B0"))) PPC_WEAK_FUNC(sub_823171B0);
PPC_FUNC_IMPL(__imp__sub_823171B0) {
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

__attribute__((alias("__imp__sub_823171D8"))) PPC_WEAK_FUNC(sub_823171D8);
PPC_FUNC_IMPL(__imp__sub_823171D8) {
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82317214
	if (cr6.eq) goto loc_82317214;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x823162c0
	sub_823162C0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r31,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r31.u32);
	// stw r31,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r31.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_82317214:
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

__attribute__((alias("__imp__sub_82317228"))) PPC_WEAK_FUNC(sub_82317228);
PPC_FUNC_IMPL(__imp__sub_82317228) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bne cr6,0x82317264
	if (!cr6.eq) goto loc_82317264;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316320
	sub_82316320(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// b 0x823172cc
	goto loc_823172CC;
loc_82317264:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x823172b0
	if (!cr6.eq) goto loc_823172B0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8231728c
	if (!cr6.eq) goto loc_8231728C;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823172b0
	if (cr0.eq) goto loc_823172B0;
loc_8231728C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316320
	sub_82316320(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r30.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x823172d0
	if (!cr6.eq) goto loc_823172D0;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x823172d0
	goto loc_823172D0;
loc_823172B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316320
	sub_82316320(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r30.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x823172d0
	if (!cr6.eq) goto loc_823172D0;
loc_823172CC:
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_823172D0:
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a7018
	sub_821A7018(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823172FC"))) PPC_WEAK_FUNC(sub_823172FC);
PPC_FUNC_IMPL(__imp__sub_823172FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82317300"))) PPC_WEAK_FUNC(sub_82317300);
PPC_FUNC_IMPL(__imp__sub_82317300) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r26,1
	r26.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// lwz r29,4(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r11,r26
	r11.u64 = r26.u64;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82317360
	if (cr0.eq) goto loc_82317360;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82317334:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r31,r29
	r31.u64 = r29.u64;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	r11.s64 = ctx.r10.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82317354
	if (cr0.eq) goto loc_82317354;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// b 0x82317358
	goto loc_82317358;
loc_82317354:
	// lwz r29,12(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 12);
loc_82317358:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82317334
	if (!cr6.eq) goto loc_82317334;
loc_82317360:
	// clrlwi. r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r31
	r11.u64 = r31.u64;
	// beq 0x823173b8
	if (cr0.eq) goto loc_823173B8;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823173ac
	if (cr0.eq) goto loc_823173AC;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_82317384:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82317228
	sub_82317228(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r26,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r26.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x823173e0
	goto loc_823173E0;
loc_823173AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a6e00
	sub_821A6E00(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823173B8:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823173d8
	if (cr0.eq) goto loc_823173D8;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// b 0x82317384
	goto loc_82317384;
loc_823173D8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4(r30)
	PPC_STORE_U8(r30.u32 + 4, ctx.r10.u8);
loc_823173E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823173F0"))) PPC_WEAK_FUNC(sub_823173F0);
PPC_FUNC_IMPL(__imp__sub_823173F0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r11,-4928
	ctx.r3.s64 = r11.s64 + -4928;
	// bl 0x822f6ef8
	sub_822F6EF8(ctx, base);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
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

__attribute__((alias("__imp__sub_8231742C"))) PPC_WEAK_FUNC(sub_8231742C);
PPC_FUNC_IMPL(__imp__sub_8231742C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82317430"))) PPC_WEAK_FUNC(sub_82317430);
PPC_FUNC_IMPL(__imp__sub_82317430) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r31,r11,-4928
	r31.s64 = r11.s64 + -4928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f6ef8
	sub_822F6EF8(ctx, base);
	// subf r11,r3,r31
	r11.s64 = r31.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82317480"))) PPC_WEAK_FUNC(sub_82317480);
PPC_FUNC_IMPL(__imp__sub_82317480) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// beq cr6,0x823174d0
	if (cr6.eq) goto loc_823174D0;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x821c9280
	sub_821C9280(ctx, base);
loc_823174D0:
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

__attribute__((alias("__imp__sub_823174E4"))) PPC_WEAK_FUNC(sub_823174E4);
PPC_FUNC_IMPL(__imp__sub_823174E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823174E8"))) PPC_WEAK_FUNC(sub_823174E8);
PPC_FUNC_IMPL(__imp__sub_823174E8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r30,0(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x823175d8
	if (!cr6.eq) goto loc_823175D8;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823176d0
	if (!cr0.eq) goto loc_823176D0;
	// lwz r27,0(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// subfc r10,r11,r27
	xer.ca = r27.u32 >= r11.u32;
	ctx.r10.s64 = r27.s64 - r11.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82317558
	if (cr0.eq) goto loc_82317558;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_82317540:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82317548:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82317550:
	// bl 0x82317228
	sub_82317228(ctx, base);
	// b 0x823176ec
	goto loc_823176EC;
loc_82317558:
	// subfc r11,r27,r11
	xer.ca = r11.u32 >= r27.u32;
	r11.s64 = r11.s64 - r27.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82317570
	if (!cr0.eq) goto loc_82317570;
loc_82317568:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x823176ec
	goto loc_823176EC;
loc_82317570:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a6d48
	sub_821A6D48(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, xer);
	// bne cr6,0x82317590
	if (!cr6.eq) goto loc_82317590;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82317540
	goto loc_82317540;
loc_82317590:
	// lwz r11,16(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// subfc r11,r11,r27
	xer.ca = r27.u32 >= r11.u32;
	r11.s64 = r27.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823176d0
	if (cr0.eq) goto loc_823176D0;
loc_823175A4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823175cc
	if (!cr6.eq) goto loc_823175CC;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823175C4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x82317550
	goto loc_82317550;
loc_823175CC:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// b 0x82317550
	goto loc_82317550;
loc_823175D8:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// bne cr6,0x8231760c
	if (!cr6.eq) goto loc_8231760C;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	r11.s64 = ctx.r10.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823176d4
	if (cr0.eq) goto loc_823176D4;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82317548
	goto loc_82317548;
loc_8231760C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a6e00
	sub_821A6E00(ctx, base);
	// lwz r26,0(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r25,16(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// subfc r11,r25,r26
	xer.ca = r26.u32 >= r25.u32;
	r11.s64 = r26.s64 - r25.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r27,r11,31
	r27.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82317674
	if (cr0.eq) goto loc_82317674;
	// lwz r11,16(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// subfc r11,r26,r11
	xer.ca = r11.u32 >= r26.u32;
	r11.s64 = r11.s64 - r26.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82317674
	if (cr0.eq) goto loc_82317674;
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82317668
	if (!cr6.eq) goto loc_82317668;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// b 0x82317550
	goto loc_82317550;
loc_82317668:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// b 0x823175c4
	goto loc_823175C4;
loc_82317674:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a6d48
	sub_821A6D48(ctx, base);
	// cntlzw r11,r27
	r11.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// bne cr6,0x823176c4
	if (!cr6.eq) goto loc_823176C4;
	// subfc r11,r26,r25
	xer.ca = r25.u32 >= r26.u32;
	r11.s64 = r25.s64 - r26.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// clrlwi. r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823176c4
	if (cr0.eq) goto loc_823176C4;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, xer);
	// beq cr6,0x823175a4
	if (cr6.eq) goto loc_823175A4;
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// subfc r10,r10,r26
	xer.ca = r26.u32 >= ctx.r10.u32;
	ctx.r10.s64 = r26.s64 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823175a4
	if (!cr0.eq) goto loc_823175A4;
loc_823176C4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x82317568
	if (cr6.eq) goto loc_82317568;
loc_823176D0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_823176D4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82317300
	sub_82317300(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823176EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823176F8"))) PPC_WEAK_FUNC(sub_823176F8);
PPC_FUNC_IMPL(__imp__sub_823176F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r9,r10,7356
	ctx.r9.s64 = ctx.r10.s64 + 7356;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// addi r7,r10,3948
	ctx.r7.s64 = ctx.r10.s64 + 3948;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r3,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// lwz r7,18972(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18972);
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// ld r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lwz r9,18972(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18972);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317758"))) PPC_WEAK_FUNC(sub_82317758);
PPC_FUNC_IMPL(__imp__sub_82317758) {
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
	// lwz r16,12024(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12024);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,7356
	r11.s64 = r11.s64 + 7356;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231779c
	if (cr0.eq) goto loc_8231779C;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_8231779C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82314e60
	sub_82314E60(ctx, base);
	// lis r27,-32127
	r27.s64 = -2105475072;
	// addi r28,r30,32
	r28.s64 = r30.s64 + 32;
	// lwz r26,-4932(r27)
	r26.u64 = PPC_LOAD_U32(r27.u32 + -4932);
	// stw r30,-4932(r27)
	PPC_STORE_U32(r27.u32 + -4932, r30.u32);
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x823177dc
	goto loc_823177DC;
loc_823177BC:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823177DC:
	// subf r11,r29,r28
	r11.s64 = r28.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823177bc
	if (!cr0.eq) goto loc_823177BC;
	// stw r26,-4932(r27)
	PPC_STORE_U32(r27.u32 + -4932, r26.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821c9128
	sub_821C9128(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x822b36d0
	sub_822B36D0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8268
	r11.s64 = r11.s64 + 8268;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82317760"))) PPC_WEAK_FUNC(sub_82317760);
PPC_FUNC_IMPL(__imp__sub_82317760) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,7356
	r11.s64 = r11.s64 + 7356;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231779c
	if (cr0.eq) goto loc_8231779C;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_8231779C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82314e60
	sub_82314E60(ctx, base);
	// lis r27,-32127
	r27.s64 = -2105475072;
	// addi r28,r30,32
	r28.s64 = r30.s64 + 32;
	// lwz r26,-4932(r27)
	r26.u64 = PPC_LOAD_U32(r27.u32 + -4932);
	// stw r30,-4932(r27)
	PPC_STORE_U32(r27.u32 + -4932, r30.u32);
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x823177dc
	goto loc_823177DC;
loc_823177BC:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823177DC:
	// subf r11,r29,r28
	r11.s64 = r28.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823177bc
	if (!cr0.eq) goto loc_823177BC;
	// stw r26,-4932(r27)
	PPC_STORE_U32(r27.u32 + -4932, r26.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821c9128
	sub_821C9128(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x822b36d0
	sub_822B36D0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8268
	r11.s64 = r11.s64 + 8268;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8231781C"))) PPC_WEAK_FUNC(sub_8231781C);
PPC_FUNC_IMPL(__imp__sub_8231781C) {
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

__attribute__((alias("__imp__sub_82317844"))) PPC_WEAK_FUNC(sub_82317844);
PPC_FUNC_IMPL(__imp__sub_82317844) {
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
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x822b36d0
	sub_822B36D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317870"))) PPC_WEAK_FUNC(sub_82317870);
PPC_FUNC_IMPL(__imp__sub_82317870) {
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
	// bl 0x821ca3a0
	sub_821CA3A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231789C"))) PPC_WEAK_FUNC(sub_8231789C);
PPC_FUNC_IMPL(__imp__sub_8231789C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823178A0"))) PPC_WEAK_FUNC(sub_823178A0);
PPC_FUNC_IMPL(__imp__sub_823178A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823178ec
	if (cr0.eq) goto loc_823178EC;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_823178C0:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// subfc r8,r9,r8
	xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823178e0
	if (!cr0.eq) goto loc_823178E0;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x823178e4
	goto loc_823178E4;
loc_823178E0:
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
loc_823178E4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823178c0
	if (!cr6.eq) goto loc_823178C0;
loc_823178EC:
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82317918
	if (!cr0.eq) goto loc_82317918;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// subfc r9,r8,r9
	xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82317944
	if (cr0.eq) goto loc_82317944;
loc_82317918:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x823174e8
	sub_823174E8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82317944:
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317958"))) PPC_WEAK_FUNC(sub_82317958);
PPC_FUNC_IMPL(__imp__sub_82317958) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,-4928
	ctx.r3.s64 = r11.s64 + -4928;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// bl 0x823178a0
	sub_823178A0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
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

__attribute__((alias("__imp__sub_82317998"))) PPC_WEAK_FUNC(sub_82317998);
PPC_FUNC_IMPL(__imp__sub_82317998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x823179ac
	if (!cr6.eq) goto loc_823179AC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
loc_823179AC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823179B8"))) PPC_WEAK_FUNC(sub_823179B8);
PPC_FUNC_IMPL(__imp__sub_823179B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823179dc
	if (!cr6.eq) goto loc_823179DC;
	// lwa r11,0(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 0));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// blr 
	return;
loc_823179DC:
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823179E4"))) PPC_WEAK_FUNC(sub_823179E4);
PPC_FUNC_IMPL(__imp__sub_823179E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823179E8"))) PPC_WEAK_FUNC(sub_823179E8);
PPC_FUNC_IMPL(__imp__sub_823179E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,10(r11)
	PPC_STORE_U16(r11.u32 + 10, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317A14"))) PPC_WEAK_FUNC(sub_82317A14);
PPC_FUNC_IMPL(__imp__sub_82317A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82317A18"))) PPC_WEAK_FUNC(sub_82317A18);
PPC_FUNC_IMPL(__imp__sub_82317A18) {
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
	// lwz r16,12120(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12120);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82317a68
	if (cr0.eq) goto loc_82317A68;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82319af8
	sub_82319AF8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82317a6c
	goto loc_82317A6C;
loc_82317A68:
	// li r11,0
	r11.s64 = 0;
loc_82317A6C:
	// li r10,18
	ctx.r10.s64 = 18;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82317A20"))) PPC_WEAK_FUNC(sub_82317A20);
PPC_FUNC_IMPL(__imp__sub_82317A20) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82317a68
	if (cr0.eq) goto loc_82317A68;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82319af8
	sub_82319AF8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82317a6c
	goto loc_82317A6C;
loc_82317A68:
	// li r11,0
	r11.s64 = 0;
loc_82317A6C:
	// li r10,18
	ctx.r10.s64 = 18;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82317A84"))) PPC_WEAK_FUNC(sub_82317A84);
PPC_FUNC_IMPL(__imp__sub_82317A84) {
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
	// bl 0x821206f0
	sub_821206F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317AAC"))) PPC_WEAK_FUNC(sub_82317AAC);
PPC_FUNC_IMPL(__imp__sub_82317AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82317AB0"))) PPC_WEAK_FUNC(sub_82317AB0);
PPC_FUNC_IMPL(__imp__sub_82317AB0) {
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
	// lwz r16,12176(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12176);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82317b00
	if (cr0.eq) goto loc_82317B00;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82319af8
	sub_82319AF8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82317b04
	goto loc_82317B04;
loc_82317B00:
	// li r11,0
	r11.s64 = 0;
loc_82317B04:
	// li r10,18
	ctx.r10.s64 = 18;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82317AB8"))) PPC_WEAK_FUNC(sub_82317AB8);
PPC_FUNC_IMPL(__imp__sub_82317AB8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82317b00
	if (cr0.eq) goto loc_82317B00;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82319af8
	sub_82319AF8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82317b04
	goto loc_82317B04;
loc_82317B00:
	// li r11,0
	r11.s64 = 0;
loc_82317B04:
	// li r10,18
	ctx.r10.s64 = 18;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82317B1C"))) PPC_WEAK_FUNC(sub_82317B1C);
PPC_FUNC_IMPL(__imp__sub_82317B1C) {
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
	// bl 0x821206f0
	sub_821206F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317B44"))) PPC_WEAK_FUNC(sub_82317B44);
PPC_FUNC_IMPL(__imp__sub_82317B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82317B48"))) PPC_WEAK_FUNC(sub_82317B48);
PPC_FUNC_IMPL(__imp__sub_82317B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,10(r11)
	PPC_STORE_U16(r11.u32 + 10, ctx.r10.u16);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317B6C"))) PPC_WEAK_FUNC(sub_82317B6C);
PPC_FUNC_IMPL(__imp__sub_82317B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82317B70"))) PPC_WEAK_FUNC(sub_82317B70);
PPC_FUNC_IMPL(__imp__sub_82317B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lhz r11,10(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r4)
	PPC_STORE_U16(ctx.r4.u32 + 10, r11.u16);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317B88"))) PPC_WEAK_FUNC(sub_82317B88);
PPC_FUNC_IMPL(__imp__sub_82317B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82317bec
	if (!cr6.eq) goto loc_82317BEC;
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// bne cr6,0x82317bd8
	if (!cr6.eq) goto loc_82317BD8;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82317BB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82317d50
	if (cr0.eq) goto loc_82317D50;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82317bb0
	if (cr6.eq) goto loc_82317BB0;
	// b 0x82317d50
	goto loc_82317D50;
loc_82317BD8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// b 0x82317d54
	goto loc_82317D54;
loc_82317BEC:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82317cd0
	if (cr6.eq) goto loc_82317CD0;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// beq cr6,0x82317cc8
	if (cr6.eq) goto loc_82317CC8;
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// beq cr6,0x82317c80
	if (cr6.eq) goto loc_82317C80;
	// cmpwi cr6,r10,18
	cr6.compare<int32_t>(ctx.r10.s32, 18, xer);
	// beq cr6,0x82317c80
	if (cr6.eq) goto loc_82317C80;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82317c24
	if (cr6.eq) goto loc_82317C24;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82317c24
	if (cr6.eq) goto loc_82317C24;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82317C24:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82317c44
	if (!cr6.eq) goto loc_82317C44;
	// lwa r11,0(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 0));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// b 0x82317c48
	goto loc_82317C48;
loc_82317C44:
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
loc_82317C48:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82317c68
	if (!cr6.eq) goto loc_82317C68;
	// lwa r11,0(r4)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 0));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// b 0x82317c6c
	goto loc_82317C6C;
loc_82317C68:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
loc_82317C6C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82317d58
	if (cr6.eq) goto loc_82317D58;
	// li r11,0
	r11.s64 = 0;
	// b 0x82317d58
	goto loc_82317D58;
loc_82317C80:
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// beq cr6,0x82317c90
	if (cr6.eq) goto loc_82317C90;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82317C90:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x82317ca0
	if (cr6.eq) goto loc_82317CA0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82317CA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82317d50
	if (cr0.eq) goto loc_82317D50;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82317ca0
	if (cr6.eq) goto loc_82317CA0;
	// b 0x82317d50
	goto loc_82317D50;
loc_82317CC8:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82317d00
	if (!cr6.eq) goto loc_82317D00;
loc_82317CD0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82317ce4
	if (cr0.eq) goto loc_82317CE4;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x82317cec
	goto loc_82317CEC;
loc_82317CE4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,9120
	r11.s64 = r11.s64 + 9120;
loc_82317CEC:
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// beq cr6,0x82317d2c
	if (cr6.eq) goto loc_82317D2C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82317d2c
	goto loc_82317D2C;
loc_82317D00:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x82317d10
	if (cr6.eq) goto loc_82317D10;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82317D10:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82317d24
	if (cr0.eq) goto loc_82317D24;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// b 0x82317d2c
	goto loc_82317D2C;
loc_82317D24:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,9120
	ctx.r10.s64 = ctx.r10.s64 + 9120;
loc_82317D2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82317d50
	if (cr0.eq) goto loc_82317D50;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82317d2c
	if (cr6.eq) goto loc_82317D2C;
loc_82317D50:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
loc_82317D54:
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82317D58:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317D60"))) PPC_WEAK_FUNC(sub_82317D60);
PPC_FUNC_IMPL(__imp__sub_82317D60) {
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
	// bl 0x82317b88
	sub_82317B88(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82317D90"))) PPC_WEAK_FUNC(sub_82317D90);
PPC_FUNC_IMPL(__imp__sub_82317D90) {
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
	// beq 0x82317dd0
	if (cr0.eq) goto loc_82317DD0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,28584
	ctx.r3.s64 = r11.s64 + 28584;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82317dd8
	goto loc_82317DD8;
loc_82317DD0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82317DD8:
	// mulli r3,r31,28
	ctx.r3.s64 = r31.s64 * 28;
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

__attribute__((alias("__imp__sub_82317DF4"))) PPC_WEAK_FUNC(sub_82317DF4);
PPC_FUNC_IMPL(__imp__sub_82317DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82317DF8"))) PPC_WEAK_FUNC(sub_82317DF8);
PPC_FUNC_IMPL(__imp__sub_82317DF8) {
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
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x82317e58
	if (cr6.eq) goto loc_82317E58;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82317e30
	if (cr0.eq) goto loc_82317E30;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82317E30:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82317e58
	if (cr0.eq) goto loc_82317E58;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,10(r11)
	PPC_STORE_U16(r11.u32 + 10, ctx.r10.u16);
loc_82317E58:
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

__attribute__((alias("__imp__sub_82317E74"))) PPC_WEAK_FUNC(sub_82317E74);
PPC_FUNC_IMPL(__imp__sub_82317E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82317E78"))) PPC_WEAK_FUNC(sub_82317E78);
PPC_FUNC_IMPL(__imp__sub_82317E78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317E8C"))) PPC_WEAK_FUNC(sub_82317E8C);
PPC_FUNC_IMPL(__imp__sub_82317E8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317E90"))) PPC_WEAK_FUNC(sub_82317E90);
PPC_FUNC_IMPL(__imp__sub_82317E90) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82317ec0
	if (cr0.eq) goto loc_82317EC0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82317EC0:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82317ed0
	if (cr0.eq) goto loc_82317ED0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82317ED0:
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

__attribute__((alias("__imp__sub_82317EEC"))) PPC_WEAK_FUNC(sub_82317EEC);
PPC_FUNC_IMPL(__imp__sub_82317EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82317EF0"))) PPC_WEAK_FUNC(sub_82317EF0);
PPC_FUNC_IMPL(__imp__sub_82317EF0) {
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
	// lwz r16,12232(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12232);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(r11.s32, 17, xer);
	// bne cr6,0x82317f84
	if (!cr6.eq) goto loc_82317F84;
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// lwz r11,-4712(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4712);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r30,r10,-4720
	r30.s64 = ctx.r10.s64 + -4720;
	// bne 0x82317f50
	if (!cr0.eq) goto loc_82317F50;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r10,-32146
	ctx.r10.s64 = -2106720256;
	// addi r3,r10,15680
	ctx.r3.s64 = ctx.r10.s64 + 15680;
	// stw r11,-4712(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4712, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_82317F50:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8231a748
	sub_8231A748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82317f7c
	if (cr0.eq) goto loc_82317F7C;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82317F7C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82317fb8
	goto loc_82317FB8;
loc_82317F84:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82317f94
	if (!cr6.eq) goto loc_82317F94;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x82317fb8
	goto loc_82317FB8;
loc_82317F94:
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(r11.s32, 19, xer);
	// bne cr6,0x82317fb4
	if (!cr6.eq) goto loc_82317FB4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-4212(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4212);
	// bl 0x82315440
	sub_82315440(ctx, base);
	// b 0x82317fb8
	goto loc_82317FB8;
loc_82317FB4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82317FB8:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82317EF8"))) PPC_WEAK_FUNC(sub_82317EF8);
PPC_FUNC_IMPL(__imp__sub_82317EF8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(r11.s32, 17, xer);
	// bne cr6,0x82317f84
	if (!cr6.eq) goto loc_82317F84;
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// lwz r11,-4712(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4712);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r30,r10,-4720
	r30.s64 = ctx.r10.s64 + -4720;
	// bne 0x82317f50
	if (!cr0.eq) goto loc_82317F50;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r10,-32146
	ctx.r10.s64 = -2106720256;
	// addi r3,r10,15680
	ctx.r3.s64 = ctx.r10.s64 + 15680;
	// stw r11,-4712(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4712, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_82317F50:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8231a748
	sub_8231A748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82317f7c
	if (cr0.eq) goto loc_82317F7C;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82317F7C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82317fb8
	goto loc_82317FB8;
loc_82317F84:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82317f94
	if (!cr6.eq) goto loc_82317F94;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x82317fb8
	goto loc_82317FB8;
loc_82317F94:
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(r11.s32, 19, xer);
	// bne cr6,0x82317fb4
	if (!cr6.eq) goto loc_82317FB4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-4212(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4212);
	// bl 0x82315440
	sub_82315440(ctx, base);
	// b 0x82317fb8
	goto loc_82317FB8;
loc_82317FB4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82317FB8:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82317FC0"))) PPC_WEAK_FUNC(sub_82317FC0);
PPC_FUNC_IMPL(__imp__sub_82317FC0) {
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

__attribute__((alias("__imp__sub_82317FE8"))) PPC_WEAK_FUNC(sub_82317FE8);
PPC_FUNC_IMPL(__imp__sub_82317FE8) {
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
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231800C"))) PPC_WEAK_FUNC(sub_8231800C);
PPC_FUNC_IMPL(__imp__sub_8231800C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82318010"))) PPC_WEAK_FUNC(sub_82318010);
PPC_FUNC_IMPL(__imp__sub_82318010) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
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

__attribute__((alias("__imp__sub_82318050"))) PPC_WEAK_FUNC(sub_82318050);
PPC_FUNC_IMPL(__imp__sub_82318050) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82318088
	if (!cr6.eq) goto loc_82318088;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82318094
	goto loc_82318094;
loc_82318088:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82318094:
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

__attribute__((alias("__imp__sub_823180A8"))) PPC_WEAK_FUNC(sub_823180A8);
PPC_FUNC_IMPL(__imp__sub_823180A8) {
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
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x823180cc
	if (!cr6.eq) goto loc_823180CC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x823180d4
	goto loc_823180D4;
loc_823180CC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823180D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823180E4"))) PPC_WEAK_FUNC(sub_823180E4);
PPC_FUNC_IMPL(__imp__sub_823180E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823180E8"))) PPC_WEAK_FUNC(sub_823180E8);
PPC_FUNC_IMPL(__imp__sub_823180E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8231811c
	if (!cr6.eq) goto loc_8231811C;
	// lwa r11,0(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 0));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// b 0x82318120
	goto loc_82318120;
loc_8231811C:
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
loc_82318120:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318130"))) PPC_WEAK_FUNC(sub_82318130);
PPC_FUNC_IMPL(__imp__sub_82318130) {
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
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82318154
	if (!cr6.eq) goto loc_82318154;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8231818c
	goto loc_8231818C;
loc_82318154:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x82318164
	if (!cr6.eq) goto loc_82318164;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8231816c
	goto loc_8231816C;
loc_82318164:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8231816C:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8231818c
	if (cr6.eq) goto loc_8231818C;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-4216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4216);
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
loc_8231818C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231819C"))) PPC_WEAK_FUNC(sub_8231819C);
PPC_FUNC_IMPL(__imp__sub_8231819C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823181A0"))) PPC_WEAK_FUNC(sub_823181A0);
PPC_FUNC_IMPL(__imp__sub_823181A0) {
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
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823181C4"))) PPC_WEAK_FUNC(sub_823181C4);
PPC_FUNC_IMPL(__imp__sub_823181C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823181C8"))) PPC_WEAK_FUNC(sub_823181C8);
PPC_FUNC_IMPL(__imp__sub_823181C8) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-4708
	r31.s64 = r11.s64 + -4708;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x82318200
	goto loc_82318200;
loc_823181F0:
	// addi r11,r3,20
	r11.s64 = ctx.r3.s64 + 20;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82318238
	if (cr6.eq) goto loc_82318238;
	// bl 0x821a6d48
	sub_821A6D48(ctx, base);
loc_82318200:
	// subf r11,r3,r31
	r11.s64 = r31.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823181f0
	if (!cr0.eq) goto loc_823181F0;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r11,12104
	ctx.r3.s64 = r11.s64 + 12104;
loc_82318220:
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
loc_82318238:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82318220
	goto loc_82318220;
}

__attribute__((alias("__imp__sub_82318240"))) PPC_WEAK_FUNC(sub_82318240);
PPC_FUNC_IMPL(__imp__sub_82318240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(r11.u32, 36, xer);
	// bgt cr6,0x8231846c
	if (cr6.gt) goto loc_8231846C;
	// lis r12,-32251
	r12.s64 = -2113601536;
	// addi r12,r12,12296
	r12.s64 = r12.s64 + 12296;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32206
	r12.s64 = -2110652416;
	// addi r12,r12,-32120
	r12.s64 = r12.s64 + -32120;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82318298;
	case 1:
		goto loc_82318368;
	case 2:
		goto loc_823183B0;
	case 3:
		goto loc_823183CC;
	case 4:
		goto loc_8231838C;
	case 5:
		goto loc_82318334;
	case 6:
		goto loc_82318288;
	case 7:
		goto loc_823183F8;
	case 8:
		goto loc_8231841C;
	case 9:
		goto loc_82318428;
	case 10:
		goto loc_8231846C;
	case 11:
		goto loc_8231846C;
	case 12:
		goto loc_8231846C;
	case 13:
		goto loc_8231846C;
	case 14:
		goto loc_8231846C;
	case 15:
		goto loc_8231846C;
	case 16:
		goto loc_82318378;
	case 17:
		goto loc_82318378;
	case 18:
		goto loc_823182A8;
	case 19:
		goto loc_82318378;
	case 20:
		goto loc_8231846C;
	case 21:
		goto loc_8231846C;
	case 22:
		goto loc_8231846C;
	case 23:
		goto loc_8231846C;
	case 24:
		goto loc_8231846C;
	case 25:
		goto loc_8231846C;
	case 26:
		goto loc_8231846C;
	case 27:
		goto loc_8231846C;
	case 28:
		goto loc_8231846C;
	case 29:
		goto loc_8231846C;
	case 30:
		goto loc_8231846C;
	case 31:
		goto loc_8231846C;
	case 32:
		goto loc_823183EC;
	case 33:
		goto loc_82318434;
	case 34:
		goto loc_82318440;
	case 35:
		goto loc_82318404;
	case 36:
		goto loc_82318410;
	default:
		__builtin_unreachable();
	}
loc_82318288:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,12484
	ctx.r4.s64 = r11.s64 + 12484;
loc_82318290:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82318468
	goto loc_82318468;
loc_82318298:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82357818
	sub_82357818(ctx, base);
	// b 0x8231846c
	goto loc_8231846C;
loc_823182A8:
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82318328
	if (cr0.eq) goto loc_82318328;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r29,r11,12480
	r29.s64 = r11.s64 + 12480;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8239f348
	sub_8239F348(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8231831c
	if (cr0.eq) goto loc_8231831C;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r28,r11,12476
	r28.s64 = r11.s64 + 12476;
loc_823182E4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8239f348
	sub_8239F348(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8231831c
	if (cr0.eq) goto loc_8231831C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// li r11,34
	r11.s64 = 34;
	// stb r11,-1(r30)
	PPC_STORE_U8(r30.u32 + -1, r11.u8);
	// b 0x823182e4
	goto loc_823182E4;
loc_8231831C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82318320:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82318468
	goto loc_82318468;
loc_82318328:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82318468
	goto loc_82318468;
loc_82318334:
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82318360
	if (cr0.eq) goto loc_82318360;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r29,r11,12472
	r29.s64 = r11.s64 + 12472;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// b 0x82318320
	goto loc_82318320;
loc_82318360:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82318468
	goto loc_82318468;
loc_82318368:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82357878
	sub_82357878(ctx, base);
	// b 0x8231846c
	goto loc_8231846C;
loc_82318378:
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82318e58
	sub_82318E58(ctx, base);
	// b 0x8231846c
	goto loc_8231846C;
loc_8231838C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823183a4
	if (cr0.eq) goto loc_823183A4;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x82318468
	goto loc_82318468;
loc_823183A4:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,12104
	ctx.r4.s64 = r11.s64 + 12104;
	// b 0x82318468
	goto loc_82318468;
loc_823183B0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823181c8
	sub_823181C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823577b8
	sub_823577B8(ctx, base);
	// b 0x82318464
	goto loc_82318464;
loc_823183CC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8232c700
	sub_8232C700(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82357918
	sub_82357918(ctx, base);
	// b 0x8231846c
	goto loc_8231846C;
loc_823183EC:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,12460
	ctx.r4.s64 = r11.s64 + 12460;
	// b 0x82318448
	goto loc_82318448;
loc_823183F8:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,12448
	ctx.r4.s64 = r11.s64 + 12448;
	// b 0x82318448
	goto loc_82318448;
loc_82318404:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,12436
	ctx.r4.s64 = r11.s64 + 12436;
	// b 0x82318448
	goto loc_82318448;
loc_82318410:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,12424
	ctx.r4.s64 = r11.s64 + 12424;
	// b 0x82318290
	goto loc_82318290;
loc_8231841C:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,12416
	ctx.r4.s64 = r11.s64 + 12416;
	// b 0x82318290
	goto loc_82318290;
loc_82318428:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,12404
	ctx.r4.s64 = r11.s64 + 12404;
	// b 0x82318290
	goto loc_82318290;
loc_82318434:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,12392
	ctx.r4.s64 = r11.s64 + 12392;
	// b 0x82318448
	goto loc_82318448;
loc_82318440:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,12380
	ctx.r4.s64 = r11.s64 + 12380;
loc_82318448:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,2936
	r30.s64 = r11.s64 + 2936;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_82318464:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82318468:
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_8231846C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82318474"))) PPC_WEAK_FUNC(sub_82318474);
PPC_FUNC_IMPL(__imp__sub_82318474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82318478"))) PPC_WEAK_FUNC(sub_82318478);
PPC_FUNC_IMPL(__imp__sub_82318478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(r11.s32, 35, xer);
	// bgt cr6,0x82318580
	if (cr6.gt) goto loc_82318580;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bge cr6,0x82318578
	if (!cr6.lt) goto loc_82318578;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// bgt cr6,0x82318580
	if (cr6.gt) goto loc_82318580;
	// lis r12,-32251
	r12.s64 = -2113601536;
	// addi r12,r12,12336
	r12.s64 = r12.s64 + 12336;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-32206
	r12.s64 = -2110652416;
	// addi r12,r12,-31500
	r12.s64 = r12.s64 + -31500;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82318508;
	case 1:
		goto loc_8231854C;
	case 2:
		goto loc_8231855C;
	case 3:
		goto loc_82318528;
	case 4:
		goto loc_82318578;
	case 5:
		goto loc_82318580;
	case 6:
		goto loc_82318578;
	case 7:
		goto loc_82318580;
	case 8:
		goto loc_82318580;
	case 9:
		goto loc_82318580;
	case 10:
		goto loc_82318580;
	case 11:
		goto loc_82318580;
	case 12:
		goto loc_82318580;
	case 13:
		goto loc_82318580;
	case 14:
		goto loc_82318580;
	case 15:
		goto loc_82318518;
	case 16:
		goto loc_82318518;
	case 17:
		goto loc_823184F4;
	case 18:
		goto loc_82318518;
	default:
		__builtin_unreachable();
	}
loc_823184F4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823184FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82318500:
	// bl 0x823594a8
	sub_823594A8(ctx, base);
	// b 0x82318598
	goto loc_82318598;
loc_82318508:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x8231858c
	goto loc_8231858C;
loc_82318518:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82319dc0
	sub_82319DC0(ctx, base);
	// b 0x82318598
	goto loc_82318598;
loc_82318528:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82318540
	if (cr0.eq) goto loc_82318540;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x82318500
	goto loc_82318500;
loc_82318540:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
	// b 0x82318500
	goto loc_82318500;
loc_8231854C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823181c8
	sub_823181C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823184fc
	goto loc_823184FC;
loc_8231855C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8232c700
	sub_8232C700(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359510
	sub_82359510(ctx, base);
	// b 0x82318598
	goto loc_82318598;
loc_82318578:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x823184fc
	goto loc_823184FC;
loc_82318580:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_8231858C:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359440
	sub_82359440(ctx, base);
loc_82318598:
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

__attribute__((alias("__imp__sub_823185B0"))) PPC_WEAK_FUNC(sub_823185B0);
PPC_FUNC_IMPL(__imp__sub_823185B0) {
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
	// bl 0x82317d90
	sub_82317D90(ctx, base);
	// addic. r11,r3,16
	xer.ca = ctx.r3.u32 > 4294967279;
	r11.s64 = ctx.r3.s64 + 16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82318608
	if (cr0.eq) goto loc_82318608;
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
	// rlwinm. r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82318608
	if (cr0.eq) goto loc_82318608;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,10(r11)
	PPC_STORE_U16(r11.u32 + 10, ctx.r10.u16);
loc_82318608:
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
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

__attribute__((alias("__imp__sub_82318628"))) PPC_WEAK_FUNC(sub_82318628);
PPC_FUNC_IMPL(__imp__sub_82318628) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82318678
	if (cr6.eq) goto loc_82318678;
loc_82318644:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82318628
	sub_82318628(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82317e90
	sub_82317E90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82318644
	if (!cr6.eq) goto loc_82318644;
loc_82318678:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82318680"))) PPC_WEAK_FUNC(sub_82318680);
PPC_FUNC_IMPL(__imp__sub_82318680) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bne cr6,0x823186bc
	if (!cr6.eq) goto loc_823186BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823185b0
	sub_823185B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// b 0x82318724
	goto loc_82318724;
loc_823186BC:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82318708
	if (!cr6.eq) goto loc_82318708;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x823186e4
	if (!cr6.eq) goto loc_823186E4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82318708
	if (cr0.eq) goto loc_82318708;
loc_823186E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823185b0
	sub_823185B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r30.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82318728
	if (!cr6.eq) goto loc_82318728;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x82318728
	goto loc_82318728;
loc_82318708:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823185b0
	sub_823185B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r30.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82318728
	if (!cr6.eq) goto loc_82318728;
loc_82318724:
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_82318728:
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a7018
	sub_821A7018(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82318754"))) PPC_WEAK_FUNC(sub_82318754);
PPC_FUNC_IMPL(__imp__sub_82318754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82318758"))) PPC_WEAK_FUNC(sub_82318758);
PPC_FUNC_IMPL(__imp__sub_82318758) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r26,1
	r26.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// lwz r29,4(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r11,r26
	r11.u64 = r26.u64;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x823187b8
	if (cr0.eq) goto loc_823187B8;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_8231878C:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r31,r29
	r31.u64 = r29.u64;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	r11.s64 = ctx.r10.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823187ac
	if (cr0.eq) goto loc_823187AC;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// b 0x823187b0
	goto loc_823187B0;
loc_823187AC:
	// lwz r29,12(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 12);
loc_823187B0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8231878c
	if (!cr6.eq) goto loc_8231878C;
loc_823187B8:
	// clrlwi. r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r31
	r11.u64 = r31.u64;
	// beq 0x82318810
	if (cr0.eq) goto loc_82318810;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82318804
	if (cr0.eq) goto loc_82318804;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_823187DC:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82318680
	sub_82318680(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r26,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r26.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82318838
	goto loc_82318838;
loc_82318804:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a6e00
	sub_821A6E00(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82318810:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82318830
	if (cr0.eq) goto loc_82318830;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// b 0x823187dc
	goto loc_823187DC;
loc_82318830:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4(r30)
	PPC_STORE_U8(r30.u32 + 4, ctx.r10.u8);
loc_82318838:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82318848"))) PPC_WEAK_FUNC(sub_82318848);
PPC_FUNC_IMPL(__imp__sub_82318848) {
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82318884
	if (cr6.eq) goto loc_82318884;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82318628
	sub_82318628(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r31,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r31.u32);
	// stw r31,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r31.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_82318884:
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

__attribute__((alias("__imp__sub_82318898"))) PPC_WEAK_FUNC(sub_82318898);
PPC_FUNC_IMPL(__imp__sub_82318898) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r30,0(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82318988
	if (!cr6.eq) goto loc_82318988;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82318a80
	if (!cr0.eq) goto loc_82318A80;
	// lwz r27,0(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// subfc r10,r11,r27
	xer.ca = r27.u32 >= r11.u32;
	ctx.r10.s64 = r27.s64 - r11.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82318908
	if (cr0.eq) goto loc_82318908;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_823188F0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_823188F8:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82318900:
	// bl 0x82318680
	sub_82318680(ctx, base);
	// b 0x82318a9c
	goto loc_82318A9C;
loc_82318908:
	// subfc r11,r27,r11
	xer.ca = r11.u32 >= r27.u32;
	r11.s64 = r11.s64 - r27.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82318920
	if (!cr0.eq) goto loc_82318920;
loc_82318918:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x82318a9c
	goto loc_82318A9C;
loc_82318920:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a6d48
	sub_821A6D48(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, xer);
	// bne cr6,0x82318940
	if (!cr6.eq) goto loc_82318940;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x823188f0
	goto loc_823188F0;
loc_82318940:
	// lwz r11,16(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// subfc r11,r11,r27
	xer.ca = r27.u32 >= r11.u32;
	r11.s64 = r27.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82318a80
	if (cr0.eq) goto loc_82318A80;
loc_82318954:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8231897c
	if (!cr6.eq) goto loc_8231897C;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82318974:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x82318900
	goto loc_82318900;
loc_8231897C:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// b 0x82318900
	goto loc_82318900;
loc_82318988:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// bne cr6,0x823189bc
	if (!cr6.eq) goto loc_823189BC;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	r11.s64 = ctx.r10.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82318a84
	if (cr0.eq) goto loc_82318A84;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x823188f8
	goto loc_823188F8;
loc_823189BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a6e00
	sub_821A6E00(ctx, base);
	// lwz r26,0(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r25,16(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// subfc r11,r25,r26
	xer.ca = r26.u32 >= r25.u32;
	r11.s64 = r26.s64 - r25.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r27,r11,31
	r27.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82318a24
	if (cr0.eq) goto loc_82318A24;
	// lwz r11,16(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// subfc r11,r26,r11
	xer.ca = r11.u32 >= r26.u32;
	r11.s64 = r11.s64 - r26.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82318a24
	if (cr0.eq) goto loc_82318A24;
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82318a18
	if (!cr6.eq) goto loc_82318A18;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// b 0x82318900
	goto loc_82318900;
loc_82318A18:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// b 0x82318974
	goto loc_82318974;
loc_82318A24:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a6d48
	sub_821A6D48(ctx, base);
	// cntlzw r11,r27
	r11.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// bne cr6,0x82318a74
	if (!cr6.eq) goto loc_82318A74;
	// subfc r11,r26,r25
	xer.ca = r25.u32 >= r26.u32;
	r11.s64 = r25.s64 - r26.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// clrlwi. r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82318a74
	if (cr0.eq) goto loc_82318A74;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, xer);
	// beq cr6,0x82318954
	if (cr6.eq) goto loc_82318954;
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// subfc r10,r10,r26
	xer.ca = r26.u32 >= ctx.r10.u32;
	ctx.r10.s64 = r26.s64 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82318954
	if (!cr0.eq) goto loc_82318954;
loc_82318A74:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x82318918
	if (cr6.eq) goto loc_82318918;
loc_82318A80:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82318A84:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82318758
	sub_82318758(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82318A9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82318AA8"))) PPC_WEAK_FUNC(sub_82318AA8);
PPC_FUNC_IMPL(__imp__sub_82318AA8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,12512(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12512);
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82318b08
	if (cr0.eq) goto loc_82318B08;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82318ADC:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// subfc r8,r9,r8
	xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82318afc
	if (!cr0.eq) goto loc_82318AFC;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82318b00
	goto loc_82318B00;
loc_82318AFC:
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
loc_82318B00:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82318adc
	if (!cr6.eq) goto loc_82318ADC;
loc_82318B08:
	// subf r11,r10,r3
	r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82318b34
	if (!cr0.eq) goto loc_82318B34;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// subfc r11,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	r11.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82318b80
	if (cr0.eq) goto loc_82318B80;
loc_82318B34:
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82318898
	sub_82318898(ctx, base);
	// lwz r30,84(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82318b80
	if (cr0.eq) goto loc_82318B80;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82318B80:
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
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

__attribute__((alias("__imp__sub_82318AB0"))) PPC_WEAK_FUNC(sub_82318AB0);
PPC_FUNC_IMPL(__imp__sub_82318AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82318b08
	if (cr0.eq) goto loc_82318B08;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82318ADC:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// subfc r8,r9,r8
	xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82318afc
	if (!cr0.eq) goto loc_82318AFC;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82318b00
	goto loc_82318B00;
loc_82318AFC:
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
loc_82318B00:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82318adc
	if (!cr6.eq) goto loc_82318ADC;
loc_82318B08:
	// subf r11,r10,r3
	r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82318b34
	if (!cr0.eq) goto loc_82318B34;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// subfc r11,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	r11.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82318b80
	if (cr0.eq) goto loc_82318B80;
loc_82318B34:
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82318898
	sub_82318898(ctx, base);
	// lwz r30,84(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82318b80
	if (cr0.eq) goto loc_82318B80;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82318B80:
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
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

__attribute__((alias("__imp__sub_82318B9C"))) PPC_WEAK_FUNC(sub_82318B9C);
PPC_FUNC_IMPL(__imp__sub_82318B9C) {
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

__attribute__((alias("__imp__sub_82318BC4"))) PPC_WEAK_FUNC(sub_82318BC4);
PPC_FUNC_IMPL(__imp__sub_82318BC4) {
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
	// bl 0x82317e78
	sub_82317E78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318BEC"))) PPC_WEAK_FUNC(sub_82318BEC);
PPC_FUNC_IMPL(__imp__sub_82318BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82318BF0"))) PPC_WEAK_FUNC(sub_82318BF0);
PPC_FUNC_IMPL(__imp__sub_82318BF0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r11,-4708
	ctx.r3.s64 = r11.s64 + -4708;
	// bl 0x82318ab0
	sub_82318AB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318C20"))) PPC_WEAK_FUNC(sub_82318C20);
PPC_FUNC_IMPL(__imp__sub_82318C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r16,12584(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12584);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-2320
	r31.s64 = ctx.r1.s64 + -2320;
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lhz r11,80(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 80);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(r11.s32, 35, xer);
	// bgt cr6,0x82318dec
	if (cr6.gt) {
		sub_82318DEC(ctx, base);
		return;
	}
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bge cr6,0x82318dc8
	if (!cr6.lt) {
		sub_82318DC8(ctx, base);
		return;
	}
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// bgt cr6,0x82318dec
	if (cr6.gt) {
		sub_82318DEC(ctx, base);
		return;
	}
	// lis r12,-32251
	r12.s64 = -2113601536;
	// addi r12,r12,12360
	r12.s64 = r12.s64 + 12360;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32206
	r12.s64 = -2110652416;
	// addi r12,r12,-29520
	r12.s64 = r12.s64 + -29520;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		// ERROR: 0x82318DEC
		return;
	case 1:
		// ERROR: 0x82318D94
		return;
	case 2:
		// ERROR: 0x82318CB0
		return;
	case 3:
		// ERROR: 0x82318D68
		return;
	case 4:
		// ERROR: 0x82318DC8
		return;
	case 5:
		// ERROR: 0x82318DEC
		return;
	case 6:
		// ERROR: 0x82318DC8
		return;
	case 7:
		// ERROR: 0x82318DEC
		return;
	case 8:
		// ERROR: 0x82318DEC
		return;
	case 9:
		// ERROR: 0x82318DEC
		return;
	case 10:
		// ERROR: 0x82318DEC
		return;
	case 11:
		// ERROR: 0x82318DEC
		return;
	case 12:
		// ERROR: 0x82318DEC
		return;
	case 13:
		// ERROR: 0x82318DEC
		return;
	case 14:
		// ERROR: 0x82318DEC
		return;
	case 15:
		// ERROR: 0x82318D28
		return;
	case 16:
		// ERROR: 0x82318D28
		return;
	case 17:
		// ERROR: 0x82318CE0
		return;
	case 18:
		// ERROR: 0x82318D28
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82318C28"))) PPC_WEAK_FUNC(sub_82318C28);
PPC_FUNC_IMPL(__imp__sub_82318C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-2320
	r31.s64 = ctx.r1.s64 + -2320;
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lhz r11,80(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 80);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(r11.s32, 35, xer);
	// bgt cr6,0x82318dec
	if (cr6.gt) goto loc_82318DEC;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bge cr6,0x82318dc8
	if (!cr6.lt) goto loc_82318DC8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// bgt cr6,0x82318dec
	if (cr6.gt) goto loc_82318DEC;
	// lis r12,-32251
	r12.s64 = -2113601536;
	// addi r12,r12,12360
	r12.s64 = r12.s64 + 12360;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32206
	r12.s64 = -2110652416;
	// addi r12,r12,-29520
	r12.s64 = r12.s64 + -29520;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82318DEC;
	case 1:
		goto loc_82318D94;
	case 2:
		goto loc_82318CB0;
	case 3:
		goto loc_82318D68;
	case 4:
		goto loc_82318DC8;
	case 5:
		goto loc_82318DEC;
	case 6:
		goto loc_82318DC8;
	case 7:
		goto loc_82318DEC;
	case 8:
		goto loc_82318DEC;
	case 9:
		goto loc_82318DEC;
	case 10:
		goto loc_82318DEC;
	case 11:
		goto loc_82318DEC;
	case 12:
		goto loc_82318DEC;
	case 13:
		goto loc_82318DEC;
	case 14:
		goto loc_82318DEC;
	case 15:
		goto loc_82318D28;
	case 16:
		goto loc_82318D28;
	case 17:
		goto loc_82318CE0;
	case 18:
		goto loc_82318D28;
	default:
		__builtin_unreachable();
	}
loc_82318CB0:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x82359638
	sub_82359638(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r11,-2544
	ctx.r3.s64 = r11.s64 + -2544;
	// bl 0x822f6ef8
	sub_822F6EF8(ctx, base);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x82318de4
	goto loc_82318DE4;
loc_82318CE0:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r31,240
	ctx.r4.s64 = r31.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82318d1c
	if (cr0.eq) goto loc_82318D1C;
	// addi r4,r31,240
	ctx.r4.s64 = r31.s64 + 240;
	// bl 0x82319af8
	sub_82319AF8(ctx, base);
	// b 0x82318d20
	goto loc_82318D20;
loc_82318D1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82318D20:
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// b 0x82318dfc
	goto loc_82318DFC;
loc_82318D28:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82318d54
	if (cr0.eq) goto loc_82318D54;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// b 0x82318d58
	goto loc_82318D58;
loc_82318D54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82318D58:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// bl 0x8231aa20
	sub_8231AA20(ctx, base);
	// b 0x82318dfc
	goto loc_82318DFC;
loc_82318D68:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r3,-4216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4216);
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
loc_82318D8C:
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// b 0x82318dfc
	goto loc_82318DFC;
loc_82318D94:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x82359638
	sub_82359638(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r11,-4708
	ctx.r3.s64 = r11.s64 + -4708;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82318ab0
	sub_82318AB0(ctx, base);
	// b 0x82318d8c
	goto loc_82318D8C;
loc_82318DC8:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x82359638
	sub_82359638(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82318DE4:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82318dfc
	goto loc_82318DFC;
loc_82318DEC:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_82318DFC:
	// addi r1,r31,2320
	ctx.r1.s64 = r31.s64 + 2320;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82318CB0"))) PPC_WEAK_FUNC(sub_82318CB0);
PPC_FUNC_IMPL(__imp__sub_82318CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x82359638
	sub_82359638(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r11,-2544
	ctx.r3.s64 = r11.s64 + -2544;
	// bl 0x822f6ef8
	sub_822F6EF8(ctx, base);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x82318de4
	// ERROR 82318DE4
	return;
}

__attribute__((alias("__imp__sub_82318CE0"))) PPC_WEAK_FUNC(sub_82318CE0);
PPC_FUNC_IMPL(__imp__sub_82318CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r31,240
	ctx.r4.s64 = r31.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82318d1c
	if (cr0.eq) goto loc_82318D1C;
	// addi r4,r31,240
	ctx.r4.s64 = r31.s64 + 240;
	// bl 0x82319af8
	sub_82319AF8(ctx, base);
	// b 0x82318d20
	goto loc_82318D20;
loc_82318D1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82318D20:
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// b 0x82318dfc
	// ERROR 82318DFC
	return;
}

__attribute__((alias("__imp__sub_82318D28"))) PPC_WEAK_FUNC(sub_82318D28);
PPC_FUNC_IMPL(__imp__sub_82318D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82318d54
	if (cr0.eq) goto loc_82318D54;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// b 0x82318d58
	goto loc_82318D58;
loc_82318D54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82318D58:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// bl 0x8231aa20
	sub_8231AA20(ctx, base);
	// b 0x82318dfc
	// ERROR 82318DFC
	return;
}

__attribute__((alias("__imp__sub_82318D68"))) PPC_WEAK_FUNC(sub_82318D68);
PPC_FUNC_IMPL(__imp__sub_82318D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r3,-4216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4216);
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// b 0x82318dfc
	// ERROR 82318DFC
	return;
}

__attribute__((alias("__imp__sub_82318D94"))) PPC_WEAK_FUNC(sub_82318D94);
PPC_FUNC_IMPL(__imp__sub_82318D94) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x82359638
	sub_82359638(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r11,-4708
	ctx.r3.s64 = r11.s64 + -4708;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82318ab0
	sub_82318AB0(ctx, base);
	// b 0x82318d8c
	// ERROR 82318D8C
	return;
}

__attribute__((alias("__imp__sub_82318DC8"))) PPC_WEAK_FUNC(sub_82318DC8);
PPC_FUNC_IMPL(__imp__sub_82318DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x82359638
	sub_82359638(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82318dfc
	// ERROR 82318DFC
	return;
}

__attribute__((alias("__imp__sub_82318DEC"))) PPC_WEAK_FUNC(sub_82318DEC);
PPC_FUNC_IMPL(__imp__sub_82318DEC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r1,r31,2320
	ctx.r1.s64 = r31.s64 + 2320;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82318E04"))) PPC_WEAK_FUNC(sub_82318E04);
PPC_FUNC_IMPL(__imp__sub_82318E04) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-2320
	r31.s64 = r12.s64 + -2320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x821206f0
	sub_821206F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318E2C"))) PPC_WEAK_FUNC(sub_82318E2C);
PPC_FUNC_IMPL(__imp__sub_82318E2C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-2320
	r31.s64 = r12.s64 + -2320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x821206f0
	sub_821206F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318E54"))) PPC_WEAK_FUNC(sub_82318E54);
PPC_FUNC_IMPL(__imp__sub_82318E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82318E58"))) PPC_WEAK_FUNC(sub_82318E58);
PPC_FUNC_IMPL(__imp__sub_82318E58) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r10,r10,12680
	ctx.r10.s64 = ctx.r10.s64 + 12680;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lbz r4,-16(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + -16);
	// lbz r26,-13(r10)
	r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + -13);
	// lha r9,8(r29)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + r11.u64;
	// b 0x82318ea4
	goto loc_82318EA4;
loc_82318E94:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82318eac
	if (!cr0.eq) goto loc_82318EAC;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82318EA4:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// blt cr6,0x82318e94
	if (cr6.lt) goto loc_82318E94;
loc_82318EAC:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82318f48
	if (cr6.eq) goto loc_82318F48;
	// clrlwi. r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82318f48
	if (!cr0.eq) goto loc_82318F48;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r11,2936
	r27.s64 = r11.s64 + 2936;
	// bl 0x823577b8
	sub_823577B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,-4280(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -4280);
	// addi r4,r11,3
	ctx.r4.s64 = r11.s64 + 3;
	// stw r4,-4280(r28)
	PPC_STORE_U32(r28.u32 + -4280, ctx.r4.u32);
loc_82318EE8:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bge cr6,0x82318f24
	if (!cr6.lt) goto loc_82318F24;
	// bl 0x823579b8
	sub_823579B8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82318240
	sub_82318240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lwz r4,-4280(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + -4280);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// b 0x82318ee8
	goto loc_82318EE8;
loc_82318F24:
	// addi r4,r4,-3
	ctx.r4.s64 = ctx.r4.s64 + -3;
	// stw r4,-4280(r28)
	PPC_STORE_U32(r28.u32 + -4280, ctx.r4.u32);
	// bl 0x823579b8
	sub_823579B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823577b8
	sub_823577B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// b 0x82318fa0
	goto loc_82318FA0;
loc_82318F48:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r11,2836
	r28.s64 = r11.s64 + 2836;
	// bl 0x823577b8
	sub_823577B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x82318f8c
	goto loc_82318F8C;
loc_82318F68:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82318240
	sub_82318240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
loc_82318F8C:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// blt cr6,0x82318f68
	if (cr6.lt) goto loc_82318F68;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823577b8
	sub_823577B8(ctx, base);
loc_82318FA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82318FA8"))) PPC_WEAK_FUNC(sub_82318FA8);
PPC_FUNC_IMPL(__imp__sub_82318FA8) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82318fd8
	if (cr0.eq) goto loc_82318FD8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82318FD8:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82318fe8
	if (cr0.eq) goto loc_82318FE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82318FE8:
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

__attribute__((alias("__imp__sub_82319004"))) PPC_WEAK_FUNC(sub_82319004);
PPC_FUNC_IMPL(__imp__sub_82319004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319008"))) PPC_WEAK_FUNC(sub_82319008);
PPC_FUNC_IMPL(__imp__sub_82319008) {
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
	// lwz r16,12720(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12720);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r29.u32);
	// lha r26,8(r25)
	r26.s64 = int16_t(PPC_LOAD_U16(r25.u32 + 8));
	// cmpwi r26,0
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x82319194
	if (cr0.eq) goto loc_82319194;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lwz r24,0(r29)
	r24.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// add r23,r11,r26
	r23.u64 = r11.u64 + r26.u64;
	// rlwinm r3,r23,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82354ff8
	sub_82354FF8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// ble cr6,0x82319098
	if (!cr6.gt) goto loc_82319098;
loc_8231906C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x82319088
	if (cr0.eq) goto loc_82319088;
	// add r4,r11,r24
	ctx.r4.u64 = r11.u64 + r24.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_82319088:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// blt cr6,0x8231906c
	if (cr6.lt) goto loc_8231906C;
loc_82319098:
	// add r27,r26,r28
	r27.u64 = r26.u64 + r28.u64;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// bge cr6,0x823190dc
	if (!cr6.lt) goto loc_823190DC;
loc_823190A4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x823190cc
	if (cr0.eq) goto loc_823190CC;
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_823190CC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// blt cr6,0x823190a4
	if (cr6.lt) goto loc_823190A4;
loc_823190DC:
	// cmpw cr6,r30,r23
	cr6.compare<int32_t>(r30.s32, r23.s32, xer);
	// bge cr6,0x82319118
	if (!cr6.lt) goto loc_82319118;
loc_823190E4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x82319108
	if (cr0.eq) goto loc_82319108;
	// subf r11,r26,r30
	r11.s64 = r30.s64 - r26.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = r11.u64 + r24.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_82319108:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r23
	cr6.compare<int32_t>(r30.s32, r23.s32, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// blt cr6,0x823190e4
	if (cr6.lt) goto loc_823190E4;
loc_82319118:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// li r28,0
	r28.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8231914c
	if (!cr0.gt) goto loc_8231914C;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8231912C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82318fa8
	sub_82318FA8(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8231912c
	if (cr6.lt) goto loc_8231912C;
loc_8231914C:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// rlwinm. r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82319188
	if (!cr0.eq) goto loc_82319188;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82319188
	if (cr6.eq) goto loc_82319188;
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82319168:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82319168
	if (!cr6.eq) goto loc_82319168;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
loc_82319188:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// sth r23,8(r29)
	PPC_STORE_U16(r29.u32 + 8, r23.u16);
loc_82319194:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82319010"))) PPC_WEAK_FUNC(sub_82319010);
PPC_FUNC_IMPL(__imp__sub_82319010) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r29.u32);
	// lha r26,8(r25)
	r26.s64 = int16_t(PPC_LOAD_U16(r25.u32 + 8));
	// cmpwi r26,0
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x82319194
	if (cr0.eq) goto loc_82319194;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lwz r24,0(r29)
	r24.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// add r23,r11,r26
	r23.u64 = r11.u64 + r26.u64;
	// rlwinm r3,r23,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82354ff8
	sub_82354FF8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// ble cr6,0x82319098
	if (!cr6.gt) goto loc_82319098;
loc_8231906C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x82319088
	if (cr0.eq) goto loc_82319088;
	// add r4,r11,r24
	ctx.r4.u64 = r11.u64 + r24.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_82319088:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// blt cr6,0x8231906c
	if (cr6.lt) goto loc_8231906C;
loc_82319098:
	// add r27,r26,r28
	r27.u64 = r26.u64 + r28.u64;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// bge cr6,0x823190dc
	if (!cr6.lt) goto loc_823190DC;
loc_823190A4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x823190cc
	if (cr0.eq) goto loc_823190CC;
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_823190CC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// blt cr6,0x823190a4
	if (cr6.lt) goto loc_823190A4;
loc_823190DC:
	// cmpw cr6,r30,r23
	cr6.compare<int32_t>(r30.s32, r23.s32, xer);
	// bge cr6,0x82319118
	if (!cr6.lt) goto loc_82319118;
loc_823190E4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x82319108
	if (cr0.eq) goto loc_82319108;
	// subf r11,r26,r30
	r11.s64 = r30.s64 - r26.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = r11.u64 + r24.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_82319108:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r23
	cr6.compare<int32_t>(r30.s32, r23.s32, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// blt cr6,0x823190e4
	if (cr6.lt) goto loc_823190E4;
loc_82319118:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// li r28,0
	r28.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8231914c
	if (!cr0.gt) goto loc_8231914C;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8231912C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82318fa8
	sub_82318FA8(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8231912c
	if (cr6.lt) goto loc_8231912C;
loc_8231914C:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// rlwinm. r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82319188
	if (!cr0.eq) goto loc_82319188;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82319188
	if (cr6.eq) goto loc_82319188;
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82319168:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82319168
	if (!cr6.eq) goto loc_82319168;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
loc_82319188:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// sth r23,8(r29)
	PPC_STORE_U16(r29.u32 + 8, r23.u16);
loc_82319194:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8231919C"))) PPC_WEAK_FUNC(sub_8231919C);
PPC_FUNC_IMPL(__imp__sub_8231919C) {
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_823191D8"))) PPC_WEAK_FUNC(sub_823191D8);
PPC_FUNC_IMPL(__imp__sub_823191D8) {
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_82319214"))) PPC_WEAK_FUNC(sub_82319214);
PPC_FUNC_IMPL(__imp__sub_82319214) {
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_82319250"))) PPC_WEAK_FUNC(sub_82319250);
PPC_FUNC_IMPL(__imp__sub_82319250) {
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
	// lwz r16,12816(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12816);
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r26,r11,-1
	r26.s64 = r11.s64 + -1;
	// rlwinm r3,r26,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82354ff8
	sub_82354FF8(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// ble cr6,0x823192d0
	if (!cr6.gt) goto loc_823192D0;
loc_823192A4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r28,3,0,28
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x823192c0
	if (cr0.eq) goto loc_823192C0;
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_823192C0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r29
	cr6.compare<int32_t>(r28.s32, r29.s32, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// blt cr6,0x823192a4
	if (cr6.lt) goto loc_823192A4;
loc_823192D0:
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// bge cr6,0x8231930c
	if (!cr6.lt) goto loc_8231930C;
loc_823192DC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x823192fc
	if (cr0.eq) goto loc_823192FC;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_823192FC:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// blt cr6,0x823192dc
	if (cr6.lt) goto loc_823192DC;
loc_8231930C:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// li r28,0
	r28.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82319340
	if (!cr0.gt) goto loc_82319340;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82319320:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82318fa8
	sub_82318FA8(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82319320
	if (cr6.lt) goto loc_82319320;
loc_82319340:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// rlwinm. r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8231937c
	if (!cr0.eq) goto loc_8231937C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8231937c
	if (cr6.eq) goto loc_8231937C;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8231935C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8231935c
	if (!cr6.eq) goto loc_8231935C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
loc_8231937C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// sth r26,8(r30)
	PPC_STORE_U16(r30.u32 + 8, r26.u16);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82319258"))) PPC_WEAK_FUNC(sub_82319258);
PPC_FUNC_IMPL(__imp__sub_82319258) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r26,r11,-1
	r26.s64 = r11.s64 + -1;
	// rlwinm r3,r26,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82354ff8
	sub_82354FF8(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// ble cr6,0x823192d0
	if (!cr6.gt) goto loc_823192D0;
loc_823192A4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r28,3,0,28
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x823192c0
	if (cr0.eq) goto loc_823192C0;
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_823192C0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r29
	cr6.compare<int32_t>(r28.s32, r29.s32, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// blt cr6,0x823192a4
	if (cr6.lt) goto loc_823192A4;
loc_823192D0:
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// bge cr6,0x8231930c
	if (!cr6.lt) goto loc_8231930C;
loc_823192DC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x823192fc
	if (cr0.eq) goto loc_823192FC;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_823192FC:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// blt cr6,0x823192dc
	if (cr6.lt) goto loc_823192DC;
loc_8231930C:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// li r28,0
	r28.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82319340
	if (!cr0.gt) goto loc_82319340;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82319320:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82318fa8
	sub_82318FA8(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82319320
	if (cr6.lt) goto loc_82319320;
loc_82319340:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// rlwinm. r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8231937c
	if (!cr0.eq) goto loc_8231937C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8231937c
	if (cr6.eq) goto loc_8231937C;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8231935C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8231935c
	if (!cr6.eq) goto loc_8231935C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
loc_8231937C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// sth r26,8(r30)
	PPC_STORE_U16(r30.u32 + 8, r26.u16);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82319390"))) PPC_WEAK_FUNC(sub_82319390);
PPC_FUNC_IMPL(__imp__sub_82319390) {
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_823193CC"))) PPC_WEAK_FUNC(sub_823193CC);
PPC_FUNC_IMPL(__imp__sub_823193CC) {
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_82319408"))) PPC_WEAK_FUNC(sub_82319408);
PPC_FUNC_IMPL(__imp__sub_82319408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lha r11,8(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r4,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r4.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_82319424:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x82319440
	if (cr6.eq) goto loc_82319440;
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// bge 0x82319424
	if (!cr0.lt) goto loc_82319424;
	// blr 
	return;
loc_82319440:
	// b 0x82319258
	sub_82319258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82319444"))) PPC_WEAK_FUNC(sub_82319444);
PPC_FUNC_IMPL(__imp__sub_82319444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319448"))) PPC_WEAK_FUNC(sub_82319448);
PPC_FUNC_IMPL(__imp__sub_82319448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lha r11,14(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 14));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823194e8
	if (cr0.eq) goto loc_823194E8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ble cr6,0x823194c4
	if (!cr6.gt) goto loc_823194C4;
loc_82319484:
	// add r10,r11,r7
	ctx.r10.u64 = r11.u64 + ctx.r7.u64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r4,r9
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, xer);
	// blt cr6,0x823194b0
	if (cr6.lt) goto loc_823194B0;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// b 0x823194b8
	goto loc_823194B8;
loc_823194B0:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_823194B8:
	// subf r10,r7,r11
	ctx.r10.s64 = r11.s64 - ctx.r7.s64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bgt cr6,0x82319484
	if (cr6.gt) goto loc_82319484;
loc_823194C4:
	// cmpw cr6,r6,r4
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// bne cr6,0x823194d8
	if (!cr6.eq) goto loc_823194D8;
	// rlwinm r11,r7,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
loc_823194D0:
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// blr 
	return;
loc_823194D8:
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// bne cr6,0x82319528
	if (!cr6.eq) goto loc_82319528;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x823194d0
	goto loc_823194D0;
loc_823194E8:
	// lha r10,8(r3)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82319520
	goto loc_82319520;
loc_823194FC:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r9,16
	cr6.compare<int32_t>(ctx.r9.s32, 16, xer);
	// bne cr6,0x8231951c
	if (!cr6.eq) goto loc_8231951C;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8231951C:
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82319520:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823194fc
	if (cr6.lt) goto loc_823194FC;
loc_82319528:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82319530"))) PPC_WEAK_FUNC(sub_82319530);
PPC_FUNC_IMPL(__imp__sub_82319530) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82319448
	sub_82319448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82319538"))) PPC_WEAK_FUNC(sub_82319538);
PPC_FUNC_IMPL(__imp__sub_82319538) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319448
	sub_82319448(ctx, base);
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

__attribute__((alias("__imp__sub_8231958C"))) PPC_WEAK_FUNC(sub_8231958C);
PPC_FUNC_IMPL(__imp__sub_8231958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319590"))) PPC_WEAK_FUNC(sub_82319590);
PPC_FUNC_IMPL(__imp__sub_82319590) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319448
	sub_82319448(ctx, base);
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

__attribute__((alias("__imp__sub_823195F4"))) PPC_WEAK_FUNC(sub_823195F4);
PPC_FUNC_IMPL(__imp__sub_823195F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823195F8"))) PPC_WEAK_FUNC(sub_823195F8);
PPC_FUNC_IMPL(__imp__sub_823195F8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82319638
	if (cr0.eq) goto loc_82319638;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8231963c
	goto loc_8231963C;
loc_82319638:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231963C:
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

__attribute__((alias("__imp__sub_82319650"))) PPC_WEAK_FUNC(sub_82319650);
PPC_FUNC_IMPL(__imp__sub_82319650) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82319694
	if (cr0.eq) goto loc_82319694;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82319698
	goto loc_82319698;
loc_82319694:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82319698:
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

__attribute__((alias("__imp__sub_823196AC"))) PPC_WEAK_FUNC(sub_823196AC);
PPC_FUNC_IMPL(__imp__sub_823196AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823196B0"))) PPC_WEAK_FUNC(sub_823196B0);
PPC_FUNC_IMPL(__imp__sub_823196B0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x823195f8
	sub_823195F8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823196e8
	if (cr0.eq) goto loc_823196E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82353618
	sub_82353618(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823196ec
	goto loc_823196EC;
loc_823196E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823196EC:
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

__attribute__((alias("__imp__sub_82319700"))) PPC_WEAK_FUNC(sub_82319700);
PPC_FUNC_IMPL(__imp__sub_82319700) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82319740
	if (cr0.eq) goto loc_82319740;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82319744
	goto loc_82319744;
loc_82319740:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82319744:
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

__attribute__((alias("__imp__sub_82319758"))) PPC_WEAK_FUNC(sub_82319758);
PPC_FUNC_IMPL(__imp__sub_82319758) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82319794
	if (cr0.eq) goto loc_82319794;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82319798
	goto loc_82319798;
loc_82319794:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82319798:
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

__attribute__((alias("__imp__sub_823197AC"))) PPC_WEAK_FUNC(sub_823197AC);
PPC_FUNC_IMPL(__imp__sub_823197AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823197B0"))) PPC_WEAK_FUNC(sub_823197B0);
PPC_FUNC_IMPL(__imp__sub_823197B0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x823197fc
	if (cr0.eq) goto loc_823197FC;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x82319800
	goto loc_82319800;
loc_823197FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82319800:
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

__attribute__((alias("__imp__sub_82319814"))) PPC_WEAK_FUNC(sub_82319814);
PPC_FUNC_IMPL(__imp__sub_82319814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319818"))) PPC_WEAK_FUNC(sub_82319818);
PPC_FUNC_IMPL(__imp__sub_82319818) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82319870
	if (cr0.eq) goto loc_82319870;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82319874
	goto loc_82319874;
loc_82319870:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82319874:
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

__attribute__((alias("__imp__sub_8231988C"))) PPC_WEAK_FUNC(sub_8231988C);
PPC_FUNC_IMPL(__imp__sub_8231988C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319890"))) PPC_WEAK_FUNC(sub_82319890);
PPC_FUNC_IMPL(__imp__sub_82319890) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823198fc
	if (cr0.eq) goto loc_823198FC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82319900
	goto loc_82319900;
loc_823198FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82319900:
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

__attribute__((alias("__imp__sub_82319918"))) PPC_WEAK_FUNC(sub_82319918);
PPC_FUNC_IMPL(__imp__sub_82319918) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82319998
	if (cr0.eq) goto loc_82319998;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8231999c
	goto loc_8231999C;
loc_82319998:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231999C:
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

__attribute__((alias("__imp__sub_823199B4"))) PPC_WEAK_FUNC(sub_823199B4);
PPC_FUNC_IMPL(__imp__sub_823199B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823199B8"))) PPC_WEAK_FUNC(sub_823199B8);
PPC_FUNC_IMPL(__imp__sub_823199B8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82319a54
	if (cr0.eq) goto loc_82319A54;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x82319a40
	if (!cr6.gt) goto loc_82319A40;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// b 0x82319a4c
	goto loc_82319A4C;
loc_82319A40:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
loc_82319A4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82319a58
	goto loc_82319A58;
loc_82319A54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82319A58:
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

__attribute__((alias("__imp__sub_82319A70"))) PPC_WEAK_FUNC(sub_82319A70);
PPC_FUNC_IMPL(__imp__sub_82319A70) {
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r10,12688
	ctx.r4.s64 = ctx.r10.s64 + 12688;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// sth r30,8(r31)
	PPC_STORE_U16(r31.u32 + 8, r30.u16);
	// sth r8,10(r31)
	PPC_STORE_U16(r31.u32 + 10, ctx.r8.u16);
	// sth r29,12(r31)
	PPC_STORE_U16(r31.u32 + 12, r29.u16);
	// sth r29,14(r31)
	PPC_STORE_U16(r31.u32 + 14, r29.u16);
	// bl 0x82354ff8
	sub_82354FF8(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// ble cr6,0x82319ae8
	if (!cr6.gt) goto loc_82319AE8;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82319AC8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add. r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82319adc
	if (cr0.eq) goto loc_82319ADC;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
loc_82319ADC:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x82319ac8
	if (!cr0.eq) goto loc_82319AC8;
loc_82319AE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82319AF4"))) PPC_WEAK_FUNC(sub_82319AF4);
PPC_FUNC_IMPL(__imp__sub_82319AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319AF8"))) PPC_WEAK_FUNC(sub_82319AF8);
PPC_FUNC_IMPL(__imp__sub_82319AF8) {
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
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r11,r30
	r11.u64 = r30.u64;
	// lwz r9,18972(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// sth r10,8(r31)
	PPC_STORE_U16(r31.u32 + 8, ctx.r10.u16);
	// sth r10,12(r31)
	PPC_STORE_U16(r31.u32 + 12, ctx.r10.u16);
	// sth r10,14(r31)
	PPC_STORE_U16(r31.u32 + 14, ctx.r10.u16);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// sth r8,10(r31)
	PPC_STORE_U16(r31.u32 + 10, ctx.r8.u16);
loc_82319B40:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82319b40
	if (!cr6.eq) goto loc_82319B40;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r10,12688
	ctx.r4.s64 = ctx.r10.s64 + 12688;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82354ff8
	sub_82354FF8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82319B74:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82319b74
	if (!cr0.eq) goto loc_82319B74;
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

__attribute__((alias("__imp__sub_82319BA8"))) PPC_WEAK_FUNC(sub_82319BA8);
PPC_FUNC_IMPL(__imp__sub_82319BA8) {
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
	// li r29,0
	r29.s64 = 0;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82319bf0
	if (!cr0.gt) goto loc_82319BF0;
	// li r30,0
	r30.s64 = 0;
loc_82319BCC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x82318fa8
	sub_82318FA8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82319bcc
	if (cr6.lt) goto loc_82319BCC;
loc_82319BF0:
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82319c30
	if (!cr0.eq) goto loc_82319C30;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82319c30
	if (cr6.eq) goto loc_82319C30;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82319C10:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82319c10
	if (!cr6.eq) goto loc_82319C10;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
loc_82319C30:
	// bl 0x82355020
	sub_82355020(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82319C3C"))) PPC_WEAK_FUNC(sub_82319C3C);
PPC_FUNC_IMPL(__imp__sub_82319C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319C40"))) PPC_WEAK_FUNC(sub_82319C40);
PPC_FUNC_IMPL(__imp__sub_82319C40) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// sth r5,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82319C4C"))) PPC_WEAK_FUNC(sub_82319C4C);
PPC_FUNC_IMPL(__imp__sub_82319C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319C50"))) PPC_WEAK_FUNC(sub_82319C50);
PPC_FUNC_IMPL(__imp__sub_82319C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82319c78
	if (!cr6.lt) goto loc_82319C78;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82319C78:
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82319C8C"))) PPC_WEAK_FUNC(sub_82319C8C);
PPC_FUNC_IMPL(__imp__sub_82319C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319C90"))) PPC_WEAK_FUNC(sub_82319C90);
PPC_FUNC_IMPL(__imp__sub_82319C90) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82319CC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq 0x82319cec
	if (cr0.eq) goto loc_82319CEC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82319cc8
	if (cr6.eq) goto loc_82319CC8;
loc_82319CEC:
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

__attribute__((alias("__imp__sub_82319D04"))) PPC_WEAK_FUNC(sub_82319D04);
PPC_FUNC_IMPL(__imp__sub_82319D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319D08"))) PPC_WEAK_FUNC(sub_82319D08);
PPC_FUNC_IMPL(__imp__sub_82319D08) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823179b8
	sub_823179B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x823179b8
	sub_823179B8(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// bge cr6,0x82319d48
	if (!cr6.lt) goto loc_82319D48;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82319d58
	goto loc_82319D58;
loc_82319D48:
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82319d58
	if (cr6.eq) goto loc_82319D58;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82319D58:
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

__attribute__((alias("__imp__sub_82319D70"))) PPC_WEAK_FUNC(sub_82319D70);
PPC_FUNC_IMPL(__imp__sub_82319D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lha r4,8(r3)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blt cr6,0x82319dac
	if (cr6.lt) goto loc_82319DAC;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x82319d9c
	if (cr6.eq) goto loc_82319D9C;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82319D9C:
	// lis r11,-32206
	r11.s64 = -2110652416;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,-25456
	ctx.r6.s64 = r11.s64 + -25456;
	// b 0x823a0760
	sub_823A0760(ctx, base);
	return;
loc_82319DAC:
	// lis r11,-32206
	r11.s64 = -2110652416;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,-25336
	ctx.r6.s64 = r11.s64 + -25336;
	// b 0x823a0760
	sub_823A0760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82319DBC"))) PPC_WEAK_FUNC(sub_82319DBC);
PPC_FUNC_IMPL(__imp__sub_82319DBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82319DC0"))) PPC_WEAK_FUNC(sub_82319DC0);
PPC_FUNC_IMPL(__imp__sub_82319DC0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r11,8(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lhz r11,12(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 12);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r11.u16);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lhz r11,14(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 14);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, r11.u16);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82319e54
	if (!cr0.gt) goto loc_82319E54;
	// li r28,0
	r28.s64 = 0;
loc_82319E30:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x82318478
	sub_82318478(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82319e30
	if (cr6.lt) goto loc_82319E30;
loc_82319E54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82319E5C"))) PPC_WEAK_FUNC(sub_82319E5C);
PPC_FUNC_IMPL(__imp__sub_82319E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319E60"))) PPC_WEAK_FUNC(sub_82319E60);
PPC_FUNC_IMPL(__imp__sub_82319E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r3,-4264(r11)
	PPC_STORE_U32(r11.u32 + -4264, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82319E6C"))) PPC_WEAK_FUNC(sub_82319E6C);
PPC_FUNC_IMPL(__imp__sub_82319E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319E70"))) PPC_WEAK_FUNC(sub_82319E70);
PPC_FUNC_IMPL(__imp__sub_82319E70) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82319ea4
	if (cr6.eq) goto loc_82319EA4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82318e58
	sub_82318E58(ctx, base);
	// b 0x82319eb4
	goto loc_82319EB4;
loc_82319EA4:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,12104
	ctx.r4.s64 = r11.s64 + 12104;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_82319EB4:
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

__attribute__((alias("__imp__sub_82319ECC"))) PPC_WEAK_FUNC(sub_82319ECC);
PPC_FUNC_IMPL(__imp__sub_82319ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319ED0"))) PPC_WEAK_FUNC(sub_82319ED0);
PPC_FUNC_IMPL(__imp__sub_82319ED0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82319f18
	if (cr6.eq) goto loc_82319F18;
	// li r11,1
	r11.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82319dc0
	sub_82319DC0(ctx, base);
	// b 0x82319f24
	goto loc_82319F24;
loc_82319F18:
	// li r11,0
	r11.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
loc_82319F24:
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

__attribute__((alias("__imp__sub_82319F40"))) PPC_WEAK_FUNC(sub_82319F40);
PPC_FUNC_IMPL(__imp__sub_82319F40) {
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
	// beq 0x82319f80
	if (cr0.eq) goto loc_82319F80;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,28684
	ctx.r3.s64 = r11.s64 + 28684;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82319f88
	goto loc_82319F88;
loc_82319F80:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82319F88:
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

__attribute__((alias("__imp__sub_82319FA4"))) PPC_WEAK_FUNC(sub_82319FA4);
PPC_FUNC_IMPL(__imp__sub_82319FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319FA8"))) PPC_WEAK_FUNC(sub_82319FA8);
PPC_FUNC_IMPL(__imp__sub_82319FA8) {
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
	// lwz r16,12912(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12912);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r26,0(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r29,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r29.u32);
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// addi r25,r11,1
	r25.s64 = r11.s64 + 1;
	// rlwinm r3,r25,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82354ff8
	sub_82354FF8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// ble cr6,0x8231a02c
	if (!cr6.gt) goto loc_8231A02C;
loc_8231A000:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x8231a01c
	if (cr0.eq) goto loc_8231A01C;
	// add r4,r11,r26
	ctx.r4.u64 = r11.u64 + r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_8231A01C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// blt cr6,0x8231a000
	if (cr6.lt) goto loc_8231A000;
loc_8231A02C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// bge cr6,0x8231a064
	if (!cr6.lt) goto loc_8231A064;
loc_8231A038:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x8231a054
	if (cr0.eq) goto loc_8231A054;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_8231A054:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// blt cr6,0x8231a038
	if (cr6.lt) goto loc_8231A038;
loc_8231A064:
	// cmpw cr6,r30,r25
	cr6.compare<int32_t>(r30.s32, r25.s32, xer);
	// bge cr6,0x8231a09c
	if (!cr6.lt) goto loc_8231A09C;
loc_8231A06C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x8231a08c
	if (cr0.eq) goto loc_8231A08C;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_8231A08C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r25
	cr6.compare<int32_t>(r30.s32, r25.s32, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// blt cr6,0x8231a06c
	if (cr6.lt) goto loc_8231A06C;
loc_8231A09C:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// li r28,0
	r28.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8231a0d0
	if (!cr0.gt) goto loc_8231A0D0;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8231A0B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82318fa8
	sub_82318FA8(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8231a0b0
	if (cr6.lt) goto loc_8231A0B0;
loc_8231A0D0:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// rlwinm. r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8231a10c
	if (!cr0.eq) goto loc_8231A10C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8231a10c
	if (cr6.eq) goto loc_8231A10C;
	// mr r11,r26
	r11.u64 = r26.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8231A0EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8231a0ec
	if (!cr6.eq) goto loc_8231A0EC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
loc_8231A10C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// sth r25,8(r29)
	PPC_STORE_U16(r29.u32 + 8, r25.u16);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82319FB0"))) PPC_WEAK_FUNC(sub_82319FB0);
PPC_FUNC_IMPL(__imp__sub_82319FB0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r26,0(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r29,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r29.u32);
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// addi r25,r11,1
	r25.s64 = r11.s64 + 1;
	// rlwinm r3,r25,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82354ff8
	sub_82354FF8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// ble cr6,0x8231a02c
	if (!cr6.gt) goto loc_8231A02C;
loc_8231A000:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x8231a01c
	if (cr0.eq) goto loc_8231A01C;
	// add r4,r11,r26
	ctx.r4.u64 = r11.u64 + r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_8231A01C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// blt cr6,0x8231a000
	if (cr6.lt) goto loc_8231A000;
loc_8231A02C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// bge cr6,0x8231a064
	if (!cr6.lt) goto loc_8231A064;
loc_8231A038:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x8231a054
	if (cr0.eq) goto loc_8231A054;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_8231A054:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// blt cr6,0x8231a038
	if (cr6.lt) goto loc_8231A038;
loc_8231A064:
	// cmpw cr6,r30,r25
	cr6.compare<int32_t>(r30.s32, r25.s32, xer);
	// bge cr6,0x8231a09c
	if (!cr6.lt) goto loc_8231A09C;
loc_8231A06C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x8231a08c
	if (cr0.eq) goto loc_8231A08C;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_8231A08C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r25
	cr6.compare<int32_t>(r30.s32, r25.s32, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// blt cr6,0x8231a06c
	if (cr6.lt) goto loc_8231A06C;
loc_8231A09C:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// li r28,0
	r28.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8231a0d0
	if (!cr0.gt) goto loc_8231A0D0;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8231A0B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82318fa8
	sub_82318FA8(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8231a0b0
	if (cr6.lt) goto loc_8231A0B0;
loc_8231A0D0:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// rlwinm. r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8231a10c
	if (!cr0.eq) goto loc_8231A10C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8231a10c
	if (cr6.eq) goto loc_8231A10C;
	// mr r11,r26
	r11.u64 = r26.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8231A0EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8231a0ec
	if (!cr6.eq) goto loc_8231A0EC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
loc_8231A10C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// sth r25,8(r29)
	PPC_STORE_U16(r29.u32 + 8, r25.u16);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8231A120"))) PPC_WEAK_FUNC(sub_8231A120);
PPC_FUNC_IMPL(__imp__sub_8231A120) {
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_8231A15C"))) PPC_WEAK_FUNC(sub_8231A15C);
PPC_FUNC_IMPL(__imp__sub_8231A15C) {
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_8231A198"))) PPC_WEAK_FUNC(sub_8231A198);
PPC_FUNC_IMPL(__imp__sub_8231A198) {
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_8231A1D4"))) PPC_WEAK_FUNC(sub_8231A1D4);
PPC_FUNC_IMPL(__imp__sub_8231A1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231A1D8"))) PPC_WEAK_FUNC(sub_8231A1D8);
PPC_FUNC_IMPL(__imp__sub_8231A1D8) {
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
	// lwz r16,13000(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13000);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r29,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r29.u32);
	// stw r27,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r27.u32);
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// beq cr6,0x8231a330
	if (cr6.eq) goto loc_8231A330;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lwz r26,0(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r3,r27,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// bl 0x82354ff8
	sub_82354FF8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,188
	r11.s64 = r31.s64 + 188;
	// blt cr6,0x8231a23c
	if (cr6.lt) goto loc_8231A23C;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
loc_8231A23C:
	// li r25,0
	r25.s64 = 0;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmpwi r28,0
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// ble 0x8231a280
	if (!cr0.gt) goto loc_8231A280;
loc_8231A254:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x8231a270
	if (cr0.eq) goto loc_8231A270;
	// add r4,r11,r26
	ctx.r4.u64 = r11.u64 + r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_8231A270:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// blt cr6,0x8231a254
	if (cr6.lt) goto loc_8231A254;
loc_8231A280:
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// bge cr6,0x8231a2b0
	if (!cr6.lt) goto loc_8231A2B0;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r30,r27
	ctx.r9.s64 = r27.s64 - r30.s64;
loc_8231A290:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add. r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a2a4
	if (cr0.eq) goto loc_8231A2A4;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
loc_8231A2A4:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x8231a290
	if (!cr0.eq) goto loc_8231A290;
loc_8231A2B0:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8231a2e4
	if (!cr0.gt) goto loc_8231A2E4;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8231A2C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82318fa8
	sub_82318FA8(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8231a2c4
	if (cr6.lt) goto loc_8231A2C4;
loc_8231A2E4:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// rlwinm. r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8231a320
	if (!cr0.eq) goto loc_8231A320;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8231a320
	if (cr6.eq) goto loc_8231A320;
	// mr r11,r26
	r11.u64 = r26.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8231A300:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8231a300
	if (!cr6.eq) goto loc_8231A300;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
loc_8231A320:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// sth r27,8(r29)
	PPC_STORE_U16(r29.u32 + 8, r27.u16);
	// sth r25,14(r29)
	PPC_STORE_U16(r29.u32 + 14, r25.u16);
loc_8231A330:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8231A1E0"))) PPC_WEAK_FUNC(sub_8231A1E0);
PPC_FUNC_IMPL(__imp__sub_8231A1E0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r29,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r29.u32);
	// stw r27,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r27.u32);
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// beq cr6,0x8231a330
	if (cr6.eq) goto loc_8231A330;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lwz r26,0(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r3,r27,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// bl 0x82354ff8
	sub_82354FF8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,188
	r11.s64 = r31.s64 + 188;
	// blt cr6,0x8231a23c
	if (cr6.lt) goto loc_8231A23C;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
loc_8231A23C:
	// li r25,0
	r25.s64 = 0;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmpwi r28,0
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// ble 0x8231a280
	if (!cr0.gt) goto loc_8231A280;
loc_8231A254:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x8231a270
	if (cr0.eq) goto loc_8231A270;
	// add r4,r11,r26
	ctx.r4.u64 = r11.u64 + r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
loc_8231A270:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// blt cr6,0x8231a254
	if (cr6.lt) goto loc_8231A254;
loc_8231A280:
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// bge cr6,0x8231a2b0
	if (!cr6.lt) goto loc_8231A2B0;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r30,r27
	ctx.r9.s64 = r27.s64 - r30.s64;
loc_8231A290:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add. r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a2a4
	if (cr0.eq) goto loc_8231A2A4;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
loc_8231A2A4:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x8231a290
	if (!cr0.eq) goto loc_8231A290;
loc_8231A2B0:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8231a2e4
	if (!cr0.gt) goto loc_8231A2E4;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8231A2C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82318fa8
	sub_82318FA8(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8231a2c4
	if (cr6.lt) goto loc_8231A2C4;
loc_8231A2E4:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// rlwinm. r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8231a320
	if (!cr0.eq) goto loc_8231A320;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8231a320
	if (cr6.eq) goto loc_8231A320;
	// mr r11,r26
	r11.u64 = r26.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8231A300:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8231a300
	if (!cr6.eq) goto loc_8231A300;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
loc_8231A320:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// sth r27,8(r29)
	PPC_STORE_U16(r29.u32 + 8, r27.u16);
	// sth r25,14(r29)
	PPC_STORE_U16(r29.u32 + 14, r25.u16);
loc_8231A330:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8231A338"))) PPC_WEAK_FUNC(sub_8231A338);
PPC_FUNC_IMPL(__imp__sub_8231A338) {
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_8231A374"))) PPC_WEAK_FUNC(sub_8231A374);
PPC_FUNC_IMPL(__imp__sub_8231A374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231A378"))) PPC_WEAK_FUNC(sub_8231A378);
PPC_FUNC_IMPL(__imp__sub_8231A378) {
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
	// bl 0x82319f40
	sub_82319F40(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a3a8
	if (cr0.eq) goto loc_8231A3A8;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_8231A3A8:
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

__attribute__((alias("__imp__sub_8231A3BC"))) PPC_WEAK_FUNC(sub_8231A3BC);
PPC_FUNC_IMPL(__imp__sub_8231A3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231A3C0"))) PPC_WEAK_FUNC(sub_8231A3C0);
PPC_FUNC_IMPL(__imp__sub_8231A3C0) {
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
	// lwz r16,13080(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13080);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231a410
	if (cr0.eq) goto loc_8231A410;
	// lha r4,8(r29)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x8231a414
	goto loc_8231A414;
loc_8231A410:
	// li r27,0
	r27.s64 = 0;
loc_8231A414:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// li r26,0
	r26.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8231a4c4
	if (!cr0.gt) goto loc_8231A4C4;
	// clrlwi r25,r30,24
	r25.u64 = r30.u32 & 0xFF;
	// li r30,0
	r30.s64 = 0;
loc_8231A42C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8231a49c
	if (cr6.eq) goto loc_8231A49C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bne cr6,0x8231a49c
	if (!cr6.eq) goto loc_8231A49C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8231a3c8
	sub_8231A3C8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a490
	if (cr0.eq) goto loc_8231A490;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231A490:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8231a4b0
	goto loc_8231A4B0;
loc_8231A49C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r4,r30,r10
	ctx.r4.u64 = r30.u64 + ctx.r10.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
loc_8231A4B0:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x8231a42c
	if (cr6.lt) goto loc_8231A42C;
loc_8231A4C4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8231A3C8"))) PPC_WEAK_FUNC(sub_8231A3C8);
PPC_FUNC_IMPL(__imp__sub_8231A3C8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231a410
	if (cr0.eq) goto loc_8231A410;
	// lha r4,8(r29)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x8231a414
	goto loc_8231A414;
loc_8231A410:
	// li r27,0
	r27.s64 = 0;
loc_8231A414:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// li r26,0
	r26.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8231a4c4
	if (!cr0.gt) goto loc_8231A4C4;
	// clrlwi r25,r30,24
	r25.u64 = r30.u32 & 0xFF;
	// li r30,0
	r30.s64 = 0;
loc_8231A42C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8231a49c
	if (cr6.eq) goto loc_8231A49C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bne cr6,0x8231a49c
	if (!cr6.eq) goto loc_8231A49C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8231a3c8
	sub_8231A3C8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a490
	if (cr0.eq) goto loc_8231A490;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231A490:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8231a4b0
	goto loc_8231A4B0;
loc_8231A49C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r4,r30,r10
	ctx.r4.u64 = r30.u64 + ctx.r10.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
loc_8231A4B0:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x8231a42c
	if (cr6.lt) goto loc_8231A42C;
loc_8231A4C4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8231A4D0"))) PPC_WEAK_FUNC(sub_8231A4D0);
PPC_FUNC_IMPL(__imp__sub_8231A4D0) {
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
	// bl 0x821206f0
	sub_821206F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231A4F8"))) PPC_WEAK_FUNC(sub_8231A4F8);
PPC_FUNC_IMPL(__imp__sub_8231A4F8) {
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

__attribute__((alias("__imp__sub_8231A520"))) PPC_WEAK_FUNC(sub_8231A520);
PPC_FUNC_IMPL(__imp__sub_8231A520) {
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
	// lwz r16,13168(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13168);
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
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addic. r27,r11,-1
	xer.ca = r11.u32 > 0;
	r27.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// sth r11,14(r30)
	PPC_STORE_U16(r30.u32 + 14, r11.u16);
	// blt 0x8231a5dc
	if (cr0.lt) goto loc_8231A5DC;
	// rlwinm r28,r27,3,0,28
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
loc_8231A558:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a588
	if (cr0.eq) goto loc_8231A588;
	// lhz r11,14(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 14);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,14(r30)
	PPC_STORE_U16(r30.u32 + 14, r11.u16);
	// bne cr6,0x8231a5d0
	if (!cr6.eq) goto loc_8231A5D0;
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x8231a5d0
	goto loc_8231A5D0;
loc_8231A588:
	// beq cr6,0x8231a5d0
	if (cr6.eq) goto loc_8231A5D0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r29,r29,3,0,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// add r4,r29,r11
	ctx.r4.u64 = r29.u64 + r11.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a5d0
	if (cr0.eq) goto loc_8231A5D0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231A5D0:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r28,r28,-8
	r28.s64 = r28.s64 + -8;
	// bge 0x8231a558
	if (!cr0.lt) goto loc_8231A558;
loc_8231A5DC:
	// lis r11,-32206
	r11.s64 = -2110652416;
	// lha r4,14(r30)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 14));
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r11,-25520
	ctx.r6.s64 = r11.s64 + -25520;
	// bl 0x823a0760
	sub_823A0760(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8231A528"))) PPC_WEAK_FUNC(sub_8231A528);
PPC_FUNC_IMPL(__imp__sub_8231A528) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addic. r27,r11,-1
	xer.ca = r11.u32 > 0;
	r27.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// sth r11,14(r30)
	PPC_STORE_U16(r30.u32 + 14, r11.u16);
	// blt 0x8231a5dc
	if (cr0.lt) goto loc_8231A5DC;
	// rlwinm r28,r27,3,0,28
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
loc_8231A558:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a588
	if (cr0.eq) goto loc_8231A588;
	// lhz r11,14(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 14);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,14(r30)
	PPC_STORE_U16(r30.u32 + 14, r11.u16);
	// bne cr6,0x8231a5d0
	if (!cr6.eq) goto loc_8231A5D0;
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x8231a5d0
	goto loc_8231A5D0;
loc_8231A588:
	// beq cr6,0x8231a5d0
	if (cr6.eq) goto loc_8231A5D0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r29,r29,3,0,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// add r4,r29,r11
	ctx.r4.u64 = r29.u64 + r11.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a5d0
	if (cr0.eq) goto loc_8231A5D0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231A5D0:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r28,r28,-8
	r28.s64 = r28.s64 + -8;
	// bge 0x8231a558
	if (!cr0.lt) goto loc_8231A558;
loc_8231A5DC:
	// lis r11,-32206
	r11.s64 = -2110652416;
	// lha r4,14(r30)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 14));
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r11,-25520
	ctx.r6.s64 = r11.s64 + -25520;
	// bl 0x823a0760
	sub_823A0760(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8231A5FC"))) PPC_WEAK_FUNC(sub_8231A5FC);
PPC_FUNC_IMPL(__imp__sub_8231A5FC) {
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

__attribute__((alias("__imp__sub_8231A624"))) PPC_WEAK_FUNC(sub_8231A624);
PPC_FUNC_IMPL(__imp__sub_8231A624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231A628"))) PPC_WEAK_FUNC(sub_8231A628);
PPC_FUNC_IMPL(__imp__sub_8231A628) {
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
	// bl 0x8231a378
	sub_8231A378(ctx, base);
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

__attribute__((alias("__imp__sub_8231A68C"))) PPC_WEAK_FUNC(sub_8231A68C);
PPC_FUNC_IMPL(__imp__sub_8231A68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231A690"))) PPC_WEAK_FUNC(sub_8231A690);
PPC_FUNC_IMPL(__imp__sub_8231A690) {
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

__attribute__((alias("__imp__sub_8231A6E4"))) PPC_WEAK_FUNC(sub_8231A6E4);
PPC_FUNC_IMPL(__imp__sub_8231A6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231A6E8"))) PPC_WEAK_FUNC(sub_8231A6E8);
PPC_FUNC_IMPL(__imp__sub_8231A6E8) {
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
	// b 0x8231a718
	goto loc_8231A718;
loc_8231A708:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8231A718:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8231a708
	if (!cr6.eq) goto loc_8231A708;
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

__attribute__((alias("__imp__sub_8231A740"))) PPC_WEAK_FUNC(sub_8231A740);
PPC_FUNC_IMPL(__imp__sub_8231A740) {
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
	// lwz r16,13280(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13280);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8231a910
	if (cr6.eq) goto loc_8231A910;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8231a908
	if (cr6.eq) goto loc_8231A908;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x8231a7d8
	if (cr6.eq) goto loc_8231A7D8;
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// bne cr6,0x8231a88c
	if (!cr6.eq) goto loc_8231A88C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-4216(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4216);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8231a88c
	if (cr0.eq) goto loc_8231A88C;
loc_8231A7B8:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8231a944
	goto loc_8231A944;
loc_8231A7D8:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-4216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4216);
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8231a7b8
	if (!cr0.eq) goto loc_8231A7B8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r26,r11,-2544
	r26.s64 = r11.s64 + -2544;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822f6ef8
	sub_822F6EF8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// subf r11,r27,r26
	r11.s64 = r26.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231a88c
	if (cr0.eq) goto loc_8231A88C;
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,3
	r11.s64 = 3;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a858
	if (cr0.eq) goto loc_8231A858;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231A858:
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a944
	if (cr0.eq) goto loc_8231A944;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8231a940
	goto loc_8231A940;
loc_8231A88C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,-4276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4276);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8231a8fc
	if (cr6.eq) goto loc_8231A8FC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a8d0
	if (cr0.eq) goto loc_8231A8D0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231A8D0:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8231a8fc
	if (cr6.eq) goto loc_8231A8FC;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a944
	if (cr0.eq) goto loc_8231A944;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8231a940
	goto loc_8231A940;
loc_8231A8FC:
	// stw r25,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r25.u32);
	// stw r25,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r25.u32);
	// b 0x8231a944
	goto loc_8231A944;
loc_8231A908:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8231a7b8
	goto loc_8231A7B8;
loc_8231A910:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a944
	if (cr0.eq) goto loc_8231A944;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
loc_8231A940:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231A944:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8231A748"))) PPC_WEAK_FUNC(sub_8231A748);
PPC_FUNC_IMPL(__imp__sub_8231A748) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8231a910
	if (cr6.eq) goto loc_8231A910;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8231a908
	if (cr6.eq) goto loc_8231A908;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x8231a7d8
	if (cr6.eq) goto loc_8231A7D8;
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// bne cr6,0x8231a88c
	if (!cr6.eq) goto loc_8231A88C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-4216(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4216);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8231a88c
	if (cr0.eq) goto loc_8231A88C;
loc_8231A7B8:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8231a944
	goto loc_8231A944;
loc_8231A7D8:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-4216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4216);
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8231a7b8
	if (!cr0.eq) goto loc_8231A7B8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r26,r11,-2544
	r26.s64 = r11.s64 + -2544;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822f6ef8
	sub_822F6EF8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// subf r11,r27,r26
	r11.s64 = r26.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231a88c
	if (cr0.eq) goto loc_8231A88C;
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,3
	r11.s64 = 3;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a858
	if (cr0.eq) goto loc_8231A858;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231A858:
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a944
	if (cr0.eq) goto loc_8231A944;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8231a940
	goto loc_8231A940;
loc_8231A88C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,-4276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4276);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8231a8fc
	if (cr6.eq) goto loc_8231A8FC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a8d0
	if (cr0.eq) goto loc_8231A8D0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231A8D0:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8231a8fc
	if (cr6.eq) goto loc_8231A8FC;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a944
	if (cr0.eq) goto loc_8231A944;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8231a940
	goto loc_8231A940;
loc_8231A8FC:
	// stw r25,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r25.u32);
	// stw r25,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r25.u32);
	// b 0x8231a944
	goto loc_8231A944;
loc_8231A908:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8231a7b8
	goto loc_8231A7B8;
loc_8231A910:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a944
	if (cr0.eq) goto loc_8231A944;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
loc_8231A940:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231A944:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8231A950"))) PPC_WEAK_FUNC(sub_8231A950);
PPC_FUNC_IMPL(__imp__sub_8231A950) {
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

__attribute__((alias("__imp__sub_8231A978"))) PPC_WEAK_FUNC(sub_8231A978);
PPC_FUNC_IMPL(__imp__sub_8231A978) {
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

__attribute__((alias("__imp__sub_8231A9A0"))) PPC_WEAK_FUNC(sub_8231A9A0);
PPC_FUNC_IMPL(__imp__sub_8231A9A0) {
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

__attribute__((alias("__imp__sub_8231A9C8"))) PPC_WEAK_FUNC(sub_8231A9C8);
PPC_FUNC_IMPL(__imp__sub_8231A9C8) {
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

__attribute__((alias("__imp__sub_8231A9F0"))) PPC_WEAK_FUNC(sub_8231A9F0);
PPC_FUNC_IMPL(__imp__sub_8231A9F0) {
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

__attribute__((alias("__imp__sub_8231AA18"))) PPC_WEAK_FUNC(sub_8231AA18);
PPC_FUNC_IMPL(__imp__sub_8231AA18) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,13416(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13416);
	// mflr r12
	// bl 0x8239bcd8
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,82
	ctx.r4.s64 = r31.s64 + 82;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,82(r31)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 82));
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
	// lis r20,-32127
	r20.s64 = -2105475072;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,-4264(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + -4264);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,14
	ctx.r4.s64 = r30.s64 + 14;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lhz r11,82(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// li r21,0
	r21.s64 = 0;
	// mr r25,r21
	r25.u64 = r21.u64;
	// extsh. r10,r11
	ctx.r10.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x8231ae28
	if (!cr0.gt) goto loc_8231AE28;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r23,r11,-4272
	r23.s64 = r11.s64 + -4272;
loc_8231AA9C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r24,r25,3,0,28
	r24.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// add r29,r24,r11
	r29.u64 = r24.u64 + r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82318c28
	sub_82318C28(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// b 0x8231aacc
	goto loc_8231AACC;
loc_8231AABC:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8231aba0
	if (cr0.eq) goto loc_8231ABA0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8231AACC:
	// subf r10,r11,r23
	ctx.r10.s64 = r23.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8231aabc
	if (!cr0.eq) goto loc_8231AABC;
	// li r11,1
	r11.s64 = 1;
loc_8231AAE8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231ab14
	if (!cr0.eq) goto loc_8231AB14;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x8231ab14
	if (cr6.eq) goto loc_8231AB14;
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(r11.s32, 35, xer);
	// beq cr6,0x8231ab14
	if (cr6.eq) goto loc_8231AB14;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x8231ab14
	if (cr6.eq) goto loc_8231AB14;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x8231ad0c
	if (!cr6.eq) goto loc_8231AD0C;
loc_8231AB14:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x8231aba8
	if (!cr6.eq) goto loc_8231ABA8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8231aba8
	if (cr0.eq) goto loc_8231ABA8;
	// lha r11,82(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 82));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r10,8(r28)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
	// mr r27,r21
	r27.u64 = r21.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8231ae18
	if (!cr0.gt) goto loc_8231AE18;
	// mr r26,r21
	r26.u64 = r21.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_8231AB6C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r3,r29,r10
	ctx.r3.u64 = r29.u64 + ctx.r10.u64;
	// add r4,r26,r11
	ctx.r4.u64 = r26.u64 + r11.u64;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x8231ab6c
	if (cr6.lt) goto loc_8231AB6C;
	// b 0x8231ae18
	goto loc_8231AE18;
loc_8231ABA0:
	// mr r11,r21
	r11.u64 = r21.u64;
	// b 0x8231aae8
	goto loc_8231AAE8;
loc_8231ABA8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(r11.s32, 36, xer);
	// bne cr6,0x8231ac14
	if (!cr6.eq) goto loc_8231AC14;
	// stw r21,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r21.u32);
	// stw r21,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r21.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82318c28
	sub_82318C28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8231a748
	sub_8231A748(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231abf4
	if (cr0.eq) goto loc_8231ABF4;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231ABF4:
	// lhz r11,82(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231ae18
	if (cr0.eq) goto loc_8231AE18;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8231ac68
	goto loc_8231AC68;
loc_8231AC14:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bne cr6,0x8231ac70
	if (!cr6.eq) goto loc_8231AC70;
	// stw r21,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r21.u32);
	// stw r21,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r21.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82318c28
	sub_82318C28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8231dd18
	sub_8231DD18(ctx, base);
	// lhz r11,82(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231ae18
	if (cr0.eq) goto loc_8231AE18;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
loc_8231AC68:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8231ae18
	goto loc_8231AE18;
loc_8231AC70:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x8231ac94
	if (!cr6.eq) goto loc_8231AC94;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// b 0x8231acb0
	goto loc_8231ACB0;
loc_8231AC94:
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(r11.s32, 35, xer);
	// bne cr6,0x8231accc
	if (!cr6.eq) goto loc_8231ACCC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8231ACB0:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r23,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r23.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// bl 0x8231a628
	sub_8231A628(ctx, base);
	// b 0x8231ad0c
	goto loc_8231AD0C;
loc_8231ACCC:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x8231acec
	if (!cr6.eq) goto loc_8231ACEC;
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
	// b 0x8231ad0c
	goto loc_8231AD0C;
loc_8231ACEC:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x8231ad1c
	if (!cr6.eq) goto loc_8231AD1C;
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x8231a690
	sub_8231A690(ctx, base);
loc_8231AD0C:
	// lhz r11,82(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
	// b 0x8231ae18
	goto loc_8231AE18;
loc_8231AD1C:
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(r11.s32, 33, xer);
	// beq cr6,0x8231ad34
	if (cr6.eq) goto loc_8231AD34;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(r11.s32, 34, xer);
	// beq cr6,0x8231ad34
	if (cr6.eq) goto loc_8231AD34;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// b 0x8231ae18
	goto loc_8231AE18;
loc_8231AD34:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82275d68
	sub_82275D68(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82276480
	sub_82276480(ctx, base);
	// bl 0x8231c520
	sub_8231C520(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(r11.s32, 33, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r11,82(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 82));
	// bne cr6,0x8231adcc
	if (!cr6.eq) goto loc_8231ADCC;
	// lha r10,8(r29)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
	// mr r27,r21
	r27.u64 = r21.u64;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8231ae08
	if (!cr0.gt) goto loc_8231AE08;
	// mr r26,r21
	r26.u64 = r21.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_8231AD98:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r3,r28,r10
	ctx.r3.u64 = r28.u64 + ctx.r10.u64;
	// add r4,r26,r11
	ctx.r4.u64 = r26.u64 + r11.u64;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x8231ad98
	if (cr6.lt) goto loc_8231AD98;
	// b 0x8231ae08
	goto loc_8231AE08;
loc_8231ADCC:
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r28,r11,-1
	r28.s64 = r11.s64 + -1;
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8231d398
	sub_8231D398(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// add r10,r11,r28
	ctx.r10.u64 = r11.u64 + r28.u64;
	// mr r25,r11
	r25.u64 = r11.u64;
	// extsh r11,r10
	r11.s64 = ctx.r10.s16;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
loc_8231AE08:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,-4264(r20)
	PPC_STORE_U32(r20.u32 + -4264, r11.u32);
loc_8231AE18:
	// lhz r11,82(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// extsh r10,r11
	ctx.r10.s64 = r11.s16;
	// cmpw cr6,r25,r10
	cr6.compare<int32_t>(r25.s32, ctx.r10.s32, xer);
	// blt cr6,0x8231aa9c
	if (cr6.lt) goto loc_8231AA9C;
loc_8231AE28:
	// extsh r4,r11
	ctx.r4.s64 = r11.s16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_8231AA20"))) PPC_WEAK_FUNC(sub_8231AA20);
PPC_FUNC_IMPL(__imp__sub_8231AA20) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,82
	ctx.r4.s64 = r31.s64 + 82;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,82(r31)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 82));
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
	// lis r20,-32127
	r20.s64 = -2105475072;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,-4264(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + -4264);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,14
	ctx.r4.s64 = r30.s64 + 14;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lhz r11,82(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// li r21,0
	r21.s64 = 0;
	// mr r25,r21
	r25.u64 = r21.u64;
	// extsh. r10,r11
	ctx.r10.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x8231ae28
	if (!cr0.gt) goto loc_8231AE28;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r23,r11,-4272
	r23.s64 = r11.s64 + -4272;
loc_8231AA9C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r24,r25,3,0,28
	r24.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// add r29,r24,r11
	r29.u64 = r24.u64 + r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82318c28
	sub_82318C28(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// b 0x8231aacc
	goto loc_8231AACC;
loc_8231AABC:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8231aba0
	if (cr0.eq) goto loc_8231ABA0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8231AACC:
	// subf r10,r11,r23
	ctx.r10.s64 = r23.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8231aabc
	if (!cr0.eq) goto loc_8231AABC;
	// li r11,1
	r11.s64 = 1;
loc_8231AAE8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231ab14
	if (!cr0.eq) goto loc_8231AB14;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x8231ab14
	if (cr6.eq) goto loc_8231AB14;
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(r11.s32, 35, xer);
	// beq cr6,0x8231ab14
	if (cr6.eq) goto loc_8231AB14;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x8231ab14
	if (cr6.eq) goto loc_8231AB14;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x8231ad0c
	if (!cr6.eq) goto loc_8231AD0C;
loc_8231AB14:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x8231aba8
	if (!cr6.eq) goto loc_8231ABA8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8231aba8
	if (cr0.eq) goto loc_8231ABA8;
	// lha r11,82(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 82));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r10,8(r28)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
	// mr r27,r21
	r27.u64 = r21.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8231ae18
	if (!cr0.gt) goto loc_8231AE18;
	// mr r26,r21
	r26.u64 = r21.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_8231AB6C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r3,r29,r10
	ctx.r3.u64 = r29.u64 + ctx.r10.u64;
	// add r4,r26,r11
	ctx.r4.u64 = r26.u64 + r11.u64;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x8231ab6c
	if (cr6.lt) goto loc_8231AB6C;
	// b 0x8231ae18
	goto loc_8231AE18;
loc_8231ABA0:
	// mr r11,r21
	r11.u64 = r21.u64;
	// b 0x8231aae8
	goto loc_8231AAE8;
loc_8231ABA8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(r11.s32, 36, xer);
	// bne cr6,0x8231ac14
	if (!cr6.eq) goto loc_8231AC14;
	// stw r21,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r21.u32);
	// stw r21,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r21.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82318c28
	sub_82318C28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8231a748
	sub_8231A748(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231abf4
	if (cr0.eq) goto loc_8231ABF4;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231ABF4:
	// lhz r11,82(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231ae18
	if (cr0.eq) goto loc_8231AE18;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8231ac68
	goto loc_8231AC68;
loc_8231AC14:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bne cr6,0x8231ac70
	if (!cr6.eq) goto loc_8231AC70;
	// stw r21,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r21.u32);
	// stw r21,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r21.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82318c28
	sub_82318C28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8231dd18
	sub_8231DD18(ctx, base);
	// lhz r11,82(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231ae18
	if (cr0.eq) goto loc_8231AE18;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
loc_8231AC68:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8231ae18
	goto loc_8231AE18;
loc_8231AC70:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x8231ac94
	if (!cr6.eq) goto loc_8231AC94;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// b 0x8231acb0
	goto loc_8231ACB0;
loc_8231AC94:
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(r11.s32, 35, xer);
	// bne cr6,0x8231accc
	if (!cr6.eq) goto loc_8231ACCC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8231ACB0:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r23,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r23.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// bl 0x8231a628
	sub_8231A628(ctx, base);
	// b 0x8231ad0c
	goto loc_8231AD0C;
loc_8231ACCC:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x8231acec
	if (!cr6.eq) goto loc_8231ACEC;
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
	// b 0x8231ad0c
	goto loc_8231AD0C;
loc_8231ACEC:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x8231ad1c
	if (!cr6.eq) goto loc_8231AD1C;
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x8231a690
	sub_8231A690(ctx, base);
loc_8231AD0C:
	// lhz r11,82(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
	// b 0x8231ae18
	goto loc_8231AE18;
loc_8231AD1C:
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(r11.s32, 33, xer);
	// beq cr6,0x8231ad34
	if (cr6.eq) goto loc_8231AD34;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(r11.s32, 34, xer);
	// beq cr6,0x8231ad34
	if (cr6.eq) goto loc_8231AD34;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// b 0x8231ae18
	goto loc_8231AE18;
loc_8231AD34:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82275d68
	sub_82275D68(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82276480
	sub_82276480(ctx, base);
	// bl 0x8231c520
	sub_8231C520(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(r11.s32, 33, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r11,82(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 82));
	// bne cr6,0x8231adcc
	if (!cr6.eq) goto loc_8231ADCC;
	// lha r10,8(r29)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
	// mr r27,r21
	r27.u64 = r21.u64;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8231ae08
	if (!cr0.gt) goto loc_8231AE08;
	// mr r26,r21
	r26.u64 = r21.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_8231AD98:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r3,r28,r10
	ctx.r3.u64 = r28.u64 + ctx.r10.u64;
	// add r4,r26,r11
	ctx.r4.u64 = r26.u64 + r11.u64;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x8231ad98
	if (cr6.lt) goto loc_8231AD98;
	// b 0x8231ae08
	goto loc_8231AE08;
loc_8231ADCC:
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r28,r11,-1
	r28.s64 = r11.s64 + -1;
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8231d398
	sub_8231D398(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// add r10,r11,r28
	ctx.r10.u64 = r11.u64 + r28.u64;
	// mr r25,r11
	r25.u64 = r11.u64;
	// extsh r11,r10
	r11.s64 = ctx.r10.s16;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// sth r11,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r11.u16);
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
loc_8231AE08:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,-4264(r20)
	PPC_STORE_U32(r20.u32 + -4264, r11.u32);
loc_8231AE18:
	// lhz r11,82(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// extsh r10,r11
	ctx.r10.s64 = r11.s16;
	// cmpw cr6,r25,r10
	cr6.compare<int32_t>(r25.s32, ctx.r10.s32, xer);
	// blt cr6,0x8231aa9c
	if (cr6.lt) goto loc_8231AA9C;
loc_8231AE28:
	// extsh r4,r11
	ctx.r4.s64 = r11.s16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_8231AE3C"))) PPC_WEAK_FUNC(sub_8231AE3C);
PPC_FUNC_IMPL(__imp__sub_8231AE3C) {
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

__attribute__((alias("__imp__sub_8231AE64"))) PPC_WEAK_FUNC(sub_8231AE64);
PPC_FUNC_IMPL(__imp__sub_8231AE64) {
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

__attribute__((alias("__imp__sub_8231AE8C"))) PPC_WEAK_FUNC(sub_8231AE8C);
PPC_FUNC_IMPL(__imp__sub_8231AE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231AE90"))) PPC_WEAK_FUNC(sub_8231AE90);
PPC_FUNC_IMPL(__imp__sub_8231AE90) {
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
	// lwz r16,13528(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13528);
	// mflr r12
	// bl 0x8239bccc
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// stw r19,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r19.u32);
	// li r22,0
	r22.s64 = 0;
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r17,r22
	r17.u64 = r22.u64;
	// stw r22,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r22.u32);
	// lha r21,8(r24)
	r21.s64 = int16_t(PPC_LOAD_U16(r24.u32 + 8));
	// addi r20,r21,-1
	r20.s64 = r21.s64 + -1;
	// cmpw cr6,r26,r20
	cr6.compare<int32_t>(r26.s32, r20.s32, xer);
	// bge cr6,0x8231af58
	if (!cr6.lt) goto loc_8231AF58;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r26,3,0,28
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// bne cr6,0x8231af58
	if (!cr6.eq) goto loc_8231AF58;
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lha r17,8(r25)
	r17.s64 = int16_t(PPC_LOAD_U16(r25.u32 + 8));
	// cmpwi r17,0
	cr0.compare<int32_t>(r17.s32, 0, xer);
	// ble 0x8231af54
	if (!cr0.gt) goto loc_8231AF54;
	// mr r29,r22
	r29.u64 = r22.u64;
	// rlwinm r28,r8,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r17
	r30.u64 = r17.u64;
loc_8231AF14:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8231d2f8
	sub_8231D2F8(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bne 0x8231af14
	if (!cr0.eq) goto loc_8231AF14;
loc_8231AF54:
	// addi r30,r26,1
	r30.s64 = r26.s64 + 1;
loc_8231AF58:
	// stw r22,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r22.u32);
	// stw r22,4(r19)
	PPC_STORE_U32(r19.u32 + 4, r22.u32);
	// li r11,1
	r11.s64 = 1;
	// cmpw cr6,r30,r21
	cr6.compare<int32_t>(r30.s32, r21.s32, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// blt cr6,0x8231af9c
	if (cr6.lt) goto loc_8231AF9C;
	// stw r22,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r22.u32);
	// stw r22,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r22.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b038
	if (cr0.eq) goto loc_8231B038;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8231b038
	goto loc_8231B038;
loc_8231AF9C:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x8231afb0
	if (cr6.eq) goto loc_8231AFB0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8231d4a8
	sub_8231D4A8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_8231AFB0:
	// cmpw cr6,r30,r20
	cr6.compare<int32_t>(r30.s32, r20.s32, xer);
	// bge cr6,0x8231b000
	if (!cr6.lt) goto loc_8231B000;
	// subf r28,r30,r20
	r28.s64 = r20.s64 - r30.s64;
	// rlwinm r29,r30,3,0,28
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
loc_8231AFC4:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8231a748
	sub_8231A748(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231aff4
	if (cr0.eq) goto loc_8231AFF4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231AFF4:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x8231afc4
	if (!cr0.eq) goto loc_8231AFC4;
loc_8231B000:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x8231b038
	if (cr6.eq) goto loc_8231B038;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8231d4a8
	sub_8231D4A8(ctx, base);
	// b 0x8231b038
	goto loc_8231B038;
loc_8231B030:
	// addi r17,r17,-1
	r17.s64 = r17.s64 + -1;
	// bl 0x8231d5e0
	sub_8231D5E0(ctx, base);
loc_8231B038:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// bne cr6,0x8231b030
	if (!cr6.eq) goto loc_8231B030;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd1c
	return;
}

__attribute__((alias("__imp__sub_8231AE98"))) PPC_WEAK_FUNC(sub_8231AE98);
PPC_FUNC_IMPL(__imp__sub_8231AE98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// mflr r12
	// bl 0x8239bccc
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// stw r19,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r19.u32);
	// li r22,0
	r22.s64 = 0;
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r17,r22
	r17.u64 = r22.u64;
	// stw r22,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r22.u32);
	// lha r21,8(r24)
	r21.s64 = int16_t(PPC_LOAD_U16(r24.u32 + 8));
	// addi r20,r21,-1
	r20.s64 = r21.s64 + -1;
	// cmpw cr6,r26,r20
	cr6.compare<int32_t>(r26.s32, r20.s32, xer);
	// bge cr6,0x8231af58
	if (!cr6.lt) goto loc_8231AF58;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r26,3,0,28
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// bne cr6,0x8231af58
	if (!cr6.eq) goto loc_8231AF58;
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lha r17,8(r25)
	r17.s64 = int16_t(PPC_LOAD_U16(r25.u32 + 8));
	// cmpwi r17,0
	cr0.compare<int32_t>(r17.s32, 0, xer);
	// ble 0x8231af54
	if (!cr0.gt) goto loc_8231AF54;
	// mr r29,r22
	r29.u64 = r22.u64;
	// rlwinm r28,r8,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r17
	r30.u64 = r17.u64;
loc_8231AF14:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8231d2f8
	sub_8231D2F8(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bne 0x8231af14
	if (!cr0.eq) goto loc_8231AF14;
loc_8231AF54:
	// addi r30,r26,1
	r30.s64 = r26.s64 + 1;
loc_8231AF58:
	// stw r22,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r22.u32);
	// stw r22,4(r19)
	PPC_STORE_U32(r19.u32 + 4, r22.u32);
	// li r11,1
	r11.s64 = 1;
	// cmpw cr6,r30,r21
	cr6.compare<int32_t>(r30.s32, r21.s32, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// blt cr6,0x8231af9c
	if (cr6.lt) goto loc_8231AF9C;
	// stw r22,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r22.u32);
	// stw r22,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r22.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b038
	if (cr0.eq) goto loc_8231B038;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8231b038
	goto loc_8231B038;
loc_8231AF9C:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x8231afb0
	if (cr6.eq) goto loc_8231AFB0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8231d4a8
	sub_8231D4A8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_8231AFB0:
	// cmpw cr6,r30,r20
	cr6.compare<int32_t>(r30.s32, r20.s32, xer);
	// bge cr6,0x8231b000
	if (!cr6.lt) goto loc_8231B000;
	// subf r28,r30,r20
	r28.s64 = r20.s64 - r30.s64;
	// rlwinm r29,r30,3,0,28
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
loc_8231AFC4:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8231a748
	sub_8231A748(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231aff4
	if (cr0.eq) goto loc_8231AFF4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231AFF4:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x8231afc4
	if (!cr0.eq) goto loc_8231AFC4;
loc_8231B000:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x8231b038
	if (cr6.eq) goto loc_8231B038;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8231d4a8
	sub_8231D4A8(ctx, base);
	// b 0x8231b038
	goto loc_8231B038;
loc_8231B030:
	// addi r17,r17,-1
	r17.s64 = r17.s64 + -1;
	// bl 0x8231d5e0
	sub_8231D5E0(ctx, base);
loc_8231B038:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// bne cr6,0x8231b030
	if (!cr6.eq) goto loc_8231B030;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd1c
	return;
}

__attribute__((alias("__imp__sub_8231B04C"))) PPC_WEAK_FUNC(sub_8231B04C);
PPC_FUNC_IMPL(__imp__sub_8231B04C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b07c
	if (cr0.eq) goto loc_8231B07C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// bl 0x82120868
	sub_82120868(ctx, base);
loc_8231B07C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B08C"))) PPC_WEAK_FUNC(sub_8231B08C);
PPC_FUNC_IMPL(__imp__sub_8231B08C) {
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

__attribute__((alias("__imp__sub_8231B0B4"))) PPC_WEAK_FUNC(sub_8231B0B4);
PPC_FUNC_IMPL(__imp__sub_8231B0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231B0B8"))) PPC_WEAK_FUNC(sub_8231B0B8);
PPC_FUNC_IMPL(__imp__sub_8231B0B8) {
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
	// lwz r16,13600(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13600);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231b12c
	if (cr0.eq) goto loc_8231B12C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231b118
	if (cr0.eq) goto loc_8231B118;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// b 0x8231b11c
	goto loc_8231B11C;
loc_8231B118:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231B11C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// bl 0x8231aa20
	sub_8231AA20(ctx, base);
	// b 0x8231b134
	goto loc_8231B134;
loc_8231B12C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_8231B134:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8231B0C0"))) PPC_WEAK_FUNC(sub_8231B0C0);
PPC_FUNC_IMPL(__imp__sub_8231B0C0) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231b12c
	if (cr0.eq) goto loc_8231B12C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231b118
	if (cr0.eq) goto loc_8231B118;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// b 0x8231b11c
	goto loc_8231B11C;
loc_8231B118:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231B11C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// bl 0x8231aa20
	sub_8231AA20(ctx, base);
	// b 0x8231b134
	goto loc_8231B134;
loc_8231B12C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_8231B134:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8231B140"))) PPC_WEAK_FUNC(sub_8231B140);
PPC_FUNC_IMPL(__imp__sub_8231B140) {
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
	// bl 0x821206f0
	sub_821206F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B168"))) PPC_WEAK_FUNC(sub_8231B168);
PPC_FUNC_IMPL(__imp__sub_8231B168) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// addi r31,r11,-4260
	r31.s64 = r11.s64 + -4260;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r30,-4224(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + -4224);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r25,-4240(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + -4240);
	// lwz r27,4(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r26,8(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r24,0(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r23,12(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r22,14848(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// bl 0x82275d68
	sub_82275D68(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82276480
	sub_82276480(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8232f1d8
	sub_8232F1D8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8231c520
	sub_8231C520(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r26.u32);
	// stw r25,-4240(r29)
	PPC_STORE_U32(r29.u32 + -4240, r25.u32);
	// stw r30,-4224(r28)
	PPC_STORE_U32(r28.u32 + -4224, r30.u32);
	// stw r24,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r24.u32);
	// stw r23,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r23.u32);
	// bl 0x8232f1d8
	sub_8232F1D8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8231B1F8"))) PPC_WEAK_FUNC(sub_8231B1F8);
PPC_FUNC_IMPL(__imp__sub_8231B1F8) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-4260
	r31.s64 = r11.s64 + -4260;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lha r10,8(r3)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8231b23c
	if (!cr6.eq) goto loc_8231B23C;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8231B23C:
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r9
	ctx.r3.u64 = r11.u64 + ctx.r9.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
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

__attribute__((alias("__imp__sub_8231B270"))) PPC_WEAK_FUNC(sub_8231B270);
PPC_FUNC_IMPL(__imp__sub_8231B270) {
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,-4252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4252);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b2ac
	if (cr0.eq) goto loc_8231B2AC;
loc_8231B2A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231b2f0
	goto loc_8231B2F0;
loc_8231B2AC:
	// lwz r3,-4252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4252);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231b2a4
	if (!cr0.eq) goto loc_8231B2A4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,-4252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4252);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lwz r3,-4252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4252);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8231B2F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8231B2F8"))) PPC_WEAK_FUNC(sub_8231B2F8);
PPC_FUNC_IMPL(__imp__sub_8231B2F8) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
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

__attribute__((alias("__imp__sub_8231B334"))) PPC_WEAK_FUNC(sub_8231B334);
PPC_FUNC_IMPL(__imp__sub_8231B334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231B338"))) PPC_WEAK_FUNC(sub_8231B338);
PPC_FUNC_IMPL(__imp__sub_8231B338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B34C"))) PPC_WEAK_FUNC(sub_8231B34C);
PPC_FUNC_IMPL(__imp__sub_8231B34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231B350"))) PPC_WEAK_FUNC(sub_8231B350);
PPC_FUNC_IMPL(__imp__sub_8231B350) {
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
	// lwz r16,13720(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13720);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x8235a2c8
	sub_8235A2C8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r29,0
	r29.s64 = 0;
	// stb r28,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r28.u8);
	// addi r11,r11,13696
	r11.s64 = r11.s64 + 13696;
	// clrlwi. r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r29.u32);
	// lwz r28,16(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// beq 0x8231b408
	if (cr0.eq) goto loc_8231B408;
	// bl 0x82270ce8
	sub_82270CE8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231b3d0
	if (!cr0.eq) goto loc_8231B3D0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-4236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4236);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8231b3d0
	if (!cr6.eq) goto loc_8231B3D0;
	// stb r29,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r29.u8);
	// b 0x8231b408
	goto loc_8231B408;
loc_8231B3D0:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r11.u8);
	// bl 0x82275ef0
	sub_82275EF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82275d68
	sub_82275D68(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,13664
	r11.s64 = r11.s64 + 13664;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8218e4c0
	sub_8218E4C0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8231B408:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822767f8
	sub_822767F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// beq 0x8231b468
	if (cr0.eq) goto loc_8231B468;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r3.u32);
	// addi r4,r11,13680
	ctx.r4.s64 = r11.s64 + 13680;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r4,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r4.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8231b47c
	goto loc_8231B47C;
loc_8231B468:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8231b47c
	if (cr6.eq) goto loc_8231B47C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// bl 0x82276048
	sub_82276048(ctx, base);
loc_8231B47C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8231B358"))) PPC_WEAK_FUNC(sub_8231B358);
PPC_FUNC_IMPL(__imp__sub_8231B358) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x8235a2c8
	sub_8235A2C8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r29,0
	r29.s64 = 0;
	// stb r28,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r28.u8);
	// addi r11,r11,13696
	r11.s64 = r11.s64 + 13696;
	// clrlwi. r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r29.u32);
	// lwz r28,16(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// beq 0x8231b408
	if (cr0.eq) goto loc_8231B408;
	// bl 0x82270ce8
	sub_82270CE8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231b3d0
	if (!cr0.eq) goto loc_8231B3D0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-4236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4236);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8231b3d0
	if (!cr6.eq) goto loc_8231B3D0;
	// stb r29,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r29.u8);
	// b 0x8231b408
	goto loc_8231B408;
loc_8231B3D0:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r11.u8);
	// bl 0x82275ef0
	sub_82275EF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82275d68
	sub_82275D68(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,13664
	r11.s64 = r11.s64 + 13664;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8218e4c0
	sub_8218E4C0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8231B408:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822767f8
	sub_822767F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// beq 0x8231b468
	if (cr0.eq) goto loc_8231B468;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r3.u32);
	// addi r4,r11,13680
	ctx.r4.s64 = r11.s64 + 13680;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r4,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r4.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8231b47c
	goto loc_8231B47C;
loc_8231B468:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8231b47c
	if (cr6.eq) goto loc_8231B47C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// bl 0x82276048
	sub_82276048(ctx, base);
loc_8231B47C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8231B488"))) PPC_WEAK_FUNC(sub_8231B488);
PPC_FUNC_IMPL(__imp__sub_8231B488) {
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
	// bl 0x8235a3c8
	sub_8235A3C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B4B0"))) PPC_WEAK_FUNC(sub_8231B4B0);
PPC_FUNC_IMPL(__imp__sub_8231B4B0) {
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
	// lwz r16,13776(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13776);
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
	// addi r11,r11,13696
	r11.s64 = r11.s64 + 13696;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231b520
	if (!cr0.eq) goto loc_8231B520;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231b530
	if (cr0.eq) goto loc_8231B530;
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
	// b 0x8231b530
	goto loc_8231B530;
loc_8231B520:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231b530
	if (cr0.eq) goto loc_8231B530;
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231B530:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a3c8
	sub_8235A3C8(ctx, base);
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

__attribute__((alias("__imp__sub_8231B4B8"))) PPC_WEAK_FUNC(sub_8231B4B8);
PPC_FUNC_IMPL(__imp__sub_8231B4B8) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,13696
	r11.s64 = r11.s64 + 13696;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231b520
	if (!cr0.eq) goto loc_8231B520;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231b530
	if (cr0.eq) goto loc_8231B530;
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
	// b 0x8231b530
	goto loc_8231B530;
loc_8231B520:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231b530
	if (cr0.eq) goto loc_8231B530;
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231B530:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a3c8
	sub_8235A3C8(ctx, base);
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

__attribute__((alias("__imp__sub_8231B550"))) PPC_WEAK_FUNC(sub_8231B550);
PPC_FUNC_IMPL(__imp__sub_8231B550) {
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
	// bl 0x8235a3c8
	sub_8235A3C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B578"))) PPC_WEAK_FUNC(sub_8231B578);
PPC_FUNC_IMPL(__imp__sub_8231B578) {
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
	// bl 0x8231b4b8
	sub_8231B4B8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b5a8
	if (cr0.eq) goto loc_8231B5A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8231B5A8:
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

__attribute__((alias("__imp__sub_8231B5C4"))) PPC_WEAK_FUNC(sub_8231B5C4);
PPC_FUNC_IMPL(__imp__sub_8231B5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231B5C8"))) PPC_WEAK_FUNC(sub_8231B5C8);
PPC_FUNC_IMPL(__imp__sub_8231B5C8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,13976(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13976);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8232f458
	sub_8232F458(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,-4232
	r28.s64 = r11.s64 + -4232;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x8231b60c
	goto loc_8231B60C;
loc_8231B5FC:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8231b660
	if (cr0.eq) goto loc_8231B660;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8231B60C:
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8231b5fc
	if (!cr0.eq) goto loc_8231B5FC;
	// li r11,1
	r11.s64 = 1;
loc_8231B628:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231b650
	if (!cr0.eq) goto loc_8231B650;
	// cmpwi cr6,r30,19
	cr6.compare<int32_t>(r30.s32, 19, xer);
	// beq cr6,0x8231b650
	if (cr6.eq) goto loc_8231B650;
	// cmpwi cr6,r30,20
	cr6.compare<int32_t>(r30.s32, 20, xer);
	// beq cr6,0x8231b650
	if (cr6.eq) goto loc_8231B650;
	// cmpwi cr6,r30,21
	cr6.compare<int32_t>(r30.s32, 21, xer);
	// beq cr6,0x8231b650
	if (cr6.eq) goto loc_8231B650;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(r30.s32, 22, xer);
	// bne cr6,0x8231bec4
	if (!cr6.eq) goto loc_8231BEC4;
loc_8231B650:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x8231b668
	if (!cr6.eq) goto loc_8231B668;
loc_8231B658:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231bec8
	goto loc_8231BEC8;
loc_8231B660:
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x8231b628
	goto loc_8231B628;
loc_8231B668:
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// beq cr6,0x8231b658
	if (cr6.eq) goto loc_8231B658;
	// cmpwi cr6,r30,10
	cr6.compare<int32_t>(r30.s32, 10, xer);
	// beq cr6,0x8231b658
	if (cr6.eq) goto loc_8231B658;
	// cmpwi cr6,r30,12
	cr6.compare<int32_t>(r30.s32, 12, xer);
	// beq cr6,0x8231b658
	if (cr6.eq) goto loc_8231B658;
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(r30.s32, 16, xer);
	// bne cr6,0x8231b710
	if (!cr6.eq) goto loc_8231B710;
	// bl 0x8232f458
	sub_8232F458(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-4260
	r30.s64 = r11.s64 + -4260;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231b6dc
	if (cr0.eq) goto loc_8231B6DC;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r4,14848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231B6DC:
	// bl 0x8231b168
	sub_8231B168(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8231d398
	sub_8231D398(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lha r11,8(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 8));
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231B710:
	// cmpwi cr6,r30,15
	cr6.compare<int32_t>(r30.s32, 15, xer);
	// bne cr6,0x8231b7ac
	if (!cr6.eq) goto loc_8231B7AC;
	// bl 0x8232f458
	sub_8232F458(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4260
	r11.s64 = r11.s64 + -4260;
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231b76c
	if (cr0.eq) goto loc_8231B76C;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r4,14848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r10,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231B76C:
	// bl 0x8231b168
	sub_8231B168(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8231b7a4
	if (!cr0.gt) goto loc_8231B7A4;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8231B784:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8231b784
	if (cr6.lt) goto loc_8231B784;
loc_8231B7A4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231B7AC:
	// cmpwi cr6,r30,19
	cr6.compare<int32_t>(r30.s32, 19, xer);
	// beq cr6,0x8231bdb0
	if (cr6.eq) goto loc_8231BDB0;
	// cmpwi cr6,r30,20
	cr6.compare<int32_t>(r30.s32, 20, xer);
	// beq cr6,0x8231bdb0
	if (cr6.eq) goto loc_8231BDB0;
	// cmpwi cr6,r30,21
	cr6.compare<int32_t>(r30.s32, 21, xer);
	// bne cr6,0x8231b818
	if (!cr6.eq) goto loc_8231B818;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4260
	r11.s64 = r11.s64 + -4260;
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231b800
	if (cr0.eq) goto loc_8231B800;
	// li r11,8
	r11.s64 = 8;
	// stw r29,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r29.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231B800:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
	// b 0x8231bec4
	goto loc_8231BEC4;
loc_8231B818:
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(r30.s32, 22, xer);
	// bne cr6,0x8231b878
	if (!cr6.eq) goto loc_8231B878;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4260
	r11.s64 = r11.s64 + -4260;
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231b85c
	if (cr0.eq) goto loc_8231B85C;
	// li r11,9
	r11.s64 = 9;
	// stw r29,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r29.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231B85C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x8231a690
	sub_8231A690(ctx, base);
	// b 0x8231bec4
	goto loc_8231BEC4;
loc_8231B878:
	// cmpwi cr6,r30,14
	cr6.compare<int32_t>(r30.s32, 14, xer);
	// bne cr6,0x8231b924
	if (!cr6.eq) goto loc_8231B924;
	// bl 0x8232f458
	sub_8232F458(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-4260
	r30.s64 = r11.s64 + -4260;
	// lwz r28,12(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// bl 0x8231c1a8
	sub_8231C1A8(ctx, base);
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231b8fc
	if (cr0.eq) goto loc_8231B8FC;
	// li r11,36
	r11.s64 = 36;
	// stw r29,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r29.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b8d4
	if (cr0.eq) goto loc_8231B8D4;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231B8D4:
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b91c
	if (cr0.eq) goto loc_8231B91C;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// b 0x8231b918
	goto loc_8231B918;
loc_8231B8FC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x8231a748
	sub_8231A748(ctx, base);
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b91c
	if (cr0.eq) goto loc_8231B91C;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 240);
loc_8231B918:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231B91C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231B924:
	// cmpwi cr6,r30,13
	cr6.compare<int32_t>(r30.s32, 13, xer);
	// bne cr6,0x8231b9d8
	if (!cr6.eq) goto loc_8231B9D8;
	// bl 0x8232f458
	sub_8232F458(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r4,14848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// bl 0x8232f458
	sub_8232F458(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-4260
	r30.s64 = r11.s64 + -4260;
	// lwz r29,12(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// bl 0x8231c1a8
	sub_8231C1A8(ctx, base);
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231b9c8
	if (cr0.eq) goto loc_8231B9C8;
	// li r11,32
	r11.s64 = 32;
	// stw r11,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r11.u32);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r11,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r11.u32);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b998
	if (cr0.eq) goto loc_8231B998;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231B998:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b7a4
	if (cr0.eq) goto loc_8231B7A4;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8231b7a4
	goto loc_8231B7A4;
loc_8231B9C8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x8231dd18
	sub_8231DD18(ctx, base);
	// b 0x8231b7a4
	goto loc_8231B7A4;
loc_8231B9D8:
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(r30.s32, 7, xer);
	// beq cr6,0x8231bd50
	if (cr6.eq) goto loc_8231BD50;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(r30.s32, 11, xer);
	// beq cr6,0x8231bd50
	if (cr6.eq) goto loc_8231BD50;
	// cmpwi cr6,r30,9
	cr6.compare<int32_t>(r30.s32, 9, xer);
	// beq cr6,0x8231bd50
	if (cr6.eq) goto loc_8231BD50;
	// cmpwi cr6,r30,17
	cr6.compare<int32_t>(r30.s32, 17, xer);
	// bne cr6,0x8231ba3c
	if (!cr6.eq) goto loc_8231BA3C;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// lwz r11,14848(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231BA3C:
	// cmpwi cr6,r30,18
	cr6.compare<int32_t>(r30.s32, 18, xer);
	// bne cr6,0x8231ba6c
	if (!cr6.eq) goto loc_8231BA6C;
	// li r11,6
	r11.s64 = 6;
	// stw r29,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r29.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231BA6C:
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// bne cr6,0x8231baa4
	if (!cr6.eq) goto loc_8231BAA4;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r3,14848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// bl 0x823a0c30
	sub_823A0C30(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// stw r29,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r29.u32);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231BAA4:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x8231bb54
	if (!cr6.eq) goto loc_8231BB54;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,14848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
loc_8231BAC4:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8231bac4
	if (!cr6.eq) goto loc_8231BAC4;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// b 0x8231bb20
	goto loc_8231BB20;
loc_8231BAEC:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x8231bafc
	if (cr6.lt) goto loc_8231BAFC;
	// addi r11,r11,-87
	r11.s64 = r11.s64 + -87;
	// b 0x8231bb10
	goto loc_8231BB10;
loc_8231BAFC:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// ble cr6,0x8231bb0c
	if (!cr6.gt) goto loc_8231BB0C;
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
	// b 0x8231bb10
	goto loc_8231BB10;
loc_8231BB0C:
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
loc_8231BB10:
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
loc_8231BB20:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// bne cr6,0x8231baec
	if (!cr6.eq) goto loc_8231BAEC;
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231BB54:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// bne cr6,0x8231bb94
	if (!cr6.eq) goto loc_8231BB94;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r3,14848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// bl 0x823a0c28
	sub_823A0C28(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231BB94:
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(r30.s32, 5, xer);
	// beq cr6,0x8231bcbc
	if (cr6.eq) goto loc_8231BCBC;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(r30.s32, 6, xer);
	// beq cr6,0x8231bc98
	if (cr6.eq) goto loc_8231BC98;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// bne cr6,0x8231b658
	if (!cr6.eq) goto loc_8231B658;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r10,14852(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 14852);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r9,14848(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r29,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, r29.u8);
	// lwz r11,14848(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8231bc74
	if (cr6.eq) goto loc_8231BC74;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
loc_8231BBE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,92
	cr6.compare<int32_t>(ctx.r10.s32, 92, xer);
	// bne cr6,0x8231bc24
	if (!cr6.eq) goto loc_8231BC24;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,110
	cr6.compare<int32_t>(ctx.r10.s32, 110, xer);
	// bne cr6,0x8231bc0c
	if (!cr6.eq) goto loc_8231BC0C;
	// li r10,10
	ctx.r10.s64 = 10;
	// b 0x8231bc18
	goto loc_8231BC18;
loc_8231BC0C:
	// cmpwi cr6,r10,113
	cr6.compare<int32_t>(ctx.r10.s32, 113, xer);
	// bne cr6,0x8231bc38
	if (!cr6.eq) goto loc_8231BC38;
	// li r10,34
	ctx.r10.s64 = 34;
loc_8231BC18:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x8231bc38
	goto loc_8231BC38;
loc_8231BC24:
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x8231bc38
	if (!cr6.eq) goto loc_8231BC38;
	// lwz r10,-4240(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4240);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-4240(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4240, ctx.r10.u32);
loc_8231BC38:
	// clrlwi. r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8231bc64
	if (cr0.eq) goto loc_8231BC64;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// b 0x8231bc58
	goto loc_8231BC58;
loc_8231BC48:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8231BC58:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8231bc48
	if (!cr6.eq) goto loc_8231BC48;
loc_8231BC64:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8231bbe0
	if (!cr6.eq) goto loc_8231BBE0;
loc_8231BC74:
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231BC98:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r10,14852(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 14852);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r9,14848(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r29,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, r29.u8);
	// lwz r11,14848(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// b 0x8231bcc4
	goto loc_8231BCC4;
loc_8231BCBC:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r4,14848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 14848);
loc_8231BCC4:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4260
	r11.s64 = r11.s64 + -4260;
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8231bd24
	if (!cr0.eq) goto loc_8231BD24;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8231bd24
	if (cr0.eq) goto loc_8231BD24;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8231bec4
	if (!cr0.gt) goto loc_8231BEC4;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8231BD00:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8231bd00
	if (cr6.lt) goto loc_8231BD00;
	// b 0x8231bec4
	goto loc_8231BEC4;
loc_8231BD24:
	// li r11,5
	r11.s64 = 5;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231BD50:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r29,r11,-4260
	r29.s64 = r11.s64 + -4260;
	// lwz r28,12(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r30,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r30.u32);
	// bl 0x8231c1a8
	sub_8231C1A8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r28,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r28.u32);
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(r30.s32, 7, xer);
	// bne cr6,0x8231bd7c
	if (!cr6.eq) goto loc_8231BD7C;
	// li r5,16
	ctx.r5.s64 = 16;
	// b 0x8231bd8c
	goto loc_8231BD8C;
loc_8231BD7C:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(r30.s32, 11, xer);
	// li r5,17
	ctx.r5.s64 = 17;
	// beq cr6,0x8231bd8c
	if (cr6.eq) goto loc_8231BD8C;
	// li r5,19
	ctx.r5.s64 = 19;
loc_8231BD8C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,252(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b91c
	if (cr0.eq) goto loc_8231B91C;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// b 0x8231b918
	goto loc_8231B918;
loc_8231BDB0:
	// addi r11,r30,-19
	r11.s64 = r30.s64 + -19;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// bl 0x8232f458
	sub_8232F458(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x8231bdf0
	if (!cr6.eq) goto loc_8231BDF0;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r10,14852(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 14852);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r9,14848(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r29,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, r29.u8);
	// lwz r11,14848(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// b 0x8231bdf8
	goto loc_8231BDF8;
loc_8231BDF0:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r4,14848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 14848);
loc_8231BDF8:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4260
	r11.s64 = r11.s64 + -4260;
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// beq 0x8231be60
	if (cr0.eq) goto loc_8231BE60;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231be48
	if (cr0.eq) goto loc_8231BE48;
	// li r11,7
	r11.s64 = 7;
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231BE48:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// b 0x8231bea8
	goto loc_8231BEA8;
loc_8231BE60:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231be98
	if (cr0.eq) goto loc_8231BE98;
	// li r11,35
	r11.s64 = 35;
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
loc_8231BE90:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8231bec4
	goto loc_8231BEC4;
loc_8231BE98:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8231BEA8:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x8231a628
	sub_8231A628(ctx, base);
loc_8231BEC4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8231BEC8:
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8231B5D0"))) PPC_WEAK_FUNC(sub_8231B5D0);
PPC_FUNC_IMPL(__imp__sub_8231B5D0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8232f458
	sub_8232F458(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,-4232
	r28.s64 = r11.s64 + -4232;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x8231b60c
	goto loc_8231B60C;
loc_8231B5FC:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8231b660
	if (cr0.eq) goto loc_8231B660;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8231B60C:
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8231b5fc
	if (!cr0.eq) goto loc_8231B5FC;
	// li r11,1
	r11.s64 = 1;
loc_8231B628:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231b650
	if (!cr0.eq) goto loc_8231B650;
	// cmpwi cr6,r30,19
	cr6.compare<int32_t>(r30.s32, 19, xer);
	// beq cr6,0x8231b650
	if (cr6.eq) goto loc_8231B650;
	// cmpwi cr6,r30,20
	cr6.compare<int32_t>(r30.s32, 20, xer);
	// beq cr6,0x8231b650
	if (cr6.eq) goto loc_8231B650;
	// cmpwi cr6,r30,21
	cr6.compare<int32_t>(r30.s32, 21, xer);
	// beq cr6,0x8231b650
	if (cr6.eq) goto loc_8231B650;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(r30.s32, 22, xer);
	// bne cr6,0x8231bec4
	if (!cr6.eq) goto loc_8231BEC4;
loc_8231B650:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x8231b668
	if (!cr6.eq) goto loc_8231B668;
loc_8231B658:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231bec8
	goto loc_8231BEC8;
loc_8231B660:
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x8231b628
	goto loc_8231B628;
loc_8231B668:
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// beq cr6,0x8231b658
	if (cr6.eq) goto loc_8231B658;
	// cmpwi cr6,r30,10
	cr6.compare<int32_t>(r30.s32, 10, xer);
	// beq cr6,0x8231b658
	if (cr6.eq) goto loc_8231B658;
	// cmpwi cr6,r30,12
	cr6.compare<int32_t>(r30.s32, 12, xer);
	// beq cr6,0x8231b658
	if (cr6.eq) goto loc_8231B658;
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(r30.s32, 16, xer);
	// bne cr6,0x8231b710
	if (!cr6.eq) goto loc_8231B710;
	// bl 0x8232f458
	sub_8232F458(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-4260
	r30.s64 = r11.s64 + -4260;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231b6dc
	if (cr0.eq) goto loc_8231B6DC;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r4,14848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231B6DC:
	// bl 0x8231b168
	sub_8231B168(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8231d398
	sub_8231D398(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lha r11,8(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 8));
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231B710:
	// cmpwi cr6,r30,15
	cr6.compare<int32_t>(r30.s32, 15, xer);
	// bne cr6,0x8231b7ac
	if (!cr6.eq) goto loc_8231B7AC;
	// bl 0x8232f458
	sub_8232F458(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4260
	r11.s64 = r11.s64 + -4260;
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231b76c
	if (cr0.eq) goto loc_8231B76C;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r4,14848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r10,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231B76C:
	// bl 0x8231b168
	sub_8231B168(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8231b7a4
	if (!cr0.gt) goto loc_8231B7A4;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8231B784:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8231b784
	if (cr6.lt) goto loc_8231B784;
loc_8231B7A4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231B7AC:
	// cmpwi cr6,r30,19
	cr6.compare<int32_t>(r30.s32, 19, xer);
	// beq cr6,0x8231bdb0
	if (cr6.eq) goto loc_8231BDB0;
	// cmpwi cr6,r30,20
	cr6.compare<int32_t>(r30.s32, 20, xer);
	// beq cr6,0x8231bdb0
	if (cr6.eq) goto loc_8231BDB0;
	// cmpwi cr6,r30,21
	cr6.compare<int32_t>(r30.s32, 21, xer);
	// bne cr6,0x8231b818
	if (!cr6.eq) goto loc_8231B818;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4260
	r11.s64 = r11.s64 + -4260;
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231b800
	if (cr0.eq) goto loc_8231B800;
	// li r11,8
	r11.s64 = 8;
	// stw r29,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r29.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231B800:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
	// b 0x8231bec4
	goto loc_8231BEC4;
loc_8231B818:
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(r30.s32, 22, xer);
	// bne cr6,0x8231b878
	if (!cr6.eq) goto loc_8231B878;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4260
	r11.s64 = r11.s64 + -4260;
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231b85c
	if (cr0.eq) goto loc_8231B85C;
	// li r11,9
	r11.s64 = 9;
	// stw r29,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r29.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231B85C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x8231a690
	sub_8231A690(ctx, base);
	// b 0x8231bec4
	goto loc_8231BEC4;
loc_8231B878:
	// cmpwi cr6,r30,14
	cr6.compare<int32_t>(r30.s32, 14, xer);
	// bne cr6,0x8231b924
	if (!cr6.eq) goto loc_8231B924;
	// bl 0x8232f458
	sub_8232F458(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-4260
	r30.s64 = r11.s64 + -4260;
	// lwz r28,12(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// bl 0x8231c1a8
	sub_8231C1A8(ctx, base);
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231b8fc
	if (cr0.eq) goto loc_8231B8FC;
	// li r11,36
	r11.s64 = 36;
	// stw r29,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r29.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b8d4
	if (cr0.eq) goto loc_8231B8D4;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231B8D4:
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b91c
	if (cr0.eq) goto loc_8231B91C;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// b 0x8231b918
	goto loc_8231B918;
loc_8231B8FC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x8231a748
	sub_8231A748(ctx, base);
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b91c
	if (cr0.eq) goto loc_8231B91C;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 240);
loc_8231B918:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231B91C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231B924:
	// cmpwi cr6,r30,13
	cr6.compare<int32_t>(r30.s32, 13, xer);
	// bne cr6,0x8231b9d8
	if (!cr6.eq) goto loc_8231B9D8;
	// bl 0x8232f458
	sub_8232F458(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r4,14848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// bl 0x8232f458
	sub_8232F458(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-4260
	r30.s64 = r11.s64 + -4260;
	// lwz r29,12(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// bl 0x8231c1a8
	sub_8231C1A8(ctx, base);
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231b9c8
	if (cr0.eq) goto loc_8231B9C8;
	// li r11,32
	r11.s64 = 32;
	// stw r11,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r11.u32);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r11,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r11.u32);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b998
	if (cr0.eq) goto loc_8231B998;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8231B998:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b7a4
	if (cr0.eq) goto loc_8231B7A4;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8231b7a4
	goto loc_8231B7A4;
loc_8231B9C8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x8231dd18
	sub_8231DD18(ctx, base);
	// b 0x8231b7a4
	goto loc_8231B7A4;
loc_8231B9D8:
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(r30.s32, 7, xer);
	// beq cr6,0x8231bd50
	if (cr6.eq) goto loc_8231BD50;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(r30.s32, 11, xer);
	// beq cr6,0x8231bd50
	if (cr6.eq) goto loc_8231BD50;
	// cmpwi cr6,r30,9
	cr6.compare<int32_t>(r30.s32, 9, xer);
	// beq cr6,0x8231bd50
	if (cr6.eq) goto loc_8231BD50;
	// cmpwi cr6,r30,17
	cr6.compare<int32_t>(r30.s32, 17, xer);
	// bne cr6,0x8231ba3c
	if (!cr6.eq) goto loc_8231BA3C;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// lwz r11,14848(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231BA3C:
	// cmpwi cr6,r30,18
	cr6.compare<int32_t>(r30.s32, 18, xer);
	// bne cr6,0x8231ba6c
	if (!cr6.eq) goto loc_8231BA6C;
	// li r11,6
	r11.s64 = 6;
	// stw r29,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r29.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231BA6C:
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// bne cr6,0x8231baa4
	if (!cr6.eq) goto loc_8231BAA4;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r3,14848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// bl 0x823a0c30
	sub_823A0C30(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// stw r29,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r29.u32);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231BAA4:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x8231bb54
	if (!cr6.eq) goto loc_8231BB54;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,14848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
loc_8231BAC4:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8231bac4
	if (!cr6.eq) goto loc_8231BAC4;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// b 0x8231bb20
	goto loc_8231BB20;
loc_8231BAEC:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x8231bafc
	if (cr6.lt) goto loc_8231BAFC;
	// addi r11,r11,-87
	r11.s64 = r11.s64 + -87;
	// b 0x8231bb10
	goto loc_8231BB10;
loc_8231BAFC:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// ble cr6,0x8231bb0c
	if (!cr6.gt) goto loc_8231BB0C;
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
	// b 0x8231bb10
	goto loc_8231BB10;
loc_8231BB0C:
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
loc_8231BB10:
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
loc_8231BB20:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// bne cr6,0x8231baec
	if (!cr6.eq) goto loc_8231BAEC;
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231BB54:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// bne cr6,0x8231bb94
	if (!cr6.eq) goto loc_8231BB94;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r3,14848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// bl 0x823a0c28
	sub_823A0C28(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231BB94:
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(r30.s32, 5, xer);
	// beq cr6,0x8231bcbc
	if (cr6.eq) goto loc_8231BCBC;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(r30.s32, 6, xer);
	// beq cr6,0x8231bc98
	if (cr6.eq) goto loc_8231BC98;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// bne cr6,0x8231b658
	if (!cr6.eq) goto loc_8231B658;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r10,14852(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 14852);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r9,14848(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r29,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, r29.u8);
	// lwz r11,14848(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8231bc74
	if (cr6.eq) goto loc_8231BC74;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
loc_8231BBE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,92
	cr6.compare<int32_t>(ctx.r10.s32, 92, xer);
	// bne cr6,0x8231bc24
	if (!cr6.eq) goto loc_8231BC24;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,110
	cr6.compare<int32_t>(ctx.r10.s32, 110, xer);
	// bne cr6,0x8231bc0c
	if (!cr6.eq) goto loc_8231BC0C;
	// li r10,10
	ctx.r10.s64 = 10;
	// b 0x8231bc18
	goto loc_8231BC18;
loc_8231BC0C:
	// cmpwi cr6,r10,113
	cr6.compare<int32_t>(ctx.r10.s32, 113, xer);
	// bne cr6,0x8231bc38
	if (!cr6.eq) goto loc_8231BC38;
	// li r10,34
	ctx.r10.s64 = 34;
loc_8231BC18:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x8231bc38
	goto loc_8231BC38;
loc_8231BC24:
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x8231bc38
	if (!cr6.eq) goto loc_8231BC38;
	// lwz r10,-4240(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4240);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-4240(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4240, ctx.r10.u32);
loc_8231BC38:
	// clrlwi. r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8231bc64
	if (cr0.eq) goto loc_8231BC64;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// b 0x8231bc58
	goto loc_8231BC58;
loc_8231BC48:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8231BC58:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8231bc48
	if (!cr6.eq) goto loc_8231BC48;
loc_8231BC64:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8231bbe0
	if (!cr6.eq) goto loc_8231BBE0;
loc_8231BC74:
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231BC98:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r10,14852(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 14852);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r9,14848(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r29,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, r29.u8);
	// lwz r11,14848(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// b 0x8231bcc4
	goto loc_8231BCC4;
loc_8231BCBC:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r4,14848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 14848);
loc_8231BCC4:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4260
	r11.s64 = r11.s64 + -4260;
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8231bd24
	if (!cr0.eq) goto loc_8231BD24;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8231bd24
	if (cr0.eq) goto loc_8231BD24;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8231bec4
	if (!cr0.gt) goto loc_8231BEC4;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8231BD00:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8231bd00
	if (cr6.lt) goto loc_8231BD00;
	// b 0x8231bec4
	goto loc_8231BEC4;
loc_8231BD24:
	// li r11,5
	r11.s64 = 5;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231BD50:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r29,r11,-4260
	r29.s64 = r11.s64 + -4260;
	// lwz r28,12(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r30,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r30.u32);
	// bl 0x8231c1a8
	sub_8231C1A8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r28,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r28.u32);
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(r30.s32, 7, xer);
	// bne cr6,0x8231bd7c
	if (!cr6.eq) goto loc_8231BD7C;
	// li r5,16
	ctx.r5.s64 = 16;
	// b 0x8231bd8c
	goto loc_8231BD8C;
loc_8231BD7C:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(r30.s32, 11, xer);
	// li r5,17
	ctx.r5.s64 = 17;
	// beq cr6,0x8231bd8c
	if (cr6.eq) goto loc_8231BD8C;
	// li r5,19
	ctx.r5.s64 = 19;
loc_8231BD8C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,252(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b91c
	if (cr0.eq) goto loc_8231B91C;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// b 0x8231b918
	goto loc_8231B918;
loc_8231BDB0:
	// addi r11,r30,-19
	r11.s64 = r30.s64 + -19;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// bl 0x8232f458
	sub_8232F458(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x8231bdf0
	if (!cr6.eq) goto loc_8231BDF0;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r10,14852(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 14852);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r9,14848(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r29,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, r29.u8);
	// lwz r11,14848(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14848);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// b 0x8231bdf8
	goto loc_8231BDF8;
loc_8231BDF0:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r4,14848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 14848);
loc_8231BDF8:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-4260
	r11.s64 = r11.s64 + -4260;
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// beq 0x8231be60
	if (cr0.eq) goto loc_8231BE60;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231be48
	if (cr0.eq) goto loc_8231BE48;
	// li r11,7
	r11.s64 = 7;
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x8231be90
	goto loc_8231BE90;
loc_8231BE48:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// b 0x8231bea8
	goto loc_8231BEA8;
loc_8231BE60:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231be98
	if (cr0.eq) goto loc_8231BE98;
	// li r11,35
	r11.s64 = 35;
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x8231b1f8
	sub_8231B1F8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231bec4
	if (cr0.eq) goto loc_8231BEC4;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
loc_8231BE90:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8231bec4
	goto loc_8231BEC4;
loc_8231BE98:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8231BEA8:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x8231a628
	sub_8231A628(ctx, base);
loc_8231BEC4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8231BEC8:
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8231BED0"))) PPC_WEAK_FUNC(sub_8231BED0);
PPC_FUNC_IMPL(__imp__sub_8231BED0) {
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

__attribute__((alias("__imp__sub_8231BEF8"))) PPC_WEAK_FUNC(sub_8231BEF8);
PPC_FUNC_IMPL(__imp__sub_8231BEF8) {
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

__attribute__((alias("__imp__sub_8231BF20"))) PPC_WEAK_FUNC(sub_8231BF20);
PPC_FUNC_IMPL(__imp__sub_8231BF20) {
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

__attribute__((alias("__imp__sub_8231BF48"))) PPC_WEAK_FUNC(sub_8231BF48);
PPC_FUNC_IMPL(__imp__sub_8231BF48) {
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

__attribute__((alias("__imp__sub_8231BF70"))) PPC_WEAK_FUNC(sub_8231BF70);
PPC_FUNC_IMPL(__imp__sub_8231BF70) {
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

__attribute__((alias("__imp__sub_8231BF98"))) PPC_WEAK_FUNC(sub_8231BF98);
PPC_FUNC_IMPL(__imp__sub_8231BF98) {
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
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
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

__attribute__((alias("__imp__sub_8231BFC0"))) PPC_WEAK_FUNC(sub_8231BFC0);
PPC_FUNC_IMPL(__imp__sub_8231BFC0) {
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

__attribute__((alias("__imp__sub_8231BFE8"))) PPC_WEAK_FUNC(sub_8231BFE8);
PPC_FUNC_IMPL(__imp__sub_8231BFE8) {
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

__attribute__((alias("__imp__sub_8231C010"))) PPC_WEAK_FUNC(sub_8231C010);
PPC_FUNC_IMPL(__imp__sub_8231C010) {
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

__attribute__((alias("__imp__sub_8231C038"))) PPC_WEAK_FUNC(sub_8231C038);
PPC_FUNC_IMPL(__imp__sub_8231C038) {
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

__attribute__((alias("__imp__sub_8231C060"))) PPC_WEAK_FUNC(sub_8231C060);
PPC_FUNC_IMPL(__imp__sub_8231C060) {
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

__attribute__((alias("__imp__sub_8231C088"))) PPC_WEAK_FUNC(sub_8231C088);
PPC_FUNC_IMPL(__imp__sub_8231C088) {
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

__attribute__((alias("__imp__sub_8231C0B0"))) PPC_WEAK_FUNC(sub_8231C0B0);
PPC_FUNC_IMPL(__imp__sub_8231C0B0) {
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

__attribute__((alias("__imp__sub_8231C0D8"))) PPC_WEAK_FUNC(sub_8231C0D8);
PPC_FUNC_IMPL(__imp__sub_8231C0D8) {
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
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
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

__attribute__((alias("__imp__sub_8231C100"))) PPC_WEAK_FUNC(sub_8231C100);
PPC_FUNC_IMPL(__imp__sub_8231C100) {
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

__attribute__((alias("__imp__sub_8231C128"))) PPC_WEAK_FUNC(sub_8231C128);
PPC_FUNC_IMPL(__imp__sub_8231C128) {
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
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
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

__attribute__((alias("__imp__sub_8231C150"))) PPC_WEAK_FUNC(sub_8231C150);
PPC_FUNC_IMPL(__imp__sub_8231C150) {
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

__attribute__((alias("__imp__sub_8231C178"))) PPC_WEAK_FUNC(sub_8231C178);
PPC_FUNC_IMPL(__imp__sub_8231C178) {
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

__attribute__((alias("__imp__sub_8231C1A0"))) PPC_WEAK_FUNC(sub_8231C1A0);
PPC_FUNC_IMPL(__imp__sub_8231C1A0) {
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
	// lwz r16,14368(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14368);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r30,r11,-4260
	r30.s64 = r11.s64 + -4260;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231c1f4
	if (cr0.eq) goto loc_8231C1F4;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// b 0x8231c1f8
	goto loc_8231C1F8;
loc_8231C1F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231C1F8:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// lwz r5,-4240(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -4240);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,-4224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -4224);
	// bl 0x82319c40
	sub_82319C40(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_8231C218:
	// bl 0x8231b5d0
	sub_8231B5D0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231c218
	if (!cr0.eq) goto loc_8231C218;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8231C1A8"))) PPC_WEAK_FUNC(sub_8231C1A8);
PPC_FUNC_IMPL(__imp__sub_8231C1A8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,18432
	ctx.r5.s64 = r11.s64 + 18432;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r30,r11,-4260
	r30.s64 = r11.s64 + -4260;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231c1f4
	if (cr0.eq) goto loc_8231C1F4;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// b 0x8231c1f8
	goto loc_8231C1F8;
loc_8231C1F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231C1F8:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// lwz r5,-4240(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -4240);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,-4224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -4224);
	// bl 0x82319c40
	sub_82319C40(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_8231C218:
	// bl 0x8231b5d0
	sub_8231B5D0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231c218
	if (!cr0.eq) goto loc_8231C218;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8231a1e0
	sub_8231A1E0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8231C244"))) PPC_WEAK_FUNC(sub_8231C244);
PPC_FUNC_IMPL(__imp__sub_8231C244) {
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
	// bl 0x821206f0
	sub_821206F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231C26C"))) PPC_WEAK_FUNC(sub_8231C26C);
PPC_FUNC_IMPL(__imp__sub_8231C26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231C270"))) PPC_WEAK_FUNC(sub_8231C270);
PPC_FUNC_IMPL(__imp__sub_8231C270) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r11,-4248
	r30.s64 = r11.s64 + -4248;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r3,-4(r30)
	PPC_STORE_U32(r30.u32 + -4, ctx.r3.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r31,r11,-4232
	r31.s64 = r11.s64 + -4232;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,-4224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4224, r11.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r11,1
	r11.s64 = 1;
	// stw r11,-4240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4240, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r9,r11,r31
	ctx.r9.s64 = r31.s64 - r11.s64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// cntlzw r10,r9
	ctx.r10.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// b 0x8231c2f0
	goto loc_8231C2F0;
loc_8231C2E4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r10,r11,r31
	ctx.r10.s64 = r31.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
loc_8231C2F0:
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8231c2e4
	if (!cr0.eq) goto loc_8231C2E4;
	// bl 0x8231c1a8
	sub_8231C1A8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8231c310
	goto loc_8231C310;
loc_8231C30C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8231C310:
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
	// bne 0x8231c30c
	if (!cr0.eq) goto loc_8231C30C;
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

__attribute__((alias("__imp__sub_8231C340"))) PPC_WEAK_FUNC(sub_8231C340);
PPC_FUNC_IMPL(__imp__sub_8231C340) {
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
	// lwz r16,14440(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14440);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231c434
	if (cr0.eq) goto loc_8231C434;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231c434
	if (cr0.eq) goto loc_8231C434;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x8235b0a0
	sub_8235B0A0(ctx, base);
	// lbz r11,40(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231c3e4
	if (cr0.eq) goto loc_8231C3E4;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r29,20(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x823596e8
	sub_823596E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82319e60
	sub_82319E60(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8231b0c0
	sub_8231B0C0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82359168
	sub_82359168(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// b 0x8231c3f0
	goto loc_8231C3F0;
loc_8231C3E4:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8231c270
	sub_8231C270(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
loc_8231C3F0:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231c408
	if (cr0.eq) goto loc_8231C408;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// stw r29,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r29.u32);
loc_8231C408:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231c428
	if (cr0.eq) goto loc_8231C428;
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
loc_8231C428:
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82359150
	sub_82359150(ctx, base);
loc_8231C434:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8231C348"))) PPC_WEAK_FUNC(sub_8231C348);
PPC_FUNC_IMPL(__imp__sub_8231C348) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231c434
	if (cr0.eq) goto loc_8231C434;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231c434
	if (cr0.eq) goto loc_8231C434;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x8235b0a0
	sub_8235B0A0(ctx, base);
	// lbz r11,40(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231c3e4
	if (cr0.eq) goto loc_8231C3E4;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r29,20(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x823596e8
	sub_823596E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82319e60
	sub_82319E60(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8231b0c0
	sub_8231B0C0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82359168
	sub_82359168(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// b 0x8231c3f0
	goto loc_8231C3F0;
loc_8231C3E4:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8231c270
	sub_8231C270(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
loc_8231C3F0:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231c408
	if (cr0.eq) goto loc_8231C408;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// stw r29,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r29.u32);
loc_8231C408:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231c428
	if (cr0.eq) goto loc_8231C428;
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
loc_8231C428:
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82359150
	sub_82359150(ctx, base);
loc_8231C434:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8231C43C"))) PPC_WEAK_FUNC(sub_8231C43C);
PPC_FUNC_IMPL(__imp__sub_8231C43C) {
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
	// bl 0x821f03f8
	sub_821F03F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231C464"))) PPC_WEAK_FUNC(sub_8231C464);
PPC_FUNC_IMPL(__imp__sub_8231C464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231C468"))) PPC_WEAK_FUNC(sub_8231C468);
PPC_FUNC_IMPL(__imp__sub_8231C468) {
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
	// lwz r16,14512(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14512);
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8231C494:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8231c494
	if (!cr6.eq) goto loc_8231C494;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x8235b0a0
	sub_8235B0A0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8231c270
	sub_8231C270(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82359150
	sub_82359150(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_8231C470"))) PPC_WEAK_FUNC(sub_8231C470);
PPC_FUNC_IMPL(__imp__sub_8231C470) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8231C494:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8231c494
	if (!cr6.eq) goto loc_8231C494;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x8235b0a0
	sub_8235B0A0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8231c270
	sub_8231C270(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82359150
	sub_82359150(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_8231C4EC"))) PPC_WEAK_FUNC(sub_8231C4EC);
PPC_FUNC_IMPL(__imp__sub_8231C4EC) {
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
	// bl 0x821f03f8
	sub_821F03F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231C514"))) PPC_WEAK_FUNC(sub_8231C514);
PPC_FUNC_IMPL(__imp__sub_8231C514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231C518"))) PPC_WEAK_FUNC(sub_8231C518);
PPC_FUNC_IMPL(__imp__sub_8231C518) {
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
	// lwz r16,14576(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14576);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-432
	r31.s64 = ctx.r1.s64 + -432;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,144
	ctx.r10.s64 = r31.s64 + 144;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
loc_8231C53C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x8231c53c
	if (!cr0.eq) goto loc_8231C53C;
	// bl 0x82270ce8
	sub_82270CE8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231c578
	if (!cr0.eq) goto loc_8231C578;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-4236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4236);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8231c578
	if (!cr6.eq) goto loc_8231C578;
	// li r30,0
	r30.s64 = 0;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// b 0x8231c5ac
	goto loc_8231C5AC;
loc_8231C578:
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82275ef0
	sub_82275EF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82275d68
	sub_82275D68(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,13664
	r11.s64 = r11.s64 + 13664;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8218e4c0
	sub_8218E4C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8231C5AC:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82357a10
	sub_82357A10(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82357d40
	sub_82357D40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231c5e4
	if (cr0.eq) goto loc_8231C5E4;
	// li r30,0
	r30.s64 = 0;
loc_8231C5D0:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82357b08
	sub_82357B08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,432
	ctx.r1.s64 = r31.s64 + 432;
	// b 0x8239bd4c
	return;
loc_8231C5E4:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231c624
	if (cr0.eq) goto loc_8231C624;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823596e8
	sub_823596E8(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82319e60
	sub_82319E60(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8231b0c0
	sub_8231B0C0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82359168
	sub_82359168(ctx, base);
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8231c5d0
	goto loc_8231C5D0;
loc_8231C624:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8231c270
	sub_8231C270(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8231c5d0
	goto loc_8231C5D0;
}

__attribute__((alias("__imp__sub_8231C520"))) PPC_WEAK_FUNC(sub_8231C520);
PPC_FUNC_IMPL(__imp__sub_8231C520) {
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
	// addi r31,r1,-432
	r31.s64 = ctx.r1.s64 + -432;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,144
	ctx.r10.s64 = r31.s64 + 144;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
loc_8231C53C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x8231c53c
	if (!cr0.eq) goto loc_8231C53C;
	// bl 0x82270ce8
	sub_82270CE8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231c578
	if (!cr0.eq) goto loc_8231C578;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-4236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4236);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8231c578
	if (!cr6.eq) goto loc_8231C578;
	// li r30,0
	r30.s64 = 0;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// b 0x8231c5ac
	goto loc_8231C5AC;
loc_8231C578:
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82275ef0
	sub_82275EF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82275d68
	sub_82275D68(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,13664
	r11.s64 = r11.s64 + 13664;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8218e4c0
	sub_8218E4C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8231C5AC:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82357a10
	sub_82357A10(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82357d40
	sub_82357D40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231c5e4
	if (cr0.eq) goto loc_8231C5E4;
	// li r30,0
	r30.s64 = 0;
loc_8231C5D0:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82357b08
	sub_82357B08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,432
	ctx.r1.s64 = r31.s64 + 432;
	// b 0x8239bd4c
	return;
loc_8231C5E4:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231c624
	if (cr0.eq) goto loc_8231C624;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823596e8
	sub_823596E8(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82319e60
	sub_82319E60(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8231b0c0
	sub_8231B0C0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82359168
	sub_82359168(ctx, base);
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8231c5d0
	goto loc_8231C5D0;
loc_8231C624:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8231c270
	sub_8231C270(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8231c5d0
	goto loc_8231C5D0;
}

__attribute__((alias("__imp__sub_8231C634"))) PPC_WEAK_FUNC(sub_8231C634);
PPC_FUNC_IMPL(__imp__sub_8231C634) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-432
	r31.s64 = r12.s64 + -432;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82357b08
	sub_82357B08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231C65C"))) PPC_WEAK_FUNC(sub_8231C65C);
PPC_FUNC_IMPL(__imp__sub_8231C65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231C660"))) PPC_WEAK_FUNC(sub_8231C660);
PPC_FUNC_IMPL(__imp__sub_8231C660) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,14656
	ctx.r4.s64 = r11.s64 + 14656;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8231c720
	if (cr0.eq) goto loc_8231C720;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8231c720
	if (!cr6.gt) goto loc_8231C720;
	// li r29,8
	r29.s64 = 8;
loc_8231C6D4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r30,r3
	r11.s64 = ctx.r3.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231c72c
	if (!cr0.eq) goto loc_8231C72C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8231c660
	sub_8231C660(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231c72c
	if (!cr0.eq) goto loc_8231C72C;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8231c6d4
	if (cr6.lt) goto loc_8231C6D4;
loc_8231C720:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231C724:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
loc_8231C72C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8231c724
	goto loc_8231C724;
}

__attribute__((alias("__imp__sub_8231C734"))) PPC_WEAK_FUNC(sub_8231C734);
PPC_FUNC_IMPL(__imp__sub_8231C734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

