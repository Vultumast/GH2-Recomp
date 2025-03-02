#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822DEF30"))) PPC_WEAK_FUNC(sub_822DEF30);
PPC_FUNC_IMPL(__imp__sub_822DEF30) {
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

__attribute__((alias("__imp__sub_822DEFD0"))) PPC_WEAK_FUNC(sub_822DEFD0);
PPC_FUNC_IMPL(__imp__sub_822DEFD0) {
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

__attribute__((alias("__imp__sub_822DEFF8"))) PPC_WEAK_FUNC(sub_822DEFF8);
PPC_FUNC_IMPL(__imp__sub_822DEFF8) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822df02c
	if (cr0.eq) goto loc_822DF02C;
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
loc_822DF02C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
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

__attribute__((alias("__imp__sub_822DF048"))) PPC_WEAK_FUNC(sub_822DF048);
PPC_FUNC_IMPL(__imp__sub_822DF048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822df0d0
	if (cr6.eq) goto loc_822DF0D0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822df0d0
	if (!cr0.eq) goto loc_822DF0D0;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822df0d0
	if (!cr0.eq) goto loc_822DF0D0;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df0d0
	if (cr0.eq) goto loc_822DF0D0;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822DF0D0:
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

__attribute__((alias("__imp__sub_822DF0E4"))) PPC_WEAK_FUNC(sub_822DF0E4);
PPC_FUNC_IMPL(__imp__sub_822DF0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DF0E8"))) PPC_WEAK_FUNC(sub_822DF0E8);
PPC_FUNC_IMPL(__imp__sub_822DF0E8) {
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
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822df11c
	if (cr0.eq) goto loc_822DF11C;
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
loc_822DF11C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
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

__attribute__((alias("__imp__sub_822DF138"))) PPC_WEAK_FUNC(sub_822DF138);
PPC_FUNC_IMPL(__imp__sub_822DF138) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-28304(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28304);
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-7820(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7820);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7824
	r30.s64 = ctx.r9.s64 + -7824;
	// bne 0x822df188
	if (!cr0.eq) goto loc_822DF188;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7820(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7820, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,8368
	ctx.r4.s64 = r11.s64 + 8368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822DF188:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,-9608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df1b4
	if (cr0.eq) goto loc_822DF1B4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822df1c0
	goto loc_822DF1C0;
loc_822DF1B4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9836);
	// bl 0x822b0f08
	sub_822B0F08(ctx, base);
loc_822DF1C0:
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

__attribute__((alias("__imp__sub_822DF140"))) PPC_WEAK_FUNC(sub_822DF140);
PPC_FUNC_IMPL(__imp__sub_822DF140) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-7820(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7820);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7824
	r30.s64 = ctx.r9.s64 + -7824;
	// bne 0x822df188
	if (!cr0.eq) goto loc_822DF188;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7820(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7820, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,8368
	ctx.r4.s64 = r11.s64 + 8368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822DF188:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,-9608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df1b4
	if (cr0.eq) goto loc_822DF1B4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822df1c0
	goto loc_822DF1C0;
loc_822DF1B4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9836);
	// bl 0x822b0f08
	sub_822B0F08(ctx, base);
loc_822DF1C0:
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

__attribute__((alias("__imp__sub_822DF1D8"))) PPC_WEAK_FUNC(sub_822DF1D8);
PPC_FUNC_IMPL(__imp__sub_822DF1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7820
	r11.s64 = r11.s64 + -7820;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7820
	ctx.r10.s64 = ctx.r10.s64 + -7820;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DF200"))) PPC_WEAK_FUNC(sub_822DF200);
PPC_FUNC_IMPL(__imp__sub_822DF200) {
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
	// lwz r16,-28240(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28240);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-2192
	r31.s64 = ctx.r1.s64 + -2192;
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r30,2220(r31)
	PPC_STORE_U32(r31.u32 + 2220, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82357718
	sub_82357718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82357618
	sub_82357618(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,2192
	ctx.r1.s64 = r31.s64 + 2192;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822DF208"))) PPC_WEAK_FUNC(sub_822DF208);
PPC_FUNC_IMPL(__imp__sub_822DF208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-2192
	r31.s64 = ctx.r1.s64 + -2192;
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r30,2220(r31)
	PPC_STORE_U32(r31.u32 + 2220, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82357718
	sub_82357718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82357618
	sub_82357618(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,2192
	ctx.r1.s64 = r31.s64 + 2192;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822DF264"))) PPC_WEAK_FUNC(sub_822DF264);
PPC_FUNC_IMPL(__imp__sub_822DF264) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-2192
	r31.s64 = r12.s64 + -2192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,2220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2220);
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

__attribute__((alias("__imp__sub_822DF28C"))) PPC_WEAK_FUNC(sub_822DF28C);
PPC_FUNC_IMPL(__imp__sub_822DF28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DF290"))) PPC_WEAK_FUNC(sub_822DF290);
PPC_FUNC_IMPL(__imp__sub_822DF290) {
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
	// beq 0x822df2d0
	if (cr0.eq) goto loc_822DF2D0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,24800
	ctx.r3.s64 = r11.s64 + 24800;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822df2d8
	goto loc_822DF2D8;
loc_822DF2D0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_822DF2D8:
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

__attribute__((alias("__imp__sub_822DF2F4"))) PPC_WEAK_FUNC(sub_822DF2F4);
PPC_FUNC_IMPL(__imp__sub_822DF2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DF2F8"))) PPC_WEAK_FUNC(sub_822DF2F8);
PPC_FUNC_IMPL(__imp__sub_822DF2F8) {
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
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822df33c
	if (cr6.eq) goto loc_822DF33C;
	// bl 0x822df140
	sub_822DF140(ctx, base);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fadds f1,f0,f12
	ctx.f1.f64 = double(float(f0.f64 + ctx.f12.f64));
	// bl 0x822f5478
	sub_822F5478(ctx, base);
loc_822DF33C:
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

__attribute__((alias("__imp__sub_822DF350"))) PPC_WEAK_FUNC(sub_822DF350);
PPC_FUNC_IMPL(__imp__sub_822DF350) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,57(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 57);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822df3b8
	if (cr0.eq) goto loc_822DF3B8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x822df3b8
	if (cr6.eq) goto loc_822DF3B8;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822df394
	if (cr0.eq) goto loc_822DF394;
	// bl 0x822ecb08
	sub_822ECB08(ctx, base);
loc_822DF394:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// bl 0x822df140
	sub_822DF140(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// bl 0x822ed7f0
	sub_822ED7F0(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r30.u32);
loc_822DF3B8:
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

__attribute__((alias("__imp__sub_822DF3D4"))) PPC_WEAK_FUNC(sub_822DF3D4);
PPC_FUNC_IMPL(__imp__sub_822DF3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DF3D8"))) PPC_WEAK_FUNC(sub_822DF3D8);
PPC_FUNC_IMPL(__imp__sub_822DF3D8) {
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
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,104(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x822df350
	sub_822DF350(ctx, base);
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

__attribute__((alias("__imp__sub_822DF428"))) PPC_WEAK_FUNC(sub_822DF428);
PPC_FUNC_IMPL(__imp__sub_822DF428) {
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
	// addi r31,r11,17316
	r31.s64 = r11.s64 + 17316;
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

__attribute__((alias("__imp__sub_822DF480"))) PPC_WEAK_FUNC(sub_822DF480);
PPC_FUNC_IMPL(__imp__sub_822DF480) {
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
	// lbz r11,56(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822df4d8
	if (cr0.eq) goto loc_822DF4D8;
	// li r31,0
	r31.s64 = 0;
loc_822DF4A8:
	// lwz r11,156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 156);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df4f4
	if (cr0.eq) goto loc_822DF4F4;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmpwi cr6,r31,80
	cr6.compare<int32_t>(r31.s32, 80, xer);
	// blt cr6,0x822df4a8
	if (cr6.lt) goto loc_822DF4A8;
loc_822DF4D8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822DF4DC:
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
loc_822DF4F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822df4dc
	goto loc_822DF4DC;
}

__attribute__((alias("__imp__sub_822DF4FC"))) PPC_WEAK_FUNC(sub_822DF4FC);
PPC_FUNC_IMPL(__imp__sub_822DF4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DF500"))) PPC_WEAK_FUNC(sub_822DF500);
PPC_FUNC_IMPL(__imp__sub_822DF500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822df570
	if (cr6.eq) goto loc_822DF570;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq 0x822df540
	if (cr0.eq) goto loc_822DF540;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822df570
	goto loc_822DF570;
loc_822DF540:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df570
	if (cr0.eq) goto loc_822DF570;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822df2f8
	sub_822DF2F8(ctx, base);
loc_822DF570:
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

__attribute__((alias("__imp__sub_822DF584"))) PPC_WEAK_FUNC(sub_822DF584);
PPC_FUNC_IMPL(__imp__sub_822DF584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DF588"))) PPC_WEAK_FUNC(sub_822DF588);
PPC_FUNC_IMPL(__imp__sub_822DF588) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-28088(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28088);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// lbz r11,58(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 58);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822df72c
	if (cr0.eq) goto loc_822DF72C;
	// lbz r11,56(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822df72c
	if (cr0.eq) goto loc_822DF72C;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x822df5dc
	if (cr6.lt) goto loc_822DF5DC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_822DF5DC:
	// addi r11,r29,14
	r11.s64 = r29.s64 + 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x822df350
	sub_822DF350(ctx, base);
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// beq 0x822df688
	if (cr0.eq) goto loc_822DF688;
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// stw r27,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r27.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,-28176
	ctx.r4.s64 = r11.s64 + -28176;
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// li r11,7
	r11.s64 = 7;
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x822def30
	sub_822DEF30(ctx, base);
	// li r27,15
	r27.s64 = 15;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// bl 0x82312240
	sub_82312240(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x822df68c
	goto loc_822DF68C;
loc_822DF688:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_822DF68C:
	// rlwinm. r11,r27,0,28,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df6b0
	if (cr0.eq) goto loc_822DF6B0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm r27,r27,0,29,27
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r11,r11,18448
	r11.s64 = r11.s64 + 18448;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DF6B0:
	// rlwinm. r11,r27,0,29,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df6d4
	if (cr0.eq) goto loc_822DF6D4;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm r27,r27,0,30,28
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df6d4
	if (cr0.eq) goto loc_822DF6D4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DF6D4:
	// rlwinm. r11,r27,0,30,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df6f8
	if (cr0.eq) goto loc_822DF6F8;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm r27,r27,0,31,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df6f8
	if (cr0.eq) goto loc_822DF6F8;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DF6F8:
	// clrlwi. r11,r27,31
	r11.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df714
	if (cr0.eq) goto loc_822DF714;
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df714
	if (cr0.eq) goto loc_822DF714;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DF714:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lfs f1,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82314420
	sub_82314420(ctx, base);
loc_822DF72C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822DF590"))) PPC_WEAK_FUNC(sub_822DF590);
PPC_FUNC_IMPL(__imp__sub_822DF590) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// lbz r11,58(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 58);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822df72c
	if (cr0.eq) goto loc_822DF72C;
	// lbz r11,56(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822df72c
	if (cr0.eq) goto loc_822DF72C;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x822df5dc
	if (cr6.lt) goto loc_822DF5DC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_822DF5DC:
	// addi r11,r29,14
	r11.s64 = r29.s64 + 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x822df350
	sub_822DF350(ctx, base);
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// beq 0x822df688
	if (cr0.eq) goto loc_822DF688;
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// stw r27,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r27.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,-28176
	ctx.r4.s64 = r11.s64 + -28176;
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// li r11,7
	r11.s64 = 7;
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x822def30
	sub_822DEF30(ctx, base);
	// li r27,15
	r27.s64 = 15;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// bl 0x82312240
	sub_82312240(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x822df68c
	goto loc_822DF68C;
loc_822DF688:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_822DF68C:
	// rlwinm. r11,r27,0,28,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df6b0
	if (cr0.eq) goto loc_822DF6B0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm r27,r27,0,29,27
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r11,r11,18448
	r11.s64 = r11.s64 + 18448;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DF6B0:
	// rlwinm. r11,r27,0,29,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df6d4
	if (cr0.eq) goto loc_822DF6D4;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm r27,r27,0,30,28
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df6d4
	if (cr0.eq) goto loc_822DF6D4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DF6D4:
	// rlwinm. r11,r27,0,30,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df6f8
	if (cr0.eq) goto loc_822DF6F8;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm r27,r27,0,31,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df6f8
	if (cr0.eq) goto loc_822DF6F8;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DF6F8:
	// clrlwi. r11,r27,31
	r11.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df714
	if (cr0.eq) goto loc_822DF714;
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df714
	if (cr0.eq) goto loc_822DF714;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822DF714:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lfs f1,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82314420
	sub_82314420(ctx, base);
loc_822DF72C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822DF734"))) PPC_WEAK_FUNC(sub_822DF734);
PPC_FUNC_IMPL(__imp__sub_822DF734) {
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

__attribute__((alias("__imp__sub_822DF75C"))) PPC_WEAK_FUNC(sub_822DF75C);
PPC_FUNC_IMPL(__imp__sub_822DF75C) {
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
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df78c
	if (cr0.eq) goto loc_822DF78C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82120868
	sub_82120868(ctx, base);
loc_822DF78C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DF79C"))) PPC_WEAK_FUNC(sub_822DF79C);
PPC_FUNC_IMPL(__imp__sub_822DF79C) {
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
	// beq 0x822df7cc
	if (cr0.eq) goto loc_822DF7CC;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82120868
	sub_82120868(ctx, base);
loc_822DF7CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DF7DC"))) PPC_WEAK_FUNC(sub_822DF7DC);
PPC_FUNC_IMPL(__imp__sub_822DF7DC) {
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
	// beq 0x822df80c
	if (cr0.eq) goto loc_822DF80C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120868
	sub_82120868(ctx, base);
loc_822DF80C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DF81C"))) PPC_WEAK_FUNC(sub_822DF81C);
PPC_FUNC_IMPL(__imp__sub_822DF81C) {
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
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822df84c
	if (cr0.eq) goto loc_822DF84C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82133220
	sub_82133220(ctx, base);
loc_822DF84C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822DF85C"))) PPC_WEAK_FUNC(sub_822DF85C);
PPC_FUNC_IMPL(__imp__sub_822DF85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DF860"))) PPC_WEAK_FUNC(sub_822DF860);
PPC_FUNC_IMPL(__imp__sub_822DF860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822df9c4
	if (cr0.eq) goto loc_822DF9C4;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822df8b4
	if (cr0.eq) goto loc_822DF8B4;
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
loc_822DF8B4:
	// li r11,0
	r11.s64 = 0;
	// stfs f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23444
	ctx.r3.s64 = r11.s64 + 23444;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822df208
	sub_822DF208(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// beq cr6,0x822df930
	if (cr6.eq) goto loc_822DF930;
	// lwz r3,-7564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7564);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm r9,r30,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,2480
	r11.s64 = r11.s64 + 2480;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r10,152(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 152);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822df95c
	goto loc_822DF95C;
loc_822DF930:
	// lwz r10,-7564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -7564);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2480
	r11.s64 = r11.s64 + 2480;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,148(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822DF95C:
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// fneg f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = f30.u64 ^ 0x8000000000000000;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822df2f8
	sub_822DF2F8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// lfs f1,-9640(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9640);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822DF9C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822DF9D4"))) PPC_WEAK_FUNC(sub_822DF9D4);
PPC_FUNC_IMPL(__imp__sub_822DF9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DF9D8"))) PPC_WEAK_FUNC(sub_822DF9D8);
PPC_FUNC_IMPL(__imp__sub_822DF9D8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32127
	r27.s64 = -2105475072;
	// lis r26,-32140
	r26.s64 = -2106327040;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,-8684(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -8684);
	// lwz r5,18972(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 18972);
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x823257c0
	sub_823257C0(ctx, base);
	// stb r31,56(r29)
	PPC_STORE_U8(r29.u32 + 56, r31.u8);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822dfaa0
	if (cr0.eq) goto loc_822DFAA0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r11,r11,24848
	r11.s64 = r11.s64 + 24848;
	// addi r10,r10,2908
	ctx.r10.s64 = ctx.r10.s64 + 2908;
	// addi r9,r9,23752
	ctx.r9.s64 = ctx.r9.s64 + 23752;
	// addi r8,r8,23740
	ctx.r8.s64 = ctx.r8.s64 + 23740;
	// addi r7,r7,23256
	ctx.r7.s64 = ctx.r7.s64 + 23256;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r31,5
	r31.s64 = 5;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
loc_822DFA58:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,18972(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 18972);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,-8684(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -8684);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,56
	ctx.r3.s64 = ctx.r10.s64 + 56;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823262c8
	sub_823262C8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x822dfa58
	if (!cr0.eq) goto loc_822DFA58;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,64(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// bl 0x822df590
	sub_822DF590(ctx, base);
	// b 0x822dfaa8
	goto loc_822DFAA8;
loc_822DFAA0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822df0e8
	sub_822DF0E8(ctx, base);
loc_822DFAA8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822DFAB0"))) PPC_WEAK_FUNC(sub_822DFAB0);
PPC_FUNC_IMPL(__imp__sub_822DFAB0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822df0e8
	sub_822DF0E8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r11,58(r31)
	PPC_STORE_U8(r31.u32 + 58, r11.u8);
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// beq 0x822dfc04
	if (cr0.eq) goto loc_822DFC04;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-27896
	ctx.r4.s64 = r11.s64 + -27896;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-2968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x8228bad8
	sub_8228BAD8(ctx, base);
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-27908
	ctx.r4.s64 = r11.s64 + -27908;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822df428
	sub_822DF428(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-27920
	ctx.r4.s64 = r11.s64 + -27920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// bl 0x822df428
	sub_822DF428(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-27932
	ctx.r4.s64 = r11.s64 + -27932;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// bl 0x822df428
	sub_822DF428(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// addi r10,r10,32456
	ctx.r10.s64 = ctx.r10.s64 + 32456;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r11,r11,-27940
	r11.s64 = r11.s64 + -27940;
	// addi r9,r9,-27948
	ctx.r9.s64 = ctx.r9.s64 + -27948;
	// addi r8,r8,32464
	ctx.r8.s64 = ctx.r8.s64 + 32464;
	// addi r7,r7,-27956
	ctx.r7.s64 = ctx.r7.s64 + -27956;
	// addi r6,r6,-27964
	ctx.r6.s64 = ctx.r6.s64 + -27964;
	// addi r5,r5,-27972
	ctx.r5.s64 = ctx.r5.s64 + -27972;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// li r28,5
	r28.s64 = 5;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r24,r10,-27984
	r24.s64 = ctx.r10.s64 + -27984;
loc_822DFBB0:
	// lwz r25,0(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r27,2
	r27.s64 = 2;
loc_822DFBC0:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8218e4c0
	sub_8218E4C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822df428
	sub_822DF428(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x822dfbc0
	if (!cr0.eq) goto loc_822DFBC0;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x822dfbb0
	if (!cr0.eq) goto loc_822DFBB0;
loc_822DFC04:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822DFC0C"))) PPC_WEAK_FUNC(sub_822DFC0C);
PPC_FUNC_IMPL(__imp__sub_822DFC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822DFC10"))) PPC_WEAK_FUNC(sub_822DFC10);
PPC_FUNC_IMPL(__imp__sub_822DFC10) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r11,-27884
	ctx.r4.s64 = r11.s64 + -27884;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x822df860
	sub_822DF860(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822DFCA8"))) PPC_WEAK_FUNC(sub_822DFCA8);
PPC_FUNC_IMPL(__imp__sub_822DFCA8) {
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
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x822df350
	sub_822DF350(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// xori r31,r10,1
	r31.u64 = ctx.r10.u64 ^ 1;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822dfd1c
	if (cr0.eq) goto loc_822DFD1C;
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822dfd1c
	if (!cr0.eq) goto loc_822DFD1C;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// b 0x822dfd20
	goto loc_822DFD20;
loc_822DFD1C:
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 88);
loc_822DFD20:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dfc10
	sub_822DFC10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822DFD40"))) PPC_WEAK_FUNC(sub_822DFD40);
PPC_FUNC_IMPL(__imp__sub_822DFD40) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822dfc10
	sub_822DFC10(ctx, base);
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

__attribute__((alias("__imp__sub_822DFD90"))) PPC_WEAK_FUNC(sub_822DFD90);
PPC_FUNC_IMPL(__imp__sub_822DFD90) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-27720(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27720);
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
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7772
	r28.s64 = ctx.r10.s64 + -7772;
	// bne 0x822dfe04
	if (!cr0.eq) goto loc_822DFE04;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,24848
	ctx.r4.s64 = r11.s64 + 24848;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822DFE04:
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
	// beq 0x822dfe60
	if (cr0.eq) goto loc_822DFE60;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822dfca8
	sub_822DFCA8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822dfe5c
	if (cr6.eq) goto loc_822DFE5C;
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
	// beq 0x822e0328
	if (cr0.eq) goto loc_822E0328;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_822DFE54:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822e0328
	goto loc_822E0328;
loc_822DFE5C:
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822DFE60:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7776
	r28.s64 = ctx.r10.s64 + -7776;
	// bne 0x822dfe8c
	if (!cr0.eq) goto loc_822DFE8C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,2908
	ctx.r4.s64 = r11.s64 + 2908;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822DFE8C:
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
	// beq 0x822dfed0
	if (cr0.eq) goto loc_822DFED0;
	// li r11,1
	r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r11,58(r25)
	PPC_STORE_U8(r25.u32 + 58, r11.u8);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r10,64(r25)
	PPC_STORE_U32(r25.u32 + 64, ctx.r10.u32);
	// lwz r11,-8684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// lwz r4,824(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 824);
loc_822DFEC4:
	// bl 0x822df590
	sub_822DF590(ctx, base);
loc_822DFEC8:
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// b 0x822e0324
	goto loc_822E0324;
loc_822DFED0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7780
	r28.s64 = ctx.r10.s64 + -7780;
	// bne 0x822dfefc
	if (!cr0.eq) goto loc_822DFEFC;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-27856
	ctx.r4.s64 = r11.s64 + -27856;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822DFEFC:
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
	// beq 0x822dff58
	if (cr0.eq) goto loc_822DFF58;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lfs f31,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f31.f64 = double(temp.f32);
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// bl 0x822df860
	sub_822DF860(ctx, base);
	// b 0x822dfec8
	goto loc_822DFEC8;
loc_822DFF58:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7784
	r28.s64 = ctx.r10.s64 + -7784;
	// bne 0x822dff84
	if (!cr0.eq) goto loc_822DFF84;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,23256
	ctx.r4.s64 = r11.s64 + 23256;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822DFF84:
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
	// beq 0x822dffb8
	if (cr0.eq) goto loc_822DFFB8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x822dfec4
	goto loc_822DFEC4;
loc_822DFFB8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7788
	r28.s64 = ctx.r10.s64 + -7788;
	// bne 0x822dffe4
	if (!cr0.eq) goto loc_822DFFE4;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-27868
	ctx.r4.s64 = r11.s64 + -27868;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822DFFE4:
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
	// beq 0x822e0008
	if (cr0.eq) goto loc_822E0008;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822df0e8
	sub_822DF0E8(ctx, base);
	// b 0x822dfec8
	goto loc_822DFEC8;
loc_822E0008:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7792
	r28.s64 = ctx.r10.s64 + -7792;
	// bne 0x822e0034
	if (!cr0.eq) goto loc_822E0034;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15292
	ctx.r4.s64 = r11.s64 + -15292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822E0034:
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
	// beq 0x822e006c
	if (cr0.eq) goto loc_822E006C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stfs f1,44(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r25.u32 + 44, temp.u32);
	// bl 0x822df2f8
	sub_822DF2F8(ctx, base);
	// b 0x822dfec8
	goto loc_822DFEC8;
loc_822E006C:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7796
	r28.s64 = ctx.r10.s64 + -7796;
	// bne 0x822e0098
	if (!cr0.eq) goto loc_822E0098;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-27880
	ctx.r4.s64 = r11.s64 + -27880;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822E0098:
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
	// beq 0x822e00dc
	if (cr0.eq) goto loc_822E00DC;
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
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x822df9d8
	sub_822DF9D8(ctx, base);
	// b 0x822dfec8
	goto loc_822DFEC8;
loc_822E00DC:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7800
	r28.s64 = ctx.r10.s64 + -7800;
	// bne 0x822e0108
	if (!cr0.eq) goto loc_822E0108;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25292
	ctx.r4.s64 = r11.s64 + 25292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822E0108:
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
	// beq 0x822e014c
	if (cr0.eq) goto loc_822E014C;
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
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x822df500
	sub_822DF500(ctx, base);
	// b 0x822dfec8
	goto loc_822DFEC8;
loc_822E014C:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7804
	r28.s64 = ctx.r10.s64 + -7804;
	// bne 0x822e0178
	if (!cr0.eq) goto loc_822E0178;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,22520
	ctx.r4.s64 = r11.s64 + 22520;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822E0178:
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
	// beq 0x822e01a4
	if (cr0.eq) goto loc_822E01A4;
	// lbz r11,56(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 56);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x822e032c
	goto loc_822E032C;
loc_822E01A4:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7808
	r28.s64 = ctx.r10.s64 + -7808;
	// bne 0x822e01d0
	if (!cr0.eq) goto loc_822E01D0;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-28176
	ctx.r4.s64 = r11.s64 + -28176;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822E01D0:
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
	// beq 0x822e0208
	if (cr0.eq) goto loc_822E0208;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822dfd40
	sub_822DFD40(ctx, base);
	// b 0x822dfec8
	goto loc_822DFEC8;
loc_822E0208:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7812
	r28.s64 = ctx.r10.s64 + -7812;
	// bne 0x822e0234
	if (!cr0.eq) goto loc_822E0234;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,23752
	ctx.r4.s64 = r11.s64 + 23752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822E0234:
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
	// beq 0x822e028c
	if (cr0.eq) goto loc_822E028C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822df3d8
	sub_822DF3D8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822e0288
	if (cr6.eq) goto loc_822E0288;
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
	// beq 0x822e0328
	if (cr0.eq) goto loc_822E0328;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822dfe54
	goto loc_822DFE54;
loc_822E0288:
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822E028C:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7816
	r28.s64 = ctx.r10.s64 + -7816;
	// bne 0x822e02b4
	if (!cr0.eq) goto loc_822E02B4;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,23740
	ctx.r4.s64 = r11.s64 + 23740;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E02B4:
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
	// beq 0x822e02dc
	if (cr0.eq) goto loc_822E02DC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,108(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 108);
	// bl 0x822df350
	sub_822DF350(ctx, base);
	// b 0x822dfec8
	goto loc_822DFEC8;
loc_822E02DC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822e031c
	if (cr6.eq) goto loc_822E031C;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e0328
	if (cr0.eq) goto loc_822E0328;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x822dfe54
	goto loc_822DFE54;
loc_822E031C:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822E0324:
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
loc_822E0328:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822E032C:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822DFD98"))) PPC_WEAK_FUNC(sub_822DFD98);
PPC_FUNC_IMPL(__imp__sub_822DFD98) {
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
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7772
	r28.s64 = ctx.r10.s64 + -7772;
	// bne 0x822dfe04
	if (!cr0.eq) goto loc_822DFE04;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,24848
	ctx.r4.s64 = r11.s64 + 24848;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822DFE04:
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
	// beq 0x822dfe60
	if (cr0.eq) goto loc_822DFE60;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822dfca8
	sub_822DFCA8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822dfe5c
	if (cr6.eq) goto loc_822DFE5C;
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
	// beq 0x822e0328
	if (cr0.eq) goto loc_822E0328;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_822DFE54:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822e0328
	goto loc_822E0328;
loc_822DFE5C:
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822DFE60:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7776
	r28.s64 = ctx.r10.s64 + -7776;
	// bne 0x822dfe8c
	if (!cr0.eq) goto loc_822DFE8C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,2908
	ctx.r4.s64 = r11.s64 + 2908;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822DFE8C:
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
	// beq 0x822dfed0
	if (cr0.eq) goto loc_822DFED0;
	// li r11,1
	r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r11,58(r25)
	PPC_STORE_U8(r25.u32 + 58, r11.u8);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r10,64(r25)
	PPC_STORE_U32(r25.u32 + 64, ctx.r10.u32);
	// lwz r11,-8684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// lwz r4,824(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 824);
loc_822DFEC4:
	// bl 0x822df590
	sub_822DF590(ctx, base);
loc_822DFEC8:
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// b 0x822e0324
	goto loc_822E0324;
loc_822DFED0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7780
	r28.s64 = ctx.r10.s64 + -7780;
	// bne 0x822dfefc
	if (!cr0.eq) goto loc_822DFEFC;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-27856
	ctx.r4.s64 = r11.s64 + -27856;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822DFEFC:
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
	// beq 0x822dff58
	if (cr0.eq) goto loc_822DFF58;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lfs f31,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f31.f64 = double(temp.f32);
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// bl 0x822df860
	sub_822DF860(ctx, base);
	// b 0x822dfec8
	goto loc_822DFEC8;
loc_822DFF58:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7784
	r28.s64 = ctx.r10.s64 + -7784;
	// bne 0x822dff84
	if (!cr0.eq) goto loc_822DFF84;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,23256
	ctx.r4.s64 = r11.s64 + 23256;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822DFF84:
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
	// beq 0x822dffb8
	if (cr0.eq) goto loc_822DFFB8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x822dfec4
	goto loc_822DFEC4;
loc_822DFFB8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7788
	r28.s64 = ctx.r10.s64 + -7788;
	// bne 0x822dffe4
	if (!cr0.eq) goto loc_822DFFE4;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-27868
	ctx.r4.s64 = r11.s64 + -27868;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822DFFE4:
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
	// beq 0x822e0008
	if (cr0.eq) goto loc_822E0008;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822df0e8
	sub_822DF0E8(ctx, base);
	// b 0x822dfec8
	goto loc_822DFEC8;
loc_822E0008:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7792
	r28.s64 = ctx.r10.s64 + -7792;
	// bne 0x822e0034
	if (!cr0.eq) goto loc_822E0034;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15292
	ctx.r4.s64 = r11.s64 + -15292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822E0034:
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
	// beq 0x822e006c
	if (cr0.eq) goto loc_822E006C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stfs f1,44(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r25.u32 + 44, temp.u32);
	// bl 0x822df2f8
	sub_822DF2F8(ctx, base);
	// b 0x822dfec8
	goto loc_822DFEC8;
loc_822E006C:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7796
	r28.s64 = ctx.r10.s64 + -7796;
	// bne 0x822e0098
	if (!cr0.eq) goto loc_822E0098;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-27880
	ctx.r4.s64 = r11.s64 + -27880;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822E0098:
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
	// beq 0x822e00dc
	if (cr0.eq) goto loc_822E00DC;
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
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x822df9d8
	sub_822DF9D8(ctx, base);
	// b 0x822dfec8
	goto loc_822DFEC8;
loc_822E00DC:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7800
	r28.s64 = ctx.r10.s64 + -7800;
	// bne 0x822e0108
	if (!cr0.eq) goto loc_822E0108;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,25292
	ctx.r4.s64 = r11.s64 + 25292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822E0108:
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
	// beq 0x822e014c
	if (cr0.eq) goto loc_822E014C;
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
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x822df500
	sub_822DF500(ctx, base);
	// b 0x822dfec8
	goto loc_822DFEC8;
loc_822E014C:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7804
	r28.s64 = ctx.r10.s64 + -7804;
	// bne 0x822e0178
	if (!cr0.eq) goto loc_822E0178;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,22520
	ctx.r4.s64 = r11.s64 + 22520;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822E0178:
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
	// beq 0x822e01a4
	if (cr0.eq) goto loc_822E01A4;
	// lbz r11,56(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 56);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x822e032c
	goto loc_822E032C;
loc_822E01A4:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7808
	r28.s64 = ctx.r10.s64 + -7808;
	// bne 0x822e01d0
	if (!cr0.eq) goto loc_822E01D0;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-28176
	ctx.r4.s64 = r11.s64 + -28176;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822E01D0:
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
	// beq 0x822e0208
	if (cr0.eq) goto loc_822E0208;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822dfd40
	sub_822DFD40(ctx, base);
	// b 0x822dfec8
	goto loc_822DFEC8;
loc_822E0208:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7812
	r28.s64 = ctx.r10.s64 + -7812;
	// bne 0x822e0234
	if (!cr0.eq) goto loc_822E0234;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,23752
	ctx.r4.s64 = r11.s64 + 23752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822E0234:
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
	// beq 0x822e028c
	if (cr0.eq) goto loc_822E028C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822df3d8
	sub_822DF3D8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822e0288
	if (cr6.eq) goto loc_822E0288;
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
	// beq 0x822e0328
	if (cr0.eq) goto loc_822E0328;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822dfe54
	goto loc_822DFE54;
loc_822E0288:
	// lwz r11,-7768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7768);
loc_822E028C:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-7816
	r28.s64 = ctx.r10.s64 + -7816;
	// bne 0x822e02b4
	if (!cr0.eq) goto loc_822E02B4;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,-7768(r30)
	PPC_STORE_U32(r30.u32 + -7768, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,23740
	ctx.r4.s64 = r11.s64 + 23740;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E02B4:
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
	// beq 0x822e02dc
	if (cr0.eq) goto loc_822E02DC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,108(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 108);
	// bl 0x822df350
	sub_822DF350(ctx, base);
	// b 0x822dfec8
	goto loc_822DFEC8;
loc_822E02DC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822e031c
	if (cr6.eq) goto loc_822E031C;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e0328
	if (cr0.eq) goto loc_822E0328;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x822dfe54
	goto loc_822DFE54;
loc_822E031C:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822E0324:
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
loc_822E0328:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822E032C:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822E0338"))) PPC_WEAK_FUNC(sub_822E0338);
PPC_FUNC_IMPL(__imp__sub_822E0338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7768
	r11.s64 = r11.s64 + -7768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7768
	ctx.r10.s64 = ctx.r10.s64 + -7768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E0360"))) PPC_WEAK_FUNC(sub_822E0360);
PPC_FUNC_IMPL(__imp__sub_822E0360) {
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

__attribute__((alias("__imp__sub_822E0388"))) PPC_WEAK_FUNC(sub_822E0388);
PPC_FUNC_IMPL(__imp__sub_822E0388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7768
	r11.s64 = r11.s64 + -7768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7768
	ctx.r10.s64 = ctx.r10.s64 + -7768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E03B0"))) PPC_WEAK_FUNC(sub_822E03B0);
PPC_FUNC_IMPL(__imp__sub_822E03B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7768
	r11.s64 = r11.s64 + -7768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7768
	ctx.r10.s64 = ctx.r10.s64 + -7768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E03D8"))) PPC_WEAK_FUNC(sub_822E03D8);
PPC_FUNC_IMPL(__imp__sub_822E03D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7768
	r11.s64 = r11.s64 + -7768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7768
	ctx.r10.s64 = ctx.r10.s64 + -7768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E0400"))) PPC_WEAK_FUNC(sub_822E0400);
PPC_FUNC_IMPL(__imp__sub_822E0400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7768
	r11.s64 = r11.s64 + -7768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7768
	ctx.r10.s64 = ctx.r10.s64 + -7768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E0428"))) PPC_WEAK_FUNC(sub_822E0428);
PPC_FUNC_IMPL(__imp__sub_822E0428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7768
	r11.s64 = r11.s64 + -7768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7768
	ctx.r10.s64 = ctx.r10.s64 + -7768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E0450"))) PPC_WEAK_FUNC(sub_822E0450);
PPC_FUNC_IMPL(__imp__sub_822E0450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7768
	r11.s64 = r11.s64 + -7768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7768
	ctx.r10.s64 = ctx.r10.s64 + -7768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E0478"))) PPC_WEAK_FUNC(sub_822E0478);
PPC_FUNC_IMPL(__imp__sub_822E0478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7768
	r11.s64 = r11.s64 + -7768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7768
	ctx.r10.s64 = ctx.r10.s64 + -7768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E04A0"))) PPC_WEAK_FUNC(sub_822E04A0);
PPC_FUNC_IMPL(__imp__sub_822E04A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7768
	r11.s64 = r11.s64 + -7768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7768
	ctx.r10.s64 = ctx.r10.s64 + -7768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E04C8"))) PPC_WEAK_FUNC(sub_822E04C8);
PPC_FUNC_IMPL(__imp__sub_822E04C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7768
	r11.s64 = r11.s64 + -7768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7768
	ctx.r10.s64 = ctx.r10.s64 + -7768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E04F0"))) PPC_WEAK_FUNC(sub_822E04F0);
PPC_FUNC_IMPL(__imp__sub_822E04F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7768
	r11.s64 = r11.s64 + -7768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7768
	ctx.r10.s64 = ctx.r10.s64 + -7768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E0518"))) PPC_WEAK_FUNC(sub_822E0518);
PPC_FUNC_IMPL(__imp__sub_822E0518) {
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

__attribute__((alias("__imp__sub_822E0540"))) PPC_WEAK_FUNC(sub_822E0540);
PPC_FUNC_IMPL(__imp__sub_822E0540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7768
	r11.s64 = r11.s64 + -7768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7768
	ctx.r10.s64 = ctx.r10.s64 + -7768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E0568"))) PPC_WEAK_FUNC(sub_822E0568);
PPC_FUNC_IMPL(__imp__sub_822E0568) {
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

__attribute__((alias("__imp__sub_822E0590"))) PPC_WEAK_FUNC(sub_822E0590);
PPC_FUNC_IMPL(__imp__sub_822E0590) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x822e05c8
	if (cr6.lt) goto loc_822E05C8;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x822e05cc
	if (cr6.lt) goto loc_822E05CC;
loc_822E05C8:
	// li r11,0
	r11.s64 = 0;
loc_822E05CC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e0620
	if (cr0.eq) goto loc_822E0620;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r31,4(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r30,8(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r29,12(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r29.u32);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// bl 0x822e0590
	sub_822E0590(ctx, base);
	// b 0x822e0750
	goto loc_822E0750;
loc_822E0620:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r11,r29,r31
	r11.s64 = r31.s64 - r29.s64;
	// srawi r27,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r27.s64 = r11.s32 >> 4;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// ble cr6,0x822e06dc
	if (!cr6.gt) goto loc_822E06DC;
	// rlwinm r26,r10,4,0,27
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// subf r27,r26,r31
	r27.s64 = r31.s64 - r26.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821c9ab0
	sub_821C9AB0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// subf r11,r29,r27
	r11.s64 = r27.s64 - r29.s64;
	// srawi. r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x822e0698
	if (!cr0.gt) goto loc_822E0698;
loc_822E0668:
	// addi r27,r27,-16
	r27.s64 = r27.s64 + -16;
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// bgt 0x822e0668
	if (cr0.gt) goto loc_822E0668;
loc_822E0698:
	// add r9,r26,r29
	ctx.r9.u64 = r26.u64 + r29.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x822e0750
	if (cr6.eq) goto loc_822E0750;
loc_822E06A8:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// bne cr6,0x822e06a8
	if (!cr6.eq) goto loc_822E06A8;
	// b 0x822e0750
	goto loc_822E0750;
loc_822E06DC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// subf r4,r27,r10
	ctx.r4.s64 = ctx.r10.s64 - r27.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221c4e8
	sub_8221C4E8(ctx, base);
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
	// bl 0x821c9ab0
	sub_821C9AB0(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r29
	r11.u64 = r29.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// beq cr6,0x822e0750
	if (cr6.eq) goto loc_822E0750;
loc_822E0720:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// bne cr6,0x822e0720
	if (!cr6.eq) goto loc_822E0720;
loc_822E0750:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822E0758"))) PPC_WEAK_FUNC(sub_822E0758);
PPC_FUNC_IMPL(__imp__sub_822E0758) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-27388(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27388);
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
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x822e07b4
	if (cr6.lt) goto loc_822E07B4;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_822E07B4:
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
	// bl 0x822df290
	sub_822DF290(ctx, base);
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
	// bl 0x821c9ab0
	sub_821C9AB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x822e0828
	if (!cr6.eq) goto loc_822E0828;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822e0820
	if (cr6.eq) goto loc_822E0820;
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
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
loc_822E0820:
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
	// b 0x822e0840
	goto loc_822E0840;
loc_822E0828:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8221c4e8
	sub_8221C4E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822E0840:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822e0864
	if (!cr0.eq) goto loc_822E0864;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821c9ab0
	sub_821C9AB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822E0864:
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
	// b 0x822e08ac
	goto loc_822E08AC;
loc_822E088C:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
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
loc_822E08AC:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822e088c
	if (!cr0.eq) goto loc_822E088C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// rlwinm r11,r25,4,0,27
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 4) & 0xFFFFFFF0;
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

__attribute__((alias("__imp__sub_822E0760"))) PPC_WEAK_FUNC(sub_822E0760);
PPC_FUNC_IMPL(__imp__sub_822E0760) {
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
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x822e07b4
	if (cr6.lt) goto loc_822E07B4;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_822E07B4:
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
	// bl 0x822df290
	sub_822DF290(ctx, base);
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
	// bl 0x821c9ab0
	sub_821C9AB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x822e0828
	if (!cr6.eq) goto loc_822E0828;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822e0820
	if (cr6.eq) goto loc_822E0820;
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
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
loc_822E0820:
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
	// b 0x822e0840
	goto loc_822E0840;
loc_822E0828:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8221c4e8
	sub_8221C4E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822E0840:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822e0864
	if (!cr0.eq) goto loc_822E0864;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821c9ab0
	sub_821C9AB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822E0864:
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
	// b 0x822e08ac
	goto loc_822E08AC;
loc_822E088C:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
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
loc_822E08AC:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822e088c
	if (!cr0.eq) goto loc_822E088C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// rlwinm r11,r25,4,0,27
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 4) & 0xFFFFFFF0;
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

__attribute__((alias("__imp__sub_822E08EC"))) PPC_WEAK_FUNC(sub_822E08EC);
PPC_FUNC_IMPL(__imp__sub_822E08EC) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-27388(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27388);
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
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-27112(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27112);
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
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r10,-27152
	ctx.r4.s64 = ctx.r10.s64 + -27152;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-27212
	r11.s64 = r11.s64 + -27212;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r11,-26908
	r28.s64 = r11.s64 + -26908;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stfs f1,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 48, temp.u32);
	// addi r26,r11,-27232
	r26.s64 = r11.s64 + -27232;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r27,-32127
	r27.s64 = -2105475072;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,-9608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -9608);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// stb r3,56(r30)
	PPC_STORE_U8(r30.u32 + 56, ctx.r3.u8);
	// li r11,2
	r11.s64 = 2;
	// addi r25,r30,68
	r25.s64 = r30.s64 + 68;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r29,58(r30)
	PPC_STORE_U8(r30.u32 + 58, r29.u8);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r11,r30,156
	r11.s64 = r30.s64 + 156;
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,-2968(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x82315150
	sub_82315150(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,-9608(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + -9608);
	// bl 0x822b3c28
	sub_822B3C28(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,-9608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -9608);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822b43b8
	sub_822B43B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,-27252
	r11.s64 = r11.s64 + -27252;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82282798
	sub_82282798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82353618
	sub_82353618(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-17296
	ctx.r4.s64 = r11.s64 + -17296;
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,6228
	ctx.r4.s64 = r11.s64 + 6228;
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,-27260
	ctx.r4.s64 = r11.s64 + -27260;
	// stw r10,88(r30)
	PPC_STORE_U32(r30.u32 + 88, ctx.r10.u32);
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,-27276
	ctx.r4.s64 = r11.s64 + -27276;
	// stw r10,92(r30)
	PPC_STORE_U32(r30.u32 + 92, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,-27292
	ctx.r4.s64 = r11.s64 + -27292;
	// stw r10,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,-27312
	ctx.r4.s64 = r11.s64 + -27312;
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,57(r30)
	PPC_STORE_U8(r30.u32 + 57, r11.u8);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 56);
	// stfs f1,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// bl 0x822df9d8
	sub_822DF9D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822E08F4"))) PPC_WEAK_FUNC(sub_822E08F4);
PPC_FUNC_IMPL(__imp__sub_822E08F4) {
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
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_822E0928"))) PPC_WEAK_FUNC(sub_822E0928);
PPC_FUNC_IMPL(__imp__sub_822E0928) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r10,-27152
	ctx.r4.s64 = ctx.r10.s64 + -27152;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-27212
	r11.s64 = r11.s64 + -27212;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r11,-26908
	r28.s64 = r11.s64 + -26908;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stfs f1,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 48, temp.u32);
	// addi r26,r11,-27232
	r26.s64 = r11.s64 + -27232;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r27,-32127
	r27.s64 = -2105475072;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,-9608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -9608);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// stb r3,56(r30)
	PPC_STORE_U8(r30.u32 + 56, ctx.r3.u8);
	// li r11,2
	r11.s64 = 2;
	// addi r25,r30,68
	r25.s64 = r30.s64 + 68;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r29,58(r30)
	PPC_STORE_U8(r30.u32 + 58, r29.u8);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r11,r30,156
	r11.s64 = r30.s64 + 156;
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,-2968(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x82315150
	sub_82315150(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,-9608(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + -9608);
	// bl 0x822b3c28
	sub_822B3C28(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,-9608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -9608);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822b43b8
	sub_822B43B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,-27252
	r11.s64 = r11.s64 + -27252;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82282798
	sub_82282798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82353618
	sub_82353618(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-17296
	ctx.r4.s64 = r11.s64 + -17296;
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,6228
	ctx.r4.s64 = r11.s64 + 6228;
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,-27260
	ctx.r4.s64 = r11.s64 + -27260;
	// stw r10,88(r30)
	PPC_STORE_U32(r30.u32 + 88, ctx.r10.u32);
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,-27276
	ctx.r4.s64 = r11.s64 + -27276;
	// stw r10,92(r30)
	PPC_STORE_U32(r30.u32 + 92, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,-27292
	ctx.r4.s64 = r11.s64 + -27292;
	// stw r10,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,-27312
	ctx.r4.s64 = r11.s64 + -27312;
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,57(r30)
	PPC_STORE_U8(r30.u32 + 57, r11.u8);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 56);
	// stfs f1,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// bl 0x822df9d8
	sub_822DF9D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822E0BE4"))) PPC_WEAK_FUNC(sub_822E0BE4);
PPC_FUNC_IMPL(__imp__sub_822E0BE4) {
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

__attribute__((alias("__imp__sub_822E0C0C"))) PPC_WEAK_FUNC(sub_822E0C0C);
PPC_FUNC_IMPL(__imp__sub_822E0C0C) {
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
	// addi r3,r11,68
	ctx.r3.s64 = r11.s64 + 68;
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

__attribute__((alias("__imp__sub_822E0C38"))) PPC_WEAK_FUNC(sub_822E0C38);
PPC_FUNC_IMPL(__imp__sub_822E0C38) {
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
	// addi r3,r11,156
	ctx.r3.s64 = r11.s64 + 156;
	// bl 0x8221ca10
	sub_8221CA10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E0C64"))) PPC_WEAK_FUNC(sub_822E0C64);
PPC_FUNC_IMPL(__imp__sub_822E0C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E0C68"))) PPC_WEAK_FUNC(sub_822E0C68);
PPC_FUNC_IMPL(__imp__sub_822E0C68) {
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
	// lwz r16,-27024(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27024);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,-27212
	r11.s64 = r11.s64 + -27212;
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e0cb4
	if (cr0.eq) goto loc_822E0CB4;
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
loc_822E0CB4:
	// li r27,0
	r27.s64 = 0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r27,60(r29)
	PPC_STORE_U32(r29.u32 + 60, r27.u32);
	// lwz r5,18972(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-8684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x823257c0
	sub_823257C0(ctx, base);
	// addi r30,r29,156
	r30.s64 = r29.s64 + 156;
	// mr r28,r27
	r28.u64 = r27.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e0d20
	if (cr0.eq) goto loc_822E0D20;
loc_822E0CF4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + r11.u64;
	// bl 0x822deff8
	sub_822DEFF8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x822e0cf4
	if (cr6.lt) goto loc_822E0CF4;
loc_822E0D20:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x822e0d30
	goto loc_822E0D30;
loc_822E0D2C:
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_822E0D30:
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
	// bne 0x822e0d2c
	if (!cr0.eq) goto loc_822E0D2C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822e0d64
	if (cr6.eq) goto loc_822E0D64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822E0D64:
	// addi r3,r29,68
	ctx.r3.s64 = r29.s64 + 68;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822E0C70"))) PPC_WEAK_FUNC(sub_822E0C70);
PPC_FUNC_IMPL(__imp__sub_822E0C70) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,-27212
	r11.s64 = r11.s64 + -27212;
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e0cb4
	if (cr0.eq) goto loc_822E0CB4;
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
loc_822E0CB4:
	// li r27,0
	r27.s64 = 0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r27,60(r29)
	PPC_STORE_U32(r29.u32 + 60, r27.u32);
	// lwz r5,18972(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-8684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x823257c0
	sub_823257C0(ctx, base);
	// addi r30,r29,156
	r30.s64 = r29.s64 + 156;
	// mr r28,r27
	r28.u64 = r27.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e0d20
	if (cr0.eq) goto loc_822E0D20;
loc_822E0CF4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + r11.u64;
	// bl 0x822deff8
	sub_822DEFF8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x822e0cf4
	if (cr6.lt) goto loc_822E0CF4;
loc_822E0D20:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x822e0d30
	goto loc_822E0D30;
loc_822E0D2C:
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_822E0D30:
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
	// bne 0x822e0d2c
	if (!cr0.eq) goto loc_822E0D2C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822e0d64
	if (cr6.eq) goto loc_822E0D64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822E0D64:
	// addi r3,r29,68
	ctx.r3.s64 = r29.s64 + 68;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822E0D7C"))) PPC_WEAK_FUNC(sub_822E0D7C);
PPC_FUNC_IMPL(__imp__sub_822E0D7C) {
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

__attribute__((alias("__imp__sub_822E0DA4"))) PPC_WEAK_FUNC(sub_822E0DA4);
PPC_FUNC_IMPL(__imp__sub_822E0DA4) {
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
	// addi r3,r11,68
	ctx.r3.s64 = r11.s64 + 68;
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

__attribute__((alias("__imp__sub_822E0DD0"))) PPC_WEAK_FUNC(sub_822E0DD0);
PPC_FUNC_IMPL(__imp__sub_822E0DD0) {
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
	// bl 0x8221ca10
	sub_8221CA10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E0DFC"))) PPC_WEAK_FUNC(sub_822E0DFC);
PPC_FUNC_IMPL(__imp__sub_822E0DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E0E00"))) PPC_WEAK_FUNC(sub_822E0E00);
PPC_FUNC_IMPL(__imp__sub_822E0E00) {
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
	// bl 0x822e0c70
	sub_822E0C70(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e0e30
	if (cr0.eq) goto loc_822E0E30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822E0E30:
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

__attribute__((alias("__imp__sub_822E0E4C"))) PPC_WEAK_FUNC(sub_822E0E4C);
PPC_FUNC_IMPL(__imp__sub_822E0E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E0E50"))) PPC_WEAK_FUNC(sub_822E0E50);
PPC_FUNC_IMPL(__imp__sub_822E0E50) {
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
	// beq cr6,0x822e0ea0
	if (cr6.eq) goto loc_822E0EA0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x822e0e8c
	if (cr6.lt) goto loc_822E0E8C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x822e0590
	sub_822E0590(ctx, base);
	// b 0x822e0ea0
	goto loc_822E0EA0;
loc_822E0E8C:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x822e0760
	sub_822E0760(ctx, base);
loc_822E0EA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E0EB0"))) PPC_WEAK_FUNC(sub_822E0EB0);
PPC_FUNC_IMPL(__imp__sub_822E0EB0) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r8,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x822e0efc
	if (!cr6.lt) goto loc_822E0EFC;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x822e0f10
	if (cr6.eq) goto loc_822E0F10;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x821ca490
	sub_821CA490(ctx, base);
	// b 0x822e0f10
	goto loc_822E0F10;
loc_822E0EFC:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x822e0e50
	sub_822E0E50(ctx, base);
loc_822E0F10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E0F20"))) PPC_WEAK_FUNC(sub_822E0F20);
PPC_FUNC_IMPL(__imp__sub_822E0F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lbz r11,56(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822e1044
	if (cr0.eq) goto loc_822E1044;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r30,0
	r30.s64 = 0;
	// addi r26,r27,156
	r26.s64 = r27.s64 + 156;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x822e0eb0
	sub_822E0EB0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r29,r30
	r29.u64 = r30.u64;
	// addi r25,r11,-26928
	r25.s64 = r11.s64 + -26928;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r22,r27,68
	r22.s64 = r27.s64 + 68;
	// lis r23,-32127
	r23.s64 = -2105475072;
	// addi r24,r11,23444
	r24.s64 = r11.s64 + 23444;
loc_822E0F88:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822df208
	sub_822DF208(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-7564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -7564);
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r30,80
	cr6.compare<int32_t>(r30.s32, 80, xer);
	// blt cr6,0x822e0f88
	if (cr6.lt) goto loc_822E0F88;
loc_822E1044:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_822E104C"))) PPC_WEAK_FUNC(sub_822E104C);
PPC_FUNC_IMPL(__imp__sub_822E104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E1050"))) PPC_WEAK_FUNC(sub_822E1050);
PPC_FUNC_IMPL(__imp__sub_822E1050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
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
	// lwz r16,-26800(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -26800);
	// mflr r12
	// bl 0x8239bcc0
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r14,-32127
	r14.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,-7752(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + -7752);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7756
	r29.s64 = ctx.r10.s64 + -7756;
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// bne 0x822e10a4
	if (!cr0.eq) goto loc_822E10A4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7752(r14)
	PPC_STORE_U32(r14.u32 + -7752, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-26836
	ctx.r4.s64 = r11.s64 + -26836;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7752(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + -7752);
loc_822E10A4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r3,r10,-7760
	ctx.r3.s64 = ctx.r10.s64 + -7760;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// bne 0x822e10cc
	if (!cr0.eq) goto loc_822E10CC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7752(r14)
	PPC_STORE_U32(r14.u32 + -7752, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,-26848
	ctx.r4.s64 = r11.s64 + -26848;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E10CC:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r27,-32127
	r27.s64 = -2105475072;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r3,-9608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -9608);
	// beq 0x822e10f0
	if (cr0.eq) goto loc_822E10F0;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// b 0x822e10f4
	goto loc_822E10F4;
loc_822E10F0:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_822E10F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r22,0(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r21,604(r3)
	r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,-9608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -9608);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r4,r11,-464
	ctx.r4.s64 = r11.s64 + -464;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-26860
	ctx.r4.s64 = r11.s64 + -26860;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// addi r4,r11,-4940
	ctx.r4.s64 = r11.s64 + -4940;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-26876
	ctx.r4.s64 = r11.s64 + -26876;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-26888
	ctx.r4.s64 = r11.s64 + -26888;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r4,r11,-452
	ctx.r4.s64 = r11.s64 + -452;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,-9608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// addi r17,r11,-26908
	r17.s64 = r11.s64 + -26908;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r30,0
	r30.s64 = 0;
	// addi r19,r11,-7764
	r19.s64 = r11.s64 + -7764;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r16,-32253
	r16.s64 = -2113732608;
	// addi r15,r11,18888
	r15.s64 = r11.s64 + 18888;
loc_822E1228:
	// li r11,1
	r11.s64 = 1;
	// lwz r10,24(r15)
	ctx.r10.u64 = PPC_LOAD_U32(r15.u32 + 24);
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e1414
	if (cr0.eq) goto loc_822E1414;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227bd18
	sub_8227BD18(ctx, base);
	// lwz r11,26672(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 26672);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// beq cr6,0x822e1258
	if (cr6.eq) goto loc_822E1258;
	// cmpw cr6,r3,r18
	cr6.compare<int32_t>(ctx.r3.s32, r18.s32, xer);
	// blt cr6,0x822e1270
	if (cr6.lt) goto loc_822E1270;
loc_822E1258:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bne cr6,0x822e126c
	if (!cr6.eq) goto loc_822E126C;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
loc_822E126C:
	// lwz r22,0(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_822E1270:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
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
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b56a0
	sub_823B56A0(ctx, base);
	// lwz r11,-7752(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + -7752);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822e12c4
	if (!cr0.eq) goto loc_822E12C4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-7752(r14)
	PPC_STORE_U32(r14.u32 + -7752, r11.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E12C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82319700
	sub_82319700(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822e1304
	if (!cr0.eq) goto loc_822E1304;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
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
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
loc_822E1304:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x823b56a0
	sub_823B56A0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82319700
	sub_82319700(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822e1364
	if (!cr0.eq) goto loc_822E1364;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
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
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
loc_822E1364:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x823b56a0
	sub_823B56A0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r25,3,0,28
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x823b56a0
	sub_823B56A0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r24,3,0,28
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x823b56a0
	sub_823B56A0(ctx, base);
loc_822E1414:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x822e1228
	if (cr6.lt) goto loc_822E1228;
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_822E1058"))) PPC_WEAK_FUNC(sub_822E1058);
PPC_FUNC_IMPL(__imp__sub_822E1058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
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
	// mflr r12
	// bl 0x8239bcc0
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r14,-32127
	r14.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,-7752(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + -7752);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7756
	r29.s64 = ctx.r10.s64 + -7756;
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// bne 0x822e10a4
	if (!cr0.eq) goto loc_822E10A4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7752(r14)
	PPC_STORE_U32(r14.u32 + -7752, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-26836
	ctx.r4.s64 = r11.s64 + -26836;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7752(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + -7752);
loc_822E10A4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r3,r10,-7760
	ctx.r3.s64 = ctx.r10.s64 + -7760;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// bne 0x822e10cc
	if (!cr0.eq) goto loc_822E10CC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7752(r14)
	PPC_STORE_U32(r14.u32 + -7752, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,-26848
	ctx.r4.s64 = r11.s64 + -26848;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E10CC:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r27,-32127
	r27.s64 = -2105475072;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r3,-9608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -9608);
	// beq 0x822e10f0
	if (cr0.eq) goto loc_822E10F0;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// b 0x822e10f4
	goto loc_822E10F4;
loc_822E10F0:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_822E10F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r22,0(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r21,604(r3)
	r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,-9608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -9608);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r4,r11,-464
	ctx.r4.s64 = r11.s64 + -464;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-26860
	ctx.r4.s64 = r11.s64 + -26860;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// addi r4,r11,-4940
	ctx.r4.s64 = r11.s64 + -4940;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-26876
	ctx.r4.s64 = r11.s64 + -26876;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-26888
	ctx.r4.s64 = r11.s64 + -26888;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r4,r11,-452
	ctx.r4.s64 = r11.s64 + -452;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,-9608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// addi r17,r11,-26908
	r17.s64 = r11.s64 + -26908;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r30,0
	r30.s64 = 0;
	// addi r19,r11,-7764
	r19.s64 = r11.s64 + -7764;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r16,-32253
	r16.s64 = -2113732608;
	// addi r15,r11,18888
	r15.s64 = r11.s64 + 18888;
loc_822E1228:
	// li r11,1
	r11.s64 = 1;
	// lwz r10,24(r15)
	ctx.r10.u64 = PPC_LOAD_U32(r15.u32 + 24);
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e1414
	if (cr0.eq) goto loc_822E1414;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227bd18
	sub_8227BD18(ctx, base);
	// lwz r11,26672(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 26672);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// beq cr6,0x822e1258
	if (cr6.eq) goto loc_822E1258;
	// cmpw cr6,r3,r18
	cr6.compare<int32_t>(ctx.r3.s32, r18.s32, xer);
	// blt cr6,0x822e1270
	if (cr6.lt) goto loc_822E1270;
loc_822E1258:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bne cr6,0x822e126c
	if (!cr6.eq) goto loc_822E126C;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
loc_822E126C:
	// lwz r22,0(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_822E1270:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
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
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b56a0
	sub_823B56A0(ctx, base);
	// lwz r11,-7752(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + -7752);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822e12c4
	if (!cr0.eq) goto loc_822E12C4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-7752(r14)
	PPC_STORE_U32(r14.u32 + -7752, r11.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E12C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82319700
	sub_82319700(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822e1304
	if (!cr0.eq) goto loc_822E1304;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
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
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
loc_822E1304:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x823b56a0
	sub_823B56A0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82319700
	sub_82319700(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822e1364
	if (!cr0.eq) goto loc_822E1364;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
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
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
loc_822E1364:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x823b56a0
	sub_823B56A0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r25,3,0,28
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x823b56a0
	sub_823B56A0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r24,3,0,28
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x823b56a0
	sub_823B56A0(ctx, base);
loc_822E1414:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x822e1228
	if (cr6.lt) goto loc_822E1228;
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_822E1428"))) PPC_WEAK_FUNC(sub_822E1428);
PPC_FUNC_IMPL(__imp__sub_822E1428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7752
	r11.s64 = r11.s64 + -7752;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7752
	ctx.r10.s64 = ctx.r10.s64 + -7752;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E1450"))) PPC_WEAK_FUNC(sub_822E1450);
PPC_FUNC_IMPL(__imp__sub_822E1450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7752
	r11.s64 = r11.s64 + -7752;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7752
	ctx.r10.s64 = ctx.r10.s64 + -7752;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E1478"))) PPC_WEAK_FUNC(sub_822E1478);
PPC_FUNC_IMPL(__imp__sub_822E1478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7752
	r11.s64 = r11.s64 + -7752;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7752
	ctx.r10.s64 = ctx.r10.s64 + -7752;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E14A0"))) PPC_WEAK_FUNC(sub_822E14A0);
PPC_FUNC_IMPL(__imp__sub_822E14A0) {
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
	// lwz r16,-26624(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -26624);
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
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-26692
	r11.s64 = r11.s64 + -26692;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r10,-26712
	ctx.r4.s64 = ctx.r10.s64 + -26712;
	// stw r9,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r9.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,-2968(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x82315150
	sub_82315150(ctx, base);
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

__attribute__((alias("__imp__sub_822E14A8"))) PPC_WEAK_FUNC(sub_822E14A8);
PPC_FUNC_IMPL(__imp__sub_822E14A8) {
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
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-26692
	r11.s64 = r11.s64 + -26692;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r10,-26712
	ctx.r4.s64 = ctx.r10.s64 + -26712;
	// stw r9,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r9.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,-2968(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x82315150
	sub_82315150(ctx, base);
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

__attribute__((alias("__imp__sub_822E1514"))) PPC_WEAK_FUNC(sub_822E1514);
PPC_FUNC_IMPL(__imp__sub_822E1514) {
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

__attribute__((alias("__imp__sub_822E153C"))) PPC_WEAK_FUNC(sub_822E153C);
PPC_FUNC_IMPL(__imp__sub_822E153C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E1540"))) PPC_WEAK_FUNC(sub_822E1540);
PPC_FUNC_IMPL(__imp__sub_822E1540) {
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
	// lwz r16,-26568(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -26568);
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
	// addi r11,r11,-26692
	r11.s64 = r11.s64 + -26692;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e1594
	if (cr0.eq) goto loc_822E1594;
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
loc_822E1594:
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

__attribute__((alias("__imp__sub_822E1548"))) PPC_WEAK_FUNC(sub_822E1548);
PPC_FUNC_IMPL(__imp__sub_822E1548) {
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
	// addi r11,r11,-26692
	r11.s64 = r11.s64 + -26692;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e1594
	if (cr0.eq) goto loc_822E1594;
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
loc_822E1594:
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

__attribute__((alias("__imp__sub_822E15B4"))) PPC_WEAK_FUNC(sub_822E15B4);
PPC_FUNC_IMPL(__imp__sub_822E15B4) {
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

__attribute__((alias("__imp__sub_822E15DC"))) PPC_WEAK_FUNC(sub_822E15DC);
PPC_FUNC_IMPL(__imp__sub_822E15DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E15E0"))) PPC_WEAK_FUNC(sub_822E15E0);
PPC_FUNC_IMPL(__imp__sub_822E15E0) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e1614
	if (cr0.eq) goto loc_822E1614;
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
loc_822E1614:
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
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

__attribute__((alias("__imp__sub_822E1630"))) PPC_WEAK_FUNC(sub_822E1630);
PPC_FUNC_IMPL(__imp__sub_822E1630) {
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
	// bl 0x822e1548
	sub_822E1548(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e1660
	if (cr0.eq) goto loc_822E1660;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822E1660:
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

__attribute__((alias("__imp__sub_822E167C"))) PPC_WEAK_FUNC(sub_822E167C);
PPC_FUNC_IMPL(__imp__sub_822E167C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E1680"))) PPC_WEAK_FUNC(sub_822E1680);
PPC_FUNC_IMPL(__imp__sub_822E1680) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-26440(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -26440);
	// mflr r12
	// bl 0x8239bcf4
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e16c4
	if (cr0.eq) goto loc_822E16C4;
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
loc_822E16C4:
	// li r11,0
	r11.s64 = 0;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r11.u32);
	// lwz r4,-9608(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// bl 0x822b3c28
	sub_822B3C28(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-26472
	ctx.r4.s64 = r11.s64 + -26472;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-17296
	ctx.r4.s64 = r11.s64 + -17296;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,-26908
	ctx.r4.s64 = r11.s64 + -26908;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// lwz r30,0(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822b43b8
	sub_822B43B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82319538
	sub_82319538(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,-26492
	ctx.r3.s64 = r11.s64 + -26492;
	// lwz r11,-7564(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -7564);
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// bl 0x82157f28
	sub_82157F28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 148);
	// lwz r3,-7564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -7564);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-27884
	ctx.r4.s64 = r11.s64 + -27884;
	// stw r10,40(r29)
	PPC_STORE_U32(r29.u32 + 40, ctx.r10.u32);
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
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// fneg f1,f30
	ctx.f1.u64 = f30.u64 ^ 0x8000000000000000;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// bl 0x822f5478
	sub_822F5478(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-26500
	ctx.r4.s64 = r11.s64 + -26500;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfs f30,-9640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9640);
	f30.f64 = double(temp.f32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x822e1884
	if (cr0.eq) goto loc_822E1884;
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
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
loc_822E1884:
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-7740(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7740);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7748
	r30.s64 = ctx.r9.s64 + -7748;
	// bne 0x822e18f0
	if (!cr0.eq) goto loc_822E18F0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7740, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-26512
	ctx.r4.s64 = r11.s64 + -26512;
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
	// addi r3,r11,14960
	ctx.r3.s64 = r11.s64 + 14960;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E18F0:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e1918
	if (cr0.eq) goto loc_822E1918;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82312240
	sub_82312240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822e191c
	goto loc_822E191C;
loc_822E1918:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822E191C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,24112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82314420
	sub_82314420(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822E1688"))) PPC_WEAK_FUNC(sub_822E1688);
PPC_FUNC_IMPL(__imp__sub_822E1688) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e16c4
	if (cr0.eq) goto loc_822E16C4;
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
loc_822E16C4:
	// li r11,0
	r11.s64 = 0;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r11.u32);
	// lwz r4,-9608(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// bl 0x822b3c28
	sub_822B3C28(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-26472
	ctx.r4.s64 = r11.s64 + -26472;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-17296
	ctx.r4.s64 = r11.s64 + -17296;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,-26908
	ctx.r4.s64 = r11.s64 + -26908;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// lwz r30,0(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822b43b8
	sub_822B43B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82319538
	sub_82319538(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,-26492
	ctx.r3.s64 = r11.s64 + -26492;
	// lwz r11,-7564(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -7564);
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// bl 0x82157f28
	sub_82157F28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 148);
	// lwz r3,-7564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -7564);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-27884
	ctx.r4.s64 = r11.s64 + -27884;
	// stw r10,40(r29)
	PPC_STORE_U32(r29.u32 + 40, ctx.r10.u32);
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
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// fneg f1,f30
	ctx.f1.u64 = f30.u64 ^ 0x8000000000000000;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// bl 0x822f5478
	sub_822F5478(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-26500
	ctx.r4.s64 = r11.s64 + -26500;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfs f30,-9640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9640);
	f30.f64 = double(temp.f32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x822e1884
	if (cr0.eq) goto loc_822E1884;
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
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
loc_822E1884:
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-7740(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7740);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7748
	r30.s64 = ctx.r9.s64 + -7748;
	// bne 0x822e18f0
	if (!cr0.eq) goto loc_822E18F0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7740, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-26512
	ctx.r4.s64 = r11.s64 + -26512;
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
	// addi r3,r11,14960
	ctx.r3.s64 = r11.s64 + 14960;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E18F0:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e1918
	if (cr0.eq) goto loc_822E1918;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82312240
	sub_82312240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822e191c
	goto loc_822E191C;
loc_822E1918:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822E191C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,24112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82314420
	sub_82314420(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822E1944"))) PPC_WEAK_FUNC(sub_822E1944);
PPC_FUNC_IMPL(__imp__sub_822E1944) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7740
	r11.s64 = r11.s64 + -7740;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7740
	ctx.r10.s64 = ctx.r10.s64 + -7740;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E196C"))) PPC_WEAK_FUNC(sub_822E196C);
PPC_FUNC_IMPL(__imp__sub_822E196C) {
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
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
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

__attribute__((alias("__imp__sub_822E1994"))) PPC_WEAK_FUNC(sub_822E1994);
PPC_FUNC_IMPL(__imp__sub_822E1994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E1998"))) PPC_WEAK_FUNC(sub_822E1998);
PPC_FUNC_IMPL(__imp__sub_822E1998) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-26344(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -26344);
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
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822e1a84
	if (cr6.eq) goto loc_822E1A84;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e19f4
	if (cr0.eq) goto loc_822E19F4;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822e1a84
	goto loc_822E1A84;
loc_822E19F4:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-7728(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7728);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7736
	r30.s64 = ctx.r9.s64 + -7736;
	// bne 0x822e1a40
	if (!cr0.eq) goto loc_822E1A40;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7728(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7728, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-26512
	ctx.r4.s64 = r11.s64 + -26512;
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
	// addi r3,r11,14992
	ctx.r3.s64 = r11.s64 + 14992;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E1A40:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e1a68
	if (cr0.eq) goto loc_822E1A68;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82312240
	sub_82312240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822e1a6c
	goto loc_822E1A6C;
loc_822E1A68:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822E1A6C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,24112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82314420
	sub_82314420(ctx, base);
loc_822E1A84:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822E19A0"))) PPC_WEAK_FUNC(sub_822E19A0);
PPC_FUNC_IMPL(__imp__sub_822E19A0) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822e1a84
	if (cr6.eq) goto loc_822E1A84;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e19f4
	if (cr0.eq) goto loc_822E19F4;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822e1a84
	goto loc_822E1A84;
loc_822E19F4:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-7728(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7728);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7736
	r30.s64 = ctx.r9.s64 + -7736;
	// bne 0x822e1a40
	if (!cr0.eq) goto loc_822E1A40;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7728(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7728, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-26512
	ctx.r4.s64 = r11.s64 + -26512;
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
	// addi r3,r11,14992
	ctx.r3.s64 = r11.s64 + 14992;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E1A40:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e1a68
	if (cr0.eq) goto loc_822E1A68;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82312240
	sub_82312240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822e1a6c
	goto loc_822E1A6C;
loc_822E1A68:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822E1A6C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,24112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82314420
	sub_82314420(ctx, base);
loc_822E1A84:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822E1A8C"))) PPC_WEAK_FUNC(sub_822E1A8C);
PPC_FUNC_IMPL(__imp__sub_822E1A8C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7728
	r11.s64 = r11.s64 + -7728;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7728
	ctx.r10.s64 = ctx.r10.s64 + -7728;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E1AB4"))) PPC_WEAK_FUNC(sub_822E1AB4);
PPC_FUNC_IMPL(__imp__sub_822E1AB4) {
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

__attribute__((alias("__imp__sub_822E1ADC"))) PPC_WEAK_FUNC(sub_822E1ADC);
PPC_FUNC_IMPL(__imp__sub_822E1ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E1AE0"))) PPC_WEAK_FUNC(sub_822E1AE0);
PPC_FUNC_IMPL(__imp__sub_822E1AE0) {
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
	// lwz r16,-26232(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -26232);
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-7712(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7712);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7716
	r29.s64 = ctx.r10.s64 + -7716;
	// bne 0x822e1b50
	if (!cr0.eq) goto loc_822E1B50;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7712(r30)
	PPC_STORE_U32(r30.u32 + -7712, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3612
	ctx.r4.s64 = r11.s64 + -3612;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7712(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7712);
loc_822E1B50:
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
	// beq 0x822e1b78
	if (cr0.eq) goto loc_822E1B78;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822e1688
	sub_822E1688(ctx, base);
loc_822E1B70:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x822e1c60
	goto loc_822E1C60;
loc_822E1B78:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7720
	r29.s64 = ctx.r10.s64 + -7720;
	// bne 0x822e1ba4
	if (!cr0.eq) goto loc_822E1BA4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7712(r30)
	PPC_STORE_U32(r30.u32 + -7712, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27388
	ctx.r4.s64 = r11.s64 + 27388;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7712(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7712);
loc_822E1BA4:
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
	// beq 0x822e1bc8
	if (cr0.eq) goto loc_822E1BC8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822e15e0
	sub_822E15E0(ctx, base);
	// b 0x822e1b70
	goto loc_822E1B70;
loc_822E1BC8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7724
	r29.s64 = ctx.r10.s64 + -7724;
	// bne 0x822e1bf0
	if (!cr0.eq) goto loc_822E1BF0;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-7712(r30)
	PPC_STORE_U32(r30.u32 + -7712, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-26512
	ctx.r4.s64 = r11.s64 + -26512;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E1BF0:
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
	// beq 0x822e1c14
	if (cr0.eq) goto loc_822E1C14;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822e19a0
	sub_822E19A0(ctx, base);
	// b 0x822e1b70
	goto loc_822E1B70;
loc_822E1C14:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822e1c58
	if (cr6.eq) goto loc_822E1C58;
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
	// beq 0x822e1c64
	if (cr0.eq) goto loc_822E1C64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822e1c64
	goto loc_822E1C64;
loc_822E1C58:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822E1C60:
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
loc_822E1C64:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822E1AE8"))) PPC_WEAK_FUNC(sub_822E1AE8);
PPC_FUNC_IMPL(__imp__sub_822E1AE8) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-7712(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7712);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7716
	r29.s64 = ctx.r10.s64 + -7716;
	// bne 0x822e1b50
	if (!cr0.eq) goto loc_822E1B50;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7712(r30)
	PPC_STORE_U32(r30.u32 + -7712, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-3612
	ctx.r4.s64 = r11.s64 + -3612;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7712(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7712);
loc_822E1B50:
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
	// beq 0x822e1b78
	if (cr0.eq) goto loc_822E1B78;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822e1688
	sub_822E1688(ctx, base);
loc_822E1B70:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x822e1c60
	goto loc_822E1C60;
loc_822E1B78:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7720
	r29.s64 = ctx.r10.s64 + -7720;
	// bne 0x822e1ba4
	if (!cr0.eq) goto loc_822E1BA4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7712(r30)
	PPC_STORE_U32(r30.u32 + -7712, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27388
	ctx.r4.s64 = r11.s64 + 27388;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7712(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7712);
loc_822E1BA4:
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
	// beq 0x822e1bc8
	if (cr0.eq) goto loc_822E1BC8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822e15e0
	sub_822E15E0(ctx, base);
	// b 0x822e1b70
	goto loc_822E1B70;
loc_822E1BC8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7724
	r29.s64 = ctx.r10.s64 + -7724;
	// bne 0x822e1bf0
	if (!cr0.eq) goto loc_822E1BF0;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-7712(r30)
	PPC_STORE_U32(r30.u32 + -7712, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-26512
	ctx.r4.s64 = r11.s64 + -26512;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E1BF0:
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
	// beq 0x822e1c14
	if (cr0.eq) goto loc_822E1C14;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822e19a0
	sub_822E19A0(ctx, base);
	// b 0x822e1b70
	goto loc_822E1B70;
loc_822E1C14:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822e1c58
	if (cr6.eq) goto loc_822E1C58;
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
	// beq 0x822e1c64
	if (cr0.eq) goto loc_822E1C64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822e1c64
	goto loc_822E1C64;
loc_822E1C58:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822E1C60:
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
loc_822E1C64:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822E1C70"))) PPC_WEAK_FUNC(sub_822E1C70);
PPC_FUNC_IMPL(__imp__sub_822E1C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7712
	r11.s64 = r11.s64 + -7712;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7712
	ctx.r10.s64 = ctx.r10.s64 + -7712;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E1C98"))) PPC_WEAK_FUNC(sub_822E1C98);
PPC_FUNC_IMPL(__imp__sub_822E1C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7712
	r11.s64 = r11.s64 + -7712;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7712
	ctx.r10.s64 = ctx.r10.s64 + -7712;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E1CC0"))) PPC_WEAK_FUNC(sub_822E1CC0);
PPC_FUNC_IMPL(__imp__sub_822E1CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7712
	r11.s64 = r11.s64 + -7712;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7712
	ctx.r10.s64 = ctx.r10.s64 + -7712;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E1CE8"))) PPC_WEAK_FUNC(sub_822E1CE8);
PPC_FUNC_IMPL(__imp__sub_822E1CE8) {
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

__attribute__((alias("__imp__sub_822E1D10"))) PPC_WEAK_FUNC(sub_822E1D10);
PPC_FUNC_IMPL(__imp__sub_822E1D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-26116
	r11.s64 = r11.s64 + -26116;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E1D20"))) PPC_WEAK_FUNC(sub_822E1D20);
PPC_FUNC_IMPL(__imp__sub_822E1D20) {
	PPC_FUNC_PROLOGUE();
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E1D28"))) PPC_WEAK_FUNC(sub_822E1D28);
PPC_FUNC_IMPL(__imp__sub_822E1D28) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-26116
	r11.s64 = r11.s64 + -26116;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x822e1d54
	if (cr0.eq) goto loc_822E1D54;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822E1D54:
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

__attribute__((alias("__imp__sub_822E1D6C"))) PPC_WEAK_FUNC(sub_822E1D6C);
PPC_FUNC_IMPL(__imp__sub_822E1D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E1D70"))) PPC_WEAK_FUNC(sub_822E1D70);
PPC_FUNC_IMPL(__imp__sub_822E1D70) {
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
	// lwz r16,-25984(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25984);
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
	// lwz r11,-7704(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7704);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7708
	r30.s64 = ctx.r9.s64 + -7708;
	// bne 0x822e1dbc
	if (!cr0.eq) goto loc_822E1DBC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7704, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-26016
	ctx.r4.s64 = r11.s64 + -26016;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E1DBC:
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

__attribute__((alias("__imp__sub_822E1D78"))) PPC_WEAK_FUNC(sub_822E1D78);
PPC_FUNC_IMPL(__imp__sub_822E1D78) {
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
	// lwz r11,-7704(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7704);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7708
	r30.s64 = ctx.r9.s64 + -7708;
	// bne 0x822e1dbc
	if (!cr0.eq) goto loc_822E1DBC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7704, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-26016
	ctx.r4.s64 = r11.s64 + -26016;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E1DBC:
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

__attribute__((alias("__imp__sub_822E1DD0"))) PPC_WEAK_FUNC(sub_822E1DD0);
PPC_FUNC_IMPL(__imp__sub_822E1DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7704
	r11.s64 = r11.s64 + -7704;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7704
	ctx.r10.s64 = ctx.r10.s64 + -7704;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E1DF8"))) PPC_WEAK_FUNC(sub_822E1DF8);
PPC_FUNC_IMPL(__imp__sub_822E1DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 / ctx.f1.f64));
	// b 0x822f8278
	sub_822F8278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822E1E0C"))) PPC_WEAK_FUNC(sub_822E1E0C);
PPC_FUNC_IMPL(__imp__sub_822E1E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E1E10"))) PPC_WEAK_FUNC(sub_822E1E10);
PPC_FUNC_IMPL(__imp__sub_822E1E10) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r4,-9608(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b3c50
	sub_822B3C50(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
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
	// beq 0x822e1ef8
	if (cr0.eq) goto loc_822E1EF8;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e1e78
	if (cr0.eq) goto loc_822E1E78;
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
loc_822E1E78:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-25936
	ctx.r4.s64 = r11.s64 + -25936;
	// li r11,0
	r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,27696
	ctx.r4.s64 = r11.s64 + 27696;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d80
	sub_82270D80(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r5,r11,4
	ctx.r5.s64 = r11.s64 + 4;
	// bne 0x822e1ecc
	if (!cr0.eq) goto loc_822E1ECC;
	// li r5,0
	ctx.r5.s64 = 0;
loc_822E1ECC:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x8233c650
	sub_8233C650(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// bl 0x8233ae90
	sub_8233AE90(ctx, base);
	// b 0x822e1f0c
	goto loc_822E1F0C;
loc_822E1EF8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822E1F0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822E1F14"))) PPC_WEAK_FUNC(sub_822E1F14);
PPC_FUNC_IMPL(__imp__sub_822E1F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E1F18"))) PPC_WEAK_FUNC(sub_822E1F18);
PPC_FUNC_IMPL(__imp__sub_822E1F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x82339d30
	sub_82339D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822E1F20"))) PPC_WEAK_FUNC(sub_822E1F20);
PPC_FUNC_IMPL(__imp__sub_822E1F20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x8233cb08
	sub_8233CB08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822E1F28"))) PPC_WEAK_FUNC(sub_822E1F28);
PPC_FUNC_IMPL(__imp__sub_822E1F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x8233cbb8
	sub_8233CBB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822E1F30"))) PPC_WEAK_FUNC(sub_822E1F30);
PPC_FUNC_IMPL(__imp__sub_822E1F30) {
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
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// beq 0x822e1f74
	if (cr0.eq) goto loc_822E1F74;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x8233cb68
	sub_8233CB68(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822e1fa0
	goto loc_822E1FA0;
loc_822E1F74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e1e10
	sub_822E1E10(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stb r11,53(r31)
	PPC_STORE_U8(r31.u32 + 53, r11.u8);
	// bl 0x8233caf8
	sub_8233CAF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e1fa0
	if (cr0.eq) goto loc_822E1FA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x8233cb68
	sub_8233CB68(ctx, base);
loc_822E1FA0:
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

__attribute__((alias("__imp__sub_822E1FB4"))) PPC_WEAK_FUNC(sub_822E1FB4);
PPC_FUNC_IMPL(__imp__sub_822E1FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E1FB8"))) PPC_WEAK_FUNC(sub_822E1FB8);
PPC_FUNC_IMPL(__imp__sub_822E1FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_822E1FCC"))) PPC_WEAK_FUNC(sub_822E1FCC);
PPC_FUNC_IMPL(__imp__sub_822E1FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E1FD0"))) PPC_WEAK_FUNC(sub_822E1FD0);
PPC_FUNC_IMPL(__imp__sub_822E1FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x8233cbc0
	sub_8233CBC0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_822E2014"))) PPC_WEAK_FUNC(sub_822E2014);
PPC_FUNC_IMPL(__imp__sub_822E2014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E2018"))) PPC_WEAK_FUNC(sub_822E2018);
PPC_FUNC_IMPL(__imp__sub_822E2018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x822c8948
	sub_822C8948(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2058
	if (cr0.eq) goto loc_822E2058;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8233a8b0
	sub_8233A8B0(ctx, base);
loc_822E2058:
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

__attribute__((alias("__imp__sub_822E2074"))) PPC_WEAK_FUNC(sub_822E2074);
PPC_FUNC_IMPL(__imp__sub_822E2074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E2078"))) PPC_WEAK_FUNC(sub_822E2078);
PPC_FUNC_IMPL(__imp__sub_822E2078) {
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
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x822c6a08
	sub_822C6A08(ctx, base);
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

__attribute__((alias("__imp__sub_822E20D0"))) PPC_WEAK_FUNC(sub_822E20D0);
PPC_FUNC_IMPL(__imp__sub_822E20D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x8233ae28
	sub_8233AE28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822E20D8"))) PPC_WEAK_FUNC(sub_822E20D8);
PPC_FUNC_IMPL(__imp__sub_822E20D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x8233ade8
	sub_8233ADE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822E20E0"))) PPC_WEAK_FUNC(sub_822E20E0);
PPC_FUNC_IMPL(__imp__sub_822E20E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lbz r11,53(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x822c80f8
	sub_822C80F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822E20F4"))) PPC_WEAK_FUNC(sub_822E20F4);
PPC_FUNC_IMPL(__imp__sub_822E20F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E20F8"))) PPC_WEAK_FUNC(sub_822E20F8);
PPC_FUNC_IMPL(__imp__sub_822E20F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x822c8438
	sub_822C8438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822E2100"))) PPC_WEAK_FUNC(sub_822E2100);
PPC_FUNC_IMPL(__imp__sub_822E2100) {
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
	// bl 0x822e1d78
	sub_822E1D78(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r11,24932
	r31.s64 = r11.s64 + 24932;
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

__attribute__((alias("__imp__sub_822E2160"))) PPC_WEAK_FUNC(sub_822E2160);
PPC_FUNC_IMPL(__imp__sub_822E2160) {
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
	// beq 0x822e21a0
	if (cr0.eq) goto loc_822E21A0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,24964
	ctx.r3.s64 = r11.s64 + 24964;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822e21a8
	goto loc_822E21A8;
loc_822E21A0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_822E21A8:
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

__attribute__((alias("__imp__sub_822E21C4"))) PPC_WEAK_FUNC(sub_822E21C4);
PPC_FUNC_IMPL(__imp__sub_822E21C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E21C8"))) PPC_WEAK_FUNC(sub_822E21C8);
PPC_FUNC_IMPL(__imp__sub_822E21C8) {
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
	// lwz r16,-25896(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25896);
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
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x8233a750
	sub_8233A750(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e1e10
	sub_822E1E10(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x8233cbc0
	sub_8233CBC0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822e2284
	if (!cr0.eq) goto loc_822E2284;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-6464
	ctx.r3.s64 = r11.s64 + -6464;
	// bl 0x82302830
	sub_82302830(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x8233cbc0
	sub_8233CBC0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822e2284
	if (!cr0.eq) goto loc_822E2284;
	// lis r29,-32127
	r29.s64 = -2105475072;
loc_822E2248:
	// lwz r3,-7564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -7564);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822717b8
	sub_822717B8(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x8233cbc0
	sub_8233CBC0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2248
	if (cr0.eq) goto loc_822E2248;
loc_822E2284:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x8233cb00
	sub_8233CB00(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-7696(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7696);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-7700
	r29.s64 = ctx.r9.s64 + -7700;
	// bne 0x822e22d4
	if (!cr0.eq) goto loc_822E22D4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7696, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25924
	ctx.r4.s64 = r11.s64 + -25924;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E22D4:
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lbz r11,52(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822e2308
	if (!cr0.eq) goto loc_822E2308;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e230c
	if (cr0.eq) goto loc_822E230C;
loc_822E2308:
	// li r4,1
	ctx.r4.s64 = 1;
loc_822E230C:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x8233ade8
	sub_8233ADE8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822E21D0"))) PPC_WEAK_FUNC(sub_822E21D0);
PPC_FUNC_IMPL(__imp__sub_822E21D0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x8233a750
	sub_8233A750(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e1e10
	sub_822E1E10(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x8233cbc0
	sub_8233CBC0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822e2284
	if (!cr0.eq) goto loc_822E2284;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-6464
	ctx.r3.s64 = r11.s64 + -6464;
	// bl 0x82302830
	sub_82302830(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x8233cbc0
	sub_8233CBC0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822e2284
	if (!cr0.eq) goto loc_822E2284;
	// lis r29,-32127
	r29.s64 = -2105475072;
loc_822E2248:
	// lwz r3,-7564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -7564);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822717b8
	sub_822717B8(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x8233cbc0
	sub_8233CBC0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2248
	if (cr0.eq) goto loc_822E2248;
loc_822E2284:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x8233cb00
	sub_8233CB00(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-7696(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7696);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-7700
	r29.s64 = ctx.r9.s64 + -7700;
	// bne 0x822e22d4
	if (!cr0.eq) goto loc_822E22D4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7696, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25924
	ctx.r4.s64 = r11.s64 + -25924;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E22D4:
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lbz r11,52(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822e2308
	if (!cr0.eq) goto loc_822E2308;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b37a0
	sub_822B37A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e230c
	if (cr0.eq) goto loc_822E230C;
loc_822E2308:
	// li r4,1
	ctx.r4.s64 = 1;
loc_822E230C:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x8233ade8
	sub_8233ADE8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822E231C"))) PPC_WEAK_FUNC(sub_822E231C);
PPC_FUNC_IMPL(__imp__sub_822E231C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7696
	r11.s64 = r11.s64 + -7696;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7696
	ctx.r10.s64 = ctx.r10.s64 + -7696;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E2344"))) PPC_WEAK_FUNC(sub_822E2344);
PPC_FUNC_IMPL(__imp__sub_822E2344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E2348"))) PPC_WEAK_FUNC(sub_822E2348);
PPC_FUNC_IMPL(__imp__sub_822E2348) {
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
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r3,-9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x822e2390
	if (cr6.eq) goto loc_822E2390;
	// lwz r3,-9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x822d1178
	sub_822D1178(ctx, base);
loc_822E2390:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822E2398"))) PPC_WEAK_FUNC(sub_822E2398);
PPC_FUNC_IMPL(__imp__sub_822E2398) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x822e6e58
	sub_822E6E58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822e2428
	if (!cr0.gt) goto loc_822E2428;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,24988
	r28.s64 = r11.s64 + 24988;
loc_822E23CC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e7800
	sub_822E7800(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e2414
	if (cr0.eq) goto loc_822E2414;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e7800
	sub_822E7800(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
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
	// bne 0x822e242c
	if (!cr0.eq) goto loc_822E242C;
loc_822E2414:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x822e6e58
	sub_822E6E58(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x822e23cc
	if (cr6.lt) goto loc_822E23CC;
loc_822E2428:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E242C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822E2434"))) PPC_WEAK_FUNC(sub_822E2434);
PPC_FUNC_IMPL(__imp__sub_822E2434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E2438"))) PPC_WEAK_FUNC(sub_822E2438);
PPC_FUNC_IMPL(__imp__sub_822E2438) {
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
	// b 0x822e2478
	goto loc_822E2478;
loc_822E2454:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e2474
	if (cr0.eq) goto loc_822E2474;
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
loc_822E2474:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822E2478:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x822e2454
	if (!cr6.eq) goto loc_822E2454;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822E248C"))) PPC_WEAK_FUNC(sub_822E248C);
PPC_FUNC_IMPL(__imp__sub_822E248C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E2490"))) PPC_WEAK_FUNC(sub_822E2490);
PPC_FUNC_IMPL(__imp__sub_822E2490) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lis r28,-32127
	r28.s64 = -2105475072;
loc_822E24C0:
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// slw r11,r11,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r11.u32 << (r31.u8 & 0x3F));
	// and r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = r11.u64 ^ 1;
	// bl 0x82695b90
	sub_82695B90(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(r31.s32, 5, xer);
	// blt cr6,0x822e24c0
	if (cr6.lt) goto loc_822E24C0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822E2504"))) PPC_WEAK_FUNC(sub_822E2504);
PPC_FUNC_IMPL(__imp__sub_822E2504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E2508"))) PPC_WEAK_FUNC(sub_822E2508);
PPC_FUNC_IMPL(__imp__sub_822E2508) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-25824(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25824);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stb r29,53(r30)
	PPC_STORE_U8(r30.u32 + 53, r29.u8);
	// bl 0x8233a7d8
	sub_8233A7D8(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r25,-32127
	r25.s64 = -2105475072;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e25a4
	if (cr0.eq) goto loc_822E25A4;
	// lwz r11,-8684(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -8684);
	// lbz r10,91(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 91);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x822e2580
	if (!cr0.eq) goto loc_822E2580;
	// lbz r11,92(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x822e2584
	if (cr0.eq) goto loc_822E2584;
loc_822E2580:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_822E2584:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e25a4
	if (cr0.eq) goto loc_822E25A4;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822E25A4:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stb r29,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r29.u8);
	// stb r29,97(r31)
	PPC_STORE_U8(r31.u32 + 97, r29.u8);
	// stb r29,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r29.u8);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r26,164(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826957a0
	sub_826957A0(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-7688(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7688);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r27,r9,-7692
	r27.s64 = ctx.r9.s64 + -7692;
	// bne 0x822e2644
	if (!cr0.eq) goto loc_822E2644;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7688, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,2816
	ctx.r4.s64 = r11.s64 + 2816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E2644:
	// lwz r11,-9608(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e268c
	if (cr0.eq) goto loc_822E268C;
	// lwz r3,-8684(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -8684);
	// bl 0x822ca568
	sub_822CA568(ctx, base);
	// bl 0x822c9be8
	sub_822C9BE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826957c8
	sub_826957C8(ctx, base);
loc_822E268C:
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e270c
	if (cr0.eq) goto loc_822E270C;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r11.u32);
	// bne 0x822e270c
	if (!cr0.eq) goto loc_822E270C;
	// lwz r11,-8684(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -8684);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mulli r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 * 5;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2708
	if (cr0.eq) goto loc_822E2708;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2708:
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
loc_822E270C:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822E2510"))) PPC_WEAK_FUNC(sub_822E2510);
PPC_FUNC_IMPL(__imp__sub_822E2510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stb r29,53(r30)
	PPC_STORE_U8(r30.u32 + 53, r29.u8);
	// bl 0x8233a7d8
	sub_8233A7D8(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r25,-32127
	r25.s64 = -2105475072;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e25a4
	if (cr0.eq) goto loc_822E25A4;
	// lwz r11,-8684(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -8684);
	// lbz r10,91(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 91);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x822e2580
	if (!cr0.eq) goto loc_822E2580;
	// lbz r11,92(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x822e2584
	if (cr0.eq) goto loc_822E2584;
loc_822E2580:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_822E2584:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e25a4
	if (cr0.eq) goto loc_822E25A4;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822E25A4:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stb r29,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r29.u8);
	// stb r29,97(r31)
	PPC_STORE_U8(r31.u32 + 97, r29.u8);
	// stb r29,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r29.u8);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r26,164(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826957a0
	sub_826957A0(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-7688(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7688);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r27,r9,-7692
	r27.s64 = ctx.r9.s64 + -7692;
	// bne 0x822e2644
	if (!cr0.eq) goto loc_822E2644;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7688, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,2816
	ctx.r4.s64 = r11.s64 + 2816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E2644:
	// lwz r11,-9608(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e268c
	if (cr0.eq) goto loc_822E268C;
	// lwz r3,-8684(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -8684);
	// bl 0x822ca568
	sub_822CA568(ctx, base);
	// bl 0x822c9be8
	sub_822C9BE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826957c8
	sub_826957C8(ctx, base);
loc_822E268C:
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e270c
	if (cr0.eq) goto loc_822E270C;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r11.u32);
	// bne 0x822e270c
	if (!cr0.eq) goto loc_822E270C;
	// lwz r11,-8684(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -8684);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mulli r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 * 5;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2708
	if (cr0.eq) goto loc_822E2708;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2708:
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
loc_822E270C:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822E2718"))) PPC_WEAK_FUNC(sub_822E2718);
PPC_FUNC_IMPL(__imp__sub_822E2718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7688
	r11.s64 = r11.s64 + -7688;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7688
	ctx.r10.s64 = ctx.r10.s64 + -7688;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E2740"))) PPC_WEAK_FUNC(sub_822E2740);
PPC_FUNC_IMPL(__imp__sub_822E2740) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-25680(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25680);
	// mflr r12
	// bl 0x8239bcec
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r4,160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 160);
	// bl 0x822bb728
	sub_822BB728(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// fabs f30,f0
	f30.u64 = f0.u64 & ~0x8000000000000000;
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x822d6260
	sub_822D6260(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822c9338
	sub_822C9338(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x822c6c28
	sub_822C6C28(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82695a90
	sub_82695A90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e2348
	sub_822E2348(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// lbz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 12);
	// li r26,1
	r26.s64 = 1;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_822E2804:
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822e2820
	if (!cr0.eq) goto loc_822E2820;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// blt cr6,0x822e2804
	if (cr6.lt) goto loc_822E2804;
	// li r11,-1
	r11.s64 = -1;
loc_822E2820:
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r28,r11,-7684
	r28.s64 = r11.s64 + -7684;
	// lwz r10,-7676(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7676);
	// stw r8,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r8.u32);
	// clrlwi. r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x822e28d8
	if (!cr0.eq) goto loc_822E28D8;
	// ori r11,r10,1
	r11.u64 = ctx.r10.u64 | 1;
	// stw r11,-7676(r9)
	PPC_STORE_U32(ctx.r9.u32 + -7676, r11.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-25760
	ctx.r4.s64 = r11.s64 + -25760;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r31,104
	ctx.r7.s64 = r31.s64 + 104;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82145488
	sub_82145488(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e28a4
	if (cr0.eq) goto loc_822E28A4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E28A4:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e28b8
	if (cr0.eq) goto loc_822E28B8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E28B8:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e28cc
	if (cr0.eq) goto loc_822E28CC;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E28CC:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,15024
	ctx.r3.s64 = r11.s64 + 15024;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E28D8:
	// lbz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 12);
	// mr r11,r29
	r11.u64 = r29.u64;
loc_822E28E0:
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822e28fc
	if (!cr0.eq) goto loc_822E28FC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// blt cr6,0x822e28e0
	if (cr6.lt) goto loc_822E28E0;
	// li r11,-1
	r11.s64 = -1;
loc_822E28FC:
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
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
	// beq 0x822e292c
	if (cr0.eq) goto loc_822E292C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E292C:
	// lbz r11,13(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 13);
	// stw r29,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r29.u32);
	// rlwinm r11,r11,25,7,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2968
	if (cr0.eq) goto loc_822E2968;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2968:
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// stw r29,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r29.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e299c
	if (cr0.eq) goto loc_822E299C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E299C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
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
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e29dc
	if (cr0.eq) goto loc_822E29DC;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E29DC:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822E2748"))) PPC_WEAK_FUNC(sub_822E2748);
PPC_FUNC_IMPL(__imp__sub_822E2748) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r4,160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 160);
	// bl 0x822bb728
	sub_822BB728(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// fabs f30,f0
	f30.u64 = f0.u64 & ~0x8000000000000000;
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x822d6260
	sub_822D6260(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822c9338
	sub_822C9338(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x822c6c28
	sub_822C6C28(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82695a90
	sub_82695A90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e2348
	sub_822E2348(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// lbz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 12);
	// li r26,1
	r26.s64 = 1;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_822E2804:
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822e2820
	if (!cr0.eq) goto loc_822E2820;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// blt cr6,0x822e2804
	if (cr6.lt) goto loc_822E2804;
	// li r11,-1
	r11.s64 = -1;
loc_822E2820:
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r28,r11,-7684
	r28.s64 = r11.s64 + -7684;
	// lwz r10,-7676(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7676);
	// stw r8,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r8.u32);
	// clrlwi. r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x822e28d8
	if (!cr0.eq) goto loc_822E28D8;
	// ori r11,r10,1
	r11.u64 = ctx.r10.u64 | 1;
	// stw r11,-7676(r9)
	PPC_STORE_U32(ctx.r9.u32 + -7676, r11.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-25760
	ctx.r4.s64 = r11.s64 + -25760;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r31,104
	ctx.r7.s64 = r31.s64 + 104;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82145488
	sub_82145488(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e28a4
	if (cr0.eq) goto loc_822E28A4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E28A4:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e28b8
	if (cr0.eq) goto loc_822E28B8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E28B8:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e28cc
	if (cr0.eq) goto loc_822E28CC;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E28CC:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,15024
	ctx.r3.s64 = r11.s64 + 15024;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E28D8:
	// lbz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 12);
	// mr r11,r29
	r11.u64 = r29.u64;
loc_822E28E0:
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822e28fc
	if (!cr0.eq) goto loc_822E28FC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// blt cr6,0x822e28e0
	if (cr6.lt) goto loc_822E28E0;
	// li r11,-1
	r11.s64 = -1;
loc_822E28FC:
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
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
	// beq 0x822e292c
	if (cr0.eq) goto loc_822E292C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E292C:
	// lbz r11,13(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 13);
	// stw r29,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r29.u32);
	// rlwinm r11,r11,25,7,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2968
	if (cr0.eq) goto loc_822E2968;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2968:
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// stw r29,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r29.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e299c
	if (cr0.eq) goto loc_822E299C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E299C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
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
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e29dc
	if (cr0.eq) goto loc_822E29DC;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E29DC:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822E29EC"))) PPC_WEAK_FUNC(sub_822E29EC);
PPC_FUNC_IMPL(__imp__sub_822E29EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7676
	r11.s64 = r11.s64 + -7676;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7676
	ctx.r10.s64 = ctx.r10.s64 + -7676;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E2A14"))) PPC_WEAK_FUNC(sub_822E2A14);
PPC_FUNC_IMPL(__imp__sub_822E2A14) {
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

__attribute__((alias("__imp__sub_822E2A3C"))) PPC_WEAK_FUNC(sub_822E2A3C);
PPC_FUNC_IMPL(__imp__sub_822E2A3C) {
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

__attribute__((alias("__imp__sub_822E2A64"))) PPC_WEAK_FUNC(sub_822E2A64);
PPC_FUNC_IMPL(__imp__sub_822E2A64) {
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

__attribute__((alias("__imp__sub_822E2A8C"))) PPC_WEAK_FUNC(sub_822E2A8C);
PPC_FUNC_IMPL(__imp__sub_822E2A8C) {
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

__attribute__((alias("__imp__sub_822E2AB4"))) PPC_WEAK_FUNC(sub_822E2AB4);
PPC_FUNC_IMPL(__imp__sub_822E2AB4) {
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

__attribute__((alias("__imp__sub_822E2ADC"))) PPC_WEAK_FUNC(sub_822E2ADC);
PPC_FUNC_IMPL(__imp__sub_822E2ADC) {
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

__attribute__((alias("__imp__sub_822E2B04"))) PPC_WEAK_FUNC(sub_822E2B04);
PPC_FUNC_IMPL(__imp__sub_822E2B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E2B08"))) PPC_WEAK_FUNC(sub_822E2B08);
PPC_FUNC_IMPL(__imp__sub_822E2B08) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-25440(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25440);
	// mflr r12
	// bl 0x8239bce8
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82695a98
	sub_82695A98(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822c9478
	sub_822C9478(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e2348
	sub_822E2348(ctx, base);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,-7656(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -7656);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-7664
	r27.s64 = ctx.r10.s64 + -7664;
	// bne 0x822e2be4
	if (!cr0.eq) goto loc_822E2BE4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7656(r28)
	PPC_STORE_U32(r28.u32 + -7656, r11.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-25532
	ctx.r4.s64 = r11.s64 + -25532;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2bd8
	if (cr0.eq) goto loc_822E2BD8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2BD8:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,15088
	ctx.r3.s64 = r11.s64 + 15088;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E2BE4:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
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
	// beq 0x822e2c18
	if (cr0.eq) goto loc_822E2C18;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2C18:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
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
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2c58
	if (cr0.eq) goto loc_822E2C58;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2C58:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// lwz r4,160(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// bl 0x822bb728
	sub_822BB728(ctx, base);
	// lwz r11,-7656(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -7656);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r26,1
	r26.s64 = 1;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-7672
	r27.s64 = ctx.r10.s64 + -7672;
	// bne 0x822e2d28
	if (!cr0.eq) goto loc_822E2D28;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7656(r28)
	PPC_STORE_U32(r28.u32 + -7656, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r26,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r26.u32);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-25552
	ctx.r4.s64 = r11.s64 + -25552;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r31,120
	ctx.r7.s64 = r31.s64 + 120;
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82145488
	sub_82145488(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2cf4
	if (cr0.eq) goto loc_822E2CF4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2CF4:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2d08
	if (cr0.eq) goto loc_822E2D08;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2D08:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2d1c
	if (cr0.eq) goto loc_822E2D1C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2D1C:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,15056
	ctx.r3.s64 = r11.s64 + 15056;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E2D28:
	// stw r24,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r24.u32);
	// stw r29,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r29.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2d58
	if (cr0.eq) goto loc_822E2D58;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2D58:
	// lbz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 12);
	// mr r11,r29
	r11.u64 = r29.u64;
loc_822E2D60:
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822e2d7c
	if (!cr0.eq) goto loc_822E2D7C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// blt cr6,0x822e2d60
	if (cr6.lt) goto loc_822E2D60;
	// li r11,-1
	r11.s64 = -1;
loc_822E2D7C:
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// stw r29,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r29.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2dac
	if (cr0.eq) goto loc_822E2DAC;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2DAC:
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f0.f64 = double(temp.f32);
	// stw r26,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r26.u32);
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// stfs f0,144(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2de8
	if (cr0.eq) goto loc_822E2DE8;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2DE8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
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
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2e28
	if (cr0.eq) goto loc_822E2E28;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2E28:
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822E2B10"))) PPC_WEAK_FUNC(sub_822E2B10);
PPC_FUNC_IMPL(__imp__sub_822E2B10) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82695a98
	sub_82695A98(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822c9478
	sub_822C9478(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e2348
	sub_822E2348(ctx, base);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,-7656(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -7656);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-7664
	r27.s64 = ctx.r10.s64 + -7664;
	// bne 0x822e2be4
	if (!cr0.eq) goto loc_822E2BE4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7656(r28)
	PPC_STORE_U32(r28.u32 + -7656, r11.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-25532
	ctx.r4.s64 = r11.s64 + -25532;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2bd8
	if (cr0.eq) goto loc_822E2BD8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2BD8:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,15088
	ctx.r3.s64 = r11.s64 + 15088;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E2BE4:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
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
	// beq 0x822e2c18
	if (cr0.eq) goto loc_822E2C18;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2C18:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
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
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2c58
	if (cr0.eq) goto loc_822E2C58;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2C58:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// lwz r4,160(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// bl 0x822bb728
	sub_822BB728(ctx, base);
	// lwz r11,-7656(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -7656);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r26,1
	r26.s64 = 1;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-7672
	r27.s64 = ctx.r10.s64 + -7672;
	// bne 0x822e2d28
	if (!cr0.eq) goto loc_822E2D28;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7656(r28)
	PPC_STORE_U32(r28.u32 + -7656, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r26,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r26.u32);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-25552
	ctx.r4.s64 = r11.s64 + -25552;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r31,120
	ctx.r7.s64 = r31.s64 + 120;
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82145488
	sub_82145488(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2cf4
	if (cr0.eq) goto loc_822E2CF4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2CF4:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2d08
	if (cr0.eq) goto loc_822E2D08;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2D08:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2d1c
	if (cr0.eq) goto loc_822E2D1C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2D1C:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,15056
	ctx.r3.s64 = r11.s64 + 15056;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E2D28:
	// stw r24,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r24.u32);
	// stw r29,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r29.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2d58
	if (cr0.eq) goto loc_822E2D58;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2D58:
	// lbz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 12);
	// mr r11,r29
	r11.u64 = r29.u64;
loc_822E2D60:
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822e2d7c
	if (!cr0.eq) goto loc_822E2D7C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// blt cr6,0x822e2d60
	if (cr6.lt) goto loc_822E2D60;
	// li r11,-1
	r11.s64 = -1;
loc_822E2D7C:
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// stw r29,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r29.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2dac
	if (cr0.eq) goto loc_822E2DAC;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2DAC:
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f0.f64 = double(temp.f32);
	// stw r26,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r26.u32);
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// stfs f0,144(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2de8
	if (cr0.eq) goto loc_822E2DE8;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2DE8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
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
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e2e28
	if (cr0.eq) goto loc_822E2E28;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E2E28:
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822E2E34"))) PPC_WEAK_FUNC(sub_822E2E34);
PPC_FUNC_IMPL(__imp__sub_822E2E34) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7656
	r11.s64 = r11.s64 + -7656;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7656
	ctx.r10.s64 = ctx.r10.s64 + -7656;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E2E5C"))) PPC_WEAK_FUNC(sub_822E2E5C);
PPC_FUNC_IMPL(__imp__sub_822E2E5C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
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

__attribute__((alias("__imp__sub_822E2E84"))) PPC_WEAK_FUNC(sub_822E2E84);
PPC_FUNC_IMPL(__imp__sub_822E2E84) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
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

__attribute__((alias("__imp__sub_822E2EAC"))) PPC_WEAK_FUNC(sub_822E2EAC);
PPC_FUNC_IMPL(__imp__sub_822E2EAC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7656
	r11.s64 = r11.s64 + -7656;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7656
	ctx.r10.s64 = ctx.r10.s64 + -7656;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E2ED4"))) PPC_WEAK_FUNC(sub_822E2ED4);
PPC_FUNC_IMPL(__imp__sub_822E2ED4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
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

__attribute__((alias("__imp__sub_822E2EFC"))) PPC_WEAK_FUNC(sub_822E2EFC);
PPC_FUNC_IMPL(__imp__sub_822E2EFC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
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

__attribute__((alias("__imp__sub_822E2F24"))) PPC_WEAK_FUNC(sub_822E2F24);
PPC_FUNC_IMPL(__imp__sub_822E2F24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
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

__attribute__((alias("__imp__sub_822E2F4C"))) PPC_WEAK_FUNC(sub_822E2F4C);
PPC_FUNC_IMPL(__imp__sub_822E2F4C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
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

__attribute__((alias("__imp__sub_822E2F74"))) PPC_WEAK_FUNC(sub_822E2F74);
PPC_FUNC_IMPL(__imp__sub_822E2F74) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
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

__attribute__((alias("__imp__sub_822E2F9C"))) PPC_WEAK_FUNC(sub_822E2F9C);
PPC_FUNC_IMPL(__imp__sub_822E2F9C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
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

__attribute__((alias("__imp__sub_822E2FC4"))) PPC_WEAK_FUNC(sub_822E2FC4);
PPC_FUNC_IMPL(__imp__sub_822E2FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E2FC8"))) PPC_WEAK_FUNC(sub_822E2FC8);
PPC_FUNC_IMPL(__imp__sub_822E2FC8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-25240(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25240);
	// mflr r12
	// bl 0x8239bcfc
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// clrlwi. r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e30f0
	if (cr0.eq) goto loc_822E30F0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// bl 0x82695aa0
	sub_82695AA0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822c9498
	sub_822C9498(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-25260
	ctx.r4.s64 = r11.s64 + -25260;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-7564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7564);
	// bl 0x822a1b70
	sub_822A1B70(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e3058
	if (cr0.eq) goto loc_822E3058;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f3,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x822f1ef8
	sub_822F1EF8(ctx, base);
loc_822E3058:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e2348
	sub_822E2348(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-7644(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7644);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-7652
	r29.s64 = ctx.r9.s64 + -7652;
	// bne 0x822e30b0
	if (!cr0.eq) goto loc_822E30B0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7644, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-25280
	ctx.r4.s64 = r11.s64 + -25280;
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
	// addi r3,r11,15120
	ctx.r3.s64 = r11.s64 + 15120;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E30B0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x822e30f0
	if (cr0.eq) goto loc_822E30F0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E30F0:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822E2FD0"))) PPC_WEAK_FUNC(sub_822E2FD0);
PPC_FUNC_IMPL(__imp__sub_822E2FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// clrlwi. r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e30f0
	if (cr0.eq) goto loc_822E30F0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// bl 0x82695aa0
	sub_82695AA0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822c9498
	sub_822C9498(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-25260
	ctx.r4.s64 = r11.s64 + -25260;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-7564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7564);
	// bl 0x822a1b70
	sub_822A1B70(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e3058
	if (cr0.eq) goto loc_822E3058;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f3,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x822f1ef8
	sub_822F1EF8(ctx, base);
loc_822E3058:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e2348
	sub_822E2348(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-7644(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7644);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-7652
	r29.s64 = ctx.r9.s64 + -7652;
	// bne 0x822e30b0
	if (!cr0.eq) goto loc_822E30B0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7644, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-25280
	ctx.r4.s64 = r11.s64 + -25280;
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
	// addi r3,r11,15120
	ctx.r3.s64 = r11.s64 + 15120;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E30B0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x822e30f0
	if (cr0.eq) goto loc_822E30F0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E30F0:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822E30FC"))) PPC_WEAK_FUNC(sub_822E30FC);
PPC_FUNC_IMPL(__imp__sub_822E30FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7644
	r11.s64 = r11.s64 + -7644;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7644
	ctx.r10.s64 = ctx.r10.s64 + -7644;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E3124"))) PPC_WEAK_FUNC(sub_822E3124);
PPC_FUNC_IMPL(__imp__sub_822E3124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E3128"))) PPC_WEAK_FUNC(sub_822E3128);
PPC_FUNC_IMPL(__imp__sub_822E3128) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82695b90
	sub_82695B90(ctx, base);
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

__attribute__((alias("__imp__sub_822E3170"))) PPC_WEAK_FUNC(sub_822E3170);
PPC_FUNC_IMPL(__imp__sub_822E3170) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82695b90
	sub_82695B90(ctx, base);
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

__attribute__((alias("__imp__sub_822E31B8"))) PPC_WEAK_FUNC(sub_822E31B8);
PPC_FUNC_IMPL(__imp__sub_822E31B8) {
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
	// lwz r16,-25160(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25160);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-7632(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7632);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7640
	r30.s64 = ctx.r9.s64 + -7640;
	// bne 0x822e3220
	if (!cr0.eq) goto loc_822E3220;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7632, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-25176
	ctx.r4.s64 = r11.s64 + -25176;
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
	// addi r3,r11,15152
	ctx.r3.s64 = r11.s64 + 15152;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E3220:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x822e3260
	if (cr0.eq) goto loc_822E3260;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E3260:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822E31C0"))) PPC_WEAK_FUNC(sub_822E31C0);
PPC_FUNC_IMPL(__imp__sub_822E31C0) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-7632(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7632);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7640
	r30.s64 = ctx.r9.s64 + -7640;
	// bne 0x822e3220
	if (!cr0.eq) goto loc_822E3220;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7632, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-25176
	ctx.r4.s64 = r11.s64 + -25176;
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
	// addi r3,r11,15152
	ctx.r3.s64 = r11.s64 + 15152;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E3220:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x822e3260
	if (cr0.eq) goto loc_822E3260;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E3260:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822E3268"))) PPC_WEAK_FUNC(sub_822E3268);
PPC_FUNC_IMPL(__imp__sub_822E3268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7632
	r11.s64 = r11.s64 + -7632;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7632
	ctx.r10.s64 = ctx.r10.s64 + -7632;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E3290"))) PPC_WEAK_FUNC(sub_822E3290);
PPC_FUNC_IMPL(__imp__sub_822E3290) {
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
	// lwz r16,-25072(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25072);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-7620(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7620);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7628
	r30.s64 = ctx.r9.s64 + -7628;
	// bne 0x822e32f8
	if (!cr0.eq) goto loc_822E32F8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7620, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-25096
	ctx.r4.s64 = r11.s64 + -25096;
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
	// addi r3,r11,15184
	ctx.r3.s64 = r11.s64 + 15184;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E32F8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x822e3338
	if (cr0.eq) goto loc_822E3338;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E3338:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822E3298"))) PPC_WEAK_FUNC(sub_822E3298);
PPC_FUNC_IMPL(__imp__sub_822E3298) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-7620(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7620);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7628
	r30.s64 = ctx.r9.s64 + -7628;
	// bne 0x822e32f8
	if (!cr0.eq) goto loc_822E32F8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7620, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-25096
	ctx.r4.s64 = r11.s64 + -25096;
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
	// addi r3,r11,15184
	ctx.r3.s64 = r11.s64 + 15184;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E32F8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x822e3338
	if (cr0.eq) goto loc_822E3338;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E3338:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822E3340"))) PPC_WEAK_FUNC(sub_822E3340);
PPC_FUNC_IMPL(__imp__sub_822E3340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7620
	r11.s64 = r11.s64 + -7620;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7620
	ctx.r10.s64 = ctx.r10.s64 + -7620;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E3368"))) PPC_WEAK_FUNC(sub_822E3368);
PPC_FUNC_IMPL(__imp__sub_822E3368) {
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
	// lwz r16,-24992(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24992);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-7608(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7608);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7616
	r30.s64 = ctx.r9.s64 + -7616;
	// bne 0x822e33d0
	if (!cr0.eq) goto loc_822E33D0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7608, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-25008
	ctx.r4.s64 = r11.s64 + -25008;
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
	// addi r3,r11,15216
	ctx.r3.s64 = r11.s64 + 15216;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E33D0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x822e3410
	if (cr0.eq) goto loc_822E3410;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E3410:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822E3370"))) PPC_WEAK_FUNC(sub_822E3370);
PPC_FUNC_IMPL(__imp__sub_822E3370) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-7608(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7608);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7616
	r30.s64 = ctx.r9.s64 + -7616;
	// bne 0x822e33d0
	if (!cr0.eq) goto loc_822E33D0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7608, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-25008
	ctx.r4.s64 = r11.s64 + -25008;
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
	// addi r3,r11,15216
	ctx.r3.s64 = r11.s64 + 15216;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_822E33D0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq 0x822e3410
	if (cr0.eq) goto loc_822E3410;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822E3410:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822E3418"))) PPC_WEAK_FUNC(sub_822E3418);
PPC_FUNC_IMPL(__imp__sub_822E3418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7608
	r11.s64 = r11.s64 + -7608;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7608
	ctx.r10.s64 = ctx.r10.s64 + -7608;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E3440"))) PPC_WEAK_FUNC(sub_822E3440);
PPC_FUNC_IMPL(__imp__sub_822E3440) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x822c9588
	sub_822C9588(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82695aa8
	sub_82695AA8(ctx, base);
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

__attribute__((alias("__imp__sub_822E34AC"))) PPC_WEAK_FUNC(sub_822E34AC);
PPC_FUNC_IMPL(__imp__sub_822E34AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E34B0"))) PPC_WEAK_FUNC(sub_822E34B0);
PPC_FUNC_IMPL(__imp__sub_822E34B0) {
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
	// blt cr6,0x822e34f8
	if (cr6.lt) goto loc_822E34F8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_822E34F8:
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
	// bl 0x822e2160
	sub_822E2160(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x822e3530
	if (cr0.eq) goto loc_822E3530;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_822E3530:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x822e3550
	if (cr6.eq) goto loc_822E3550;
loc_822E353C:
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
	// bne 0x822e353c
	if (!cr0.eq) goto loc_822E353C;
loc_822E3550:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x822e3578
	if (!cr0.eq) goto loc_822E3578;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x822e3578
	if (cr0.eq) goto loc_822E3578;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_822E3578:
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

__attribute__((alias("__imp__sub_822E35AC"))) PPC_WEAK_FUNC(sub_822E35AC);
PPC_FUNC_IMPL(__imp__sub_822E35AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E35B0"))) PPC_WEAK_FUNC(sub_822E35B0);
PPC_FUNC_IMPL(__imp__sub_822E35B0) {
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
	// bl 0x822e2160
	sub_822E2160(ctx, base);
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

__attribute__((alias("__imp__sub_822E35F0"))) PPC_WEAK_FUNC(sub_822E35F0);
PPC_FUNC_IMPL(__imp__sub_822E35F0) {
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
	// beq cr6,0x822e3630
	if (cr6.eq) goto loc_822E3630;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822e3620
	if (cr0.eq) goto loc_822E3620;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_822E3620:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x822e3644
	goto loc_822E3644;
loc_822E3630:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x822e34b0
	sub_822E34B0(ctx, base);
loc_822E3644:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E3654"))) PPC_WEAK_FUNC(sub_822E3654);
PPC_FUNC_IMPL(__imp__sub_822E3654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E3658"))) PPC_WEAK_FUNC(sub_822E3658);
PPC_FUNC_IMPL(__imp__sub_822E3658) {
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
	// beq cr6,0x822e36a0
	if (cr6.eq) goto loc_822E36A0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x822e3698
	if (cr0.eq) goto loc_822E3698;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x822e369c
	goto loc_822E369C;
loc_822E3698:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_822E369C:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822E36A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822E36AC"))) PPC_WEAK_FUNC(sub_822E36AC);
PPC_FUNC_IMPL(__imp__sub_822E36AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E36B0"))) PPC_WEAK_FUNC(sub_822E36B0);
PPC_FUNC_IMPL(__imp__sub_822E36B0) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-24912(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24912);
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,-7600(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7600);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7604
	r30.s64 = ctx.r9.s64 + -7604;
	// bne 0x822e3708
	if (!cr0.eq) goto loc_822E3708;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7600, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,12292
	ctx.r4.s64 = r11.s64 + 12292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E3708:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,-9608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822e37e0
	if (!cr0.eq) goto loc_822E37E0;
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
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x8233cc20
	sub_8233CC20(ctx, base);
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
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
	// beq 0x822e37d8
	if (cr0.eq) goto loc_822E37D8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi r28,r28,24
	r28.u64 = r28.u32 & 0xFF;
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
loc_822E3784:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x822e3794
	if (cr6.eq) goto loc_822E3794;
	// lfs f31,72(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 72);
	f31.f64 = double(temp.f32);
	// b 0x822e3798
	goto loc_822E3798;
loc_822E3794:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
loc_822E3798:
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x8233cbc0
	sub_8233CBC0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
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
	// bne 0x822e3784
	if (!cr0.eq) goto loc_822E3784;
loc_822E37D8:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
loc_822E37E0:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822E36B8"))) PPC_WEAK_FUNC(sub_822E36B8);
PPC_FUNC_IMPL(__imp__sub_822E36B8) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,-7600(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7600);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-7604
	r30.s64 = ctx.r9.s64 + -7604;
	// bne 0x822e3708
	if (!cr0.eq) goto loc_822E3708;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7600, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,12292
	ctx.r4.s64 = r11.s64 + 12292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E3708:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,-9608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822e37e0
	if (!cr0.eq) goto loc_822E37E0;
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
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x8233cc20
	sub_8233CC20(ctx, base);
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
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
	// beq 0x822e37d8
	if (cr0.eq) goto loc_822E37D8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi r28,r28,24
	r28.u64 = r28.u32 & 0xFF;
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
loc_822E3784:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x822e3794
	if (cr6.eq) goto loc_822E3794;
	// lfs f31,72(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 72);
	f31.f64 = double(temp.f32);
	// b 0x822e3798
	goto loc_822E3798;
loc_822E3794:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
loc_822E3798:
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x8233cbc0
	sub_8233CBC0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
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
	// bne 0x822e3784
	if (!cr0.eq) goto loc_822E3784;
loc_822E37D8:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
loc_822E37E0:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822E37F0"))) PPC_WEAK_FUNC(sub_822E37F0);
PPC_FUNC_IMPL(__imp__sub_822E37F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7600
	r11.s64 = r11.s64 + -7600;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7600
	ctx.r10.s64 = ctx.r10.s64 + -7600;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E3818"))) PPC_WEAK_FUNC(sub_822E3818);
PPC_FUNC_IMPL(__imp__sub_822E3818) {
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
	// bl 0x821beeb8
	sub_821BEEB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E3840"))) PPC_WEAK_FUNC(sub_822E3840);
PPC_FUNC_IMPL(__imp__sub_822E3840) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822e36b8
	sub_822E36B8(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r3,-9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x822e3890
	if (cr6.eq) goto loc_822E3890;
	// lwz r3,-9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -9608);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x822d25a8
	sub_822D25A8(ctx, base);
loc_822E3890:
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

__attribute__((alias("__imp__sub_822E38A8"))) PPC_WEAK_FUNC(sub_822E38A8);
PPC_FUNC_IMPL(__imp__sub_822E38A8) {
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
	// lwz r16,-24648(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24648);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-7568(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7568);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7572
	r29.s64 = ctx.r10.s64 + -7572;
	// bne 0x822e3918
	if (!cr0.eq) goto loc_822E3918;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7568(r30)
	PPC_STORE_U32(r30.u32 + -7568, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24732
	ctx.r4.s64 = r11.s64 + -24732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7568(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7568);
loc_822E3918:
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
	// beq 0x822e3944
	if (cr0.eq) goto loc_822E3944;
	// lbz r11,-32(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + -32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822e3c0c
	goto loc_822E3C0C;
loc_822E3944:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7576
	r29.s64 = ctx.r10.s64 + -7576;
	// bne 0x822e3970
	if (!cr0.eq) goto loc_822E3970;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7568(r30)
	PPC_STORE_U32(r30.u32 + -7568, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24748
	ctx.r4.s64 = r11.s64 + -24748;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7568(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7568);
loc_822E3970:
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
	// beq 0x822e39b0
	if (cr0.eq) goto loc_822E39B0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
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
	// stb r11,-32(r25)
	PPC_STORE_U8(r25.u32 + -32, r11.u8);
loc_822E39A8:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x822e3c04
	goto loc_822E3C04;
loc_822E39B0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7580
	r29.s64 = ctx.r10.s64 + -7580;
	// bne 0x822e39dc
	if (!cr0.eq) goto loc_822E39DC;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-7568(r30)
	PPC_STORE_U32(r30.u32 + -7568, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24760
	ctx.r4.s64 = r11.s64 + -24760;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7568(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7568);
loc_822E39DC:
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
	// beq 0x822e3a0c
	if (cr0.eq) goto loc_822E3A0C;
	// lwz r3,-40(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -40);
	// bl 0x8233ad80
	sub_8233AD80(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822e3c08
	goto loc_822E3C08;
loc_822E3A0C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7584
	r29.s64 = ctx.r10.s64 + -7584;
	// bne 0x822e3a38
	if (!cr0.eq) goto loc_822E3A38;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-7568(r30)
	PPC_STORE_U32(r30.u32 + -7568, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24776
	ctx.r4.s64 = r11.s64 + -24776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7568(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7568);
loc_822E3A38:
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
	// beq 0x822e3a7c
	if (cr0.eq) goto loc_822E3A7C;
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
	// lwz r3,-40(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -40);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x8233ade8
	sub_8233ADE8(ctx, base);
	// b 0x822e39a8
	goto loc_822E39A8;
loc_822E3A7C:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7588
	r29.s64 = ctx.r10.s64 + -7588;
	// bne 0x822e3aa8
	if (!cr0.eq) goto loc_822E3AA8;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-7568(r30)
	PPC_STORE_U32(r30.u32 + -7568, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24796
	ctx.r4.s64 = r11.s64 + -24796;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7568(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7568);
loc_822E3AA8:
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
	// beq 0x822e3acc
	if (cr0.eq) goto loc_822E3ACC;
	// addi r3,r25,-84
	ctx.r3.s64 = r25.s64 + -84;
	// bl 0x822e3840
	sub_822E3840(ctx, base);
	// b 0x822e39a8
	goto loc_822E39A8;
loc_822E3ACC:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7592
	r29.s64 = ctx.r10.s64 + -7592;
	// bne 0x822e3af8
	if (!cr0.eq) goto loc_822E3AF8;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-7568(r30)
	PPC_STORE_U32(r30.u32 + -7568, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24816
	ctx.r4.s64 = r11.s64 + -24816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7568(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7568);
loc_822E3AF8:
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
	// beq 0x822e3b20
	if (cr0.eq) goto loc_822E3B20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r25,-84
	ctx.r3.s64 = r25.s64 + -84;
	// bl 0x822e36b8
	sub_822E36B8(ctx, base);
	// b 0x822e39a8
	goto loc_822E39A8;
loc_822E3B20:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7596
	r29.s64 = ctx.r10.s64 + -7596;
	// bne 0x822e3b48
	if (!cr0.eq) goto loc_822E3B48;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-7568(r30)
	PPC_STORE_U32(r30.u32 + -7568, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24840
	ctx.r4.s64 = r11.s64 + -24840;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E3B48:
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
	// beq 0x822e3b6c
	if (cr0.eq) goto loc_822E3B6C;
	// addi r3,r25,-84
	ctx.r3.s64 = r25.s64 + -84;
	// bl 0x822e2490
	sub_822E2490(ctx, base);
	// b 0x822e39a8
	goto loc_822E39A8;
loc_822E3B6C:
	// lwz r11,-80(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -80);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// addi r4,r11,-80
	ctx.r4.s64 = r11.s64 + -80;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822e3bbc
	if (cr6.eq) goto loc_822E3BBC;
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
	// beq 0x822e3c08
	if (cr0.eq) goto loc_822E3C08;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_822E3BB4:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822e3c08
	goto loc_822E3C08;
loc_822E3BBC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r25,-52
	ctx.r4.s64 = r25.s64 + -52;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823267b8
	sub_823267B8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822e3bfc
	if (cr6.eq) goto loc_822E3BFC;
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
	// beq 0x822e3c08
	if (cr0.eq) goto loc_822E3C08;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822e3bb4
	goto loc_822E3BB4;
loc_822E3BFC:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822E3C04:
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
loc_822E3C08:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822E3C0C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822E38B0"))) PPC_WEAK_FUNC(sub_822E38B0);
PPC_FUNC_IMPL(__imp__sub_822E38B0) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-7568(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7568);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7572
	r29.s64 = ctx.r10.s64 + -7572;
	// bne 0x822e3918
	if (!cr0.eq) goto loc_822E3918;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-7568(r30)
	PPC_STORE_U32(r30.u32 + -7568, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24732
	ctx.r4.s64 = r11.s64 + -24732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7568(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7568);
loc_822E3918:
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
	// beq 0x822e3944
	if (cr0.eq) goto loc_822E3944;
	// lbz r11,-32(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + -32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822e3c0c
	goto loc_822E3C0C;
loc_822E3944:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7576
	r29.s64 = ctx.r10.s64 + -7576;
	// bne 0x822e3970
	if (!cr0.eq) goto loc_822E3970;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-7568(r30)
	PPC_STORE_U32(r30.u32 + -7568, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24748
	ctx.r4.s64 = r11.s64 + -24748;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7568(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7568);
loc_822E3970:
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
	// beq 0x822e39b0
	if (cr0.eq) goto loc_822E39B0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
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
	// stb r11,-32(r25)
	PPC_STORE_U8(r25.u32 + -32, r11.u8);
loc_822E39A8:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x822e3c04
	goto loc_822E3C04;
loc_822E39B0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7580
	r29.s64 = ctx.r10.s64 + -7580;
	// bne 0x822e39dc
	if (!cr0.eq) goto loc_822E39DC;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-7568(r30)
	PPC_STORE_U32(r30.u32 + -7568, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24760
	ctx.r4.s64 = r11.s64 + -24760;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7568(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7568);
loc_822E39DC:
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
	// beq 0x822e3a0c
	if (cr0.eq) goto loc_822E3A0C;
	// lwz r3,-40(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -40);
	// bl 0x8233ad80
	sub_8233AD80(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822e3c08
	goto loc_822E3C08;
loc_822E3A0C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7584
	r29.s64 = ctx.r10.s64 + -7584;
	// bne 0x822e3a38
	if (!cr0.eq) goto loc_822E3A38;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-7568(r30)
	PPC_STORE_U32(r30.u32 + -7568, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24776
	ctx.r4.s64 = r11.s64 + -24776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7568(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7568);
loc_822E3A38:
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
	// beq 0x822e3a7c
	if (cr0.eq) goto loc_822E3A7C;
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
	// lwz r3,-40(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -40);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x8233ade8
	sub_8233ADE8(ctx, base);
	// b 0x822e39a8
	goto loc_822E39A8;
loc_822E3A7C:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7588
	r29.s64 = ctx.r10.s64 + -7588;
	// bne 0x822e3aa8
	if (!cr0.eq) goto loc_822E3AA8;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-7568(r30)
	PPC_STORE_U32(r30.u32 + -7568, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24796
	ctx.r4.s64 = r11.s64 + -24796;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7568(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7568);
loc_822E3AA8:
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
	// beq 0x822e3acc
	if (cr0.eq) goto loc_822E3ACC;
	// addi r3,r25,-84
	ctx.r3.s64 = r25.s64 + -84;
	// bl 0x822e3840
	sub_822E3840(ctx, base);
	// b 0x822e39a8
	goto loc_822E39A8;
loc_822E3ACC:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7592
	r29.s64 = ctx.r10.s64 + -7592;
	// bne 0x822e3af8
	if (!cr0.eq) goto loc_822E3AF8;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-7568(r30)
	PPC_STORE_U32(r30.u32 + -7568, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24816
	ctx.r4.s64 = r11.s64 + -24816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-7568(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7568);
loc_822E3AF8:
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
	// beq 0x822e3b20
	if (cr0.eq) goto loc_822E3B20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r25,-84
	ctx.r3.s64 = r25.s64 + -84;
	// bl 0x822e36b8
	sub_822E36B8(ctx, base);
	// b 0x822e39a8
	goto loc_822E39A8;
loc_822E3B20:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-7596
	r29.s64 = ctx.r10.s64 + -7596;
	// bne 0x822e3b48
	if (!cr0.eq) goto loc_822E3B48;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-7568(r30)
	PPC_STORE_U32(r30.u32 + -7568, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24840
	ctx.r4.s64 = r11.s64 + -24840;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822E3B48:
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
	// beq 0x822e3b6c
	if (cr0.eq) goto loc_822E3B6C;
	// addi r3,r25,-84
	ctx.r3.s64 = r25.s64 + -84;
	// bl 0x822e2490
	sub_822E2490(ctx, base);
	// b 0x822e39a8
	goto loc_822E39A8;
loc_822E3B6C:
	// lwz r11,-80(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -80);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// addi r4,r11,-80
	ctx.r4.s64 = r11.s64 + -80;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822e3bbc
	if (cr6.eq) goto loc_822E3BBC;
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
	// beq 0x822e3c08
	if (cr0.eq) goto loc_822E3C08;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_822E3BB4:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822e3c08
	goto loc_822E3C08;
loc_822E3BBC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r25,-52
	ctx.r4.s64 = r25.s64 + -52;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823267b8
	sub_823267B8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822e3bfc
	if (cr6.eq) goto loc_822E3BFC;
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
	// beq 0x822e3c08
	if (cr0.eq) goto loc_822E3C08;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822e3bb4
	goto loc_822E3BB4;
loc_822E3BFC:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822E3C04:
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
loc_822E3C08:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822E3C0C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822E3C14"))) PPC_WEAK_FUNC(sub_822E3C14);
PPC_FUNC_IMPL(__imp__sub_822E3C14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7568
	r11.s64 = r11.s64 + -7568;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7568
	ctx.r10.s64 = ctx.r10.s64 + -7568;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E3C3C"))) PPC_WEAK_FUNC(sub_822E3C3C);
PPC_FUNC_IMPL(__imp__sub_822E3C3C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7568
	r11.s64 = r11.s64 + -7568;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7568
	ctx.r10.s64 = ctx.r10.s64 + -7568;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E3C64"))) PPC_WEAK_FUNC(sub_822E3C64);
PPC_FUNC_IMPL(__imp__sub_822E3C64) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7568
	r11.s64 = r11.s64 + -7568;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7568
	ctx.r10.s64 = ctx.r10.s64 + -7568;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E3C8C"))) PPC_WEAK_FUNC(sub_822E3C8C);
PPC_FUNC_IMPL(__imp__sub_822E3C8C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7568
	r11.s64 = r11.s64 + -7568;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7568
	ctx.r10.s64 = ctx.r10.s64 + -7568;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E3CB4"))) PPC_WEAK_FUNC(sub_822E3CB4);
PPC_FUNC_IMPL(__imp__sub_822E3CB4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7568
	r11.s64 = r11.s64 + -7568;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7568
	ctx.r10.s64 = ctx.r10.s64 + -7568;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E3CDC"))) PPC_WEAK_FUNC(sub_822E3CDC);
PPC_FUNC_IMPL(__imp__sub_822E3CDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7568
	r11.s64 = r11.s64 + -7568;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7568
	ctx.r10.s64 = ctx.r10.s64 + -7568;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E3D04"))) PPC_WEAK_FUNC(sub_822E3D04);
PPC_FUNC_IMPL(__imp__sub_822E3D04) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-7568
	r11.s64 = r11.s64 + -7568;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-7568
	ctx.r10.s64 = ctx.r10.s64 + -7568;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E3D2C"))) PPC_WEAK_FUNC(sub_822E3D2C);
PPC_FUNC_IMPL(__imp__sub_822E3D2C) {
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

__attribute__((alias("__imp__sub_822E3D54"))) PPC_WEAK_FUNC(sub_822E3D54);
PPC_FUNC_IMPL(__imp__sub_822E3D54) {
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

__attribute__((alias("__imp__sub_822E3D7C"))) PPC_WEAK_FUNC(sub_822E3D7C);
PPC_FUNC_IMPL(__imp__sub_822E3D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E3D80"))) PPC_WEAK_FUNC(sub_822E3D80);
PPC_FUNC_IMPL(__imp__sub_822E3D80) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-24440(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24440);
	// mflr r12
	// bl 0x8239bcf0
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x8233cbc0
	sub_8233CBC0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-24464
	ctx.r4.s64 = r11.s64 + -24464;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-7564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7564);
	// bl 0x822e2398
	sub_822E2398(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r4,r11,12292
	ctx.r4.s64 = r11.s64 + 12292;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,-9608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r27,r3,24
	r27.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x822e3e0c
	if (cr0.eq) goto loc_822E3E0C;
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x822e3e08
	if (!cr6.eq) goto loc_822E3E08;
	// bl 0x822e2100
	sub_822E2100(ctx, base);
	// stw r3,76(r30)
	PPC_STORE_U32(r30.u32 + 76, ctx.r3.u32);
loc_822E3E08:
	// lwz r26,76(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 76);
loc_822E3E0C:
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x8233cc20
	sub_8233CC20(ctx, base);
	// lwz r28,88(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
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
	// beq 0x822e3f04
	if (cr0.eq) goto loc_822E3F04;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f30,-27416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27416);
	f30.f64 = double(temp.f32);
	// lfs f31,-26880(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26880);
	f31.f64 = double(temp.f32);
loc_822E3E6C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x822e3ea8
	if (cr6.eq) goto loc_822E3EA8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822E3EA8:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822f8898
	sub_822F8898(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822f8900
	sub_822F8900(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x822f8918
	sub_822F8918(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
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
	// bne 0x822e3e6c
	if (!cr0.eq) goto loc_822E3E6C;
loc_822E3F04:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e36b8
	sub_822E36B8(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822E3D88"))) PPC_WEAK_FUNC(sub_822E3D88);
PPC_FUNC_IMPL(__imp__sub_822E3D88) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x8233cbc0
	sub_8233CBC0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-24464
	ctx.r4.s64 = r11.s64 + -24464;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-7564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7564);
	// bl 0x822e2398
	sub_822E2398(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r4,r11,12292
	ctx.r4.s64 = r11.s64 + 12292;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,-9608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r27,r3,24
	r27.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x822e3e0c
	if (cr0.eq) goto loc_822E3E0C;
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x822e3e08
	if (!cr6.eq) goto loc_822E3E08;
	// bl 0x822e2100
	sub_822E2100(ctx, base);
	// stw r3,76(r30)
	PPC_STORE_U32(r30.u32 + 76, ctx.r3.u32);
loc_822E3E08:
	// lwz r26,76(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 76);
loc_822E3E0C:
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x8233cc20
	sub_8233CC20(ctx, base);
	// lwz r28,88(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
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
	// beq 0x822e3f04
	if (cr0.eq) goto loc_822E3F04;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f30,-27416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27416);
	f30.f64 = double(temp.f32);
	// lfs f31,-26880(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26880);
	f31.f64 = double(temp.f32);
loc_822E3E6C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x822e3ea8
	if (cr6.eq) goto loc_822E3EA8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822E3EA8:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822f8898
	sub_822F8898(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822f8900
	sub_822F8900(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x822f8918
	sub_822F8918(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
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
	// bne 0x822e3e6c
	if (!cr0.eq) goto loc_822E3E6C;
loc_822E3F04:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e36b8
	sub_822E36B8(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822E3F28"))) PPC_WEAK_FUNC(sub_822E3F28);
PPC_FUNC_IMPL(__imp__sub_822E3F28) {
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
	// bl 0x821beeb8
	sub_821BEEB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E3F50"))) PPC_WEAK_FUNC(sub_822E3F50);
PPC_FUNC_IMPL(__imp__sub_822E3F50) {
	PPC_FUNC_PROLOGUE();
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stw r9,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8233a8b0
	sub_8233A8B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e1e10
	sub_822E1E10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e36b8
	sub_822E36B8(ctx, base);
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

__attribute__((alias("__imp__sub_822E3FC0"))) PPC_WEAK_FUNC(sub_822E3FC0);
PPC_FUNC_IMPL(__imp__sub_822E3FC0) {
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
	// bge cr6,0x822e4078
	if (!cr6.lt) goto loc_822E4078;
	// lis r11,16383
	r11.s64 = 1073676288;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x822e400c
	if (!cr6.gt) goto loc_822E400C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_822E400C:
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
	// beq cr6,0x822e404c
	if (cr6.eq) goto loc_822E404C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e35b0
	sub_822E35B0(ctx, base);
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
	// b 0x822e405c
	goto loc_822E405C;
loc_822E404C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e2160
	sub_822E2160(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822E405C:
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
loc_822E4078:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822E4080"))) PPC_WEAK_FUNC(sub_822E4080);
PPC_FUNC_IMPL(__imp__sub_822E4080) {
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
	// bl 0x822e2438
	sub_822E2438(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822e3658
	sub_822E3658(ctx, base);
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

__attribute__((alias("__imp__sub_822E40D4"))) PPC_WEAK_FUNC(sub_822E40D4);
PPC_FUNC_IMPL(__imp__sub_822E40D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E40D8"))) PPC_WEAK_FUNC(sub_822E40D8);
PPC_FUNC_IMPL(__imp__sub_822E40D8) {
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
	// lwz r16,-24344(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24344);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// stw r28,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r28.u32);
	// stw r25,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r25.u32);
	// stw r25,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r25.u32);
	// stw r25,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r25.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x822e3fc0
	sub_822E3FC0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r27,r25
	r27.u64 = r25.u64;
	// addi r26,r11,-24376
	r26.s64 = r11.s64 + -24376;
loc_822E411C:
	// mr r30,r25
	r30.u64 = r25.u64;
loc_822E4120:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x822e4168
	if (cr0.eq) goto loc_822E4168;
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82162308
	sub_82162308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x822e416c
	goto loc_822E416C;
loc_822E4168:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_822E416C:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x822e35f0
	sub_822E35F0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(r30.s32, 5, xer);
	// blt cr6,0x822e4120
	if (cr6.lt) goto loc_822E4120;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// blt cr6,0x822e411c
	if (cr6.lt) goto loc_822E411C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822E40E0"))) PPC_WEAK_FUNC(sub_822E40E0);
PPC_FUNC_IMPL(__imp__sub_822E40E0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// stw r28,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r28.u32);
	// stw r25,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r25.u32);
	// stw r25,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r25.u32);
	// stw r25,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r25.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x822e3fc0
	sub_822E3FC0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r27,r25
	r27.u64 = r25.u64;
	// addi r26,r11,-24376
	r26.s64 = r11.s64 + -24376;
loc_822E411C:
	// mr r30,r25
	r30.u64 = r25.u64;
loc_822E4120:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x822e4168
	if (cr0.eq) goto loc_822E4168;
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82162308
	sub_82162308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x822e416c
	goto loc_822E416C;
loc_822E4168:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_822E416C:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x822e35f0
	sub_822E35F0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(r30.s32, 5, xer);
	// blt cr6,0x822e4120
	if (cr6.lt) goto loc_822E4120;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// blt cr6,0x822e411c
	if (cr6.lt) goto loc_822E411C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822E41A0"))) PPC_WEAK_FUNC(sub_822E41A0);
PPC_FUNC_IMPL(__imp__sub_822E41A0) {
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

__attribute__((alias("__imp__sub_822E41C8"))) PPC_WEAK_FUNC(sub_822E41C8);
PPC_FUNC_IMPL(__imp__sub_822E41C8) {
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

__attribute__((alias("__imp__sub_822E41F0"))) PPC_WEAK_FUNC(sub_822E41F0);
PPC_FUNC_IMPL(__imp__sub_822E41F0) {
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
	// lwz r16,-24272(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24272);
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
	// bl 0x822e4080
	sub_822E4080(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822e423c
	if (cr0.eq) goto loc_822E423C;
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
loc_822E423C:
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

__attribute__((alias("__imp__sub_822E41F8"))) PPC_WEAK_FUNC(sub_822E41F8);
PPC_FUNC_IMPL(__imp__sub_822E41F8) {
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
	// bl 0x822e4080
	sub_822E4080(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822e423c
	if (cr0.eq) goto loc_822E423C;
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
loc_822E423C:
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

__attribute__((alias("__imp__sub_822E4254"))) PPC_WEAK_FUNC(sub_822E4254);
PPC_FUNC_IMPL(__imp__sub_822E4254) {
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

__attribute__((alias("__imp__sub_822E427C"))) PPC_WEAK_FUNC(sub_822E427C);
PPC_FUNC_IMPL(__imp__sub_822E427C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E4280"))) PPC_WEAK_FUNC(sub_822E4280);
PPC_FUNC_IMPL(__imp__sub_822E4280) {
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
	// lwz r16,-24032(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24032);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-24148
	r11.s64 = r11.s64 + -24148;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r10,r10,-24212
	ctx.r10.s64 = ctx.r10.s64 + -24212;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-80
	ctx.r10.s64 = r11.s64 + -80;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e42f8
	if (cr0.eq) goto loc_822E42F8;
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
loc_822E42F8:
	// li r28,0
	r28.s64 = 0;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r28.u32);
	// beq 0x822e4320
	if (cr0.eq) goto loc_822E4320;
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
loc_822E4320:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r28,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e4344
	if (cr0.eq) goto loc_822E4344;
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
loc_822E4344:
	// lwz r27,56(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x822e4364
	if (cr0.eq) goto loc_822E4364;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e41f8
	sub_822E41F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822E4364:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r28,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e4388
	if (cr0.eq) goto loc_822E4388;
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
loc_822E4388:
	// stw r28,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r28.u32);
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// bl 0x823260f8
	sub_823260F8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-26116
	r11.s64 = r11.s64 + -26116;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822E4288"))) PPC_WEAK_FUNC(sub_822E4288);
PPC_FUNC_IMPL(__imp__sub_822E4288) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-24148
	r11.s64 = r11.s64 + -24148;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r10,r10,-24212
	ctx.r10.s64 = ctx.r10.s64 + -24212;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-80
	ctx.r10.s64 = r11.s64 + -80;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e42f8
	if (cr0.eq) goto loc_822E42F8;
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
loc_822E42F8:
	// li r28,0
	r28.s64 = 0;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r28.u32);
	// beq 0x822e4320
	if (cr0.eq) goto loc_822E4320;
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
loc_822E4320:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r28,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e4344
	if (cr0.eq) goto loc_822E4344;
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
loc_822E4344:
	// lwz r27,56(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x822e4364
	if (cr0.eq) goto loc_822E4364;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e41f8
	sub_822E41F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822E4364:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r28,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e4388
	if (cr0.eq) goto loc_822E4388;
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
loc_822E4388:
	// stw r28,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r28.u32);
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// bl 0x823260f8
	sub_823260F8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-26116
	r11.s64 = r11.s64 + -26116;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822E43A8"))) PPC_WEAK_FUNC(sub_822E43A8);
PPC_FUNC_IMPL(__imp__sub_822E43A8) {
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
	// bl 0x822e1d10
	sub_822E1D10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E43D0"))) PPC_WEAK_FUNC(sub_822E43D0);
PPC_FUNC_IMPL(__imp__sub_822E43D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822e43fc
	if (cr6.eq) goto loc_822E43FC;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x822e4404
	goto loc_822E4404;
loc_822E43FC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822E4404:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x823260f8
	sub_823260F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E4420"))) PPC_WEAK_FUNC(sub_822E4420);
PPC_FUNC_IMPL(__imp__sub_822E4420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-52
	ctx.r3.s64 = ctx.r3.s64 + -52;
	// b 0x82325ac8
	sub_82325AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822E4430"))) PPC_WEAK_FUNC(sub_822E4430);
PPC_FUNC_IMPL(__imp__sub_822E4430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-84
	ctx.r3.s64 = ctx.r3.s64 + -84;
	// b 0x822e4450
	sub_822E4450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822E4440"))) PPC_WEAK_FUNC(sub_822E4440);
PPC_FUNC_IMPL(__imp__sub_822E4440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x822e38b0
	sub_822E38B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822E444C"))) PPC_WEAK_FUNC(sub_822E444C);
PPC_FUNC_IMPL(__imp__sub_822E444C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E4450"))) PPC_WEAK_FUNC(sub_822E4450);
PPC_FUNC_IMPL(__imp__sub_822E4450) {
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
	// bl 0x822e4288
	sub_822E4288(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e4488
	if (cr0.eq) goto loc_822E4488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822E4488:
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

__attribute__((alias("__imp__sub_822E44A4"))) PPC_WEAK_FUNC(sub_822E44A4);
PPC_FUNC_IMPL(__imp__sub_822E44A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E44A8"))) PPC_WEAK_FUNC(sub_822E44A8);
PPC_FUNC_IMPL(__imp__sub_822E44A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-23880(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23880);
	// mflr r12
	// bl 0x8239bce0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// li r23,1
	r23.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x822e4504
	if (cr6.eq) goto loc_822E4504;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// addi r11,r11,-23928
	r11.s64 = r11.s64 + -23928;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
loc_822E4504:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-26116
	r11.s64 = r11.s64 + -26116;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821bb3f0
	sub_821BB3F0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-24148
	r11.s64 = r11.s64 + -24148;
	// addi r10,r10,-24212
	ctx.r10.s64 = ctx.r10.s64 + -24212;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-80
	ctx.r10.s64 = r11.s64 + -80;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stw r25,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r25.u32);
	// stw r26,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r26.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r29.u32);
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stb r29,52(r30)
	PPC_STORE_U8(r30.u32 + 52, r29.u8);
	// stb r29,53(r30)
	PPC_STORE_U8(r30.u32 + 53, r29.u8);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e4594
	if (cr0.eq) goto loc_822E4594;
	// bl 0x822e40e0
	sub_822E40E0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x822e4598
	goto loc_822E4598;
loc_822E4594:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_822E4598:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r10,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// addi r4,r11,2792
	ctx.r4.s64 = r11.s64 + 2792;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-23952
	ctx.r4.s64 = r11.s64 + -23952;
	// stw r10,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// stw r9,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r9.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x823151e0
	sub_823151E0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-23976
	ctx.r4.s64 = r11.s64 + -23976;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r10,-26908
	ctx.r4.s64 = ctx.r10.s64 + -26908;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// bl 0x826910a0
	sub_826910A0(ctx, base);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// stfs f1,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 72, temp.u32);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,27708
	ctx.r4.s64 = r11.s64 + 27708;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r26,r11,27696
	r26.s64 = r11.s64 + 27696;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r22,32(r30)
	r22.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x8233cc78
	sub_8233CC78(ctx, base);
	// lis r24,-32127
	r24.s64 = -2105475072;
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// lwz r11,-9288(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -9288);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8237ef80
	sub_8237EF80(ctx, base);
	// li r3,196
	ctx.r3.s64 = 196;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
	// beq 0x822e4748
	if (cr0.eq) goto loc_822E4748;
	// lwz r11,-9288(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -9288);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r4,-9608(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x822b3c50
	sub_822B3C50(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r22,48(r30)
	r22.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b4db8
	sub_822B4DB8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// bl 0x8233b848
	sub_8233B848(ctx, base);
	// b 0x822e474c
	goto loc_822E474C;
loc_822E4748:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822E474C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r3,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// bl 0x82339d90
	sub_82339D90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e1e10
	sub_822E1E10(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r23,52(r30)
	PPC_STORE_U8(r30.u32 + 52, r23.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_822E44B0"))) PPC_WEAK_FUNC(sub_822E44B0);
PPC_FUNC_IMPL(__imp__sub_822E44B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// li r23,1
	r23.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x822e4504
	if (cr6.eq) goto loc_822E4504;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// addi r11,r11,-23928
	r11.s64 = r11.s64 + -23928;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
loc_822E4504:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-26116
	r11.s64 = r11.s64 + -26116;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821bb3f0
	sub_821BB3F0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-24148
	r11.s64 = r11.s64 + -24148;
	// addi r10,r10,-24212
	ctx.r10.s64 = ctx.r10.s64 + -24212;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-80
	ctx.r10.s64 = r11.s64 + -80;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stw r25,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r25.u32);
	// stw r26,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r26.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r29.u32);
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stb r29,52(r30)
	PPC_STORE_U8(r30.u32 + 52, r29.u8);
	// stb r29,53(r30)
	PPC_STORE_U8(r30.u32 + 53, r29.u8);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822e4594
	if (cr0.eq) goto loc_822E4594;
	// bl 0x822e40e0
	sub_822E40E0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x822e4598
	goto loc_822E4598;
loc_822E4594:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_822E4598:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r10,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// addi r4,r11,2792
	ctx.r4.s64 = r11.s64 + 2792;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-23952
	ctx.r4.s64 = r11.s64 + -23952;
	// stw r10,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// stw r9,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r9.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x823151e0
	sub_823151E0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-23976
	ctx.r4.s64 = r11.s64 + -23976;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r10,-26908
	ctx.r4.s64 = ctx.r10.s64 + -26908;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// bl 0x826910a0
	sub_826910A0(ctx, base);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// stfs f1,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 72, temp.u32);
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,27708
	ctx.r4.s64 = r11.s64 + 27708;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r26,r11,27696
	r26.s64 = r11.s64 + 27696;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r22,32(r30)
	r22.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x8233cc78
	sub_8233CC78(ctx, base);
	// lis r24,-32127
	r24.s64 = -2105475072;
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// lwz r11,-9288(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -9288);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8237ef80
	sub_8237EF80(ctx, base);
	// li r3,196
	ctx.r3.s64 = 196;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
	// beq 0x822e4748
	if (cr0.eq) goto loc_822E4748;
	// lwz r11,-9288(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -9288);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r4,-9608(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x822b3c50
	sub_822B3C50(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r22,48(r30)
	r22.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,-9608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9608);
	// bl 0x822b4db8
	sub_822B4DB8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// bl 0x8233b848
	sub_8233B848(ctx, base);
	// b 0x822e474c
	goto loc_822E474C;
loc_822E4748:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822E474C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r3,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// bl 0x82339d90
	sub_82339D90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e1e10
	sub_822E1E10(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r23,52(r30)
	PPC_STORE_U8(r30.u32 + 52, r23.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_822E478C"))) PPC_WEAK_FUNC(sub_822E478C);
PPC_FUNC_IMPL(__imp__sub_822E478C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e47c0
	if (cr0.eq) goto loc_822E47C0;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r11,84
	ctx.r3.s64 = r11.s64 + 84;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_822E47C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E47D0"))) PPC_WEAK_FUNC(sub_822E47D0);
PPC_FUNC_IMPL(__imp__sub_822E47D0) {
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
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x822e1d10
	sub_822E1D10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E47F8"))) PPC_WEAK_FUNC(sub_822E47F8);
PPC_FUNC_IMPL(__imp__sub_822E47F8) {
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
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x823260f8
	sub_823260F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E4824"))) PPC_WEAK_FUNC(sub_822E4824);
PPC_FUNC_IMPL(__imp__sub_822E4824) {
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

__attribute__((alias("__imp__sub_822E484C"))) PPC_WEAK_FUNC(sub_822E484C);
PPC_FUNC_IMPL(__imp__sub_822E484C) {
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

__attribute__((alias("__imp__sub_822E4874"))) PPC_WEAK_FUNC(sub_822E4874);
PPC_FUNC_IMPL(__imp__sub_822E4874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822E4878"))) PPC_WEAK_FUNC(sub_822E4878);
PPC_FUNC_IMPL(__imp__sub_822E4878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E4898"))) PPC_WEAK_FUNC(sub_822E4898);
PPC_FUNC_IMPL(__imp__sub_822E4898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// addi r11,r11,-23780
	r11.s64 = r11.s64 + -23780;
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lwz r11,476(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 476);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stb r10,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r10.u8);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822E48D8"))) PPC_WEAK_FUNC(sub_822E48D8);
PPC_FUNC_IMPL(__imp__sub_822E48D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822e4900
	if (cr0.eq) goto loc_822E4900;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
loc_822E4900:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

